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
    val reg_wen_id_ex     = Input(UInt(1.W))
    val base_addr_id_ex   = Input(UInt(64.W))
    val offset_addr_id_ex = Input(UInt(64.W))
}

class EXU_REG_Output extends Bundle {
    val reg_wen_id_ex     = Output(Bool())
    val rd_addr_ex_reg    = Output(UInt(64.W))
    val rd_data_ex_reg    = Output(UInt(64.W))
}

class EXU extends Module {
    val io = IO(new Bundle {
        val id_ex  = Input(new IDU_EXU_Input())
        val ex_reg = Output(new EXU_REG_Output())
    })

    // def op1_i_add_op2_i

    val func37 = Cat(io.id_ex.inst_id_ex(14, 12), io.id_ex.inst_id_ex(31, 25))
    //  List(reg_wen, rs_waddr_o, rs_wdata_o, mem_ren, mem_raddr, mem_wen, mem_wmask, mem_wdata, mem_waddr)
    var ex_list  = ListLookup(func37, List((0.U(1.W)), 0.U(64.W), 0.U(64.W), false.Bool(), 0.U(64.W), false.Bool(), 0.U(64.W), 0.U(8.W), 0.U(64.W), 0.U(64.W)), Array(
        BitPat("000_0010011") -> List(false.B, io.id_ex.rd_addr_id_ex, io.id_ex.op1_id_ex + io.id_ex.op2_id_ex, false.B, 0.U, false.B, 0.U, 0.U, 0.U, 0.U), //addi
        BitPat("000_0110011") -> List(false.B, io.id_ex.rd_addr_id_ex, io.id_ex.op1_id_ex + io.id_ex.op2_id_ex, false.B, 0.U, false.B, 0.U, 0.U, 0.U, 0.U), //add        
    ))
    io.ex_reg.reg_wen_id_ex  := ex_list(0)
    io.ex_reg.rd_addr_ex_reg := ex_list(1)
    io.ex_reg.rd_data_ex_reg := ex_list(2)

}
