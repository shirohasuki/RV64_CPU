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
    val INST_TYPE_I = b0010011.U
    val INST_ADDI   = b000.U
    val INST_SLTI   = b010.U
    val INST_SLTIU  = b011.U
    val INST_XORI   = b100.U
    val INST_ORI    = b110.U
    val INST_ANDI   = b111.U
    val INST_SLLI   = b001.U
    val INST_SRI    = b101.U
       // 结果截断系列
    val INST_TYPE_I_W = b0011011.U
    val INST_ADDIW    = b000.U
    // val INST_SLTIW   010.U
    // val INST_SLTIUW  011.U
    // val INST_XORIW   100.U
    // val INST_ORIW    110.U
    // val INST_ANDIW   111.U
    val INST_SLLIW    = b001.U
    val INST_SRIW     = b101.U

    // L type inst
    val INST_TYPE_L = b0000011.U
    val INST_LB     = b000.U
    val INST_LH     = b001.U
    val INST_LW     = b010.U
    val INST_LD     = b011.U
    val INST_LBU    = b100.U
    val INST_LHU    = b101.U
    val INST_LWU    = b110.U

    // S type inst
    val INST_TYPE_S = b0100011.U
    val INST_SB     = b000.U
    val INST_SH     = b001.U
    val INST_SW     = b010.U
    val INST_SD     = b011.U


    // // =============================================
    // R and M type inst
    val INST_TYPE_R_M    = b0110011.U
    val INST_ADD_SUB_MUL = b000.U
    val INST_XOR_DIV     = b100.U
    val INST_SR_DIVU     = b101.U
    val INST_OR_REM      = b110.U
    val INST_AND_REMU    = b111.U

    // // R type inst
    val INST_TYPE_R_FUN7 = b0000000.U
    val INST_ADD_SUB     = b000.U
    val INST_SLL         = b001.U
    val INST_SLT         = b010.U
    val INST_SLTU        = b011.U
    val INST_XOR         = b100.U
    val INST_SR          = b101.U
    val INST_OR          = b110.U
    val INST_AND         = b111.U

    val INST_TYPE_M_FUN7 = b0000001.U
    // M type inst
    val INST_MUL   = b000.U
    // // val INST_MULH   3'b001
    // // val INST_MULHSU 3'b010
    // // val INST_MULHU  3'b011
    val INST_DIV   = b100.U
    val INST_DIVU  = b101.U
    val INST_REM   = b110.U 
    val INST_REMU  = b111.U 

    // // =============================================
    // // 结果截断系列
    val INST_TYPE_R_M_W  = b0111011.U
    val INST_ADDW_SUBW_MULW = b000.U
    val INST_SLLW           = b001.U
    // val INST_SLT         3'b010
    // val INST_SLTU        3'b011
    // val INST_XOR         3'b100
    val INST_SRW_DIVUW      = b101.U
    val INST_REMW           = b110.U // 无orw
    val INST_REMUW          = b111.U 
    val INST_DIVW           = b100.U

    // // J type inst
    val INST_JAL_OP   =  b1101111.U
    val INST_JALR_OP  =  b1100111.U

    val INST_LUI_OP   =  b0110111.U
    val INST_AUIPC_OP =  b0010111.U
    val INST_NOP      = "h00000013".U(32.W)
    val INST_NOP_OP   = b0000001.U
    // val INST_MRET   32'h30200073
    // val INST_RET    32'h00008067

    // B type inst
    val INST_TYPE_B = b1100011.U
    val INST_BEQ    = b000.U
    val INST_BNE    = b001.U
    val INST_BLT    = b100.U
    val INST_BGE    = b101.U
    val INST_BLTU   = b110.U
    val INST_BGEU   = b111.U

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
