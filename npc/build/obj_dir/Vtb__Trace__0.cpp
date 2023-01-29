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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgQData(oldp+0,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o),64);
        tracep->chgQData(oldp+2,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o),64);
        tracep->chgQData(oldp+4,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_base_addr_o),64);
        tracep->chgQData(oldp+6,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o),64);
        tracep->chgQData(oldp+8,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o),64);
        tracep->chgQData(oldp+10,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0]),64);
        tracep->chgQData(oldp+12,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[1]),64);
        tracep->chgQData(oldp+14,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[2]),64);
        tracep->chgQData(oldp+16,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[3]),64);
        tracep->chgQData(oldp+18,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[4]),64);
        tracep->chgQData(oldp+20,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[5]),64);
        tracep->chgQData(oldp+22,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[6]),64);
        tracep->chgQData(oldp+24,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[7]),64);
        tracep->chgQData(oldp+26,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[8]),64);
        tracep->chgQData(oldp+28,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[9]),64);
        tracep->chgQData(oldp+30,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[10]),64);
        tracep->chgQData(oldp+32,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[11]),64);
        tracep->chgQData(oldp+34,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[12]),64);
        tracep->chgQData(oldp+36,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[13]),64);
        tracep->chgQData(oldp+38,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[14]),64);
        tracep->chgQData(oldp+40,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[15]),64);
        tracep->chgQData(oldp+42,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[16]),64);
        tracep->chgQData(oldp+44,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[17]),64);
        tracep->chgQData(oldp+46,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[18]),64);
        tracep->chgQData(oldp+48,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[19]),64);
        tracep->chgQData(oldp+50,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[20]),64);
        tracep->chgQData(oldp+52,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[21]),64);
        tracep->chgQData(oldp+54,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[22]),64);
        tracep->chgQData(oldp+56,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[23]),64);
        tracep->chgQData(oldp+58,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[24]),64);
        tracep->chgQData(oldp+60,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[25]),64);
        tracep->chgQData(oldp+62,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[26]),64);
        tracep->chgQData(oldp+64,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[27]),64);
        tracep->chgQData(oldp+66,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[28]),64);
        tracep->chgQData(oldp+68,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[29]),64);
        tracep->chgQData(oldp+70,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[30]),64);
        tracep->chgQData(oldp+72,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[31]),64);
        tracep->chgIData(oldp+74,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgQData(oldp+75,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o),64);
        tracep->chgQData(oldp+77,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__rom_inst__DOT__rom_mem
                                  [(0xfffU & (IData)(
                                                     (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
                                                      >> 2U)))]),64);
        tracep->chgIData(oldp+79,((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__rom_inst__DOT__rom_mem
                                          [(0xfffU 
                                            & (IData)(
                                                      (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
                                                       >> 2U)))])),32);
        tracep->chgQData(oldp+80,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__rom_inst__DOT__rom_mem
                                  [(0xfffU & (IData)(
                                                     (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_rom_raddr_o 
                                                      >> 2U)))]),64);
        tracep->chgQData(oldp+82,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o),64);
        tracep->chgIData(oldp+84,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o),32);
        tracep->chgCData(oldp+85,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o),5);
        tracep->chgCData(oldp+86,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o),5);
        tracep->chgCData(oldp+87,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o),5);
        tracep->chgBit(oldp+88,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen));
        tracep->chgQData(oldp+89,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_offset_addr_o),64);
        tracep->chgIData(oldp+91,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o),32);
        tracep->chgQData(oldp+92,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o),64);
        tracep->chgQData(oldp+94,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o),64);
        tracep->chgQData(oldp+96,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o),64);
        tracep->chgCData(oldp+98,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o),5);
        tracep->chgBit(oldp+99,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen));
        tracep->chgQData(oldp+100,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_base_addr_o),64);
        tracep->chgQData(oldp+102,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_offset_addr_o),64);
        tracep->chgQData(oldp+104,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_rd_wdata_o),64);
        tracep->chgCData(oldp+106,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_rd_waddr_o),5);
        tracep->chgBit(oldp+107,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_reg_wen_o));
        tracep->chgBit(oldp+108,((1U & (IData)(((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                                                & (0x7000U 
                                                   != 
                                                   (0x7000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)))))));
        tracep->chgQData(oldp+109,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? 0ULL : ((0x20U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                ? 0ULL
                                                : (
                                                   (0x10U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                        ? 
                                                       ((0x4000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                         ? 
                                                        ((0x2000U 
                                                          & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                          ? 
                                                         ((0x1000U 
                                                           & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                           ? 0ULL
                                                           : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                          : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                         : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                        : 0ULL)
                                                       : 0ULL))))))),64);
        tracep->chgQData(oldp+111,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? 0ULL : ((0x20U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                ? (
                                                   (0x10U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                        ? 
                                                       ((0x4000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                         ? 0ULL
                                                         : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                        : 0ULL)
                                                       : 0ULL))))
                                                : 0ULL))),64);
        tracep->chgQData(oldp+113,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? 0ULL : ((0x20U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                ? (
                                                   (0x10U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                        ? 
                                                       ((0x4000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                         ? 0ULL
                                                         : 
                                                        ((0x2000U 
                                                          & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                          ? 
                                                         ((0x1000U 
                                                           & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                           ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o
                                                           : (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)))
                                                          : 
                                                         ((0x1000U 
                                                           & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                           ? (QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o))))
                                                           : (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)))))))
                                                        : 0ULL)
                                                       : 0ULL))))
                                                : 0ULL))),64);
        tracep->chgBit(oldp+115,((IData)((0x23U == 
                                          (0x407fU 
                                           & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)))));
        tracep->chgCData(oldp+116,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? 0U : ((0x20U 
                                              & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                              ? ((0x10U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                         ? 0xffU
                                                         : 0xfU)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                         ? 3U
                                                         : 1U)))
                                                      : 0U)
                                                     : 0U))))
                                              : 0U))),8);
        tracep->chgQData(oldp+117,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                         ? ((0x10U 
                                             & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                             ? 0ULL
                                             : ((8U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                 ? 
                                                ((4U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                    : 0ULL)
                                                   : 0ULL)
                                                  : 0ULL)
                                                 : 
                                                ((4U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                    : 0ULL)
                                                   : 0ULL)
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
                                                      ? 0ULL
                                                      : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset))
                                                    : 0ULL)
                                                   : 0ULL))))
                                         : 0ULL) : 0ULL)),64);
        tracep->chgBit(oldp+119,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o));
        tracep->chgCData(oldp+120,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_stall_flag_o),3);
        tracep->chgCData(oldp+121,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_flush_flag_o),3);
        tracep->chgBit(oldp+122,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_pc_flush_en_o));
        tracep->chgBit(oldp+123,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_pc_stall_en_o));
        tracep->chgBit(oldp+124,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_if_id_flush_en_o));
        tracep->chgBit(oldp+125,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_if_id_stall_en_o));
        tracep->chgBit(oldp+126,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_id_ex_flush_en_o));
        tracep->chgBit(oldp+127,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_id_ex_stall_en_o));
        tracep->chgQData(oldp+128,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_inst_addr_o),64);
        tracep->chgIData(oldp+130,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o),32);
        tracep->chgBit(oldp+131,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_ren_o));
        tracep->chgQData(oldp+132,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_raddr_o),64);
        tracep->chgBit(oldp+134,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wen_o));
        tracep->chgQData(oldp+135,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_waddr_o),64);
        tracep->chgQData(oldp+137,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wdata_o),64);
        tracep->chgCData(oldp+139,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wmask_o),8);
        tracep->chgQData(oldp+140,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_rd_wdata_o),64);
        tracep->chgCData(oldp+142,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_rd_waddr_o),5);
        tracep->chgBit(oldp+143,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_reg_wen_o));
        tracep->chgCData(oldp+144,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_stall_flag_o),3);
        tracep->chgCData(oldp+145,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_flush_flag_o),3);
        tracep->chgQData(oldp+146,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_mem_wb_rd_wdata_o),64);
        tracep->chgQData(oldp+148,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_ex_rdata_o),64);
        tracep->chgQData(oldp+150,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_ram_wdata_o),64);
        tracep->chgQData(oldp+152,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_ram_waddr_o),64);
        tracep->chgQData(oldp+154,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_ram_raddr_o),64);
        tracep->chgQData(oldp+156,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_rom_raddr_o),64);
        tracep->chgQData(oldp+158,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_inst_addr_o),64);
        tracep->chgQData(oldp+160,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_wb_rd_wdata_o),64);
        tracep->chgCData(oldp+162,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_wb_rd_waddr_o),5);
        tracep->chgBit(oldp+163,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_wb_reg_wen_o));
        tracep->chgQData(oldp+164,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ram_inst__DOT__ram_mem
                                   [(0xfffU & (IData)(
                                                      (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_ram_raddr_o 
                                                       >> 2U)))]),64);
        tracep->chgCData(oldp+166,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)),7);
        tracep->chgCData(oldp+167,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                             >> 7U))),5);
        tracep->chgCData(oldp+168,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+169,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+170,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+171,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                    >> 0x19U)),7);
        tracep->chgQData(oldp+172,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),64);
        tracep->chgQData(oldp+174,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i),64);
        tracep->chgQData(oldp+176,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i),64);
        tracep->chgQData(oldp+178,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),64);
        tracep->chgQData(oldp+180,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),64);
        tracep->chgQData(oldp+182,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),64);
        tracep->chgQData(oldp+184,(VL_MODDIVS_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
        tracep->chgQData(oldp+186,(VL_MODDIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
        tracep->chgQData(oldp+188,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i),64);
        tracep->chgQData(oldp+190,(VL_DIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
        tracep->chgQData(oldp+192,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned),64);
        tracep->chgQData(oldp+194,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned),64);
        tracep->chgQData(oldp+196,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed),64);
        tracep->chgQData(oldp+198,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),64);
        tracep->chgBit(oldp+200,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
        tracep->chgBit(oldp+201,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
        tracep->chgBit(oldp+202,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
        tracep->chgQData(oldp+203,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_add),64);
        tracep->chgQData(oldp+205,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i)))),64);
        tracep->chgQData(oldp+207,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i)))),64);
        tracep->chgQData(oldp+209,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i)))),64);
        tracep->chgQData(oldp+211,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i)))),64);
        tracep->chgQData(oldp+213,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)))),64);
        tracep->chgQData(oldp+215,((((QData)((IData)(
                                                     (- (IData)(
                                                                (VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)) 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)))))),64);
        tracep->chgQData(oldp+217,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i)))),64);
        tracep->chgQData(oldp+219,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned),64);
        tracep->chgQData(oldp+221,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned),64);
        tracep->chgQData(oldp+223,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_signed),64);
        tracep->chgQData(oldp+225,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)))),64);
        tracep->chgCData(oldp+227,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)),7);
        tracep->chgCData(oldp+228,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                             >> 7U))),5);
        tracep->chgCData(oldp+229,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+230,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+231,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+232,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                    >> 0x19U)),7);
        tracep->chgSData(oldp+233,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                    >> 0x14U)),12);
        tracep->chgCData(oldp+234,((0x3fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                             >> 0x14U))),6);
        tracep->chgQData(oldp+235,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immI),64);
        tracep->chgQData(oldp+237,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immU),64);
        tracep->chgQData(oldp+239,((((- (QData)((IData)(
                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+241,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immB),64);
        tracep->chgQData(oldp+243,((((- (QData)((IData)(
                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                         >> 0x1fU)))) 
                                     << 0x14U) | (QData)((IData)(
                                                                 ((0xff000U 
                                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                           >> 0x14U)))))))),64);
        tracep->chgQData(oldp+245,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immL),64);
        tracep->chgCData(oldp+247,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o)),7);
        tracep->chgCData(oldp+248,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o 
                                             >> 7U))),5);
        tracep->chgCData(oldp+249,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+250,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+251,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o 
                                             >> 0x14U))),5);
    }
    tracep->chgBit(oldp+252,(vlSelf->clk));
    tracep->chgBit(oldp+253,(vlSelf->rst));
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
