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
        tracep->chgBit(oldp+0,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__busy_end));
        tracep->chgQData(oldp+1,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o),64);
        tracep->chgQData(oldp+3,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o),64);
        tracep->chgQData(oldp+5,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o),64);
        tracep->chgQData(oldp+7,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o),64);
        tracep->chgQData(oldp+9,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o),64);
        tracep->chgBit(oldp+11,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_stall_en_o));
        tracep->chgBit(oldp+12,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_stall_en_o));
        tracep->chgBit(oldp+13,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o));
        tracep->chgBit(oldp+14,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o));
        tracep->chgBit(oldp+15,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_stall_en_o));
        tracep->chgQData(oldp+16,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ex_rdata_o),64);
        tracep->chgQData(oldp+18,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0]),64);
        tracep->chgQData(oldp+20,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[1]),64);
        tracep->chgQData(oldp+22,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[2]),64);
        tracep->chgQData(oldp+24,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[3]),64);
        tracep->chgQData(oldp+26,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[4]),64);
        tracep->chgQData(oldp+28,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[5]),64);
        tracep->chgQData(oldp+30,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[6]),64);
        tracep->chgQData(oldp+32,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[7]),64);
        tracep->chgQData(oldp+34,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[8]),64);
        tracep->chgQData(oldp+36,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[9]),64);
        tracep->chgQData(oldp+38,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[10]),64);
        tracep->chgQData(oldp+40,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[11]),64);
        tracep->chgQData(oldp+42,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[12]),64);
        tracep->chgQData(oldp+44,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[13]),64);
        tracep->chgQData(oldp+46,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[14]),64);
        tracep->chgQData(oldp+48,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[15]),64);
        tracep->chgQData(oldp+50,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[16]),64);
        tracep->chgQData(oldp+52,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[17]),64);
        tracep->chgQData(oldp+54,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[18]),64);
        tracep->chgQData(oldp+56,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[19]),64);
        tracep->chgQData(oldp+58,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[20]),64);
        tracep->chgQData(oldp+60,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[21]),64);
        tracep->chgQData(oldp+62,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[22]),64);
        tracep->chgQData(oldp+64,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[23]),64);
        tracep->chgQData(oldp+66,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[24]),64);
        tracep->chgQData(oldp+68,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[25]),64);
        tracep->chgQData(oldp+70,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[26]),64);
        tracep->chgQData(oldp+72,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[27]),64);
        tracep->chgQData(oldp+74,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[28]),64);
        tracep->chgQData(oldp+76,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[29]),64);
        tracep->chgQData(oldp+78,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[30]),64);
        tracep->chgQData(oldp+80,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[31]),64);
        tracep->chgIData(oldp+82,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+83,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_ren_o));
        tracep->chgQData(oldp+84,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o)
                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o
                                    : 0ULL)),64);
        tracep->chgBit(oldp+86,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_wen_o));
        tracep->chgQData(oldp+87,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o)
                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o
                                    : 0ULL)),64);
        tracep->chgQData(oldp+89,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o)
                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o
                                    : 0ULL)),64);
        tracep->chgQData(oldp+91,(((1U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o))
                                    ? 0xffULL : ((3U 
                                                  == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o))
                                                  ? 0xffffULL
                                                  : 
                                                 ((0xfU 
                                                   == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o))
                                                   ? 0xffffffffULL
                                                   : 
                                                  ((0xffU 
                                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o))
                                                    ? 0xffffffffffffffffULL
                                                    : 0ULL))))),64);
        tracep->chgQData(oldp+93,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o),64);
        tracep->chgIData(oldp+95,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr),32);
        tracep->chgBit(oldp+96,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__ren_o));
        tracep->chgIData(oldp+97,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr),32);
        tracep->chgQData(oldp+98,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata),64);
        tracep->chgQData(oldp+100,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask),64);
        tracep->chgBit(oldp+102,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wen_o));
        tracep->chgBit(oldp+103,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy));
        tracep->chgQData(oldp+104,(vlSelf->tb__DOT__soc_inst__DOT__ram_axi_rdata_o),64);
        tracep->chgBit(oldp+106,(vlSelf->tb__DOT__soc_inst__DOT__ram_axi_bvalid_o));
        tracep->chgQData(oldp+107,(vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o),64);
        tracep->chgIData(oldp+109,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr),32);
        tracep->chgQData(oldp+110,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata),64);
        tracep->chgBit(oldp+112,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid));
        tracep->chgBit(oldp+113,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raready));
        tracep->chgBit(oldp+114,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready));
        tracep->chgBit(oldp+115,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid));
        tracep->chgBit(oldp+116,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waready));
        tracep->chgBit(oldp+117,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdready));
        tracep->chgIData(oldp+118,((IData)(vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o)),32);
        tracep->chgQData(oldp+119,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o),64);
        tracep->chgIData(oldp+121,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o),32);
        tracep->chgCData(oldp+122,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o),5);
        tracep->chgCData(oldp+123,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o),5);
        tracep->chgCData(oldp+124,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o),5);
        tracep->chgBit(oldp+125,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen));
        tracep->chgQData(oldp+126,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_offset_addr_o),64);
        tracep->chgBit(oldp+128,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs1_id_ex_hit) 
                                  | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs2_id_ex_hit))));
        tracep->chgIData(oldp+129,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o),32);
        tracep->chgQData(oldp+130,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_addr_o),64);
        tracep->chgQData(oldp+132,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o),64);
        tracep->chgQData(oldp+134,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o),64);
        tracep->chgCData(oldp+136,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o),5);
        tracep->chgBit(oldp+137,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_reg_wen));
        tracep->chgQData(oldp+138,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_base_addr_o),64);
        tracep->chgQData(oldp+140,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_offset_addr_o),64);
        tracep->chgQData(oldp+142,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o),64);
        tracep->chgCData(oldp+144,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o),5);
        tracep->chgBit(oldp+145,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o));
        tracep->chgBit(oldp+146,((1U & (IData)(((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                                                & (0x7000U 
                                                   != 
                                                   (0x7000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))))));
        tracep->chgQData(oldp+147,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                     ? 0ULL : ((0x20U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                ? 0ULL
                                                : (
                                                   (0x10U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? 
                                                       ((0x4000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                         ? 
                                                        ((0x2000U 
                                                          & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                          ? 
                                                         ((0x1000U 
                                                           & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                           ? 0ULL
                                                           : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                          : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                         : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                        : 0ULL)
                                                       : 0ULL))))))),64);
        tracep->chgQData(oldp+149,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                     ? 0ULL : ((0x20U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                ? (
                                                   (0x10U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? 
                                                       ((0x4000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                         ? 0ULL
                                                         : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                        : 0ULL)
                                                       : 0ULL))))
                                                : 0ULL))),64);
        tracep->chgQData(oldp+151,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                     ? 0ULL : ((0x20U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                ? (
                                                   (0x10U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 0ULL
                                                    : 
                                                   ((8U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                      ? 0ULL
                                                      : 
                                                     ((2U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? 
                                                       ((0x4000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                         ? 0ULL
                                                         : 
                                                        ((0x2000U 
                                                          & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                          ? 
                                                         ((0x1000U 
                                                           & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                           ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o
                                                           : (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)))
                                                          : 
                                                         ((0x1000U 
                                                           & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                           ? (QData)((IData)(
                                                                             (0xffffU 
                                                                              & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o))))
                                                           : (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)))))))
                                                        : 0ULL)
                                                       : 0ULL))))
                                                : 0ULL))),64);
        tracep->chgBit(oldp+153,((IData)((0x23U == 
                                          (0x407fU 
                                           & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))));
        tracep->chgCData(oldp+154,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                     ? 0U : ((0x20U 
                                              & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                              ? ((0x10U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                         ? 0xffU
                                                         : 0xfU)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                         ? 3U
                                                         : 1U)))
                                                      : 0U)
                                                     : 0U))))
                                              : 0U))),8);
        tracep->chgQData(oldp+155,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                     ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                         ? ((0x10U 
                                             & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                             ? 0ULL
                                             : ((8U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                 ? 
                                                ((4U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                    : 0ULL)
                                                   : 0ULL)
                                                  : 0ULL)
                                                 : 
                                                ((4U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                    : 0ULL)
                                                   : 0ULL)
                                                  : 
                                                 ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                      ? 0ULL
                                                      : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset))
                                                    : 0ULL)
                                                   : 0ULL))))
                                         : 0ULL) : 0ULL)),64);
        tracep->chgBit(oldp+157,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_jump_en_o));
        tracep->chgBit(oldp+158,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isload_o));
        tracep->chgBit(oldp+159,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_issave_o));
        tracep->chgBit(oldp+160,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_flush_en_o));
        tracep->chgBit(oldp+161,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_flush_en_o));
        tracep->chgBit(oldp+162,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o));
        tracep->chgBit(oldp+163,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o));
        tracep->chgBit(oldp+164,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_flush_en_o));
        tracep->chgQData(oldp+165,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_inst_addr_o),64);
        tracep->chgIData(oldp+167,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o),32);
        tracep->chgBit(oldp+168,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o));
        tracep->chgQData(oldp+169,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o),64);
        tracep->chgBit(oldp+171,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o));
        tracep->chgQData(oldp+172,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o),64);
        tracep->chgQData(oldp+174,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o),64);
        tracep->chgCData(oldp+176,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o),8);
        tracep->chgQData(oldp+177,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_wdata_o),64);
        tracep->chgCData(oldp+179,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o),5);
        tracep->chgBit(oldp+180,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o));
        tracep->chgBit(oldp+181,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isload_o));
        tracep->chgBit(oldp+182,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_issave_o));
        tracep->chgQData(oldp+183,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_inst_addr_o),64);
        tracep->chgQData(oldp+185,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o),64);
        tracep->chgCData(oldp+187,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o),5);
        tracep->chgBit(oldp+188,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o));
        tracep->chgBit(oldp+189,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_data_hit));
        tracep->chgBit(oldp+190,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_inst));
        tracep->chgBit(oldp+191,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__save_inst));
        tracep->chgCData(oldp+192,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)),7);
        tracep->chgCData(oldp+193,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                             >> 7U))),5);
        tracep->chgCData(oldp+194,((7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+195,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+196,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+197,((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                    >> 0x19U)),7);
        tracep->chgQData(oldp+198,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),64);
        tracep->chgQData(oldp+200,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i),64);
        tracep->chgQData(oldp+202,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i),64);
        tracep->chgQData(oldp+204,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),64);
        tracep->chgQData(oldp+206,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),64);
        tracep->chgQData(oldp+208,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),64);
        tracep->chgQData(oldp+210,(VL_MODDIVS_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
        tracep->chgQData(oldp+212,(VL_MODDIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
        tracep->chgQData(oldp+214,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i),64);
        tracep->chgQData(oldp+216,(VL_DIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
        tracep->chgQData(oldp+218,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned),64);
        tracep->chgQData(oldp+220,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned),64);
        tracep->chgQData(oldp+222,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed),64);
        tracep->chgQData(oldp+224,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),64);
        tracep->chgBit(oldp+226,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
        tracep->chgBit(oldp+227,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
        tracep->chgBit(oldp+228,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
        tracep->chgQData(oldp+229,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_add),64);
        tracep->chgQData(oldp+231,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i)))),64);
        tracep->chgQData(oldp+233,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i)))),64);
        tracep->chgQData(oldp+235,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i)))),64);
        tracep->chgQData(oldp+237,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i)))),64);
        tracep->chgQData(oldp+239,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)))),64);
        tracep->chgQData(oldp+241,((((QData)((IData)(
                                                     (- (IData)(
                                                                (VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)) 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)))))),64);
        tracep->chgQData(oldp+243,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i)))),64);
        tracep->chgQData(oldp+245,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned),64);
        tracep->chgQData(oldp+247,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned),64);
        tracep->chgQData(oldp+249,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_signed),64);
        tracep->chgQData(oldp+251,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)))),64);
        tracep->chgCData(oldp+253,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)),7);
        tracep->chgCData(oldp+254,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                             >> 7U))),5);
        tracep->chgCData(oldp+255,((7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+256,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+257,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+258,((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                    >> 0x19U)),7);
        tracep->chgSData(oldp+259,((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                    >> 0x14U)),12);
        tracep->chgCData(oldp+260,((0x3fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                             >> 0x14U))),6);
        tracep->chgQData(oldp+261,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI),64);
        tracep->chgQData(oldp+263,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immU),64);
        tracep->chgQData(oldp+265,((((- (QData)((IData)(
                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+267,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immB),64);
        tracep->chgQData(oldp+269,((((- (QData)((IData)(
                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                         >> 0x1fU)))) 
                                     << 0x14U) | (QData)((IData)(
                                                                 ((0xff000U 
                                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                         >> 9U)) 
                                                                     | (0x7feU 
                                                                        & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                           >> 0x14U)))))))),64);
        tracep->chgQData(oldp+271,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL),64);
        tracep->chgCData(oldp+273,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)),7);
        tracep->chgCData(oldp+274,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                             >> 7U))),5);
        tracep->chgCData(oldp+275,((7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+276,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+277,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                             >> 0x14U))),5);
        tracep->chgBit(oldp+278,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs1_id_ex_hit));
        tracep->chgBit(oldp+279,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)) 
                                   & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)) 
                                  & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))));
        tracep->chgBit(oldp+280,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)) 
                                   & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o)) 
                                  & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))));
        tracep->chgBit(oldp+281,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs2_id_ex_hit));
        tracep->chgBit(oldp+282,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)) 
                                   & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)) 
                                  & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))));
        tracep->chgBit(oldp+283,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)) 
                                   & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o)) 
                                  & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))));
    }
    tracep->chgBit(oldp+284,(vlSelf->clk));
    tracep->chgBit(oldp+285,(vlSelf->rst));
    tracep->chgQData(oldp+286,(((IData)(vlSelf->rst)
                                 ? ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready)
                                     ? vlSelf->tb__DOT__soc_inst__DOT__ram_axi_rdata_o
                                     : 0ULL) : 0ULL)),64);
    tracep->chgQData(oldp+288,(((IData)(vlSelf->rst)
                                 ? ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o))
                                     ? 0ULL : (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                                                & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o) 
                                                   == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))
                                                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                                                : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs
                                               [vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o]))
                                 : 0ULL)),64);
    tracep->chgQData(oldp+290,(((IData)(vlSelf->rst)
                                 ? ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o))
                                     ? 0ULL : (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                                                & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o) 
                                                   == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))
                                                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                                                : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs
                                               [vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o]))
                                 : 0ULL)),64);
    tracep->chgQData(oldp+292,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o),64);
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
