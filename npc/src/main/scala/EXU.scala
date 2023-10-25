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
    val opcode      = Input(UInt(7.W))
    val func3       = Input(UInt(3.W))
    val func7       = Input(UInt(7.W))
}

class EXU_CTRL_Output extends Bundle {
    val ex_inst_isload  = Output(Bool())
    val ex_inst_isstore = Output(Bool())
    val typej_jump_en   = Output(Bool())
    val typej_jump_addr = Output(UInt(64.W))
}

class EXU_EXMEM_Output extends Bundle {
    // mem use
    val inst            = Output(UInt(32.W))
    val pc              = Output(UInt(64.W))
    val mem_ren         = Output(Bool())
    val mem_raddr       = Output(UInt(64.W))
    val mem_wen         = Output(Bool())
    val mem_waddr       = Output(UInt(64.W))
    val mem_wdata       = Output(UInt(64.W))
    val mem_wmask       = Output(UInt(8.W))
    val ex_inst_isload  = Output(Bool())
    val ex_inst_isstore = Output(Bool())

    // wb use
    val rd_wdata  = Output(UInt(64.W))
    val rd_waddr  = Output(UInt(64.W))
    val rd_wen    = Output(Bool())
}

class EXU_Redirect_Output extends Bundle {
    val rd_wen         = Output(Bool())
    val rd_waddr       = Output(UInt(64.W))
    val rd_wdata       = Output(UInt(64.W))
}

class EXU extends Module {
    // val io = IO(new Bundle {
    val idex_ex     = IO(new IDEX_EXU_Input())
    val ex_exmem    = IO(new EXU_EXMEM_Output())
    val ex_ctrl     = IO(new EXU_CTRL_Output())
    val ex_redirect = IO(new EXU_Redirect_Output())
    // })
    
    // 定义各种op
    def add                       (op1: UInt, op2: UInt): UInt = op1 +& op2
    def sub                       (op1: UInt, op2: UInt): UInt = op1 -& op2
    def mul                       (op1: UInt, op2: UInt): UInt = op1 * op2
    def and                       (op1: UInt, op2: UInt): UInt = op1 & op2
    def xor                       (op1: UInt, op2: UInt): UInt = op1 ^ op2
    def or                        (op1: UInt, op2: UInt): UInt = op1 | op2
    def rem                       (op1: UInt, op2: UInt): UInt = (op1.asSInt % op2.asSInt).asUInt
    def rem_unsigned              (op1: UInt, op2: UInt): UInt = op1 % op2
    def div                       (op1: UInt, op2: UInt): UInt = (op1.asSInt / op2.asSInt).asUInt
    def div_unsigned              (op1: UInt, op2: UInt): UInt = op1 / op2
    def shift_left_unsigned       (op1: UInt, op2: UInt, shamt_width: UInt): UInt = op1 << op2(shamt_width-1, 0)
    def shift_right_unsigned      (op1: UInt, op2: UInt, shamt_width: UInt): UInt = op1 >> op2(shamt_width-1, 0)
    def shift_right_signed        (op1: UInt, op2: UInt, shamt_width: UInt): UInt = (op1.asSInt >> op2(shamt_width, 0)).asUInt
    def equal                     (op1: UInt, op2: UInt): UInt = op1 === op2
    def less_signed               (op1: UInt, op2: UInt): UInt = op1 < op2
    def less_unsigned             (op1: UInt, op2: UInt): UInt = op1.asSInt < op2.asSInt
        
    // 压缩系列
    def SEXT (short: UInt): UInt = Cat(Fill(32, short), short(31, 0))

