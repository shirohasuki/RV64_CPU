// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv.h for the primary calling header

#ifndef VERILATED_VRISCV___024ROOT_H_
#define VERILATED_VRISCV___024ROOT_H_  // guard

#include "verilated.h"

class Vriscv__Syms;
VL_MODULE(Vriscv___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*4:0*/ riscv__DOT__id_rs1_addr_o;
    CData/*4:0*/ riscv__DOT__id_rs2_addr_o;
    CData/*4:0*/ riscv__DOT__id_ex_rd_addr_o;
    CData/*0:0*/ riscv__DOT__id_ex_reg_wen;
    CData/*4:0*/ riscv__DOT__ex_rd_addr_o;
    CData/*0:0*/ riscv__DOT__ex_reg_wen_o;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(inst_i,31,0);
    VL_OUT(inst_addr_o,31,0);
    IData/*31:0*/ riscv__DOT__pc_reg_pc_o;
    IData/*31:0*/ riscv__DOT__if_id_inst_addr_o;
    IData/*31:0*/ riscv__DOT__if_id_inst_o;
    IData/*31:0*/ riscv__DOT__regs_rs1_rdata_o;
    IData/*31:0*/ riscv__DOT__id_ex_inst_o;
    IData/*31:0*/ riscv__DOT__id_ex_inst_addr_o;
    IData/*31:0*/ riscv__DOT__id_ex_op1_o;
    IData/*31:0*/ riscv__DOT__id_ex_op2_o;
    IData/*31:0*/ riscv__DOT__ex_rd_data_o;
    IData/*31:0*/ riscv__DOT__regs_inst__DOT__unnamedblk1__DOT__i;
    VlUnpacked<IData/*31:0*/, 32> riscv__DOT__regs_inst__DOT__regs;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vriscv__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vriscv___024root(const char* name);
    ~Vriscv___024root();
    VL_UNCOPYABLE(Vriscv___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vriscv__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
