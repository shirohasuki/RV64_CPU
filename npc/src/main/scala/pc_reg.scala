package pc_reg

import chisel3._
import chisel3.util._
import chisel3.stage._

class PcReg extends Module {
    val io = IO(new Bundle {
        val pc_pc_if = Output(UInt(64.W))
    })

    val pc   = RegInit("h80000000".U(64.W))
    val snpc = Reg(Uint(64.W))
    // val pc   = Reg(Uint(64.W))
    pc   := snpc
    snpc := pc + 4.U 
}
