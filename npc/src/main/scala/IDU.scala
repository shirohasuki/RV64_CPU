/*************************************************************************
    > File Name: IDU.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-10-24 22:24:18
    > Description: 
*************************************************************************/

package IDU

import chisel3._
import chisel3.util._
import chisel3.stage._

import define.MACRO._

class IFID_IDU_Input extends Bundle {
    val inst = Input(UInt(32.W))
    val pc   = Input(UInt(64.W))
}

class Bypass_IDU_Input extends Bundle {
    val rs1_rdata   = Input(UInt(64.W))
    val rs2_rdata   = Input(UInt(64.W))
    val csr_rdata   = Input(UInt(64.W))
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
    val opcode      = Output(UInt(7.W))
    val func3       = Output(UInt(3.W))
    val func7       = Output(UInt(7.W))
    val csr_wen     = Output(Bool())
    val csr_waddr   = Output(UInt(12.W))
}

class IDU_Bypass_Output extends Bundle {
    val rs1_raddr = Output(UInt(5.W))
    val rs2_raddr = Output(UInt(5.W))
    val csr_raddr = Output(UInt(12.W))
}

class IDU_IDClint_Output extends Bundle {
    val inst = Output(UInt(32.W))
    val pc   = Output(UInt(64.W))
}


class IDU extends Module {
    val ifid_id     = IO(new IFID_IDU_Input())
    val bypass_id   = IO(new Bypass_IDU_Input())
    val id_idex     = IO(new IDU_IDEX_Output())
    val id_bypass   = IO(new IDU_Bypass_Output())
    val id_idclint  = IO(new IDU_IDClint_Output())

    val inst     = Wire(UInt(32.W))
    val opcode   = Wire(UInt(32.W))
    val func3    = Wire(UInt(3.W))
    val func7    = Wire(UInt(7.W))
    val shamt    = Wire(UInt(6.W))
    val rs1_addr = Wire(UInt(5.W))
    val rs2_addr = Wire(UInt(5.W))
    val csr_addr = Wire(UInt(12.W))
    val rd_addr  = Wire(UInt(5.W))

    inst     := ifid_id.inst
    opcode   := inst( 6,  0)
    func3    := inst(14, 12)
    func7    := inst(31, 25)
    shamt    := inst(25, 20)
    rs1_addr := inst(19, 15)
    rs2_addr := inst(24, 20)
    csr_addr := inst(31, 20)
    rd_addr  := inst(11,  7)

    val immI = Cat(Fill(52, inst(31)), inst(31, 20))
    val immU = Cat(Fill(32, inst(31)), inst(31, 12), Fill(12, 0.U))
    val immS = Cat(Fill(52, inst(31)), inst(31, 25), inst(11, 7))
    val immB = Cat(Fill(52, inst(31)), inst(7),  inst(30, 25), inst(11, 8), 0.U(1.W))
    val immJ = Cat(Fill(44, inst(31)), inst(31), inst(19, 12), inst(20), inst(30, 21), Fill(1, 0.U))
    val immL = Cat(Fill(52, inst(31)), inst(31, 20))
    val immZ = Cat(Fill(59, inst(19)), inst(19, 15))
    
    val shamt_zext = Wire(UInt(64.W)) 
    shamt_zext := Cat(Fill(58, 0.U), shamt)


    // to ex
    id_idex.inst    := ifid_id.inst
    id_idex.pc      := ifid_id.pc  
    id_idex.opcode  := opcode  
    id_idex.func3   := func3   
    id_idex.func7   := func7   
    // to clint
    id_idclint.inst    := ifid_id.inst
    id_idclint.pc      := ifid_id.pc  
    
