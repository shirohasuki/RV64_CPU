// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_sub_0(Vtb___024root* vlSelf, VerilatedVcd* tracep);

void Vtb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_top_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vtb___024root__trace_chg_sub_0(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgIData(oldp+0,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+1,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                                 [3U]),32);
        tracep->chgIData(oldp+2,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                                 [0x1aU]),32);
        tracep->chgIData(oldp+3,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                                 [0x1bU]),32);
        tracep->chgIData(oldp+4,(vlSelf->tb__DOT__r),32);
        tracep->chgIData(oldp+5,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o),32);
        tracep->chgIData(oldp+6,(vlSelf->tb__DOT__soc_inst__DOT__rom_inst__DOT__rom_mem
                                 [(0xfffU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
                                             >> 2U))]),32);
        tracep->chgIData(oldp+7,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o),32);
        tracep->chgIData(oldp+8,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o),32);
        tracep->chgCData(oldp+9,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o),5);
        tracep->chgCData(oldp+10,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o),5);
        tracep->chgCData(oldp+11,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o),5);
        tracep->chgBit(oldp+12,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen));
        tracep->chgIData(oldp+13,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o),32);
        tracep->chgIData(oldp+14,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o),32);
        tracep->chgIData(oldp+15,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o),32);
        tracep->chgIData(oldp+16,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o),32);
        tracep->chgCData(oldp+17,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o),5);
        tracep->chgBit(oldp+18,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen));
        tracep->chgIData(oldp+19,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o),32);
        tracep->chgCData(oldp+20,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o),5);
        tracep->chgBit(oldp+21,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o));
        tracep->chgIData(oldp+22,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                    ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                        ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                            ? 0U : 
                                           ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                             ? ((4U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o 
                                                   + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)
                                                   : 0U)
                                                  : 0U)
                                                 : 0U)
                                             : ((4U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
                                                   + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)
                                                   : 0U)
                                                  : 0U)
                                                 : 
                                                ((2U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                     ? 0U
                                                     : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset))
                                                   : 0U)
                                                  : 0U))))
                                        : 0U) : 0U)),32);
        tracep->chgBit(oldp+23,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o));
        tracep->chgBit(oldp+24,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_hold_flag_o));
        tracep->chgCData(oldp+25,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)),7);
        tracep->chgCData(oldp+26,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                            >> 7U))),5);
        tracep->chgCData(oldp+27,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+28,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+29,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+30,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                   >> 0x19U)),7);
        tracep->chgBit(oldp+31,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
        tracep->chgBit(oldp+32,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
        tracep->chgBit(oldp+33,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
        tracep->chgIData(oldp+34,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),32);
        tracep->chgIData(oldp+35,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
                                   - vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),32);
        tracep->chgIData(oldp+36,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),32);
        tracep->chgIData(oldp+37,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),32);
        tracep->chgIData(oldp+38,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),32);
        tracep->chgIData(oldp+39,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i),32);
        tracep->chgIData(oldp+40,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i),32);
        tracep->chgIData(oldp+41,((0xffffffffU >> (0x1fU 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o))),32);
        tracep->chgIData(oldp+42,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                    ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                        ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                            ? 0U : 
                                           ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                             ? 0U : 
                                            ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                              ? 0U : 
                                             ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                     ? 0U
                                                     : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o))
                                                   : 0U)
                                               : 0U))))
                                        : 0U) : 0U)),32);
        tracep->chgIData(oldp+43,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                    ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                        ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                            ? 0U : 
                                           ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                             ? 0U : 
                                            ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                              ? 0U : 
                                             ((2U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immB
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                     ? 0U
                                                     : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immB))
                                                   : 0U)
                                               : 0U))))
                                        : 0U) : 0U)),32);
        tracep->chgCData(oldp+44,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)),7);
        tracep->chgCData(oldp+45,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                            >> 7U))),5);
        tracep->chgCData(oldp+46,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+47,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+48,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+49,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                   >> 0x19U)),7);
        tracep->chgSData(oldp+50,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                   >> 0x14U)),12);
        tracep->chgIData(oldp+51,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immB),32);
        tracep->chgIData(oldp+52,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0]),32);
        tracep->chgIData(oldp+53,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[1]),32);
        tracep->chgIData(oldp+54,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[2]),32);
        tracep->chgIData(oldp+55,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[3]),32);
        tracep->chgIData(oldp+56,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[4]),32);
        tracep->chgIData(oldp+57,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[5]),32);
        tracep->chgIData(oldp+58,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[6]),32);
        tracep->chgIData(oldp+59,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[7]),32);
        tracep->chgIData(oldp+60,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[8]),32);
        tracep->chgIData(oldp+61,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[9]),32);
        tracep->chgIData(oldp+62,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[10]),32);
        tracep->chgIData(oldp+63,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[11]),32);
        tracep->chgIData(oldp+64,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[12]),32);
        tracep->chgIData(oldp+65,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[13]),32);
        tracep->chgIData(oldp+66,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[14]),32);
        tracep->chgIData(oldp+67,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[15]),32);
        tracep->chgIData(oldp+68,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[16]),32);
        tracep->chgIData(oldp+69,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[17]),32);
        tracep->chgIData(oldp+70,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[18]),32);
        tracep->chgIData(oldp+71,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[19]),32);
        tracep->chgIData(oldp+72,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[20]),32);
        tracep->chgIData(oldp+73,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[21]),32);
        tracep->chgIData(oldp+74,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[22]),32);
        tracep->chgIData(oldp+75,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[23]),32);
        tracep->chgIData(oldp+76,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[24]),32);
        tracep->chgIData(oldp+77,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[25]),32);
        tracep->chgIData(oldp+78,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[26]),32);
        tracep->chgIData(oldp+79,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[27]),32);
        tracep->chgIData(oldp+80,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[28]),32);
        tracep->chgIData(oldp+81,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[29]),32);
        tracep->chgIData(oldp+82,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[30]),32);
        tracep->chgIData(oldp+83,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[31]),32);
        tracep->chgIData(oldp+84,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+85,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o),32);
        tracep->chgIData(oldp+86,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o),32);
        tracep->chgIData(oldp+87,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o),32);
        tracep->chgIData(oldp+88,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o),32);
    }
    tracep->chgBit(oldp+89,(vlSelf->clk));
    tracep->chgBit(oldp+90,(vlSelf->rst));
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
