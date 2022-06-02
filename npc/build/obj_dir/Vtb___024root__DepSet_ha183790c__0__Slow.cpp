// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"

#include "Vtb___024root.h"

extern const VlWide<9>/*287:0*/ Vtb__ConstPool__CONST_ha92b97d7_0;

VL_ATTR_COLD void Vtb___024root___initial__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___initial__TOP__0\n"); );
    // Body
    if ((1U == vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
         [0x1aU])) {
        if (VL_LIKELY((1U == vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                       [0x1bU]))) {
            VL_WRITEF("############################\n########  pass  !!!#########\n############################\n");
        } else {
            VL_WRITEF("############################\n########  fail  !!!#########\n############################\n");
            vlSelf->tb__DOT__r = 0x20U;
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
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(9, Vtb__ConstPool__CONST_ha92b97d7_0)
                 ,  &(vlSelf->tb__DOT__soc_inst__DOT__rom_inst__DOT__rom_mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb___024root___settle__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___settle__TOP__0\n"); );
    // Body
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
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
           == vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o);
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o 
            = (1U & (IData)((0x2fU == (0x3fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o))));
        if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
            if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                if ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                    if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                        if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o;
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o 
                                = ((IData)(4U) + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o);
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
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
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                    if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o;
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o;
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                }
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                    if ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                      >> 0xcU)))) {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o;
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o 
                            = ((0U == (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                       >> 0x19U)) ? 
                               (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
                                + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)
                                : (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o 
                                   - vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o));
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o 
            = (1U & (IData)((0x13U == (0x701fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o))));
        if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
            if ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                    if ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                      >> 0xcU)))) {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o;
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o 
                            = (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
                               + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o);
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
        }
    }
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
                                 : (IData)((3U == (0x7003U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)))))));
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
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o 
        = (1U & (IData)(((0x60U == (0x70U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                         & ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                             ? (IData)((7U == (7U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)))
                             : (IData)(((3U == (7U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                                        & ((1U == (7U 
                                                   & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                      >> 0xcU)))
                                            ? (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i))
                                            : (IData)(
                                                      ((0U 
                                                        == 
                                                        (0x7000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                                                       & (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i))))))))));
    if (vlSelf->rst) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o 
            = ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o))
                ? 0U : (((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o) 
                         & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o) 
                            == (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o)))
                         ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o
                         : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                        [vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o]));
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o 
            = ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o))
                ? 0U : (((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o) 
                         & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o) 
                            == (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o)))
                         ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o
                         : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                        [vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o]));
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o = 0U;
    }
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_hold_flag_o 
        = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o;
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
        if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
            if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
            } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
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
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                    if (((1U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                       >> 0xcU))) | 
                         (0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                       >> 0xcU))))) {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o;
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
        }
    } else if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
        if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
            if ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o 
                    = ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                        ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                            ? (0xfffff000U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                            : 0U) : 0U);
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                    if ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                      >> 0xcU)))) {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o;
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
        }
    } else if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
        if ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
        } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
        } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
            if ((1U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) {
                if ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                  >> 0xcU)))) {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o 
                        = (((- (IData)((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0x14U));
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o;
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0U;
    }
}

VL_ATTR_COLD void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtb___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    // Body
    Vtb___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->tb__DOT__r = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_hold_flag_o = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[__Vi0] = 0;
    }
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__immB = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i = 0;
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->tb__DOT__soc_inst__DOT__rom_inst__DOT__rom_mem[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
