package EXWB

import chisel3._
import define.function._
import define.MACRO._

class Ctrl_Input extends Bundle {
    val lswb_flush_en  = Input(Bool())
    val lswb_stall_en  = Input(Bool())
}

class EXU_WBU_Input extends Bundle {
    val pc              = Input(UInt(64.W))
    val rd_wdata        = Input(UInt(64.W))
    val rd_waddr        = Input(UInt(64.W))
    val rd_wen          = Input(Bool())
}

class EXWB extends Module {  
    val ex_exwb  = IO(new EXU_WBU_Input())
    val exwb_wb   = IO(Flipped(new EXU_WBU_Input()))
    val ctrl_lswb = IO(new Ctrl_Input())

    exwb_wb.pc       := dff_set(ctrl_lswb.lswb_flush_en, ctrl_lswb.lswb_stall_en, 64.U, 0.U(64.W), ex_exwb.pc      )
    exwb_wb.rd_wdata := dff_set(ctrl_lswb.lswb_flush_en, ctrl_lswb.lswb_stall_en, 64.U, 0.U(64.W), ex_exwb.rd_wdata)
    exwb_wb.rd_waddr := dff_set(ctrl_lswb.lswb_flush_en, ctrl_lswb.lswb_stall_en, 1.U,  0.U(64.W), ex_exwb.rd_waddr)
    exwb_wb.rd_wen   := dff_set(ctrl_lswb.lswb_flush_en, ctrl_lswb.lswb_stall_en, 64.U, false.B,   ex_exwb.rd_wen  )
}

