// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_sub_0(Vtb___024root* vlSelf, VerilatedVcd* tracep);

void Vtb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_top_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vtb___024root__trace_chg_sub_0(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    tracep->chgBit(oldp+0,(vlSelf->clock));
    tracep->chgBit(oldp+1,(vlSelf->reset));
    tracep->chgCData(oldp+2,(vlSelf->io_in),3);
    tracep->chgCData(oldp+3,(vlSelf->io_out),8);
    tracep->chgCData(oldp+4,(((7U == (IData)(vlSelf->io_in))
                               ? 0x80U : ((6U == (IData)(vlSelf->io_in))
                                           ? 0x40U : 
                                          ((5U == (IData)(vlSelf->io_in))
                                            ? 0x20U
                                            : ((4U 
                                                == (IData)(vlSelf->io_in))
                                                ? 0x10U
                                                : (
                                                   (3U 
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
                                                      : 1U)))))))),8);
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
