// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb__Syms.h"
#include "Vtb___024root.h"

extern const VlWide<9>/*287:0*/ Vtb__ConstPool__CONST_h19ac7e42_0;

VL_ATTR_COLD void Vtb___024root___initial__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___initial__TOP__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string("wave.vcd"));
    vlSymsp->_traceDumpOpen();
    if (VL_LIKELY((1U == vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                   [0x1bU]))) {
        VL_WRITEF("############################\n########  pass  !!!#########\n############################\n");
    } else {
        VL_WRITEF("############################\n########  fail  !!!#########\n############################\n");
        vlSelf->tb__DOT__r = 0x1fU;
        VL_WRITEF("fail testnum = %2#\nx 0 register value is %10#\nx 1 register value is %10#\nx 2 register value is %10#\nx 3 register value is %10#\nx 4 register value is %10#\nx 5 register value is %10#\nx 6 register value is %10#\nx 7 register value is %10#\nx 8 register value is %10#\nx 9 register value is %10#\nx10 register value is %10#\nx11 register value is %10#\nx12 register value is %10#\nx13 register value is %10#\nx14 register value is %10#\nx15 register value is %10#\nx16 register value is %10#\nx17 register value is %10#\nx18 register value is %10#\n",
                  32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [3U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [1U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [2U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [3U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [4U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [5U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [6U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [7U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [8U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [9U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0xaU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0xbU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0xcU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0xdU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0xeU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0xfU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0x10U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0x11U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0x12U]);
        VL_WRITEF("x19 register value is %10#\nx20 register value is %10#\nx21 register value is %10#\nx22 register value is %10#\nx23 register value is %10#\nx24 register value is %10#\nx25 register value is %10#\nx26 register value is %10#\nx27 register value is %10#\nx28 register value is %10#\nx29 register value is %10#\nx30 register value is %10#\n",
                  32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0x13U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0x14U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0x15U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0x16U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0x17U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0x18U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0x19U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0x1aU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0x1bU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0x1cU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0x1dU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                  [0x1eU]);
    }
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(9, Vtb__ConstPool__CONST_h19ac7e42_0)
                 ,  &(vlSelf->tb__DOT__soc_inst__DOT__rom_inst__DOT__rom_mem)
                 , 0, ~0ULL);
}
