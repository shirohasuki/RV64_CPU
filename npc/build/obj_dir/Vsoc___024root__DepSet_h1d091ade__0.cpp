// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc.h for the primary calling header

#include "verilated.h"

#include "Vsoc___024root.h"

VL_INLINE_OPT void Vsoc___024root___sequent__TOP__0(Vsoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__soc__DOT__top_inst__DOT__regs_inst__DOT__regs__v0;
    IData/*31:0*/ __Vdlyvval__soc__DOT__top_inst__DOT__regs_inst__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__soc__DOT__top_inst__DOT__regs_inst__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__soc__DOT__top_inst__DOT__regs_inst__DOT__regs__v1;
    // Body
    __Vdlyvset__soc__DOT__top_inst__DOT__regs_inst__DOT__regs__v0 = 0U;
    __Vdlyvset__soc__DOT__top_inst__DOT__regs_inst__DOT__regs__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i = 0x1fU;
    }
    if (vlSelf->rst) {
        vlSelf->soc__DOT__top_inst__DOT__id_ex_reg_wen 
            = vlSelf->soc__DOT__top_inst__DOT__id_ex_reg_wen;
        vlSelf->soc__DOT__top_inst__DOT__id_ex_rd_addr_o 
            = vlSelf->soc__DOT__top_inst__DOT__id_ex_rd_addr_o;
        vlSelf->soc__DOT__top_inst__DOT__id_ex_inst_addr_o 
            = vlSelf->soc__DOT__top_inst__DOT__id_ex_inst_addr_o;
        vlSelf->soc__DOT__top_inst__DOT__id_ex_op2_o 
            = vlSelf->soc__DOT__top_inst__DOT__id_ex_op2_o;
        vlSelf->soc__DOT__top_inst__DOT__id_ex_op1_o 
            = vlSelf->soc__DOT__top_inst__DOT__id_ex_op1_o;
        vlSelf->soc__DOT__top_inst__DOT__if_id_inst_addr_o 
            = vlSelf->soc__DOT__top_inst__DOT__pc_reg_pc_o;
        vlSelf->soc__DOT__top_inst__DOT__id_ex_inst_o 
            = vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o;
        if (((IData)(vlSelf->soc__DOT__top_inst__DOT__ex_reg_wen_o) 
             & (0U != (IData)(vlSelf->soc__DOT__top_inst__DOT__ex_rd_addr_o)))) {
            __Vdlyvval__soc__DOT__top_inst__DOT__regs_inst__DOT__regs__v0 
                = vlSelf->soc__DOT__top_inst__DOT__ex_rd_data_o;
            __Vdlyvset__soc__DOT__top_inst__DOT__regs_inst__DOT__regs__v0 = 1U;
            __Vdlyvdim0__soc__DOT__top_inst__DOT__regs_inst__DOT__regs__v0 
                = vlSelf->soc__DOT__top_inst__DOT__ex_rd_addr_o;
        }
        vlSelf->soc__DOT__top_inst__DOT__pc_reg_pc_o 
            = ((IData)(4U) + vlSelf->soc__DOT__top_inst__DOT__pc_reg_pc_o);
    } else {
        vlSelf->soc__DOT__top_inst__DOT__id_ex_reg_wen = 0U;
        vlSelf->soc__DOT__top_inst__DOT__id_ex_rd_addr_o = 0U;
        vlSelf->soc__DOT__top_inst__DOT__id_ex_inst_addr_o = 0U;
        vlSelf->soc__DOT__top_inst__DOT__id_ex_op2_o = 0U;
        vlSelf->soc__DOT__top_inst__DOT__id_ex_op1_o = 0U;
        vlSelf->soc__DOT__top_inst__DOT__if_id_inst_addr_o = 0U;
        vlSelf->soc__DOT__top_inst__DOT__id_ex_inst_o = 0x13U;
        __Vdlyvset__soc__DOT__top_inst__DOT__regs_inst__DOT__regs__v1 = 1U;
        vlSelf->soc__DOT__top_inst__DOT__pc_reg_pc_o = 0U;
    }
    if (__Vdlyvset__soc__DOT__top_inst__DOT__regs_inst__DOT__regs__v0) {
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[__Vdlyvdim0__soc__DOT__top_inst__DOT__regs_inst__DOT__regs__v0] 
            = __Vdlyvval__soc__DOT__top_inst__DOT__regs_inst__DOT__regs__v0;
    }
    if (__Vdlyvset__soc__DOT__top_inst__DOT__regs_inst__DOT__regs__v1) {
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[1U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[2U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[3U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[4U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[5U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[6U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[7U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[8U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[9U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0xaU] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0xbU] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0xcU] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0xdU] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0xeU] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0xfU] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0x10U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0x11U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0x12U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0x13U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0x14U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0x15U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0x16U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0x17U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0x18U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0x19U] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0x1aU] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0x1bU] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0x1cU] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0x1dU] = 0U;
        vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0x1eU] = 0U;
    }
    vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o = 
        ((IData)(vlSelf->rst) ? vlSelf->soc__DOT__rom_inst_o
          : 0x13U);
    vlSelf->soc__DOT__rom_inst_o = vlSelf->soc__DOT__rom_inst__DOT__rom_mem
        [(0xfffU & (vlSelf->soc__DOT__top_inst__DOT__pc_reg_pc_o 
                    >> 2U))];
    if ((0x13U == (0x7fU & vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o))) {
        vlSelf->soc__DOT__top_inst__DOT__id_rs2_addr_o = 0U;
        vlSelf->soc__DOT__top_inst__DOT__id_rs1_addr_o 
            = (0x1fU & ((0U == (7U & (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                      >> 0xcU))) ? 
                        (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                         >> 0xfU) : 0U));
    } else if ((0x33U == (0x7fU & vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o))) {
        if ((0U == (7U & (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                          >> 0xcU)))) {
            vlSelf->soc__DOT__top_inst__DOT__id_rs2_addr_o 
                = (0x1fU & (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                            >> 0x14U));
            vlSelf->soc__DOT__top_inst__DOT__id_rs1_addr_o 
                = (0x1fU & (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                            >> 0xfU));
        } else {
            vlSelf->soc__DOT__top_inst__DOT__id_rs2_addr_o = 0U;
            vlSelf->soc__DOT__top_inst__DOT__id_rs1_addr_o 
                = (0x1fU & 0U);
        }
    } else {
        vlSelf->soc__DOT__top_inst__DOT__id_rs2_addr_o = 0U;
        vlSelf->soc__DOT__top_inst__DOT__id_rs1_addr_o 
            = (0x1fU & 0U);
    }
    if ((0x13U == (0x7fU & vlSelf->soc__DOT__rom_inst_o))) {
        if ((0U == (7U & (vlSelf->soc__DOT__rom_inst_o 
                          >> 0xcU)))) {
            vlSelf->soc__DOT__top_inst__DOT__ex_reg_wen_o = 1U;
            vlSelf->soc__DOT__top_inst__DOT__ex_rd_addr_o 
                = (0x1fU & (vlSelf->soc__DOT__rom_inst_o 
                            >> 7U));
            vlSelf->soc__DOT__top_inst__DOT__ex_rd_data_o 
                = (vlSelf->soc__DOT__top_inst__DOT__id_ex_op1_o 
                   + vlSelf->soc__DOT__top_inst__DOT__id_ex_op2_o);
        } else {
            vlSelf->soc__DOT__top_inst__DOT__ex_reg_wen_o = 0U;
            vlSelf->soc__DOT__top_inst__DOT__ex_rd_addr_o 
                = (0x1fU & 0U);
            vlSelf->soc__DOT__top_inst__DOT__ex_rd_data_o = 0U;
        }
    } else {
        vlSelf->soc__DOT__top_inst__DOT__ex_reg_wen_o 
            = (IData)((0x33U == (0x707fU & vlSelf->soc__DOT__rom_inst_o)));
        if ((0x33U == (0x7fU & vlSelf->soc__DOT__rom_inst_o))) {
            if ((0U == (7U & (vlSelf->soc__DOT__rom_inst_o 
                              >> 0xcU)))) {
                vlSelf->soc__DOT__top_inst__DOT__ex_rd_addr_o 
                    = (0x1fU & (vlSelf->soc__DOT__rom_inst_o 
                                >> 7U));
                vlSelf->soc__DOT__top_inst__DOT__ex_rd_data_o 
                    = ((0U == (vlSelf->soc__DOT__rom_inst_o 
                               >> 0x19U)) ? (vlSelf->soc__DOT__top_inst__DOT__id_ex_op1_o 
                                             + vlSelf->soc__DOT__top_inst__DOT__id_ex_op2_o)
                        : (vlSelf->soc__DOT__top_inst__DOT__id_ex_op2_o 
                           - vlSelf->soc__DOT__top_inst__DOT__id_ex_op1_o));
            } else {
                vlSelf->soc__DOT__top_inst__DOT__ex_rd_addr_o 
                    = (0x1fU & 0U);
                vlSelf->soc__DOT__top_inst__DOT__ex_rd_data_o = 0U;
            }
        } else {
            vlSelf->soc__DOT__top_inst__DOT__ex_rd_addr_o 
                = (0x1fU & 0U);
            vlSelf->soc__DOT__top_inst__DOT__ex_rd_data_o = 0U;
        }
    }
}

VL_INLINE_OPT void Vsoc___024root___combo__TOP__0(Vsoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->soc__DOT__top_inst__DOT__regs_rs1_data_o 
        = ((IData)(vlSelf->rst) ? ((0U == (IData)(vlSelf->soc__DOT__top_inst__DOT__id_rs1_addr_o))
                                    ? 0U : (((IData)(vlSelf->soc__DOT__top_inst__DOT__ex_reg_wen_o) 
                                             & ((IData)(vlSelf->soc__DOT__top_inst__DOT__ex_rd_addr_o) 
                                                == (IData)(vlSelf->soc__DOT__top_inst__DOT__id_rs1_addr_o)))
                                             ? vlSelf->soc__DOT__top_inst__DOT__ex_rd_data_o
                                             : vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs
                                            [vlSelf->soc__DOT__top_inst__DOT__id_rs1_addr_o]))
            : 0U);
}

void Vsoc___024root___eval(Vsoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsoc___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vsoc___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vsoc___024root___eval_debug_assertions(Vsoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
