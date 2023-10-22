package IFU

import chisel3._
import chisel3.util._
import chisel3.stage._

class IFU extends Module {
    val pc_if = IO(new Bundle {
        // pc to if
        val pc_pc_if    = Input(UInt(64.W))
    })

    val if_rom = IO(new Bundle {
        // if to rom 
        val inst_rom_if = Input(UInt(32.W))
        val pc_if_rom   = Output(UInt(64.W))
    })

    val if_id = IO(new Bundle {
        // if to id
        val inst_if_id  = Output(UInt(32.W))
        val pc_if_id    = Output(UInt(64.W))
    })

    if_rom.pc_if_rom  := pc_if.pc_pc_if
    if_id.inst_if_id := if_rom.inst_rom_if
    if_id.pc_if_id   := pc_if.pc_pc_if
}
