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
    val rd_waddr  = Input(UInt(64.W))
    val rd_wen    = Input(Bool())
}

class MEMWB_WB_Input extends Bundle {
    val pc          = Input(UInt(64.W))
    val rd_wdata    = Input(UInt(64.W))
    val rd_waddr    = Input(UInt(64.W))
    val rd_wen      = Input(Bool())
}

class WBU_RegFile_Output extends Bundle {
    val pc             = Output(UInt(64.W))
    val rd_wen         = Output(Bool())
    val rd_waddr       = Output(UInt(64.W))
    val rd_wdata       = Output(UInt(64.W))
}

class WBU_Rename_Output extends Bundle {
    val rd_wen         = Output(Bool())
    val rd_waddr       = Output(UInt(64.W))
    val rd_wdata       = Output(UInt(64.W))
}

class WBU extends Module {
    val exwb_wb     = IO(Flipped(Valid(new EXWB_WB_Input)))
    val memwb_wb    = IO(Flipped(Valid(new MEMWB_WB_Input)))
    val wb_reg      = IO(new WBU_RegFile_Output)
    val wb_rename   = IO(new WBU_Rename_Output)

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
    // wb_reg <> exwb_wb

    wb_rename.rd_wen   := wb_reg.rd_wen         
    wb_rename.rd_waddr := wb_reg.rd_waddr     
    wb_rename.rd_wdata := wb_reg.rd_wdata           
}

