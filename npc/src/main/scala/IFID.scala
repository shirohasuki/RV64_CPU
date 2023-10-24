package IFID

import chisel3._
import define.function._


class Ctrl_Input extends Bundle {
    val ifid_flush_en  = Input(Bool())
    val ifid_stall_en  = Input(Bool())
}

class IFID_Input extends Bundle {
    val inst  = Input(UInt(32.W))
    val pc    = Input(UInt(64.W))
}

class IFID extends Module {  
    val io = IO(new Bundle {
        val if_ifid   = new IFID_Input()
        val ifid_id   = Flipped(new IFID_Input())
        val ctrl_ifid = new Ctrl_Input()
    })

    io.ifid_id.inst := dff_set(io.ctrl_ifid.ifid_flush_en, io.ctrl_ifid.ifid_stall_en, 32.U, "h00000013".U(32.W), io.if_ifid.inst)
    io.ifid_id.pc   := dff_set(io.ctrl_ifid.ifid_flush_en, io.ctrl_ifid.ifid_stall_en, 64.U, 0.U(64.W),           io.if_ifid.inst)
}