package EXU

import chisel3._
import chisel3.util._
import chisel3.stage._

class IDU_EXU_Input extends Bundle {
    val inst_id_ex        = Input(UInt(32.W))
    val pc_id_ex          = Input(UInt(64.W))
    val op1_id_ex         = Input(UInt(64.W))
    val op2_id_ex         = Input(UInt(64.W))
    val rs1_addr_id_ex    = Input(UInt(5.W))
    val rs2_addr_id_ex    = Input(UInt(5.W))
    val rd_addr_id_ex     = Input(UInt(5.W))
    val reg_wen_id_ex     = Input(Bool())
    val base_addr_id_ex   = Input(UInt(64.W))
    val offset_addr_id_ex = Input(UInt(64.W))
}

class EXU_REG_Output extends Bundle {
    val reg_wen_id_ex     = Output(Bool())
    val rd_addr_ex_reg    = Output(UInt(64.W))
    val rd_data_ex_reg    = Output(UInt(64.W))
}

class EXU extends Module {
    // val io = IO(new Bundle {
    val id_ex  = new IDU_EXU_Input()
    val ex_reg = new EXU_REG_Output()
    // })

    // def op1_i_add_op2_i

    val func37 = Cat(id_ex.inst_id_ex(14, 12), id_ex.inst_id_ex(31, 25))
    //  List(reg_wen, rs_waddr_o, rs_wdata_o, mem_ren, mem_raddr, mem_wen, mem_wmask, mem_wdata, mem_waddr)
    var ex_list  = ListLookup(func37, List(false.B, 0.U(64.W), 0.U(64.W), false.B, 0.U(64.W), false.B, 0.U(64.W), 0.U(8.W), 0.U(64.W), 0.U(64.W)), Array(
        BitPat("b000_0010011") -> List(false.B, id_ex.rd_addr_id_ex, id_ex.op1_id_ex + id_ex.op2_id_ex, false.B, 0.U, false.B, 0.U, 0.U, 0.U, 0.U), //addi
        BitPat("b000_0110011") -> List(false.B, id_ex.rd_addr_id_ex, id_ex.op1_id_ex + id_ex.op2_id_ex, false.B, 0.U, false.B, 0.U, 0.U, 0.U, 0.U), //add        
    ))
    ex_reg.reg_wen_id_ex  := ex_list(0)
    ex_reg.rd_addr_ex_reg := ex_list(1)
    ex_reg.rd_data_ex_reg := ex_list(2)

}
