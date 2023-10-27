package ROM

import chisel3._
import chisel3.util._
import chisel3.stage._

class ROM extends Module {
    val if_rom = IO(new Bundle {
        val pc   = Input(UInt(64.W))
        val inst = Output(UInt(32.W))
    })
    
    val mem = Mem(4096, UInt(64.W))
    // mem("h80000000".U) := "00000010011000000000110110010011".U // I ADDI
    // mem("h80000004".U) := "00000011011000000000111000010011".U // I ADDI
    // mem("h80000008".U) := "00000001110011011000111010110011".U // R ADD
    if_rom.inst := Mux(if_rom.pc(2) === 0.U, mem.read(if_rom.pc >> 2)(31, 0), mem.read(if_rom.pc >> 2)(63, 32))
}
