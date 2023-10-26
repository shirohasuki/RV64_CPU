package IDU

import chisel3._
import chisel3.util._
import chisel3.stage._

import define.MACRO._

class IFID_IDU_Input extends Bundle {
    val inst = Input(UInt(32.W))
    val pc   = Input(UInt(64.W))
}

class Redirect_IDU_Input extends Bundle {
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
    val opcode      = Output(UInt(7.W))
    val func3       = Output(UInt(3.W))
    val func7       = Output(UInt(7.W))
}

class IDU_Redirect_Output extends Bundle {
    val rs1_raddr = Output(UInt(5.W))
    val rs2_raddr = Output(UInt(5.W))
}

class IDU extends Module {
    val ifid_id      = IO(new IFID_IDU_Input())
    val redirect_id  = IO(new Redirect_IDU_Input())
    val id_idex      = IO(new IDU_IDEX_Output())
    val id_redirect  = IO(new IDU_Redirect_Output())

    val inst     = Wire(UInt(32.W))
    val opcode   = Wire(UInt(32.W))
    val func3    = Wire(UInt(3.W))
    val func7    = Wire(UInt(7.W))
    val shamt    = Wire(UInt(5.W))
    val rs1_addr = Wire(UInt(5.W))
    val rs2_addr = Wire(UInt(5.W))
    val rd_addr  = Wire(UInt(5.W))

    inst     := ifid_id.inst
    opcode   := inst( 6,  0)
    func3    := inst(14, 12)
    func7    := inst(31, 25)
    shamt    := inst(25, 20)
    rs1_addr := inst(19, 15)
    rs2_addr := inst(24, 20)
    rd_addr  := inst(11,  7)

    val immI = Cat(Fill(52, inst(31)), inst(31, 20))
    val immU = Cat(Fill(32, inst(31)), inst(31, 12), Fill(12, 0.U))
    val immS = Cat(Fill(52, inst(31)), inst(31, 25), inst(11, 7))
    val immB = Cat(Fill(52, inst(31)), inst(7),  inst(30, 25), inst(11, 8), 0.U(1.W))
    val immJ = Cat(Fill(44, inst(31)), inst(31), inst(19, 12), inst(20), inst(30, 21), Fill(1, 0.U))
    val immL = Cat(Fill(52, inst(31)), inst(31, 20))
        

    id_idex.inst    := ifid_id.inst
    id_idex.pc      := ifid_id.pc  
    id_idex.opcode  := opcode  
    id_idex.func3   := func3   
    id_idex.func7   := func7   
    
    //  List(op1_o, op2_o, rs1_addr_o, rs2_addr_o, rd_addr_o, rd_wen, base_addr_o, offset_addr_o)
    val default_decode_list = List(0.U(64.W), 0.U(64.W), 0.U(5.W), 0.U(5.W), 0.U(64.W), false.B, 0.U(64.W), 0.U(64.W))
    val decode_list  = ListLookup(opcode, default_decode_list, Array(
        INST_TYPE_I     -> ListLookup(func3, default_decode_list, Array(
                            INST_ADDI, INST_SLTI, INST_SLTIU, INST_XORI, INST_ORI, INST_ANDI -> List(redirect_id.rs1_rdata, immI, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U), 
                            INST_SLLI, INST_SRI                                              -> List(redirect_id.rs1_rdata, Cat(Fill(58, 0.U), shamt), rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U)))
        INST_TYPE_I_W   -> ListLookup(func3, default_decode_list, Array(
                            INST_ADDIW                                                       -> List(redirect_id.rs1_rdata, immI, rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U),  
                            INST_SLLIW,INST_SRIW                                             -> List(redirect_id.rs1_rdata, Cat(Fill(58, 0.U), shamt), rs1_addr, 0.U, rd_addr, true.B, 0.U, 0.U)))
        INST_TYPE_R_M   -> ListLookup(func3, default_decode_list, Array(
                            INST_ADD_SUB_MUL, INST_SLT, INST_SLTU, INST_XOR_DIV, INST_OR_REM, INST_AND_REMU -> List(redirect_id.rs1_rdata, redirect_id.rs2_rdata, rs1_addr, rs2_addr, rd_addr, true.B, 0.U, 0.U)  
                            INST_SLL     -> List(redirect_id.rs1_rdata, Cat(Fill(58, 0.U), redirect_id.rs2_rdata(5, 0)), rs1_addr, rs2_addr, rd_addr, true.B, 0.U, 0.U), 
                            INST_SR_DIVU -> Mux(func7 === INST_TYPE_R_FUN7, List(redirect_id.rs1_rdata, Cat(Fill(58, 0.U), redirect_id.rs2_rdata(5, 0)), rs1_addr, rs2_addr, rd_addr, true.B, 0.U, 0.U), 
                                                                  List(redirect_id.rs1_rdata, redirect_id.rs2_rdata, rs1_addr, rs2_addr, rd_addr, true.B, 0.U, 0.U))))
        INST_TYPE_R_M_W -> ListLookup(func3, default_decode_list, Array(
                            INST_ADDW_SUBW_MULW, INST_DIVW, INST_SLLW, INST_REMW, INST_REMUW, INST_SRW_DIVUW -> List(redirect_id.rs1_rdata, redirect_id.rs2_rdata, rs1_addr, rs2_addr, rd_addr, true.B, 0.U, 0.U)))
        INST_TYPE_B     -> ListLookup(func3, default_decode_list, Array(
                            INST_BNE, INST_BEQ, INST_BLT, INST_BLTU, INST_BGE, INST_BGEU -> List(redirect_id.rs1_rdata, redirect_id.rs2_rdata, rs1_addr, rs2_addr, 0.U, false.B, ifid_id.pc, immB)))
        INST_TYPE_L     -> ListLookup(func3, default_decode_list, Array(
                            INST_LB, INST_LH, INST_LW, INST_LD, INST_LBU, INST_LHU, INST_LWU -> List(redirect_id.rs1_rdata, immL, rs1_addr, rs2_addr, rd_addr, true.B, redirect_id.rs1_rdata, immL)))
        INST_TYPE_S     -> ListLookup(func3, default_decode_list, Array(
                            INST_SB, INST_SH, INST_SW, INST_SD -> List(0.U, redirect_id.rs2_rdata, rs1_addr, rs2_addr, 0.U, false.B, redirect_id.rs1_rdata, immS)))
        INST_JAL_OP     -> List(ifid_id.pc, 4.U,  0.U,      0.U, rd_addr, true.B, ifid_id.pc,            immJ)
        INST_JALR_OP    -> List(ifid_id.pc, 4.U,  rs1_addr, 0.U, rd_addr, true.B, redirect_id.rs1_rdata, immI)
        INST_LUI_OP     -> List(0.U,        immU, 0.U,      0.U, rd_addr, true.B, 0.U,                   0.U )
        INST_AUIPC_OP   -> List(ifid_id.pc, immU, 0.U,      0.U, rd_addr, true.B, 0.U,                   immU)
    ))

    id_idex.op1             := decode_list(0)
    id_idex.op2             := decode_list(1)
    id_redirect.rs1_raddr   := decode_list(2)
    id_redirect.rs2_raddr   := decode_list(3)
    id_idex.rd_addr         := decode_list(4)
    id_idex.rd_wen          := decode_list(5)
    id_idex.base_addr       := decode_list(6)
    id_idex.offset_addr     := decode_list(7)
}
