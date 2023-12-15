/*************************************************************************
    > File Name: EXWB.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-22 18:38:35
    > Description: 
*************************************************************************/

package EXWB

import chisel3._
import chisel3.util._

import define.function._
import define.MACRO._

class Ctrl_Input extends Bundle {
    val exwb_flush_en  = Input(Bool())
    val exwb_stall_en  = Input(Bool())
}

class EXU_EXWB_Input extends Bundle {
    val pc              = Input(UInt(64.W))

    val rd_wdata        = Input(UInt(64.W))
    val rd_waddr        = Input(UInt(64.W))
    val rd_wen          = Input(Bool())
}

class EXWB extends Module {  
    val ex_exwb   = IO(Flipped(Valid(new EXU_EXWB_Input)))
    val exwb_wb   = IO(Valid(new EXU_EXWB_Input))
    val ctrl_exwb = IO(new Ctrl_Input)

    exwb_wb.valid         := dff_set(ctrl_exwb.exwb_flush_en, ctrl_exwb.exwb_stall_en, 1.U, false.B,    ex_exwb.valid  )
    exwb_wb.bits.pc       := dff_set(ctrl_exwb.exwb_flush_en | ~ ex_exwb.valid, ctrl_exwb.exwb_stall_en, 64.U, 0.U(64.W), ex_exwb.bits.pc      )
    exwb_wb.bits.rd_wdata := dff_set(ctrl_exwb.exwb_flush_en | ~ ex_exwb.valid, ctrl_exwb.exwb_stall_en, 64.U, 0.U(64.W), ex_exwb.bits.rd_wdata)
    exwb_wb.bits.rd_waddr := dff_set(ctrl_exwb.exwb_flush_en | ~ ex_exwb.valid, ctrl_exwb.exwb_stall_en, 64.U, 0.U(64.W), ex_exwb.bits.rd_waddr)
    exwb_wb.bits.rd_wen   := dff_set(ctrl_exwb.exwb_flush_en | ~ ex_exwb.valid, ctrl_exwb.exwb_stall_en, 1.U, false.B,    ex_exwb.bits.rd_wen  )
}

