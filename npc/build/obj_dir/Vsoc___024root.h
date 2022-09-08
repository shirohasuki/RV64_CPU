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
    CData/*0:0*/ soc__DOT__riscv_w_en;
    CData/*0:0*/ soc__DOT__riscv_r_en;
    CData/*4:0*/ soc__DOT__riscv_inst__DOT__id_rs1_addr_o;
    CData/*4:0*/ soc__DOT__riscv_inst__DOT__id_rs2_addr_o;
    CData/*4:0*/ soc__DOT__riscv_inst__DOT__id_rd_addr_o;
    CData/*0:0*/ soc__DOT__riscv_inst__DOT__id_reg_wen;
    CData/*4:0*/ soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o;
    CData/*0:0*/ soc__DOT__riscv_inst__DOT__id_ex_reg_wen;
    CData/*4:0*/ soc__DOT__riscv_inst__DOT__ex_rd_addr_o;
    CData/*0:0*/ soc__DOT__riscv_inst__DOT__ex_reg_wen_o;
    CData/*0:0*/ soc__DOT__riscv_inst__DOT__ex_jump_en_o;
    CData/*0:0*/ soc__DOT__riscv_inst__DOT__ctrl_hold_flag_o;
    CData/*0:0*/ soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i;
    CData/*0:0*/ soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed;
    CData/*0:0*/ soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned;
    CData/*0:0*/ soc__DOT__ram_inst__DOT__rd_wr_equ_flag;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*11:0*/ soc__DOT__riscv_w_addr_o;
    SData/*11:0*/ soc__DOT__riscv_r_addr_o;
    IData/*31:0*/ soc__DOT__riscv_w_data_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__pc_reg_pc_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__if_id_inst_addr_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__if_id_inst_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__id_op1_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__id_op2_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__id_offset_addr_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__regs_rs1_rdata_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__regs_rs2_rdata_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__id_ex_inst_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__id_ex_inst_addr_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__id_ex_op1_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__id_ex_op2_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__id_ex_base_addr_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__id_ex_offset_addr_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__ex_rd_data_o;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__id_inst__DOT__immI;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__id_inst__DOT__immB;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i;
    IData/*31:0*/ soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset;
    IData/*31:0*/ soc__DOT__ram_inst__DOT__w_data_reg;
    IData/*31:0*/ soc__DOT__ram_inst__DOT__r_data_write;
    VlUnpacked<IData/*31:0*/, 32> soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs;
    VlUnpacked<IData/*31:0*/, 4096> soc__DOT__rom_inst__DOT__rom_mem;
    VlUnpacked<IData/*31:0*/, 4096> soc__DOT__ram_inst__DOT__ram_template_inst__DOT__memory;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
