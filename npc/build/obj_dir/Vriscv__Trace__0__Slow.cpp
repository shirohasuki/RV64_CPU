// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv__Syms.h"


VL_ATTR_COLD void Vriscv___024root__trace_init_sub__TOP__0(Vriscv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+66,"inst_i", false,-1, 31,0);
    tracep->declBus(c+67,"inst_addr_o", false,-1, 31,0);
    tracep->pushNamePrefix("riscv ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+66,"inst_i", false,-1, 31,0);
    tracep->declBus(c+67,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+1,"pc_reg_pc_o", false,-1, 31,0);
    tracep->declBus(c+1,"if_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+66,"if_inst_o", false,-1, 31,0);
    tracep->declBus(c+2,"if_id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+3,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+4,"id_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+5,"id_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+3,"id_inst_o", false,-1, 31,0);
    tracep->declBus(c+2,"id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+68,"id_op1_o", false,-1, 31,0);
    tracep->declBus(c+69,"id_op2_o", false,-1, 31,0);
    tracep->declBus(c+6,"id_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+7,"id_reg_wen", false,-1);
    tracep->declBus(c+70,"regs_rs1_rdata_o", false,-1, 31,0);
    tracep->declBus(c+71,"regs_rs2_rdata_o", false,-1, 31,0);
    tracep->declBus(c+8,"id_ex_inst_o", false,-1, 31,0);
    tracep->declBus(c+9,"id_ex_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+10,"id_ex_op1_o", false,-1, 31,0);
    tracep->declBus(c+11,"id_ex_op2_o", false,-1, 31,0);
    tracep->declBus(c+12,"id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+13,"id_ex_reg_wen", false,-1);
    tracep->declBus(c+14,"ex_rd_data_o", false,-1, 31,0);
    tracep->declBus(c+15,"ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+16,"ex_reg_wen_o", false,-1);
    tracep->pushNamePrefix("ex_inst ");
    tracep->declBus(c+8,"inst_i", false,-1, 31,0);
    tracep->declBus(c+9,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+10,"op1_i", false,-1, 31,0);
    tracep->declBus(c+11,"op2_i", false,-1, 31,0);
    tracep->declBus(c+12,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+13,"reg_wen_i", false,-1);
    tracep->declBus(c+14,"rd_wdata_o", false,-1, 31,0);
    tracep->declBus(c+15,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+16,"reg_wen_o", false,-1);
    tracep->declBus(c+17,"opcode", false,-1, 6,0);
    tracep->declBus(c+18,"rd", false,-1, 4,0);
    tracep->declBus(c+19,"func3", false,-1, 2,0);
    tracep->declBus(c+20,"rs1", false,-1, 4,0);
    tracep->declBus(c+21,"rs2", false,-1, 4,0);
    tracep->declBus(c+22,"imm", false,-1, 11,0);
    tracep->declBus(c+23,"func7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_ex_inst ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+3,"inst_i", false,-1, 31,0);
    tracep->declBus(c+2,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+68,"op1_i", false,-1, 31,0);
    tracep->declBus(c+69,"op2_i", false,-1, 31,0);
    tracep->declBus(c+6,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+7,"reg_wen_i", false,-1);
    tracep->declBus(c+8,"inst_o", false,-1, 31,0);
    tracep->declBus(c+9,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+10,"op1_o", false,-1, 31,0);
    tracep->declBus(c+11,"op2_o", false,-1, 31,0);
    tracep->declBus(c+12,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+13,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+72,"DW", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+73,"set_data", false,-1, 31,0);
    tracep->declBus(c+3,"data_i", false,-1, 31,0);
    tracep->declBus(c+8,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+72,"DW", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+74,"set_data", false,-1, 31,0);
    tracep->declBus(c+2,"data_i", false,-1, 31,0);
    tracep->declBus(c+9,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+72,"DW", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+74,"set_data", false,-1, 31,0);
    tracep->declBus(c+68,"data_i", false,-1, 31,0);
    tracep->declBus(c+10,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+72,"DW", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+74,"set_data", false,-1, 31,0);
    tracep->declBus(c+69,"data_i", false,-1, 31,0);
    tracep->declBus(c+11,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+75,"DW", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+76,"set_data", false,-1, 4,0);
    tracep->declBus(c+6,"data_i", false,-1, 4,0);
    tracep->declBus(c+12,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+77,"DW", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+78,"set_data", false,-1, 0,0);
    tracep->declBus(c+7,"data_i", false,-1, 0,0);
    tracep->declBus(c+13,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_inst ");
    tracep->declBus(c+3,"inst_i", false,-1, 31,0);
    tracep->declBus(c+2,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+70,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+71,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+4,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+5,"rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+3,"inst_o", false,-1, 31,0);
    tracep->declBus(c+2,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+68,"op1_o", false,-1, 31,0);
    tracep->declBus(c+69,"op2_o", false,-1, 31,0);
    tracep->declBus(c+6,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+7,"reg_wen", false,-1);
    tracep->declBus(c+24,"opcode", false,-1, 6,0);
    tracep->declBus(c+25,"rd", false,-1, 4,0);
    tracep->declBus(c+26,"func3", false,-1, 2,0);
    tracep->declBus(c+27,"rs1", false,-1, 4,0);
    tracep->declBus(c+28,"rs2", false,-1, 4,0);
    tracep->declBus(c+29,"func7", false,-1, 6,0);
    tracep->declBus(c+30,"imm", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_inst ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+66,"inst_i", false,-1, 31,0);
    tracep->declBus(c+1,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+2,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+3,"inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+72,"DW", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+73,"set_data", false,-1, 31,0);
    tracep->declBus(c+66,"data_i", false,-1, 31,0);
    tracep->declBus(c+3,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+72,"DW", false,-1, 31,0);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+74,"set_data", false,-1, 31,0);
    tracep->declBus(c+1,"data_i", false,-1, 31,0);
    tracep->declBus(c+2,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_fetch_inst ");
    tracep->declBus(c+1,"pc_addr_i", false,-1, 31,0);
    tracep->declBus(c+66,"rom2if_inst_i", false,-1, 31,0);
    tracep->declBus(c+67,"if2rom_addr_o", false,-1, 31,0);
    tracep->declBus(c+1,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+66,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBus(c+1,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_inst ");
    tracep->declBit(c+64,"clk", false,-1);
    tracep->declBit(c+65,"rst", false,-1);
    tracep->declBus(c+4,"rs1_raddr_i", false,-1, 4,0);
    tracep->declBus(c+5,"rs2_raddr_i", false,-1, 4,0);
    tracep->declBus(c+70,"rs1_rdata_o", false,-1, 31,0);
    tracep->declBus(c+71,"rs2_rdata_o", false,-1, 31,0);
    tracep->declBus(c+15,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+14,"reg_wdata_i", false,-1, 31,0);
    tracep->declBit(c+16,"reg_wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+31+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+63,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vriscv___024root__trace_init_top(Vriscv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_init_top\n"); );
    // Body
    Vriscv___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vriscv___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vriscv___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vriscv___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vriscv___024root__trace_register(Vriscv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vriscv___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vriscv___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vriscv___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vriscv___024root__trace_full_sub_0(Vriscv___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_full_top_0\n"); );
    // Init
    Vriscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv___024root*>(voidSelf);
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vriscv___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vriscv___024root__trace_full_sub_0(Vriscv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->riscv__DOT__pc_reg_pc_o),32);
    tracep->fullIData(oldp+2,(vlSelf->riscv__DOT__if_id_inst_addr_o),32);
    tracep->fullIData(oldp+3,(vlSelf->riscv__DOT__if_id_inst_o),32);
    tracep->fullCData(oldp+4,(vlSelf->riscv__DOT__id_rs1_addr_o),5);
    tracep->fullCData(oldp+5,(vlSelf->riscv__DOT__id_rs2_addr_o),5);
    tracep->fullCData(oldp+6,((0x1fU & ((0x13U == (0x7fU 
                                                   & vlSelf->riscv__DOT__if_id_inst_o))
                                         ? ((0U == 
                                             (7U & 
                                              (vlSelf->riscv__DOT__if_id_inst_o 
                                               >> 0xcU)))
                                             ? (vlSelf->riscv__DOT__if_id_inst_o 
                                                >> 7U)
                                             : 0U) : 
                                        ((0x33U == 
                                          (0x7fU & vlSelf->riscv__DOT__if_id_inst_o))
                                          ? ((0U == 
                                              (7U & 
                                               (vlSelf->riscv__DOT__if_id_inst_o 
                                                >> 0xcU)))
                                              ? (vlSelf->riscv__DOT__if_id_inst_o 
                                                 >> 7U)
                                              : 0U)
                                          : 0U)))),5);
    tracep->fullBit(oldp+7,(((0x13U == (0x7fU & vlSelf->riscv__DOT__if_id_inst_o))
                              ? (0U == (7U & (vlSelf->riscv__DOT__if_id_inst_o 
                                              >> 0xcU)))
                              : (0x33U == (0x7fU & vlSelf->riscv__DOT__if_id_inst_o)))));
    tracep->fullIData(oldp+8,(vlSelf->riscv__DOT__id_ex_inst_o),32);
    tracep->fullIData(oldp+9,(vlSelf->riscv__DOT__id_ex_inst_addr_o),32);
    tracep->fullIData(oldp+10,(vlSelf->riscv__DOT__id_ex_op1_o),32);
    tracep->fullIData(oldp+11,(vlSelf->riscv__DOT__id_ex_op2_o),32);
    tracep->fullCData(oldp+12,(vlSelf->riscv__DOT__id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+13,(vlSelf->riscv__DOT__id_ex_reg_wen));
    tracep->fullIData(oldp+14,(vlSelf->riscv__DOT__ex_rd_data_o),32);
    tracep->fullCData(oldp+15,(vlSelf->riscv__DOT__ex_rd_addr_o),5);
    tracep->fullBit(oldp+16,(vlSelf->riscv__DOT__ex_reg_wen_o));
    tracep->fullCData(oldp+17,((0x7fU & vlSelf->riscv__DOT__id_ex_inst_o)),7);
    tracep->fullCData(oldp+18,((0x1fU & (vlSelf->riscv__DOT__id_ex_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+19,((7U & (vlSelf->riscv__DOT__id_ex_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+20,((0x1fU & (vlSelf->riscv__DOT__id_ex_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+21,((0x1fU & (vlSelf->riscv__DOT__id_ex_inst_o 
                                         >> 0x14U))),5);
    tracep->fullSData(oldp+22,((vlSelf->riscv__DOT__id_ex_inst_o 
                                >> 0x14U)),12);
    tracep->fullCData(oldp+23,((vlSelf->riscv__DOT__id_ex_inst_o 
                                >> 0x19U)),7);
    tracep->fullCData(oldp+24,((0x7fU & vlSelf->riscv__DOT__if_id_inst_o)),7);
    tracep->fullCData(oldp+25,((0x1fU & (vlSelf->riscv__DOT__if_id_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+26,((7U & (vlSelf->riscv__DOT__if_id_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+27,((0x1fU & (vlSelf->riscv__DOT__if_id_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+28,((0x1fU & (vlSelf->riscv__DOT__if_id_inst_o 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+29,((vlSelf->riscv__DOT__if_id_inst_o 
                                >> 0x19U)),7);
    tracep->fullSData(oldp+30,((vlSelf->riscv__DOT__if_id_inst_o 
                                >> 0x14U)),12);
    tracep->fullIData(oldp+31,(vlSelf->riscv__DOT__regs_inst__DOT__regs[0]),32);
    tracep->fullIData(oldp+32,(vlSelf->riscv__DOT__regs_inst__DOT__regs[1]),32);
    tracep->fullIData(oldp+33,(vlSelf->riscv__DOT__regs_inst__DOT__regs[2]),32);
    tracep->fullIData(oldp+34,(vlSelf->riscv__DOT__regs_inst__DOT__regs[3]),32);
    tracep->fullIData(oldp+35,(vlSelf->riscv__DOT__regs_inst__DOT__regs[4]),32);
    tracep->fullIData(oldp+36,(vlSelf->riscv__DOT__regs_inst__DOT__regs[5]),32);
    tracep->fullIData(oldp+37,(vlSelf->riscv__DOT__regs_inst__DOT__regs[6]),32);
    tracep->fullIData(oldp+38,(vlSelf->riscv__DOT__regs_inst__DOT__regs[7]),32);
    tracep->fullIData(oldp+39,(vlSelf->riscv__DOT__regs_inst__DOT__regs[8]),32);
    tracep->fullIData(oldp+40,(vlSelf->riscv__DOT__regs_inst__DOT__regs[9]),32);
    tracep->fullIData(oldp+41,(vlSelf->riscv__DOT__regs_inst__DOT__regs[10]),32);
    tracep->fullIData(oldp+42,(vlSelf->riscv__DOT__regs_inst__DOT__regs[11]),32);
    tracep->fullIData(oldp+43,(vlSelf->riscv__DOT__regs_inst__DOT__regs[12]),32);
    tracep->fullIData(oldp+44,(vlSelf->riscv__DOT__regs_inst__DOT__regs[13]),32);
    tracep->fullIData(oldp+45,(vlSelf->riscv__DOT__regs_inst__DOT__regs[14]),32);
    tracep->fullIData(oldp+46,(vlSelf->riscv__DOT__regs_inst__DOT__regs[15]),32);
    tracep->fullIData(oldp+47,(vlSelf->riscv__DOT__regs_inst__DOT__regs[16]),32);
    tracep->fullIData(oldp+48,(vlSelf->riscv__DOT__regs_inst__DOT__regs[17]),32);
    tracep->fullIData(oldp+49,(vlSelf->riscv__DOT__regs_inst__DOT__regs[18]),32);
    tracep->fullIData(oldp+50,(vlSelf->riscv__DOT__regs_inst__DOT__regs[19]),32);
    tracep->fullIData(oldp+51,(vlSelf->riscv__DOT__regs_inst__DOT__regs[20]),32);
    tracep->fullIData(oldp+52,(vlSelf->riscv__DOT__regs_inst__DOT__regs[21]),32);
    tracep->fullIData(oldp+53,(vlSelf->riscv__DOT__regs_inst__DOT__regs[22]),32);
    tracep->fullIData(oldp+54,(vlSelf->riscv__DOT__regs_inst__DOT__regs[23]),32);
    tracep->fullIData(oldp+55,(vlSelf->riscv__DOT__regs_inst__DOT__regs[24]),32);
    tracep->fullIData(oldp+56,(vlSelf->riscv__DOT__regs_inst__DOT__regs[25]),32);
    tracep->fullIData(oldp+57,(vlSelf->riscv__DOT__regs_inst__DOT__regs[26]),32);
    tracep->fullIData(oldp+58,(vlSelf->riscv__DOT__regs_inst__DOT__regs[27]),32);
    tracep->fullIData(oldp+59,(vlSelf->riscv__DOT__regs_inst__DOT__regs[28]),32);
    tracep->fullIData(oldp+60,(vlSelf->riscv__DOT__regs_inst__DOT__regs[29]),32);
    tracep->fullIData(oldp+61,(vlSelf->riscv__DOT__regs_inst__DOT__regs[30]),32);
    tracep->fullIData(oldp+62,(vlSelf->riscv__DOT__regs_inst__DOT__regs[31]),32);
    tracep->fullIData(oldp+63,(vlSelf->riscv__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullBit(oldp+64,(vlSelf->clk));
    tracep->fullBit(oldp+65,(vlSelf->rst));
    tracep->fullIData(oldp+66,(vlSelf->inst_i),32);
    tracep->fullIData(oldp+67,(vlSelf->inst_addr_o),32);
    tracep->fullIData(oldp+68,(((0x13U == (0x7fU & vlSelf->riscv__DOT__if_id_inst_o))
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
    tracep->fullIData(oldp+69,(((0x13U == (0x7fU & vlSelf->riscv__DOT__if_id_inst_o))
                                 ? ((0U == (7U & (vlSelf->riscv__DOT__if_id_inst_o 
                                                  >> 0xcU)))
                                     ? (((- (IData)(
                                                    (vlSelf->riscv__DOT__if_id_inst_o 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSelf->riscv__DOT__if_id_inst_o 
                                         >> 0x14U))
                                     : 0U) : ((0x33U 
                                               == (0x7fU 
                                                   & vlSelf->riscv__DOT__if_id_inst_o))
                                               ? ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->riscv__DOT__if_id_inst_o 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((IData)(vlSelf->rst)
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->riscv__DOT__id_rs1_addr_o))
                                                     ? 0U
                                                     : 
                                                    (((IData)(vlSelf->riscv__DOT__ex_reg_wen_o) 
                                                      & ((IData)(vlSelf->riscv__DOT__ex_rd_addr_o) 
                                                         == (IData)(vlSelf->riscv__DOT__id_rs2_addr_o)))
                                                      ? vlSelf->riscv__DOT__ex_rd_data_o
                                                      : 
                                                     vlSelf->riscv__DOT__regs_inst__DOT__regs
                                                     [vlSelf->riscv__DOT__id_rs2_addr_o]))
                                                    : 0U)
                                                   : 0U)
                                               : 0U))),32);
    tracep->fullIData(oldp+70,(vlSelf->riscv__DOT__regs_rs1_rdata_o),32);
    tracep->fullIData(oldp+71,(((IData)(vlSelf->rst)
                                 ? ((0U == (IData)(vlSelf->riscv__DOT__id_rs1_addr_o))
                                     ? 0U : (((IData)(vlSelf->riscv__DOT__ex_reg_wen_o) 
                                              & ((IData)(vlSelf->riscv__DOT__ex_rd_addr_o) 
                                                 == (IData)(vlSelf->riscv__DOT__id_rs2_addr_o)))
                                              ? vlSelf->riscv__DOT__ex_rd_data_o
                                              : vlSelf->riscv__DOT__regs_inst__DOT__regs
                                             [vlSelf->riscv__DOT__id_rs2_addr_o]))
                                 : 0U)),32);
    tracep->fullIData(oldp+72,(0x20U),32);
    tracep->fullIData(oldp+73,(0x13U),32);
    tracep->fullIData(oldp+74,(0U),32);
    tracep->fullIData(oldp+75,(5U),32);
    tracep->fullCData(oldp+76,(0U),5);
    tracep->fullIData(oldp+77,(1U),32);
    tracep->fullBit(oldp+78,(0U));
}
