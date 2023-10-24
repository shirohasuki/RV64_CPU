package IFID

import chisel3._
import define.function._


class Ctrl_Input extends Bundle {
    val flush_flag  = Input(Bool())
    val stall_flag  = Input(Bool())
}

class IFID_Input extends Bundle {
    val inst  = Input(UInt(32.W))
    val pc    = Input(UInt(64.W))
}

class IFID extends Module {  
    val if_ifid   = IO(new IFID_Input())
    val ifid_id   = IO(Flipped(new IFID_Input()))
    val ctrl_ifid = IO(new Ctrl_Input())

    ifid_id.inst := dff_set(ctrl_ifid.flush_flag, ctrl_ifid.stall_flag, 32.U, "h00000013".U(32.W), if_ifid.inst)
    ifid_id.pc   := dff_set(ctrl_ifid.flush_flag, ctrl_ifid.stall_flag, 64.U, 0.U(64.W), if_ifid.inst)
}