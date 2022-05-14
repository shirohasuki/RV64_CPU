// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc_reg.h for the primary calling header

#include "verilated.h"

#include "Vpc_reg___024root.h"

VL_INLINE_OPT void Vpc_reg___024root___sequent__TOP__0(Vpc_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_reg___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->pc_o = ((IData)(vlSelf->rst) ? ((IData)(4U) 
                                            + vlSelf->pc_o)
                     : 0U);
}

void Vpc_reg___024root___eval(Vpc_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_reg___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vpc_reg___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vpc_reg___024root___eval_debug_assertions(Vpc_reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_reg___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
