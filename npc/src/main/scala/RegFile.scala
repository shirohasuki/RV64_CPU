/*************************************************************************
    > File Name: RegFile.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-24 22:24:28
    > Description: 
*************************************************************************/

package RegFile

import chisel3._
import chisel3.util._

import DPIC.getGprs
import DPIC.getPc

class Bypass_REG_Input extends Bundle {
    val rs1_raddr = Input(UInt(5.W))
    val rs2_raddr = Input(UInt(5.W))
}

class REG_Bypass_Output extends Bundle {
    val rs1_rdata = Output(UInt(64.W))
    val rs2_rdata = Output(UInt(64.W))
}

class WBU_REG_Input extends Bundle {
    val pc       = Input(UInt(64.W))
    val rd_waddr = Input(UInt(5.W))
    val rd_wdata = Input(UInt(64.W))
    val rd_wen   = Input(Bool())
}

class RegFile extends Module {
    // val io = IO(new Bundle{
    val bypass_reg = IO(new Bypass_REG_Input())
    val reg_bypass = IO(new REG_Bypass_Output())
    val wb_reg     = IO(new WBU_REG_Input())
    // val reg_clint_o = IO(new Bundle{ val a7 = Output(UInt(64.W)) })
    
    // })

    // 寄存器组
    val regs = Reg(Vec(32, UInt(64.W)))
    
    // 读寄存器的数据
    reg_bypass.rs1_rdata := Mux(bypass_reg.rs1_raddr === 0.U, 0.U(64.W), 
                                Mux((wb_reg.rd_wen && (wb_reg.rd_waddr === bypass_reg.rs1_raddr)), wb_reg.rd_wdata, regs(bypass_reg.rs1_raddr)))
    reg_bypass.rs2_rdata := Mux(bypass_reg.rs2_raddr === 0.U, 0.U(64.W), 
                                Mux((wb_reg.rd_wen && (wb_reg.rd_waddr === bypass_reg.rs2_raddr)), wb_reg.rd_wdata, regs(bypass_reg.rs2_raddr)))
    
    // 写寄存器的数据:给出写信号，且rd不为0时写寄存器
    regs(wb_reg.rd_waddr) := Mux(wb_reg.rd_wen && (wb_reg.rd_waddr =/= 0.U),  wb_reg.rd_wdata, 0.U(64.W))   


    // to Clint a7存着mcasue
    // reg_clint_o.a7 := regs(17) 

    // DPI-C 获取GPRs
    val DPIC_getGprs = Module(new getGprs())
    DPIC_getGprs.io.gprs := regs
    
    // val pc_buff = RegInit(0.U(64.W))
    // pc_buff := wb_reg.pc
    // DPI-C 获取Pc
    val DPIC_getPc = Module(new getPc())
    DPIC_getPc.io.pc  := wb_reg.pc
    // DPIC_getPc.io.clk := clock
}

