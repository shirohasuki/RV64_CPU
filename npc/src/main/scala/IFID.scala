package IFID

import chisel3._


// def dff_set(flush_flag_i: UInt(1.W), stall_flag_i: UInt(1.W), DataWidth: UInt(6.W), default: UInt(DataWidth.W), data_i: UInt(DataWidth.W)): UInt = {


class IFID_Input extends Bundle {
    val inst  = Input(UInt(32.W))
    val pc    = Input(UInt(64.W))
}

class IFID extends Module {  
    val if_ifid = IO(new IFID_Input())
    val ifid_id = IO(Flipped(new IFID_Input()))

    // val ifid_id = IO(new Bundle {
        // val ifid_id = Flipped(new FetchDecodeIO())
    // })

    def dff_set(flush_flag_i: UInt, stall_flag_i: UInt, DataWidth: UInt, default: UInt, data_i: UInt): UInt = {
        val data_o = RegInit(default)
        data_o := Mux(flush_flag_i === 1.U, default, 
                      Mux(stall_flag_i === 1.U, data_o, data_i))
        data_o
    }

    ifid_id.inst := dff_set(0.U, 0.U, 32.U, "h00000013".U(32.W), if_ifid.inst)
    ifid_id.pc   := dff_set(0.U, 0.U, 64.U, 0.U(64.W), if_ifid.inst)
}