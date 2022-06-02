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
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->pushNamePrefix("tb ");
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+2,"x3", false,-1, 31,0);
    tracep->declBus(c+3,"x26", false,-1, 31,0);
    tracep->declBus(c+4,"x27", false,-1, 31,0);
    tracep->declBus(c+5,"r", false,-1, 31,0);
    tracep->pushNamePrefix("soc_inst ");
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+6,"riscv_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+7,"rom_inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_inst ");
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+7,"inst_i", false,-1, 31,0);
    tracep->declBus(c+6,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+6,"pc_reg_pc_o", false,-1, 31,0);
    tracep->declBus(c+6,"if_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+7,"if_inst_o", false,-1, 31,0);
    tracep->declBus(c+8,"if_id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+9,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+10,"id_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+11,"id_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+9,"id_inst_o", false,-1, 31,0);
    tracep->declBus(c+8,"id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+86,"id_op1_o", false,-1, 31,0);
    tracep->declBus(c+87,"id_op2_o", false,-1, 31,0);
    tracep->declBus(c+12,"id_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+13,"id_reg_wen", false,-1);
    tracep->declBus(c+88,"regs_rs1_rdata_o", false,-1, 31,0);
    tracep->declBus(c+89,"regs_rs2_rdata_o", false,-1, 31,0);
    tracep->declBus(c+14,"id_ex_inst_o", false,-1, 31,0);
    tracep->declBus(c+15,"id_ex_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+16,"id_ex_op1_o", false,-1, 31,0);
    tracep->declBus(c+17,"id_ex_op2_o", false,-1, 31,0);
    tracep->declBus(c+18,"id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+19,"id_ex_reg_wen", false,-1);
    tracep->declBus(c+20,"ex_rd_data_o", false,-1, 31,0);
    tracep->declBus(c+21,"ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+22,"ex_reg_wen_o", false,-1);
    tracep->declBus(c+23,"ex_jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+24,"ex_jump_en_o", false,-1);
    tracep->declBit(c+92,"ex_hold_flag_o", false,-1);
    tracep->declBus(c+23,"ctrl_jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+24,"ctrl_jump_en_o", false,-1);
    tracep->declBit(c+25,"ctrl_hold_flag_o", false,-1);
    tracep->pushNamePrefix("ctrl_inst ");
    tracep->declBus(c+23,"jump_addr_i", false,-1, 31,0);
    tracep->declBit(c+24,"jump_en_i", false,-1);
    tracep->declBit(c+92,"hold_flag_ex_i", false,-1);
    tracep->declBus(c+23,"jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+24,"jump_en_o", false,-1);
    tracep->declBit(c+25,"hold_flag_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_inst ");
    tracep->declBus(c+14,"inst_i", false,-1, 31,0);
    tracep->declBus(c+15,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+16,"op1_i", false,-1, 31,0);
    tracep->declBus(c+17,"op2_i", false,-1, 31,0);
    tracep->declBus(c+18,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+19,"reg_wen_i", false,-1);
    tracep->declBus(c+93,"base_addr_i", false,-1, 31,0);
    tracep->declBus(c+94,"offset_addr_i", false,-1, 31,0);
    tracep->declBus(c+20,"rd_wdata_o", false,-1, 31,0);
    tracep->declBus(c+21,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+22,"reg_wen_o", false,-1);
    tracep->declBus(c+23,"jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+24,"jump_en_o", false,-1);
    tracep->declBit(c+92,"hold_flag_o", false,-1);
    tracep->declBus(c+26,"opcode", false,-1, 6,0);
    tracep->declBus(c+27,"rd", false,-1, 4,0);
    tracep->declBus(c+28,"func3", false,-1, 2,0);
    tracep->declBus(c+29,"rs1", false,-1, 4,0);
    tracep->declBus(c+30,"rs2", false,-1, 4,0);
    tracep->declBus(c+31,"func7", false,-1, 6,0);
    tracep->declBus(c+30,"shamt", false,-1, 4,0);
    tracep->declBit(c+32,"op1_i_equal_op2_i", false,-1);
    tracep->declBit(c+33,"op1_i_less_op2_i_signed", false,-1);
    tracep->declBit(c+34,"op1_i_less_op2_i_unsigned", false,-1);
    tracep->declBus(c+35,"op1_i_add_op2_i", false,-1, 31,0);
    tracep->declBus(c+36,"op1_i_sub_op2_i", false,-1, 31,0);
    tracep->declBus(c+37,"op1_i_and_op2_i", false,-1, 31,0);
    tracep->declBus(c+38,"op1_i_xor_op2_i", false,-1, 31,0);
    tracep->declBus(c+39,"op1_i_or_op2_i", false,-1, 31,0);
    tracep->declBus(c+40,"op1_i_shift_left_op2_i", false,-1, 31,0);
    tracep->declBus(c+41,"op1_i_shift_right_op2_i", false,-1, 31,0);
    tracep->declBus(c+1,"base_addr_add_addr_offset", false,-1, 31,0);
    tracep->declBus(c+42,"SRA_mask", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_ex_inst ");
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBit(c+25,"hold_flag_i", false,-1);
    tracep->declBus(c+9,"inst_i", false,-1, 31,0);
    tracep->declBus(c+8,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+86,"op1_i", false,-1, 31,0);
    tracep->declBus(c+87,"op2_i", false,-1, 31,0);
    tracep->declBus(c+12,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+13,"reg_wen_i", false,-1);
    tracep->declBus(c+14,"inst_o", false,-1, 31,0);
    tracep->declBus(c+15,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+16,"op1_o", false,-1, 31,0);
    tracep->declBus(c+17,"op2_o", false,-1, 31,0);
    tracep->declBus(c+18,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+19,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+95,"DW", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBit(c+25,"hold_flag_i", false,-1);
    tracep->declBus(c+96,"set_data", false,-1, 31,0);
    tracep->declBus(c+9,"data_i", false,-1, 31,0);
    tracep->declBus(c+14,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+95,"DW", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBit(c+25,"hold_flag_i", false,-1);
    tracep->declBus(c+97,"set_data", false,-1, 31,0);
    tracep->declBus(c+8,"data_i", false,-1, 31,0);
    tracep->declBus(c+15,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+95,"DW", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBit(c+25,"hold_flag_i", false,-1);
    tracep->declBus(c+97,"set_data", false,-1, 31,0);
    tracep->declBus(c+86,"data_i", false,-1, 31,0);
    tracep->declBus(c+16,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+95,"DW", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBit(c+25,"hold_flag_i", false,-1);
    tracep->declBus(c+97,"set_data", false,-1, 31,0);
    tracep->declBus(c+87,"data_i", false,-1, 31,0);
    tracep->declBus(c+17,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+98,"DW", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBit(c+25,"hold_flag_i", false,-1);
    tracep->declBus(c+99,"set_data", false,-1, 4,0);
    tracep->declBus(c+12,"data_i", false,-1, 4,0);
    tracep->declBus(c+18,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+100,"DW", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBit(c+25,"hold_flag_i", false,-1);
    tracep->declBus(c+92,"set_data", false,-1, 0,0);
    tracep->declBus(c+13,"data_i", false,-1, 0,0);
    tracep->declBus(c+19,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_inst ");
    tracep->declBus(c+9,"inst_i", false,-1, 31,0);
    tracep->declBus(c+8,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+88,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+89,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+10,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+11,"rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+9,"inst_o", false,-1, 31,0);
    tracep->declBus(c+8,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+86,"op1_o", false,-1, 31,0);
    tracep->declBus(c+87,"op2_o", false,-1, 31,0);
    tracep->declBus(c+12,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+13,"reg_wen", false,-1);
    tracep->declBus(c+43,"base_addr_o", false,-1, 31,0);
    tracep->declBus(c+44,"offset_addr_o", false,-1, 31,0);
    tracep->declBus(c+45,"opcode", false,-1, 6,0);
    tracep->declBus(c+46,"rd", false,-1, 4,0);
    tracep->declBus(c+47,"func3", false,-1, 2,0);
    tracep->declBus(c+48,"rs1", false,-1, 4,0);
    tracep->declBus(c+49,"rs2", false,-1, 4,0);
    tracep->declBus(c+50,"func7", false,-1, 6,0);
    tracep->declBus(c+51,"imm", false,-1, 11,0);
    tracep->declBus(c+49,"shamt", false,-1, 4,0);
    tracep->declBus(c+52,"immB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_inst ");
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBit(c+25,"hold_flag_i", false,-1);
    tracep->declBus(c+7,"inst_i", false,-1, 31,0);
    tracep->declBus(c+6,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+8,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+9,"inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+95,"DW", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBit(c+25,"hold_flag_i", false,-1);
    tracep->declBus(c+96,"set_data", false,-1, 31,0);
    tracep->declBus(c+7,"data_i", false,-1, 31,0);
    tracep->declBus(c+9,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+95,"DW", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBit(c+25,"hold_flag_i", false,-1);
    tracep->declBus(c+97,"set_data", false,-1, 31,0);
    tracep->declBus(c+6,"data_i", false,-1, 31,0);
    tracep->declBus(c+8,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_fetch_inst ");
    tracep->declBus(c+6,"pc_addr_i", false,-1, 31,0);
    tracep->declBus(c+7,"rom2if_inst_i", false,-1, 31,0);
    tracep->declBus(c+6,"if2rom_addr_o", false,-1, 31,0);
    tracep->declBus(c+6,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+7,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBus(c+23,"jump_addr_i", false,-1, 31,0);
    tracep->declBit(c+24,"jump_en_i", false,-1);
    tracep->declBus(c+6,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_inst ");
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+10,"rs1_raddr_i", false,-1, 4,0);
    tracep->declBus(c+11,"rs2_raddr_i", false,-1, 4,0);
    tracep->declBus(c+88,"rs1_rdata_o", false,-1, 31,0);
    tracep->declBus(c+89,"rs2_rdata_o", false,-1, 31,0);
    tracep->declBus(c+21,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+20,"reg_wdata_i", false,-1, 31,0);
    tracep->declBit(c+22,"reg_wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+53+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+85,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("rom_inst ");
    tracep->declBus(c+6,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+7,"inst_o", false,-1, 31,0);
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
    tracep->fullIData(oldp+1,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),32);
    tracep->fullIData(oldp+2,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                              [3U]),32);
    tracep->fullIData(oldp+3,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                              [0x1aU]),32);
    tracep->fullIData(oldp+4,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                              [0x1bU]),32);
    tracep->fullIData(oldp+5,(vlSelf->tb__DOT__r),32);
    tracep->fullIData(oldp+6,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o),32);
    tracep->fullIData(oldp+7,(vlSelf->tb__DOT__soc_inst__DOT__rom_inst__DOT__rom_mem
                              [(0xfffU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
                                          >> 2U))]),32);
    tracep->fullIData(oldp+8,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o),32);
    tracep->fullIData(oldp+9,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o),32);
    tracep->fullCData(oldp+10,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o),5);
    tracep->fullCData(oldp+11,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o),5);
    tracep->fullCData(oldp+12,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o),5);
    tracep->fullBit(oldp+13,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen));
    tracep->fullIData(oldp+14,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o),32);
    tracep->fullIData(oldp+15,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o),32);
    tracep->fullIData(oldp+16,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o),32);
    tracep->fullIData(oldp+17,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o),32);
    tracep->fullCData(oldp+18,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+19,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen));
    tracep->fullIData(oldp+20,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o),32);
    tracep->fullCData(oldp+21,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o),5);
    tracep->fullBit(oldp+22,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o));
    tracep->fullIData(oldp+23,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                         ? 0U : ((8U 
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
                                                     ? 
                                                    (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o 
                                                     + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((4U 
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
    tracep->fullBit(oldp+24,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o));
    tracep->fullBit(oldp+25,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_hold_flag_o));
    tracep->fullCData(oldp+26,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)),7);
    tracep->fullCData(oldp+27,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+28,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+29,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+30,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+31,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                >> 0x19U)),7);
    tracep->fullBit(oldp+32,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
    tracep->fullBit(oldp+33,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
    tracep->fullBit(oldp+34,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
    tracep->fullIData(oldp+35,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),32);
    tracep->fullIData(oldp+36,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
                                - vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),32);
    tracep->fullIData(oldp+37,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),32);
    tracep->fullIData(oldp+38,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),32);
    tracep->fullIData(oldp+39,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),32);
    tracep->fullIData(oldp+40,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i),32);
    tracep->fullIData(oldp+41,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i),32);
    tracep->fullIData(oldp+42,((0xffffffffU >> (0x1fU 
                                                & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o))),32);
    tracep->fullIData(oldp+43,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                 ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                     ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                         ? 0U : ((8U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
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
    tracep->fullIData(oldp+44,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                 ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                     ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                         ? 0U : ((8U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
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
    tracep->fullCData(oldp+45,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)),7);
    tracep->fullCData(oldp+46,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+47,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+48,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+49,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+50,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                >> 0x19U)),7);
    tracep->fullSData(oldp+51,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                >> 0x14U)),12);
    tracep->fullIData(oldp+52,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immB),32);
    tracep->fullIData(oldp+53,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0]),32);
    tracep->fullIData(oldp+54,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[1]),32);
    tracep->fullIData(oldp+55,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[2]),32);
    tracep->fullIData(oldp+56,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[3]),32);
    tracep->fullIData(oldp+57,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[4]),32);
    tracep->fullIData(oldp+58,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[5]),32);
    tracep->fullIData(oldp+59,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[6]),32);
    tracep->fullIData(oldp+60,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[7]),32);
    tracep->fullIData(oldp+61,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[8]),32);
    tracep->fullIData(oldp+62,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[9]),32);
    tracep->fullIData(oldp+63,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[10]),32);
    tracep->fullIData(oldp+64,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[11]),32);
    tracep->fullIData(oldp+65,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[12]),32);
    tracep->fullIData(oldp+66,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[13]),32);
    tracep->fullIData(oldp+67,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[14]),32);
    tracep->fullIData(oldp+68,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[15]),32);
    tracep->fullIData(oldp+69,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[16]),32);
    tracep->fullIData(oldp+70,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[17]),32);
    tracep->fullIData(oldp+71,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[18]),32);
    tracep->fullIData(oldp+72,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[19]),32);
    tracep->fullIData(oldp+73,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[20]),32);
    tracep->fullIData(oldp+74,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[21]),32);
    tracep->fullIData(oldp+75,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[22]),32);
    tracep->fullIData(oldp+76,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[23]),32);
    tracep->fullIData(oldp+77,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[24]),32);
    tracep->fullIData(oldp+78,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[25]),32);
    tracep->fullIData(oldp+79,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[26]),32);
    tracep->fullIData(oldp+80,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[27]),32);
    tracep->fullIData(oldp+81,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[28]),32);
    tracep->fullIData(oldp+82,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[29]),32);
    tracep->fullIData(oldp+83,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[30]),32);
    tracep->fullIData(oldp+84,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[31]),32);
    tracep->fullIData(oldp+85,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullIData(oldp+86,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o),32);
    tracep->fullIData(oldp+87,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o),32);
    tracep->fullIData(oldp+88,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o),32);
    tracep->fullIData(oldp+89,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o),32);
    tracep->fullBit(oldp+90,(vlSelf->clk));
    tracep->fullBit(oldp+91,(vlSelf->rst));
    tracep->fullBit(oldp+92,(0U));
    tracep->fullIData(oldp+93,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_i),32);
    tracep->fullIData(oldp+94,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__offset_addr_i),32);
    tracep->fullIData(oldp+95,(0x20U),32);
    tracep->fullIData(oldp+96,(0x13U),32);
    tracep->fullIData(oldp+97,(0U),32);
    tracep->fullIData(oldp+98,(5U),32);
    tracep->fullCData(oldp+99,(0U),5);
    tracep->fullIData(oldp+100,(1U),32);
}
