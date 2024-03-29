/*************************************************************************
    > File Name: ALU.scala
    > Author: shiroha
    > Email: whmio0115@hainanu.edu.cn
    > Created Time: 2023-11-01 20:06:48
    > Description: 
*************************************************************************/

package EXU.ALU

import chisel3._
import chisel3.util._
import chisel3.stage._

import define.MACRO._
import define.function._

import EXU.MUL._
import EXU.DIV._

import DPIC.ebreak

class EXU_ALU_Input extends Bundle {
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
    val csr_wen     = Input(Bool())
    val csr_waddr   = Input(UInt(12.W))
}

class ALU_EXU_Output extends Bundle {
    val rd_wen          = Output(Bool()) 
    val rd_waddr        = Output(UInt(5.W))
    val rd_wdata        = Output(UInt(64.W))
    val inst_isload     = Output(Bool())
    val inst_isstore    = Output(Bool())
    val typej_jump_en   = Output(Bool())
    val typej_jump_addr = Output(UInt(64.W))
    val csr_wen         = Output(Bool())
    val csr_waddr       = Output(UInt(12.W))
    val csr_wdata       = Output(UInt(64.W))
    val alu_busy        = Output(Bool()) 
}

class ALU_LSU_Output extends Bundle {
    val func3           = Output(UInt(3.W))
    // val pc              = Output(UInt(64.W))
    val inst_isload     = Output(Bool())
    val inst_isstore    = Output(Bool())
    val rd_waddr        = Output(UInt(5.W))
    val dcache_ren      = Output(Bool())
    val dcache_raddr    = Output(UInt(64.W))
    val dcache_wen      = Output(Bool())
    val dcache_wmask    = Output(UInt(8.W))
    val dcache_wdata    = Output(UInt(64.W))
    val dcache_waddr    = Output(UInt(64.W))
}

class ALU extends Module {
    val ex_al = IO(new EXU_ALU_Input())
    val al_ex = IO(new ALU_EXU_Output())
    val al_ls = IO(new ALU_LSU_Output())

    // 定义各种op
    def add                       (op1: UInt, op2: UInt): UInt = op1 + op2
    def sub                       (op1: UInt, op2: UInt): UInt = op1 - op2
    def mul                       (op1: UInt, op2: UInt): UInt = op1 * op2
    def and                       (op1: UInt, op2: UInt): UInt = op1 & op2
    def xor                       (op1: UInt, op2: UInt): UInt = op1 ^ op2
    def or                        (op1: UInt, op2: UInt): UInt = op1 | op2
    def rem                       (op1: UInt, op2: UInt): UInt = (op1.asSInt() % op2.asSInt()).asUInt()
    def rem_unsigned              (op1: UInt, op2: UInt): UInt = op1.asUInt() % op2.asUInt()
    def div                       (op1: UInt, op2: UInt): UInt = (op1.asSInt() / op2.asSInt()).asUInt()
    def div_unsigned              (op1: UInt, op2: UInt): UInt = op1.asUInt() / op2.asUInt()
    def shift_left_unsigned       (op1: UInt, op2: UInt): UInt = op1 << op2(5, 0)
    def shift_right_unsigned      (op1: UInt, op2: UInt): UInt = op1 >> op2(5, 0)
    def shift_right_signed        (op1: UInt, op2: UInt): UInt = (op1.asSInt >> op2(5, 0)).asUInt
    def equal                     (op1: UInt, op2: UInt): UInt = op1 === op2
    def less_signed               (op1: UInt, op2: UInt): UInt = op1.asSInt < op2.asSInt
    def less_unsigned             (op1: UInt, op2: UInt): UInt = op1 < op2
        
