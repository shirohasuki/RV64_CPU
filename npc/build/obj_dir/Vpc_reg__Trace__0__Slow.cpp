// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpc_reg__Syms.h"


VL_ATTR_COLD void Vpc_reg___024root__trace_init_sub__TOP__0(Vpc_reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_reg___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBus(c+3,"pc_o", false,-1, 31,0);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBus(c+3,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpc_reg___024root__trace_init_top(Vpc_reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_reg___024root__trace_init_top\n"); );
    // Body
    Vpc_reg___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpc_reg___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vpc_reg___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vpc_reg___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpc_reg___024root__trace_register(Vpc_reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_reg___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vpc_reg___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vpc_reg___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vpc_reg___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpc_reg___024root__trace_full_sub_0(Vpc_reg___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpc_reg___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_reg___024root__trace_full_top_0\n"); );
    // Init
    Vpc_reg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpc_reg___024root*>(voidSelf);
    Vpc_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpc_reg___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vpc_reg___024root__trace_full_sub_0(Vpc_reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc_reg___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->rst));
    tracep->fullBit(oldp+2,(vlSelf->clk));
    tracep->fullIData(oldp+3,(vlSelf->pc_o),32);
}
