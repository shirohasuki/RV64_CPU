// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"

class Vtb__Syms;
VL_MODULE(Vtb___024root) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clk;
    CData/*0:0*/ tb__DOT__rst;
    CData/*4:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o;
    CData/*4:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o;
    CData/*4:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o;
    CData/*0:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen;
    CData/*4:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o;
    CData/*0:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o;
    CData/*0:0*/ __Vclklast__TOP__tb__DOT__clk;
    IData/*31:0*/ tb__DOT__soc_inst__DOT__rom_inst_o;
    IData/*31:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o;
    IData/*31:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o;
    IData/*31:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o;
    IData/*31:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o;
    IData/*31:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o;
    IData/*31:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o;
    IData/*31:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o;
    IData/*31:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o;
    IData/*31:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o;
    IData/*31:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i;
    VlUnpacked<IData/*31:0*/, 32> tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs;
    VlUnpacked<IData/*31:0*/, 4096> tb__DOT__soc_inst__DOT__rom_inst__DOT__rom_mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtb___024root(const char* name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
