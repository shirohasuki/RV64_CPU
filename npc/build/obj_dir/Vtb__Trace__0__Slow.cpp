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
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->pushNamePrefix("tb ");
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->pushNamePrefix("soc_inst ");
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+1,"riscv_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+2,"rom_inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_inst ");
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+2,"inst_i", false,-1, 31,0);
    tracep->declBus(c+1,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+1,"pc_reg_pc_o", false,-1, 31,0);
    tracep->declBus(c+1,"if_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+2,"if_inst_o", false,-1, 31,0);
    tracep->declBus(c+3,"if_id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+4,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+5,"id_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+6,"id_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+4,"id_inst_o", false,-1, 31,0);
    tracep->declBus(c+3,"id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+70,"id_op1_o", false,-1, 31,0);
    tracep->declBus(c+71,"id_op2_o", false,-1, 31,0);
    tracep->declBus(c+7,"id_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+8,"id_reg_wen", false,-1);
    tracep->declBus(c+72,"regs_rs1_rdata_o", false,-1, 31,0);
    tracep->declBus(c+73,"regs_rs2_rdata_o", false,-1, 31,0);
    tracep->declBus(c+9,"id_ex_inst_o", false,-1, 31,0);
    tracep->declBus(c+10,"id_ex_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+11,"id_ex_op1_o", false,-1, 31,0);
    tracep->declBus(c+12,"id_ex_op2_o", false,-1, 31,0);
    tracep->declBus(c+13,"id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+14,"id_ex_reg_wen", false,-1);
    tracep->declBus(c+15,"ex_rd_data_o", false,-1, 31,0);
    tracep->declBus(c+16,"ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+17,"ex_reg_wen_o", false,-1);
    tracep->pushNamePrefix("ex_inst ");
    tracep->declBus(c+9,"inst_i", false,-1, 31,0);
    tracep->declBus(c+10,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+11,"op1_i", false,-1, 31,0);
    tracep->declBus(c+12,"op2_i", false,-1, 31,0);
    tracep->declBus(c+13,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+14,"reg_wen_i", false,-1);
    tracep->declBus(c+15,"rd_wdata_o", false,-1, 31,0);
    tracep->declBus(c+16,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+17,"reg_wen_o", false,-1);
    tracep->declBus(c+18,"jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+19,"jump_en_o", false,-1);
    tracep->declBit(c+74,"hold_flag_o", false,-1);
    tracep->declBus(c+20,"opcode", false,-1, 6,0);
    tracep->declBus(c+21,"rd", false,-1, 4,0);
    tracep->declBus(c+22,"func3", false,-1, 2,0);
    tracep->declBus(c+23,"rs1", false,-1, 4,0);
    tracep->declBus(c+24,"rs2", false,-1, 4,0);
    tracep->declBus(c+25,"func7", false,-1, 6,0);
    tracep->declBus(c+26,"immB", false,-1, 31,0);
    tracep->declBit(c+27,"op1_i_equal_op2_i", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_ex_inst ");
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+4,"inst_i", false,-1, 31,0);
    tracep->declBus(c+3,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+70,"op1_i", false,-1, 31,0);
    tracep->declBus(c+71,"op2_i", false,-1, 31,0);
    tracep->declBus(c+7,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+8,"reg_wen_i", false,-1);
    tracep->declBus(c+9,"inst_o", false,-1, 31,0);
    tracep->declBus(c+10,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+11,"op1_o", false,-1, 31,0);
    tracep->declBus(c+12,"op2_o", false,-1, 31,0);
    tracep->declBus(c+13,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+14,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+75,"DW", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+76,"set_data", false,-1, 31,0);
    tracep->declBus(c+4,"data_i", false,-1, 31,0);
    tracep->declBus(c+9,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+75,"DW", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+77,"set_data", false,-1, 31,0);
    tracep->declBus(c+3,"data_i", false,-1, 31,0);
    tracep->declBus(c+10,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+75,"DW", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+77,"set_data", false,-1, 31,0);
    tracep->declBus(c+70,"data_i", false,-1, 31,0);
    tracep->declBus(c+11,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+75,"DW", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+77,"set_data", false,-1, 31,0);
    tracep->declBus(c+71,"data_i", false,-1, 31,0);
    tracep->declBus(c+12,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+78,"DW", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+79,"set_data", false,-1, 4,0);
    tracep->declBus(c+7,"data_i", false,-1, 4,0);
    tracep->declBus(c+13,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+80,"DW", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+74,"set_data", false,-1, 0,0);
    tracep->declBus(c+8,"data_i", false,-1, 0,0);
    tracep->declBus(c+14,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_inst ");
    tracep->declBus(c+4,"inst_i", false,-1, 31,0);
    tracep->declBus(c+3,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+72,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+73,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+5,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+6,"rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+4,"inst_o", false,-1, 31,0);
    tracep->declBus(c+3,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+70,"op1_o", false,-1, 31,0);
    tracep->declBus(c+71,"op2_o", false,-1, 31,0);
    tracep->declBus(c+7,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+8,"reg_wen", false,-1);
    tracep->declBus(c+28,"opcode", false,-1, 6,0);
    tracep->declBus(c+29,"rd", false,-1, 4,0);
    tracep->declBus(c+30,"func3", false,-1, 2,0);
    tracep->declBus(c+31,"rs1", false,-1, 4,0);
    tracep->declBus(c+32,"rs2", false,-1, 4,0);
    tracep->declBus(c+33,"func7", false,-1, 6,0);
    tracep->declBus(c+34,"imm", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_inst ");
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+2,"inst_i", false,-1, 31,0);
    tracep->declBus(c+1,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+3,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+4,"inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+75,"DW", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+76,"set_data", false,-1, 31,0);
    tracep->declBus(c+2,"data_i", false,-1, 31,0);
    tracep->declBus(c+4,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+75,"DW", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+77,"set_data", false,-1, 31,0);
    tracep->declBus(c+1,"data_i", false,-1, 31,0);
    tracep->declBus(c+3,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_fetch_inst ");
    tracep->declBus(c+1,"pc_addr_i", false,-1, 31,0);
    tracep->declBus(c+2,"rom2if_inst_i", false,-1, 31,0);
    tracep->declBus(c+1,"if2rom_addr_o", false,-1, 31,0);
    tracep->declBus(c+1,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+2,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBus(c+1,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_inst ");
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+5,"rs1_raddr_i", false,-1, 4,0);
    tracep->declBus(c+6,"rs2_raddr_i", false,-1, 4,0);
    tracep->declBus(c+72,"rs1_rdata_o", false,-1, 31,0);
    tracep->declBus(c+73,"rs2_rdata_o", false,-1, 31,0);
    tracep->declBus(c+16,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+15,"reg_wdata_i", false,-1, 31,0);
    tracep->declBit(c+17,"reg_wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+35+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+67,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("rom_inst ");
    tracep->declBus(c+1,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+2,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtb___024root__trace_init_top(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_init_top\n"); );
    // Body
    Vtb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
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
    tracep->fullIData(oldp+1,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o),32);
    tracep->fullIData(oldp+2,(vlSelf->tb__DOT__soc_inst__DOT__rom_inst__DOT__rom_mem
                              [(0xfffU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
                                          >> 2U))]),32);
    tracep->fullIData(oldp+3,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o),32);
    tracep->fullIData(oldp+4,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o),32);
    tracep->fullCData(oldp+5,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o),5);
    tracep->fullCData(oldp+6,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o),5);
    tracep->fullCData(oldp+7,((0x1fU & ((0x13U == (0x7fU 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))
                                         ? ((0U == 
                                             (7U & 
                                              (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                               >> 0xcU)))
                                             ? (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                >> 7U)
                                             : 0U) : 
                                        ((0x33U == 
                                          (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))
                                          ? ((0U == 
                                              (7U & 
                                               (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                >> 0xcU)))
                                              ? (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                 >> 7U)
                                              : 0U)
                                          : 0U)))),5);
    tracep->fullBit(oldp+8,(((0x13U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))
                              ? (0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                              >> 0xcU)))
                              : (0x33U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)))));
    tracep->fullIData(oldp+9,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o),32);
    tracep->fullIData(oldp+10,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o),32);
    tracep->fullIData(oldp+11,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o),32);
    tracep->fullIData(oldp+12,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o),32);
    tracep->fullCData(oldp+13,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+14,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen));
    tracep->fullIData(oldp+15,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o),32);
    tracep->fullCData(oldp+16,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o),5);
    tracep->fullBit(oldp+17,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o));
    tracep->fullIData(oldp+18,(((0x13U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o))
                                 ? 0U : ((0x33U == 
                                          (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o))
                                          ? 0U : ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o))
                                                   ? 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                        >> 0xcU)))
                                                    ? 
                                                   ((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o 
                                                     + 
                                                     (((- (IData)(
                                                                  (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0x800U 
                                                          & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                                  >> 7U)))))) 
                                                    & (- (IData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i))))
                                                    : 0U)
                                                   : 0U)))),32);
    tracep->fullBit(oldp+19,(((0x13U != (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                              & ((0x33U != (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                                 & (IData)(((0x1063U 
                                             == (0x707fU 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                                            & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i))))))));
    tracep->fullCData(oldp+20,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)),7);
    tracep->fullCData(oldp+21,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+22,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+23,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+24,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+25,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                >> 0x19U)),7);
    tracep->fullIData(oldp+26,((((- (IData)((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0x800U 
                                              & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                 << 4U)) 
                                             | ((0x7e0U 
                                                 & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                      >> 7U)))))),32);
    tracep->fullBit(oldp+27,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
    tracep->fullCData(oldp+28,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)),7);
    tracep->fullCData(oldp+29,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+30,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+31,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+32,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+33,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                >> 0x19U)),7);
    tracep->fullSData(oldp+34,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                >> 0x14U)),12);
    tracep->fullIData(oldp+35,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0]),32);
    tracep->fullIData(oldp+36,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[1]),32);
    tracep->fullIData(oldp+37,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[2]),32);
    tracep->fullIData(oldp+38,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[3]),32);
    tracep->fullIData(oldp+39,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[4]),32);
    tracep->fullIData(oldp+40,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[5]),32);
    tracep->fullIData(oldp+41,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[6]),32);
    tracep->fullIData(oldp+42,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[7]),32);
    tracep->fullIData(oldp+43,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[8]),32);
    tracep->fullIData(oldp+44,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[9]),32);
    tracep->fullIData(oldp+45,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[10]),32);
    tracep->fullIData(oldp+46,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[11]),32);
    tracep->fullIData(oldp+47,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[12]),32);
    tracep->fullIData(oldp+48,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[13]),32);
    tracep->fullIData(oldp+49,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[14]),32);
    tracep->fullIData(oldp+50,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[15]),32);
    tracep->fullIData(oldp+51,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[16]),32);
    tracep->fullIData(oldp+52,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[17]),32);
    tracep->fullIData(oldp+53,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[18]),32);
    tracep->fullIData(oldp+54,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[19]),32);
    tracep->fullIData(oldp+55,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[20]),32);
    tracep->fullIData(oldp+56,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[21]),32);
    tracep->fullIData(oldp+57,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[22]),32);
    tracep->fullIData(oldp+58,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[23]),32);
    tracep->fullIData(oldp+59,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[24]),32);
    tracep->fullIData(oldp+60,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[25]),32);
    tracep->fullIData(oldp+61,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[26]),32);
    tracep->fullIData(oldp+62,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[27]),32);
    tracep->fullIData(oldp+63,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[28]),32);
    tracep->fullIData(oldp+64,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[29]),32);
    tracep->fullIData(oldp+65,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[30]),32);
    tracep->fullIData(oldp+66,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[31]),32);
    tracep->fullIData(oldp+67,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullBit(oldp+68,(vlSelf->clk));
    tracep->fullBit(oldp+69,(vlSelf->rst));
    tracep->fullIData(oldp+70,(((0x13U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))
                                 ? ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
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
                                               : ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))
                                                   ? 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                        >> 0xcU)))
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o
                                                    : 0U)
                                                   : 0U)))),32);
    tracep->fullIData(oldp+71,(((0x13U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))
                                 ? ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
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
                                                   ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o
                                                   : 0U)
                                               : ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o))
                                                   ? 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                        >> 0xcU)))
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o
                                                    : 0U)
                                                   : 0U)))),32);
    tracep->fullIData(oldp+72,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o),32);
    tracep->fullIData(oldp+73,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o),32);
    tracep->fullBit(oldp+74,(0U));
    tracep->fullIData(oldp+75,(0x20U),32);
    tracep->fullIData(oldp+76,(0x13U),32);
    tracep->fullIData(oldp+77,(0U),32);
    tracep->fullIData(oldp+78,(5U),32);
    tracep->fullCData(oldp+79,(0U),5);
    tracep->fullIData(oldp+80,(1U),32);
}
