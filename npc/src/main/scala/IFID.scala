package IFID

import chisel3._
import define.function._
import define.MACRO._

class Ctrl_Input extends Bundle {
    val ifid_flush_en  = Input(Bool())
    val ifid_stall_en  = Input(Bool())
}

class IFID_Input extends Bundle {
    val inst  = Input(UInt(32.W))
    val pc    = Input(UInt(64.W))
}

class IFID extends Module {  
    val if_ifid   = IO(new IFID_Input())
    val ifid_id   = IO(Flipped(new IFID_Input()))
    val ctrl_ifid = IO(new Ctrl_Input())

    ifid_id.inst := dff_set(ctrl_ifid.ifid_flush_en, ctrl_ifid.ifid_stall_en, 32.U, INST_NOP, if_ifid.inst)
    ifid_id.pc   := dff_set(ctrl_ifid.ifid_flush_en, ctrl_ifid.ifid_stall_en, 64.U, 0.U(64.W), if_ifid.inst)
}