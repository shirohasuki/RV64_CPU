package IFU

import chisel3._
import chisel3.util._
import chisel3.stage._


class IFU_MCIF_R extends Bundle {
    val mem_ren    = Output(Bool())
    val mem_raddr  = Output(UInt(64.W)) // pc
    val mem_rdata  = Input(UInt(64.W))  // inst
}

class IFU extends Module {
    val pc_if = IO(new Bundle {
        val pc   = Input(UInt(64.W))
    })

    val if_mcif = IO(new IFU_MCIF_R)

    val if_ifid = IO(new Bundle {
        val inst  = Output(UInt(32.W))
        val pc    = Output(UInt(64.W))
    })

    if_mcif.ren     := 1.U
    if_mcif.raddr   := pc_if.pc
    if_ifid.inst    := Mux(if_mcif.raddr(2) === 0.U, if_mcif.rdata(31, 0), if_mcif.rdata(63, 32))
    if_ifid.pc      := pc_if.pc
}
