// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc.h for the primary calling header

#include "verilated.h"

#include "Vsoc__Syms.h"
#include "Vsoc___024root.h"

void Vsoc___024root___ctor_var_reset(Vsoc___024root* vlSelf);

Vsoc___024root::Vsoc___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsoc___024root___ctor_var_reset(this);
}

void Vsoc___024root::__Vconfigure(Vsoc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsoc___024root::~Vsoc___024root() {
}
