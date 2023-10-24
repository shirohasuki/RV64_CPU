package RegFile

import chisel3._
import chisel3.util._


class IDU_REG_Input extends Bundle {
    val rs1_raddr = Input(UInt(5.W))
    val rs2_raddr = Input(UInt(5.W))
}

class REG_IDU_Output extends Bundle {
    val rs1_rdata = Output(UInt(32.W))
    val rs2_rdata = Output(UInt(32.W))
}

class EXU_REG_Input extends Bundle {
    val rd_waddr = Input(UInt(5.W))
    val rd_wdata = Input(UInt(64.W))
    val rd_wen   = Input(Bool())
}

class RegFile extends Module {
    val io = IO(new Bundle{
        val id_reg = new IDU_REG_Input()
        val reg_id = new REG_IDU_Output()
        val ex_reg = new EXU_REG_Input()
    })

    // 寄存器组
    val regs = Reg(Vec(32, UInt(64.W)))
    
    // 读寄存器的数据
    io.reg_id.rs1_rdata := Mux(io.id_reg.rs1_raddr === 0.U, 0.U(64.W), 
                                    Mux((io.ex_reg.rd_wen && (io.ex_reg.rd_waddr === io.id_reg.rs1_raddr)), io.ex_reg.rd_wdata, regs(io.id_reg.rs1_raddr)))
    io.reg_id.rs2_rdata := Mux(io.id_reg.rs2_raddr === 0.U, 0.U(64.W), 
                                    Mux((io.ex_reg.rd_wen && (io.ex_reg.rd_waddr === io.id_reg.rs2_raddr)), io.ex_reg.rd_wdata, regs(io.id_reg.rs2_raddr)))
    // 写寄存器的数据:给出写信号，且rd不为0时写寄存器
    regs(io.ex_reg.rd_waddr) := Mux(io.ex_reg.rd_wen && (io.ex_reg.rd_waddr =/= 0.U), io.ex_reg.rd_wdata, 0.U(64.W))   
}

