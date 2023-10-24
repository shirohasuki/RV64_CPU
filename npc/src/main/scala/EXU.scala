package EXU

import chisel3._
import chisel3.util._
import chisel3.stage._

import define.MACRO._

class IDEX_EXU_Input extends Bundle {
    val inst        = Input(UInt(32.W))
    val pc          = Input(UInt(64.W))
    val op1         = Input(UInt(64.W))
    val op2         = Input(UInt(64.W))
    val rd_addr     = Input(UInt(5.W))
    val rd_wen      = Input(Bool())
    val base_addr   = Input(UInt(64.W))
    val offset_addr = Input(UInt(64.W))
}

class EXU_REG_Output extends Bundle {
    val rd_wen      = Output(Bool())
    val rd_waddr    = Output(UInt(64.W))
    val rd_wdata    = Output(UInt(64.W))
}

class EXU extends Module {
    val io = IO(new Bundle {
        val idex_ex  = (new IDEX_EXU_Input())
        val ex_reg = (new EXU_REG_Output())
    })  
    
    val op1_i_add_op2_i = Reg(UInt(64.W))
    op1_i_add_op2_i := io.idex_ex.op1 + io.idex_ex.op2

    // def op1_i_add_op2_i
    
    val func37 = Cat(io.idex_ex.inst(14, 12), io.idex_ex.inst(31, 25))
    //  List(rd_wen, rd_waddr_o, rd_wdata_o, mem_ren, mem_raddr, mem_wen, mem_wmask, mem_wdata, mem_waddr)
    var exce_list  = ListLookup(func37, List(false.B, 0.U(64.W), 0.U(64.W), false.B, 0.U(64.W), false.B, 0.U(64.W), 0.U(8.W), 0.U(64.W), 0.U(64.W)), Array(
        BitPat("b000_0010011") -> List(true.B, io.idex_ex.rd_addr, io.op1_i_add_op2_i, false.B, 0.U, false.B, 0.U, 0.U, 0.U, 0.U), //addi
        BitPat("b000_0110011") -> List(true.B, io.idex_ex.rd_addr, io.op1_i_add_op2_i, false.B, 0.U, false.B, 0.U, 0.U, 0.U, 0.U), //add        
    ))
    io.ex_reg.rd_wen   := exce_list(0)
    io.ex_reg.rd_waddr := exce_list(1)
    io.ex_reg.rd_wdata := exce_list(2)

}
