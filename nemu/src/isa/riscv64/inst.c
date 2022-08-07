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

#define S32(i) ((int32_t)i)
#define S64(i) ((int64_t)i)
#define U32(i) ((uint32_t)i)
#define U64(i) ((uint64_t)i)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immB(uint32_t i) { return (SEXT(BITS(i, 31, 31), 1) << 12) | BITS(i, 7, 7) << 11 | BITS(i, 30, 25) << 5 | BITS(i, 11, 8) << 1; } // add
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immJ(uint32_t i) { return (SEXT(BITS(i, 31, 31), 1) << 20) | BITS(i, 19, 12) << 12 | BITS(i, 20, 20) << 11 | BITS(i, 30, 21) << 1; } // add
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
    // s->pc就是当前指令的PC, 而s->snpc则是下一条指令的PC.snpc为静态PC,dnpc为动态PC

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
    decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
    __VA_ARGS__ ; \
}

    INSTPAT_START();
    // U-Type
    INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc);                                              // auipc: Add Upper Immediate to PC
    // INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = src1);                                                      // lui: 把立即数高20位写入rd，rd的低12位补零(存疑)

    // R-Type
    INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);                                               // add: rs1 加上 rs2 并写入 rd 中；
    INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT(BITS(src1 + src2, 31, 0), 32));                        // addw: 把寄存器 x[rs2]加到寄存器 x[rs1]上, 将结果截断为 32 位, 把符号位扩展的结果写入 x[rd]
    INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2);                                               // sub: rs1 减去 rs2 并写入 rd 中；
    INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, R(dest) = SEXT(BITS(src1 - src2, 31, 0), 32));                         // subw: 把寄存器 x[rs2]减去寄存器 x[rs1], 将结果截断为 32 位, 把符号位扩展的结果写入 x[rd]
    INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(dest) = src1 * src2);                                               // mlu: 把寄存器 x[rs2]乘以寄存器 x[rs1]
    INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw   , R, R(dest) = SEXT(BITS(src1 * src2, 31, 0), 32));                        // mluw: 把寄存器 x[rs2]乘以寄存器 x[rs1], 将结果截断为 32 位, 把符号位扩展的结果写入 x[rd]                        
    INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(dest) = S64(src1) / S64(src2));                                     // div: 把寄存器 x[rs2]除以寄存器 x[rs1]，符号位拓展
    INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(dest) = U64(src1) / U64(src2));                                     // divu: 把寄存器 x[rs2]除以寄存器 x[rs1], 无符号
    INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw   , R, R(dest) = SEXT(S32(BITS(src1, 31, 0)) / S32(BITS(src2, 31, 0)), 32)); // divw: 把寄存器 x[rs2]除以寄存器 x[rs1], 将结果截断为 32 位, 把符号位扩展的结果写入 x[rd]
    INSTPAT("0000001 ????? ????? 101 ????? 01110 11", divuw  , R, R(dest) = SEXT(U32(BITS(src1, 31, 0)) / U32(BITS(src2, 31, 0)), 32)); // divuw: 把寄存器 x[rs2]除以寄存器 x[rs1], 将结果截断为 32 位, 把无符号位扩展的结果写入 x[rd]    
    INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , R, R(dest) = S64(src1) % S64(src2));                                     // rem: 把寄存器 x[rs2]取余以寄存器 x[rs1]，符号位拓展        
    INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(dest) = U64(src1) % U64(src2));                                     // remu: 把寄存器 x[rs2]取余以寄存器 x[rs1], 无符号
    INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   , R, R(dest) = SEXT(S32(BITS(src1, 31, 0)) % S32(BITS(src2, 31, 0)), 32)); // remw: 把寄存器 x[rs2]取余以寄存器 x[rs1], 将结果截断为 32 位, 把符号位扩展的结果写入 x[rd] 
    INSTPAT("0000001 ????? ????? 111 ????? 01110 11", remuw  , R, R(dest) = SEXT(U32(BITS(src1, 31, 0)) % U32(BITS(src2, 31, 0)), 32)); // remuw: 把寄存器 x[rs2]取余以寄存器 x[rs1], 将结果截断为 32 位, 把无符号位扩展的结果写入 x[rd]
    INSTPAT("000000? ????? ????? 001 ????? 01100 11", sll    , R, R(dest) = src1 << src2);                                              // sll: 逻辑左移 并写入 rd 中；
    INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(dest) = S64(src1) < S64(src2));                                     // slt: 小于则置位 1
    INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = U64(src1) < U64(src2));                                     // sltu: (无符号)小于则置位 1 
    INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(dest) = src1 ^ src2);                                               // xor: rs1 异或 rs2 并写入 rd 中；
    INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(dest) = U64(src1) >> src2);                                         // srl: 逻辑右移 并写入 rd 中；
    INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , R, R(dest) = S64(src1) >> src2);                                         // sra: 算术右移 
    INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2);                                               // or: rs1 或 rs2 并写入 rd 中；
    INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2);                                               // and: rs1 和 rs2 并写入 rd 中；
    INSTPAT("000000? ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT(BITS(src1 << BITS(src2, 4, 0), 31, 0), 32));           // sllw: 把寄存器 x[rs1]的低 32 位左移 x[rs2]位，空出的位置填入 0，结果进行有符号扩展后写入x[rd]。 x[rs2]的低 5 位代表移动位数，其高位则被忽略。  
    INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw   , R, R(dest) = SEXT(S32(BITS(src1, 31, 0)) >> BITS(src2, 4, 0), 32));
    INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw   , R, R(dest) = SEXT(U32(BITS(src1, 31, 0)) >> BITS(src2, 4, 0), 32));
    
    // I-Type       
    INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + src2);                                               // addi:把符号位扩展的立即数加到寄存器 x[rs1]上, 结果写入x[rd],忽略算术溢出
    INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & src2);                                               // andi是 rs1 和立即数位与并写入 rd 中；
    INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1 ^ src2);                                               // xori是立即数异或，rs1和立即数按位异或并写入 rd中；
    INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(dest) = src1 | src2);                                               // ori是 rs1 和立即数按位取或并写入 rd 中；
    INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT(BITS(src1 + src2, 31, 0), 32));                        // addiw:把 立即数 加到寄存器 x[rs1]上, 将结果截断为 32 位, 把符号位扩展的结果写入 x[rd]
    INSTPAT("000000? ????? ????? 001 ????? 00110 11", slliw  , I, R(dest) = SEXT(BITS(src1 << src2, 31, 0), 32));                       // sllw: 把寄存器 x[rs1]的低 32 位左移立即数位，空出的位置填入 0，将结果截断为 32 位,结果进行有符号扩展后写入x[rd]。
    INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(dest) = s->pc + 4; s->dnpc = ((src1 + src2) & (~U64(1))));          // jalr:跳转并链接，把 pc 设置成 rs1+偏移值，然后将 pc+4 写入 rd 中
    INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = src1 << src2);                                              // slli:立即数逻辑左移，rs1 左移 shamt 位，空位填 0 并写入 rd 中；
    INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = U64(src1) >> src2);                                         // srli:立即数逻辑右移，rs1 右移 shamt 位，空位填 0 并写入rd 中；
    INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, R(dest) = S64(src1) >> src2);                                         // srai:立即数算数右移，rs1 右移 shamt 位，空位填 rs1 的最高位并写入 rd 中；
    INSTPAT("010000? ????? ????? 101 ????? 00110 11", sraiw  , I, R(dest) = SEXT(S32(BITS(src1, 31, 0)) >> src2, 32));
    INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = U64(src1) >> src2);
    INSTPAT("000000? ????? ????? 101 ????? 00110 11", srliw  , I, R(dest) = SEXT(U32(BITS(src1, 31, 0)) >> src2, 32));
    INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti   , I, R(dest) = S64(src1) < S64(src2));
    INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = U64(src1) < U64(src2));                                     // sltiu: rs1 小于立即数则 rd 置 1，否者置 0(无符号比较)
    INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(dest) = SEXT(Mr(src1 + src2, 1), 8));                              // lb: 字节加载，读取一个字节写入 rd 中；
    INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(dest) = SEXT(Mr(src1 + src2, 2), 16));                              // lh: 是半字加载，读取两个字节写入 rd 中；
    INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(Mr(src1 + src2, 4), 32));                              // lw: 是字加载，读取四个字节写入 rd 中；
    INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8));                                        // ld: 加载双字指令
    INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = Mr(src1 + src2, 1));                                        // lbu: 是无符号字节加载，读取一个字节写入 rd 中；
    INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest) = Mr(src1 + src2, 2));                                        // lhu: 是无符号半字加载，读取两个字节写入 rd中；
    INSTPAT("??????? ????? ????? 110 ????? 00000 11", lwu    , I, R(dest) = Mr(src1 + src2, 4));

    // B-Type       
    INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, if (src1 == src2) s->dnpc = s->pc + dest);                            // beq 是相等条件分支，rs1 和 rs2 的值相等时，把 pc 的值设置成当前值+偏移值；
    INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, if (src1 != src2) s->dnpc = s->pc + dest);                            // bne 是不等条件分支，rs1 和 rs2 的值不等时，把 pc 的值设置成当前值+偏移值；
    INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, if (S64(src1) < S64(src2))  s->dnpc = s->pc + dest);                  // blt 是小于条件分支，rs1 小于 rs2 的值时，把 pc 的值设置成当前值+偏移值；
    INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, if (S64(src1) >= S64(src2)) s->dnpc = s->pc + dest);                  // bge是大于等于条件分支，rs1 大于等于 rs2 的值时，把 pc 的值设置成当前值+偏移值；
    INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, if (U64(src1) < U64(src2))  s->dnpc = s->pc + dest);                  // bltu 是无符号小于条件分支；
    INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, if (U64(src1) >= U64(src2)) s->dnpc = s->pc + dest);                  // bgeu 是无符号大于等于条件分支；

    // S-Type       
    INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + dest, 1, BITS(src2,  7, 0)));                               // sb 是存字节，把 rs2 的低位一字节存入地址 rs1+立即数中
    INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + dest, 2, BITS(src2, 15, 0)));                               // sh 是存半字，把 rs2的低位两字节存入地址 rs1 + 立即数中    
    INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + dest, 4, BITS(src2, 31, 0)));                               // sw 是存字，把 rs2 的低位四字节存入地址 rs1 + 立即数中
    INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));                                            // sd: 存储双字指令,8个字节


    // J-Type       
    INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(dest) = s->pc + 4, s->dnpc = s->pc + src1);                         // jal:跳转并链接，把 pc 设置成当前值+偏移值，然后将 pc+4 当做下一条指令的地址存入 rd 中

    INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10)));                                              // ebreak: pc重置为0, R(10) is $a0
    INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));  

    INSTPAT_END();

    R(0) = 0; // reset $zero to 0

    return 0;
}

int isa_exec_once(Decode *s) {
    s->isa.inst.val = inst_fetch(&s->snpc, 4); // 取指:1.访问，2.更新pc
    return decode_exec(s); // 译码
}
