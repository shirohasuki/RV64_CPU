/*************************************************************************
    > File Name: WBU.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-22 18:39:42
    > Description: 
*************************************************************************/

package WBU

import chisel3._
import chisel3.util._


class EXWB_WB_Input extends Bundle {
    val pc        = Input(UInt(64.W))
    val rd_wdata  = Input(UInt(64.W))
    val rd_waddr  = Input(UInt(5.W))
    val rd_wen    = Input(Bool())
    val csr_wdata = Input(UInt(64.W))
    val csr_waddr = Input(UInt(12.W))
    val csr_wen   = Input(Bool())
}

class MEMWB_WB_Input extends Bundle {
    val pc          = Input(UInt(64.W))
    val rd_wdata    = Input(UInt(64.W))
    val rd_waddr    = Input(UInt(5.W))
    val rd_wen      = Input(Bool())
}

class WBU_RegFile_Output extends Bundle {
    val pc             = Output(UInt(64.W))
    val rd_wen         = Output(Bool())
    val rd_waddr       = Output(UInt(5.W))
    val rd_wdata       = Output(UInt(64.W))
}

class WBU_Bypass_Output extends Bundle {
    val rd_wen         = Output(Bool())
    val rd_waddr       = Output(UInt(5.W))
    val rd_wdata       = Output(UInt(64.W))
}

class WBU_CSR_Output extends Bundle {
    val csr_wen       = Output(Bool())
    val csr_waddr     = Output(UInt(12.W))
    val csr_wdata     = Output(UInt(64.W))
}


class WBU extends Module {
    val exwb_wb     = IO(Flipped(Valid(new EXWB_WB_Input)))
    val memwb_wb    = IO(Flipped(Valid(new MEMWB_WB_Input)))
    val wb_reg      = IO(new WBU_RegFile_Output)
    val wb_csr      = IO(new WBU_CSR_Output)
    val wb_bypass   = IO(new WBU_Bypass_Output)

    // to reg
    when (memwb_wb.valid) {
        wb_reg.pc       := memwb_wb.bits.pc       
        wb_reg.rd_wdata := memwb_wb.bits.rd_wdata 
        wb_reg.rd_waddr := memwb_wb.bits.rd_waddr 
        wb_reg.rd_wen   := memwb_wb.bits.rd_wen   
    }.otherwise {
        wb_reg.pc       := exwb_wb.bits.pc      
        wb_reg.rd_wdata := exwb_wb.bits.rd_wdata
        wb_reg.rd_waddr := exwb_wb.bits.rd_waddr
        wb_reg.rd_wen   := exwb_wb.bits.rd_wen   
    } 

    // to csr
    wb_csr.csr_wdata    := exwb_wb.bits.csr_wdata 
    wb_csr.csr_waddr    := exwb_wb.bits.csr_waddr 
    wb_csr.csr_wen      := exwb_wb.bits.csr_wen   

    // wb_reg <> exwb_wb
    // to bypass
    wb_bypass.rd_wen    := wb_reg.rd_wen         
    wb_bypass.rd_waddr  := wb_reg.rd_waddr     
    wb_bypass.rd_wdata  := wb_reg.rd_wdata          
}

