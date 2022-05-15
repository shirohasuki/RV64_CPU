// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc.h for the primary calling header

#ifndef VERILATED_VSOC___024ROOT_H_
#define VERILATED_VSOC___024ROOT_H_  // guard

#include "verilated.h"

class Vsoc__Syms;
VL_MODULE(Vsoc___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*4:0*/ soc__DOT__top_inst__DOT__id_rs1_addr_o;
    CData/*4:0*/ soc__DOT__top_inst__DOT__id_rs2_addr_o;
    CData/*4:0*/ soc__DOT__top_inst__DOT__id_ex_rd_addr_o;
    CData/*0:0*/ soc__DOT__top_inst__DOT__id_ex_reg_wen;
    CData/*4:0*/ soc__DOT__top_inst__DOT__ex_rd_addr_o;
    CData/*0:0*/ soc__DOT__top_inst__DOT__ex_reg_wen_o;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ soc__DOT__rom_inst_o;
    IData/*31:0*/ soc__DOT__top_inst__DOT__pc_reg_pc_o;
    IData/*31:0*/ soc__DOT__top_inst__DOT__if_id_inst_addr_o;
    IData/*31:0*/ soc__DOT__top_inst__DOT__if_id_inst_o;
    IData/*31:0*/ soc__DOT__top_inst__DOT__regs_rs1_data_o;
    IData/*31:0*/ soc__DOT__top_inst__DOT__id_ex_inst_o;
    IData/*31:0*/ soc__DOT__top_inst__DOT__id_ex_inst_addr_o;
    IData/*31:0*/ soc__DOT__top_inst__DOT__id_ex_op1_o;
    IData/*31:0*/ soc__DOT__top_inst__DOT__id_ex_op2_o;
    IData/*31:0*/ soc__DOT__top_inst__DOT__ex_rd_data_o;
    IData/*31:0*/ soc__DOT__top_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i;
    VlUnpacked<IData/*31:0*/, 32> soc__DOT__top_inst__DOT__regs_inst__DOT__regs;
    VlUnpacked<IData/*31:0*/, 4096> soc__DOT__rom_inst__DOT__rom_mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vsoc__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vsoc___024root(const char* name);
    ~Vsoc___024root();
    VL_UNCOPYABLE(Vsoc___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vsoc__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
