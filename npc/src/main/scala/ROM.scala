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

    if_rom.inst := Mux(if_rom.pc(2) === 0.U, mem.read(if_rom.pc >> 3)(31, 0), mem.read(if_rom.pc >> 3)(63, 32))
}
