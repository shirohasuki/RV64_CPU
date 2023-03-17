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
        tracep->chgQData(oldp+7,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_id_rdata_o),64);
        tracep->chgQData(oldp+9,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o),64);
        tracep->chgQData(oldp+11,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o),64);
        tracep->chgBit(oldp+13,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_flush_en_o));
        tracep->chgBit(oldp+14,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_stall_en_o));
        tracep->chgBit(oldp+15,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_flush_en_o));
        tracep->chgBit(oldp+16,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_stall_en_o));
        tracep->chgBit(oldp+17,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o));
        tracep->chgBit(oldp+18,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o));
        tracep->chgBit(oldp+19,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o));
        tracep->chgBit(oldp+20,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o));
        tracep->chgBit(oldp+21,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_flush_en_o));
        tracep->chgBit(oldp+22,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_stall_en_o));
        tracep->chgQData(oldp+23,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0]),64);
        tracep->chgQData(oldp+25,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[1]),64);
        tracep->chgQData(oldp+27,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[2]),64);
        tracep->chgQData(oldp+29,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[3]),64);
        tracep->chgQData(oldp+31,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[4]),64);
        tracep->chgQData(oldp+33,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[5]),64);
        tracep->chgQData(oldp+35,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[6]),64);
        tracep->chgQData(oldp+37,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[7]),64);
        tracep->chgQData(oldp+39,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[8]),64);
        tracep->chgQData(oldp+41,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[9]),64);
        tracep->chgQData(oldp+43,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[10]),64);
        tracep->chgQData(oldp+45,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[11]),64);
        tracep->chgQData(oldp+47,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[12]),64);
        tracep->chgQData(oldp+49,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[13]),64);
        tracep->chgQData(oldp+51,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[14]),64);
        tracep->chgQData(oldp+53,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[15]),64);
        tracep->chgQData(oldp+55,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[16]),64);
        tracep->chgQData(oldp+57,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[17]),64);
        tracep->chgQData(oldp+59,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[18]),64);
        tracep->chgQData(oldp+61,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[19]),64);
        tracep->chgQData(oldp+63,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[20]),64);
        tracep->chgQData(oldp+65,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[21]),64);
        tracep->chgQData(oldp+67,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[22]),64);
        tracep->chgQData(oldp+69,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[23]),64);
        tracep->chgQData(oldp+71,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[24]),64);
        tracep->chgQData(oldp+73,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[25]),64);
        tracep->chgQData(oldp+75,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[26]),64);
        tracep->chgQData(oldp+77,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[27]),64);
        tracep->chgQData(oldp+79,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[28]),64);
        tracep->chgQData(oldp+81,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[29]),64);
        tracep->chgQData(oldp+83,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[30]),64);
        tracep->chgQData(oldp+85,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[31]),64);
        tracep->chgIData(oldp+87,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+88,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_ren_o));
        tracep->chgQData(oldp+89,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o)
                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o
                                    : 0ULL)),64);
        tracep->chgBit(oldp+91,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_wen_o));
        tracep->chgQData(oldp+92,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o)
                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o
                                    : 0ULL)),64);
        tracep->chgQData(oldp+94,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o)
                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o
                                    : 0ULL)),64);
        tracep->chgQData(oldp+96,(((1U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o))
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
        tracep->chgQData(oldp+98,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o),64);
        tracep->chgIData(oldp+100,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr),32);
        tracep->chgBit(oldp+101,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__ren_o));
        tracep->chgIData(oldp+102,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr),32);
        tracep->chgQData(oldp+103,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata),64);
        tracep->chgQData(oldp+105,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask),64);
        tracep->chgBit(oldp+107,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wen_o));
        tracep->chgBit(oldp+108,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy));
        tracep->chgQData(oldp+109,(vlSelf->tb__DOT__soc_inst__DOT__ram_axi_rdata_o),64);
        tracep->chgBit(oldp+111,(vlSelf->tb__DOT__soc_inst__DOT__ram_axi_bvalid_o));
        tracep->chgQData(oldp+112,(vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o),64);
        tracep->chgIData(oldp+114,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr),32);
        tracep->chgQData(oldp+115,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata),64);
        tracep->chgBit(oldp+117,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid));
        tracep->chgBit(oldp+118,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raready));
        tracep->chgBit(oldp+119,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready));
        tracep->chgBit(oldp+120,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid));
        tracep->chgBit(oldp+121,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waready));
        tracep->chgBit(oldp+122,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdready));
        tracep->chgIData(oldp+123,((IData)(vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o)),32);
        tracep->chgQData(oldp+124,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o),64);
        tracep->chgIData(oldp+126,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o),32);
        tracep->chgCData(oldp+127,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o),5);
        tracep->chgCData(oldp+128,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o),5);
        tracep->chgCData(oldp+129,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o),5);
        tracep->chgBit(oldp+130,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen));
        tracep->chgQData(oldp+131,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_offset_addr_o),64);
        tracep->chgSData(oldp+133,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                     ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                         ? ((0x10U 
                                             & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                             ? ((8U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                           >> 0xcU))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                             >> 0xcU)))) 
                                                     | (3U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                            >> 0xcU))))
                                                     ? 
                                                    (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                     >> 0x14U)
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)))
                                             : 0U) : 0U)
                                     : 0U)),12);
        tracep->chgBit(oldp+134,((IData)(((0x73U == 
                                           (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) 
                                          & (((2U == 
                                               (7U 
                                                & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                   >> 0xcU))) 
                                              | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                     >> 0xcU)))) 
                                             | (3U 
                                                == 
                                                (7U 
                                                 & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                    >> 0xcU))))))));
        tracep->chgSData(oldp+135,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o),12);
        tracep->chgBit(oldp+136,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs1_id_ex_hit) 
                                  | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs2_id_ex_hit))));
        tracep->chgIData(oldp+137,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o),32);
        tracep->chgQData(oldp+138,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_addr_o),64);
        tracep->chgQData(oldp+140,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o),64);
        tracep->chgQData(oldp+142,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o),64);
        tracep->chgCData(oldp+144,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o),5);
        tracep->chgBit(oldp+145,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_reg_wen));
        tracep->chgQData(oldp+146,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_base_addr_o),64);
        tracep->chgQData(oldp+148,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_offset_addr_o),64);
        tracep->chgQData(oldp+150,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_wdata_o),64);
        tracep->chgSData(oldp+152,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_waddr_o),12);
        tracep->chgBit(oldp+153,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_wen_o));
        tracep->chgQData(oldp+154,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o),64);
        tracep->chgCData(oldp+156,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o),5);
        tracep->chgBit(oldp+157,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o));
        tracep->chgBit(oldp+158,((1U & (IData)(((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                                                & (0x7000U 
                                                   != 
                                                   (0x7000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))))));
        tracep->chgQData(oldp+159,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
        tracep->chgQData(oldp+161,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
        tracep->chgQData(oldp+163,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
        tracep->chgBit(oldp+165,((IData)((0x23U == 
                                          (0x407fU 
                                           & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))));
        tracep->chgCData(oldp+166,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
        tracep->chgQData(oldp+167,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_wdata_o),64);
        tracep->chgSData(oldp+169,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_waddr_o),12);
        tracep->chgBit(oldp+170,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_wen_o));
        tracep->chgQData(oldp+171,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
        tracep->chgBit(oldp+173,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_jump_en_o));
        tracep->chgBit(oldp+174,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isload_o));
        tracep->chgBit(oldp+175,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isstore_o));
        tracep->chgQData(oldp+176,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_inst_addr_o),64);
        tracep->chgIData(oldp+178,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o),32);
        tracep->chgBit(oldp+179,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o));
        tracep->chgQData(oldp+180,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o),64);
        tracep->chgBit(oldp+182,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o));
        tracep->chgQData(oldp+183,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o),64);
        tracep->chgQData(oldp+185,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o),64);
        tracep->chgCData(oldp+187,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o),8);
        tracep->chgQData(oldp+188,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_wdata_o),64);
        tracep->chgCData(oldp+190,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o),5);
        tracep->chgBit(oldp+191,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o));
        tracep->chgBit(oldp+192,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isload_o));
        tracep->chgBit(oldp+193,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isstore_o));
        tracep->chgQData(oldp+194,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_inst_addr_o),64);
        tracep->chgQData(oldp+196,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o),64);
        tracep->chgCData(oldp+198,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o),5);
        tracep->chgBit(oldp+199,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o));
        tracep->chgQData(oldp+200,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mstatus),64);
        tracep->chgQData(oldp+202,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mtvec),64);
        tracep->chgQData(oldp+204,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mepc),64);
        tracep->chgQData(oldp+206,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mcause),64);
        tracep->chgQData(oldp+208,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[0]),64);
        tracep->chgQData(oldp+210,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[1]),64);
        tracep->chgQData(oldp+212,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[2]),64);
        tracep->chgQData(oldp+214,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[3]),64);
        tracep->chgBit(oldp+216,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_data_hit));
        tracep->chgBit(oldp+217,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_inst));
        tracep->chgBit(oldp+218,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__store_inst));
        tracep->chgCData(oldp+219,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)),7);
        tracep->chgCData(oldp+220,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                             >> 7U))),5);
        tracep->chgCData(oldp+221,((7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+222,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+223,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+224,((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                    >> 0x19U)),7);
        tracep->chgQData(oldp+225,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),64);
        tracep->chgQData(oldp+227,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i),64);
        tracep->chgQData(oldp+229,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i),64);
        tracep->chgQData(oldp+231,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),64);
        tracep->chgQData(oldp+233,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),64);
        tracep->chgQData(oldp+235,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),64);
        tracep->chgQData(oldp+237,(VL_MODDIVS_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
        tracep->chgQData(oldp+239,(VL_MODDIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
        tracep->chgQData(oldp+241,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i),64);
        tracep->chgQData(oldp+243,(VL_DIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
        tracep->chgQData(oldp+245,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned),64);
        tracep->chgQData(oldp+247,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned),64);
        tracep->chgQData(oldp+249,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed),64);
        tracep->chgQData(oldp+251,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),64);
        tracep->chgBit(oldp+253,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
        tracep->chgBit(oldp+254,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
        tracep->chgBit(oldp+255,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
        tracep->chgQData(oldp+256,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_add),64);
        tracep->chgQData(oldp+258,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i)))),64);
        tracep->chgQData(oldp+260,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i)))),64);
        tracep->chgQData(oldp+262,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i)))),64);
        tracep->chgQData(oldp+264,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i)))),64);
        tracep->chgQData(oldp+266,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)))),64);
        tracep->chgQData(oldp+268,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp)))),64);
        tracep->chgQData(oldp+270,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp)))),64);
        tracep->chgQData(oldp+272,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i)))),64);
        tracep->chgQData(oldp+274,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned),64);
        tracep->chgQData(oldp+276,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned),64);
        tracep->chgQData(oldp+278,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_signed),64);
        tracep->chgQData(oldp+280,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset 
                                                                            >> 0x1fU))))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)))),64);
        tracep->chgIData(oldp+282,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp),32);
        tracep->chgIData(oldp+283,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp),32);
        tracep->chgIData(oldp+284,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_u_tmp),32);
        tracep->chgIData(oldp+285,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_u_tmp),32);
        tracep->chgIData(oldp+286,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_s_tmp),32);
        tracep->chgCData(oldp+287,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)),7);
        tracep->chgCData(oldp+288,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                             >> 7U))),5);
        tracep->chgCData(oldp+289,((7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+290,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+291,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                             >> 0x14U))),5);
        tracep->chgSData(oldp+292,((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                    >> 0x14U)),12);
        tracep->chgCData(oldp+293,((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                    >> 0x19U)),7);
        tracep->chgCData(oldp+294,((0x3fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                             >> 0x14U))),6);
        tracep->chgQData(oldp+295,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI),64);
        tracep->chgQData(oldp+297,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immU),64);
        tracep->chgQData(oldp+299,((((- (QData)((IData)(
                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                       >> 7U))))))),64);
        tracep->chgQData(oldp+301,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immB),64);
        tracep->chgQData(oldp+303,((((- (QData)((IData)(
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
        tracep->chgQData(oldp+305,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL),64);
        tracep->chgCData(oldp+307,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)),7);
        tracep->chgCData(oldp+308,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                             >> 7U))),5);
        tracep->chgCData(oldp+309,((7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+310,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+311,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                             >> 0x14U))),5);
        tracep->chgBit(oldp+312,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs1_id_ex_hit));
        tracep->chgBit(oldp+313,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)) 
                                   & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)) 
                                  & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))));
        tracep->chgBit(oldp+314,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)) 
                                   & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o)) 
                                  & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))));
        tracep->chgBit(oldp+315,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs2_id_ex_hit));
        tracep->chgBit(oldp+316,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)) 
                                   & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)) 
                                  & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))));
        tracep->chgBit(oldp+317,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)) 
                                   & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o)) 
                                  & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))));
    }
    tracep->chgBit(oldp+318,(vlSelf->clk));
    tracep->chgBit(oldp+319,(vlSelf->rst));
    tracep->chgQData(oldp+320,(((IData)(vlSelf->rst)
                                 ? ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready)
                                     ? vlSelf->tb__DOT__soc_inst__DOT__ram_axi_rdata_o
                                     : 0ULL) : 0ULL)),64);
    tracep->chgQData(oldp+322,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                     ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                         ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                             ? 0ULL
                                             : ((4U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                 ? 0ULL
                                                 : 
                                                ((2U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                          >> 0xcU))) 
                                                     | (1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                            >> 0xcU)))) 
                                                    | (3U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                           >> 0xcU))))
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_id_rdata_o
                                                    : 0ULL)
                                                   : 0ULL)
                                                  : 0ULL)))
                                         : 0ULL) : 0ULL)
                                 : 0ULL)),64);
    tracep->chgQData(oldp+324,(((IData)(vlSelf->rst)
                                 ? ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o))
                                     ? 0ULL : (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                                                & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o) 
                                                   == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))
                                                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                                                : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs
                                               [vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o]))
                                 : 0ULL)),64);
    tracep->chgQData(oldp+326,(((IData)(vlSelf->rst)
                                 ? ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o))
                                     ? 0ULL : (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                                                & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o) 
                                                   == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))
                                                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                                                : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs
                                               [vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o]))
                                 : 0ULL)),64);
    tracep->chgQData(oldp+328,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o),64);
    tracep->chgQData(oldp+330,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata_o),64);
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