    // 压缩系列
    def compress_sub                  (op1: UInt, op2: UInt): UInt =  SEXT(                    sub(op1, op2)(31, 0))
    def compress_add                  (op1: UInt, op2: UInt): UInt =  SEXT(                    add(op1, op2)(31, 0))
    def compress_mul                  (op1: UInt, op2: UInt): UInt =  SEXT(                    mul(op1, op2)(31, 0))
    def compress_and                  (op1: UInt, op2: UInt): UInt =  SEXT(                    and(op1, op2)(31, 0))
    def compress_xor                  (op1: UInt, op2: UInt): UInt =  SEXT(                    xor(op1, op2)(31, 0))
    def compress_or                   (op1: UInt, op2: UInt): UInt =  SEXT(                     or(op1, op2)(31, 0))
    def compress_rem                  (op1: UInt, op2: UInt): UInt =  SEXT(             rem(op1(31, 0), op2(31, 0)))
    def compress_rem_unsigned         (op1: UInt, op2: UInt): UInt =  SEXT(    rem_unsigned(op1(31, 0), op2(31, 0)))
    def compress_div                  (op1: UInt, op2: UInt): UInt =  SEXT(             div(op1(31, 0), op2(31, 0)))
    def compress_div_unsigned         (op1: UInt, op2: UInt): UInt =  SEXT(    div_unsigned(op1(31, 0), op2(31, 0)))
    def compress_shift_left_unsigned  (op1: UInt, op2: UInt): UInt =  SEXT(        (op1(31, 0) << op2(4, 0))(31, 0))
    def compress_shift_right_unsigned (op1: UInt, op2: UInt): UInt =  SEXT(        (op1(31, 0) >> op2(4, 0))(31, 0))
    def compress_shift_right_signed   (op1: UInt, op2: UInt): UInt =  SEXT( (op1(31, 0).asSInt >> op2(4, 0)).asUInt)

    val op1         = ex_al.op1
    val op2         = ex_al.op2
    val rd_addr     = ex_al.rd_addr       
    val base_addr   = ex_al.base_addr  
    val offset_addr = ex_al.offset_addr
    val csr_waddr   = ex_al.csr_waddr

    val     Rd_Write = true.B
    val   NORd_Write = false.B
    val    MEM_Write = true.B
    val  NOMEM_Write = false.B
    val     MEM_Read = true.B
    val   NOMEM_Read = false.B
    val   TypeJ_Jump = true.B
    val NOTypeJ_Jump = false.B
    val    CSR_Write = true.B
    val  NOCSR_Write = false.B

    // to mul
    val mul_product = WireInit(0.U(64.W))
    val inst_mul   = Module(new MUL)  
    when (((ex_al.opcode === INST_TYPE_R_M) | (ex_al.opcode === INST_TYPE_R_M_W)) && (ex_al.func3 === INST_ADD_SUB_MUL) && (ex_al.func7 === "b0000001".U)) {
        inst_mul.alu_mul_i.valid             := true.B
        inst_mul.alu_mul_i.bits.multiplier   := op1
        inst_mul.alu_mul_i.bits.multiplicand := op2
        inst_mul.alu_mul_i.bits.mul_signed   := 0.U
        inst_mul.alu_mul_i.bits.mulw         := 0.U
    }.otherwise {
        inst_mul.alu_mul_i.valid             := false.B
        inst_mul.alu_mul_i.bits.multiplier   := 0.U
        inst_mul.alu_mul_i.bits.multiplicand := 0.U
        inst_mul.alu_mul_i.bits.mul_signed   := 0.U
        inst_mul.alu_mul_i.bits.mulw         := 0.U
    } // mul

    when (inst_mul.mul_alu_o.valid) {
        mul_product := inst_mul.mul_alu_o.bits.mul_result 
    }.otherwise {
        mul_product := 0.U
    } 

    // to div
    val div_quotient    = WireInit(0.U(64.W))
    val div_remainder   = WireInit(0.U(64.W))
    val inst_div_64bit  = Module(new DIV(width = 64))  
    val inst_div_32bit  = Module(new DIV(width = 32))          

