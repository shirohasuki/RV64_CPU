package PcReg

import chisel3._
import chisel3.util._
import chisel3.stage._

class PcReg extends Module {
    val pc_if = IO(new Bundle {
        val pc = Output(UInt(64.W))
    })

    val pc   = RegInit("h80000000".U(64.W))
    val snpc = Reg(UInt(64.W))
    snpc := pc + 4.U 
    
    pc_if.pc   := snpc

}
