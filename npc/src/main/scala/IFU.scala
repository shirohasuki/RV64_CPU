package IFU

import chisel3._
import chisel3.util._
import chisel3.stage._

class IFU extends Module {
    val io = IO(new Bundle {
        // pc to if
        val pc_pc_if    = Input(UInt(64.W))
        // if to rom 
        val inst_rom_if = Input(UInt(32.W))
        val pc_if_rom   = Output(UInt(64.W))
        // if to id
        val inst_if_id  = Output(UInt(32.W))
        val pc_if_id    = Output(UInt(64.W))
    })

    pc_if_rom  := pc_pc_if
    inst_if_id := inst_rom_if
    pc_if_id   := pc_pc_if
}