    when (((ex_al.opcode === INST_TYPE_R_M)) && ((ex_al.func3 === INST_XOR_DIV) | (ex_al.func3 === INST_OR_REM)) && (ex_al.func7 === "b0000001".U)) {
        inst_div_64bit.alu_div_i.valid             := true.B
        inst_div_64bit.alu_div_i.bits.dividend     := op1
        inst_div_64bit.alu_div_i.bits.divisor      := op2
        inst_div_64bit.alu_div_i.bits.div_signed   := "b11".U
        inst_div_64bit.alu_div_i.bits.divw         := 0.U
        // inst_div_32bit.alu_div_i <> inst_div_32bit_idle_bundle
        inst_div_32bit.alu_div_i.valid             := false.B
        inst_div_32bit.alu_div_i.bits.dividend     := 0.U
        inst_div_32bit.alu_div_i.bits.divisor      := 0.U
        inst_div_32bit.alu_div_i.bits.div_signed   := 0.U
        inst_div_32bit.alu_div_i.bits.divw         := 0.U
    }.elsewhen (((ex_al.opcode === INST_TYPE_R_M)) && ((ex_al.func3 === INST_SR_DIVU) | (ex_al.func3 === INST_AND_REMU)) && (ex_al.func7 === "b0000001".U)) {
        inst_div_64bit.alu_div_i.valid             := true.B
        inst_div_64bit.alu_div_i.bits.dividend     := op1
        inst_div_64bit.alu_div_i.bits.divisor      := op2
        inst_div_64bit.alu_div_i.bits.div_signed   := "b00".U
        inst_div_64bit.alu_div_i.bits.divw         := 0.U
        // inst_div_32bit.alu_div_i <> inst_div_32bit_idle_bundle
        inst_div_32bit.alu_div_i.valid             := false.B
        inst_div_32bit.alu_div_i.bits.dividend     := 0.U
        inst_div_32bit.alu_div_i.bits.divisor      := 0.U
        inst_div_32bit.alu_div_i.bits.div_signed   := 0.U
        inst_div_32bit.alu_div_i.bits.divw         := 0.U
    }.elsewhen (((ex_al.opcode === INST_TYPE_R_M_W)) && ((ex_al.func3 === INST_DIVW) | (ex_al.func3 === INST_REMW))) {
        inst_div_32bit.alu_div_i.valid             := true.B
        inst_div_32bit.alu_div_i.bits.dividend     := ZEXT(op1(31 ,0))
        inst_div_32bit.alu_div_i.bits.divisor      := ZEXT(op2(31 ,0))
        inst_div_32bit.alu_div_i.bits.div_signed   := "b00".U
        inst_div_32bit.alu_div_i.bits.divw         := 1.U
        // inst_div_64bit.alu_div_i <> inst_div_64bit_idle_bundle
        inst_div_64bit.alu_div_i.valid             := false.B
        inst_div_64bit.alu_div_i.bits.dividend     := 0.U
        inst_div_64bit.alu_div_i.bits.divisor      := 0.U
        inst_div_64bit.alu_div_i.bits.div_signed   := 0.U
        inst_div_64bit.alu_div_i.bits.divw         := 0.U
    }.elsewhen (((ex_al.opcode === INST_TYPE_R_M_W)) && ((ex_al.func3 === INST_SRW_DIVUW) | (ex_al.func3 === INST_REMUW)) && (ex_al.func7 === "b0000001".U)) {
        inst_div_32bit.alu_div_i.valid             := true.B
        inst_div_32bit.alu_div_i.bits.dividend     := ZEXT(op1(31 ,0))
        inst_div_32bit.alu_div_i.bits.divisor      := ZEXT(op2(31 ,0))
        inst_div_32bit.alu_div_i.bits.div_signed   := "b00".U
        inst_div_32bit.alu_div_i.bits.divw         := 1.U
        // inst_div_64bit.alu_div_i <> inst_div_64bit_idle_bundle
        inst_div_64bit.alu_div_i.valid             := false.B
        inst_div_64bit.alu_div_i.bits.dividend     := 0.U
        inst_div_64bit.alu_div_i.bits.divisor      := 0.U
        inst_div_64bit.alu_div_i.bits.div_signed   := 0.U
        inst_div_64bit.alu_div_i.bits.divw         := 0.U
    }.otherwise {
        inst_div_64bit.alu_div_i.valid             := false.B
        inst_div_64bit.alu_div_i.bits.dividend     := 0.U
        inst_div_64bit.alu_div_i.bits.divisor      := 0.U
        inst_div_64bit.alu_div_i.bits.div_signed   := 0.U
        inst_div_64bit.alu_div_i.bits.divw         := 0.U
        inst_div_32bit.alu_div_i.valid             := false.B
        inst_div_32bit.alu_div_i.bits.dividend     := 0.U
        inst_div_32bit.alu_div_i.bits.divisor      := 0.U
        inst_div_32bit.alu_div_i.bits.div_signed   := 0.U
        inst_div_32bit.alu_div_i.bits.divw         := 0.U
    } // div

