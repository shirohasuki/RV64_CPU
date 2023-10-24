package IDU

import chisel3._
import chisel3.util._
import chisel3.stage._

import define.MACRO._

class IFID_IDU_Input extends Bundle {
    val inst = Input(UInt(32.W))
    val pc   = Input(UInt(64.W))
}

class REG_IDU_Input extends Bundle {
    val rs1_rdata   = Input(UInt(64.W))
    val rs2_rdata   = Input(UInt(64.W))
}

class IDU_IDEX_Output extends Bundle {
    val inst        = Output(UInt(32.W))
    val pc          = Output(UInt(64.W))
    val op1         = Output(UInt(64.W))
    val op2         = Output(UInt(64.W))
    val rd_addr     = Output(UInt(5.W))
    val rd_wen      = Output(Bool())
    val base_addr   = Output(UInt(64.W))
    val offset_addr = Output(UInt(64.W))
}

class IDU_REG_Output extends Bundle {
    val rs1_raddr = Output(UInt(5.W))
    val rs2_raddr = Output(UInt(5.W))
}

class IDU extends Module {
    val io = IO(new Bundle{
        val ifid_id = new IFID_IDU_Input()
        val reg_id  = new REG_IDU_Input()
        val id_idex = new IDU_IDEX_Output()
        val id_reg  = new IDU_REG_Output()
    })

    val inst     = Wire(UInt(32.W))
    val opcode   = Wire(UInt(32.W))
    val func3    = Wire(UInt(3.W))
    val func7    = Wire(UInt(7.W))
    val rs1_addr = Wire(UInt(5.W))
    val rs2_addr = Wire(UInt(5.W))
    val rd_addr  = Wire(UInt(5.W))

    inst     := io.id_idex.inst
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
    io.id_idex.inst := io.ifid_id.inst
    io.id_idex.pc   := io.ifid_id.pc  
    val func37 = Cat(func3, func7)
    //  List(op1_o, op2_o, rs1_addr_o, rs2_addr_o, rd_addr_o, rd_wen, base_addr_o, offset_addr_o)
    var decode_list  = ListLookup(func37, List(0.U(64.W), 0.U(64.W), 0.U(5.W), 0.U(5.W), 0.U(64.W), false.B, 0.U(64.W), 0.U(64.W)), Array(
        BitPat("b000_0010011") -> List(io.reg_id.rs1_rdata, immI,                rs1_addr,       0.U,          rd_addr,    1.B,   0.U,   0.U), //addi
        BitPat("b000_0110011") -> List(io.reg_id.rs1_rdata, io.reg_id.rs2_rdata, rs1_addr,       rs2_addr,     rd_addr,    1.B,   0.U,   0.U), //add        
    ))
    io.id_idex.op1         := decode_list(0)
    io.id_idex.op2         := decode_list(1)
    io.id_reg.rs1_raddr    := decode_list(2)
    io.id_reg.rs2_raddr    := decode_list(3)
    io.id_idex.rd_addr     := decode_list(4)
    io.id_idex.rd_wen      := decode_list(5)
    io.id_idex.base_addr   := decode_list(6)
    io.id_idex.offset_addr := decode_list(7)
}
