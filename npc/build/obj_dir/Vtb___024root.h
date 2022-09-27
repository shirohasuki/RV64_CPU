// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"

class Vtb__Syms;
class Vtb___024unit;

VL_MODULE(Vtb___024root) {
  public:
    // CELLS
    Vtb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*4:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o;
    CData/*4:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o;
    CData/*4:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o;
    CData/*0:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen;
    CData/*4:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o;
    CData/*0:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen;
    CData/*4:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o;
    CData/*0:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o;
    CData/*0:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o;
    CData/*0:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_hold_flag_o;
    CData/*0:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i;
    CData/*0:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed;
    CData/*0:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o;
    IData/*31:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o;
    IData/*31:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__ram_riscv_rdata_o;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_base_addr_o;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_offset_addr_o;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_base_addr_o;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_offset_addr_o;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__inst_fetch_inst__DOT__inst_get;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immI;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immU;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immB;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immL;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_add;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned;
    QData/*63:0*/ tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_signed;
    QData/*63:0*/ __Vtask_inst_fetch__0__rdata;
    VlUnpacked<QData/*63:0*/, 32> tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
