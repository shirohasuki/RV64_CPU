package IFU

import chisel3._
import chisel3.util._
import chisel3.stage._

class IFU extends Module {
    val io = IO(new Bundle{
        val pc_if = new Bundle {
            val pc   = Input(UInt(64.W))
        }

        val if_rom = new Bundle {
            val inst = Input(UInt(32.W))
            val pc   = Output(UInt(64.W))
        }

        val if_ifid = new Bundle {
            val inst  = Output(UInt(32.W))
            val pc    = Output(UInt(64.W))
        }
    })
    

    io.if_rom.pc    := io.pc_if.pc
    io.if_ifid.inst := io.if_rom.inst
    io.if_ifid.pc   := io.pc_if.pc
}
