// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv.h for the primary calling header

#include "verilated.h"

#include "Vriscv___024root.h"

VL_ATTR_COLD void Vriscv___024root___settle__TOP__0(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___settle__TOP__0\n"); );
    // Body
    if ((0x13U == (0x7fU & vlSelf->inst_i))) {
        if ((0U == (7U & (vlSelf->inst_i >> 0xcU)))) {
            vlSelf->riscv__DOT__ex_reg_wen_o = 1U;
            vlSelf->riscv__DOT__ex_rd_addr_o = (0x1fU 
                                                & (vlSelf->inst_i 
                                                   >> 7U));
            vlSelf->inst_addr_o = vlSelf->riscv__DOT__pc_reg_pc_o;
            vlSelf->riscv__DOT__ex_rd_data_o = (vlSelf->riscv__DOT__id_ex_op1_o 
                                                + vlSelf->riscv__DOT__id_ex_op2_o);
        } else {
            vlSelf->riscv__DOT__ex_reg_wen_o = 0U;
            vlSelf->riscv__DOT__ex_rd_addr_o = (0x1fU 
                                                & 0U);
            vlSelf->inst_addr_o = vlSelf->riscv__DOT__pc_reg_pc_o;
            vlSelf->riscv__DOT__ex_rd_data_o = 0U;
        }
    } else {
        vlSelf->riscv__DOT__ex_reg_wen_o = (IData)(
                                                   (0x33U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst_i)));
        if ((0x33U == (0x7fU & vlSelf->inst_i))) {
            if ((0U == (7U & (vlSelf->inst_i >> 0xcU)))) {
                vlSelf->riscv__DOT__ex_rd_addr_o = 
                    (0x1fU & (vlSelf->inst_i >> 7U));
                vlSelf->inst_addr_o = vlSelf->riscv__DOT__pc_reg_pc_o;
                vlSelf->riscv__DOT__ex_rd_data_o = 
                    ((0U == (vlSelf->inst_i >> 0x19U))
                      ? (vlSelf->riscv__DOT__id_ex_op1_o 
                         + vlSelf->riscv__DOT__id_ex_op2_o)
                      : (vlSelf->riscv__DOT__id_ex_op2_o 
                         - vlSelf->riscv__DOT__id_ex_op1_o));
            } else {
                vlSelf->riscv__DOT__ex_rd_addr_o = 
                    (0x1fU & 0U);
                vlSelf->inst_addr_o = vlSelf->riscv__DOT__pc_reg_pc_o;
                vlSelf->riscv__DOT__ex_rd_data_o = 0U;
            }
        } else {
            vlSelf->riscv__DOT__ex_rd_addr_o = (0x1fU 
                                                & 0U);
            vlSelf->inst_addr_o = vlSelf->riscv__DOT__pc_reg_pc_o;
            vlSelf->riscv__DOT__ex_rd_data_o = 0U;
        }
    }
    if ((0x13U == (0x7fU & vlSelf->riscv__DOT__if_id_inst_o))) {
        vlSelf->riscv__DOT__id_rs2_addr_o = 0U;
        vlSelf->riscv__DOT__id_rs1_addr_o = (0x1fU 
                                             & ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->riscv__DOT__if_id_inst_o 
                                                     >> 0xcU)))
                                                 ? 
                                                (vlSelf->riscv__DOT__if_id_inst_o 
                                                 >> 0xfU)
                                                 : 0U));
    } else if ((0x33U == (0x7fU & vlSelf->riscv__DOT__if_id_inst_o))) {
        if ((0U == (7U & (vlSelf->riscv__DOT__if_id_inst_o 
                          >> 0xcU)))) {
            vlSelf->riscv__DOT__id_rs2_addr_o = (0x1fU 
                                                 & (vlSelf->riscv__DOT__if_id_inst_o 
                                                    >> 0x14U));
            vlSelf->riscv__DOT__id_rs1_addr_o = (0x1fU 
                                                 & (vlSelf->riscv__DOT__if_id_inst_o 
                                                    >> 0xfU));
        } else {
            vlSelf->riscv__DOT__id_rs2_addr_o = 0U;
            vlSelf->riscv__DOT__id_rs1_addr_o = (0x1fU 
                                                 & 0U);
        }
    } else {
        vlSelf->riscv__DOT__id_rs2_addr_o = 0U;
        vlSelf->riscv__DOT__id_rs1_addr_o = (0x1fU 
                                             & 0U);
    }
    vlSelf->riscv__DOT__regs_rs1_data_o = ((IData)(vlSelf->rst)
                                            ? ((0U 
                                                == (IData)(vlSelf->riscv__DOT__id_rs1_addr_o))
                                                ? 0U
                                                : (
                                                   ((IData)(vlSelf->riscv__DOT__ex_reg_wen_o) 
                                                    & ((IData)(vlSelf->riscv__DOT__ex_rd_addr_o) 
                                                       == (IData)(vlSelf->riscv__DOT__id_rs1_addr_o)))
                                                    ? vlSelf->riscv__DOT__ex_rd_data_o
                                                    : 
                                                   vlSelf->riscv__DOT__regs_inst__DOT__regs
                                                   [vlSelf->riscv__DOT__id_rs1_addr_o]))
                                            : 0U);
}

VL_ATTR_COLD void Vriscv___024root___eval_initial(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vriscv___024root___eval_settle(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___eval_settle\n"); );
    // Body
    Vriscv___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vriscv___024root___final(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___final\n"); );
}

VL_ATTR_COLD void Vriscv___024root___ctor_var_reset(Vriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->inst_i = 0;
    vlSelf->inst_addr_o = 0;
    vlSelf->riscv__DOT__pc_reg_pc_o = 0;
    vlSelf->riscv__DOT__if_id_inst_addr_o = 0;
    vlSelf->riscv__DOT__if_id_inst_o = 0;
    vlSelf->riscv__DOT__id_rs1_addr_o = 0;
    vlSelf->riscv__DOT__id_rs2_addr_o = 0;
    vlSelf->riscv__DOT__regs_rs1_data_o = 0;
    vlSelf->riscv__DOT__id_ex_inst_o = 0;
    vlSelf->riscv__DOT__id_ex_inst_addr_o = 0;
    vlSelf->riscv__DOT__id_ex_op1_o = 0;
    vlSelf->riscv__DOT__id_ex_op2_o = 0;
    vlSelf->riscv__DOT__id_ex_rd_addr_o = 0;
    vlSelf->riscv__DOT__id_ex_reg_wen = 0;
    vlSelf->riscv__DOT__ex_rd_data_o = 0;
    vlSelf->riscv__DOT__ex_rd_addr_o = 0;
    vlSelf->riscv__DOT__ex_reg_wen_o = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->riscv__DOT__regs_inst__DOT__regs[__Vi0] = 0;
    }
    vlSelf->riscv__DOT__regs_inst__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
