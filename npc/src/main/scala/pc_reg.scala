package PcReg

import chisel3._
import chisel3.util._
import chisel3.stage._

class PcReg extends Module {
    val pc_if = IO(new Bundle {
        val pc_pc_if = Output(UInt(64.W))
    })

    val pc_pc_if   = RegInit("h80000000".U(64.W))
    val snpc_pc_if = Reg(UInt(64.W))
    // val pc   = Reg(Uint(64.W))
    pc_pc_if   := snpc_pc_if
    snpc_pc_if := pc_pc_if + 4.U 
}
