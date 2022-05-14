// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc_reg.h for the primary calling header

#include "verilated.h"

#include "Vpc_reg__Syms.h"
#include "Vpc_reg___024root.h"

void Vpc_reg___024root___ctor_var_reset(Vpc_reg___024root* vlSelf);

Vpc_reg___024root::Vpc_reg___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vpc_reg___024root___ctor_var_reset(this);
}

void Vpc_reg___024root::__Vconfigure(Vpc_reg__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vpc_reg___024root::~Vpc_reg___024root() {
}
