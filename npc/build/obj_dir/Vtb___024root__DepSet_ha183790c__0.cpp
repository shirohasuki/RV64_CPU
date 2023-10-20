// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb___024root.h"

VL_INLINE_OPT void Vtb___024root___combo__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->io_out = ((7U == (IData)(vlSelf->io_in))
                       ? 0x80U : ((6U == (IData)(vlSelf->io_in))
                                   ? 0x40U : ((5U == (IData)(vlSelf->io_in))
                                               ? 0x20U
                                               : ((4U 
                                                   == (IData)(vlSelf->io_in))
                                                   ? 0x10U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->io_in))
                                                    ? 8U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->io_in))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->io_in))
                                                      ? 2U
                                                      : 1U)))))));
}

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    // Body
    Vtb___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_in & 0xf8U))) {
        Verilated::overWidthError("io_in");}
}
#endif  // VL_DEBUG
