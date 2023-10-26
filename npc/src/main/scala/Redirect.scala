package Redirect

import chisel3._
import chisel3.util._


class IDU_Redirect_Input extends Bundle {
    val rs1_raddr = Input(UInt(5.W))
    val rs2_raddr = Input(UInt(5.W))
}

class EXU_Redirect_Input extends Bundle {
    val rd_wen         = Input(Bool())
    val rd_waddr       = Input(UInt(64.W))
    val rd_wdata       = Input(UInt(64.W))
}

class MEM_Redirect_Input extends Bundle {
    val rd_wen         = Input(Bool())
    val rd_waddr       = Input(UInt(64.W))
    val rd_wdata       = Input(UInt(64.W))
}

class WBU_Redirect_Input extends Bundle {
    val rd_wen         = Input(Bool())
    val rd_waddr       = Input(UInt(64.W))
    val rd_wdata       = Input(UInt(64.W))
}

class Reg_Redirect_Input extends Bundle {
    val rs1_rdata = Input(UInt(64.W))
    val rs2_rdata = Input(UInt(64.W))
}

class Redirect_Reg_Output extends Bundle {
    val rs1_raddr = Output(UInt(5.W))
    val rs2_raddr = Output(UInt(5.W))
}

class Redirect_IDU_Output extends Bundle {
    val rs1_rdata   = Output(UInt(64.W))
    val rs2_rdata   = Output(UInt(64.W))
}

class Redirect extends Module {
    val id_redirect   = IO(new IDU_Redirect_Input())
    val ex_redirect   = IO(new EXU_Redirect_Input())
    val mem_redirect  = IO(new MEM_Redirect_Input())
    val wb_redirect   = IO(new WBU_Redirect_Input())

    val reg_redirect  = IO(new Reg_Redirect_Input())
    val redirect_reg  = IO(new Redirect_Reg_Output())
    val redirect_id   = IO(new Redirect_IDU_Output())
    val redirect_ctrl = IO(new Bundle{ val rs_id_ex_hit = Output(Bool())})

    redirect_reg <> id_redirect

    // ================ hit检测
    val rs1_id_ex_hit  = (id_redirect.rs1_raddr === ex_redirect.rd_waddr)  && ex_redirect.rd_wen  && (id_redirect.rs1_raddr =/= 0.U)
    val rs1_id_mem_hit = (id_redirect.rs1_raddr === mem_redirect.rd_waddr) && mem_redirect.rd_wen && (id_redirect.rs1_raddr =/= 0.U)
    val rs1_id_wb_hit  = (id_redirect.rs1_raddr === wb_redirect.rd_waddr)  && wb_redirect.rd_wen  && (id_redirect.rs1_raddr =/= 0.U)

    val rs2_id_ex_hit  = (id_redirect.rs2_raddr === ex_redirect.rd_waddr)  && ex_redirect.rd_wen  && (id_redirect.rs2_raddr =/= 0.U)
    val rs2_id_mem_hit = (id_redirect.rs2_raddr === mem_redirect.rd_waddr) && mem_redirect.rd_wen && (id_redirect.rs2_raddr =/= 0.U)
    val rs2_id_wb_hit  = (id_redirect.rs2_raddr === wb_redirect.rd_waddr)  && wb_redirect.rd_wen  && (id_redirect.rs2_raddr =/= 0.U)

    redirect_ctrl.rs_id_ex_hit := rs1_id_ex_hit || rs2_id_ex_hit

    // rs1_addr_i数据冲突 reg_redirect.rs1_rdata为默认值
    redirect_id.rs1_rdata := MuxCase(reg_redirect.rs1_rdata, Array(
        (rs1_id_ex_hit === 1.U)  ->  ex_redirect.rd_wdata,
        (rs1_id_mem_hit === 1.U) ->  mem_redirect.rd_wdata,
        (rs1_id_wb_hit  === 1.U)  ->  wb_redirect.rd_wdata
    ))

    // rs2_addr_i数据冲突 reg_redirect.rs2_rdata为默认值
    redirect_id.rs2_rdata := MuxCase(reg_redirect.rs2_rdata, Array(
        rs2_id_ex_hit   -> ex_redirect.rd_wdata,
        rs2_id_mem_hit  -> mem_redirect.rd_wdata,
        rs2_id_wb_hit   -> wb_redirect.rd_wdata
    ))
}


