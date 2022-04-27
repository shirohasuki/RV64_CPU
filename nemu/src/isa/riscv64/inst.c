#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read // 读指令
#define Mw vaddr_write // 写指令

enum {
    TYPE_R, TYPE_I, TYPE_S, TYPE_B, TYPE_U, TYPE_J,
    TYPE_N, // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immB(uint32_t i) { return (SEXT(BITS(i, 31, 30), 1) << 12) | BITS(i, 30, 25) << 5 | BITS(i, 11, 8) << 1 | BITS(i, 7, 6) << 11;} // add
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immJ(uint32_t i) { return (SEXT(BITS(i, 31, 30), 1) << 20) | BITS(i, 30, 21) << 1 | BITS(i, 21, 20) << 11 | BITS(i, 19, 12) << 12;} // add
// SEXT:sign extern, riscv中所有立即数都需要进行符号拓展为，并且指令的最高位是符号位

static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
    uint32_t i = s->isa.inst.val;
    int rd  = BITS(i, 11, 7);
    int rs1 = BITS(i, 19, 15);
    int rs2 = BITS(i, 24, 20);
    destR(rd);
    switch (type) {
        case TYPE_R: src1R(rs1);     src2R(rs2);    break; //add
        case TYPE_I: src1R(rs1);     src2I(immI(i));    break;
        case TYPE_S: destI(immS(i)); src1R(rs1);    src2R(rs2);     break;
        case TYPE_B: destI(immB(i)); src1R(rs1);    src2R(rs2);    src1I(immB(i));   break; // add
        case TYPE_U: src1I(immU(i));    break;
        case TYPE_J: src1I(immJ(i));    break; // add
        
    }
}

static int decode_exec(Decode *s) {
    word_t dest = 0, src1 = 0, src2 = 0;
    s->dnpc = s->snpc;
    // dest 目的操作数 src 源操作数

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
    decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
    __VA_ARGS__ ; \
}

    INSTPAT_START();
    INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc); // auipc: Add Upper Immediate to PC
    INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8)); // 加载双字指令
    INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2)); // 存储双字指令

    INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
    
    /* TODO: */
    INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + src2); 
    // addi:把符号位扩展的立即数加到寄存器 x[rs1]上, 结果写入x[rd],忽略算术溢出
    INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, s->dnpc = s->pc + src1);
    // jal:无条件跳转指令,使用PC相对寻址
    INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, s->dnpc = src1 + src2);
    // jalr:
    INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));

    INSTPAT_END();

    R(0) = 0; // reset $zero to 0

    return 0;
} // 对照表见中文手册P27

int isa_exec_once(Decode *s) {
    s->isa.inst.val = inst_fetch(&s->snpc, 4); // 取指:1.访问，2.更新pc
    return decode_exec(s); // 译码
}
