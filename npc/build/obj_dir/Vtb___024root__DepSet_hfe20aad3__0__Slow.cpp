// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb__Syms.h"
#include "Vtb___024root.h"

void Vtb___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void Vtb___024unit____Vdpiimwrap_get_gprs__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &regs);
extern const VlUnpacked<QData/*63:0*/, 512> Vtb__ConstPool__TABLE_h5ca10654_0;
void Vtb___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, QData/*63:0*/ mask);
void Vtb___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
extern const VlUnpacked<CData/*0:0*/, 64> Vtb__ConstPool__TABLE_ha41e00fd_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb__ConstPool__TABLE_h257ad544_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb__ConstPool__TABLE_hb68ce13d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb__ConstPool__TABLE_hd883f979_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb__ConstPool__TABLE_hc9e07f1f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb__ConstPool__TABLE_h011d071a_0;

VL_ATTR_COLD void Vtb___024root___settle__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___settle__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    SData/*8:0*/ __Vtableidx3;
    // Body
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if ((0x100073U == vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        Vtb___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o = 0U;
                } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o = 0U;
                } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((1U & (~ (((2U == (7U & 
                                               (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0xcU))) 
                                       | (1U == (7U 
                                                 & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                    >> 0xcU)))) 
                                      | (3U == (7U 
                                                & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                   >> 0xcU))))))) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o = 0U;
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o 
                    = (0x1fU & ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                     ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                         ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                             ? (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 7U)
                                             : 0U) : 0U)
                                     : 0U) : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                               ? ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                    >> 7U)
                                                    : 0U)
                                                   : 0U)
                                               : 0U)));
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o = 0U;
        }
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen 
            = (1U & ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                      >> 5U) & ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? (IData)(((3U == 
                                             (0xfU 
                                              & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) 
                                            & (((2U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                     >> 0xcU))) 
                                                | (1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                       >> 0xcU)))) 
                                               | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                      >> 0xcU))))))
                                 : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                     ? (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)))
                                     : (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)))))));
    } else if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o 
                    = ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                        ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                     ? (0x1fU & ((0x4000U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                  ? 
                                                 (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                  >> 7U)
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                   >> 7U))))
                                     : 0U) : 0U));
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen 
                    = (1U & (IData)(((3U == (7U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) 
                                     & (0x2000U != 
                                        (0x6000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)))));
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o 
                    = ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                        ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                            ? (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 7U)) : 0U)
                        : 0U);
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen 
                    = (IData)((3U == (3U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)));
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen = 1U;
                        } else if ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            if ((0U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o 
                                    = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 7U));
                            }
                            if ((1U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o 
                                    = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 7U));
                            }
                            if ((0U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen = 1U;
                            }
                            if ((1U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen = 1U;
                            }
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen = 1U;
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 7U));
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen = 1U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen = 0U;
        }
    } else if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o 
                = (0x1fU & ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                             ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                      ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                          ? ((0U == 
                                              (7U & 
                                               (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0xcU)))
                                              ? (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                 >> 7U)
                                              : (((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                       >> 0xcU))) 
                                                  | (5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                         >> 0xcU))))
                                                  ? 
                                                 (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                  >> 7U)
                                                  : 0U))
                                          : 0U) : 0U)));
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen 
                = (1U & (IData)(((3U == (7U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) 
                                 & ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                  >> 0xcU))) 
                                    | ((1U == (7U & 
                                               (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0xcU))) 
                                       | (5U == (7U 
                                                 & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                    >> 0xcU))))))));
        } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o 
                = (0x1fU & ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                             ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                    >> 7U) : 0U) : 0U));
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen 
                = (1U & ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                          >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o));
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o 
                = (0x1fU & ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                             ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                    >> 7U) : 0U) : 0U));
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen 
                = (1U & ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                          >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o));
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o 
            = (0x1fU & ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                         ? 0U : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                  ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                           ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                               ? ((0x4000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                     ? 0U
                                                     : 
                                                    (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                     >> 7U))
                                                    : 
                                                   (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                    >> 7U))
                                                   : 
                                                  (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                   >> 7U))
                                               : 0U)
                                           : 0U))));
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen 
            = (1U & (IData)(((3U == (0xfU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) 
                             & (0x7000U != (0x7000U 
                                            & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)))));
    }
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_wen_o 
        = (IData)(((0x73U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                   & ((2U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                    >> 0xcU))) | (1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                      >> 0xcU))))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_base_addr_o 
           + vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_offset_addr_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_waddr_o 
        = ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
            ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? 0U : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                          ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                              ? ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                      >> 0xcU)))
                                                  ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_waddr_o)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                       >> 0xcU)))
                                                   ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_waddr_o)
                                                   : 0U))
                                              : 0U)
                                          : 0U))) : 0U)
                : 0U) : 0U);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_ren_o 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o) 
           & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_wen_o 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o) 
           & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[0U] 
        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mstatus;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[1U] 
        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mtvec;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[2U] 
        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mepc;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[3U] 
        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mcause;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immB 
        = (((- (QData)((IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)(((0x800U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                         << 4U)) | 
                              ((0x7e0U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 0x14U)) 
                               | (0x1eU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                           >> 7U)))))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI 
        = (((- (QData)((IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                              >> 0x14U))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immU 
        = (((QData)((IData)((- (IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)((0xfffff000U 
                                         & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL 
        = (((- (QData)((IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                              >> 0x14U))));
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & (~ (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                                if ((((2U == (7U & 
                                              (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                               >> 0xcU))) 
                                      | (1U == (7U 
                                                & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                   >> 0xcU)))) 
                                     | (3U == (7U & 
                                               (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0xcU))))) {
                                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o 
                                        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                           >> 0x14U);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__busy_end 
        = ((IData)(vlSelf->rst) & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready) 
                                   | (IData)(vlSelf->tb__DOT__soc_inst__DOT__ram_axi_bvalid_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           == vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    if (vlSelf->rst) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o] 
            = (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)))
                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                : 0ULL);
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[1U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[2U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[3U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[4U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[5U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[6U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[7U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[8U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[9U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0xaU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0xbU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0xcU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0xdU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0xeU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0xfU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x10U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x11U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x12U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x13U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x14U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x15U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x16U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x17U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x18U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x19U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x1aU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x1bU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x1cU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x1dU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x1eU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x1fU] = 0ULL;
    }
    Vtb___024unit____Vdpiimwrap_get_gprs__Vdpioc2_TOP____024unit(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isstore_o 
        = (IData)((0x23U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           - vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           * vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           ^ vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i 
        = VL_DIVS_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           << (0x3fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           >> (0x3fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, 
                         (0x3fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp 
        = VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp 
        = VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           | vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isload_o 
        = (1U & (IData)(((3U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                         & (0x7000U != (0x7000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           < vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed 
        = VL_LTS_IQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                    = (0x1fU & ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? 0U : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                          ? 0U : ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                           >> 0xcU))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                             >> 0xcU)))) 
                                                     | (3U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                            >> 0xcU))))
                                                     ? 
                                                    (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                     >> 0xfU)
                                                     : 0U)
                                                    : 0U)
                                                   : 0U))));
            } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                    = (0x1fU & 0U);
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                    = (0x1fU & ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                     ? (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0xfU) : 0U)
                                 : 0U));
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x14U));
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0xfU));
                    } else if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                            = (0x1fU & 0U);
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x14U));
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0xfU));
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                        = (0x1fU & 0U);
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                    = (0x1fU & 0U);
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
        }
    } else if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
                } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0xfU));
                        } else if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                                = (0x1fU & 0U);
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                                = (0x1fU & 0U);
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0xfU));
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
                }
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0xfU));
                        } else if ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            if ((0U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                                    = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0x14U));
                            }
                            if ((1U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                                    = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0x14U));
                            }
                            if ((0U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                                    = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0xfU));
                            }
                            if ((1U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                                    = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0xfU));
                            }
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0xfU));
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x14U));
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0xfU));
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
            }
        } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
        } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
        } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                        = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                    >> 0x14U));
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                        = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                    >> 0xfU));
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
            = (0x1fU & ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                         ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                             ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                          ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                              ? ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                      >> 0xcU)))
                                                  ? 
                                                 (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                  >> 0xfU)
                                                  : 
                                                 (((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                        >> 0xcU))) 
                                                   | (5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                          >> 0xcU))))
                                                   ? 
                                                  (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                   >> 0xfU)
                                                   : 0U))
                                              : 0U)
                                          : 0U)) : 
                            ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                              ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                       ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                           ? (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                              >> 0xfU)
                                           : 0U) : 0U)))
                         : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                             ? 0U : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                      ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                      >> 0xfU))
                                                     : 
                                                    (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                     >> 0xfU))
                                                    : 
                                                   (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                    >> 0xfU))
                                                   : 0U)
                                               : 0U)))));
    }
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_u_tmp 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o) 
           << (0x1fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_u_tmp 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o) 
           >> (0x1fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_s_tmp 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o), 
                         (0x1fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           + vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o 
            = (1U & ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                      >> 5U) & ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? (IData)(((3U == 
                                             (0xfU 
                                              & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                                            & ((2U 
                                                == 
                                                (7U 
                                                 & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                    >> 0xcU))) 
                                               | (1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                      >> 0xcU))))))
                                 : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                     ? (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))
                                     : (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))))));
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o 
            = ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? 0U : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                          ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                              ? ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                      >> 0xcU)))
                                                  ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                       >> 0xcU)))
                                                   ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                                   : 0U))
                                              : 0U)
                                          : 0U))) : 
                   ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                     ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                         ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                             ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                 : 0U) : 0U) : 0U) : 
                    ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                      ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                          ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                              ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                              : 0U) : 0U) : 0U))) : 0U);
    } else if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o 
            = (1U & ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                      >> 4U) & ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? (IData)(((3U == 
                                             (7U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                                            & (0x2000U 
                                               != (0x6000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o))))
                                 : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                     ? ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                         >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                     : ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                         >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))));
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o 
            = ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                     ? ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                         ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                         : ((0x2000U 
                                             & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                             ? 0U : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)))
                                     : 0U) : 0U)) : 
                   ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                     ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                         ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                             ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                             : 0U) : 0U) : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                             ? ((1U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                 ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                                 : 0U)
                                             : 0U)))
                : 0U);
    } else if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o 
                = (1U & (IData)(((3U == (7U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                                 & ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                  >> 0xcU))) 
                                    | ((1U == (7U & 
                                               (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                >> 0xcU))) 
                                       | (5U == (7U 
                                                 & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                    >> 0xcU))))))));
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o 
                = ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                             ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                  >> 0xcU)))
                                     ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                     : ((1U == (7U 
                                                & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                   >> 0xcU)))
                                         ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                         : ((5U == 
                                             (7U & 
                                              (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                               >> 0xcU)))
                                             ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                             : 0U)))
                                 : 0U) : 0U));
        } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o 
                = (1U & ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                          >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o));
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o 
                = ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                        : 0U) : 0U);
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o 
                = (1U & ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                          >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o));
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o 
                = ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                        : 0U) : 0U);
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o 
            = (1U & (IData)(((3U == (0xfU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                             & (0x7000U != (0x7000U 
                                            & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))));
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o 
            = ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? 0U : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                         ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                  ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                      ? ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                          ? ((0x2000U 
                                              & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                              ? ((0x1000U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                  ? 0U
                                                  : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o))
                                              : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o))
                                          : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o))
                                      : 0U) : 0U)));
    }
    __Vtableidx3 = (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o) 
                     << 1U) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__wmask_o 
        = Vtb__ConstPool__TABLE_h5ca10654_0[__Vtableidx3];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface 
        = ((0xa0000000ULL <= vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o) 
           | (0xa0000000ULL <= vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_offset_addr_o 
        = ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
            ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                    ? 0ULL : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                               ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                   ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                       ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                           ? (((- (QData)((IData)(
                                                                  (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                   >> 0x1fU)))) 
                                               << 0x14U) 
                                              | (QData)((IData)(
                                                                ((0xff000U 
                                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                        >> 9U)) 
                                                                    | (0x7feU 
                                                                       & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                          >> 0x14U)))))))
                                           : 0ULL) : 0ULL)
                                   : 0ULL) : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                               ? ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI
                                                    : 0ULL)
                                                   : 0ULL)
                                               : ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immB
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                      ? 0ULL
                                                      : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immB))
                                                    : 0ULL)
                                                   : 0ULL))))
                : 0ULL) : ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                            ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                ? 0ULL : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                           ? 0ULL : 
                                          ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                            ? 0ULL : 
                                           ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                             ? ((1U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                 ? 
                                                ((0x4000U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                  ? 0ULL
                                                  : 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                           >> 7U)))))))
                                                 : 0ULL)
                                             : 0ULL))))
                            : ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                    ? 0ULL : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                               ? ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immU
                                                    : 0ULL)
                                                   : 0ULL)
                                               : 0ULL))
                                : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                    ? 0ULL : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                               ? 0ULL
                                               : ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                       ? 0ULL
                                                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL)
                                                      : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL)
                                                     : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL)
                                                    : 0ULL)
                                                   : 0ULL))))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_id_rdata_o 
        = ((IData)(vlSelf->rst) ? ((0x300U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o))
                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mstatus
                                    : ((0x305U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o))
                                        ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mtvec
                                        : ((0x341U 
                                            == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o))
                                            ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mepc
                                            : ((0x342U 
                                                == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o))
                                                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mcause
                                                : 0ULL))))
            : 0ULL);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__store_inst 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isstore_o) 
           | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isstore_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_wdata_o 
        = ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
            ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? 0ULL : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                   ? 0ULL : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                              ? ((1U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                       >> 0xcU)))
                                                   ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                        >> 0xcU)))
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o
                                                    : 0ULL))
                                                  : 0ULL)
                                              : 0ULL)))
                    : 0ULL) : 0ULL) : 0ULL);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_inst 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isload_o) 
           | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isload_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_jump_en_o 
        = (1U & (IData)(((0x60U == (0x70U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                         & ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                             ? (IData)((7U == (7U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))
                             : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                     >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 : ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                     >> 1U) & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                               & ((0x4000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned))
                                                     : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed))
                                                     : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed)))
                                                   : 
                                                  ((~ 
                                                    (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                     >> 0xdU)) 
                                                   & ((0x1000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i))
                                                       : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i)))))))))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned 
        = (((QData)((IData)((- (IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_u_tmp 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_u_tmp)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned 
        = (((QData)((IData)((- (IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_u_tmp 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_u_tmp)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_signed 
        = (((QData)((IData)((- (IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_s_tmp 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_s_tmp)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_add 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs2_id_ex_hit 
        = ((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
             == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o)) 
            & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o)) 
           & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs1_id_ex_hit 
        = ((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
             == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o)) 
            & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o)) 
           & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)));
    if (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface) 
         & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o))) {
        Vtb___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__wmask_o);
    }
    if (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface) 
         & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o))) {
        Vtb___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o, vlSelf->__Vtask_pmem_read__4__rdata);
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__device_rdata 
            = vlSelf->__Vtask_pmem_read__4__rdata;
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__device_rdata = 0ULL;
    }
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o 
            = ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? 0ULL : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                   ? 0ULL : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                              ? ((1U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                       >> 0xcU)))
                                                   ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                        >> 0xcU)))
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o
                                                    : 0ULL))
                                                  : 0ULL)
                                              : 0ULL)))
                    : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                            ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i
                                    : 0ULL) : 0ULL)
                            : 0ULL) : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                        ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                            ? ((1U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i
                                                : 0ULL)
                                            : 0ULL)
                                        : 0ULL))) : 0ULL);
    } else if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o 
            = ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? 0ULL : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                   ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                       ? ((0x4000U 
                                           & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                           ? ((0x2000U 
                                               & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                               ? ((0x1000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp))))
                                               : ((0x1000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_signed
                                                    : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned)
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i)))))
                                           : ((0x2000U 
                                               & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                               ? 0ULL
                                               : ((0x1000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                     >> 0x19U))
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_add
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                      >> 0x19U))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i))))))))
                                       : 0ULL) : 0ULL))
                    : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                            ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o
                                : 0ULL) : 0ULL) : (
                                                   (2U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                          >> 0x19U))
                                                         ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i
                                                         : 
                                                        VL_MODDIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o))
                                                        : 
                                                       ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                         >> 0x1fU)
                                                         ? 
                                                        VL_MODDIVS_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)
                                                         : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? 
                                                       ((0x10U 
                                                         == 
                                                         (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                          >> 0x19U))
                                                         ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed
                                                         : 
                                                        ((0U 
                                                          == 
                                                          (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                           >> 0x19U))
                                                          ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned
                                                          : 
                                                         VL_DIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)))
                                                        : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned))
                                                        : (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed)))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                          >> 0x19U))
                                                         ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                           >> 0x19U))
                                                          ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i
                                                          : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i)))))
                                                     : 0ULL)
                                                    : 0ULL)))
                : 0ULL);
    } else if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o 
            = ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? 0ULL : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                               ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                   ? ((0U == (7U & 
                                              (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                               >> 0xcU)))
                                       ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_add
                                       : ((1U == (7U 
                                                  & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                     >> 0xcU)))
                                           ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned
                                           : ((5U == 
                                               (7U 
                                                & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                   >> 0xcU)))
                                               ? ((0x40000000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_signed
                                                   : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned)
                                               : 0ULL)))
                                   : 0ULL) : 0ULL))
                : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                            ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i
                            : 0ULL) : 0ULL) : ((2U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                ? (
                                                   (1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i
                                                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      ((0x40000000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed
                                                        : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned)
                                                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned))
                                                       : (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed)))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned
                                                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i)))
                                                    : 0ULL)
                                                : 0ULL)));
    } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o = 0ULL;
    } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o = 0ULL;
    } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
            if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
                if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
                    if ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o = 0ULL;
                    }
                }
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o = 0ULL;
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o = 0ULL;
    }
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_data_hit 
        = (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs1_id_ex_hit) 
            | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs2_id_ex_hit)) 
           & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isload_o));
    __Vtableidx1 = (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_data_hit) 
                     << 5U) | (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__store_inst) 
                                << 4U) | (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_inst) 
                                           << 3U) | 
                                          (((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__busy_end) 
                                            << 2U) 
                                           | (((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy) 
                                               << 1U) 
                                              | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_jump_en_o))))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_flush_en_o 
        = Vtb__ConstPool__TABLE_ha41e00fd_0[__Vtableidx1];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_flush_en_o 
        = Vtb__ConstPool__TABLE_h257ad544_0[__Vtableidx1];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o 
        = Vtb__ConstPool__TABLE_hb68ce13d_0[__Vtableidx1];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o 
        = Vtb__ConstPool__TABLE_ha41e00fd_0[__Vtableidx1];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_flush_en_o 
        = Vtb__ConstPool__TABLE_ha41e00fd_0[__Vtableidx1];
    __Vtableidx2 = (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_data_hit) 
                     << 6U) | (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isstore_o) 
                                << 5U) | (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__store_inst) 
                                           << 4U) | 
                                          (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isload_o) 
                                            << 3U) 
                                           | (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_inst) 
                                               << 2U) 
                                              | (((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__busy_end) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy)))))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_stall_en_o 
        = Vtb__ConstPool__TABLE_hd883f979_0[__Vtableidx2];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_stall_en_o 
        = Vtb__ConstPool__TABLE_hd883f979_0[__Vtableidx2];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o 
        = Vtb__ConstPool__TABLE_hc9e07f1f_0[__Vtableidx2];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o 
        = Vtb__ConstPool__TABLE_h011d071a_0[__Vtableidx2];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_stall_en_o 
        = Vtb__ConstPool__TABLE_hc9e07f1f_0[__Vtableidx2];
}
