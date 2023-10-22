package IFU

import chisel3._
import chisel3.util._
import chisel3.stage._

class IFU extends Module {
    val pc_if = IO(new Bundle {
        // pc to if
        val pc    = Input(UInt(64.W))
    })

    val if_rom = IO(new Bundle {
        // if to rom 
        val inst = Input(UInt(32.W))
        val pc   = Output(UInt(64.W))
    })

    val if_id = IO(new Bundle {
        // if to id
        val inst  = Output(UInt(32.W))
        val pc    = Output(UInt(64.W))
    })

    if_rom.pc  := pc_if.pc
    if_id.inst := if_rom.inst
    if_id.pc   := pc_if.pc
}
