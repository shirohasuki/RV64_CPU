package IDU

import chisel3._
import chisel3.util._
import chisel3.stage._

import define.defines._

class IFU_IDU_Input extends Bundle {
    val inst = Input(UInt(32.W))
    val pc   = Input(UInt(64.W))
}

class REG_IDU_Input extends Bundle {
    val rs1_data   = Input(UInt(64.W))
    val rs2_data   = Input(UInt(64.W))
}

class IDU_EXU_Output extends Bundle {
    val inst        = Output(UInt(32.W))
    val pc          = Output(UInt(64.W))
    val op1         = Output(UInt(64.W))
    val op2         = Output(UInt(64.W))
    // val rs1_raddr    = Output(UInt(5.W))
    // val rs2_raddr    = Output(UInt(5.W))
    val rd_addr     = Output(UInt(5.W))
    val rd_wen     = Output(Bool())
    val base_addr   = Output(UInt(64.W))
    val offset_addr = Output(UInt(64.W))
}

class IDU_REG_Output extends Bundle {
    val rs1_raddr = Output(UInt(5.W))
    val rs2_raddr = Output(UInt(5.W))
}

class IDU extends Module {
    // // val io = IO(new Bundle {
    val if_id   = IO(new IFU_IDU_Input())
    val reg_id  = IO(new REG_IDU_Input())
    val id_ex   = IO(new IDU_EXU_Output())
    val id_reg  = IO(new IDU_REG_Output())
    // // })

    val inst     = Wire(UInt(32.W))
    val opcode   = Wire(UInt(32.W))
    val func3    = Wire(UInt(3.W))
    val func7    = Wire(UInt(7.W))
    val rs1_addr = Wire(UInt(5.W))
    val rs2_addr = Wire(UInt(5.W))
    val rd_addr  = Wire(UInt(5.W))

    inst     := id_ex.inst
    opcode   := inst( 6,  0)
    func3    := inst(14, 12)
    func7    := inst(31, 25)
    rs1_addr := inst(19, 15)
    rs2_addr := inst(24, 20)
    rd_addr  := inst(11,  7)

    val immI = Cat(Fill(52, inst(31)), inst(31, 20))
    val immU = Cat(Fill(32, inst(31)), inst(31, 12), Fill(12, 0.U))
    val immS = Cat(Fill(52, inst(31)), inst(31, 25), inst(11, 7))
    val immB = Cat(Fill(52, inst(31)), inst(7), inst(30, 25), inst(11, 8), 0.U(1.W))
    val immJ = Cat(Fill(44, inst(31)), inst(31), inst(19, 12), inst(20), inst(30, 21), Fill(1, 0.U))
        
    // IDU to EXU & reg
    id_ex.inst := if_id.inst
    id_ex.pc   := if_id.pc  
    val func37 = Cat(func3, func7)
    //  List(op1_o, op2_o, rs1_addr_o, rs2_addr_o, rd_addr_o, rd_wen, base_addr_o, offset_addr_o)
    var decode_list  = ListLookup(func37, List(0.U(64.W), 0.U(64.W), 0.U(5.W), 0.U(5.W), 0.U(64.W), false.B, 0.U(64.W), 0.U(64.W)), Array(
        BitPat("b000_0010011") -> List(reg_id.rs1_data, immI,            rs1_addr,       0.U,          rd_addr,    1.B,   0.U,   0.U), //addi
        BitPat("b000_0110011") -> List(reg_id.rs1_data, reg_id.rs2_data, rs1_addr,       rs2_addr,     rd_addr,    1.B,   0.U,   0.U), //add        
    ))
    id_ex.op1         := decode_list(0)
    id_ex.op2         := decode_list(1)
    id_reg.rs1_raddr  := decode_list(2)
    id_reg.rs2_raddr  := decode_list(3)
    id_ex.rd_addr     := decode_list(4)
    id_ex.rd_wen      := decode_list(5)
    id_ex.base_addr   := decode_list(6)
    id_ex.offset_addr := decode_list(7)
}
