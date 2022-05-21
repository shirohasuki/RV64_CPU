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
    VL_WRITEF("x27 register value is %10#\nx28 register value is %10#\nx29 register value is %10#\n--------------------------------------------------------\n",
              32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x1bU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x1cU],32,vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
              [0x1dU]);
    if ((1U & (~ (IData)(vlSelf->tb__DOT__rst)))) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i = 0x1fU;
    }
    if (vlSelf->tb__DOT__rst) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o 
            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen 
            = ((0x13U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))
                ? (1U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                >> 0xcU))) : (IData)(
                                                     (0x33U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))));
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o;
        if (((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o) 
             & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o)))) {
            __Vdlyvval__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0 
                = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o;
            __Vdlyvset__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0 = 1U;
            __Vdlyvdim0__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0 
                = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o;
        }
        if ((0x13U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))) {
            if ((1U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                              >> 0xcU)))) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o 
                    = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                >> 7U));
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
                    = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o 
                    = (((- (IData)((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                          >> 0x14U));
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o = 0U;
            }
        } else if ((0x33U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))) {
            if ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                              >> 0xcU)))) {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o 
                    = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                >> 7U));
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
                    = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o 
                    = ((IData)(vlSelf->tb__DOT__rst)
                        ? ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o))
                            ? 0U : (((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o) 
                                     & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o) 
                                        == (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o)))
                                     ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o
                                     : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                                    [vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o]))
                        : 0U);
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o 
                    = (0x1fU & 0U);
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o 
                = (0x1fU & 0U);
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o = 0U;
        }
        __Vdly__tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
            = ((IData)(4U) + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o);
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o = 0x13U;
        __Vdlyvset__tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v1 = 1U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o = 0U;
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
    if (vlSelf->tb__DOT__rst) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o 
            = vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
            = vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o;
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o = 0x13U;
    }
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
        = __Vdly__tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o;
    vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o = vlSelf->tb__DOT__soc_inst__DOT__rom_inst__DOT__rom_mem
        [(0xfffU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
                    >> 2U))];
    if ((0x13U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
            = (0x1fU & ((1U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                      >> 0xcU))) ? 
                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                         >> 0xfU) : 0U));
    } else if ((0x33U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))) {
        if ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                          >> 0xcU)))) {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o 
                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                            >> 0x14U));
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                            >> 0xfU));
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
                = (0x1fU & 0U);
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o 
            = (0x1fU & 0U);
    }
    if ((0x13U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o))) {
        if ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o 
                          >> 0xcU)))) {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o = 1U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                = (0x1fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o));
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o 
                = (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
                   + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o);
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                = (0x1fU & 0U);
            vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o 
            = (IData)((0x33U == (0x707fU & vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o)));
        if ((0x33U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o))) {
            if ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o 
                              >> 0xcU)))) {
                if ((0U == (vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o 
                            >> 0x19U))) {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                        = (0x1fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o));
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o 
                        = (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
                           + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o);
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o 
                        = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o 
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
    }
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o 
        = ((IData)(vlSelf->tb__DOT__rst) ? ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o))
                                             ? 0U : 
                                            (((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o) 
                                              & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o) 
                                                 == (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o)))
                                              ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o
                                              : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                                             [vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o]))
            : 0U);
}

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->tb__DOT__clk) & (~ (IData)(vlSelf->__Vclklast__TOP__tb__DOT__clk)))) {
        Vtb___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__tb__DOT__clk = vlSelf->tb__DOT__clk;
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
