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

// #define CONFIG_DIFFTEST 1
// #define CONFIG_VCD 1
#define CONFIG_ITRACE 1
// #define CONFIG_MTRACE 1
// #define CONFIG_FTRACE 1


typedef long long ll;

// =============== Memory ===============
#define MEM_BASE 0x80000000
#define MEM_SIZE 65536

static uint8_t mem[MEM_SIZE];
// Memory transfer
uint8_t* cpu2mem(ll addr);

long load_image(char const *img_file); 

