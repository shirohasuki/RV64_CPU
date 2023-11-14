/*************************************************************************
    > File Name: Rename.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-22 18:40:49
    > Description: 
*************************************************************************/

package Rename

import chisel3._
import chisel3.util._


class IDU_Rename_Input extends Bundle {
    val rs1_raddr = Input(UInt(5.W))
    val rs2_raddr = Input(UInt(5.W))
}

class EXU_Rename_Input extends Bundle {
    val rd_wen         = Input(Bool())
    val rd_waddr       = Input(UInt(64.W))
    val rd_wdata       = Input(UInt(64.W))
}

class MEM_Rename_Input extends Bundle {
    val rd_wen         = Input(Bool())
    val rd_waddr       = Input(UInt(64.W))
    val rd_wdata       = Input(UInt(64.W))
}

class WBU_Rename_Input extends Bundle {
    val rd_wen         = Input(Bool())
    val rd_waddr       = Input(UInt(64.W))
    val rd_wdata       = Input(UInt(64.W))
}

class Reg_Rename_Input extends Bundle {
    val rs1_rdata = Input(UInt(64.W))
    val rs2_rdata = Input(UInt(64.W))
}

class Rename_Reg_Output extends Bundle {
    val rs1_raddr = Output(UInt(5.W))
    val rs2_raddr = Output(UInt(5.W))
}

class Rename_IDU_Output extends Bundle {
    val rs1_rdata   = Output(UInt(64.W))
    val rs2_rdata   = Output(UInt(64.W))
}

class Rename extends Module {
    val id_rename   = IO(new IDU_Rename_Input())
    val ex_rename   = IO(new EXU_Rename_Input())
    // val mem_rename  = IO(new MEM_Rename_Input())
    val wb_rename   = IO(new WBU_Rename_Input())

    val reg_rename  = IO(new Reg_Rename_Input())
    val rename_reg  = IO(new Rename_Reg_Output())
    val rename_id   = IO(new Rename_IDU_Output())
    val rename_ctrl = IO(new Bundle{ val rs_id_ex_hit = Output(Bool())})

    rename_reg <> id_rename

    // ================ hit检测
    val rs1_id_ex_hit  = (id_rename.rs1_raddr === ex_rename.rd_waddr)  && ex_rename.rd_wen  && (id_rename.rs1_raddr =/= 0.U)
    val rs1_id_mem_hit = (id_rename.rs1_raddr === mem_rename.rd_waddr) && mem_rename.rd_wen && (id_rename.rs1_raddr =/= 0.U)
    val rs1_id_wb_hit  = (id_rename.rs1_raddr === wb_rename.rd_waddr)  && wb_rename.rd_wen  && (id_rename.rs1_raddr =/= 0.U)

    val rs2_id_ex_hit  = (id_rename.rs2_raddr === ex_rename.rd_waddr)  && ex_rename.rd_wen  && (id_rename.rs2_raddr =/= 0.U)
    val rs2_id_mem_hit = (id_rename.rs2_raddr === mem_rename.rd_waddr) && mem_rename.rd_wen && (id_rename.rs2_raddr =/= 0.U)
    val rs2_id_wb_hit  = (id_rename.rs2_raddr === wb_rename.rd_waddr)  && wb_rename.rd_wen  && (id_rename.rs2_raddr =/= 0.U)

    rename_ctrl.rs_id_ex_hit := rs1_id_ex_hit || rs2_id_ex_hit

    // rs1_addr_i数据冲突 reg_rename.rs1_rdata为默认值
    rename_id.rs1_rdata := MuxCase(reg_rename.rs1_rdata, Seq(
        rs1_id_ex_hit   ->  ex_rename.rd_wdata,
        rs1_id_mem_hit  ->  mem_rename.rd_wdata,
        rs1_id_wb_hit   ->  wb_rename.rd_wdata
    ))

    // rs2_addr_i数据冲突 reg_rename.rs2_rdata为默认值
    rename_id.rs2_rdata := MuxCase(reg_rename.rs2_rdata, Seq(
        rs2_id_ex_hit   -> ex_rename.rd_wdata,
        rs2_id_mem_hit  -> mem_rename.rd_wdata,
        rs2_id_wb_hit   -> wb_rename.rd_wdata
    ))
}


