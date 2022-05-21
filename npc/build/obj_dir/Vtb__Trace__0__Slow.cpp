// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


VL_ATTR_COLD void Vtb___024root__trace_init_sub__TOP__0(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->pushNamePrefix("soc_inst ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"riscv_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+4,"rom_inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_inst ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+4,"inst_i", false,-1, 31,0);
    tracep->declBus(c+3,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+3,"pc_reg_pc_o", false,-1, 31,0);
    tracep->declBus(c+3,"if_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+4,"if_inst_o", false,-1, 31,0);
    tracep->declBus(c+5,"if_id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+6,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+7,"id_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+8,"id_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+6,"id_inst_o", false,-1, 31,0);
    tracep->declBus(c+5,"id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+9,"id_op1_o", false,-1, 31,0);
    tracep->declBus(c+10,"id_op2_o", false,-1, 31,0);
    tracep->declBus(c+11,"id_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+12,"id_reg_wen", false,-1);
    tracep->declBus(c+13,"regs_rs1_rdata_o", false,-1, 31,0);
    tracep->declBus(c+14,"regs_rs2_rdata_o", false,-1, 31,0);
    tracep->declBus(c+15,"id_ex_inst_o", false,-1, 31,0);
    tracep->declBus(c+16,"id_ex_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+17,"id_ex_op1_o", false,-1, 31,0);
    tracep->declBus(c+18,"id_ex_op2_o", false,-1, 31,0);
    tracep->declBus(c+19,"id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+20,"id_ex_reg_wen", false,-1);
    tracep->declBus(c+21,"ex_rd_data_o", false,-1, 31,0);
    tracep->declBus(c+22,"ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+23,"ex_reg_wen_o", false,-1);
    tracep->pushNamePrefix("ex_inst ");
    tracep->declBus(c+4,"inst_i", false,-1, 31,0);
    tracep->declBus(c+15,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+17,"op1_i", false,-1, 31,0);
    tracep->declBus(c+18,"op2_i", false,-1, 31,0);
    tracep->declBus(c+19,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+20,"reg_wen_i", false,-1);
    tracep->declBus(c+21,"rd_wdata_o", false,-1, 31,0);
    tracep->declBus(c+22,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+23,"reg_wen_o", false,-1);
    tracep->declBus(c+24,"opcode", false,-1, 6,0);
    tracep->declBus(c+25,"rd", false,-1, 4,0);
    tracep->declBus(c+26,"func3", false,-1, 2,0);
    tracep->declBus(c+27,"rs1", false,-1, 4,0);
    tracep->declBus(c+28,"rs2", false,-1, 4,0);
    tracep->declBus(c+29,"imm", false,-1, 11,0);
    tracep->declBus(c+30,"func7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_ex_inst ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+6,"inst_i", false,-1, 31,0);
    tracep->declBus(c+5,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+9,"op1_i", false,-1, 31,0);
    tracep->declBus(c+10,"op2_i", false,-1, 31,0);
    tracep->declBus(c+11,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+12,"reg_wen_i", false,-1);
    tracep->declBus(c+15,"inst_o", false,-1, 31,0);
    tracep->declBus(c+16,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+17,"op1_o", false,-1, 31,0);
    tracep->declBus(c+18,"op2_o", false,-1, 31,0);
    tracep->declBus(c+19,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+20,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+71,"DW", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+72,"set_data", false,-1, 31,0);
    tracep->declBus(c+6,"data_i", false,-1, 31,0);
    tracep->declBus(c+15,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+71,"DW", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+73,"set_data", false,-1, 31,0);
    tracep->declBus(c+5,"data_i", false,-1, 31,0);
    tracep->declBus(c+16,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+71,"DW", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+73,"set_data", false,-1, 31,0);
    tracep->declBus(c+9,"data_i", false,-1, 31,0);
    tracep->declBus(c+17,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+71,"DW", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+73,"set_data", false,-1, 31,0);
    tracep->declBus(c+10,"data_i", false,-1, 31,0);
    tracep->declBus(c+18,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+74,"DW", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+75,"set_data", false,-1, 4,0);
    tracep->declBus(c+11,"data_i", false,-1, 4,0);
    tracep->declBus(c+19,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+76,"DW", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+77,"set_data", false,-1, 0,0);
    tracep->declBus(c+12,"data_i", false,-1, 0,0);
    tracep->declBus(c+20,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_inst ");
    tracep->declBus(c+6,"inst_i", false,-1, 31,0);
    tracep->declBus(c+5,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+13,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+14,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+7,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+8,"rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+6,"inst_o", false,-1, 31,0);
    tracep->declBus(c+5,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+9,"op1_o", false,-1, 31,0);
    tracep->declBus(c+10,"op2_o", false,-1, 31,0);
    tracep->declBus(c+11,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+12,"reg_wen", false,-1);
    tracep->declBus(c+31,"opcode", false,-1, 6,0);
    tracep->declBus(c+32,"rd", false,-1, 4,0);
    tracep->declBus(c+33,"func3", false,-1, 2,0);
    tracep->declBus(c+34,"rs1", false,-1, 4,0);
    tracep->declBus(c+35,"rs2", false,-1, 4,0);
    tracep->declBus(c+36,"func7", false,-1, 6,0);
    tracep->declBus(c+37,"imm", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_inst ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+4,"inst_i", false,-1, 31,0);
    tracep->declBus(c+3,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+5,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+6,"inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+71,"DW", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+72,"set_data", false,-1, 31,0);
    tracep->declBus(c+4,"data_i", false,-1, 31,0);
    tracep->declBus(c+6,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+71,"DW", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+73,"set_data", false,-1, 31,0);
    tracep->declBus(c+3,"data_i", false,-1, 31,0);
    tracep->declBus(c+5,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_fetch_inst ");
    tracep->declBus(c+3,"pc_addr_i", false,-1, 31,0);
    tracep->declBus(c+4,"rom2if_inst_i", false,-1, 31,0);
    tracep->declBus(c+3,"if2rom_addr_o", false,-1, 31,0);
    tracep->declBus(c+3,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+4,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+3,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_inst ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+7,"rs1_raddr_i", false,-1, 4,0);
    tracep->declBus(c+8,"rs2_raddr_i", false,-1, 4,0);
    tracep->declBus(c+13,"rs1_rdata_o", false,-1, 31,0);
    tracep->declBus(c+14,"rs2_rdata_o", false,-1, 31,0);
    tracep->declBus(c+22,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+21,"reg_wdata_i", false,-1, 31,0);
    tracep->declBit(c+23,"reg_wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+38+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+70,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("rom_inst ");
    tracep->declBus(c+3,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+4,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtb___024root__trace_init_sub__TOP____024unit__0(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+78,"numcycles", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb___024root__trace_init_top(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_top\n"); );
    // Body
    Vtb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("$unit ");
    Vtb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb___024root__trace_register(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb___024root__trace_full_sub_0(Vtb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_top_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vtb___024root__trace_full_sub_0(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->tb__DOT__clk));
    tracep->fullBit(oldp+2,(vlSelf->tb__DOT__rst));
    tracep->fullIData(oldp+3,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o),32);
    tracep->fullIData(oldp+4,(vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o),32);
    tracep->fullIData(oldp+5,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o),32);
    tracep->fullIData(oldp+6,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o),32);
    tracep->fullCData(oldp+7,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o),5);
    tracep->fullCData(oldp+8,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o),5);
    tracep->fullIData(oldp+9,(((0x13U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))
                                ? ((1U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                 >> 0xcU)))
                                    ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o
                                    : 0U) : ((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))
                                              ? ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                      >> 0xcU)))
                                                  ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o
                                                  : 0U)
                                              : 0U))),32);
    tracep->fullIData(oldp+10,(((0x13U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))
                                 ? ((1U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                  >> 0xcU)))
                                     ? (((- (IData)(
                                                    (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 0x14U))
                                     : 0U) : ((0x33U 
                                               == (0x7fU 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))
                                               ? ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((IData)(vlSelf->tb__DOT__rst)
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o))
                                                     ? 0U
                                                     : 
                                                    (((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o) 
                                                      & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o) 
                                                         == (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o)))
                                                      ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o
                                                      : 
                                                     vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                                                     [vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o]))
                                                    : 0U)
                                                   : 0U)
                                               : 0U))),32);
    tracep->fullCData(oldp+11,((0x1fU & ((0x13U == 
                                          (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))
                                          ? ((1U == 
                                              (7U & 
                                               (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                >> 0xcU)))
                                              ? (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                 >> 7U)
                                              : 0U)
                                          : ((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))
                                              ? ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                      >> 0xcU)))
                                                  ? 
                                                 (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                  >> 7U)
                                                  : 0U)
                                              : 0U)))),5);
    tracep->fullBit(oldp+12,(((0x13U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))
                               ? (1U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                               >> 0xcU)))
                               : (IData)((0x33U == 
                                          (0x707fU 
                                           & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))))));
    tracep->fullIData(oldp+13,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o),32);
    tracep->fullIData(oldp+14,(((IData)(vlSelf->tb__DOT__rst)
                                 ? ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o))
                                     ? 0U : (((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o) 
                                              & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o) 
                                                 == (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o)))
                                              ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o
                                              : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                                             [vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o]))
                                 : 0U)),32);
    tracep->fullIData(oldp+15,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o),32);
    tracep->fullIData(oldp+16,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o),32);
    tracep->fullIData(oldp+17,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o),32);
    tracep->fullIData(oldp+18,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o),32);
    tracep->fullCData(oldp+19,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+20,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen));
    tracep->fullIData(oldp+21,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o),32);
    tracep->fullCData(oldp+22,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o),5);
    tracep->fullBit(oldp+23,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o));
    tracep->fullCData(oldp+24,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o)),7);
    tracep->fullCData(oldp+25,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+26,((7U & (vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+27,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+28,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o 
                                         >> 0x14U))),5);
    tracep->fullSData(oldp+29,((vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o 
                                >> 0x14U)),12);
    tracep->fullCData(oldp+30,((vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o 
                                >> 0x19U)),7);
    tracep->fullCData(oldp+31,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)),7);
    tracep->fullCData(oldp+32,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+33,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+34,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+35,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+36,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                >> 0x19U)),7);
    tracep->fullSData(oldp+37,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                >> 0x14U)),12);
    tracep->fullIData(oldp+38,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0]),32);
    tracep->fullIData(oldp+39,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[1]),32);
    tracep->fullIData(oldp+40,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[2]),32);
    tracep->fullIData(oldp+41,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[3]),32);
    tracep->fullIData(oldp+42,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[4]),32);
    tracep->fullIData(oldp+43,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[5]),32);
    tracep->fullIData(oldp+44,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[6]),32);
    tracep->fullIData(oldp+45,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[7]),32);
    tracep->fullIData(oldp+46,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[8]),32);
    tracep->fullIData(oldp+47,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[9]),32);
    tracep->fullIData(oldp+48,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[10]),32);
    tracep->fullIData(oldp+49,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[11]),32);
    tracep->fullIData(oldp+50,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[12]),32);
    tracep->fullIData(oldp+51,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[13]),32);
    tracep->fullIData(oldp+52,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[14]),32);
    tracep->fullIData(oldp+53,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[15]),32);
    tracep->fullIData(oldp+54,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[16]),32);
    tracep->fullIData(oldp+55,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[17]),32);
    tracep->fullIData(oldp+56,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[18]),32);
    tracep->fullIData(oldp+57,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[19]),32);
    tracep->fullIData(oldp+58,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[20]),32);
    tracep->fullIData(oldp+59,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[21]),32);
    tracep->fullIData(oldp+60,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[22]),32);
    tracep->fullIData(oldp+61,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[23]),32);
    tracep->fullIData(oldp+62,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[24]),32);
    tracep->fullIData(oldp+63,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[25]),32);
    tracep->fullIData(oldp+64,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[26]),32);
    tracep->fullIData(oldp+65,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[27]),32);
    tracep->fullIData(oldp+66,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[28]),32);
    tracep->fullIData(oldp+67,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[29]),32);
    tracep->fullIData(oldp+68,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[30]),32);
    tracep->fullIData(oldp+69,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[31]),32);
    tracep->fullIData(oldp+70,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullIData(oldp+71,(0x20U),32);
    tracep->fullIData(oldp+72,(0x13U),32);
    tracep->fullIData(oldp+73,(0U),32);
    tracep->fullIData(oldp+74,(5U),32);
    tracep->fullCData(oldp+75,(0U),5);
    tracep->fullIData(oldp+76,(1U),32);
    tracep->fullBit(oldp+77,(0U));
    tracep->fullIData(oldp+78,(vlSymsp->TOP____024unit.__PVT__numcycles),32);
}
