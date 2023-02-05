#include <stdio.h> 
#include <assert.h> 
#include <stdlib.h> 

// DPI-C
#include "verilated_dpi.h"
#include "Vtb__Dpi.h"
// verilator
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtb.h"
// difftest
#include <dlfcn.h>

// #include "macro.h"
// #include "common.h"
// #include "typedef.h"
// #include "ioe.h"

// ================ Typedef ===============
typedef long long ll;
typedef uint32_t paddr_t;
typedef uint64_t word_t;
typedef word_t vaddr_t;

// typedef uint16_t ioaddr_t;

// ============== 调试选项 ============= //
#define CONFIG_NPC_ITRACE 1
#define CONFIG_NPC_GPRTRACE 1
#define CONFIG_NPC_IFTRACE 1
#define CONFIG_NPC_DIFFTEST 1
#define CONFIG_NPC_MTRACE 1


// #define CONFIG_NPC_DEVICE
// #define CONFIG_TARGET_AM 1


// ============== DEVICE =============== //
// #ifdef CONFIG_NPC_DEVICE

// #define NPC_HAS_SERIAL 1
// #define NPC_HAS_TIMER 1
// //#define NPC_HAS_PORT_IO 1

// // #define CONFIG_RT_CHECK 1

// #endif

// ================ CPU ===================
static int status = 0;
typedef struct {
    word_t gpr[32];
    vaddr_t pc;
} CPU_state;

extern CPU_state cpu_npc;
extern CPU_state ref_cpu;

void npc_exit(int status);

// =============== Memory ===============
#define MEM_BASE 0x80000000
// #define MEM_SIZE 65536

#define MEM_SIZE 0x7ff00000

extern uint8_t mem[MEM_SIZE];

// Memory transfer
uint8_t* cpu2mem(ll addr);
long load_image(char const *img_file); 

// ============== Reg ===================
// extern uint64_t *cpu_gpr; //  改为CPU_state.gpr
// extern uint64_t cpu_pc; //  改为CPU_state.pc

// ============= ITRACE ================
void init_disasm(const char *triple);
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void itrace_record(uint64_t pc);
void itrace_output();

// ============= MTRACE ===============
#define SIZE_MTRACEBUF 16  // mtrace_buf环形里单次存储指令条数目
extern char mtrace_buf[SIZE_MTRACEBUF][100];
extern int mtrace_count;
void print_mtrace();


// ============= GPR ===================
void dump_gpr(); // 打印寄存器
// const char *riscv64_regs[] = {
//   "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
//   "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
//   "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
//   "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
// };

// ============= Format ================
#define COLOR(a, b) "\033[" #b "m" a "\033[0m"
#define GREEN(a) COLOR(a, 32)
#define RED(a) COLOR(a, 31)
#define BLUE(a) COLOR(a, 34)

// ============= Difftest ==============
#ifdef CONFIG_NPC_DIFFTEST

void init_difftest(const char *ref_so_file, ll img_size);
void difftest_exec_once();
int check_regs_npc(CPU_state ref_cpu);


enum {
    DIFFTEST_TO_DUT,
    DIFFTEST_TO_REF
};
extern void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction);
extern void (*ref_difftest_regcpy)(void *dut, bool direction);
extern void (*ref_difftest_exec)(uint64_t n);
extern void (*ref_difftest_raise_intr)(uint64_t NO);
extern void (*ref_difftest_init)();
#endif


// ============ Device ================
// void init_device();

// ============== DEVICE MAP ===============
#define DEVICE_BASE 0xa0000000

// #define MMIO_BASE 0xa0000000



#define SERIAL_MMIO      (DEVICE_BASE + 0x000003f8)
// #define SERIAL_PORT     (DEVICE_BASE + 0x0009cfd0)
                                       //0x8009cfd0
                                       //0x80000000


//#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_MMIO        (DEVICE_BASE + 0x00000048) // 映射的地址
