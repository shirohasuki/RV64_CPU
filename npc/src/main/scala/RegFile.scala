package RegFile

import chisel3._
import chisel3.util._


class IDU_REG_Input extends Bundle {
    val rs1_raddr_id_reg = Input(UInt(5.W))
    val rs2_raddr_id_reg = Input(UInt(5.W))
}

class REG_IDU_Output extends Bundle {
    val rs1_rdata_reg_id = Output(UInt(32.W))
    val rs2_rdata_reg_id = Output(UInt(32.W))
}

class EXU_REG_Input extends Bundle {
    val rd_waddr_id_reg = Input(UInt(5.W))
    val rd_wdata_id_reg = Input(UInt(64.W))
    val rd_wen_id_reg   = Input(UInt(1.W))
}

class RegFile extends Module {
    val io = IO(new Bundle{
        val id_reg = Input(new IDU_REG_Input())
        val reg_id = Output(new REG_IDU_Output())
        val ex_reg = Input(new EXU_REG_Output())
    })

    // 寄存器组
    val regs = Reg(Vec(32, UInt(64.W)))

    
    // 读寄存器的数据
    io.reg_id.rs1_rdata_reg_id := Mux(io.id_reg.rs1_addr_id_reg === 0.U, 0.U(64.W), 
                                     (io.ex_reg.rd_wen_id_reg && (io.ex_reg.rd_waddr_id_reg === io.id_ex.rs1_raddr_id_reg)), io.ex_reg.rd_wdata_id_reg, regs(io.id_reg.rs1_addr_id_reg))
    io.reg_id.rs2_rdata_reg_id := Mux(io.id_reg.rs2_addr_id_reg === 0.U, 0.U(64.W), 
                                     (io.ex_reg.rd_wen_id_reg && (io.ex_reg.rd_waddr_id_reg === io.id_ex.rs2_raddr_id_reg)), io.ex_reg.rd_wdata_id_reg, regs(io.id_reg.rs2_addr_id_reg))

    // 写寄存器的数据:给出写信号，且rd不为0时写寄存器
    regs(io.ex_reg.rd_waddr_id_reg) := Mux(io.ex_reg.rd_wen_id_reg && (io.ex_reg.rd_waddr_id_reg =/= 0.U), io.ex_reg.rd_wdata_id_reg, 0.U(64.W))   
}

