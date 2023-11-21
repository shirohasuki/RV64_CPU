/*************************************************************************
    > File Name: pc_reg.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-24 22:24:26
    > Description: 
*************************************************************************/

package PcReg

import chisel3._
import chisel3.util._
import chisel3.stage._

class Ctrl_pc_Input extends Bundle {
    val pc_stall_en = Input(Bool())
    val pc_flush_en = Input(Bool())
    val jump_en     = Input(Bool())
    val jump_addr   = Input(UInt(64.W))
}

class PcReg extends Module {
    val ctrl_pc = IO(new Ctrl_pc_Input)

    val pc_if = IO(new Bundle { val pc = Output(UInt(64.W))})

    val pc   = RegInit("h80000000".U(64.W))

    pc := Mux(ctrl_pc.jump_en, ctrl_pc.jump_addr,
            // Mux(ctrl_pc.pc_flush_en, 0.U,
            Mux(ctrl_pc.pc_stall_en, pc, pc + 4.U))
    // pc_if.pc := Mux(ctrl_pc.pc_flush_en, 0.U, pc) 
    pc_if.pc := pc 
}
