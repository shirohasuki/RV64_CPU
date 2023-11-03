package EXU.EXU

import chisel3._
import chisel3.util._
import chisel3.stage._

import EXU.ALU._
import EXU.LSU._


class IDEX_EXU_Input extends Bundle {
    val inst        = Input(UInt(32.W))
    val pc          = Input(UInt(64.W))
    val op1         = Input(UInt(64.W))
    val op2         = Input(UInt(64.W))
    val rd_addr     = Input(UInt(5.W))
    val rd_wen      = Input(Bool())
    val base_addr   = Input(UInt(64.W))
    val offset_addr = Input(UInt(64.W))
    val opcode      = Input(UInt(7.W))
    val func3       = Input(UInt(3.W))
    val func7       = Input(UInt(7.W))
}

class ALU_EXU_Input extends Bundle {
    val rd_wen          = Input(Bool()) 
    val rd_waddr        = Input(UInt(5.W))
    val rd_wdata        = Input(UInt(64.W))
    val inst_isload     = Input(Bool())
    val inst_isstore    = Input(Bool())
    val typej_jump_en   = Input(Bool())
    val typej_jump_addr = Input(UInt(64.W))
}

// class LSU_EXU_Input extends Bundle {
//     val rd_wen          = Input(Bool()) 
//     val rd_waddr        = Input(UInt(5.W))
//     val rd_wdata        = Input(UInt(64.W))
// }

class EXU_EXWB_Output extends Bundle {
    val pc        = Output(UInt(64.W))
    val rd_wdata  = Output(UInt(64.W))
    val rd_waddr  = Output(UInt(64.W))
    val rd_wen    = Output(Bool())
}

class EXU_CTRL_Output extends Bundle {
    val inst_isload  = Output(Bool())
    val inst_isstore = Output(Bool())
    val typej_jump_en   = Output(Bool())
    val typej_jump_addr = Output(UInt(64.W))
}

class EXU_Redirect_Output extends Bundle {
    val rd_wen         = Output(Bool())
    val rd_waddr       = Output(UInt(64.W))
    val rd_wdata       = Output(UInt(64.W))
}

class EXU_MCIF extends Bundle{
    val mem_ren    = Output(Bool())
    val mem_raddr  = Output(UInt(64.W))
    val mem_rdata  = Input(UInt(64.W))

    val mem_wen    = Output(Bool())
    val mem_waddr  = Output(UInt(64.W))
    val mem_wdata  = Output(UInt(64.W))
    val mem_wmask  = Output(Vec(8, Bool()))
}


class EXU extends Module {
    val idex_ex     = IO(new IDEX_EXU_Input())  
    // val ex_al       = IO(Flipped(new IDEX_EXU_Input()))  // flip之后直接给alu
    // val ex_al       = IO(new EXU_ALU_Output())  
    // val al_ex       = IO(new ALU_EXU_Input())
    // val ls_ex       = IO(new LSU_EXU_Input())
    val ex_mcif     = IO(new EXU_MCIF())
    val ex_exwb     = IO(new EXU_EXWB_Output())
    val ex_ctrl     = IO(new EXU_CTRL_Output())
    val ex_redirect = IO(new EXU_Redirect_Output())
    
    val ALU = Module(new ALU())
    idex_ex       <>  ALU.ex_al // ???,奇了怪了怎么相同方向信号反而又可以了,我觉得可能是内部子单元连线方向一致
    // ALU.al_ex   <>  al_ex

    val LSU = Module(new LSU())
    ALU.al_ls   <>  LSU.al_ls
    LSU.ls_mcif <>  ex_mcif 

    // ex to exwb 
    ex_exwb.pc          := idex_ex.pc
    ex_exwb.rd_wen      := Mux(ALU.al_ex.inst_isload | ALU.al_ex.inst_isstore, LSU.ls_ex.rd_wen  , ALU.al_ex.rd_wen  )
    ex_exwb.rd_waddr    := Mux(ALU.al_ex.inst_isload | ALU.al_ex.inst_isstore, LSU.ls_ex.rd_waddr, ALU.al_ex.rd_waddr)
    ex_exwb.rd_wdata    := Mux(ALU.al_ex.inst_isload | ALU.al_ex.inst_isstore, LSU.ls_ex.rd_wdata, ALU.al_ex.rd_wdata)


    // ex to redirect
    ex_redirect.rd_wen      := Mux(ALU.al_ex.inst_isload | ALU.al_ex.inst_isstore, LSU.ls_ex.rd_wen,   ALU.al_ex.rd_wen)
    ex_redirect.rd_waddr    := Mux(ALU.al_ex.inst_isload | ALU.al_ex.inst_isstore, LSU.ls_ex.rd_waddr, ALU.al_ex.rd_waddr)
    ex_redirect.rd_wdata    := Mux(ALU.al_ex.inst_isload | ALU.al_ex.inst_isstore, LSU.ls_ex.rd_wdata, ALU.al_ex.rd_wdata)
    
    // ex to ctrl 
    ex_ctrl.inst_isload      := ALU.al_ex.inst_isload
    ex_ctrl.inst_isstore     := ALU.al_ex.inst_isstore
    ex_ctrl.typej_jump_en    := ALU.al_ex.typej_jump_en
    ex_ctrl.typej_jump_addr  := ALU.al_ex.typej_jump_addr
}
