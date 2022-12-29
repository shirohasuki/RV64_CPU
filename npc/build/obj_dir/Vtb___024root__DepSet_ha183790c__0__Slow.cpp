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
    VL_READMEM_N(true, 64, 4096, 0, VL_CVT_PACK_STR_NW(13, Vtb__ConstPool__CONST_h6b745f0d_0)
                 ,  &(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__rom_inst__DOT__rom_mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb___024root___settle__TOP__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___settle__TOP__1\n"); );
    // Body
    VL_WRITEF("[inst_fetch] pc_addr: %x inst: %x\n",
              32,(IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o),
              32,(IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__rom_inst__DOT__rom_mem
                         [(0xfffU & (IData)((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
                                             >> 2U)))]));
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
    vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_wen = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_waddr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_wdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_wmask = 0;
    vlSelf->tb__DOT__soc_inst__DOT__ram_riscv_rdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_rom_raddr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__rom_riscv_rdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_axi_sid_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_axi_rwvalid_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_base_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_offset_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_base_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_offset_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_rd_wdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_rd_waddr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_reg_wen_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_wb_rd_wdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_hold_flag_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_inst_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_ren_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_raddr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wen_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_waddr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wmask_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_rd_wdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_rd_waddr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_reg_wen_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_ex_rdata_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_inst_addr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_wb_rd_waddr_o = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_wb_reg_wen_o = 0;
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__rom_inst__DOT__rom_mem[__Vi0] = 0;
    }
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immI = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immU = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immB = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immL = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[__Vi0] = 0;
    }
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_add = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned = 0;
    vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_signed = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
