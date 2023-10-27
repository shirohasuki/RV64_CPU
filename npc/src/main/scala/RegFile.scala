package RegFile

import chisel3._
import chisel3.util._

import DPIC.getGprs

class Redirect_REG_Input extends Bundle {
    val rs1_raddr = Input(UInt(5.W))
    val rs2_raddr = Input(UInt(5.W))
}

class REG_Redirect_Output extends Bundle {
    val rs1_rdata = Output(UInt(32.W))
    val rs2_rdata = Output(UInt(32.W))
}

class WBU_REG_Input extends Bundle {
    val pc       = Input(UInt(64.W))
    val rd_waddr = Input(UInt(5.W))
    val rd_wdata = Input(UInt(64.W))
    val rd_wen   = Input(Bool())
}

class RegFile extends Module {
    // val io = IO(new Bundle{
    val redirect_reg = IO(new Redirect_REG_Input())
    val reg_redirect = IO(new REG_Redirect_Output())
    val wb_reg       = IO(new WBU_REG_Input())
    // })

    // 寄存器组
    val regs = Reg(Vec(32, UInt(64.W)))
    
    // 读寄存器的数据
    reg_redirect.rs1_rdata := Mux(redirect_reg.rs1_raddr === 0.U, 0.U(64.W), 
                                    Mux((wb_reg.rd_wen && (wb_reg.rd_waddr === redirect_reg.rs1_raddr)), wb_reg.rd_wdata, regs(redirect_reg.rs1_raddr)))
    reg_redirect.rs2_rdata := Mux(redirect_reg.rs2_raddr === 0.U, 0.U(64.W), 
                                    Mux((wb_reg.rd_wen && (wb_reg.rd_waddr === redirect_reg.rs2_raddr)), wb_reg.rd_wdata, regs(redirect_reg.rs2_raddr)))
    // 写寄存器的数据:给出写信号，且rd不为0时写寄存器
    regs(wb_reg.rd_waddr) := Mux(wb_reg.rd_wen && (wb_reg.rd_waddr =/= 0.U),  wb_reg.rd_wdata, 0.U(64.W))   


    // DPI-C 获取GPRs
    val DPIC_getGprs = Module(new getGprs())
    DPIC_getGprs.io.gprs := regs
}

