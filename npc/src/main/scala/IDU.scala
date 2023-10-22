package IDU

import chisel3._
import chisel3.util._
import chisel3.stage._

import define.defines._

class IFU_IDU_Input extends Bundle {
    val inst_if_id = Input(UInt(32.W))
    val pc_if_id   = Input(UInt(64.W))
}

class REG_IDU_Input extends Bundle {
    val rs1_data_reg_id   = Input(UInt(64.W))
    val rs2_data_reg_id   = Input(UInt(64.W))
}

class IDU_EXU_Output extends Bundle {
    val inst_id_ex        = Output(UInt(32.W))
    val pc_id_ex          = Output(UInt(64.W))
    val op1_id_ex         = Output(UInt(64.W))
    val op2_id_ex         = Output(UInt(64.W))
    val rs1_addr_id_ex    = Output(UInt(5.W))
    val rs2_addr_id_ex    = Output(UInt(5.W))
    val rd_addr_id_ex     = Output(UInt(5.W))
    val reg_wen_id_ex     = Output(Bool())
    val base_addr_id_ex   = Output(UInt(64.W))
    val offset_addr_id_ex = Output(UInt(64.W))
}

class IDU_REG_Output extends Bundle {
    val rs1_addr_id_reg = Output(UInt(5.W))
    val rs2_addr_id_reg = Output(UInt(5.W))
}

class IDU extends Module {
    // val io = IO(new Bundle {
    val if_id   = new IFU_IDU_Input()
    val reg_id  = new REG_IDU_Input()
    val id_ex   = new IDU_EXU_Output()
    val id_reg  = new IDU_REG_Output()
    // })

    val inst     = Wire(UInt(32.W))
    val opcode   = Wire(UInt(32.W))
    val func3    = Wire(UInt(3.W))
    val func7    = Wire(UInt(7.W))
    val rs1_addr = Wire(UInt(5.W))
    val rs2_addr = Wire(UInt(5.W))
    val rd_addr  = Wire(UInt(5.W))

    opcode   := inst( 6,  0)
    func3    := inst(14, 12)
    func7    := inst(31, 25)
    rs1_addr := inst(19, 15)
    rs2_addr := inst(24, 20)
    rd_addr  := inst(11,  7)

    val immI = Cat(Fill(52, inst(31)), inst(31, 20))
    val immU = Cat(Fill(32, inst(32)), inst(31, 12), Fill(12, 0.U))
    val immS = Cat(Fill(52, inst(31)), inst(31, 25), inst(11, 7))
    val immB = Cat(Fill(52, inst(31)), inst(7), inst(30, 25), inst(11, 8), 0.U(1.W))
    val immJ = Cat(Fill(44, inst(31)), inst(31), inst(19, 12), inst(20), inst(30, 21), Fill(1, 0.U))

    // IDU to EXU
    id_ex.inst_id_ex := if_id.inst_if_id
    id_ex.pc_id_ex   := if_id.pc_if_id    
    val func37 = Cat(func3, func7)
    //  List(op1_o, op2_o, rs1_addr_o, rs2_addr_o, rd_addr_o, reg_wen, base_addr_o, offset_addr_o)
    var id_ex_list  = ListLookup(func37, List(0.U(64.W), 0.U(64.W), 0.U(5.W), 0.U(5.W), 0.U(64.W), false.B, 0.U(64.W), 0.U(64.W)), Array(
        BitPat("b000_0010011") -> List(reg_id.rs1_data_reg_id, immI,                   rs1_addr,       0.U,          rd_addr,    1.B,   0.U,   0.U), //addi
        BitPat("b000_0110011") -> List(reg_id.rs1_data_reg_id, reg_id.rs2_data_reg_id, rs1_addr,       rs2_addr,     rd_addr,    1.B,   0.U,   0.U), //add        
    ))
    id_ex.op1_id_ex         := id_ex_list(0)
    id_ex.op2_id_ex         := id_ex_list(1)
    id_ex.rs1_addr_id_ex    := id_ex_list(2)
    id_ex.rs2_addr_id_ex    := id_ex_list(3)
    id_ex.rd_addr_id_ex     := id_ex_list(4)
    id_ex.reg_wen_id_ex     := id_ex_list(5)
    id_ex.base_addr_id_ex   := id_ex_list(6)
    id_ex.offset_addr_id_ex := id_ex_list(7)
}
