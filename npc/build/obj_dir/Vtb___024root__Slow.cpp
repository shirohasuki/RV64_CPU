// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb__Syms.h"
#include "Vtb___024root.h"

void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf);

Vtb___024root::Vtb___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtb___024root___ctor_var_reset(this);
}

void Vtb___024root::__Vconfigure(Vtb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtb___024root::~Vtb___024root() {
}
