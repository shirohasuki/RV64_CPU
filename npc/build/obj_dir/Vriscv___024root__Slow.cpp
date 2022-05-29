// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv.h for the primary calling header

#include "verilated.h"

#include "Vriscv__Syms.h"
#include "Vriscv___024root.h"

void Vriscv___024root___ctor_var_reset(Vriscv___024root* vlSelf);

Vriscv___024root::Vriscv___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vriscv___024root___ctor_var_reset(this);
}

void Vriscv___024root::__Vconfigure(Vriscv__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vriscv___024root::~Vriscv___024root() {
}
