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
    IData/*31:0*/ __Vdly__soc__DOT__riscv_inst__DOT__pc_reg_pc_o;
    CData/*4:0*/ __Vdlyvdim0__soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0;
    IData/*31:0*/ __Vdlyvval__soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v1;
    SData/*11:0*/ __Vdlyvdim0__soc__DOT__ram_inst__DOT__ram_template_inst__DOT__memory__v0;
    IData/*31:0*/ __Vdlyvval__soc__DOT__ram_inst__DOT__ram_template_inst__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__soc__DOT__ram_inst__DOT__ram_template_inst__DOT__memory__v0;
    // Body
    __Vdlyvset__soc__DOT__ram_inst__DOT__ram_template_inst__DOT__memory__v0 = 0U;
    __Vdlyvset__soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0 = 0U;
    __Vdlyvset__soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v1 = 0U;
    __Vdly__soc__DOT__riscv_inst__DOT__pc_reg_pc_o 
        = vlSelf->soc__DOT__riscv_inst__DOT__pc_reg_pc_o;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    vlSelf->soc__DOT__ram_inst__DOT__w_data_reg = vlSelf->soc__DOT__riscv_w_data_o;
    if (((IData)(vlSelf->rst) & (IData)(vlSelf->soc__DOT__riscv_r_en))) {
        vlSelf->soc__DOT__ram_inst__DOT__r_data_write 
            = vlSelf->soc__DOT__ram_inst__DOT__ram_template_inst__DOT__memory
            [vlSelf->soc__DOT__riscv_r_addr_o];
    }
    vlSelf->soc__DOT__ram_inst__DOT__rd_wr_equ_flag 
        = ((((IData)(vlSelf->rst) & (IData)(vlSelf->soc__DOT__riscv_w_en)) 
            & (IData)(vlSelf->soc__DOT__riscv_r_en)) 
           & ((IData)(vlSelf->soc__DOT__riscv_r_addr_o) 
              == (IData)(vlSelf->soc__DOT__riscv_w_addr_o)));
    if (((IData)(vlSelf->rst) & (IData)(vlSelf->soc__DOT__riscv_w_en))) {
        __Vdlyvval__soc__DOT__ram_inst__DOT__ram_template_inst__DOT__memory__v0 
            = vlSelf->soc__DOT__riscv_w_data_o;
        __Vdlyvset__soc__DOT__ram_inst__DOT__ram_template_inst__DOT__memory__v0 = 1U;
        __Vdlyvdim0__soc__DOT__ram_inst__DOT__ram_template_inst__DOT__memory__v0 
            = vlSelf->soc__DOT__riscv_w_addr_o;
    }
    vlSelf->soc__DOT__riscv_inst__DOT__id_ex_reg_wen 
        = ((~ ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ctrl_hold_flag_o))) 
           & (IData)(vlSelf->soc__DOT__riscv_inst__DOT__id_reg_wen));
    if ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ctrl_hold_flag_o)))) {
        vlSelf->soc__DOT__riscv_inst__DOT__id_ex_offset_addr_o = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_addr_o = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__id_ex_base_addr_o = 0U;
    } else {
        vlSelf->soc__DOT__riscv_inst__DOT__id_ex_offset_addr_o 
            = vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o;
        vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_addr_o 
            = vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o;
        vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o 
            = vlSelf->soc__DOT__riscv_inst__DOT__id_rd_addr_o;
        vlSelf->soc__DOT__riscv_inst__DOT__id_ex_base_addr_o 
            = ((0x40U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                ? ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                    ? ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                        ? 0U : ((8U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                 ? ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                     ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                         ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                             ? vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o
                                             : 0U) : 0U)
                                     : 0U) : ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                               ? ((2U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? vlSelf->soc__DOT__riscv_inst__DOT__regs_rs1_rdata_o
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                     ? vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                      ? 0U
                                                      : vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o))
                                                    : 0U)
                                                   : 0U))))
                    : 0U) : 0U);
    }
    if (vlSelf->rst) {
        if (((IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_reg_wen_o) 
             & (0U != (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o)))) {
            __Vdlyvval__soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0 
                = vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o;
            __Vdlyvset__soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0 = 1U;
            __Vdlyvdim0__soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0 
                = vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o;
        }
        __Vdly__soc__DOT__riscv_inst__DOT__pc_reg_pc_o 
            = ((IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_jump_en_o)
                ? ((0x40U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                    ? ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                        ? ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                            ? 0U : ((8U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                         ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                             ? ((1U 
                                                 & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                 ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                 : 0U)
                                             : 0U) : 0U)
                                     : ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                         ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                             ? ((1U 
                                                 & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                 ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                 : 0U)
                                             : 0U) : 
                                        ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                          ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                              ? ((0x4000U 
                                                  & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 0U
                                                   : vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset))
                                              : 0U)
                                          : 0U)))) : 0U)
                    : 0U) : ((IData)(4U) + vlSelf->soc__DOT__riscv_inst__DOT__pc_reg_pc_o));
    } else {
        __Vdlyvset__soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v1 = 1U;
        __Vdly__soc__DOT__riscv_inst__DOT__pc_reg_pc_o = 0x80000000U;
    }
    if ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ctrl_hold_flag_o)))) {
        vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o = 0U;
    } else {
        vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o 
            = vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o;
        vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o 
            = vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o;
    }
    if (__Vdlyvset__soc__DOT__ram_inst__DOT__ram_template_inst__DOT__memory__v0) {
        vlSelf->soc__DOT__ram_inst__DOT__ram_template_inst__DOT__memory[__Vdlyvdim0__soc__DOT__ram_inst__DOT__ram_template_inst__DOT__memory__v0] 
            = __Vdlyvval__soc__DOT__ram_inst__DOT__ram_template_inst__DOT__memory__v0;
    }
    if (__Vdlyvset__soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0) {
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[__Vdlyvdim0__soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0] 
            = __Vdlyvval__soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v0;
    }
    if (__Vdlyvset__soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs__v1) {
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[1U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[2U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[3U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[4U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[5U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[6U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[7U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[8U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[9U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0xaU] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0xbU] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0xcU] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0xdU] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0xeU] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0xfU] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x10U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x11U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x12U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x13U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x14U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x15U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x16U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x17U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x18U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x19U] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x1aU] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x1bU] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x1cU] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x1dU] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x1eU] = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset 
        = (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_base_addr_o 
           + vlSelf->soc__DOT__riscv_inst__DOT__id_ex_offset_addr_o);
    if ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ctrl_hold_flag_o)))) {
        vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o = 0U;
        vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o = 0x13U;
    } else {
        vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o 
            = vlSelf->soc__DOT__riscv_inst__DOT__pc_reg_pc_o;
        vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
            = vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o;
    }
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
    if ((0x40U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
        vlSelf->soc__DOT__riscv_inst__DOT__ex_reg_wen_o 
            = (1U & (IData)(((0x20U == (0x30U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                             & ((8U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? (IData)((7U == (7U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)))
                                 : (IData)((7U == (7U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)))))));
        if ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
            if ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            } else if ((8U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                if ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                    if ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                        if ((1U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                            vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o 
                                = vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o;
                            vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o 
                                = vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i;
                        } else {
                            vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                            vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                        }
                    } else {
                        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                    }
                } else {
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                }
            } else if ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                if ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                    if ((1U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o 
                            = vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o;
                        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o 
                            = vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i;
                    } else {
                        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                    }
                } else {
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                }
            } else {
                vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            }
        } else {
            vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
            vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
        }
    } else if ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
        vlSelf->soc__DOT__riscv_inst__DOT__ex_reg_wen_o 
            = (1U & (IData)(((0x10U == (0x18U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                             & ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? ((vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                     >> 1U) & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 : ((vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                     >> 1U) & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)))));
        if ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
            if ((8U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            } else if ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                if ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                    if ((1U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o 
                            = vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o;
                        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o 
                            = vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o;
                    } else {
                        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                    }
                } else {
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                }
            } else if ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                if ((1U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o 
                        = vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o;
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o 
                        = ((0x4000U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                            ? ((0x2000U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                ? ((0x1000U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                    ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i
                                    : vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)
                                : ((0x1000U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                    ? ((0x40000000U 
                                        & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                        ? ((vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i 
                                            & (0xffffffffU 
                                               >> (0x1fU 
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
                            : ((0x2000U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                ? ((0x1000U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                    ? (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned)
                                    : (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed))
                                : ((0x1000U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                    ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i
                                    : ((0x40000000U 
                                        & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                        ? (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o 
                                           - vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o)
                                        : vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i))));
                } else {
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                }
            } else {
                vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            }
        } else {
            vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
            vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
        }
    } else {
        vlSelf->soc__DOT__riscv_inst__DOT__ex_reg_wen_o 
            = (1U & (IData)(((0x10U == (0x18U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                             & ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? ((vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                     >> 1U) & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 : ((vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                     >> 1U) & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)))));
        if ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
            if ((8U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            } else if ((4U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                if ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                    if ((1U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o 
                            = vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o;
                        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o 
                            = vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i;
                    } else {
                        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                        vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                    }
                } else {
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                }
            } else if ((2U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                if ((1U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)) {
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o 
                        = vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o;
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o 
                        = ((0x4000U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                            ? ((0x2000U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                ? ((0x1000U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                    ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i
                                    : vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)
                                : ((0x1000U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                    ? ((0x40000000U 
                                        & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                        ? ((vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i 
                                            & (0xffffffffU 
                                               >> (0x1fU 
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
                            : ((0x2000U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                ? ((0x1000U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                    ? (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned)
                                    : (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed))
                                : ((0x1000U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                    ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i
                                    : vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i)));
                } else {
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                    vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
                }
            } else {
                vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
                vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
            }
        } else {
            vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o = 0U;
            vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o = 0U;
        }
    }
    vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->soc__DOT__riscv_inst__DOT__ctrl_hold_flag_o)))
            ? 0x13U : vlSelf->soc__DOT__rom_inst__DOT__rom_mem
           [(0xfffU & (vlSelf->soc__DOT__riscv_inst__DOT__pc_reg_pc_o 
                       >> 2U))]);
    vlSelf->soc__DOT__riscv_inst__DOT__pc_reg_pc_o 
        = __Vdly__soc__DOT__riscv_inst__DOT__pc_reg_pc_o;
    vlSelf->soc__DOT__riscv_inst__DOT__ctrl_hold_flag_o 
        = vlSelf->soc__DOT__riscv_inst__DOT__ex_jump_en_o;
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
                vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o = 0U;
            } else if ((8U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                    = (0x1fU & 0U);
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                    = (0x1fU & 0U);
                vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o 
                    = ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                        ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                            ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                ? (((- (IData)((vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o) 
                                                 | ((0x800U 
                                                     & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                          >> 0x14U)))))
                                : 0U) : 0U) : 0U);
            } else if ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                    = (0x1fU & ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                 ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                     ? (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0xfU) : 0U)
                                 : 0U));
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                    = (0x1fU & 0U);
                vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o 
                    = ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                        ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                            ? vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immI
                            : 0U) : 0U);
            } else if ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                    if ((0x4000U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                        vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                            = (0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0xfU));
                        vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                            = (0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0x14U));
                        vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o 
                            = vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immB;
                    } else if ((0x2000U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)) {
                        vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o = 0U;
                    } else {
                        vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                            = (0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0xfU));
                        vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                            = (0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                        >> 0x14U));
                        vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o 
                            = vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immB;
                    }
                } else {
                    vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                        = (0x1fU & 0U);
                    vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                        = (0x1fU & 0U);
                    vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o = 0U;
                }
            } else {
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                    = (0x1fU & 0U);
                vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                    = (0x1fU & 0U);
                vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o = 0U;
            }
        } else {
            vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o 
                = (0x1fU & 0U);
            vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o 
                = (0x1fU & 0U);
            vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o = 0U;
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
        vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o = 0U;
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
        vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o 
            = ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                ? ((8U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                    ? 0U : ((4U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                             ? ((2U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                 ? ((1U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                     ? (0xfffff000U 
                                        & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                     : 0U) : 0U) : 0U))
                : 0U);
    }
}

VL_INLINE_OPT void Vsoc___024root___combo__TOP__0(Vsoc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root___combo__TOP__0\n"); );
    // Body
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
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