    when (inst_div_64bit.div_alu_o.valid) {
        div_quotient  := inst_div_64bit.div_alu_o.bits.quotient
        div_remainder := inst_div_64bit.div_alu_o.bits.remainder
    }.elsewhen (inst_div_32bit.div_alu_o.valid) {
        div_quotient  := inst_div_32bit.div_alu_o.bits.quotient
        div_remainder := inst_div_32bit.div_alu_o.bits.remainder
    }.otherwise {
        div_quotient  := 0.U
        div_remainder := 0.U
    } 

    al_ex.alu_busy := (inst_div_64bit.alu_div_i.valid && (~inst_div_64bit.div_alu_o.valid)) | (inst_div_32bit.alu_div_i.valid && (~inst_div_32bit.div_alu_o.valid))

    //                      List(rd_wen,  rd_waddr, rd_wdata,    mem_ren,    mem_raddr,  mem_wen,    mem_wmask,  mem_wdata, mem_waddr, typej_jump_en, typej_jump_addr, csr_wen, csr_waddr, csr_data)
    val default_exce_list = List(NORd_Write, 0.U(5.W), 0.U(64.W), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W),  0.U(64.W), 0.U(64.W), NOTypeJ_Jump,  0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W))
    val exce_list = ListLookup(ex_al.opcode, default_exce_list, Array(
        INST_TYPE_I     -> ListLookup(ex_al.func3, default_exce_list, Array(
                            INST_ADDI       -> List(Rd_Write, rd_addr,                   add(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_SLTI       -> List(Rd_Write, rd_addr,           less_signed(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_SLTIU      -> List(Rd_Write, rd_addr,         less_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_XORI       -> List(Rd_Write, rd_addr,                   xor(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_ORI        -> List(Rd_Write, rd_addr,                    or(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_AND        -> List(Rd_Write, rd_addr,                   and(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_SLLI       -> List(Rd_Write, rd_addr,   shift_left_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_SRI        -> ListLookup(ex_al.func7(6, 1), default_exce_list, Array(
                                                BitPat("b010000")   ->   List(Rd_Write, rd_addr,   shift_right_signed(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),      // SRAI
                                                BitPat("b000000")   ->   List(Rd_Write, rd_addr, shift_right_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)))))),   // SRLI
        INST_TYPE_I_W   -> ListLookup(ex_al.func3, default_exce_list, Array(
                            INST_ADDIW      -> List(Rd_Write, rd_addr,                 compress_add(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_SLLIW      -> List(Rd_Write, rd_addr, compress_shift_left_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_SRIW       -> ListLookup(ex_al.func7(6, 1), default_exce_list, Array( 
                                                BitPat("b010000")   ->   List(Rd_Write, rd_addr, compress_shift_right_signed(op1, op2),   NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)), 
                                                BitPat("b000000")   ->   List(Rd_Write, rd_addr, compress_shift_right_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)))))),
        INST_TYPE_R_M   -> ListLookup(ex_al.func3, default_exce_list, Array(
                            INST_ADD_SUB_MUL-> ListLookup(ex_al.func7, default_exce_list, Array(
                                                BitPat("b0100000")   ->   List(Rd_Write, rd_addr, sub(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)), // sub
                                                BitPat("b0000001")   ->   List(Rd_Write, rd_addr,   mul_product, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)), // mul
                                                BitPat("b0000000")   ->   List(Rd_Write, rd_addr, add(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)))), // add 
                            INST_SLT        -> List(Rd_Write, rd_addr,        less_signed(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_SLTU       -> List(Rd_Write, rd_addr,      less_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_XOR_DIV    -> ListLookup(ex_al.func7, default_exce_list, Array(
                                                BitPat("b0000001")   ->  List(Rd_Write, rd_addr,  div_quotient, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)), // div
                                                BitPat("b0000000")   ->  List(Rd_Write, rd_addr, xor(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)))),  // xor
                            INST_OR_REM     -> ListLookup(ex_al.func7, default_exce_list, Array(
                                                BitPat("b0000001")   ->  List(Rd_Write, rd_addr, div_remainder, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),  // rem
                                                BitPat("b0000000")   ->  List(Rd_Write, rd_addr,  or(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)))),    // or
                            INST_AND_REMU   -> ListLookup(ex_al.func7, default_exce_list, Array(
                                                BitPat("b0000001")   ->  List(Rd_Write, rd_addr, div_remainder, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)), // remu
                                                BitPat("b0000000")   ->  List(Rd_Write, rd_addr, and(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)))), // and
                            INST_SLL        -> List(Rd_Write, rd_addr,shift_left_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_SR_DIVU    -> ListLookup(ex_al.func7, default_exce_list, Array(
                                                BitPat("b0100000")   ->  List(Rd_Write, rd_addr,    shift_right_signed(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),  // SRA 算术右移 
                                                BitPat("b0000001")   ->  List(Rd_Write, rd_addr,                    div_quotient, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),  // divu 
                                                BitPat("b0000000")   ->  List(Rd_Write, rd_addr,  shift_right_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)))))),  // SRL 逻辑右移
        INST_TYPE_R_M_W -> ListLookup(ex_al.func3, default_exce_list, Array(
                            INST_ADDW_SUBW_MULW -> ListLookup(ex_al.func7, default_exce_list, Array(
                                                BitPat("b0100000")   ->  List(Rd_Write, rd_addr,   compress_sub(op1, op2),  NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)), // sub
                                                BitPat("b0000001")   ->  List(Rd_Write, rd_addr, SEXT(mul_product(31, 0)),  NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),  // mul
                                                BitPat("b0000000")   ->  List(Rd_Write, rd_addr,   compress_add(op1, op2),  NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)))),  // add
                            INST_DIVW           -> List(Rd_Write, rd_addr,                           div_quotient, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_SLLW           -> List(Rd_Write, rd_addr, compress_shift_left_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_REMW           -> List(Rd_Write, rd_addr,                          div_remainder, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_REMUW          -> List(Rd_Write, rd_addr,                          div_remainder, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_SRW_DIVUW      -> ListLookup(ex_al.func7, default_exce_list, Array(
                                               BitPat("b0100000")   ->  List(Rd_Write, rd_addr,    compress_shift_right_signed(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),  // SRAW 算术右移
                                               BitPat("b0000001")   ->  List(Rd_Write, rd_addr,                             div_quotient, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),  // divuw  
                                               BitPat("b0000000")   ->  List(Rd_Write, rd_addr,  compress_shift_right_unsigned(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)))))),  // SRLW 逻辑右移 
        INST_TYPE_B     -> ListLookup(ex_al.func3, default_exce_list, Array(
                            INST_BNE        -> List(NORd_Write, 0.U(5.W), 0.U(64.W), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W),         ~equal(op1, op2), add(base_addr, offset_addr), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_BEQ        -> List(NORd_Write, 0.U(5.W), 0.U(64.W), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W),          equal(op1, op2), add(base_addr, offset_addr), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_BLT        -> List(NORd_Write, 0.U(5.W), 0.U(64.W), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W),    less_signed(op1, op2), add(base_addr, offset_addr), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_BLTU       -> List(NORd_Write, 0.U(5.W), 0.U(64.W), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W),  less_unsigned(op1, op2), add(base_addr, offset_addr), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_BGE        -> List(NORd_Write, 0.U(5.W), 0.U(64.W), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W),   ~less_signed(op1, op2), add(base_addr, offset_addr), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
                            INST_BGEU       -> List(NORd_Write, 0.U(5.W), 0.U(64.W), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), ~less_unsigned(op1, op2), add(base_addr, offset_addr), NOCSR_Write, 0.U(12.W), 0.U(64.W)))),
        INST_TYPE_L     -> List(Rd_Write, rd_addr, 0.U(64.W), MEM_Read, add(base_addr, offset_addr), NOMEM_Write, 0.U(8.W), 0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),// EXU不提供wdata
        INST_TYPE_S     -> ListLookup(ex_al.func3, default_exce_list, Array(
                            INST_SB         -> List(NORd_Write, 0.U(5.W), 0.U(64.W), NOMEM_Read, add(base_addr, offset_addr), MEM_Write, "b00000001".U, Cat(Fill(56, 0.U), op2(7,  0)), add(base_addr, offset_addr), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),         
                            INST_SH         -> List(NORd_Write, 0.U(5.W), 0.U(64.W), NOMEM_Read, add(base_addr, offset_addr), MEM_Write, "b00000011".U, Cat(Fill(48, 0.U), op2(15, 0)), add(base_addr, offset_addr), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)), 
                            INST_SW         -> List(NORd_Write, 0.U(5.W), 0.U(64.W), NOMEM_Read, add(base_addr, offset_addr), MEM_Write, "b00001111".U, Cat(Fill(32, 0.U), op2(31, 0)), add(base_addr, offset_addr), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)), 
                            INST_SD         -> List(NORd_Write, 0.U(5.W), 0.U(64.W), NOMEM_Read, add(base_addr, offset_addr), MEM_Write, "b11111111".U, op2,                            add(base_addr, offset_addr), NOTypeJ_Jump, 0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)))),         
        INST_JAL_OP     -> List(Rd_Write, rd_addr, add(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W),  0.U(64.W), 0.U(64.W), TypeJ_Jump,   add(base_addr, offset_addr), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
        INST_JALR_OP    -> List(Rd_Write, rd_addr, add(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W),  0.U(64.W), 0.U(64.W), TypeJ_Jump,   add(base_addr, offset_addr), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
        INST_LUI_OP     -> List(Rd_Write, rd_addr,          op2,  NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W),  0.U(64.W), 0.U(64.W), NOTypeJ_Jump,                   0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
        INST_AUIPC_OP   -> List(Rd_Write, rd_addr, add(op1, op2), NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W),  0.U(64.W), 0.U(64.W), NOTypeJ_Jump,                   0.U(64.W), NOCSR_Write, 0.U(12.W), 0.U(64.W)),
        INST_TYPE_INTR  -> ListLookup(ex_al.func3, default_exce_list, Array(
                            INST_CSRRW      -> List(Rd_Write, rd_addr, op1, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W),  0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), CSR_Write, csr_waddr,           op2),  
                            INST_CSRRS      -> List(Rd_Write, rd_addr, op1, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W),  0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), CSR_Write, csr_waddr,  or(op1, op2)), 
                            INST_CSRRC      -> List(Rd_Write, rd_addr, op1, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W),  0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), CSR_Write, csr_waddr, and(op1, op2)),
                            INST_CSRRWI     -> List(Rd_Write, rd_addr, op1, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W),  0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), CSR_Write, csr_waddr,           op2), 
                            INST_CSRRSI     -> List(Rd_Write, rd_addr, op1, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W),  0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), CSR_Write, csr_waddr,  or(op1, op2)),   
                            INST_CSRRCI     -> List(Rd_Write, rd_addr, op1, NOMEM_Read, 0.U(64.W), NOMEM_Write, 0.U(8.W),  0.U(64.W), 0.U(64.W), NOTypeJ_Jump, 0.U(64.W), CSR_Write, csr_waddr, and(op1, op2))))
    ))

    // to exu
    al_ex.rd_wen            :=  exce_list(0)
    al_ex.rd_waddr          :=  exce_list(1)
    al_ex.rd_wdata          :=  exce_list(2)
    al_ex.inst_isload       :=  exce_list(3)
    al_ex.inst_isstore      :=  exce_list(5)
    al_ex.typej_jump_en     :=  exce_list(9)
    al_ex.typej_jump_addr   :=  exce_list(10)    
    al_ex.csr_wen           :=  exce_list(11)
    al_ex.csr_waddr         :=  exce_list(12)
    al_ex.csr_wdata         :=  exce_list(13)

    // to lsu
    al_ls.func3         :=  ex_al.func3
    // al_ls.pc            :=  ex_al.pc
    al_ls.rd_waddr      :=  exce_list(1)
    al_ls.inst_isload   :=  exce_list(3)
    al_ls.inst_isstore  :=  exce_list(5)
    al_ls.dcache_ren    :=  exce_list(3)
    al_ls.dcache_raddr  :=  exce_list(4)
    al_ls.dcache_wen    :=  exce_list(5)
    al_ls.dcache_wmask  :=  exce_list(6)        
    al_ls.dcache_wdata  :=  exce_list(7)
    al_ls.dcache_waddr  :=  exce_list(8)


}