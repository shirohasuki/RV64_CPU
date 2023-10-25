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
    val mem_memwb    = IO(new MEM_MEMWB_Output())
    val mem_redirect = IO(new MEM_Redirect_Output())

    mem_memwb.pc       := memwb_mem.pc
    mem_memwb.rd_wdata := memwb_mem.rd_wdata
    mem_memwb.rd_waddr := memwb_mem.rd_waddr   
    mem_memwb.rd_wen   := memwb_mem.rd_wen  

    mem_redirect.rd_wdata := memwb_mem.rd_wdata
    mem_redirect.rd_waddr := memwb_mem.rd_waddr   
    mem_redirect.rd_wen   := memwb_mem.rd_wen  
}
