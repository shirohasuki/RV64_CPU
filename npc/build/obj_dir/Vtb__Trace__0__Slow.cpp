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
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->pushNamePrefix("tb ");
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->pushNamePrefix("soc_inst ");
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declQuad(c+157,"riscv_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+159,"rom_inst_o", false,-1, 31,0);
    tracep->declBit(c+160,"riscv_w_en", false,-1);
    tracep->declBus(c+161,"riscv_w_addr_o", false,-1, 11,0);
    tracep->declBus(c+162,"riscv_w_data_o", false,-1, 31,0);
    tracep->declBit(c+163,"riscv_r_en", false,-1);
    tracep->declBus(c+164,"riscv_r_addr_o", false,-1, 11,0);
    tracep->declBus(c+165,"ram_r_data_o", false,-1, 31,0);
    tracep->pushNamePrefix("riscv_inst ");
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBus(c+159,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+157,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+165,"mem_r_data_i", false,-1, 31,0);
    tracep->declBit(c+163,"mem_r_req_o", false,-1);
    tracep->declBus(c+164,"mem_r_addr_o", false,-1, 11,0);
    tracep->declBit(c+160,"mem_w_req_o", false,-1);
    tracep->declBus(c+161,"mem_w_addr_o", false,-1, 11,0);
    tracep->declBus(c+162,"mem_w_data_o", false,-1, 31,0);
    tracep->declQuad(c+1,"pc_reg_pc_o", false,-1, 63,0);
    tracep->declQuad(c+1,"if_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+3,"if_inst_o", false,-1, 31,0);
    tracep->declQuad(c+4,"if_id_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+6,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+7,"id_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+8,"id_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+6,"id_inst_o", false,-1, 31,0);
    tracep->declQuad(c+4,"id_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+145,"id_op1_o", false,-1, 63,0);
    tracep->declQuad(c+147,"id_op2_o", false,-1, 63,0);
    tracep->declBus(c+9,"id_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+10,"id_reg_wen", false,-1);
    tracep->declQuad(c+155,"id_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+11,"id_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+149,"regs_rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+151,"regs_rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+13,"id_ex_inst_o", false,-1, 31,0);
    tracep->declQuad(c+14,"id_ex_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+16,"id_ex_op1_o", false,-1, 63,0);
    tracep->declQuad(c+18,"id_ex_op2_o", false,-1, 63,0);
    tracep->declBus(c+20,"id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+21,"id_ex_reg_wen", false,-1);
    tracep->declQuad(c+22,"id_ex_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+24,"id_ex_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+26,"ex_rd_data_o", false,-1, 63,0);
    tracep->declBus(c+28,"ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+29,"ex_reg_wen_o", false,-1);
    tracep->declQuad(c+14,"ex_reg_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+30,"ex_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+32,"ex_jump_en_o", false,-1);
    tracep->declBit(c+166,"ex_hold_flag_o", false,-1);
    tracep->declQuad(c+30,"ctrl_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+32,"ctrl_jump_en_o", false,-1);
    tracep->declBit(c+33,"ctrl_hold_flag_o", false,-1);
    tracep->pushNamePrefix("ctrl_inst ");
    tracep->declQuad(c+30,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+32,"jump_en_i", false,-1);
    tracep->declBit(c+166,"hold_flag_ex_i", false,-1);
    tracep->declQuad(c+30,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+32,"jump_en_o", false,-1);
    tracep->declBit(c+33,"hold_flag_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_inst ");
    tracep->declBus(c+13,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+14,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+16,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+18,"op2_i", false,-1, 63,0);
    tracep->declBus(c+20,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+21,"reg_wen_i", false,-1);
    tracep->declQuad(c+22,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+24,"offset_addr_i", false,-1, 63,0);
    tracep->declQuad(c+26,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+28,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+29,"reg_wen_o", false,-1);
    tracep->declQuad(c+14,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+30,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+32,"jump_en_o", false,-1);
    tracep->declBit(c+166,"hold_flag_o", false,-1);
    tracep->declBus(c+34,"opcode", false,-1, 6,0);
    tracep->declBus(c+35,"rd", false,-1, 4,0);
    tracep->declBus(c+36,"func3", false,-1, 2,0);
    tracep->declBus(c+37,"rs1", false,-1, 4,0);
    tracep->declBus(c+38,"rs2", false,-1, 4,0);
    tracep->declBus(c+39,"func7", false,-1, 6,0);
    tracep->declQuad(c+40,"op1_i_add_op2_i", false,-1, 63,0);
    tracep->declQuad(c+42,"op1_i_sub_op2_i", false,-1, 63,0);
    tracep->declQuad(c+44,"op1_i_and_op2_i", false,-1, 63,0);
    tracep->declQuad(c+46,"op1_i_xor_op2_i", false,-1, 63,0);
    tracep->declQuad(c+48,"op1_i_or_op2_i", false,-1, 63,0);
    tracep->declQuad(c+50,"op1_i_shift_left_op2_i", false,-1, 63,0);
    tracep->declQuad(c+52,"op1_i_shift_right_op2_i", false,-1, 63,0);
    tracep->declQuad(c+54,"base_addr_add_addr_offset", false,-1, 63,0);
    tracep->declBit(c+56,"op1_i_equal_op2_i", false,-1);
    tracep->declBit(c+57,"op1_i_less_op2_i_signed", false,-1);
    tracep->declBit(c+58,"op1_i_less_op2_i_unsigned", false,-1);
    tracep->declQuad(c+59,"SRA_mask", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_ex_inst ");
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBit(c+33,"hold_flag_i", false,-1);
    tracep->declBus(c+6,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+4,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+145,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+147,"op2_i", false,-1, 63,0);
    tracep->declBus(c+9,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+10,"reg_wen_i", false,-1);
    tracep->declQuad(c+155,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+11,"offset_addr_i", false,-1, 63,0);
    tracep->declBus(c+13,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+14,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+16,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+18,"op2_o", false,-1, 63,0);
    tracep->declBus(c+20,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+21,"reg_wen_o", false,-1);
    tracep->declQuad(c+22,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+24,"offset_addr_o", false,-1, 63,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+167,"DW", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBit(c+33,"hold_flag_i", false,-1);
    tracep->declBus(c+168,"set_data", false,-1, 31,0);
    tracep->declBus(c+6,"data_i", false,-1, 31,0);
    tracep->declBus(c+13,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+169,"DW", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBit(c+33,"hold_flag_i", false,-1);
    tracep->declQuad(c+170,"set_data", false,-1, 63,0);
    tracep->declQuad(c+4,"data_i", false,-1, 63,0);
    tracep->declQuad(c+14,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+169,"DW", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBit(c+33,"hold_flag_i", false,-1);
    tracep->declQuad(c+170,"set_data", false,-1, 63,0);
    tracep->declQuad(c+145,"data_i", false,-1, 63,0);
    tracep->declQuad(c+16,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+169,"DW", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBit(c+33,"hold_flag_i", false,-1);
    tracep->declQuad(c+170,"set_data", false,-1, 63,0);
    tracep->declQuad(c+147,"data_i", false,-1, 63,0);
    tracep->declQuad(c+18,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+172,"DW", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBit(c+33,"hold_flag_i", false,-1);
    tracep->declBus(c+173,"set_data", false,-1, 4,0);
    tracep->declBus(c+9,"data_i", false,-1, 4,0);
    tracep->declBus(c+20,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+174,"DW", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBit(c+33,"hold_flag_i", false,-1);
    tracep->declBus(c+166,"set_data", false,-1, 0,0);
    tracep->declBus(c+10,"data_i", false,-1, 0,0);
    tracep->declBus(c+21,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+169,"DW", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBit(c+33,"hold_flag_i", false,-1);
    tracep->declQuad(c+170,"set_data", false,-1, 63,0);
    tracep->declQuad(c+155,"data_i", false,-1, 63,0);
    tracep->declQuad(c+22,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+169,"DW", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBit(c+33,"hold_flag_i", false,-1);
    tracep->declQuad(c+170,"set_data", false,-1, 63,0);
    tracep->declQuad(c+11,"data_i", false,-1, 63,0);
    tracep->declQuad(c+24,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_inst ");
    tracep->declBus(c+6,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+4,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+149,"rs1_data_i", false,-1, 63,0);
    tracep->declQuad(c+151,"rs2_data_i", false,-1, 63,0);
    tracep->declBus(c+7,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+8,"rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+6,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+4,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+145,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+147,"op2_o", false,-1, 63,0);
    tracep->declBus(c+9,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+10,"reg_wen", false,-1);
    tracep->declQuad(c+155,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+11,"offset_addr_o", false,-1, 63,0);
    tracep->declBus(c+61,"opcode", false,-1, 6,0);
    tracep->declBus(c+62,"rd", false,-1, 4,0);
    tracep->declBus(c+63,"func3", false,-1, 2,0);
    tracep->declBus(c+64,"rs1", false,-1, 4,0);
    tracep->declBus(c+65,"rs2", false,-1, 4,0);
    tracep->declBus(c+66,"func7", false,-1, 6,0);
    tracep->declBus(c+67,"imm", false,-1, 11,0);
    tracep->declBus(c+65,"shamt", false,-1, 4,0);
    tracep->declQuad(c+68,"immI", false,-1, 63,0);
    tracep->declQuad(c+70,"immU", false,-1, 63,0);
    tracep->declQuad(c+72,"immS", false,-1, 63,0);
    tracep->declQuad(c+74,"immB", false,-1, 63,0);
    tracep->declQuad(c+76,"immJ", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_inst ");
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBit(c+33,"hold_flag_i", false,-1);
    tracep->declBus(c+3,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+1,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+4,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+6,"inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+167,"DW", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBit(c+33,"hold_flag_i", false,-1);
    tracep->declBus(c+168,"set_data", false,-1, 31,0);
    tracep->declBus(c+3,"data_i", false,-1, 31,0);
    tracep->declBus(c+6,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+169,"DW", false,-1, 31,0);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBit(c+33,"hold_flag_i", false,-1);
    tracep->declQuad(c+170,"set_data", false,-1, 63,0);
    tracep->declQuad(c+1,"data_i", false,-1, 63,0);
    tracep->declQuad(c+4,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_fetch_inst ");
    tracep->declQuad(c+1,"pc_addr_i", false,-1, 63,0);
    tracep->declQuad(c+1,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+3,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+78,"inst_get", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declQuad(c+30,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+32,"jump_en_i", false,-1);
    tracep->declQuad(c+1,"pc_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_inst ");
    tracep->declBit(c+153,"clk", false,-1);
    tracep->declBit(c+154,"rst", false,-1);
    tracep->declBus(c+7,"rs1_raddr_i", false,-1, 4,0);
    tracep->declBus(c+8,"rs2_raddr_i", false,-1, 4,0);
    tracep->declQuad(c+149,"rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+151,"rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+28,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+26,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+29,"reg_wen", false,-1);
    tracep->declQuad(c+14,"inst_addr_i", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+80+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->declQuad(c+14,"pc_reg", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+144,"i", false,-1, 31,0);
    tracep->popNamePrefix(5);
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
    tracep->fullQData(oldp+1,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o),64);
    tracep->fullIData(oldp+3,((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__inst_fetch_inst__DOT__inst_get)),32);
    tracep->fullQData(oldp+4,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o),64);
    tracep->fullIData(oldp+6,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o),32);
    tracep->fullCData(oldp+7,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o),5);
    tracep->fullCData(oldp+8,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o),5);
    tracep->fullCData(oldp+9,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o),5);
    tracep->fullBit(oldp+10,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen));
    tracep->fullQData(oldp+11,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_offset_addr_o),64);
    tracep->fullIData(oldp+13,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o),32);
    tracep->fullQData(oldp+14,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o),64);
    tracep->fullQData(oldp+16,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o),64);
    tracep->fullQData(oldp+18,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o),64);
    tracep->fullCData(oldp+20,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+21,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen));
    tracep->fullQData(oldp+22,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_base_addr_o),64);
    tracep->fullQData(oldp+24,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_offset_addr_o),64);
    tracep->fullQData(oldp+26,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o),64);
    tracep->fullCData(oldp+28,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o),5);
    tracep->fullBit(oldp+29,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o));
    tracep->fullQData(oldp+30,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                         ? 0ULL : (
                                                   (8U 
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
    tracep->fullBit(oldp+32,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o));
    tracep->fullBit(oldp+33,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_hold_flag_o));
    tracep->fullCData(oldp+34,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)),7);
    tracep->fullCData(oldp+35,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+36,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+37,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+38,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+39,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                >> 0x19U)),7);
    tracep->fullQData(oldp+40,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),64);
    tracep->fullQData(oldp+42,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
                                - vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+44,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),64);
    tracep->fullQData(oldp+46,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),64);
    tracep->fullQData(oldp+48,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),64);
    tracep->fullQData(oldp+50,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i),64);
    tracep->fullQData(oldp+52,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i),64);
    tracep->fullQData(oldp+54,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),64);
    tracep->fullBit(oldp+56,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
    tracep->fullBit(oldp+57,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
    tracep->fullBit(oldp+58,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
    tracep->fullQData(oldp+59,((0xffffffffULL >> (0x1fU 
                                                  & (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)))),64);
    tracep->fullCData(oldp+61,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)),7);
    tracep->fullCData(oldp+62,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+63,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+64,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+65,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+66,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                >> 0x19U)),7);
    tracep->fullSData(oldp+67,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                >> 0x14U)),12);
    tracep->fullQData(oldp+68,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immI),64);
    tracep->fullQData(oldp+70,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immU),64);
    tracep->fullQData(oldp+72,((((- (QData)((IData)(
                                                    (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                     >> 0x1fU)))) 
                                 << 0xcU) | (QData)((IData)(
                                                            ((0xfe0U 
                                                              & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                 >> 0x14U)) 
                                                             | (0x1fU 
                                                                & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                   >> 7U))))))),64);
    tracep->fullQData(oldp+74,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immB),64);
    tracep->fullQData(oldp+76,((((- (QData)((IData)(
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
    tracep->fullQData(oldp+78,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__inst_fetch_inst__DOT__inst_get),64);
    tracep->fullQData(oldp+80,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0]),64);
    tracep->fullQData(oldp+82,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[1]),64);
    tracep->fullQData(oldp+84,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[2]),64);
    tracep->fullQData(oldp+86,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[3]),64);
    tracep->fullQData(oldp+88,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[4]),64);
    tracep->fullQData(oldp+90,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[5]),64);
    tracep->fullQData(oldp+92,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[6]),64);
    tracep->fullQData(oldp+94,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[7]),64);
    tracep->fullQData(oldp+96,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[8]),64);
    tracep->fullQData(oldp+98,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[9]),64);
    tracep->fullQData(oldp+100,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[10]),64);
    tracep->fullQData(oldp+102,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[11]),64);
    tracep->fullQData(oldp+104,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[12]),64);
    tracep->fullQData(oldp+106,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[13]),64);
    tracep->fullQData(oldp+108,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[14]),64);
    tracep->fullQData(oldp+110,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[15]),64);
    tracep->fullQData(oldp+112,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[16]),64);
    tracep->fullQData(oldp+114,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[17]),64);
    tracep->fullQData(oldp+116,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[18]),64);
    tracep->fullQData(oldp+118,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[19]),64);
    tracep->fullQData(oldp+120,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[20]),64);
    tracep->fullQData(oldp+122,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[21]),64);
    tracep->fullQData(oldp+124,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[22]),64);
    tracep->fullQData(oldp+126,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[23]),64);
    tracep->fullQData(oldp+128,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[24]),64);
    tracep->fullQData(oldp+130,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[25]),64);
    tracep->fullQData(oldp+132,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[26]),64);
    tracep->fullQData(oldp+134,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[27]),64);
    tracep->fullQData(oldp+136,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[28]),64);
    tracep->fullQData(oldp+138,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[29]),64);
    tracep->fullQData(oldp+140,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[30]),64);
    tracep->fullQData(oldp+142,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[31]),64);
    tracep->fullIData(oldp+144,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullQData(oldp+145,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o),64);
    tracep->fullQData(oldp+147,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o),64);
    tracep->fullQData(oldp+149,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o),64);
    tracep->fullQData(oldp+151,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o),64);
    tracep->fullBit(oldp+153,(vlSelf->clk));
    tracep->fullBit(oldp+154,(vlSelf->rst));
    tracep->fullQData(oldp+155,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                  ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                      ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                          ? 0ULL : 
                                         ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                           ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                               ? ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o
                                                    : 0ULL)
                                                   : 0ULL)
                                               : 0ULL)
                                           : ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                               ? ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o
                                                    : 0ULL)
                                                   : 0ULL)
                                               : ((2U 
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
                                                      ? 0ULL
                                                      : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o))
                                                    : 0ULL)
                                                   : 0ULL))))
                                      : 0ULL) : 0ULL)),64);
    tracep->fullQData(oldp+157,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst_addr_o),64);
    tracep->fullIData(oldp+159,(vlSelf->tb__DOT__soc_inst__DOT__rom_inst_o),32);
    tracep->fullBit(oldp+160,(vlSelf->tb__DOT__soc_inst__DOT__riscv_w_en));
    tracep->fullSData(oldp+161,(vlSelf->tb__DOT__soc_inst__DOT__riscv_w_addr_o),12);
    tracep->fullIData(oldp+162,(vlSelf->tb__DOT__soc_inst__DOT__riscv_w_data_o),32);
    tracep->fullBit(oldp+163,(vlSelf->tb__DOT__soc_inst__DOT__riscv_r_en));
    tracep->fullSData(oldp+164,(vlSelf->tb__DOT__soc_inst__DOT__riscv_r_addr_o),12);
    tracep->fullIData(oldp+165,(vlSelf->tb__DOT__soc_inst__DOT__ram_r_data_o),32);
    tracep->fullBit(oldp+166,(0U));
    tracep->fullIData(oldp+167,(0x20U),32);
    tracep->fullIData(oldp+168,(0x13U),32);
    tracep->fullIData(oldp+169,(0x40U),32);
    tracep->fullQData(oldp+170,(0ULL),64);
    tracep->fullIData(oldp+172,(5U),32);
    tracep->fullCData(oldp+173,(0U),5);
    tracep->fullIData(oldp+174,(1U),32);
}
