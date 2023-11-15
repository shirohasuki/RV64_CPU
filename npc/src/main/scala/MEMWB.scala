/*************************************************************************
    > File Name: MEMWB.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-11-14 17:40:44
    > Description: 
*************************************************************************/


package MEMWB

import chisel3._
import define.function._
import define.MACRO._

class Ctrl_Input extends Bundle {
    val memwb_flush_en  = Input(Bool())
    val memwb_stall_en  = Input(Bool())
}

class MEM_MEMWB_Input extends Bundle {
    val pc          = Input(UInt(64.W))
    val mem_en      = Input(Bool())
    val rd_wdata    = Input(UInt(64.W))
    val rd_waddr    = Input(UInt(64.W))
    val rd_wen      = Input(Bool())
}

class MEMWB extends Module {  
    val mem_memwb  = IO(new MEM_MEMWB_Input())
    val memwb_wb   = IO(Flipped(new MEM_MEMWB_Input()))
    val ctrl_memwb = IO(new Ctrl_Input())

    memwb_wb.pc          := dff_set(ctrl_memwb.memwb_flush_en, ctrl_memwb.memwb_stall_en, 64.U, 0.U(64.W), mem_memwb.pc      )
    memwb_wb.mem_en := dff_set(ctrl_memwb.memwb_flush_en, ctrl_memwb.memwb_stall_en, 1.U,  false.B,   mem_memwb.mem_en  )
    memwb_wb.rd_wdata    := dff_set(ctrl_memwb.memwb_flush_en, ctrl_memwb.memwb_stall_en, 64.U, 0.U(64.W), mem_memwb.rd_wdata)
    memwb_wb.rd_waddr    := dff_set(ctrl_memwb.memwb_flush_en, ctrl_memwb.memwb_stall_en, 64.U, 0.U(64.W), mem_memwb.rd_waddr)
    memwb_wb.rd_wen      := dff_set(ctrl_memwb.memwb_flush_en, ctrl_memwb.memwb_stall_en, 1.U,  false.B,   mem_memwb.rd_wen  )
}
