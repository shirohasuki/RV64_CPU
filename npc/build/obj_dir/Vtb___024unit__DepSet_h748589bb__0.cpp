// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb__Syms.h"
#include "Vtb___024unit.h"

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vtb___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char mask);

VL_INLINE_OPT void Vtb___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char mask__Vcvt;
    for (size_t mask__Vidx = 0; mask__Vidx < 1; ++mask__Vidx) mask__Vcvt = mask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, mask__Vcvt);
}

extern "C" void ebreak();

VL_INLINE_OPT void Vtb___024unit____Vdpiimwrap_ebreak_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    ebreak();
}

extern "C" void get_pc(long long pc);

VL_INLINE_OPT void Vtb___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb___024unit____Vdpiimwrap_get_pc_TOP____024unit\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    get_pc(pc__Vcvt);
}

extern "C" void get_regs(const svOpenArrayHandle regs);

VL_INLINE_OPT void Vtb___024unit____Vdpiimwrap_get_regs__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &regs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb___024unit____Vdpiimwrap_get_regs__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const int regs__Vopenprops__ulims[2] = {0, 31};
    static const VerilatedVarProps regs__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, regs__Vopenprops__ulims);
    VerilatedDpiOpenVar regs__Vopenarray (&regs__Vopenprops, &regs);
    get_regs(&regs__Vopenarray);
}
