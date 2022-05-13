// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc_reg.h for the primary calling header

#include "verilated.h"

#include "Vpc_reg___024root.h"

VL_ATTR_COLD void Vpc_reg___024root___eval_initial(Vpc_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_reg___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vpc_reg___024root___eval_settle(Vpc_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_reg___024root___eval_settle\n"); );
}

VL_ATTR_COLD void Vpc_reg___024root___final(Vpc_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_reg___024root___final\n"); );
}

VL_ATTR_COLD void Vpc_reg___024root___ctor_var_reset(Vpc_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_reg___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rst = 0;
    vlSelf->clk = 0;
    vlSelf->pc_o = 0;
}
