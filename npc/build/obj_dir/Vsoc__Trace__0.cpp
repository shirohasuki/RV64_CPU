// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc__Syms.h"


void Vsoc___024root__trace_chg_sub_0(Vsoc___024root* vlSelf, VerilatedVcd* tracep);

void Vsoc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root__trace_chg_top_0\n"); );
    // Init
    Vsoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc___024root*>(voidSelf);
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsoc___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vsoc___024root__trace_chg_sub_0(Vsoc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSelf->soc__DOT__riscv_inst__DOT__pc_reg_pc_o),32);
        tracep->chgIData(oldp+1,(vlSelf->soc__DOT__rom_inst__DOT__rom_mem
                                 [(0xfffU & (vlSelf->soc__DOT__riscv_inst__DOT__pc_reg_pc_o 
                                             >> 2U))]),32);
        tracep->chgIData(oldp+2,(((IData)(vlSelf->soc__DOT__ram_inst__DOT__rd_wr_equ_flag)
                                   ? vlSelf->soc__DOT__riscv_w_data_o
                                   : vlSelf->soc__DOT__ram_inst__DOT__r_data_write)),32);
        tracep->chgBit(oldp+3,(vlSelf->soc__DOT__ram_inst__DOT__rd_wr_equ_flag));
        tracep->chgIData(oldp+4,(vlSelf->soc__DOT__ram_inst__DOT__w_data_reg),32);
        tracep->chgIData(oldp+5,(vlSelf->soc__DOT__ram_inst__DOT__r_data_write),32);
        tracep->chgIData(oldp+6,(vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o),32);
        tracep->chgIData(oldp+7,(vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o),32);
        tracep->chgCData(oldp+8,(vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o),5);
        tracep->chgCData(oldp+9,(vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o),5);
        tracep->chgCData(oldp+10,(vlSelf->soc__DOT__riscv_inst__DOT__id_rd_addr_o),5);
        tracep->chgBit(oldp+11,(vlSelf->soc__DOT__riscv_inst__DOT__id_reg_wen));
        tracep->chgIData(oldp+12,(vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o),32);
        tracep->chgIData(oldp+13,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o),32);
        tracep->chgIData(oldp+14,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_addr_o),32);
        tracep->chgIData(oldp+15,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o),32);
        tracep->chgIData(oldp+16,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o),32);
        tracep->chgCData(oldp+17,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o),5);
        tracep->chgBit(oldp+18,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_reg_wen));
        tracep->chgIData(oldp+19,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_base_addr_o),32);
        tracep->chgIData(oldp+20,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_offset_addr_o),32);
        tracep->chgIData(oldp+21,(vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o),32);
        tracep->chgCData(oldp+22,(vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o),5);
        tracep->chgBit(oldp+23,(vlSelf->soc__DOT__riscv_inst__DOT__ex_reg_wen_o));
        tracep->chgIData(oldp+24,(((0x40U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                    ? ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                        ? ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                            ? 0U : 
                                           ((8U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                             ? ((4U 
                                                 & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                   : 0U)
                                                  : 0U)
                                                 : 0U)
                                             : ((4U 
                                                 & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                   : 0U)
                                                  : 0U)
                                                 : 
                                                ((2U 
                                                  & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                    ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                     ? 0U
                                                     : vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset))
                                                   : 0U)
                                                  : 0U))))
                                        : 0U) : 0U)),32);
        tracep->chgBit(oldp+25,(vlSelf->soc__DOT__riscv_inst__DOT__ex_jump_en_o));
        tracep->chgBit(oldp+26,(vlSelf->soc__DOT__riscv_inst__DOT__ctrl_hold_flag_o));
        tracep->chgCData(oldp+27,((0x7fU & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)),7);
        tracep->chgCData(oldp+28,((0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                            >> 7U))),5);
        tracep->chgCData(oldp+29,((7U & (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+30,((0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+31,((0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+32,((vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                   >> 0x19U)),7);
        tracep->chgIData(oldp+33,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),32);
        tracep->chgIData(oldp+34,((vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o 
                                   - vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o)),32);
        tracep->chgIData(oldp+35,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),32);
        tracep->chgIData(oldp+36,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),32);
        tracep->chgIData(oldp+37,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),32);
        tracep->chgIData(oldp+38,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i),32);
        tracep->chgIData(oldp+39,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i),32);
        tracep->chgIData(oldp+40,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),32);
        tracep->chgBit(oldp+41,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
        tracep->chgBit(oldp+42,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
        tracep->chgBit(oldp+43,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
        tracep->chgIData(oldp+44,((0xffffffffU >> (0x1fU 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o))),32);
        tracep->chgCData(oldp+45,((0x7fU & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)),7);
        tracep->chgCData(oldp+46,((0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                            >> 7U))),5);
        tracep->chgCData(oldp+47,((7U & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+48,((0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+49,((0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+50,((vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                   >> 0x19U)),7);
        tracep->chgSData(oldp+51,((vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                   >> 0x14U)),12);
        tracep->chgIData(oldp+52,(vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immI),32);
        tracep->chgIData(oldp+53,((0xfffff000U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)),32);
        tracep->chgIData(oldp+54,((((- (IData)((vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                      >> 7U))))),32);
        tracep->chgIData(oldp+55,(vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immB),32);
        tracep->chgIData(oldp+56,((((- (IData)((vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                >> 0x1fU))) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o) 
                                                 | ((0x800U 
                                                     & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                          >> 0x14U)))))),32);
        tracep->chgIData(oldp+57,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0]),32);
        tracep->chgIData(oldp+58,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[1]),32);
        tracep->chgIData(oldp+59,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[2]),32);
        tracep->chgIData(oldp+60,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[3]),32);
        tracep->chgIData(oldp+61,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[4]),32);
        tracep->chgIData(oldp+62,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[5]),32);
        tracep->chgIData(oldp+63,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[6]),32);
        tracep->chgIData(oldp+64,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[7]),32);
        tracep->chgIData(oldp+65,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[8]),32);
        tracep->chgIData(oldp+66,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[9]),32);
        tracep->chgIData(oldp+67,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[10]),32);
        tracep->chgIData(oldp+68,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[11]),32);
        tracep->chgIData(oldp+69,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[12]),32);
        tracep->chgIData(oldp+70,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[13]),32);
        tracep->chgIData(oldp+71,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[14]),32);
        tracep->chgIData(oldp+72,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[15]),32);
        tracep->chgIData(oldp+73,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[16]),32);
        tracep->chgIData(oldp+74,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[17]),32);
        tracep->chgIData(oldp+75,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[18]),32);
        tracep->chgIData(oldp+76,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[19]),32);
        tracep->chgIData(oldp+77,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[20]),32);
        tracep->chgIData(oldp+78,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[21]),32);
        tracep->chgIData(oldp+79,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[22]),32);
        tracep->chgIData(oldp+80,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[23]),32);
        tracep->chgIData(oldp+81,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[24]),32);
        tracep->chgIData(oldp+82,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[25]),32);
        tracep->chgIData(oldp+83,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[26]),32);
        tracep->chgIData(oldp+84,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[27]),32);
        tracep->chgIData(oldp+85,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[28]),32);
        tracep->chgIData(oldp+86,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[29]),32);
        tracep->chgIData(oldp+87,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[30]),32);
        tracep->chgIData(oldp+88,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[31]),32);
        tracep->chgIData(oldp+89,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+90,(vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o),32);
        tracep->chgIData(oldp+91,(vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o),32);
        tracep->chgIData(oldp+92,(vlSelf->soc__DOT__riscv_inst__DOT__regs_rs1_rdata_o),32);
        tracep->chgIData(oldp+93,(vlSelf->soc__DOT__riscv_inst__DOT__regs_rs2_rdata_o),32);
    }
    tracep->chgBit(oldp+94,(vlSelf->clk));
    tracep->chgBit(oldp+95,(vlSelf->rst));
    tracep->chgIData(oldp+96,(((0x40U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                ? ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                    ? ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                        ? 0U : ((8U 
                                                 & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                 ? 
                                                ((4U 
                                                  & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o
                                                    : 0U)
                                                   : 0U)
                                                  : 0U)
                                                 : 
                                                ((4U 
                                                  & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? vlSelf->soc__DOT__riscv_inst__DOT__regs_rs1_rdata_o
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((2U 
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
                                    : 0U) : 0U)),32);
}

void Vsoc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root__trace_cleanup\n"); );
    // Init
    Vsoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc___024root*>(voidSelf);
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
