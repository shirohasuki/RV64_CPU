// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc__Syms.h"


VL_ATTR_COLD void Vsoc___024root__trace_init_sub__TOP__0(Vsoc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->pushNamePrefix("soc ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+1,"riscv_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+2,"rom_inst_o", false,-1, 31,0);
    tracep->declBit(c+98,"riscv_w_en", false,-1);
    tracep->declBus(c+99,"riscv_w_addr_o", false,-1, 11,0);
    tracep->declBus(c+100,"riscv_w_data_o", false,-1, 31,0);
    tracep->declBit(c+101,"riscv_r_en", false,-1);
    tracep->declBus(c+102,"riscv_r_addr_o", false,-1, 11,0);
    tracep->declBus(c+3,"ram_r_data_o", false,-1, 31,0);
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
    tracep->declBus(c+3,"r_data_o", false,-1, 31,0);
    tracep->declBit(c+4,"rd_wr_equ_flag", false,-1);
    tracep->declBus(c+5,"w_data_reg", false,-1, 31,0);
    tracep->declBus(c+6,"r_data_write", false,-1, 31,0);
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
    tracep->declBus(c+6,"r_data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("riscv_inst ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+2,"inst_i", false,-1, 31,0);
    tracep->declBus(c+1,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+3,"mem_r_data_i", false,-1, 31,0);
    tracep->declBit(c+101,"mem_r_req_o", false,-1);
    tracep->declBus(c+102,"mem_r_addr_o", false,-1, 11,0);
    tracep->declBit(c+98,"mem_w_req_o", false,-1);
    tracep->declBus(c+99,"mem_w_addr_o", false,-1, 11,0);
    tracep->declBus(c+100,"mem_w_data_o", false,-1, 31,0);
    tracep->declBus(c+1,"pc_reg_pc_o", false,-1, 31,0);
    tracep->declBus(c+1,"if_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+2,"if_inst_o", false,-1, 31,0);
    tracep->declBus(c+7,"if_id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+8,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+9,"id_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+10,"id_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+8,"id_inst_o", false,-1, 31,0);
    tracep->declBus(c+7,"id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+91,"id_op1_o", false,-1, 31,0);
    tracep->declBus(c+92,"id_op2_o", false,-1, 31,0);
    tracep->declBus(c+11,"id_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+12,"id_reg_wen", false,-1);
    tracep->declBus(c+97,"id_base_addr_o", false,-1, 31,0);
    tracep->declBus(c+13,"id_offset_addr_o", false,-1, 31,0);
    tracep->declBus(c+93,"regs_rs1_rdata_o", false,-1, 31,0);
    tracep->declBus(c+94,"regs_rs2_rdata_o", false,-1, 31,0);
    tracep->declBus(c+14,"id_ex_inst_o", false,-1, 31,0);
    tracep->declBus(c+15,"id_ex_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+16,"id_ex_op1_o", false,-1, 31,0);
    tracep->declBus(c+17,"id_ex_op2_o", false,-1, 31,0);
    tracep->declBus(c+18,"id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+19,"id_ex_reg_wen", false,-1);
    tracep->declBus(c+20,"id_ex_base_addr_o", false,-1, 31,0);
    tracep->declBus(c+21,"id_ex_offset_addr_o", false,-1, 31,0);
    tracep->declBus(c+22,"ex_rd_data_o", false,-1, 31,0);
    tracep->declBus(c+23,"ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+24,"ex_reg_wen_o", false,-1);
    tracep->declBus(c+25,"ex_jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+26,"ex_jump_en_o", false,-1);
    tracep->declBit(c+106,"ex_hold_flag_o", false,-1);
    tracep->declBus(c+25,"ctrl_jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+26,"ctrl_jump_en_o", false,-1);
    tracep->declBit(c+27,"ctrl_hold_flag_o", false,-1);
    tracep->pushNamePrefix("ctrl_inst ");
    tracep->declBus(c+25,"jump_addr_i", false,-1, 31,0);
    tracep->declBit(c+26,"jump_en_i", false,-1);
    tracep->declBit(c+106,"hold_flag_ex_i", false,-1);
    tracep->declBus(c+25,"jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+26,"jump_en_o", false,-1);
    tracep->declBit(c+27,"hold_flag_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_inst ");
    tracep->declBus(c+14,"inst_i", false,-1, 31,0);
    tracep->declBus(c+15,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+16,"op1_i", false,-1, 31,0);
    tracep->declBus(c+17,"op2_i", false,-1, 31,0);
    tracep->declBus(c+18,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+19,"reg_wen_i", false,-1);
    tracep->declBus(c+20,"base_addr_i", false,-1, 31,0);
    tracep->declBus(c+21,"offset_addr_i", false,-1, 31,0);
    tracep->declBus(c+22,"rd_wdata_o", false,-1, 31,0);
    tracep->declBus(c+23,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+24,"reg_wen_o", false,-1);
    tracep->declBus(c+25,"jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+26,"jump_en_o", false,-1);
    tracep->declBit(c+106,"hold_flag_o", false,-1);
    tracep->declBus(c+28,"opcode", false,-1, 6,0);
    tracep->declBus(c+29,"rd", false,-1, 4,0);
    tracep->declBus(c+30,"func3", false,-1, 2,0);
    tracep->declBus(c+31,"rs1", false,-1, 4,0);
    tracep->declBus(c+32,"rs2", false,-1, 4,0);
    tracep->declBus(c+33,"func7", false,-1, 6,0);
    tracep->declBus(c+34,"op1_i_add_op2_i", false,-1, 31,0);
    tracep->declBus(c+35,"op1_i_sub_op2_i", false,-1, 31,0);
    tracep->declBus(c+36,"op1_i_and_op2_i", false,-1, 31,0);
    tracep->declBus(c+37,"op1_i_xor_op2_i", false,-1, 31,0);
    tracep->declBus(c+38,"op1_i_or_op2_i", false,-1, 31,0);
    tracep->declBus(c+39,"op1_i_shift_left_op2_i", false,-1, 31,0);
    tracep->declBus(c+40,"op1_i_shift_right_op2_i", false,-1, 31,0);
    tracep->declBus(c+41,"base_addr_add_addr_offset", false,-1, 31,0);
    tracep->declBit(c+42,"op1_i_equal_op2_i", false,-1);
    tracep->declBit(c+43,"op1_i_less_op2_i_signed", false,-1);
    tracep->declBit(c+44,"op1_i_less_op2_i_unsigned", false,-1);
    tracep->declBus(c+45,"SRA_mask", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_ex_inst ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+27,"hold_flag_i", false,-1);
    tracep->declBus(c+8,"inst_i", false,-1, 31,0);
    tracep->declBus(c+7,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+91,"op1_i", false,-1, 31,0);
    tracep->declBus(c+92,"op2_i", false,-1, 31,0);
    tracep->declBus(c+11,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+12,"reg_wen_i", false,-1);
    tracep->declBus(c+97,"base_addr_i", false,-1, 31,0);
    tracep->declBus(c+13,"offset_addr_i", false,-1, 31,0);
    tracep->declBus(c+14,"inst_o", false,-1, 31,0);
    tracep->declBus(c+15,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+16,"op1_o", false,-1, 31,0);
    tracep->declBus(c+17,"op2_o", false,-1, 31,0);
    tracep->declBus(c+18,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+19,"reg_wen_o", false,-1);
    tracep->declBus(c+20,"base_addr_o", false,-1, 31,0);
    tracep->declBus(c+21,"offset_addr_o", false,-1, 31,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+27,"hold_flag_i", false,-1);
    tracep->declBus(c+107,"set_data", false,-1, 31,0);
    tracep->declBus(c+8,"data_i", false,-1, 31,0);
    tracep->declBus(c+14,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+27,"hold_flag_i", false,-1);
    tracep->declBus(c+108,"set_data", false,-1, 31,0);
    tracep->declBus(c+7,"data_i", false,-1, 31,0);
    tracep->declBus(c+15,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+27,"hold_flag_i", false,-1);
    tracep->declBus(c+108,"set_data", false,-1, 31,0);
    tracep->declBus(c+91,"data_i", false,-1, 31,0);
    tracep->declBus(c+16,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+27,"hold_flag_i", false,-1);
    tracep->declBus(c+108,"set_data", false,-1, 31,0);
    tracep->declBus(c+92,"data_i", false,-1, 31,0);
    tracep->declBus(c+17,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+109,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+27,"hold_flag_i", false,-1);
    tracep->declBus(c+110,"set_data", false,-1, 4,0);
    tracep->declBus(c+11,"data_i", false,-1, 4,0);
    tracep->declBus(c+18,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+111,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+27,"hold_flag_i", false,-1);
    tracep->declBus(c+106,"set_data", false,-1, 0,0);
    tracep->declBus(c+12,"data_i", false,-1, 0,0);
    tracep->declBus(c+19,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+27,"hold_flag_i", false,-1);
    tracep->declBus(c+108,"set_data", false,-1, 31,0);
    tracep->declBus(c+97,"data_i", false,-1, 31,0);
    tracep->declBus(c+20,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+27,"hold_flag_i", false,-1);
    tracep->declBus(c+108,"set_data", false,-1, 31,0);
    tracep->declBus(c+13,"data_i", false,-1, 31,0);
    tracep->declBus(c+21,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_inst ");
    tracep->declBus(c+8,"inst_i", false,-1, 31,0);
    tracep->declBus(c+7,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+93,"rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+94,"rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+9,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+10,"rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+8,"inst_o", false,-1, 31,0);
    tracep->declBus(c+7,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+91,"op1_o", false,-1, 31,0);
    tracep->declBus(c+92,"op2_o", false,-1, 31,0);
    tracep->declBus(c+11,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+12,"reg_wen", false,-1);
    tracep->declBus(c+97,"base_addr_o", false,-1, 31,0);
    tracep->declBus(c+13,"offset_addr_o", false,-1, 31,0);
    tracep->declBus(c+46,"opcode", false,-1, 6,0);
    tracep->declBus(c+47,"rd", false,-1, 4,0);
    tracep->declBus(c+48,"func3", false,-1, 2,0);
    tracep->declBus(c+49,"rs1", false,-1, 4,0);
    tracep->declBus(c+50,"rs2", false,-1, 4,0);
    tracep->declBus(c+51,"func7", false,-1, 6,0);
    tracep->declBus(c+52,"imm", false,-1, 11,0);
    tracep->declBus(c+50,"shamt", false,-1, 4,0);
    tracep->declBus(c+53,"immI", false,-1, 31,0);
    tracep->declBus(c+54,"immU", false,-1, 31,0);
    tracep->declBus(c+55,"immS", false,-1, 31,0);
    tracep->declBus(c+56,"immB", false,-1, 31,0);
    tracep->declBus(c+57,"immJ", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_inst ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+27,"hold_flag_i", false,-1);
    tracep->declBus(c+2,"inst_i", false,-1, 31,0);
    tracep->declBus(c+1,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+7,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+8,"inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+27,"hold_flag_i", false,-1);
    tracep->declBus(c+107,"set_data", false,-1, 31,0);
    tracep->declBus(c+2,"data_i", false,-1, 31,0);
    tracep->declBus(c+8,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+103,"DW", false,-1, 31,0);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+27,"hold_flag_i", false,-1);
    tracep->declBus(c+108,"set_data", false,-1, 31,0);
    tracep->declBus(c+1,"data_i", false,-1, 31,0);
    tracep->declBus(c+7,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_fetch_inst ");
    tracep->declBus(c+1,"pc_addr_i", false,-1, 31,0);
    tracep->declBus(c+2,"rom2if_inst_i", false,-1, 31,0);
    tracep->declBus(c+1,"if2rom_addr_o", false,-1, 31,0);
    tracep->declBus(c+1,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+2,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBus(c+25,"jump_addr_i", false,-1, 31,0);
    tracep->declBit(c+26,"jump_en_i", false,-1);
    tracep->declBus(c+1,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_inst ");
    tracep->declBit(c+95,"clk", false,-1);
    tracep->declBit(c+96,"rst", false,-1);
    tracep->declBus(c+9,"rs1_raddr_i", false,-1, 4,0);
    tracep->declBus(c+10,"rs2_raddr_i", false,-1, 4,0);
    tracep->declBus(c+93,"rs1_rdata_o", false,-1, 31,0);
    tracep->declBus(c+94,"rs2_rdata_o", false,-1, 31,0);
    tracep->declBus(c+23,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+22,"reg_wdata_i", false,-1, 31,0);
    tracep->declBit(c+24,"reg_wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+58+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+90,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("rom_inst ");
    tracep->declBus(c+1,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+2,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsoc___024root__trace_init_top(Vsoc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root__trace_init_top\n"); );
    // Body
    Vsoc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsoc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vsoc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vsoc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsoc___024root__trace_register(Vsoc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsoc___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsoc___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsoc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsoc___024root__trace_full_sub_0(Vsoc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsoc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root__trace_full_top_0\n"); );
    // Init
    Vsoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc___024root*>(voidSelf);
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsoc___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vsoc___024root__trace_full_sub_0(Vsoc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->soc__DOT__riscv_inst__DOT__pc_reg_pc_o),32);
    tracep->fullIData(oldp+2,(vlSelf->soc__DOT__rom_inst__DOT__rom_mem
                              [(0xfffU & (vlSelf->soc__DOT__riscv_inst__DOT__pc_reg_pc_o 
                                          >> 2U))]),32);
    tracep->fullIData(oldp+3,(((IData)(vlSelf->soc__DOT__ram_inst__DOT__rd_wr_equ_flag)
                                ? vlSelf->soc__DOT__riscv_w_data_o
                                : vlSelf->soc__DOT__ram_inst__DOT__r_data_write)),32);
    tracep->fullBit(oldp+4,(vlSelf->soc__DOT__ram_inst__DOT__rd_wr_equ_flag));
    tracep->fullIData(oldp+5,(vlSelf->soc__DOT__ram_inst__DOT__w_data_reg),32);
    tracep->fullIData(oldp+6,(vlSelf->soc__DOT__ram_inst__DOT__r_data_write),32);
    tracep->fullIData(oldp+7,(vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o),32);
    tracep->fullIData(oldp+8,(vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o),32);
    tracep->fullCData(oldp+9,(vlSelf->soc__DOT__riscv_inst__DOT__id_rs1_addr_o),5);
    tracep->fullCData(oldp+10,(vlSelf->soc__DOT__riscv_inst__DOT__id_rs2_addr_o),5);
    tracep->fullCData(oldp+11,(vlSelf->soc__DOT__riscv_inst__DOT__id_rd_addr_o),5);
    tracep->fullBit(oldp+12,(vlSelf->soc__DOT__riscv_inst__DOT__id_reg_wen));
    tracep->fullIData(oldp+13,(vlSelf->soc__DOT__riscv_inst__DOT__id_offset_addr_o),32);
    tracep->fullIData(oldp+14,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o),32);
    tracep->fullIData(oldp+15,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_addr_o),32);
    tracep->fullIData(oldp+16,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o),32);
    tracep->fullIData(oldp+17,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o),32);
    tracep->fullCData(oldp+18,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+19,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_reg_wen));
    tracep->fullIData(oldp+20,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_base_addr_o),32);
    tracep->fullIData(oldp+21,(vlSelf->soc__DOT__riscv_inst__DOT__id_ex_offset_addr_o),32);
    tracep->fullIData(oldp+22,(vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_data_o),32);
    tracep->fullCData(oldp+23,(vlSelf->soc__DOT__riscv_inst__DOT__ex_rd_addr_o),5);
    tracep->fullBit(oldp+24,(vlSelf->soc__DOT__riscv_inst__DOT__ex_reg_wen_o));
    tracep->fullIData(oldp+25,(((0x40U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                     ? ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                         ? 0U : ((8U 
                                                  & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                     ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                     ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                      ? vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                       ? 0U
                                                       : vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset))
                                                     : 0U)
                                                    : 0U))))
                                     : 0U) : 0U)),32);
    tracep->fullBit(oldp+26,(vlSelf->soc__DOT__riscv_inst__DOT__ex_jump_en_o));
    tracep->fullBit(oldp+27,(vlSelf->soc__DOT__riscv_inst__DOT__ctrl_hold_flag_o));
    tracep->fullCData(oldp+28,((0x7fU & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o)),7);
    tracep->fullCData(oldp+29,((0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+30,((7U & (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+31,((0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+32,((0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+33,((vlSelf->soc__DOT__riscv_inst__DOT__id_ex_inst_o 
                                >> 0x19U)),7);
    tracep->fullIData(oldp+34,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),32);
    tracep->fullIData(oldp+35,((vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op1_o 
                                - vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o)),32);
    tracep->fullIData(oldp+36,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),32);
    tracep->fullIData(oldp+37,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),32);
    tracep->fullIData(oldp+38,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),32);
    tracep->fullIData(oldp+39,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i),32);
    tracep->fullIData(oldp+40,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i),32);
    tracep->fullIData(oldp+41,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),32);
    tracep->fullBit(oldp+42,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
    tracep->fullBit(oldp+43,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
    tracep->fullBit(oldp+44,(vlSelf->soc__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
    tracep->fullIData(oldp+45,((0xffffffffU >> (0x1fU 
                                                & vlSelf->soc__DOT__riscv_inst__DOT__id_ex_op2_o))),32);
    tracep->fullCData(oldp+46,((0x7fU & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)),7);
    tracep->fullCData(oldp+47,((0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+48,((7U & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+49,((0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+50,((0x1fU & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+51,((vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                >> 0x19U)),7);
    tracep->fullSData(oldp+52,((vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                >> 0x14U)),12);
    tracep->fullIData(oldp+53,(vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immI),32);
    tracep->fullIData(oldp+54,((0xfffff000U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)),32);
    tracep->fullIData(oldp+55,((((- (IData)((vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                   >> 7U))))),32);
    tracep->fullIData(oldp+56,(vlSelf->soc__DOT__riscv_inst__DOT__id_inst__DOT__immB),32);
    tracep->fullIData(oldp+57,((((- (IData)((vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                             >> 0x1fU))) 
                                 << 0x14U) | ((0xff000U 
                                               & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o) 
                                              | ((0x800U 
                                                  & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o 
                                                       >> 0x14U)))))),32);
    tracep->fullIData(oldp+58,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0]),32);
    tracep->fullIData(oldp+59,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[1]),32);
    tracep->fullIData(oldp+60,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[2]),32);
    tracep->fullIData(oldp+61,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[3]),32);
    tracep->fullIData(oldp+62,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[4]),32);
    tracep->fullIData(oldp+63,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[5]),32);
    tracep->fullIData(oldp+64,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[6]),32);
    tracep->fullIData(oldp+65,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[7]),32);
    tracep->fullIData(oldp+66,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[8]),32);
    tracep->fullIData(oldp+67,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[9]),32);
    tracep->fullIData(oldp+68,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[10]),32);
    tracep->fullIData(oldp+69,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[11]),32);
    tracep->fullIData(oldp+70,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[12]),32);
    tracep->fullIData(oldp+71,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[13]),32);
    tracep->fullIData(oldp+72,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[14]),32);
    tracep->fullIData(oldp+73,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[15]),32);
    tracep->fullIData(oldp+74,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[16]),32);
    tracep->fullIData(oldp+75,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[17]),32);
    tracep->fullIData(oldp+76,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[18]),32);
    tracep->fullIData(oldp+77,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[19]),32);
    tracep->fullIData(oldp+78,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[20]),32);
    tracep->fullIData(oldp+79,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[21]),32);
    tracep->fullIData(oldp+80,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[22]),32);
    tracep->fullIData(oldp+81,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[23]),32);
    tracep->fullIData(oldp+82,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[24]),32);
    tracep->fullIData(oldp+83,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[25]),32);
    tracep->fullIData(oldp+84,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[26]),32);
    tracep->fullIData(oldp+85,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[27]),32);
    tracep->fullIData(oldp+86,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[28]),32);
    tracep->fullIData(oldp+87,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[29]),32);
    tracep->fullIData(oldp+88,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[30]),32);
    tracep->fullIData(oldp+89,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__regs[31]),32);
    tracep->fullIData(oldp+90,(vlSelf->soc__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullIData(oldp+91,(vlSelf->soc__DOT__riscv_inst__DOT__id_op1_o),32);
    tracep->fullIData(oldp+92,(vlSelf->soc__DOT__riscv_inst__DOT__id_op2_o),32);
    tracep->fullIData(oldp+93,(vlSelf->soc__DOT__riscv_inst__DOT__regs_rs1_rdata_o),32);
    tracep->fullIData(oldp+94,(vlSelf->soc__DOT__riscv_inst__DOT__regs_rs2_rdata_o),32);
    tracep->fullBit(oldp+95,(vlSelf->clk));
    tracep->fullBit(oldp+96,(vlSelf->rst));
    tracep->fullIData(oldp+97,(((0x40U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                 ? ((0x20U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                     ? ((0x10U & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                         ? 0U : ((8U 
                                                  & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                     ? vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                     ? vlSelf->soc__DOT__riscv_inst__DOT__regs_rs1_rdata_o
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                      ? vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_o)
                                                       ? 0U
                                                       : vlSelf->soc__DOT__riscv_inst__DOT__if_id_inst_addr_o))
                                                     : 0U)
                                                    : 0U))))
                                     : 0U) : 0U)),32);
    tracep->fullBit(oldp+98,(vlSelf->soc__DOT__riscv_w_en));
    tracep->fullSData(oldp+99,(vlSelf->soc__DOT__riscv_w_addr_o),12);
    tracep->fullIData(oldp+100,(vlSelf->soc__DOT__riscv_w_data_o),32);
    tracep->fullBit(oldp+101,(vlSelf->soc__DOT__riscv_r_en));
    tracep->fullSData(oldp+102,(vlSelf->soc__DOT__riscv_r_addr_o),12);
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
