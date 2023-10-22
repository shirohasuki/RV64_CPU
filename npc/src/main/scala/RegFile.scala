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
    val rd_wen_id_reg   = Input(Bool())
}

class RegFile extends Module {
    // val io = IO(new Bundle{
    val id_reg = IO(new IDU_REG_Input())
    val reg_id = IO(new REG_IDU_Output())
    val ex_reg = IO(new EXU_REG_Input())
    // })

    // 寄存器组
    val regs = Reg(Vec(32, UInt(64.W)))

    
    // 读寄存器的数据
    reg_id.rs1_rdata_reg_id := Mux(id_reg.rs1_raddr_id_reg === 0.U, 0.U(64.W), 
                                    Mux((ex_reg.rd_wen_id_reg && (ex_reg.rd_waddr_id_reg === id_reg.rs1_raddr_id_reg)), ex_reg.rd_wdata_id_reg, regs(id_reg.rs1_raddr_id_reg)))
    reg_id.rs2_rdata_reg_id := Mux(id_reg.rs2_raddr_id_reg === 0.U, 0.U(64.W), 
                                    Mux((ex_reg.rd_wen_id_reg && (ex_reg.rd_waddr_id_reg === id_reg.rs2_raddr_id_reg)), ex_reg.rd_wdata_id_reg, regs(id_reg.rs2_raddr_id_reg)))
    // 写寄存器的数据:给出写信号，且rd不为0时写寄存器
    regs(ex_reg.rd_waddr_id_reg) := Mux(ex_reg.rd_wen_id_reg && (ex_reg.rd_waddr_id_reg =/= 0.U),  ex_reg.rd_wdata_id_reg, 0.U(64.W))   
}