    //  List(op1_o, op2_o, rs1_addr_o, rs2_addr_o, rd_addr_o, rd_wen, base_addr_o, offset_addr_o, csr_wen, csr_waddr)
    val default_decode_list = List(0.U(64.W), 0.U(64.W), 0.U(5.W), 0.U(5.W), 0.U(64.W), false.B, 0.U(64.W), 0.U(64.W), false.B, 0.U)
    val decode_list  = ListLookup(opcode, default_decode_list, Array(
        INST_TYPE_I  -> ListLookup(func3, default_decode_list, Array(
                            INST_ADDI       -> List(bypass_id.rs1_rdata, immI, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U, false.B, 0.U),
                            INST_SLTI       -> List(bypass_id.rs1_rdata, immI, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U, false.B, 0.U),
                            INST_SLTIU      -> List(bypass_id.rs1_rdata, immI, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U, false.B, 0.U),
                            INST_XORI       -> List(bypass_id.rs1_rdata, immI, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U, false.B, 0.U),
                            INST_ORI        -> List(bypass_id.rs1_rdata, immI, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U, false.B, 0.U),
                            INST_AND        -> List(bypass_id.rs1_rdata, immI, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U, false.B, 0.U),
                            INST_SLLI       -> List(bypass_id.rs1_rdata, shamt_zext, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U, false.B, 0.U),
                            INST_SRI        -> List(bypass_id.rs1_rdata, shamt_zext, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U, false.B, 0.U))),
        INST_TYPE_I_W   -> ListLookup(func3, default_decode_list, Array(
                            INST_ADDIW      -> List(bypass_id.rs1_rdata, immI, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U, false.B, 0.U),
                            INST_SLLIW      -> List(bypass_id.rs1_rdata, shamt_zext, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U, false.B, 0.U),
                            INST_SRIW       -> List(bypass_id.rs1_rdata, shamt_zext, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U, false.B, 0.U))), 
        INST_TYPE_R_M   -> List(bypass_id.rs1_rdata, bypass_id.rs2_rdata, rs1_addr, rs2_addr, rd_addr, true.B, 0.U, 0.U, false.B, 0.U), 
        INST_TYPE_R_M_W -> List(bypass_id.rs1_rdata, bypass_id.rs2_rdata, rs1_addr, rs2_addr, rd_addr, true.B, 0.U, 0.U, false.B, 0.U),
        INST_TYPE_B     -> List(bypass_id.rs1_rdata, bypass_id.rs2_rdata, rs1_addr, rs2_addr, 0.U, false.B, ifid_id.pc, immB, false.B, 0.U),
        INST_TYPE_L     -> List(bypass_id.rs1_rdata, immL, rs1_addr, rs2_addr, rd_addr, true.B, bypass_id.rs1_rdata, immL, false.B, 0.U),
        INST_TYPE_S     -> List(0.U, bypass_id.rs2_rdata, rs1_addr, rs2_addr, 0.U, false.B, bypass_id.rs1_rdata, immS, false.B, 0.U),
        INST_JAL_OP     -> List(ifid_id.pc, 4.U,  0.U,      0.U, rd_addr, true.B, ifid_id.pc,            immJ, false.B, 0.U),
        INST_JALR_OP    -> List(ifid_id.pc, 4.U,  rs1_addr, 0.U, rd_addr, true.B, bypass_id.rs1_rdata,   immI, false.B, 0.U),
        INST_LUI_OP     -> List(0.U,        immU, 0.U,      0.U, rd_addr, true.B, 0.U,                   0.U , false.B, 0.U),
        INST_AUIPC_OP   -> List(ifid_id.pc, immU, 0.U,      0.U, rd_addr, true.B, 0.U,                   immU, false.B, 0.U),
        INST_TYPE_INTR  -> ListLookup(func3, default_decode_list, Array(
                            INST_CSRRW      -> List(bypass_id.csr_rdata, bypass_id.rs1_rdata, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U, true.B, csr_addr),  
                            INST_CSRRS      -> List(bypass_id.csr_rdata, bypass_id.rs1_rdata, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U, true.B, csr_addr), 
                            INST_CSRRC      -> List(bypass_id.csr_rdata, bypass_id.rs1_rdata, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U, true.B, csr_addr), 
                            INST_CSRRWI     -> List(bypass_id.csr_rdata,                immZ, 0.U, 0.U, rd_addr, true.B, 0.U, 0.U, true.B, csr_addr), 
                            INST_CSRRSI     -> List(bypass_id.csr_rdata,                immZ, 0.U, 0.U, rd_addr, true.B, 0.U, 0.U, true.B, csr_addr),   
                            INST_CSRRCI     -> List(bypass_id.csr_rdata,                immZ, 0.U, 0.U, rd_addr, true.B, 0.U, 0.U, true.B, csr_addr)))
    ))

    // 为了降低复杂度，ID阶段SLL, SR相关的 op2 我全部直接使用了rs2的data，并没有只取低5/6位，需要EX截断截取，注意注意!

    id_idex.op1             := decode_list(0)
    id_idex.op2             := decode_list(1)
    id_bypass.rs1_raddr     := decode_list(2)
    id_bypass.rs2_raddr     := decode_list(3)
    id_bypass.csr_raddr     := csr_addr
    id_idex.rd_addr         := decode_list(4)
    id_idex.rd_wen          := decode_list(5)
    id_idex.base_addr       := decode_list(6)
    id_idex.offset_addr     := decode_list(7)
    id_idex.csr_wen         := decode_list(8)
    id_idex.csr_waddr       := decode_list(9)
}