package IDEX

import chisel3._

class IDEX_Input extends Bundle {
    val inst        = Output(UInt(32.W))
    val pc          = Output(UInt(64.W))
    val op1         = Output(UInt(64.W))
    val op2         = Output(UInt(64.W))
    val rd_addr     = Output(UInt(5.W))
    val rd_wen      = Output(Bool())
    val base_addr   = Output(UInt(64.W))
    val offset_addr = Output(UInt(64.W))
}

class IFU extends Module {  
    val id_idex = IO(new IDEX_Input())
    val idex_ex = IO(new Flipped(new IDEX_Input()))



}
