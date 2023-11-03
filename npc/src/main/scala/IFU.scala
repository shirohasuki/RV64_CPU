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
    val if_mcif = IO(new IFU_MCIF_R)

    val if_ifid = IO(new Bundle {
        val inst  = Output(UInt(32.W))
        val pc    = Output(UInt(64.W))
    })

    val ctrl_pc = IO(new Bundle {
        val pc_stall_en = Input(Bool())
        val pc_flush_en = Input(Bool())
        val jump_en     = Input(Bool())
        val jump_addr   = Input(UInt(64.W))
    })

    val pc   = RegInit("h80000000".U(64.W))

    pc := Mux(ctrl_pc.jump_en, ctrl_pc.jump_addr,
            Mux(ctrl_pc.pc_stall_en, pc, pc + 4.U))

    val pc_next = RegInit(0.U(64.W)) // 缓存一下，和一周期后返回的inst一起过去
    pc_next := Mux(ctrl_pc.jump_en, 0.U, pc) 

    if_mcif.mem_ren     := 1.U & (pc =/= 0.U) & ~(ctrl_pc.jump_en)
    if_mcif.mem_raddr   := Mux(ctrl_pc.jump_en, 0.U, pc) 
    if_ifid.inst        := Mux(if_mcif.mem_raddr(2) === 1.U, if_mcif.mem_rdata(31, 0), if_mcif.mem_rdata(63, 32))
    if_ifid.pc          := Mux(ctrl_pc.jump_en, 0.U, pc_next) 
}
