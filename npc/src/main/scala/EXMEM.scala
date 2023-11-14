/*************************************************************************
    > File Name: EXLS.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-22 18:38:22
    > Description: 
*************************************************************************/

package EXMEM

import chisel3._
import define.function._
import define.MACRO._

class Ctrl_Input extends Bundle {
    val exmem_flush_en  = Input(Bool())
    val exmem_stall_en  = Input(Bool())
}

class EX_EXMEM_Input extends Bundle {
    val pc          = Input(UInt(64.W))
    val mem_en      = Input(Bool())
    val func3       = Input(UInt(3.W))
    val rd_waddr    = Input(UInt(64.W))
    val rd_wen      = Input(Bool())
}

class EXMEM extends Module {  
    val ex_exmem   = IO(new EXMEM_Input())
    val exmem_mem  = IO(Flipped(new EXMEM_Input()))
    val ctrl_exmem = IO(new Ctrl_Input())

    exmem_mem.pc        := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 64.U, INST_NOP,  ex_exmem.pc       )
    exmem_mem.mem_en    := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 1.U,  false.B,   ex_exmem.mem_en   )
    exmem_mem.func3     := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 3.U,  0.U(3.W),  ex_exmem.func3    )
    exmem_mem.rd_wen    := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 1.U,  false.B,   ex_exmem.rd_wen   )
    exmem_mem.rd_waddr  := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 64.U, 0.U(64.W), ex_exmem.rd_waddr )
}

