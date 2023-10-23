package IFID

import chisel3._


class IFID_Input extends Bundle {
    val inst  = Input(UInt(32.W))
    val pc    = Input(UInt(64.W))
}

class IFU extends Module {  
    val if_ifid = IO(new IFID_Input())
    val ifid_id = IO(new Flipped(new IFID_Input()))



}