    def compress_sub                  (op1: UInt, op2: UInt): UInt =  SEXT(                    sub(op1(31, 0), op2(31, 0)))
    def compress_add                  (op1: UInt, op2: UInt): UInt =  SEXT(                    add(op1(31, 0), op2(31, 0)))
    def compress_mul                  (op1: UInt, op2: UInt): UInt =  SEXT(                    mul(op1(31, 0), op2(31, 0)))
    def compress_and                  (op1: UInt, op2: UInt): UInt =  SEXT(                    and(op1(31, 0), op2(31, 0)))
    def compress_xor                  (op1: UInt, op2: UInt): UInt =  SEXT(                    xor(op1(31, 0), op2(31, 0)))
    def compress_or                   (op1: UInt, op2: UInt): UInt =  SEXT(                     or(op1(31, 0), op2(31, 0)))
    def compress_rem                  (op1: UInt, op2: UInt): UInt =  SEXT(                    rem(op1(31, 0), op2(31, 0)))
    def compress_rem_unsigned         (op1: UInt, op2: UInt): UInt =  SEXT(           rem_unsigned(op1(31, 0), op2(31, 0)))
    def compress_div                  (op1: UInt, op2: UInt): UInt =  SEXT(                    div(op1(31, 0), op2(31, 0)))
    def compress_div_unsigned         (op1: UInt, op2: UInt): UInt =  SEXT(           div_unsigned(op1(31, 0), op2(31, 0)))
    def compress_shift_left_unsigned  (op1: UInt, op2: UInt): UInt =  SEXT( shift_left_unsigned(op1(31, 0), op2(31, 0), 5.U))
    def compress_shift_right_unsigned (op1: UInt, op2: UInt): UInt =  SEXT(shift_right_unsigned(op1(31, 0), op2(31, 0), 5.U))
    def compress_shift_right_signed   (op1: UInt, op2: UInt): UInt =  SEXT(  shift_right_signed(op1(31, 0), op2(31, 0), 5.U))

    val op1         = idex_ex.op1
    val op2         = idex_ex.op2
    val rd_addr     = idex_ex.rd_addr       
    val base_addr   = idex_ex.base_addr  
    val offset_addr = idex_ex.offset_addr

    val     Rd_Write = true.B
    val   NORd_Write = false.B
    val    MEM_Write = true.B
    val  NOMEM_Write = false.B
    val     MEM_Read = true.B
    val   NOMEM_Read = false.B
    val   TypeJ_Jump = true.B
    val NOTypeJ_Jump = false.B

