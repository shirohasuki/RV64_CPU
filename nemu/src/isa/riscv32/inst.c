#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
    TYPE_I, TYPE_U, TYPE_S,
    TYPE_N, // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immU(uint32_t i) { return BITS(i, 31, 12) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }

static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
    /*
        decode_operand():对dest ,src1, src2进行具体操作(查询)
        immI等辅助函数, 用于从指令中抽取出立即数
        src1R(), src1I()等辅助宏, 用于将译码结果记录到相应的操作数变量中
    */
    uint32_t i = s->isa.inst.val; 
    int rd  = BITS(i, 11, 7);
    int rs1 = BITS(i, 19, 15); 
    int rs2 = BITS(i, 24, 20); // BITS:位抽取
    destR(rd); // destR(rd):对目标操作数进行寄存器操作数的译码
    switch (type) {
        case TYPE_I: src1R(rs1);     src2I(immI(i)); break;
        case TYPE_U: src1I(immU(i)); break;
        case TYPE_S: destI(immS(i)); src1R(rs1); src2R(rs2); break;
        // I/U/S-型指令
    }
}

static int decode_exec(Decode *s) {
    word_t dest = 0, src1 = 0, src2 = 0;
    s->dnpc = s->snpc;
// dest和src分别表示目的操作数和两个源操作数

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
    decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
    __VA_ARGS__ ; \
}

    INSTPAT_START();
    INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = src1);
    INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = Mr(src1 + src2, 4));
    INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + dest, 4, src2));
    // INSTPAT(模式字符串, 指令名称, 指令类型, 指令执行操作);
    INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
    INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
    INSTPAT_END();

    R(0) = 0; // reset $zero to 0

    return 0;
}

int isa_exec_once(Decode *s) {
    s->isa.inst.val = inst_fetch(&s->snpc, 4); // 取指:1.访问，2.更新pc
    return decode_exec(s); // 译码
} 
