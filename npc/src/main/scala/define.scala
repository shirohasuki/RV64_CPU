package define

import  chisel3.id_ex

object defines {
        // I type inst
    // val INST_TYPE_I = 0010011.U
    // val INST_ADDI   = 000.U
    // val INST_SLTI   = 010.U
    // val INST_SLTIU  = 011.U
    // val INST_XORI   = 100.U
    // val INST_ORI    = 110.U
    // val INST_ANDI   = 111.U
    // val INST_SLLI   = 001.U
    // val INST_SRI    = 101.U
    //     // 结果截断系列
    // val INST_TYPE_I_W = 0011011.U
    // val INST_ADDIW    = 000.U
    // // val INST_SLTIW   010.U
    // // val INST_SLTIUW  011.U
    // // val INST_XORIW   100.U
    // // val INST_ORIW    110.U
    // // val INST_ANDIW   111.U
    // val INST_SLLIW    = 001.U
    // val INST_SRIW     = 101.U

    // // // L type inst
    // // val INST_TYPE_L 7'b0000011
    // // val INST_LB     3'b000
    // // val INST_LH     3'b001
    // // val INST_LW     3'b010
    // // val INST_LD     3'b011
    // // val INST_LBU    3'b100
    // // val INST_LHU    3'b101
    // // val INST_LWU    3'b110

    // // // S type inst
    // // val INST_TYPE_S 7'b0100011
    // // val INST_SB     3'b000
    // // val INST_SH     3'b001
    // // val INST_SW     3'b010
    // // val INST_SD     3'b011


    // // =============================================
    // // R and M type inst
    // val INST_TYPE_R_M    = 0110011.U
    // val INST_ADD_SUB_MUL = 000.U
    // val INST_XOR_DIV     = 100.U
    // val INST_SR_DIVU     = 101.U
    // val INST_OR_REM      = 110.U
    // val INST_AND_REMU    = 111.U

    // // R type inst
    // val INST_TYPE_R_FUN7 = 0000000.U
    // val INST_ADD_SUB     = 000.U
    // val INST_SLL         = 001.U
    // val INST_SLT         = 010.U
    // val INST_SLTU        = 011.U
    // val INST_XOR         = 100.U
    // val INST_SR          = 101.U
    // val INST_OR          = 110.U
    // val INST_AND         = 111.U

    // val INST_TYPE_M_FUN7 7'b0000001
    // // M type inst
    // val INST_MUL    3'b000
    // // val INST_MULH   3'b001
    // // val INST_MULHSU 3'b010
    // // val INST_MULHU  3'b011
    // val INST_DIV    3'b100
    // val INST_DIVU   3'b101
    // val INST_REM    3'b110 
    // val INST_REMU   3'b111 

    // // =============================================
    // // 结果截断系列
    // val INST_TYPE_R_M_W 7'b0111011
    // val INST_ADDW_SUBW_MULW 3'b000
    // val INST_SLLW           3'b001
    // // val INST_SLT         3'b010
    // // val INST_SLTU        3'b011
    // // val INST_XOR         3'b100
    // val INST_SRW_DIVUW      3'b101
    // val INST_REMW           3'b110 // 无orw
    // val INST_REMUW          3'b111 
    // val INST_DIVW           3'b100

    // // J type inst
    // val INST_JAL    7'b1101111
    // val INST_JALR   7'b1100111

    // val INST_LUI    7'b0110111
    // val INST_AUIPC  7'b0010111
    // val INST_NOP    32'h00000013
    // val INST_NOP_OP 7'b0000001
    // val INST_MRET   32'h30200073
    // val INST_RET    32'h00008067

    // // J type inst
    // val INST_TYPE_B 7'b1100011
    // val INST_BEQ    3'b000
    // val INST_BNE    3'b001
    // val INST_BLT    3'b100
    // val INST_BGE    3'b101
    // val INST_BLTU   3'b110
    // val INST_BGEU   3'b111


    // // ============== intr  ===============
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
