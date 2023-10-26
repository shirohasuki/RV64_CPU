package IDEX

import chisel3._
import define.function._
import define.MACRO._

class Ctrl_Input extends Bundle {
    val idex_flush_en  = Input(Bool())
    val idex_stall_en  = Input(Bool())
}

class IDEX_Input extends Bundle {
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

class IDEX extends Module {  
    val id_idex   = IO(new IDEX_Input())
    val idex_ex   = IO(Flipped(new IDEX_Input()))
    val ctrl_idex = IO(new Ctrl_Input())

    idex_ex.inst        := dff_set(ctrl_idex.idex_flush_en, ctrl_idex.idex_stall_en, 32.U,  INST_NOP,  id_idex.inst       )
    idex_ex.pc          := dff_set(ctrl_idex.idex_flush_en, ctrl_idex.idex_stall_en, 64.U,  0.U(64.W), id_idex.pc         )
    idex_ex.op1         := dff_set(ctrl_idex.idex_flush_en, ctrl_idex.idex_stall_en, 64.U,  0.U(64.W), id_idex.op1        )
    idex_ex.op2         := dff_set(ctrl_idex.idex_flush_en, ctrl_idex.idex_stall_en, 64.U,  0.U(64.W), id_idex.op2        )
    idex_ex.rd_addr     := dff_set(ctrl_idex.idex_flush_en, ctrl_idex.idex_stall_en, 5.U,   0.U(5.W),  id_idex.rd_addr    )
    idex_ex.rd_wen      := dff_set(ctrl_idex.idex_flush_en, ctrl_idex.idex_stall_en, 1.U,   0.U(1.W),  id_idex.rd_wen     )
    idex_ex.base_addr   := dff_set(ctrl_idex.idex_flush_en, ctrl_idex.idex_stall_en, 64.U,  0.U(64.W), id_idex.base_addr  )
    idex_ex.offset_addr := dff_set(ctrl_idex.idex_flush_en, ctrl_idex.idex_stall_en, 64.U,  0.U(64.W), id_idex.offset_addr)
    idex_ex.opcode      := dff_set(ctrl_idex.idex_flush_en, ctrl_idex.idex_stall_en, 7.U,   0.U(7.W),  id_idex.opcode     )
    idex_ex.func3       := dff_set(ctrl_idex.idex_flush_en, ctrl_idex.idex_stall_en, 3.U,   0.U(3.W),  id_idex.func3      )
    idex_ex.func7       := dff_set(ctrl_idex.idex_flush_en, ctrl_idex.idex_stall_en, 7.U,   0.U(7.W),  id_idex.func7      )
}
