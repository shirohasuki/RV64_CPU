package EXU

import chisel3._
import chisel3.util._
import chisel3.stage._

class IDU_EXU_Input extends Bundle {
    val inst        = Input(UInt(32.W))
    val pc          = Input(UInt(64.W))
    val op1         = Input(UInt(64.W))
    val op2         = Input(UInt(64.W))
    val rs1_addr    = Input(UInt(5.W))
    val rs2_addr    = Input(UInt(5.W))
    val rd_addr     = Input(UInt(5.W))
    val reg_wen     = Input(Bool())
    val base_addr   = Input(UInt(64.W))
    val offset_addr = Input(UInt(64.W))
}

class EXU_REG_Output extends Bundle {
    val reg_wen    = Output(Bool())
    val rd_addr    = Output(UInt(64.W))
    val rd_data    = Output(UInt(64.W))
}

class EXU extends Module {
    // val io = IO(new Bundle {
    val id_ex  = IO(new IDU_EXU_Input())
    val ex_reg = IO(new EXU_REG_Output())
    // })
    
    // def op1_i_add_op2_i

    val func37 = Cat(id_ex.inst(14, 12), id_ex.inst(31, 25))
    //  List(reg_wen, rs_waddr_o, rs_wdata_o, mem_ren, mem_raddr, mem_wen, mem_wmask, mem_wdata, mem_waddr)
    var ex_list  = ListLookup(func37, List(false.B, 0.U(64.W), 0.U(64.W), false.B, 0.U(64.W), false.B, 0.U(64.W), 0.U(8.W), 0.U(64.W), 0.U(64.W)), Array(
        BitPat("b000_0010011") -> List(false.B, id_ex.rd_addr, id_ex.op1 + id_ex.op2, false.B, 0.U, false.B, 0.U, 0.U, 0.U, 0.U), //addi
        BitPat("b000_0110011") -> List(false.B, id_ex.rd_addr, id_ex.op1 + id_ex.op2, false.B, 0.U, false.B, 0.U, 0.U, 0.U, 0.U), //add        
    ))
    ex_reg.reg_wen := ex_list(0)
    ex_reg.rd_addr := ex_list(1)
    ex_reg.rd_data := ex_list(2)

}
