package MEM

import chisel3._

class EXMEM_MEM_Input extends Bundle {
    // mem use
    val inst            = Input(UInt(32.W))
    val pc              = Input(UInt(64.W))
    val mem_ren         = Input(Bool())
    val mem_raddr       = Input(UInt(64.W))
    val mem_wen         = Input(Bool())
    val mem_waddr       = Input(UInt(64.W))
    val mem_wdata       = Input(UInt(64.W))
    val mem_wmask       = Input(UInt(8.W))
    val ex_inst_isload  = Input(Bool())
    val ex_inst_isstore = Input(Bool())

    // wb use
    val rd_wdata        = Input(UInt(64.W))
    val rd_waddr        = Input(UInt(64.W))
    val rd_wen          = Input(Bool())
}

class MEM_CTRL_Output extends Bundle {
    val mem_inst_isload  = Output(Bool())
    val mem_inst_isstore = Output(Bool())
}

class MEM_MEMWB_Output extends Bundle {
    val pc              = Output(UInt(64.W))
    val rd_wdata        = Output(UInt(64.W))
    val rd_waddr        = Output(UInt(64.W))
    val rd_wen          = Output(Bool())
}

class MEM_Redirect_Output extends Bundle {
    val rd_wen         = Output(Bool())
    val rd_waddr       = Output(UInt(64.W))
    val rd_wdata       = Output(UInt(64.W))
}


class MEM extends Module {
    val exmem_mem    = IO(new EXMEM_MEM_Input())
    val mem_ctrl     = IO(new MEM_CTRL_Output())
    val mem_memwb    = IO(new MEM_MEMWB_Output())
    val mem_redirect = IO(new MEM_Redirect_Output())

    mem_ctrl.mem_inst_isload    :=  exmem_mem.ex_inst_isload
    mem_ctrl.mem_inst_isstore   :=  exmem_mem.ex_inst_isstore

    mem_memwb.pc       := exmem_mem.pc
    mem_memwb.rd_wdata := exmem_mem.rd_wdata
    mem_memwb.rd_waddr := exmem_mem.rd_waddr   
    mem_memwb.rd_wen   := exmem_mem.rd_wen  

    mem_redirect.rd_wdata := exmem_mem.rd_wdata
    mem_redirect.rd_waddr := exmem_mem.rd_waddr   
    mem_redirect.rd_wen   := exmem_mem.rd_wen  
}
