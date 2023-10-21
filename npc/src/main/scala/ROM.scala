package ROM

import chisel3._
import chisel3.util._
import chisel3.stage._

class ROM extends Module {
    val io = IO(new Bundle {
        val pc   = Input(UInt(64.W))
        val inst = Output(UInt(32.W))
    })
    
    val mem = SyncReadMem(1024, Uint(32.W))
    mem("h80000000".U) := "00000010011000000000110110010011".U // I ADDI
    mem("h80000004".U) := "00000011011000000000111000010011".U // I ADDI
    mem("h80000008".U) := "00000001110011011000111010110011".U // R ADD
    io.inst := mem.read(io.pc)
}
