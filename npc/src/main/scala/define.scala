package define

import chisel3._

object function {
    def dff_set(flush_flag: UInt, stall_flag: UInt, DataWidth: UInt, data_default: UInt, data_i: UInt): UInt = {
        val data_o = RegInit(data_default)
        data_o := Mux(flush_flag === 1.U, data_default, 
                    Mux(stall_flag === 1.U, data_o, data_i))
        data_o
    }
} 

object MACRO {
        // I type inst
    val INST_TYPE_I = BitPat("b0010011")
    val INST_ADDI   = BitPat("b000")
    val INST_SLTI   = BitPat("b010")
    val INST_SLTIU  = BitPat("b011")
    val INST_XORI   = BitPat("b100")
    val INST_ORI    = BitPat("b110")
    val INST_ANDI   = BitPat("b111")
    val INST_SLLI   = BitPat("b001")
    val INST_SRI    = BitPat("b101")
       // 结果截断系列
    val INST_TYPE_I_W = BitPat("b0011011")
    val INST_ADDIW    = BitPat("b000")
    // val INST_SLTIW   BitPat("b010")
    // val INST_SLTIUW  BitPat("b011")
    // val INST_XORIW   BitPat("b100")
    // val INST_ORIW    BitPat("b110")
    // val INST_ANDIW   BitPat("b111")
    val INST_SLLIW    = BitPat("b001")
    val INST_SRIW     = BitPat("b101")

    // L type inst
    val INST_TYPE_L = BitPat("b0000011")
    val INST_LB     = BitPat("b000")
    val INST_LH     = BitPat("b001")
    val INST_LW     = BitPat("b010")
    val INST_LD     = BitPat("b011")
    val INST_LBU    = BitPat("b100")
    val INST_LHU    = BitPat("b101")
    val INST_LWU    = BitPat("b110")

    // S type inst
    val INST_TYPE_S = BitPat("b0100011")
    val INST_SB     = BitPat("b000")
    val INST_SH     = BitPat("b001")
    val INST_SW     = BitPat("b010")
    val INST_SD     = BitPat("b011")


    // // =============================================
    // R and M type inst
    val INST_TYPE_R_M    = BitPat("b0110011")
    val INST_ADD_SUB_MUL = BitPat("b000")
    val INST_XOR_DIV     = BitPat("b100")
    val INST_SR_DIVU     = BitPat("b101")
    val INST_OR_REM      = BitPat("b110")
    val INST_AND_REMU    = BitPat("b111")

    // // R type inst
    val INST_TYPE_R_FUN7 = BitPat("b0000000")
    val INST_ADD_SUB     = BitPat("b000")
    val INST_SLL         = BitPat("b001")
    val INST_SLT         = BitPat("b010")
    val INST_SLTU        = BitPat("b011")
    val INST_XOR         = BitPat("b100")
    val INST_SR          = BitPat("b101")
    val INST_OR          = BitPat("b110")
    val INST_AND         = BitPat("b111")

    val INST_TYPE_M_FUN7 = BitPat("b0000001")
    // M type inst
    val INST_MUL   = BitPat("b000")
    // // val INST_MULH   3'b001
    // // val INST_MULHSU 3'b010
    // // val INST_MULHU  3'b011
    val INST_DIV   = BitPat("b100")
    val INST_DIVU  = BitPat("b101")
    val INST_REM   = BitPat("b110") 
    val INST_REMU  = BitPat("b111") 

    // // =============================================
    // // 结果截断系列
    val INST_TYPE_R_M_W     = BitPat("b0111011")
    val INST_ADDW_SUBW_MULW = BitPat("b000")
    val INST_SLLW           = BitPat("b001")
    // val INST_SLT         3'b010
    // val INST_SLTU        3'b011
    // val INST_XOR         3'b100
    val INST_SRW_DIVUW      = BitPat("b101")
    val INST_REMW           = BitPat("b110") // 无orw
    val INST_REMUW          = BitPat("b111") 
    val INST_DIVW           = BitPat("b100")

    // // J type inst
    val INST_JAL_OP   =  BitPat("b1101111")
    val INST_JALR_OP  =  BitPat("b1100111")

    val INST_LUI_OP   =  BitPat("b0110111")
    val INST_AUIPC_OP =  BitPat("b0010111")
    val INST_NOP      = "h00000013".U(32.W)
    val INST_NOP_OP   = BitPat("b0000001")
    // val INST_MRET   32'h30200073
    // val INST_RET    32'h00008067

    // B type inst
    val INST_TYPE_B = BitPat("b1100011")
    val INST_BEQ    = BitPat("b000")
    val INST_BNE    = BitPat("b001")
    val INST_BLT    = BitPat("b100")
    val INST_BGE    = BitPat("b101")
    val INST_BLTU   = BitPat("b110")
    val INST_BGEU   = BitPat("b111")

    // ============== intr  ===============
    // val INST_FENCE  7'b0001111
    // val INST_ECALL  32'h73
    // val INST_EBREAK 32'h00100073
    // val INST_MRET   32'h30200073

    // val INST_TYPE_INTR 7'b1110011
    // val INST_CSRRW        3'b001
    // val INST_CSRRS        3'b010
    // val INST_CSRRC        3'b011
    // val INST_CSRRWI       3'b101
    // val INST_CSRRSI       3'b110
    // val INST_CSRRCI       3'b111

    // val CSR_MSTATUS   12'h300
    // val CSR_MTVEC     12'h305
    // val CSR_MEPC      12'h341
    // val CSR_MCAUSE    12'h342

    // // val CSR_MIP       12'h344
    // // val CSR_MTIME     12'h
    // // val CSR_MTIMECMP  12'h
}
