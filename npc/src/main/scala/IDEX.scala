package IDEX

import chisel3._
import define.function._

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
}

class IDEX extends Module {  
    val io = IO(new Bundle{
        val id_idex   = new IDEX_Input()
        val idex_ex   = Flipped(new IDEX_Input())
        val ctrl_idex = new Ctrl_Input()
    })
    io.idex_ex.inst        := dff_set(io.ctrl_idex.idex_flush_en, io.ctrl_idex.idex_stall_en, 32.U,  "h00000013".U(32.W), io.id_idex.inst       )
    io.idex_ex.pc          := dff_set(io.ctrl_idex.idex_flush_en, io.ctrl_idex.idex_stall_en, 64.U,  0.U(64.W),           io.id_idex.pc         )
    io.idex_ex.op1         := dff_set(io.ctrl_idex.idex_flush_en, io.ctrl_idex.idex_stall_en, 64.U,  0.U(64.W),           io.id_idex.op1        )
    io.idex_ex.op2         := dff_set(io.ctrl_idex.idex_flush_en, io.ctrl_idex.idex_stall_en, 64.U,  0.U(64.W),           io.id_idex.op2        )
    io.idex_ex.rd_addr     := dff_set(io.ctrl_idex.idex_flush_en, io.ctrl_idex.idex_stall_en, 5.U,   0.U(5.W),            io.id_idex.rd_addr    )
    io.idex_ex.rd_wen      := dff_set(io.ctrl_idex.idex_flush_en, io.ctrl_idex.idex_stall_en, 1.U,   0.U(1.W),            io.id_idex.rd_wen     )
    io.idex_ex.base_addr   := dff_set(io.ctrl_idex.idex_flush_en, io.ctrl_idex.idex_stall_en, 64.U,  0.U(64.W),           io.id_idex.base_addr  )
    io.idex_ex.offset_addr := dff_set(io.ctrl_idex.idex_flush_en, io.ctrl_idex.idex_stall_en, 64.U,  0.U(64.W),           io.id_idex.offset_addr)

}
