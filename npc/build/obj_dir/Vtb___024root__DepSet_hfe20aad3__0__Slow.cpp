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
    VlWide<3>/*95:0*/ __Vtemp_hf5734d1a__0;
    VlWide<6>/*191:0*/ __Vtemp_hf32e9773__0;
    // Body
    __Vtemp_hf5734d1a__0[0U] = 0x2e766364U;
    __Vtemp_hf5734d1a__0[1U] = 0x77617665U;
    __Vtemp_hf5734d1a__0[2U] = 0x2e2fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_hf5734d1a__0));
    vlSymsp->_traceDumpOpen();
    __Vtemp_hf32e9773__0[0U] = 0x2e747874U;
    __Vtemp_hf32e9773__0[1U] = 0x5f414444U;
    __Vtemp_hf32e9773__0[2U] = 0x64617461U;
    __Vtemp_hf32e9773__0[3U] = 0x6e73745fU;
    __Vtemp_hf32e9773__0[4U] = 0x74622f69U;
    __Vtemp_hf32e9773__0[5U] = 0x2e2fU;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_hf32e9773__0)
                 ,  &(vlSelf->tb__DOT__soc_inst__DOT__rom_inst__DOT__rom_mem)
                 , 0, ~0ULL);
    vlSelf->tb__DOT__clk = 1U;
    vlSelf->tb__DOT__rst = 1U;
}
