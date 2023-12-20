/*************************************************************************
    > File Name: Bypass.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-22 18:40:49
    > Description: 
*************************************************************************/

package Bypass

import chisel3._
import chisel3.util._


class IDU_Bypass_Input extends Bundle {
    val rs1_raddr = Input(UInt(5.W))
    val rs2_raddr = Input(UInt(5.W))
    val csr_raddr = Input(UInt(12.W))
}


class EXU_Bypass_Input extends Bundle {
    val rd_wen         = Input(Bool())
    val rd_waddr       = Input(UInt(64.W))
    val rd_wdata       = Input(UInt(64.W))
}

class MEM_Bypass_Input extends Bundle {
    val rd_wen         = Input(Bool())
    val rd_waddr       = Input(UInt(64.W))
    val rd_wdata       = Input(UInt(64.W))
}

class WBU_Bypass_Input extends Bundle {
    val rd_wen         = Input(Bool())
    val rd_waddr       = Input(UInt(64.W))
    val rd_wdata       = Input(UInt(64.W))
}

class REG_Bypass_Input extends Bundle {
    val rs1_rdata = Input(UInt(64.W))
    val rs2_rdata = Input(UInt(64.W))
}

class CSR_Bypass_Input extends Bundle {
    val csr_rdata = Input(UInt(64.W))
}

class Bypass_Reg_Output extends Bundle {
    val rs1_raddr = Output(UInt(5.W))
    val rs2_raddr = Output(UInt(5.W))
}

class Bypass_CSR_Output extends Bundle {
    val csr_raddr = Output(UInt(12.W))
}

class Bypass_IDU_Output extends Bundle {
    val rs1_rdata   = Output(UInt(64.W))
    val rs2_rdata   = Output(UInt(64.W))
    val csr_rdata   = Output(UInt(64.W))
}

class Bypass extends Module {
    val id_bypass_i     = IO(new IDU_Bypass_Input)
    val ex_bypass_i     = IO(new EXU_Bypass_Input)
    val mem_bypass_i    = IO(new MEM_Bypass_Input)
    val wb_bypass_i     = IO(new WBU_Bypass_Input)
    val reg_bypass_i    = IO(new REG_Bypass_Input)
    val csr_bypass_i    = IO(new CSR_Bypass_Input)
    val bypass_reg_o    = IO(new Bypass_Reg_Output)
    val bypass_csr_o    = IO(new Bypass_CSR_Output)
    val bypass_id_o     = IO(new Bypass_IDU_Output)
    val bypass_ctrl_o   = IO(new Bundle{ val rs_id_ex_hit = Output(Bool())})

    // ========= GPR ============================== //
    bypass_reg_o.rs1_raddr := id_bypass_i.rs1_raddr
    bypass_reg_o.rs2_raddr := id_bypass_i.rs2_raddr
    // ================ hit检测
    val rs1_id_ex_hit  = (id_bypass_i.rs1_raddr === ex_bypass_i.rd_waddr)  && ex_bypass_i.rd_wen  && (id_bypass_i.rs1_raddr =/= 0.U)
    val rs1_id_mem_hit = (id_bypass_i.rs1_raddr === mem_bypass_i.rd_waddr) && mem_bypass_i.rd_wen && (id_bypass_i.rs1_raddr =/= 0.U)
    val rs1_id_wb_hit  = (id_bypass_i.rs1_raddr === wb_bypass_i.rd_waddr)  && wb_bypass_i.rd_wen  && (id_bypass_i.rs1_raddr =/= 0.U)

    val rs2_id_ex_hit  = (id_bypass_i.rs2_raddr === ex_bypass_i.rd_waddr)  && ex_bypass_i.rd_wen  && (id_bypass_i.rs2_raddr =/= 0.U)
    val rs2_id_mem_hit = (id_bypass_i.rs2_raddr === mem_bypass_i.rd_waddr) && mem_bypass_i.rd_wen && (id_bypass_i.rs2_raddr =/= 0.U)
    val rs2_id_wb_hit  = (id_bypass_i.rs2_raddr === wb_bypass_i.rd_waddr)  && wb_bypass_i.rd_wen  && (id_bypass_i.rs2_raddr =/= 0.U)

    bypass_ctrl_o.rs_id_ex_hit := rs1_id_ex_hit || rs2_id_ex_hit

    // rs1_addr_i数据冲突 reg_bypass.rs1_rdata为默认值
    bypass_id_o.rs1_rdata := MuxCase(reg_bypass_i.rs1_rdata, Seq(
        rs1_id_ex_hit   ->  ex_bypass_i.rd_wdata,
        rs1_id_mem_hit  ->  mem_bypass_i.rd_wdata,
        rs1_id_wb_hit   ->  wb_bypass_i.rd_wdata
    ))

    // rs2_addr_i数据冲突 reg_bypass.rs2_rdata为默认值
    bypass_id_o.rs2_rdata := MuxCase(reg_bypass_i.rs2_rdata, Seq(
        rs2_id_ex_hit   -> ex_bypass_i.rd_wdata,
        rs2_id_mem_hit  -> mem_bypass_i.rd_wdata,
        rs2_id_wb_hit   -> wb_bypass_i.rd_wdata
    ))

    // ============== CSR ======================= //
    bypass_csr_o.csr_raddr  := id_bypass_i.csr_raddr
    bypass_id_o.csr_rdata   := csr_bypass_i.csr_rdata
}


