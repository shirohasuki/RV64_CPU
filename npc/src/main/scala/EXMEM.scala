package EXMEM

import chisel3._
import define.function._
import define.MACRO._

class Ctrl_Input extends Bundle {
    val exmem_flush_en  = Input(Bool())
    val exmem_stall_en  = Input(Bool())
}

class EXMEM_Input extends Bundle {
    // mem use
    val inst            = Input(UInt(32.W))
    val pc              = Input(UInt(64.W))
    val mem_ren         = Input(Bool())
    val mem_raddr       = Input(UInt(64.W))
    val mem_wen         = Input(Bool())
    val mem_waddr       = Input(UInt(64.W))
    val mem_wdata       = Input(UInt(64.W))
    val mem_wmask       = Input(UInt(8.W))
    val ex_inst_isload  = Input(Bool())
    val ex_inst_isstore = Input(Bool())

    // wb use
    val rd_wdata  = Input(UInt(64.W))
    val rd_waddr  = Input(UInt(64.W))
    val rd_wen    = Input(Bool())
}

class EXMEM extends Module {  
    val ex_exmem   = IO(new EXMEM_Input())
    val exmem_mem  = IO(Flipped(new EXMEM_Input()))
    val ctrl_exmem = IO(new Ctrl_Input())

    exmem_mem.inst            := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 32.U, INST_NOP,  ex_exmem.inst           )
    exmem_mem.pc              := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 64.U, 0.U(64.W), ex_exmem.pc             )
    exmem_mem.mem_ren         := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 1.U,  0.U(64.W), ex_exmem.mem_ren        )
    exmem_mem.mem_raddr       := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 64.U, 0.U(64.W), ex_exmem.mem_raddr      )
    exmem_mem.mem_wen         := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 1.U,  false.B,   ex_exmem.mem_wen        )
    exmem_mem.mem_waddr       := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 64.U, 0.U(64.W), ex_exmem.mem_waddr      )
    exmem_mem.mem_wdata       := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 64.U, 0.U(64.W), ex_exmem.mem_wdata      )
    exmem_mem.mem_wmask       := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 8.U,  0.U(8.W),  ex_exmem.mem_wmask      )
    exmem_mem.ex_inst_isload  := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 1.U,  false.B,   ex_exmem.ex_inst_isload )
    exmem_mem.ex_inst_isstore := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 1.U,  false.B,   ex_exmem.ex_inst_isstore)
    exmem_mem.rd_wdata        := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 64.U, 0.U(64.W), ex_exmem.rd_wdata       )
    exmem_mem.rd_waddr        := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 64.U, 0.U(64.W), ex_exmem.rd_waddr       )
    exmem_mem.rd_wen          := dff_set(ctrl_exmem.exmem_flush_en, ctrl_exmem.exmem_stall_en, 1.U,  false.B,   ex_exmem.rd_wen         )
}

