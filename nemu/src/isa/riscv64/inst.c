#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read // 读指令
#define Mw vaddr_write // 写指令

enum {
    TYPE_R, 
    TYPE_I, // 加载类指令使用的是 I-typed 指令格式
    TYPE_S, // 存储类指令使用的是 S-typed 指令格式
    TYPE_B, 
    TYPE_U, 
    TYPE_J,
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
static word_t immB(uint32_t i) { return (SEXT(BITS(i, 31, 30), 1) << 12) | BITS(i, 7, 6) << 11 | BITS(i, 30, 25) << 5 | BITS(i, 11, 8) << 1; } // add
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immJ(uint32_t i) { return (SEXT(BITS(i, 31, 30), 1) << 20) | BITS(i, 19, 12) << 12 |  BITS(i, 21, 20) << 11 |BITS(i, 30, 21) << 1; } // add
// SEXT:sign extern, riscv中所有立即数都需要进行符号拓展为，并且指令的最高位是符号位

static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
    uint32_t i = s->isa.inst.val;
    int rd  = BITS(i, 11, 7);
    int rs1 = BITS(i, 19, 15);
    int rs2 = BITS(i, 24, 20);
    destR(rd);
    switch (type) { 
        case TYPE_R: destR(rd);      src1R(rs1);    src2R(rs2);     break; //add
        case TYPE_I: src1R(rs1);     src2I(immI(i));                break;
        case TYPE_S: destI(immS(i)); src1R(rs1);    src2R(rs2);     break;
        case TYPE_B: destI(immB(i)); src1R(rs1);    src2R(rs2);     break; // add
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
    INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc); 
    // auipc: Add Upper Immediate to PC
    INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8)); 
    // 加载双字指令
    INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2)); 
    // 存储双字指令
    INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
    // ebreak:pc重置为0 

    INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2);
    // sub是 rs1 减去 rs2 并写入 rd 中；
    INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I,  R(dest) = src1 + immI(INSTPAT_INST(s))); 
    // addi:把符号位扩展的立即数加到寄存器 x[rs1]上, 结果写入x[rd],忽略算术溢出

    INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, if (src1 == src2) s->pc += immB(INSTPAT_INST(s)));
    //beq 是相等条件分支，rs1 和 rs2 的值相等时，把 pc 的值设置成当前值+偏移值；
    INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, if (src1 != src2) s->snpc += immB(INSTPAT_INST(s))); // 不知道为什么snpc就过了
    //bne 是不等条件分支，rs1 和 rs2 的值不等时，把 pc 的值设置成当前值+偏移值；
    
    //blt 是小于条件分支，rs1 小于 rs2 的值时，把 pc 的值设置成当前值+偏移值；
    //bge是大于等于条件分支，rs1 大于等于 rs2 的值时，把 pc 的值设置成当前值+偏移值；
    //bltu 是无符号小于条件分支；
    //bgeu 是无符号大于等于条件分支；

    INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, s->dnpc = (immI(INSTPAT_INST(s)) + src1) & (~1), R(dest) = s->pc + 4);
    // jalr:跳转并链接，把 pc 设置成 rs1+偏移值，然后将 pc+4 写入 rd 中
    
    INSTPAT("??????? ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = src1 + src2); //结果截断为32位是什么？
    // addw:把寄存器 x[rs2]加到寄存器 x[rs1]上, 将结果截断为 32 位, 把符号位扩展的结果写入 x[rd]
    INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw   ,I, R(dest) = src1 + immI(INSTPAT_INST(s))); //结果截断为32位是什么？
    // addiw:把 立即数 加到寄存器 x[rs1]上, 将结果截断为 32 位, 把符号位扩展的结果写入 x[rd]

    //lb 是字节加载，读取一个字节写入 rd 中
    //lh 是半字加载，读取两个字节写入 rd 中
    INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = src1 + src2);
    //lw 是字加载，读取四个字节写入 rd 中
    //lbu 是无符号字节加载，读取一个字节写入 rd 中
    //lhu 是无符号半字加载，读取两个字节写入 rd 中
    //sb 是存字节，把 rs2 的低位一字节存入地址 rs1+立即数中
    //sh 是存半字，把 rs2的低位两字节存入地址 rs1+立即数中    
    //sw 是存字，把 rs2 的低位四字节存入地址 rs1+立即数中
    INSTPAT("??????? ????? ????? 011 ????? 00100 11", sliu   , I, if (src1 < immI(INSTPAT_INST(s))) R(dest) = 1; else R(dest) = 0);
    //sltiu: rs1 小于立即数则 rd 置 1，否者置 0(无符号比较)

    INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, s->dnpc += s->pc + immJ(INSTPAT_INST(s)), R(dest) = s->pc + 4);
    // jal:跳转并链接，把 pc 设置成当前值+偏移值，然后将 pc+4 当做下一条指令的地址存入 rd 中

    INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));

    INSTPAT_END();

    R(0) = 0; // reset $zero to 0

    return 0;
} // 对照表见中文手册P27

int isa_exec_once(Decode *s) {
    s->isa.inst.val = inst_fetch(&s->snpc, 4); // 取指:1.访问，2.更新pc
    return decode_exec(s); // 译码
}
