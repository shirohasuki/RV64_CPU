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
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->pushNamePrefix("tb ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->pushNamePrefix("soc_inst ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+1,"riscv_ram_wen", false,-1);
    tracep->declQuad(c+2,"riscv_ram_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+4,"riscv_ram_wdata_o", false,-1, 63,0);
    tracep->declBus(c+6,"riscv_ram_wmask", false,-1, 7,0);
    tracep->declBit(c+7,"riscv_ram_ren", false,-1);
    tracep->declQuad(c+199,"riscv_ram_raddr_o", false,-1, 63,0);
    tracep->declBit(c+8,"riscv_ram_hold_flag_o", false,-1);
    tracep->declQuad(c+9,"ram_riscv_rdata_o", false,-1, 63,0);
    tracep->pushNamePrefix("ram_inst ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+8,"hold_flag_i", false,-1);
    tracep->declBit(c+1,"mem_wen", false,-1);
    tracep->declQuad(c+2,"mem_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+4,"mem_wdata_i", false,-1, 63,0);
    tracep->declBus(c+6,"mem_wmask", false,-1, 7,0);
    tracep->declBit(c+7,"mem_ren", false,-1);
    tracep->declQuad(c+199,"mem_raddr_i", false,-1, 63,0);
    tracep->declQuad(c+9,"mem_rdata_o", false,-1, 63,0);
    tracep->pushNamePrefix("mem1 ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+8,"hold_flag_i", false,-1);
    tracep->declBit(c+7,"ren", false,-1);
    tracep->declBit(c+1,"wen", false,-1);
    tracep->declQuad(c+199,"raddr", false,-1, 63,0);
    tracep->declQuad(c+9,"rdata", false,-1, 63,0);
    tracep->declQuad(c+2,"waddr", false,-1, 63,0);
    tracep->declQuad(c+4,"wdata", false,-1, 63,0);
    tracep->declBus(c+6,"mask", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("riscv_inst ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declQuad(c+9,"mem_rdata_i", false,-1, 63,0);
    tracep->declBit(c+7,"mem_ren_o", false,-1);
    tracep->declQuad(c+199,"mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+1,"mem_wen_o", false,-1);
    tracep->declQuad(c+2,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+4,"mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+6,"mem_wmask_o", false,-1, 7,0);
    tracep->declBit(c+8,"hold_flag_o", false,-1);
    tracep->declQuad(c+11,"pc_reg_pc_o", false,-1, 63,0);
    tracep->declQuad(c+11,"if_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+13,"if_inst_o", false,-1, 31,0);
    tracep->declQuad(c+14,"if_id_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+16,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+17,"id_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+18,"id_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+16,"id_inst_o", false,-1, 31,0);
    tracep->declQuad(c+14,"id_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+187,"id_op1_o", false,-1, 63,0);
    tracep->declQuad(c+189,"id_op2_o", false,-1, 63,0);
    tracep->declBus(c+19,"id_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+20,"id_reg_wen", false,-1);
    tracep->declQuad(c+191,"id_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+21,"id_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+193,"regs_rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+195,"regs_rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+23,"id_ex_inst_o", false,-1, 31,0);
    tracep->declQuad(c+24,"id_ex_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+26,"id_ex_op1_o", false,-1, 63,0);
    tracep->declQuad(c+28,"id_ex_op2_o", false,-1, 63,0);
    tracep->declBus(c+30,"id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+31,"id_ex_reg_wen", false,-1);
    tracep->declQuad(c+32,"id_ex_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+34,"id_ex_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+36,"ex_rd_data_o", false,-1, 63,0);
    tracep->declBus(c+38,"ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+39,"ex_reg_wen_o", false,-1);
    tracep->declQuad(c+24,"ex_reg_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+40,"ex_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+42,"ex_jump_en_o", false,-1);
    tracep->declBit(c+201,"ex_hold_flag_o", false,-1);
    tracep->declQuad(c+40,"ctrl_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+42,"ctrl_jump_en_o", false,-1);
    tracep->declBit(c+8,"ctrl_hold_flag_o", false,-1);
    tracep->pushNamePrefix("ctrl_inst ");
    tracep->declQuad(c+40,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+42,"jump_en_i", false,-1);
    tracep->declBit(c+201,"hold_flag_ex_i", false,-1);
    tracep->declQuad(c+40,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+42,"jump_en_o", false,-1);
    tracep->declBit(c+8,"hold_flag_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_inst ");
    tracep->declBus(c+23,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+24,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+26,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+28,"op2_i", false,-1, 63,0);
    tracep->declBus(c+30,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+31,"reg_wen_i", false,-1);
    tracep->declQuad(c+32,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+34,"offset_addr_i", false,-1, 63,0);
    tracep->declQuad(c+36,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+38,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+39,"reg_wen_o", false,-1);
    tracep->declQuad(c+24,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+40,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+42,"jump_en_o", false,-1);
    tracep->declBit(c+201,"hold_flag_o", false,-1);
    tracep->declQuad(c+9,"mem_rdata_i", false,-1, 63,0);
    tracep->declBit(c+1,"mem_wen_o", false,-1);
    tracep->declQuad(c+2,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+4,"mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+6,"mem_wmask", false,-1, 7,0);
    tracep->declBus(c+43,"opcode", false,-1, 6,0);
    tracep->declBus(c+44,"rd", false,-1, 4,0);
    tracep->declBus(c+45,"func3", false,-1, 2,0);
    tracep->declBus(c+46,"rs1", false,-1, 4,0);
    tracep->declBus(c+47,"rs2", false,-1, 4,0);
    tracep->declBus(c+48,"func7", false,-1, 6,0);
    tracep->declQuad(c+49,"op1_i_add_op2_i", false,-1, 63,0);
    tracep->declQuad(c+51,"op1_i_sub_op2_i", false,-1, 63,0);
    tracep->declQuad(c+53,"op1_i_mul_op2_i", false,-1, 63,0);
    tracep->declQuad(c+55,"op1_i_and_op2_i", false,-1, 63,0);
    tracep->declQuad(c+57,"op1_i_xor_op2_i", false,-1, 63,0);
    tracep->declQuad(c+59,"op1_i_or_op2_i", false,-1, 63,0);
    tracep->declQuad(c+61,"op1_i_rem_op2_i", false,-1, 63,0);
    tracep->declQuad(c+63,"op1_i_div_op2_i", false,-1, 63,0);
    tracep->declQuad(c+65,"op1_i_shift_left_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+67,"op1_i_shift_right_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+69,"op1_i_shift_right_op2_i_signed", false,-1, 63,0);
    tracep->declQuad(c+71,"base_addr_add_addr_offset", false,-1, 63,0);
    tracep->declBit(c+73,"op1_i_equal_op2_i", false,-1);
    tracep->declBit(c+74,"op1_i_less_op2_i_signed", false,-1);
    tracep->declBit(c+75,"op1_i_less_op2_i_unsigned", false,-1);
    tracep->declQuad(c+76,"compress_add", false,-1, 63,0);
    tracep->declQuad(c+78,"compress_sub", false,-1, 63,0);
    tracep->declQuad(c+80,"compress_mul", false,-1, 63,0);
    tracep->declQuad(c+82,"compress_and", false,-1, 63,0);
    tracep->declQuad(c+84,"compress_xor", false,-1, 63,0);
    tracep->declQuad(c+86,"compress_or", false,-1, 63,0);
    tracep->declQuad(c+88,"compress_rem", false,-1, 63,0);
    tracep->declQuad(c+90,"compress_div", false,-1, 63,0);
    tracep->declQuad(c+92,"compress_shift_left_unsigned", false,-1, 63,0);
    tracep->declQuad(c+94,"compress_shift_right_unsigned", false,-1, 63,0);
    tracep->declQuad(c+96,"compress_shift_right_signed", false,-1, 63,0);
    tracep->declQuad(c+98,"compress_addr_offset", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_ex_inst ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+8,"hold_flag_i", false,-1);
    tracep->declBus(c+16,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+14,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+187,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+189,"op2_i", false,-1, 63,0);
    tracep->declBus(c+19,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+20,"reg_wen_i", false,-1);
    tracep->declQuad(c+191,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+21,"offset_addr_i", false,-1, 63,0);
    tracep->declBus(c+23,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+24,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+26,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+28,"op2_o", false,-1, 63,0);
    tracep->declBus(c+30,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+31,"reg_wen_o", false,-1);
    tracep->declQuad(c+32,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+34,"offset_addr_o", false,-1, 63,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+202,"DW", false,-1, 31,0);
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+8,"hold_flag_i", false,-1);
    tracep->declBus(c+203,"set_data", false,-1, 31,0);
    tracep->declBus(c+16,"data_i", false,-1, 31,0);
    tracep->declBus(c+23,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+204,"DW", false,-1, 31,0);
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+8,"hold_flag_i", false,-1);
    tracep->declQuad(c+205,"set_data", false,-1, 63,0);
    tracep->declQuad(c+14,"data_i", false,-1, 63,0);
    tracep->declQuad(c+24,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+204,"DW", false,-1, 31,0);
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+8,"hold_flag_i", false,-1);
    tracep->declQuad(c+205,"set_data", false,-1, 63,0);
    tracep->declQuad(c+187,"data_i", false,-1, 63,0);
    tracep->declQuad(c+26,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+204,"DW", false,-1, 31,0);
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+8,"hold_flag_i", false,-1);
    tracep->declQuad(c+205,"set_data", false,-1, 63,0);
    tracep->declQuad(c+189,"data_i", false,-1, 63,0);
    tracep->declQuad(c+28,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+207,"DW", false,-1, 31,0);
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+8,"hold_flag_i", false,-1);
    tracep->declBus(c+208,"set_data", false,-1, 4,0);
    tracep->declBus(c+19,"data_i", false,-1, 4,0);
    tracep->declBus(c+30,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+209,"DW", false,-1, 31,0);
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+8,"hold_flag_i", false,-1);
    tracep->declBus(c+201,"set_data", false,-1, 0,0);
    tracep->declBus(c+20,"data_i", false,-1, 0,0);
    tracep->declBus(c+31,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+204,"DW", false,-1, 31,0);
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+8,"hold_flag_i", false,-1);
    tracep->declQuad(c+205,"set_data", false,-1, 63,0);
    tracep->declQuad(c+191,"data_i", false,-1, 63,0);
    tracep->declQuad(c+32,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+204,"DW", false,-1, 31,0);
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+8,"hold_flag_i", false,-1);
    tracep->declQuad(c+205,"set_data", false,-1, 63,0);
    tracep->declQuad(c+21,"data_i", false,-1, 63,0);
    tracep->declQuad(c+34,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_inst ");
    tracep->declBus(c+16,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+14,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+193,"rs1_data_i", false,-1, 63,0);
    tracep->declQuad(c+195,"rs2_data_i", false,-1, 63,0);
    tracep->declBus(c+17,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+18,"rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+16,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+14,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+187,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+189,"op2_o", false,-1, 63,0);
    tracep->declBus(c+19,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+20,"reg_wen", false,-1);
    tracep->declQuad(c+191,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+21,"offset_addr_o", false,-1, 63,0);
    tracep->declBit(c+7,"mem_ren", false,-1);
    tracep->declQuad(c+199,"mem_raddr_o", false,-1, 63,0);
    tracep->declBus(c+100,"opcode", false,-1, 6,0);
    tracep->declBus(c+101,"rd", false,-1, 4,0);
    tracep->declBus(c+102,"func3", false,-1, 2,0);
    tracep->declBus(c+103,"rs1", false,-1, 4,0);
    tracep->declBus(c+104,"rs2", false,-1, 4,0);
    tracep->declBus(c+105,"func7", false,-1, 6,0);
    tracep->declBus(c+106,"imm", false,-1, 11,0);
    tracep->declBus(c+107,"shamt", false,-1, 5,0);
    tracep->declQuad(c+108,"immI", false,-1, 63,0);
    tracep->declQuad(c+110,"immU", false,-1, 63,0);
    tracep->declQuad(c+112,"immS", false,-1, 63,0);
    tracep->declQuad(c+114,"immB", false,-1, 63,0);
    tracep->declQuad(c+116,"immJ", false,-1, 63,0);
    tracep->declQuad(c+118,"immL", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_inst ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+8,"hold_flag_i", false,-1);
    tracep->declBus(c+13,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+11,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+14,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+16,"inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+202,"DW", false,-1, 31,0);
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+8,"hold_flag_i", false,-1);
    tracep->declBus(c+203,"set_data", false,-1, 31,0);
    tracep->declBus(c+13,"data_i", false,-1, 31,0);
    tracep->declBus(c+16,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+204,"DW", false,-1, 31,0);
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+8,"hold_flag_i", false,-1);
    tracep->declQuad(c+205,"set_data", false,-1, 63,0);
    tracep->declQuad(c+11,"data_i", false,-1, 63,0);
    tracep->declQuad(c+14,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_fetch_inst ");
    tracep->declQuad(c+11,"pc_addr_i", false,-1, 63,0);
    tracep->declQuad(c+11,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+13,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+120,"inst_get", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declQuad(c+40,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+42,"jump_en_i", false,-1);
    tracep->declQuad(c+11,"pc_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_inst ");
    tracep->declBit(c+197,"clk", false,-1);
    tracep->declBit(c+198,"rst", false,-1);
    tracep->declBus(c+17,"rs1_raddr_i", false,-1, 4,0);
    tracep->declBus(c+18,"rs2_raddr_i", false,-1, 4,0);
    tracep->declQuad(c+193,"rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+195,"rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+38,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+36,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+39,"reg_wen", false,-1);
    tracep->declQuad(c+24,"inst_addr_i", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+122+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->declQuad(c+24,"pc_reg", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+186,"i", false,-1, 31,0);
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
    tracep->fullBit(oldp+1,((IData)((0x23U == (0x7fU 
                                               & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)))));
    tracep->fullQData(oldp+2,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                ? 0ULL : ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                           ? ((0x10U 
                                               & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                               ? 0ULL
                                               : ((8U 
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
                                                      ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                      : 0ULL)
                                                     : 0ULL))))
                                           : 0ULL))),64);
    tracep->fullQData(oldp+4,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                ? 0ULL : ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                           ? ((0x10U 
                                               & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                               ? 0ULL
                                               : ((8U 
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
                                                      ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o
                                                      : 0ULL)
                                                     : 0ULL))))
                                           : 0ULL))),64);
    tracep->fullCData(oldp+6,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                ? 0U : ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                         ? ((0x10U 
                                             & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                             ? 0U : 
                                            ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                              ? 0U : 
                                             ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                               ? 0U
                                               : ((2U 
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
    tracep->fullBit(oldp+7,((1U & (IData)(((3U == (0x7fU 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) 
                                           & (0x6000U 
                                              != (0x6000U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)))))));
    tracep->fullBit(oldp+8,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_hold_flag_o));
    tracep->fullQData(oldp+9,(vlSelf->tb__DOT__soc_inst__DOT__ram_riscv_rdata_o),64);
    tracep->fullQData(oldp+11,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o),64);
    tracep->fullIData(oldp+13,((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__inst_fetch_inst__DOT__inst_get)),32);
    tracep->fullQData(oldp+14,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o),64);
    tracep->fullIData(oldp+16,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o),32);
    tracep->fullCData(oldp+17,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o),5);
    tracep->fullCData(oldp+18,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o),5);
    tracep->fullCData(oldp+19,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o),5);
    tracep->fullBit(oldp+20,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen));
    tracep->fullQData(oldp+21,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_offset_addr_o),64);
    tracep->fullIData(oldp+23,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o),32);
    tracep->fullQData(oldp+24,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o),64);
    tracep->fullQData(oldp+26,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o),64);
    tracep->fullQData(oldp+28,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o),64);
    tracep->fullCData(oldp+30,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+31,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen));
    tracep->fullQData(oldp+32,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_base_addr_o),64);
    tracep->fullQData(oldp+34,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_offset_addr_o),64);
    tracep->fullQData(oldp+36,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_data_o),64);
    tracep->fullCData(oldp+38,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_rd_addr_o),5);
    tracep->fullBit(oldp+39,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_reg_wen_o));
    tracep->fullQData(oldp+40,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
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
    tracep->fullBit(oldp+42,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o));
    tracep->fullCData(oldp+43,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)),7);
    tracep->fullCData(oldp+44,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+45,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+46,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+47,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+48,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                >> 0x19U)),7);
    tracep->fullQData(oldp+49,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),64);
    tracep->fullQData(oldp+51,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i),64);
    tracep->fullQData(oldp+53,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i),64);
    tracep->fullQData(oldp+55,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),64);
    tracep->fullQData(oldp+57,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),64);
    tracep->fullQData(oldp+59,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),64);
    tracep->fullQData(oldp+61,(VL_MODDIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+63,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i),64);
    tracep->fullQData(oldp+65,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned),64);
    tracep->fullQData(oldp+67,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned),64);
    tracep->fullQData(oldp+69,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed),64);
    tracep->fullQData(oldp+71,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),64);
    tracep->fullBit(oldp+73,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
    tracep->fullBit(oldp+74,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
    tracep->fullBit(oldp+75,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
    tracep->fullQData(oldp+76,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_add),64);
    tracep->fullQData(oldp+78,((((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i 
                                                                        >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i)))),64);
    tracep->fullQData(oldp+80,((((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i 
                                                                        >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i)))),64);
    tracep->fullQData(oldp+82,((((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i 
                                                                        >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i)))),64);
    tracep->fullQData(oldp+84,((((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i 
                                                                        >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i)))),64);
    tracep->fullQData(oldp+86,((((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i 
                                                                        >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)))),64);
    tracep->fullQData(oldp+88,((((QData)((IData)((- (IData)(
                                                            (VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)) 
                                                             >> 0x1fU))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)))))),64);
    tracep->fullQData(oldp+90,((((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i 
                                                                        >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i)))),64);
    tracep->fullQData(oldp+92,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned),64);
    tracep->fullQData(oldp+94,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned),64);
    tracep->fullQData(oldp+96,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_signed),64);
    tracep->fullQData(oldp+98,((((QData)((IData)((- (IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset 
                                                                        >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)))),64);
    tracep->fullCData(oldp+100,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)),7);
    tracep->fullCData(oldp+101,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+102,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+103,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+104,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+105,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                 >> 0x19U)),7);
    tracep->fullSData(oldp+106,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                 >> 0x14U)),12);
    tracep->fullCData(oldp+107,((0x3fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),6);
    tracep->fullQData(oldp+108,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immI),64);
    tracep->fullQData(oldp+110,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immU),64);
    tracep->fullQData(oldp+112,((((- (QData)((IData)(
                                                     (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                    >> 7U))))))),64);
    tracep->fullQData(oldp+114,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immB),64);
    tracep->fullQData(oldp+116,((((- (QData)((IData)(
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
    tracep->fullQData(oldp+118,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immL),64);
    tracep->fullQData(oldp+120,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__inst_fetch_inst__DOT__inst_get),64);
    tracep->fullQData(oldp+122,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0]),64);
    tracep->fullQData(oldp+124,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[1]),64);
    tracep->fullQData(oldp+126,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[2]),64);
    tracep->fullQData(oldp+128,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[3]),64);
    tracep->fullQData(oldp+130,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[4]),64);
    tracep->fullQData(oldp+132,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[5]),64);
    tracep->fullQData(oldp+134,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[6]),64);
    tracep->fullQData(oldp+136,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[7]),64);
    tracep->fullQData(oldp+138,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[8]),64);
    tracep->fullQData(oldp+140,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[9]),64);
    tracep->fullQData(oldp+142,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[10]),64);
    tracep->fullQData(oldp+144,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[11]),64);
    tracep->fullQData(oldp+146,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[12]),64);
    tracep->fullQData(oldp+148,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[13]),64);
    tracep->fullQData(oldp+150,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[14]),64);
    tracep->fullQData(oldp+152,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[15]),64);
    tracep->fullQData(oldp+154,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[16]),64);
    tracep->fullQData(oldp+156,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[17]),64);
    tracep->fullQData(oldp+158,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[18]),64);
    tracep->fullQData(oldp+160,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[19]),64);
    tracep->fullQData(oldp+162,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[20]),64);
    tracep->fullQData(oldp+164,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[21]),64);
    tracep->fullQData(oldp+166,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[22]),64);
    tracep->fullQData(oldp+168,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[23]),64);
    tracep->fullQData(oldp+170,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[24]),64);
    tracep->fullQData(oldp+172,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[25]),64);
    tracep->fullQData(oldp+174,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[26]),64);
    tracep->fullQData(oldp+176,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[27]),64);
    tracep->fullQData(oldp+178,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[28]),64);
    tracep->fullQData(oldp+180,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[29]),64);
    tracep->fullQData(oldp+182,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[30]),64);
    tracep->fullQData(oldp+184,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[31]),64);
    tracep->fullIData(oldp+186,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullQData(oldp+187,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o),64);
    tracep->fullQData(oldp+189,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o),64);
    tracep->fullQData(oldp+191,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_base_addr_o),64);
    tracep->fullQData(oldp+193,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o),64);
    tracep->fullQData(oldp+195,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o),64);
    tracep->fullBit(oldp+197,(vlSelf->clk));
    tracep->fullBit(oldp+198,(vlSelf->rst));
    tracep->fullQData(oldp+199,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                  ? 0ULL : ((0x20U 
                                             & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                             ? 0ULL
                                             : ((0x10U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                 ? 0ULL
                                                 : 
                                                ((8U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                  ? 0ULL
                                                  : 
                                                 ((4U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                   ? 0ULL
                                                   : 
                                                  ((2U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                       ? 0ULL
                                                       : 
                                                      (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o 
                                                       + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immL))
                                                      : 
                                                     (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o 
                                                      + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immL))
                                                     : 0ULL)
                                                    : 0ULL))))))),64);
    tracep->fullBit(oldp+201,(0U));
    tracep->fullIData(oldp+202,(0x20U),32);
    tracep->fullIData(oldp+203,(0x13U),32);
    tracep->fullIData(oldp+204,(0x40U),32);
    tracep->fullQData(oldp+205,(0ULL),64);
    tracep->fullIData(oldp+207,(5U),32);
    tracep->fullCData(oldp+208,(0U),5);
    tracep->fullIData(oldp+209,(1U),32);
}
