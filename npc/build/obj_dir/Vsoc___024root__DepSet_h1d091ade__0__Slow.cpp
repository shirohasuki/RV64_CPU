// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc.h for the primary calling header

#include "verilated.h"

#include "Vsoc___024root.h"

VL_ATTR_COLD void Vsoc___024root___initial__TOP__0(Vsoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root___initial__TOP__0\n"); );
    // Body
    VL_WRITEF("########  pass  !!!#########\n");
}

VL_ATTR_COLD void Vsoc___024root___settle__TOP__0(Vsoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset 
        = (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_base_addr_o 
           + vlSelf->soc__DOT__riscv_inst__DOT__id_ex_offset_addr_o);
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i 
        = (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o 
           == vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o);
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i 
        = (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o 
           + vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o);
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i 
        = (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o 
           & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o);
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i 
        = (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o 
           ^ vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o);
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i 
        = (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o 
           | vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o);
    if ((0x1fU >= vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o)) {
        vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i 
            = (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o 
               << vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o);
        vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i 
            = (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o 
               >> vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o);
    } else {
        vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i = 0U;
    }
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed 
        = VL_LTS_III(32, vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o);
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned 
        = (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o 
           < vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o);
    if ((0x40U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
        vlSelf->soc__DOT__riscv_inst__DOT__ex_reg_wen_o 
            = (1U & (IData)(((0x20U == (0x30U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                             & ((8U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? (IData)((7U == (7U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)))
                                 : (IData)((7U == (7U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)))))));
        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o 
            = ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                ? ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                    ? 0U : ((8U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                             ? ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                         ? (IData)(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o)
                                         : 0U) : 0U)
                                 : 0U) : ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                           ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                               ? ((1U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? (IData)(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o)
                                                   : 0U)
                                               : 0U)
                                           : 0U))) : 0U);
    } else if ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
        vlSelf->soc__DOT__riscv_inst__DOT__ex_reg_wen_o 
            = (1U & (IData)(((0x10U == (0x18U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                             & ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? ((vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                     >> 1U) & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 : ((vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                     >> 1U) & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)))));
        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o 
            = ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                ? ((8U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                    ? 0U : ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                             ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? (IData)(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o)
                                     : 0U) : 0U) : 
                            ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                              ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                  ? (IData)(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o)
                                  : 0U) : 0U))) : 0U);
    } else {
        vlSelf->soc__DOT__riscv_inst__DOT__ex_reg_wen_o 
            = (1U & (IData)(((0x10U == (0x18U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                             & ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? ((vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                     >> 1U) & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 : ((vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                     >> 1U) & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)))));
        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o 
            = ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                ? ((8U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                    ? 0U : ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                             ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? (IData)(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o)
                                     : 0U) : 0U) : 
                            ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                              ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                  ? (IData)(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o)
                                  : 0U) : 0U))) : 0U);
    }
    if ((0x40U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
        vlSelf->soc__DOT__riscv_inst__DOT__id_rd_addr_o 
            = (0x1fU & ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                         ? ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                             ? 0U : ((8U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                      ? ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                          ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                              ? ((1U 
                                                  & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                  ? 
                                                 (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                  >> 7U)
                                                  : 0U)
                                              : 0U)
                                          : 0U) : (
                                                   (4U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                      ? 
                                                     (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                      >> 7U)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)))
                         : 0U));
        vlSelf->soc__DOT__riscv_inst__DOT__id_reg_wen 
            = (1U & (IData)(((0x20U == (0x30U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) 
                             & ((8U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                 ? (IData)((7U == (7U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)))
                                 : (IData)((7U == (7U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)))))));
    } else if ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
        vlSelf->soc__DOT__riscv_inst__DOT__id_rd_addr_o 
            = (0x1fU & ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                         ? ((8U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                             ? 0U : ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                      ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                          ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                              ? (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                 >> 7U)
                                              : 0U)
                                          : 0U) : (
                                                   (2U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                     ? 
                                                    (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U)))
                         : 0U));
        vlSelf->soc__DOT__riscv_inst__DOT__id_reg_wen 
            = (1U & (IData)(((0x10U == (0x18U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) 
                             & ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                 ? ((vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                     >> 1U) & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                 : ((vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                     >> 1U) & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)))));
    } else {
        vlSelf->soc__DOT__riscv_inst__DOT__id_rd_addr_o 
            = (0x1fU & ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                         ? ((8U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                             ? 0U : ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                      ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                          ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                              ? (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                 >> 7U)
                                              : 0U)
                                          : 0U) : (
                                                   (2U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                     ? 
                                                    (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                     >> 7U)
                                                     : 0U)
                                                    : 0U)))
                         : 0U));
        vlSelf->soc__DOT__riscv_inst__DOT__id_reg_wen 
            = (1U & (IData)(((0x10U == (0x18U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) 
                             & ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                 ? ((vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                     >> 1U) & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                 : ((vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                     >> 1U) & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)))));
    }
    vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immB 
        = (((- (IData)((vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                        >> 0x1fU))) << 0xcU) | ((0x800U 
                                                 & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                         >> 7U)))));
    vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immI 
        = (((- (IData)((vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                        >> 0x1fU))) << 0xcU) | (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                >> 0x14U));
    if ((0x40U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
        if ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
            if ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                    = (0x1fU & 0U);
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                    = (0x1fU & 0U);
            } else if ((8U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                    = (0x1fU & 0U);
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                    = (0x1fU & 0U);
            } else if ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                    = (0x1fU & ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                 ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                     ? (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0xfU) : 0U)
                                 : 0U));
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                    = (0x1fU & 0U);
            } else if ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                    if ((0x4000U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                        vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                            = (0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0xfU));
                        vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                            = (0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0x14U));
                    } else if ((0x2000U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                        vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                            = (0x1fU & 0U);
                    } else {
                        vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                            = (0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0xfU));
                        vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                            = (0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0x14U));
                    }
                } else {
                    vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                        = (0x1fU & 0U);
                    vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                        = (0x1fU & 0U);
                }
            } else {
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                    = (0x1fU & 0U);
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                    = (0x1fU & 0U);
            }
        } else {
            vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                = (0x1fU & 0U);
            vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                = (0x1fU & 0U);
        }
    } else if ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
        if ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
            if ((8U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                    = (0x1fU & 0U);
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                    = (0x1fU & 0U);
            } else if ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                    = (0x1fU & 0U);
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                    = (0x1fU & 0U);
            } else if ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                    vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                        = (0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                    >> 0xfU));
                    vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                        = (0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                    >> 0x14U));
                } else {
                    vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                        = (0x1fU & 0U);
                    vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                        = (0x1fU & 0U);
                }
            } else {
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                    = (0x1fU & 0U);
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                    = (0x1fU & 0U);
            }
        } else {
            vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                = (0x1fU & 0U);
            vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                = (0x1fU & 0U);
        }
    } else {
        vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
            = (0x1fU & ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                         ? ((8U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                             ? 0U : ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                      ? 0U : ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                   >> 0xfU)
                                                   : 0U)
                                               : 0U)))
                         : 0U));
        vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
            = (0x1fU & 0U);
    }
    vlSelf->soc__DOT__riscv_inst__DOT__ex_jump_en_o 
        = (1U & (IData)(((0x60U == (0x70U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                         & ((8U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                             ? (IData)((7U == (7U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)))
                             : ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? ((vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                     >> 1U) & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 : ((vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                     >> 1U) & (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                               & ((0x4000U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    (~ (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned))
                                                     : (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    (~ (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed))
                                                     : (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed)))
                                                   : 
                                                  ((~ 
                                                    (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                     >> 0xdU)) 
                                                   & ((0x1000U 
                                                       & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      (~ (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i))
                                                       : (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i)))))))))));
    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o 
        = ((0x40U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
            ? ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                ? ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                    ? 0U : ((8U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                             ? ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                         ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i
                                         : 0U) : 0U)
                                 : 0U) : ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                           ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                               ? ((1U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i
                                                   : 0U)
                                               : 0U)
                                           : 0U))) : 0U)
            : ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                ? ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                    ? ((8U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                        ? 0U : ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                         ? vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o
                                         : 0U) : 0U)
                                 : ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                         ? ((0x4000U 
                                             & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                             ? ((0x2000U 
                                                 & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i
                                                  : vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((0x40000000U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i 
                                                    & (0xffffffffU 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o))) 
                                                   | ((- (IData)(
                                                                 (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o 
                                                                  >> 0x1fU))) 
                                                      & (~ 
                                                         (0xffffffffU 
                                                          >> 
                                                          (0x1fU 
                                                           & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o)))))
                                                   : vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i)
                                                  : vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i))
                                             : ((0x2000U 
                                                 & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned)
                                                  : (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i
                                                  : 
                                                 ((0x40000000U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o 
                                                   - vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o)
                                                   : vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i))))
                                         : 0U) : 0U)))
                    : 0U) : ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                              ? ((8U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                  ? 0U : ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                           ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                               ? ((1U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                               ? ((1U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                      ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i
                                                      : vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      ((vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i 
                                                        & (0xffffffffU 
                                                           >> 
                                                           (0x1fU 
                                                            & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o))) 
                                                       | ((- (IData)(
                                                                     (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o 
                                                                      >> 0x1fU))) 
                                                          & (~ 
                                                             (0xffffffffU 
                                                              >> 
                                                              (0x1fU 
                                                               & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o)))))
                                                       : vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i)
                                                      : vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                      ? (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned)
                                                      : (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed))
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                      ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i
                                                      : vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i)))
                                                   : 0U)
                                               : 0U)))
                              : 0U)));
    vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o 
        = ((0x40U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
            ? ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                ? ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                    ? 0U : ((8U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                             ? ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                 ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                     ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                         ? (((- (IData)(
                                                        (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                         >> 0x1fU))) 
                                             << 0x14U) 
                                            | ((0xff000U 
                                                & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o) 
                                               | ((0x800U 
                                                   & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                        >> 0x14U)))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                           ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immI
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immB
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                     ? 0U
                                                     : vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immB))
                                                   : 0U)
                                               : 0U))))
                : 0U) : ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                          ? 0U : ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                   ? ((8U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                       ? 0U : ((4U 
                                                & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                ? (
                                                   (2U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                     : 0U)
                                                    : 0U)
                                                : 0U))
                                   : 0U)));
    vlSelf->soc__DOT__riscv_inst__DOT__ctrl_hold_flag_o 
        = vlSelf->soc__DOT__riscv_inst__DOT__ex_jump_en_o;
    if (vlSelf->rst) {
        vlSelf->soc__DOT__riscv_inst__DOT__regs_rs1_rdata_o 
            = ((0U == (IData)(vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o))
                ? 0U : (((IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_reg_wen_o) 
                         & ((IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o) 
                            == (IData)(vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o)))
                         ? vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o
                         : vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                        [vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o]));
        vlSelf->soc__DOT__riscv_inst__DOT__regs_rs2_rdata_o 
            = ((0U == (IData)(vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o))
                ? 0U : (((IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_reg_wen_o) 
                         & ((IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o) 
                            == (IData)(vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o)))
                         ? vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o
                         : vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                        [vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o]));
    } else {
        vlSelf->soc__DOT__riscv_inst__DOT__regs_rs1_rdata_o = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_rs2_rdata_o = 0U;
    }
    if ((0x40U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
        if ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
            if ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
            } else if ((8U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                if ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                    if ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                        if ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                            vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o 
                                = vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o;
                            vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 4U;
                        } else {
                            vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                            vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
                        }
                    } else {
                        vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                        vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
                    }
                } else {
                    vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                    vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
                }
            } else if ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                if ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                    if ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                        vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o 
                            = vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o;
                        vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 4U;
                    } else {
                        vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                        vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
                    }
                } else {
                    vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                    vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
                }
            } else if ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                    if ((0x4000U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                        vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o 
                            = vlSelf->soc__DOT__riscv_inst__DOT__regs_rs1_rdata_o;
                        vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o 
                            = vlSelf->soc__DOT__riscv_inst__DOT__regs_rs2_rdata_o;
                    } else if ((0x2000U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                        vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                        vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
                    } else {
                        vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o 
                            = vlSelf->soc__DOT__riscv_inst__DOT__regs_rs1_rdata_o;
                        vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o 
                            = vlSelf->soc__DOT__riscv_inst__DOT__regs_rs2_rdata_o;
                    }
                } else {
                    vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                    vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
                }
            } else {
                vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
            }
        } else {
            vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
            vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
        }
    } else if ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
        if ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
            if ((8U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
            } else if ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o 
                    = ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                        ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                            ? (0xfffff000U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                            : 0U) : 0U);
            } else if ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                    vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o 
                        = vlSelf->soc__DOT__riscv_inst__DOT__regs_rs1_rdata_o;
                    vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o 
                        = ((0x2000U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                            ? vlSelf->soc__DOT__riscv_inst__DOT__regs_rs2_rdata_o
                            : ((0x1000U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                ? (0x1fU & vlSelf->soc__DOT__riscv_inst__DOT__regs_rs2_rdata_o)
                                : vlSelf->soc__DOT__riscv_inst__DOT__regs_rs2_rdata_o));
                } else {
                    vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                    vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
                }
            } else {
                vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
            }
        } else {
            vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
            vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
        }
    } else if ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
        if ((8U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
            vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
            vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
        } else if ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
            if ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                    vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o 
                        = vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o;
                    vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o 
                        = (0xfffff000U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o);
                } else {
                    vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                    vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
                }
            } else {
                vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
            }
        } else if ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
            if ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o 
                    = vlSelf->soc__DOT__riscv_inst__DOT__regs_rs1_rdata_o;
                vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o 
                    = ((0x2000U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                        ? vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immI
                        : ((0x1000U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                            ? (0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0x14U)) : vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immI));
            } else {
                vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
                vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
            }
        } else {
            vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
            vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
        }
    } else {
        vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0U;
    }
}

