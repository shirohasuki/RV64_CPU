// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb___024root.h"

VL_INLINE_OPT void Vtb___024root___combo__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___combo__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i = 0x20U;
    }
}

VL_INLINE_OPT void Vtb___024root___multiclk__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___multiclk__TOP__0\n"); );
    // Body
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o)
            ? ((3U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o))
                ? ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                    ? ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                        ? ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                            ? 0ULL : (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata_o)))
                        : ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                            ? (QData)((IData)((0xffffU 
                                               & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata_o))))
                            : (QData)((IData)((0xffU 
                                               & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata_o))))))
                    : ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                        ? ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                            ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata_o
                            : (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata_o 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata_o))))
                        : ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                            ? (((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata_o 
                                                               >> 0xfU)))))) 
                                << 0x10U) | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata_o)))))
                            : (((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata_o 
                                                               >> 7U)))))) 
                                << 8U) | (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata_o))))))))
                : 0ULL) : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_wdata_o);
}

VL_INLINE_OPT void Vtb___024root___combo__TOP__2(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs2_id_ex_hit)
            ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o
            : (((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
                  == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)) 
                 & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)) 
                & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))
                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o
                : (((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
                      == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)) 
                     & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o)) 
                    & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))
                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                    : ((IData)(vlSelf->rst) ? ((0U 
                                                == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o))
                                                ? 0ULL
                                                : (
                                                   ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                                                    & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o) 
                                                       == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                                                    : 
                                                   vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs
                                                   [vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o]))
                        : 0ULL))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs1_id_ex_hit)
            ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o
            : (((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
                  == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)) 
                 & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)) 
                & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))
                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o
                : (((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
                      == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)) 
                     & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o)) 
                    & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))
                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                    : ((IData)(vlSelf->rst) ? ((0U 
                                                == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o))
                                                ? 0ULL
                                                : (
                                                   ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                                                    & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o) 
                                                       == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                                                    : 
                                                   vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs
                                                   [vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o]))
                        : 0ULL))));
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
                if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((((2U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0xcU))) 
                              | (1U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                              >> 0xcU)))) 
                             | (3U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                             >> 0xcU))))) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_id_rdata_o;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                }
            } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 4ULL;
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                }
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 4ULL;
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                }
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                    } else if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
        }
    } else if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
            if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                        } else if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                }
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                    = ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                        ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                            ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immU
                            : 0ULL) : 0ULL);
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                        } else if ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            if ((0U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                            }
                            if ((1U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                            }
                            if ((0U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                                    = (QData)((IData)(
                                                      (0x3fU 
                                                       & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o))));
                            }
                            if ((1U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                            }
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                            = ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o
                                : ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                    ? (QData)((IData)(
                                                      (0x3fU 
                                                       & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o))))
                                    : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o));
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
            }
        } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
        } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
        } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
        }
    } else if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
        if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                      >> 0xcU)))) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI;
                    } else if (((1U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                              >> 0xcU))) 
                                | (5U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0xcU))))) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                            = (QData)((IData)((0x3fU 
                                               & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                  >> 0x14U))));
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
            }
        } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immU;
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
            }
        } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                    = ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                        ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI
                        : ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                            ? (QData)((IData)((0x3fU 
                                               & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                  >> 0x14U))))
                            : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI));
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
        }
    } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
    } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
    } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o 
                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o 
                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o 
                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0ULL;
    }
}

void Vtb___024root___sequent__TOP__0(Vtb___024root* vlSelf);
void Vtb___024root___sequent__TOP__1(Vtb___024root* vlSelf);
void Vtb___024root___combo__TOP__1(Vtb___024root* vlSelf);

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    // Body
    Vtb___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtb___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtb___024root___sequent__TOP__1(vlSelf);
    }
    Vtb___024root___combo__TOP__1(vlSelf);
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vtb___024root___multiclk__TOP__0(vlSelf);
    }
    Vtb___024root___combo__TOP__2(vlSelf);
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
