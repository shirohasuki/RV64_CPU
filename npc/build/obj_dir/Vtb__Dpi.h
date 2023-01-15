// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTB__DPI_H_
#define VERILATED_VTB__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/shiroha/Code/ysyx/ysyx-workbench/npc/vsrc/ex.v:3:30
    extern void ebreak();
    // DPI import at /home/shiroha/Code/ysyx/ysyx-workbench/npc/vsrc/mem.v:40:30
    extern void get_pc(long long pc);
    // DPI import at /home/shiroha/Code/ysyx/ysyx-workbench/npc/vsrc/regs.v:1:30
    extern void get_regs(const svOpenArrayHandle regs);
    // DPI import at /home/shiroha/Code/ysyx/ysyx-workbench/npc/vsrc/mem.v:38:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at /home/shiroha/Code/ysyx/ysyx-workbench/npc/vsrc/mem.v:39:30
    extern void pmem_write(long long waddr, long long wdata, char mask);

#ifdef __cplusplus
}
#endif

#endif  // guard
