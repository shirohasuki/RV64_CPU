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
        tracep->chgIData(oldp+0,(vlSelf->soc__DOT__top_inst__DOT__pc_reg_pc_o),32);
        tracep->chgIData(oldp+1,(vlSelf->soc__DOT__rom_inst_o),32);
        tracep->chgIData(oldp+2,(vlSelf->soc__DOT__top_inst__DOT__if_id_inst_addr_o),32);
        tracep->chgIData(oldp+3,(vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o),32);
        tracep->chgCData(oldp+4,(vlSelf->soc__DOT__top_inst__DOT__id_rs1_addr_o),5);
        tracep->chgCData(oldp+5,(vlSelf->soc__DOT__top_inst__DOT__id_rs2_addr_o),5);
        tracep->chgCData(oldp+6,((0x1fU & ((0x13U == 
                                            (0x7fU 
                                             & vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o))
                                            ? ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                                    >> 0xcU)))
                                                ? (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                                   >> 7U)
                                                : 0U)
                                            : ((0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                                    >> 7U)
                                                    : 0U)
                                                : 0U)))),5);
        tracep->chgBit(oldp+7,(((0x13U == (0x7fU & vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o))
                                 ? (0U == (7U & (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                                 >> 0xcU)))
                                 : (IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o))))));
        tracep->chgIData(oldp+8,(vlSelf->soc__DOT__top_inst__DOT__id_ex_inst_o),32);
        tracep->chgIData(oldp+9,(vlSelf->soc__DOT__top_inst__DOT__id_ex_inst_addr_o),32);
        tracep->chgIData(oldp+10,(vlSelf->soc__DOT__top_inst__DOT__id_ex_op1_o),32);
        tracep->chgIData(oldp+11,(vlSelf->soc__DOT__top_inst__DOT__id_ex_op2_o),32);
        tracep->chgCData(oldp+12,(vlSelf->soc__DOT__top_inst__DOT__id_ex_rd_addr_o),5);
        tracep->chgBit(oldp+13,(vlSelf->soc__DOT__top_inst__DOT__id_ex_reg_wen));
        tracep->chgIData(oldp+14,(vlSelf->soc__DOT__top_inst__DOT__ex_rd_data_o),32);
        tracep->chgCData(oldp+15,(vlSelf->soc__DOT__top_inst__DOT__ex_rd_addr_o),5);
        tracep->chgBit(oldp+16,(vlSelf->soc__DOT__top_inst__DOT__ex_reg_wen_o));
        tracep->chgCData(oldp+17,((0x7fU & vlSelf->soc__DOT__rom_inst_o)),7);
        tracep->chgCData(oldp+18,((0x1fU & (vlSelf->soc__DOT__rom_inst_o 
                                            >> 7U))),5);
        tracep->chgCData(oldp+19,((7U & (vlSelf->soc__DOT__rom_inst_o 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+20,((0x1fU & (vlSelf->soc__DOT__rom_inst_o 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+21,((0x1fU & (vlSelf->soc__DOT__rom_inst_o 
                                            >> 0x14U))),5);
        tracep->chgSData(oldp+22,((vlSelf->soc__DOT__rom_inst_o 
                                   >> 0x14U)),12);
        tracep->chgCData(oldp+23,((vlSelf->soc__DOT__rom_inst_o 
                                   >> 0x19U)),7);
        tracep->chgCData(oldp+24,((0x7fU & vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o)),7);
        tracep->chgCData(oldp+25,((0x1fU & (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                            >> 7U))),5);
        tracep->chgCData(oldp+26,((7U & (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+27,((0x1fU & (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+28,((0x1fU & (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                            >> 0x14U))),5);
        tracep->chgSData(oldp+29,((vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                   >> 0x14U)),12);
        tracep->chgCData(oldp+30,((vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                   >> 0x19U)),7);
        tracep->chgIData(oldp+31,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[0]),32);
        tracep->chgIData(oldp+32,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[1]),32);
        tracep->chgIData(oldp+33,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[2]),32);
        tracep->chgIData(oldp+34,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[3]),32);
        tracep->chgIData(oldp+35,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[4]),32);
        tracep->chgIData(oldp+36,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[5]),32);
        tracep->chgIData(oldp+37,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[6]),32);
        tracep->chgIData(oldp+38,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[7]),32);
        tracep->chgIData(oldp+39,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[8]),32);
        tracep->chgIData(oldp+40,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[9]),32);
        tracep->chgIData(oldp+41,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[10]),32);
        tracep->chgIData(oldp+42,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[11]),32);
        tracep->chgIData(oldp+43,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[12]),32);
        tracep->chgIData(oldp+44,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[13]),32);
        tracep->chgIData(oldp+45,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[14]),32);
        tracep->chgIData(oldp+46,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[15]),32);
        tracep->chgIData(oldp+47,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[16]),32);
        tracep->chgIData(oldp+48,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[17]),32);
        tracep->chgIData(oldp+49,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[18]),32);
        tracep->chgIData(oldp+50,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[19]),32);
        tracep->chgIData(oldp+51,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[20]),32);
        tracep->chgIData(oldp+52,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[21]),32);
        tracep->chgIData(oldp+53,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[22]),32);
        tracep->chgIData(oldp+54,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[23]),32);
        tracep->chgIData(oldp+55,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[24]),32);
        tracep->chgIData(oldp+56,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[25]),32);
        tracep->chgIData(oldp+57,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[26]),32);
        tracep->chgIData(oldp+58,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[27]),32);
        tracep->chgIData(oldp+59,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[28]),32);
        tracep->chgIData(oldp+60,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[29]),32);
        tracep->chgIData(oldp+61,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[30]),32);
        tracep->chgIData(oldp+62,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs[31]),32);
        tracep->chgIData(oldp+63,(vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    }
    tracep->chgBit(oldp+64,(vlSelf->clk));
    tracep->chgBit(oldp+65,(vlSelf->rst));
    tracep->chgIData(oldp+66,(((0x13U == (0x7fU & vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o))
                                ? ((0U == (7U & (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                                 >> 0xcU)))
                                    ? vlSelf->soc__DOT__top_inst__DOT__regs_rs1_data_o
                                    : 0U) : ((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o))
                                              ? ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                                      >> 0xcU)))
                                                  ? vlSelf->soc__DOT__top_inst__DOT__regs_rs1_data_o
                                                  : 0U)
                                              : 0U))),32);
    tracep->chgIData(oldp+67,(((0x13U == (0x7fU & vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o))
                                ? ((0U == (7U & (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                                 >> 0xcU)))
                                    ? (((- (IData)(
                                                   (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                        >> 0x14U)) : 0U)
                                : ((0x33U == (0x7fU 
                                              & vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o))
                                    ? ((0U == (7U & 
                                               (vlSelf->soc__DOT__top_inst__DOT__if_id_inst_o 
                                                >> 0xcU)))
                                        ? ((IData)(vlSelf->rst)
                                            ? ((0U 
                                                == (IData)(vlSelf->soc__DOT__top_inst__DOT__id_rs1_addr_o))
                                                ? 0U
                                                : (
                                                   ((IData)(vlSelf->soc__DOT__top_inst__DOT__ex_reg_wen_o) 
                                                    & ((IData)(vlSelf->soc__DOT__top_inst__DOT__ex_rd_addr_o) 
                                                       == (IData)(vlSelf->soc__DOT__top_inst__DOT__id_rs2_addr_o)))
                                                    ? vlSelf->soc__DOT__top_inst__DOT__ex_rd_data_o
                                                    : 
                                                   vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs
                                                   [vlSelf->soc__DOT__top_inst__DOT__id_rs2_addr_o]))
                                            : 0U) : 0U)
                                    : 0U))),32);
    tracep->chgIData(oldp+68,(vlSelf->soc__DOT__top_inst__DOT__regs_rs1_data_o),32);
    tracep->chgIData(oldp+69,(((IData)(vlSelf->rst)
                                ? ((0U == (IData)(vlSelf->soc__DOT__top_inst__DOT__id_rs1_addr_o))
                                    ? 0U : (((IData)(vlSelf->soc__DOT__top_inst__DOT__ex_reg_wen_o) 
                                             & ((IData)(vlSelf->soc__DOT__top_inst__DOT__ex_rd_addr_o) 
                                                == (IData)(vlSelf->soc__DOT__top_inst__DOT__id_rs2_addr_o)))
                                             ? vlSelf->soc__DOT__top_inst__DOT__ex_rd_data_o
                                             : vlSelf->soc__DOT__top_inst__DOT__regs_inst__DOT__regs
                                            [vlSelf->soc__DOT__top_inst__DOT__id_rs2_addr_o]))
                                : 0U)),32);
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
}