    //                      List(rd_wen,  rd_waddr, rd_wdata,    mem_ren,    mem_raddr,  mem_wen,    mem_wmask,  mem_wdata, mem_waddr, typej_jump_en, typej_jump_addr)
    val default_exce_list = List(NORd_Write, 0.U(5.W), 0.U(64.W), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W),  0.U(64.W), 0.U(64.W), NOTypeJ_Jump,  0.U(64.W))
    val exce_list  = ListLookup(idex_ex.opcode, default_exce_list, Array(
        INST_TYPE_I     -> ListLookup(idex_ex.func3, default_exce_list, Array(
                            INST_ADDI       -> List(Rd_Write, rd_addr,                   add(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),
                            INST_SLTI       -> List(Rd_Write, rd_addr,           less_signed(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),
                            INST_SLTIU      -> List(Rd_Write, rd_addr,         less_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),
                            INST_XORI       -> List(Rd_Write, rd_addr,                   xor(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),
                            INST_ORI        -> List(Rd_Write, rd_addr,                    or(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),
                            INST_AND        -> List(Rd_Write, rd_addr,                   and(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),
                            INST_SLLI       -> List(Rd_Write, rd_addr,shift_left_unsigned(op1, op2, 6.U), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),
                            INST_SRI        -> Mux(idex_ex.func7(5) === 1.U, List(Rd_Write, rd_addr, shift_right_signed(op1, op2, 6.U), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W))), 
                                                                           List(Rd_Write, rd_addr, shift_right_unsigned(op1, op2, 6.U), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W))))
        INST_TYPE_I_W   -> ListLookup(idex_ex.func3, default_exce_list, Array(
                            INST_ADDIW      -> List(Rd_Write, rd_addr,                compress_add(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),
                            INST_SLLIW      -> List(Rd_Write, rd_addr,compress_shift_left_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),
                            INST_SRIW       -> Mux(idex_ex.func7(5) === 1.U, List(Rd_Write, rd_addr, compress_shift_right_signed(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)), List(Rd_Write, rd_addr, compress_shift_right_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)))))
        INST_TYPE_R_M   -> ListLookup(idex_ex.func3, default_exce_list, Array(
                            INST_ADD_SUB_MUL-> Mux(idex_ex.func7(5) === 1.U, List(Rd_Write, rd_addr, sub(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)), // sub
                                                  (idex_ex.func7(0) === 1.U, List(Rd_Write, rd_addr, mul(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)), // mul
                                                                              List(Rd_Write, rd_addr, add(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)))), // add 
                            INST_SLT        -> List(Rd_Write, rd_addr,        less_signed(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),
                            INST_SLTU       -> List(Rd_Write, rd_addr,      less_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),
                            INST_XOR_DIV    -> Mux(idex_ex.func7(0) === 1.U, List(Rd_Write, rd_addr, div(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W))), // div
                                                                              List(Rd_Write, rd_addr, xor(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W))),  // xor
                            INST_OR_REM     -> Mux(idex_ex.func7(0) === 1.U, List(Rd_Write, rd_addr, rem(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W))),  // rem
                                                                              List(Rd_Write, rd_addr,  or(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),    // or
                            INST_AND_REMU   -> Mux(idex_ex.func7(0) === 1.U, List(Rd_Write, rd_addr, rem_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)), // remu
                                                                              List(Rd_Write, rd_addr,          and(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W))) // and
                            INST_SLL        -> List(Rd_Write, rd_addr,shift_left_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W))
                            INST_SR_DIVU    -> Mux(idex_ex.func7(5) === 1.U, List(Rd_Write, rd_addr,   shift_right_signed(op1, op2, 6.U), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),  // SRA 算术右移
                                                  (idex_ex.func7(0) === 1.U, List(Rd_Write, rd_addr,         div_unsigned(op1, op2, 6.U), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),  // divu 
                                                                              List(Rd_Write, rd_addr, shift_right_unsigned(op1, op2, 6.U), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)))))  // SRL 逻辑右移
        INST_TYPE_R_M_W -> ListLookup(idex_ex.func3, default_exce_list, Array(
                            INST_ADDW_SUBW_MULW -> Mux(idex_ex.func7(5) === 1.U, List(Rd_Write, rd_addr, compress_sub(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)), // sub
                                                      (idex_ex.func7(0) === 1.U, List(Rd_Write, rd_addr, compress_mul(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),  // mul
                                                                                  List(Rd_Write, rd_addr, compress_add(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)))),  // add
                            INST_DIVW       -> List(Rd_Write, rd_addr,          compress_div(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),
                            INST_SLLW       -> List(Rd_Write, rd_addr,   shift_left_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),
                            INST_REMW       -> List(Rd_Write, rd_addr,          compress_rem(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),
                            INST_REMUW      -> List(Rd_Write, rd_addr, compress_rem_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),
                            INST_SRW_DIVUW  -> Mux(idex_ex.func7(5) === 1.U, List(Rd_Write, rd_addr,    compress_shift_right_signed(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),  // SRAW 算术右移
                                                  (idex_ex.func7(0) === 1.U, List(Rd_Write, rd_addr,          compress_div_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W)),  // divuw  
                                                                              List(Rd_Write, rd_addr,  compress_shift_right_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W))))))  // SRLW 逻辑右移 
        INST_TYPE_B     -> ListLookup(idex_ex.func3, default_exce_list, Array(
                            INST_BNE        -> List(NORd_Write, 0.U(64.W), 0.U(64.W), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W),         ~equal(op1, op2), add(base_addr, offset_addr)),
                            INST_BEQ        -> List(NORd_Write, 0.U(64.W), 0.U(64.W), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W),          equal(op1, op2), add(base_addr, offset_addr)),
                            INST_BLT        -> List(NORd_Write, 0.U(64.W), 0.U(64.W), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W),    less_signed(op1, op2), add(base_addr, offset_addr)),
                            INST_BLTU       -> List(NORd_Write, 0.U(64.W), 0.U(64.W), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W),  less_unsigned(op1, op2), add(base_addr, offset_addr)),
                            INST_BGE        -> List(NORd_Write, 0.U(64.W), 0.U(64.W), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W),   ~less_signed(op1, op2), add(base_addr, offset_addr)),
                            INST_BGEU       -> List(NORd_Write, 0.U(64.W), 0.U(64.W), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), ~less_unsigned(op1, op2), add(base_addr, offset_addr))))
        INST_TYPE_L     -> ListLookup(idex_ex.func3, default_exce_list, Array( // EXU不提供wdata
                            INST_LB, INST_LH, INST_LW, INST_LD,INST_LBU, INST_LHU, INST_LWU -> List(Rd_Write, rd_addr, 0.U(64.W), MEM_Read, add(base_addr, offset_addr), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W))))
        INST_TYPE_S     -> ListLookup(idex_ex.func3, default_exce_list, Array(
                            INST_SB         -> List(NORd_Write, 0.U(64.W), 0.U(64.W), MEM_Read, add(base_addr, offset_addr), MEM_Write, b00000001.U, Cat(Fill(56, 0.U), op2(7,  0)), add(base_addr, offset_addr), NOTypeJ_Jump, 0.U(64.W))         
                            INST_SH         -> List(NORd_Write, 0.U(64.W), 0.U(64.W), MEM_Read, add(base_addr, offset_addr), MEM_Write, b00000011.U, Cat(Fill(48, 0.U), op2(15, 0)), add(base_addr, offset_addr), NOTypeJ_Jump, 0.U(64.W)) 
                            INST_SW         -> List(NORd_Write, 0.U(64.W), 0.U(64.W), MEM_Read, add(base_addr, offset_addr), MEM_Write, b00001111.U, Cat(Fill(32, 0.U), op2(31, 0)), add(base_addr, offset_addr), NOTypeJ_Jump, 0.U(64.W)) 
                            INST_SD         -> List(NORd_Write, 0.U(64.W), 0.U(64.W), MEM_Read, add(base_addr, offset_addr), MEM_Write, b11111111.U, op2, add(base_addr, offset_addr), NOTypeJ_Jump, 0.U(64.W))))         
        INST_JAL_OP, INST_JALR_OP -> List(Rd_Write, rd_addr, add(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W),  0.U(64.W), 0.U(64.W), TypeJ_Jump, add(base_addr, offset_addr))
        INST_LUI_OP     -> List(Rd_Write, rd_addr,           op2, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W),  0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W))
        INST_AUIPC_OP   -> List(Rd_Write, rd_addr, add(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W),  0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W))
    ))

    // ex to exmem 
    ex_exmem.inst := idex_ex.inst
    ex_exmem.pc   := idex_ex.pc

    ex_exmem.rd_wen   := exce_list(0)
    ex_exmem.rd_waddr := exce_list(1)
    ex_exmem.rd_wdata := exce_list(2)

    ex_exmem.mem_ren         := exce_list(3)
    ex_exmem.mem_raddr       := exce_list(4)
    ex_exmem.mem_wen         := exce_list(5)
    ex_exmem.mem_waddr       := exce_list(8)
    ex_exmem.mem_wdata       := exce_list(7)
    ex_exmem.mem_wmask       := exce_list(6)
    ex_exmem.ex_inst_isload  := exce_list(3)
    ex_exmem.ex_inst_isstore := exce_list(5)

    // ex to redirect
    ex_redirect.rd_wen   := exce_list(0)
    ex_redirect.rd_waddr := exce_list(1)
    ex_redirect.rd_wdata := exce_list(2)
    
    // ex to ctrl 
    ex_ctrl.ex_inst_isload  = exce_list(3)
    ex_ctrl.ex_inst_isstore = exce_list(5)
    ex_ctrl.typej_jump_en   = exce_list(9)
    ex_ctrl.typej_jump_addr = exce_list(10)
}
