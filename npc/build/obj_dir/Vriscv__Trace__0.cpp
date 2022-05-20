// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv__Syms.h"


void Vriscv___024root__trace_chg_sub_0(Vriscv___024root* vlSelf, VerilatedVcd* tracep);

void Vriscv___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_chg_top_0\n"); );
    // Init
    Vriscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv___024root*>(voidSelf);
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vriscv___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vriscv___024root__trace_chg_sub_0(Vriscv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSelf->riscv__DOT__pc_reg_pc_o),32);
        tracep->chgIData(oldp+1,(vlSelf->riscv__DOT__if_id_inst_addr_o),32);
        tracep->chgIData(oldp+2,(vlSelf->riscv__DOT__if_id_inst_o),32);
        tracep->chgCData(oldp+3,(vlSelf->riscv__DOT__id_rs1_addr_o),5);
        tracep->chgCData(oldp+4,(vlSelf->riscv__DOT__id_rs2_addr_o),5);
        tracep->chgCData(oldp+5,((0x1fU & ((0x13U == 
                                            (0x7fU 
                                             & vlSelf->riscv__DOT__if_id_inst_o))
                                            ? ((0U 
                                                == 
                                                (7U 
                                                 & (vlSelf->riscv__DOT__if_id_inst_o 
                                                    >> 0xcU)))
                                                ? (vlSelf->riscv__DOT__if_id_inst_o 
                                                   >> 7U)
                                                : 0U)
                                            : ((0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->riscv__DOT__if_id_inst_o))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->riscv__DOT__if_id_inst_o 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlSelf->riscv__DOT__if_id_inst_o 
                                                    >> 7U)
                                                    : 0U)
                                                : 0U)))),5);
        tracep->chgBit(oldp+6,(((0x13U == (0x7fU & vlSelf->riscv__DOT__if_id_inst_o))
                                 ? (0U == (7U & (vlSelf->riscv__DOT__if_id_inst_o 
                                                 >> 0xcU)))
                                 : (IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->riscv__DOT__if_id_inst_o))))));
        tracep->chgIData(oldp+7,(vlSelf->riscv__DOT__id_ex_inst_o),32);
        tracep->chgIData(oldp+8,(vlSelf->riscv__DOT__id_ex_inst_addr_o),32);
        tracep->chgIData(oldp+9,(vlSelf->riscv__DOT__id_ex_op1_o),32);
        tracep->chgIData(oldp+10,(vlSelf->riscv__DOT__id_ex_op2_o),32);
        tracep->chgCData(oldp+11,(vlSelf->riscv__DOT__id_ex_rd_addr_o),5);
        tracep->chgBit(oldp+12,(vlSelf->riscv__DOT__id_ex_reg_wen));
        tracep->chgCData(oldp+13,((0x7fU & vlSelf->riscv__DOT__if_id_inst_o)),7);
        tracep->chgCData(oldp+14,((0x1fU & (vlSelf->riscv__DOT__if_id_inst_o 
                                            >> 7U))),5);
        tracep->chgCData(oldp+15,((7U & (vlSelf->riscv__DOT__if_id_inst_o 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+16,((0x1fU & (vlSelf->riscv__DOT__if_id_inst_o 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+17,((0x1fU & (vlSelf->riscv__DOT__if_id_inst_o 
                                            >> 0x14U))),5);
        tracep->chgSData(oldp+18,((vlSelf->riscv__DOT__if_id_inst_o 
                                   >> 0x14U)),12);
        tracep->chgCData(oldp+19,((vlSelf->riscv__DOT__if_id_inst_o 
                                   >> 0x19U)),7);
        tracep->chgIData(oldp+20,(vlSelf->riscv__DOT__regs_inst__DOT__regs[0]),32);
        tracep->chgIData(oldp+21,(vlSelf->riscv__DOT__regs_inst__DOT__regs[1]),32);
        tracep->chgIData(oldp+22,(vlSelf->riscv__DOT__regs_inst__DOT__regs[2]),32);
        tracep->chgIData(oldp+23,(vlSelf->riscv__DOT__regs_inst__DOT__regs[3]),32);
        tracep->chgIData(oldp+24,(vlSelf->riscv__DOT__regs_inst__DOT__regs[4]),32);
        tracep->chgIData(oldp+25,(vlSelf->riscv__DOT__regs_inst__DOT__regs[5]),32);
        tracep->chgIData(oldp+26,(vlSelf->riscv__DOT__regs_inst__DOT__regs[6]),32);
        tracep->chgIData(oldp+27,(vlSelf->riscv__DOT__regs_inst__DOT__regs[7]),32);
        tracep->chgIData(oldp+28,(vlSelf->riscv__DOT__regs_inst__DOT__regs[8]),32);
        tracep->chgIData(oldp+29,(vlSelf->riscv__DOT__regs_inst__DOT__regs[9]),32);
        tracep->chgIData(oldp+30,(vlSelf->riscv__DOT__regs_inst__DOT__regs[10]),32);
        tracep->chgIData(oldp+31,(vlSelf->riscv__DOT__regs_inst__DOT__regs[11]),32);
        tracep->chgIData(oldp+32,(vlSelf->riscv__DOT__regs_inst__DOT__regs[12]),32);
        tracep->chgIData(oldp+33,(vlSelf->riscv__DOT__regs_inst__DOT__regs[13]),32);
        tracep->chgIData(oldp+34,(vlSelf->riscv__DOT__regs_inst__DOT__regs[14]),32);
        tracep->chgIData(oldp+35,(vlSelf->riscv__DOT__regs_inst__DOT__regs[15]),32);
        tracep->chgIData(oldp+36,(vlSelf->riscv__DOT__regs_inst__DOT__regs[16]),32);
        tracep->chgIData(oldp+37,(vlSelf->riscv__DOT__regs_inst__DOT__regs[17]),32);
        tracep->chgIData(oldp+38,(vlSelf->riscv__DOT__regs_inst__DOT__regs[18]),32);
        tracep->chgIData(oldp+39,(vlSelf->riscv__DOT__regs_inst__DOT__regs[19]),32);
        tracep->chgIData(oldp+40,(vlSelf->riscv__DOT__regs_inst__DOT__regs[20]),32);
        tracep->chgIData(oldp+41,(vlSelf->riscv__DOT__regs_inst__DOT__regs[21]),32);
        tracep->chgIData(oldp+42,(vlSelf->riscv__DOT__regs_inst__DOT__regs[22]),32);
        tracep->chgIData(oldp+43,(vlSelf->riscv__DOT__regs_inst__DOT__regs[23]),32);
        tracep->chgIData(oldp+44,(vlSelf->riscv__DOT__regs_inst__DOT__regs[24]),32);
        tracep->chgIData(oldp+45,(vlSelf->riscv__DOT__regs_inst__DOT__regs[25]),32);
        tracep->chgIData(oldp+46,(vlSelf->riscv__DOT__regs_inst__DOT__regs[26]),32);
        tracep->chgIData(oldp+47,(vlSelf->riscv__DOT__regs_inst__DOT__regs[27]),32);
        tracep->chgIData(oldp+48,(vlSelf->riscv__DOT__regs_inst__DOT__regs[28]),32);
        tracep->chgIData(oldp+49,(vlSelf->riscv__DOT__regs_inst__DOT__regs[29]),32);
        tracep->chgIData(oldp+50,(vlSelf->riscv__DOT__regs_inst__DOT__regs[30]),32);
        tracep->chgIData(oldp+51,(vlSelf->riscv__DOT__regs_inst__DOT__regs[31]),32);
        tracep->chgIData(oldp+52,(vlSelf->riscv__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+53,(vlSelf->riscv__DOT__regs_rs1_rdata_o),32);
        tracep->chgIData(oldp+54,(vlSelf->riscv__DOT__ex_rd_data_o),32);
        tracep->chgCData(oldp+55,(vlSelf->riscv__DOT__ex_rd_addr_o),5);
        tracep->chgBit(oldp+56,(vlSelf->riscv__DOT__ex_reg_wen_o));
    }
    tracep->chgBit(oldp+57,(vlSelf->clk));
    tracep->chgBit(oldp+58,(vlSelf->rst));
    tracep->chgIData(oldp+59,(vlSelf->inst_i),32);
    tracep->chgIData(oldp+60,(vlSelf->inst_addr_o),32);
    tracep->chgIData(oldp+61,(((0x13U == (0x7fU & vlSelf->riscv__DOT__if_id_inst_o))
                                ? ((0U == (7U & (vlSelf->riscv__DOT__if_id_inst_o 
                                                 >> 0xcU)))
                                    ? vlSelf->riscv__DOT__regs_rs1_rdata_o
                                    : 0U) : ((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->riscv__DOT__if_id_inst_o))
                                              ? ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->riscv__DOT__if_id_inst_o 
                                                      >> 0xcU)))
                                                  ? vlSelf->riscv__DOT__regs_rs1_rdata_o
                                                  : 0U)
                                              : 0U))),32);
    tracep->chgIData(oldp+62,(((0x13U == (0x7fU & vlSelf->riscv__DOT__if_id_inst_o))
                                ? ((0U == (7U & (vlSelf->riscv__DOT__if_id_inst_o 
                                                 >> 0xcU)))
                                    ? (((- (IData)(
                                                   (vlSelf->riscv__DOT__if_id_inst_o 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->riscv__DOT__if_id_inst_o 
                                        >> 0x14U)) : 0U)
                                : ((0x33U == (0x7fU 
                                              & vlSelf->riscv__DOT__if_id_inst_o))
                                    ? ((0U == (7U & 
                                               (vlSelf->riscv__DOT__if_id_inst_o 
                                                >> 0xcU)))
                                        ? ((IData)(vlSelf->rst)
                                            ? ((0U 
                                                == (IData)(vlSelf->riscv__DOT__id_rs1_addr_o))
                                                ? 0U
                                                : (
                                                   ((IData)(vlSelf->riscv__DOT__ex_reg_wen_o) 
                                                    & ((IData)(vlSelf->riscv__DOT__ex_rd_addr_o) 
                                                       == (IData)(vlSelf->riscv__DOT__id_rs2_addr_o)))
                                                    ? vlSelf->riscv__DOT__ex_rd_data_o
                                                    : 
                                                   vlSelf->riscv__DOT__regs_inst__DOT__regs
                                                   [vlSelf->riscv__DOT__id_rs2_addr_o]))
                                            : 0U) : 0U)
                                    : 0U))),32);
    tracep->chgIData(oldp+63,(((IData)(vlSelf->rst)
                                ? ((0U == (IData)(vlSelf->riscv__DOT__id_rs1_addr_o))
                                    ? 0U : (((IData)(vlSelf->riscv__DOT__ex_reg_wen_o) 
                                             & ((IData)(vlSelf->riscv__DOT__ex_rd_addr_o) 
                                                == (IData)(vlSelf->riscv__DOT__id_rs2_addr_o)))
                                             ? vlSelf->riscv__DOT__ex_rd_data_o
                                             : vlSelf->riscv__DOT__regs_inst__DOT__regs
                                            [vlSelf->riscv__DOT__id_rs2_addr_o]))
                                : 0U)),32);
    tracep->chgCData(oldp+64,((0x7fU & vlSelf->inst_i)),7);
    tracep->chgCData(oldp+65,((0x1fU & (vlSelf->inst_i 
                                        >> 7U))),5);
    tracep->chgCData(oldp+66,((7U & (vlSelf->inst_i 
                                     >> 0xcU))),3);
    tracep->chgCData(oldp+67,((0x1fU & (vlSelf->inst_i 
                                        >> 0xfU))),5);
    tracep->chgCData(oldp+68,((0x1fU & (vlSelf->inst_i 
                                        >> 0x14U))),5);
    tracep->chgSData(oldp+69,((vlSelf->inst_i >> 0x14U)),12);
    tracep->chgCData(oldp+70,((vlSelf->inst_i >> 0x19U)),7);
}

void Vriscv___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_cleanup\n"); );
    // Init
    Vriscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv___024root*>(voidSelf);
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
