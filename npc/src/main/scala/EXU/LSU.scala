package EXU.LSU

import chisel3._
import chisel3.util._
import define.MACRO._
import define.function._

class ALU_LSU_Input extends Bundle {
    val func3           = Input(UInt(3.W))
    val pc              = Input(UInt(64.W))
    val inst_isload     = Input(Bool())
    val inst_isstore    = Input(Bool())
    val rd_waddr        = Input(UInt(5.W))
    val mem_ren         = Input(Bool())
    val mem_raddr       = Input(UInt(64.W))
    val mem_wen         = Input(Bool())
    val mem_wmask       = Input(Vec(8, Bool()))
    val mem_wdata       = Input(UInt(64.W))
    val mem_waddr       = Input(UInt(64.W))
}

// class LSU_CTRL_Output extends Bundle {
//     val ls_inst_isload  = Output(Bool())
//     val ls_inst_isstore = Output(Bool())
// }

class LSU_EXU_Output extends Bundle {
    val pc             = Output(UInt(64.W))
    val rd_wen          = Output(Bool()) 
    val rd_waddr        = Output(UInt(5.W))
    val rd_wdata        = Output(UInt(64.W))
}

class LSU_Redirect_Output extends Bundle {
    val rd_wen         = Output(Bool())
    val rd_waddr       = Output(UInt(64.W))
    val rd_wdata       = Output(UInt(64.W))
}

class LSU_MCIF extends Bundle{
    val mem_ren    = Output(Bool())
    val mem_raddr  = Output(UInt(64.W))
    val mem_rdata  = Input(UInt(64.W))

    val mem_wen    = Output(Bool())
    val mem_waddr  = Output(UInt(64.W))
    val mem_wdata  = Output(UInt(64.W))
    val mem_wmask  = Output(Vec(8, Bool()))
}


class LSU extends Module {
    val al_ls       = IO(new ALU_LSU_Input())
    // val ls_ctrl     = IO(new LSU_CTRL_Output())
    val ls_redirect = IO(new LSU_Redirect_Output())
    val ls_ex       = IO(new LSU_EXU_Output())
    
    val ls_mcif     = IO(new LSU_MCIF())

    
    val rd_wdata = RegInit(0.U(64.W))
    rd_wdata := Mux(al_ls.inst_isload, ls_mcif.mem_rdata, 0.U)

    // to ex
    ls_ex.pc := al_ls.pc   
    ls_ex.rd_wdata := MuxCase(0.U, Seq(
        (al_ls.func3 === INST_LB )  ->  SEXT(rd_wdata(7, 0)),
        (al_ls.func3 === INST_LH )  ->  SEXT(rd_wdata(15, 0)),
        (al_ls.func3 === INST_LW )  ->  SEXT(rd_wdata(31, 0)),
        (al_ls.func3 === INST_LD )  ->  SEXT(rd_wdata),
        (al_ls.func3 === INST_LBU)  ->  ZEXT(rd_wdata(7, 0)),
        (al_ls.func3 === INST_LHU)  ->  ZEXT(rd_wdata(15, 0)),
        (al_ls.func3 === INST_LWU)  ->  ZEXT(rd_wdata(31, 0))
    ))// load
    ls_ex.rd_waddr := al_ls.rd_waddr   
    ls_ex.rd_wen   := al_ls.inst_isload

    // to redirect
    ls_redirect.rd_wdata := ls_ex.rd_wdata
    ls_redirect.rd_waddr := ls_ex.rd_waddr   
    ls_redirect.rd_wen   := ls_ex.rd_wen  
    
    // to mcif
    ls_mcif.mem_ren     := al_ls.mem_ren
    ls_mcif.mem_raddr   := al_ls.mem_raddr
    ls_mcif.mem_wen     := al_ls.mem_wen
    ls_mcif.mem_waddr   := al_ls.mem_waddr
    ls_mcif.mem_wdata   := al_ls.mem_wdata
    ls_mcif.mem_wmask   := al_ls.mem_wmask
}
