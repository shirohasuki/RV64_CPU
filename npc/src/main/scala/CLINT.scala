/*************************************************************************
    > File Name: CLINT.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-22 18:39:04
    > Description: 
*************************************************************************/

package CLINT

import chisel3._
import chisel3.util._

// import CSRS._

import define.MACRO._
import DPIC.ebreak


class IDU_Clint_Input extends Bundle {
    val inst        = Input(UInt(32.W))
    val pc          = Input(UInt(64.W))
    
    // val csr_wen     = Output(Bool())
    // val csr_waddr   = Output(UInt(64.W))
    // val csr_wdata   = Output(UInt(64.W))
}

class Clint_Ctrl_Output extends Bundle {
    val intr_jump_en   = Output(Bool())
    val intr_jump_addr = Output(UInt(64.W))
}

class CSR_Clint_Input extends Bundle {
    val mstatus   = Input(UInt(64.W))
    val mtvec     = Input(UInt(64.W))
    val mepc      = Input(UInt(64.W))
    val mcause    = Input(UInt(64.W))
}

class Clint_CSR_Output extends Bundle {
    val csr_wen   = Output(Bool())
    val mstatus   = Output(UInt(64.W))
    val mepc      = Output(UInt(64.W))
    val mcause    = Output(UInt(64.W))
}

class CLINT extends Module {
    val idclint_clint    = IO(new IDU_Clint_Input)
    val clint_ctrl       = IO(new Clint_Ctrl_Output)
    val csr_clint_i      = IO(new CSR_Clint_Input)
    val clint_csr_o      = IO(new Clint_CSR_Output)
    // val reg_clint_i      = IO(new Bundle{ val a7 = Input(UInt(64.W)) })

    // val CSR = Module(new CSRS())
       
    // DPI-C Ebreak
    val DPIC_ebreak = Module(new ebreak())
    DPIC_ebreak.io.inst := INST_NOP

    clint_ctrl.intr_jump_en     := false.B
    clint_ctrl.intr_jump_addr   := 0.U
    
    clint_csr_o.csr_wen         := 0.U
    clint_csr_o.mstatus         := csr_clint_i.mstatus 
    clint_csr_o.mepc            := csr_clint_i.mepc   
    clint_csr_o.mcause          := csr_clint_i.mcause 
    // write to csrs
    switch (idclint_clint.inst) {
        is (INST_EBREAK) { 
            clint_csr_o.csr_wen  := 1.U
            clint_csr_o.mstatus  := 3.U(64.W)
            clint_csr_o.mepc     := csr_clint_i.mepc   
            clint_csr_o.mcause   := csr_clint_i.mcause 

            DPIC_ebreak.io.inst  := idclint_clint.inst
        }
        is (INST_ECALL) {
            clint_csr_o.csr_wen       := 1.U
            clint_csr_o.mstatus       := Cat(csr_clint_i.mstatus(63, 13), "b11".U(2.W), csr_clint_i.mstatus(10, 8), csr_clint_i.mstatus(3), csr_clint_i.mstatus(6, 4), 0.U(1.W), csr_clint_i.mstatus(2, 0)) // mstatus[7(MPIE)] = MIE, mstatus[3(MIE)] = 0
            clint_csr_o.mepc          := idclint_clint.pc
            clint_csr_o.mcause        := 11.U(64.W) //reg_clint_i.a7

            clint_ctrl.intr_jump_en   := true.B
            clint_ctrl.intr_jump_addr := csr_clint_i.mtvec
        }
        is (INST_MRET) {
            clint_csr_o.csr_wen       := 1.U
            clint_csr_o.mstatus       := Cat(csr_clint_i.mstatus(63, 13), "b00".U(2.W), csr_clint_i.mstatus(10, 8), 1.U(1.W), csr_clint_i.mstatus(6, 4), csr_clint_i.mstatus(7), csr_clint_i.mstatus(2, 0)) // mstatus[7(MPIE)] = 1, mstatus[3(MIE)] = MPIE
            clint_csr_o.mepc          := csr_clint_i.mepc   
            clint_csr_o.mcause        := csr_clint_i.mcause 

            clint_ctrl.intr_jump_en   := true.B
            clint_ctrl.intr_jump_addr := csr_clint_i.mepc
        }
    }
}
