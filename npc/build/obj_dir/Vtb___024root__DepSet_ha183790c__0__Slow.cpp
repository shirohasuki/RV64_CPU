// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb___024root.h"

extern const VlWide<13>/*415:0*/ Vtb__ConstPool__CONST_h6b745f0d_0;

VL_ATTR_COLD void Vtb___024root___initial__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___initial__TOP__0\n"); );
    // Body
    VL_READMEM_N(true, 64, 1048576, 0, VL_CVT_PACK_STR_NW(13, Vtb__ConstPool__CONST_h6b745f0d_0)
                 ,  &(vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb___024root___settle__TOP__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___settle__TOP__1\n"); );
    // Body
    if ((1U & (IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o 
                       >> 2U)))) {
        if ((1U & (IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o 
                           >> 2U)))) {
            vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o 
                = (QData)((IData)((vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                   [(0xfffffU & (IData)(
                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o 
                                                         >> 3U)))] 
                                   >> 0x20U)));
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o 
            = (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                              [(0xfffffU & (IData)(
                                                   (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o 
                                                    >> 3U)))]));
    }
    vlSelf->tb__DOT__soc_inst__DOT__ram_axi_rdata_o 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__ren_o)
            ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr)
                ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr)
                    ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr)
                        ? ((vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                            [(0xfffffU & ((IData)(1U) 
                                          + (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                             >> 3U)))] 
                            << 8U) | (QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                                 [
                                                                 (0xfffffU 
                                                                  & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                                     >> 3U))] 
                                                                 >> 0x38U))))))
                        : ((vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                            [(0xfffffU & ((IData)(1U) 
                                          + (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                             >> 3U)))] 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                                    [
                                                                    (0xfffffU 
                                                                     & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                                        >> 3U))] 
                                                                    >> 0x30U)))))))
                    : ((1U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr)
                        ? ((vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                            [(0xfffffU & ((IData)(1U) 
                                          + (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                             >> 3U)))] 
                            << 0x18U) | (QData)((IData)(
                                                        (0xffffffU 
                                                         & (IData)(
                                                                   (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                                    [
                                                                    (0xfffffU 
                                                                     & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                                        >> 3U))] 
                                                                    >> 0x28U))))))
                        : (((QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                            [(0xfffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                  >> 3U)))])) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                         [
                                                         (0xfffffU 
                                                          & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                             >> 3U))] 
                                                         >> 0x20U))))))
                : ((2U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr)
                    ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr)
                        ? (((QData)((IData)((0xffffffU 
                                             & (IData)(
                                                       vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                       [
                                                       (0xfffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                            >> 3U)))])))) 
                            << 0x28U) | (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                         [(0xfffffU 
                                           & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                              >> 3U))] 
                                         >> 0x18U))
                        : (((QData)((IData)((0xffffU 
                                             & (IData)(
                                                       vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                       [
                                                       (0xfffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                            >> 3U)))])))) 
                            << 0x30U) | (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                         [(0xfffffU 
                                           & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                              >> 3U))] 
                                         >> 0x10U)))
                    : ((1U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr)
                        ? (((QData)((IData)((0xffU 
                                             & (IData)(
                                                       vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                       [
                                                       (0xfffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                            >> 3U)))])))) 
                            << 0x38U) | (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                         [(0xfffffU 
                                           & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                              >> 3U))] 
                                         >> 8U)) : 
                       vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                       [(0xfffffU & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                     >> 3U))]))) : 0ULL);
    if (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata 
            = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface)
                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__device_rdata
                : ((IData)(vlSelf->rst) ? ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready)
                                            ? vlSelf->tb__DOT__soc_inst__DOT__ram_axi_rdata_o
                                            : 0ULL)
                    : 0ULL));
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o 
            = ((3U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o))
                ? ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                    ? ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                        ? ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                            ? 0ULL : (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata)))
                        : ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                            ? (QData)((IData)((0xffffU 
                                               & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata))))
                            : (QData)((IData)((0xffU 
                                               & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata))))))
                    : ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                        ? ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                            ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata
                            : (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata))))
                        : ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                            ? (((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata 
                                                               >> 0xfU)))))) 
                                << 0x10U) | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata)))))
                            : (((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata 
                                                               >> 7U)))))) 
                                << 8U) | (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata))))))))
                : 0ULL);
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_wdata_o;
    }
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

VL_ATTR_COLD void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtb___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtb___024root___settle__TOP__0(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    // Body
    Vtb___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtb___024root___settle__TOP__1(vlSelf);
}

VL_ATTR_COLD void Vtb___024root___final(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___final\n"); );
}

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_core_stall_flag_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_core_flush_flag_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__ram_axi_rdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__ram_axi_bvalid_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_offset_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_id_rdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_reg_wen = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_base_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_offset_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_wdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_waddr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_wen_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_wdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_waddr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_wen_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_jump_en_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isload_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isstore_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_flush_en_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_stall_en_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_flush_en_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_stall_en_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_flush_en_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_stall_en_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_inst_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_wdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_stall_flag_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_flush_flag_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isload_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isstore_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_ren_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_wen_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_inst_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immU = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immB = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[__Vi0] = 0;
    }
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mstatus = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mtvec = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mepc = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mcause = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[__Vi0] = 0;
    }
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs1_id_ex_hit = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs2_id_ex_hit = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_add = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_signed = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_u_tmp = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_u_tmp = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_s_tmp = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_data_hit = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_inst = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__store_inst = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__func7 = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__device_rdata_tmp = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__device_rdata = 0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__ren_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wen_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__busy_end = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raready = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waready = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdready = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata = 0;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask = 0;
    for (int __Vi0=0; __Vi0<1048576; ++__Vi0) {
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vi0] = 0;
    }
    vlSelf->__Vtask_pmem_read__4__rdata = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
