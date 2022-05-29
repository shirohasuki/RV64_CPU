// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb___024root.h"

VL_INLINE_OPT void Vtb___024root___sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o;
    CData/*4:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v1;
    // Body
    __Vdlyvset__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0 = 0U;
    __Vdlyvset__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v1 = 0U;
    __Vdly__tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
        = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o;
    vlSelf->tb__DOT__unnamedblk1__DOT__r = 0x20U;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i = 0x1fU;
    }
    VL_WRITEF("x 0 register value is %10#\nx 1 register value is %10#\nx 2 register value is %10#\nx 3 register value is %10#\nx 4 register value is %10#\nx 5 register value is %10#\nx 6 register value is %10#\nx 7 register value is %10#\nx 8 register value is %10#\nx 9 register value is %10#\nx10 register value is %10#\nx11 register value is %10#\nx12 register value is %10#\nx13 register value is %10#\nx14 register value is %10#\nx15 register value is %10#\nx16 register value is %10#\nx17 register value is %10#\nx18 register value is %10#\nx19 register value is %10#\n",
              32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [1U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [2U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [3U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [4U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [5U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [6U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [7U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [8U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [9U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0xaU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0xbU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0xcU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0xdU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0xeU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0xfU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x10U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x11U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x12U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x13U]);
    VL_WRITEF("x20 register value is %10#\nx21 register value is %10#\nx22 register value is %10#\nx23 register value is %10#\nx24 register value is %10#\nx25 register value is %10#\nx26 register value is %10#\nx27 register value is %10#\nx28 register value is %10#\nx29 register value is %10#\nx30 register value is %10#\nx31 register value is %10#\n",
              32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x14U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x15U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x16U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x17U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x18U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x19U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x1aU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x1bU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x1cU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x1dU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x1eU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x1fU]);
    if ((1U == vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
         [0x1aU])) {
        if (VL_LIKELY((1U == vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                       [0x1bU]))) {
            VL_WRITEF("########  pass  !!!#########\n");
        } else {
            VL_WRITEF("########  fail  !!!#########\n");
            vlSelf->tb__DOT__unnamedblk2__DOT__r = 0x20U;
            VL_WRITEF("fail testnum = %2#\nx 0 register value is %10#\nx 1 register value is %10#\nx 2 register value is %10#\nx 3 register value is %10#\nx 4 register value is %10#\nx 5 register value is %10#\nx 6 register value is %10#\nx 7 register value is %10#\nx 8 register value is %10#\nx 9 register value is %10#\nx10 register value is %10#\nx11 register value is %10#\nx12 register value is %10#\nx13 register value is %10#\nx14 register value is %10#\nx15 register value is %10#\nx16 register value is %10#\nx17 register value is %10#\nx18 register value is %10#\n",
                      32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [3U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [1U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [2U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [3U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [4U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [5U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [6U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [7U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [8U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [9U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0xaU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0xbU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0xcU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0xdU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0xeU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0xfU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x10U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x11U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x12U]);
            VL_WRITEF("x19 register value is %10#\nx20 register value is %10#\nx21 register value is %10#\nx22 register value is %10#\nx23 register value is %10#\nx24 register value is %10#\nx25 register value is %10#\nx26 register value is %10#\nx27 register value is %10#\nx28 register value is %10#\nx29 register value is %10#\nx30 register value is %10#\nx31 register value is %10#\n",
                      32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x13U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x14U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x15U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x16U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x17U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x18U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x19U],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x1aU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x1bU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x1cU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x1dU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x1eU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                      [0x1fU]);
        }
    }
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen 
        = ((~ ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_hold_flag_o))) 
           & (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen));
    if ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_hold_flag_o)))) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o = 0U;
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o 
            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o 
            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o;
    }
    if (vlSelf->rst) {
        if (((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o) 
             & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o)))) {
            __Vdlyvval__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0 
                = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o;
            __Vdlyvset__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0 = 1U;
            __Vdlyvdim0__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0 
                = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o;
        }
        __Vdly__tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
            = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o)
                ? ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                    ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                        ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                            ? 0U : ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                         ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                             ? ((1U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                 ? 
                                                (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
                                                 + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o)
                                                 : 0U)
                                             : 0U) : 0U)
                                     : ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                         ? 0U : ((2U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                        >> 0xcU)))
                                                    ? 
                                                   ((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o 
                                                     + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__immB) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i))))))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o 
                                                      + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__immB) 
                                                     & (- (IData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i))))
                                                     : 0U))
                                                   : 0U)
                                                  : 0U))))
                        : 0U) : 0U) : ((IData)(4U) 
                                       + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o));
    } else {
        __Vdlyvset__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v1 = 1U;
        __Vdly__tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o = 0U;
    }
    if (__Vdlyvset__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[__Vdlyvdim0__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0] 
            = __Vdlyvval__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0;
    }
    if (__Vdlyvset__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v1) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[1U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[2U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[3U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[4U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[5U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[6U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[7U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[8U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[9U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0xaU] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0xbU] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0xcU] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0xdU] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0xeU] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0xfU] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x10U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x11U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x12U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x13U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x14U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x15U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x16U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x17U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x18U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x19U] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x1aU] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x1bU] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x1cU] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x1dU] = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x1eU] = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_hold_flag_o)))) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o = 0x13U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o = 0U;
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o 
            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o 
            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o;
    }
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
           == vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__immB 
        = (((- (IData)((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                        >> 0x1fU))) << 0xcU) | ((0x800U 
                                                 & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                         >> 7U)))));
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o 
            = (1U & (IData)((0x2fU == (0x3fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o))));
        if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
            if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                if ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                    if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                        if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                                = (0x1fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o));
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o 
                                = ((IData)(4U) + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o);
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                                = (0x1fU & 0U);
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                        = (0x1fU & 0U);
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                = (0x1fU & 0U);
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
        }
    } else if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o 
            = (1U & (IData)(((0x10U == (0x18U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                             & ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? ((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                     >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 : (IData)((3U == (0x7003U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)))))));
        if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
            if ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                    if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                            = (0x1fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o));
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o;
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                        = (0x1fU & 0U);
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                }
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                    if ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                      >> 0xcU)))) {
                        if ((0U == (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                    >> 0x19U))) {
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                                = (0x1fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o));
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o 
                                = (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
                                   + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o);
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                            >> 7U));
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o 
                                = (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o 
                                   - vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o);
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                        = (0x1fU & 0U);
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                = (0x1fU & 0U);
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o 
            = (1U & (IData)((0x13U == (0x701fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o))));
        if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
            if ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                    if ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                      >> 0xcU)))) {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                            = (0x1fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o));
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o 
                            = (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
                               + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o);
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                        = (0x1fU & 0U);
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                = (0x1fU & 0U);
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
        }
    }
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_hold_flag_o)))
            ? 0x13U : vlSelf->tb__DOT__soc_inst__DOT__rom_inst__DOT__rom_mem
           [(0xfffU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
                       >> 2U))]);
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o 
        = (1U & ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                  ? (IData)(((0x20U == (0x30U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                             & ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? (IData)((7U == (7U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)))
                                 : (IData)(((3U == 
                                             (7U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                                            & ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                    >> 0xcU)))
                                                ? (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i))
                                                : (IData)(
                                                          ((0U 
                                                            == 
                                                            (0x7000U 
                                                             & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                                                           & (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i)))))))))
                  : (IData)((0x37U == (0x3fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)))));
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
        = __Vdly__tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_hold_flag_o 
        = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o;
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen 
            = (1U & (IData)((0x2fU == (0x3fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))));
        if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
            if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                    = (0x1fU & 0U);
            } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o 
                    = (0x1fU & ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                 ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                     ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                         ? (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                            >> 7U) : 0U)
                                     : 0U) : 0U));
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                    = (0x1fU & 0U);
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o 
                    = (0x1fU & 0U);
                if ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                        = (0x1fU & 0U);
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                        = (0x1fU & 0U);
                } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                    if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                        if (((1U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                           >> 0xcU))) 
                             | (0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                             >> 0xcU))))) {
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                            >> 0xfU));
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                                = (0x1fU & 0U);
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                        = (0x1fU & 0U);
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                        = (0x1fU & 0U);
                }
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o 
                = (0x1fU & 0U);
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                = (0x1fU & 0U);
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                = (0x1fU & 0U);
        }
    } else if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen 
            = (1U & (IData)(((0x10U == (0x18U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) 
                             & ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                 ? ((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                     >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                 : ((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                     >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)))));
        if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
            if ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                    = (0x1fU & 0U);
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o 
                    = (0x1fU & ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                 ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                     ? (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 7U) : 0U)
                                 : 0U));
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                    = (0x1fU & 0U);
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                    if ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                      >> 0xcU)))) {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 7U));
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0x14U));
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0xfU));
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o 
                        = (0x1fU & 0U);
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                        = (0x1fU & 0U);
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                        = (0x1fU & 0U);
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                    = (0x1fU & 0U);
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o 
                = (0x1fU & 0U);
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                = (0x1fU & 0U);
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                = (0x1fU & 0U);
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen 
            = (1U & (IData)((0x13U == (0x701fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))));
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o 
            = (0x1fU & ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                         ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                             ? 0U : ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                      ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                    >> 7U)
                                                    : 0U)
                                                   : 0U)
                                               : 0U)))
                         : 0U));
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
            = (0x1fU & 0U);
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
            = (0x1fU & ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                         ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                             ? 0U : ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                      ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                    >> 0xfU)
                                                    : 0U)
                                                   : 0U)
                                               : 0U)))
                         : 0U));
    }
}

VL_INLINE_OPT void Vtb___024root___combo__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___combo__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o))) {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o = 0U;
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o 
                = (((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o) 
                    & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o) 
                       == (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o)))
                    ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o
                    : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                   [vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o]);
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o 
                = (((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o) 
                    & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o) 
                       == (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o)))
                    ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o
                    : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                   [vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o]);
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o = 0U;
    }
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
        if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
            if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
            } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o 
                    = ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                        ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                            ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                ? (((- (IData)((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o) 
                                                 | ((0x800U 
                                                     & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                          >> 0x14U)))))
                                : 0U) : 0U) : 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                    if (((1U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                       >> 0xcU))) | 
                         (0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                       >> 0xcU))))) {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o;
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
        }
    } else if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
        if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
            if ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o 
                    = ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                        ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                            ? (0xfffff000U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                            : 0U) : 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                    if ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                      >> 0xcU)))) {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o;
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
        }
    } else if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
        if ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
        } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
        } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
            if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                if ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                  >> 0xcU)))) {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o;
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o 
                        = (((- (IData)((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0x14U));
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
    }
}

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtb___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtb___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
