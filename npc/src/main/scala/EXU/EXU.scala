/*************************************************************************
    > File Name: EXU.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-24 22:24:14
    > Description: 
*************************************************************************/

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

class EXU_EXMEM_Output extends Bundle {
    // val mem_en    = Output(Bool())
    val pc           = Output(UInt(64.W))
    val func3        = Output(UInt(3.W))
    // val rd_wdata  = Output(UInt(64.W))
    val rd_waddr  = Output(UInt(64.W))
    val rd_wen    = Output(Bool())
}

class EXU_EXWB_Output extends Bundle {
    val mem_en    = Output(Bool())
    val pc        = Output(UInt(64.W))
    val rd_wdata  = Output(UInt(64.W))
    val rd_waddr  = Output(UInt(64.W))
    val rd_wen    = Output(Bool())
}

class EXU_CTRL_Output extends Bundle {
    val inst_isload     = Output(Bool())
    val inst_isstore    = Output(Bool())
    val typej_jump_en   = Output(Bool())
    val typej_jump_addr = Output(UInt(64.W))
}

class EXU_Rename_Output extends Bundle {
    val rd_wen         = Output(Bool())
    val rd_waddr       = Output(UInt(64.W))
    val rd_wdata       = Output(UInt(64.W))
}

class EXU_DCACHE_Output extends Bundle{
    val dacache_ren    = Output(Bool())
    val dacache_raddr  = Output(UInt(64.W))
    val dacache_wen    = Output(Bool())
    val dacache_waddr  = Output(UInt(64.W))
    val dacache_wdata  = Output(UInt(64.W))
    val dacache_wmask  = Output(UInt(8.W))
    // val mem_wmask  = Output(Vec(8, Bool()))
}

class EXU extends Module {
    val idex_ex     = IO(new IDEX_EXU_Input()) 
    val ex_dcache   = IO(new EXU_DCACHE_Output) 
    val ex_exwb     = IO(new EXU_EXWB_Output())
    val ex_exmem     = IO(new EXU_EXMEM_Output())
    val ex_ctrl     = IO(new EXU_CTRL_Output())
    val ex_rename   = IO(new EXU_Rename_Output())
    
    val ALU = Module(new ALU())
    idex_ex         <>  ALU.ex_al // ???,奇了怪了怎么相同方向信号反而又可以了,我觉得可能是内部子单元连线方向一致

    val LSU = Module(new LSU())
    ALU.al_ls       <>  LSU.al_ls

    // ex to exwb 
    ex_exwb.pc          := idex_ex.pc
    ex_exwb.mem_en      := ALU.al_ex.inst_isload
    ex_exwb.rd_wen      := ALU.al_ex.rd_wen  
    ex_exwb.rd_waddr    := ALU.al_ex.rd_waddr
    ex_exwb.rd_wdata    := ALU.al_ex.rd_wdata

    // ex to exmem 
    ex_exmem.pc          := idex_ex.pc
    ex_exmem.func3       := idex_ex.func3
    ex_exmem.rd_waddr    := ALU.al_ex.rd_waddr
    ex_exmem.rd_wen      := ALU.al_ex.rd_wen  
    ex_exmem.rd_waddr    := ALU.al_ex.rd_waddr
    // ex_exmem.rd_wdata    := LSU.ls_ex.rd_wdata

    // ex to rename
    ex_rename.rd_wen      := Mux(ALU.al_ex.inst_isload | ALU.al_ex.inst_isstore, LSU.ls_ex.rd_wen,   ALU.al_ex.rd_wen)
    ex_rename.rd_waddr    := Mux(ALU.al_ex.inst_isload | ALU.al_ex.inst_isstore, LSU.ls_ex.rd_waddr, ALU.al_ex.rd_waddr)
    ex_rename.rd_wdata    := Mux(ALU.al_ex.inst_isload | ALU.al_ex.inst_isstore, LSU.ls_ex.rd_wdata, ALU.al_ex.rd_wdata)
    
    // ex to ctrl 
    ex_ctrl.inst_isload      := ALU.al_ex.inst_isload
    ex_ctrl.inst_isstore     := ALU.al_ex.inst_isstore
    ex_ctrl.typej_jump_en    := ALU.al_ex.typej_jump_en
    ex_ctrl.typej_jump_addr  := ALU.al_ex.typej_jump_addr

    // ex to dcache
    ex_dcache <> LSU.ls_dcache
}



