// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb__Syms.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___initial__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___initial__TOP__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_h6d578ef8__0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string("wave.vcd"));
    vlSymsp->_traceDumpOpen();
    __Vtemp_h6d578ef8__0[0U] = 0x2e747874U;
    __Vtemp_h6d578ef8__0[1U] = 0x5f414444U;
    __Vtemp_h6d578ef8__0[2U] = 0x64617461U;
    __Vtemp_h6d578ef8__0[3U] = 0x6e73745fU;
    __Vtemp_h6d578ef8__0[4U] = 0x74622f69U;
    __Vtemp_h6d578ef8__0[5U] = 0x7372632fU;
    __Vtemp_h6d578ef8__0[6U] = 0x2e2f76U;
    VL_READMEM_N(false, 32, 4096, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_h6d578ef8__0)
                 ,  &(vlSelf->tb__DOT__soc_inst__DOT__rom_inst__DOT__rom_mem)
                 , 0, ~0ULL);
    vlSelf->tb__DOT__clk = 0U;
    while (1U) {
        vlSelf->tb__DOT__clk = (1U & (~ (IData)(vlSelf->tb__DOT__clk)));
    }
    vlSelf->tb__DOT__clk = 0U;
    vlSelf->tb__DOT__rst = 0U;
}
