package WBU

import chisel3._

class EXWB_WB_Input extends Bundle {
    val pc        = Input(UInt(64.W))
    val rd_wdata  = Input(UInt(64.W))
    val rd_waddr  = Input(UInt(64.W))
    val rd_wen    = Input(Bool())
}

class WBU_Redirect_Output extends Bundle {
    val rd_wen         = Output(Bool())
    val rd_waddr       = Output(UInt(64.W))
    val rd_wdata       = Output(UInt(64.W))
}

class WBU extends Module {
    val exwb_wb    = IO(new MEMWB_WB_Input())
    val wb_reg      = IO(Flipped(new MEMWB_WB_Input()))
    val wb_redirect = IO(new WBU_Redirect_Output())

    wb_reg <> memwb_wb
    wb_redirect.rd_wen   := memwb_wb.rd_wdata             
    wb_redirect.rd_waddr := memwb_wb.rd_waddr     
    wb_redirect.rd_wdata := memwb_wb.rd_wen               
}

