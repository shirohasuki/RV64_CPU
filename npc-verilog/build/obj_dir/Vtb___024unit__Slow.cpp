// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb__Syms.h"
#include "Vtb___024unit.h"

void Vtb___024unit___ctor_var_reset(Vtb___024unit* vlSelf);

Vtb___024unit::Vtb___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtb___024unit___ctor_var_reset(this);
}

void Vtb___024unit::__Vconfigure(Vtb__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtb___024unit::~Vtb___024unit() {
}
