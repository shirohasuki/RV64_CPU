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
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->pushNamePrefix("tb ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+1,"x3", false,-1, 31,0);
    tracep->declBus(c+2,"x26", false,-1, 31,0);
    tracep->declBus(c+3,"x27", false,-1, 31,0);
    tracep->declBus(c+4,"r", false,-1, 31,0);
    tracep->pushNamePrefix("soc_inst ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+5,"riscv_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+6,"rom_inst_o", false,-1, 31,0);
    tracep->declBit(c+98,"ram_w_en", false,-1);
    tracep->declBus(c+99,"ram_w_addr_o", false,-1, 11,0);
    tracep->declBus(c+100,"ram_w_data_o", false,-1, 31,0);
    tracep->declBit(c+101,"ram_r_en", false,-1);
    tracep->declBus(c+102,"ram_r_addr_o", false,-1, 11,0);
    tracep->declBus(c+7,"ram_r_data_o", false,-1, 31,0);
    tracep->pushNamePrefix("ram_inst ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBus(c+104,"AW", false,-1, 31,0);
    tracep->declBus(c+105,"MEM_NUM", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+98,"w_en", false,-1);
    tracep->declBus(c+99,"w_addr_i", false,-1, 11,0);
    tracep->declBus(c+100,"w_data_i", false,-1, 31,0);
    tracep->declBit(c+101,"r_en", false,-1);
    tracep->declBus(c+102,"r_addr_i", false,-1, 11,0);
    tracep->declBus(c+7,"r_data_o", false,-1, 31,0);
    tracep->declBit(c+8,"rd_wr_equ_flag", false,-1);
    tracep->declBus(c+9,"w_data_reg", false,-1, 31,0);
    tracep->declBus(c+10,"r_data_write", false,-1, 31,0);
    tracep->pushNamePrefix("ram_template_inst ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBus(c+104,"AW", false,-1, 31,0);
    tracep->declBus(c+105,"MEM_NUM", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+98,"w_en", false,-1);
    tracep->declBus(c+99,"w_addr_i", false,-1, 11,0);
    tracep->declBus(c+100,"w_data_i", false,-1, 31,0);
    tracep->declBit(c+101,"r_en", false,-1);
    tracep->declBus(c+102,"r_addr_i", false,-1, 11,0);
    tracep->declBus(c+10,"r_data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("riscv_inst ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+6,"inst_i", false,-1, 31,0);
    tracep->declBus(c+5,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+5,"pc_reg_pc_o", false,-1, 31,0);
    tracep->declBus(c+5,"if_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+6,"if_inst_o", false,-1, 31,0);
    tracep->declBus(c+11,"if_id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+12,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+13,"id_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+14,"id_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+12,"id_inst_o", false,-1, 31,0);
    tracep->declBus(c+11,"id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+91,"id_op1_o", false,-1, 31,0);
    tracep->declBus(c+92,"id_op2_o", false,-1, 31,0);
    tracep->declBus(c+15,"id_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+16,"id_reg_wen", false,-1);
    tracep->declBus(c+97,"id_base_addr_o", false,-1, 31,0);
    tracep->declBus(c+17,"id_offset_addr_o", false,-1, 31,0);
    tracep->declBus(c+93,"regs_rs1_rdata_o", false,-1, 31,0);
    tracep->declBus(c+94,"regs_rs2_rdata_o", false,-1, 31,0);
    tracep->declBus(c+18,"id_ex_inst_o", false,-1, 31,0);
    tracep->declBus(c+19,"id_ex_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+20,"id_ex_op1_o", false,-1, 31,0);
    tracep->declBus(c+21,"id_ex_op2_o", false,-1, 31,0);
    tracep->declBus(c+22,"id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+23,"id_ex_reg_wen", false,-1);
    tracep->declBus(c+24,"id_ex_base_addr_o", false,-1, 31,0);
    tracep->declBus(c+25,"id_ex_offset_addr_o", false,-1, 31,0);
    tracep->declBus(c+26,"ex_rd_data_o", false,-1, 31,0);
    tracep->declBus(c+27,"ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+28,"ex_reg_wen_o", false,-1);
    tracep->declBus(c+29,"ex_jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+30,"ex_jump_en_o", false,-1);
    tracep->declBit(c+106,"ex_hold_flag_o", false,-1);
    tracep->declBus(c+29,"ctrl_jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+30,"ctrl_jump_en_o", false,-1);
    tracep->declBit(c+31,"ctrl_hold_flag_o", false,-1);
    tracep->pushNamePrefix("ctrl_inst ");
    tracep->declBus(c+29,"jump_addr_i", false,-1, 31,0);
    tracep->declBit(c+30,"jump_en_i", false,-1);
    tracep->declBit(c+106,"hold_flag_ex_i", false,-1);
    tracep->declBus(c+29,"jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+30,"jump_en_o", false,-1);
    tracep->declBit(c+31,"hold_flag_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_inst ");
    tracep->declBus(c+18,"inst_i", false,-1, 31,0);
    tracep->declBus(c+19,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+20,"op1_i", false,-1, 31,0);
    tracep->declBus(c+21,"op2_i", false,-1, 31,0);
    tracep->declBus(c+22,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+23,"reg_wen_i", false,-1);
    tracep->declBus(c+24,"base_addr_i", false,-1, 31,0);
    tracep->declBus(c+25,"offset_addr_i", false,-1, 31,0);
    tracep->declBus(c+26,"rd_wdata_o", false,-1, 31,0);
    tracep->declBus(c+27,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+28,"reg_wen_o", false,-1);
    tracep->declBus(c+29,"jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+30,"jump_en_o", false,-1);
    tracep->declBit(c+106,"hold_flag_o", false,-1);
    tracep->declBus(c+32,"opcode", false,-1, 6,0);
    tracep->declBus(c+33,"rd", false,-1, 4,0);
    tracep->declBus(c+34,"func3", false,-1, 2,0);
    tracep->declBus(c+35,"rs1", false,-1, 4,0);
    tracep->declBus(c+36,"rs2", false,-1, 4,0);
    tracep->declBus(c+37,"func7", false,-1, 6,0);
    tracep->declBus(c+38,"op1_i_add_op2_i", false,-1, 31,0);
    tracep->declBus(c+39,"op1_i_sub_op2_i", false,-1, 31,0);
    tracep->declBus(c+40,"op1_i_and_op2_i", false,-1, 31,0);
    tracep->declBus(c+41,"op1_i_xor_op2_i", false,-1, 31,0);
    tracep->declBus(c+42,"op1_i_or_op2_i", false,-1, 31,0);
    tracep->declBus(c+43,"op1_i_shift_left_op2_i", false,-1, 31,0);
    tracep->declBus(c+44,"op1_i_shift_right_op2_i", false,-1, 31,0);
    tracep->declBus(c+45,"base_addr_add_addr_offset", false,-1, 31,0);
    tracep->declBit(c+46,"op1_i_equal_op2_i", false,-1);
    tracep->declBit(c+47,"op1_i_less_op2_i_signed", false,-1);
    tracep->declBit(c+48,"op1_i_less_op2_i_unsigned", false,-1);
    tracep->declBus(c+49,"SRA_mask", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_ex_inst ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+31,"hold_flag_i", false,-1);
    tracep->declBus(c+12,"inst_i", false,-1, 31,0);
    tracep->declBus(c+11,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+91,"op1_i", false,-1, 31,0);
    tracep->declBus(c+92,"op2_i", false,-1, 31,0);
    tracep->declBus(c+15,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+16,"reg_wen_i", false,-1);
    tracep->declBus(c+97,"base_addr_i", false,-1, 31,0);
    tracep->declBus(c+17,"offset_addr_i", false,-1, 31,0);
    tracep->declBus(c+18,"inst_o", false,-1, 31,0);
    tracep->declBus(c+19,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+20,"op1_o", false,-1, 31,0);
    tracep->declBus(c+21,"op2_o", false,-1, 31,0);
    tracep->declBus(c+22,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+23,"reg_wen_o", false,-1);
    tracep->declBus(c+24,"base_addr_o", false,-1, 31,0);
    tracep->declBus(c+25,"offset_addr_o", false,-1, 31,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+31,"hold_flag_i", false,-1);
    tracep->declBus(c+107,"set_data", false,-1, 31,0);
    tracep->declBus(c+12,"data_i", false,-1, 31,0);
    tracep->declBus(c+18,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+31,"hold_flag_i", false,-1);
    tracep->declBus(c+108,"set_data", false,-1, 31,0);
    tracep->declBus(c+11,"data_i", false,-1, 31,0);
    tracep->declBus(c+19,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+31,"hold_flag_i", false,-1);
    tracep->declBus(c+108,"set_data", false,-1, 31,0);
    tracep->declBus(c+91,"data_i", false,-1, 31,0);
    tracep->declBus(c+20,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+31,"hold_flag_i", false,-1);
    tracep->declBus(c+108,"set_data", false,-1, 31,0);
    tracep->declBus(c+92,"data_i", false,-1, 31,0);
    tracep->declBus(c+21,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+109,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+31,"hold_flag_i", false,-1);
    tracep->declBus(c+110,"set_data", false,-1, 4,0);
    tracep->declBus(c+15,"data_i", false,-1, 4,0);
    tracep->declBus(c+22,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+111,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+31,"hold_flag_i", false,-1);
    tracep->declBus(c+106,"set_data", false,-1, 0,0);
    tracep->declBus(c+16,"data_i", false,-1, 0,0);
    tracep->declBus(c+23,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+31,"hold_flag_i", false,-1);
    tracep->declBus(c+108,"set_data", false,-1, 31,0);
    tracep->declBus(c+97,"data_i", false,-1, 31,0);
    tracep->declBus(c+24,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+31,"hold_flag_i", false,-1);
    tracep->declBus(c+108,"set_data", false,-1, 31,0);
    tracep->declBus(c+17,"data_i", false,-1, 31,0);
    tracep->declBus(c+25,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_inst ");
    tracep->declBus(c+12,"inst_i", false,-1, 31,0);
    tracep->declBus(c+11,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+93,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+94,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+13,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+14,"rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+12,"inst_o", false,-1, 31,0);
    tracep->declBus(c+11,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+91,"op1_o", false,-1, 31,0);
    tracep->declBus(c+92,"op2_o", false,-1, 31,0);
    tracep->declBus(c+15,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+16,"reg_wen", false,-1);
    tracep->declBus(c+97,"base_addr_o", false,-1, 31,0);
    tracep->declBus(c+17,"offset_addr_o", false,-1, 31,0);
    tracep->declBus(c+50,"opcode", false,-1, 6,0);
    tracep->declBus(c+51,"rd", false,-1, 4,0);
    tracep->declBus(c+52,"func3", false,-1, 2,0);
    tracep->declBus(c+53,"rs1", false,-1, 4,0);
    tracep->declBus(c+54,"rs2", false,-1, 4,0);
    tracep->declBus(c+55,"func7", false,-1, 6,0);
    tracep->declBus(c+56,"imm", false,-1, 11,0);
    tracep->declBus(c+54,"shamt", false,-1, 4,0);
    tracep->declBus(c+57,"immB", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_inst ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+31,"hold_flag_i", false,-1);
    tracep->declBus(c+6,"inst_i", false,-1, 31,0);
    tracep->declBus(c+5,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+11,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+12,"inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+31,"hold_flag_i", false,-1);
    tracep->declBus(c+107,"set_data", false,-1, 31,0);
    tracep->declBus(c+6,"data_i", false,-1, 31,0);
    tracep->declBus(c+12,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+31,"hold_flag_i", false,-1);
    tracep->declBus(c+108,"set_data", false,-1, 31,0);
    tracep->declBus(c+5,"data_i", false,-1, 31,0);
    tracep->declBus(c+11,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_fetch_inst ");
    tracep->declBus(c+5,"pc_addr_i", false,-1, 31,0);
    tracep->declBus(c+6,"rom2if_inst_i", false,-1, 31,0);
    tracep->declBus(c+5,"if2rom_addr_o", false,-1, 31,0);
    tracep->declBus(c+5,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+6,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBus(c+29,"jump_addr_i", false,-1, 31,0);
    tracep->declBit(c+30,"jump_en_i", false,-1);
    tracep->declBus(c+5,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_inst ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+13,"rs1_raddr_i", false,-1, 4,0);
    tracep->declBus(c+14,"rs2_raddr_i", false,-1, 4,0);
    tracep->declBus(c+93,"rs1_rdata_o", false,-1, 31,0);
    tracep->declBus(c+94,"rs2_rdata_o", false,-1, 31,0);
    tracep->declBus(c+27,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+26,"reg_wdata_i", false,-1, 31,0);
    tracep->declBit(c+28,"reg_wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+58+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+90,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("rom_inst ");
    tracep->declBus(c+5,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+6,"inst_o", false,-1, 31,0);
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
    tracep->fullIData(oldp+1,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                              [3U]),32);
    tracep->fullIData(oldp+2,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                              [0x1aU]),32);
    tracep->fullIData(oldp+3,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs
                              [0x1bU]),32);
    tracep->fullIData(oldp+4,(vlSelf->tb__DOT__r),32);
    tracep->fullIData(oldp+5,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o),32);
    tracep->fullIData(oldp+6,(vlSelf->tb__DOT__soc_inst__DOT__rom_inst__DOT__rom_mem
                              [(0xfffU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
                                          >> 2U))]),32);
    tracep->fullIData(oldp+7,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__rd_wr_equ_flag)
                                ? vlSelf->tb__DOT__soc_inst__DOT__ram_w_data_o
                                : vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__r_data_write)),32);
    tracep->fullBit(oldp+8,(vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__rd_wr_equ_flag));
    tracep->fullIData(oldp+9,(vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__w_data_reg),32);
    tracep->fullIData(oldp+10,(vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__r_data_write),32);
    tracep->fullIData(oldp+11,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o),32);
    tracep->fullIData(oldp+12,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o),32);
    tracep->fullCData(oldp+13,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o),5);
    tracep->fullCData(oldp+14,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o),5);
    tracep->fullCData(oldp+15,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o),5);
    tracep->fullBit(oldp+16,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen));
    tracep->fullIData(oldp+17,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_offset_addr_o),32);
    tracep->fullIData(oldp+18,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o),32);
    tracep->fullIData(oldp+19,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o),32);
    tracep->fullIData(oldp+20,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o),32);
    tracep->fullIData(oldp+21,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o),32);
    tracep->fullCData(oldp+22,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+23,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen));
    tracep->fullIData(oldp+24,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_base_addr_o),32);
    tracep->fullIData(oldp+25,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_offset_addr_o),32);
    tracep->fullIData(oldp+26,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o),32);
    tracep->fullCData(oldp+27,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o),5);
    tracep->fullBit(oldp+28,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o));
    tracep->fullIData(oldp+29,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
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
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
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
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
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
    tracep->fullBit(oldp+30,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o));
    tracep->fullBit(oldp+31,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_hold_flag_o));
    tracep->fullCData(oldp+32,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)),7);
    tracep->fullCData(oldp+33,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+34,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+35,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+36,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+37,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                >> 0x19U)),7);
    tracep->fullIData(oldp+38,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),32);
    tracep->fullIData(oldp+39,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o 
                                - vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),32);
    tracep->fullIData(oldp+40,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),32);
    tracep->fullIData(oldp+41,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),32);
    tracep->fullIData(oldp+42,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),32);
    tracep->fullIData(oldp+43,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i),32);
    tracep->fullIData(oldp+44,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i),32);
    tracep->fullIData(oldp+45,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),32);
    tracep->fullBit(oldp+46,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
    tracep->fullBit(oldp+47,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
    tracep->fullBit(oldp+48,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
    tracep->fullIData(oldp+49,((0xffffffffU >> (0x1fU 
                                                & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o))),32);
    tracep->fullCData(oldp+50,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)),7);
    tracep->fullCData(oldp+51,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+52,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+53,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+54,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+55,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                >> 0x19U)),7);
    tracep->fullSData(oldp+56,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                >> 0x14U)),12);
    tracep->fullIData(oldp+57,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immB),32);
    tracep->fullIData(oldp+58,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0]),32);
    tracep->fullIData(oldp+59,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[1]),32);
    tracep->fullIData(oldp+60,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[2]),32);
    tracep->fullIData(oldp+61,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[3]),32);
    tracep->fullIData(oldp+62,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[4]),32);
    tracep->fullIData(oldp+63,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[5]),32);
    tracep->fullIData(oldp+64,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[6]),32);
    tracep->fullIData(oldp+65,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[7]),32);
    tracep->fullIData(oldp+66,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[8]),32);
    tracep->fullIData(oldp+67,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[9]),32);
    tracep->fullIData(oldp+68,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[10]),32);
    tracep->fullIData(oldp+69,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[11]),32);
    tracep->fullIData(oldp+70,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[12]),32);
    tracep->fullIData(oldp+71,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[13]),32);
    tracep->fullIData(oldp+72,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[14]),32);
    tracep->fullIData(oldp+73,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[15]),32);
    tracep->fullIData(oldp+74,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[16]),32);
    tracep->fullIData(oldp+75,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[17]),32);
    tracep->fullIData(oldp+76,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[18]),32);
    tracep->fullIData(oldp+77,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[19]),32);
    tracep->fullIData(oldp+78,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[20]),32);
    tracep->fullIData(oldp+79,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[21]),32);
    tracep->fullIData(oldp+80,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[22]),32);
    tracep->fullIData(oldp+81,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[23]),32);
    tracep->fullIData(oldp+82,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[24]),32);
    tracep->fullIData(oldp+83,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[25]),32);
    tracep->fullIData(oldp+84,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[26]),32);
    tracep->fullIData(oldp+85,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[27]),32);
    tracep->fullIData(oldp+86,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[28]),32);
    tracep->fullIData(oldp+87,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[29]),32);
    tracep->fullIData(oldp+88,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[30]),32);
    tracep->fullIData(oldp+89,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[31]),32);
    tracep->fullIData(oldp+90,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullIData(oldp+91,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o),32);
    tracep->fullIData(oldp+92,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o),32);
    tracep->fullIData(oldp+93,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o),32);
    tracep->fullIData(oldp+94,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o),32);
    tracep->fullBit(oldp+95,(vlSelf->clk));
    tracep->fullBit(oldp+96,(vlSelf->rst));
    tracep->fullIData(oldp+97,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                 ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                     ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                         ? 0U : ((8U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o
                                                     : 0U)
                                                    : 0U)
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
    tracep->fullBit(oldp+98,(vlSelf->tb__DOT__soc_inst__DOT__ram_w_en));
    tracep->fullSData(oldp+99,(vlSelf->tb__DOT__soc_inst__DOT__ram_w_addr_o),12);
    tracep->fullIData(oldp+100,(vlSelf->tb__DOT__soc_inst__DOT__ram_w_data_o),32);
    tracep->fullBit(oldp+101,(vlSelf->tb__DOT__soc_inst__DOT__ram_r_en));
    tracep->fullSData(oldp+102,(vlSelf->tb__DOT__soc_inst__DOT__ram_r_addr_o),12);
    tracep->fullIData(oldp+103,(0x20U),32);
    tracep->fullIData(oldp+104,(0xcU),32);
    tracep->fullIData(oldp+105,(0x1000U),32);
    tracep->fullBit(oldp+106,(0U));
    tracep->fullIData(oldp+107,(0x13U),32);
    tracep->fullIData(oldp+108,(0U),32);
    tracep->fullIData(oldp+109,(5U),32);
    tracep->fullCData(oldp+110,(0U),5);
    tracep->fullIData(oldp+111,(1U),32);
}