VL_ATTR_COLD void Vsoc___024root___eval_initial(Vsoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root___eval_initial\n"); );
    // Body
    Vsoc___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vsoc___024root___eval_settle(Vsoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root___eval_settle\n"); );
    // Body
    Vsoc___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vsoc___024root___final(Vsoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root___final\n"); );
}

VL_ATTR_COLD void Vsoc___024root___ctor_var_reset(Vsoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->soc__DOT__riscv_w_en = 0;
    vlSelf->soc__DOT__riscv_w_addr_o = 0;
    vlSelf->soc__DOT__riscv_w_data_o = 0;
    vlSelf->soc__DOT__riscv_r_en = 0;
    vlSelf->soc__DOT__riscv_r_addr_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__pc_reg_pc_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_rd_addr_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_reg_wen = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__regs_rs1_rdata_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__regs_rs2_rdata_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_addr_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_ex_reg_wen = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_ex_base_addr_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_ex_offset_addr_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__ex_reg_wen_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__ex_jump_en_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__ctrl_hold_flag_o = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immI = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immB = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[__Vi0] = 0;
    }
    vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed = 0;
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned = 0;
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->soc__DOT__rom_inst__DOT__rom_mem[__Vi0] = 0;
    }
    vlSelf->soc__DOT__ram_inst__DOT__rd_wr_equ_flag = 0;
    vlSelf->soc__DOT__ram_inst__DOT__w_data_reg = 0;
    vlSelf->soc__DOT__ram_inst__DOT__r_data_write = 0;
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->soc__DOT__ram_inst__DOT__ram_template_inst__DOT__memory[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
