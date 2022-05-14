// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpc_reg.h for the primary calling header

#ifndef VERILATED_VPC_REG___024ROOT_H_
#define VERILATED_VPC_REG___024ROOT_H_  // guard

#include "verilated.h"

class Vpc_reg__Syms;
VL_MODULE(Vpc_reg___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(pc_o,31,0);

    // INTERNAL VARIABLES
    Vpc_reg__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vpc_reg___024root(const char* name);
    ~Vpc_reg___024root();
    VL_UNCOPYABLE(Vpc_reg___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vpc_reg__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
