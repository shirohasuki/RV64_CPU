// DPI-C
#include "verilated_dpi.h"
#include "Vtb__Dpi.h"
// verilator
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtb.h"

#include <stdio.h> 
#include <assert.h> 
#include <stdlib.h> 


#define CONFIG_NPC_ITRACE 1
// #define CONFIG_NPC_DIFFTEST 1

typedef long long ll;

// ================ CPU ===================
static int status = 0;

// =============== Memory ===============
#define MEM_BASE 0x80000000
#define MEM_SIZE 65536

static uint8_t mem[MEM_SIZE];
// Memory transfer
uint8_t* cpu2mem(ll addr);

long load_image(char const *img_file); 
// ============== Reg ===================
extern uint64_t *cpu_gpr;
// static uint64_t cpu_pc = 80000000;
extern uint64_t cpu_pc;

// ============= ITRACE ================
void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
// void disassemble(char *str, uint64_t pc, uint8_t *code, int nbyte);
void itrace_record(uint64_t pc);
void itrace_output();
void dump_gpr(); // 打印寄存器

// ============= Format ================
