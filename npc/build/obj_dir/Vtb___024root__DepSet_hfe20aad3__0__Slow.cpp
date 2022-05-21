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
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string("wave.vcd"));
    vlSymsp->_traceDumpOpen();
    vlSelf->tb__DOT__clk = 0U;
    vlSelf->tb__DOT__rst = 0U;
}
