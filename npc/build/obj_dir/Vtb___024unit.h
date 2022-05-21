// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024UNIT_H_
#define VERILATED_VTB___024UNIT_H_  // guard

#include "verilated.h"

class Vtb__Syms;
VL_MODULE(Vtb___024unit) {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__numcycles;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtb___024unit(const char* name);
    ~Vtb___024unit();
    VL_UNCOPYABLE(Vtb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(Vtb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
