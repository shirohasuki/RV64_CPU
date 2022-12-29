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
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->pushNamePrefix("tb ");
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->pushNamePrefix("soc_inst ");
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+221,"riscv_ram_wen", false,-1);
    tracep->declQuad(c+222,"riscv_ram_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+224,"riscv_ram_wdata_o", false,-1, 63,0);
    tracep->declBus(c+226,"riscv_ram_wmask", false,-1, 7,0);
    tracep->declBit(c+1,"riscv_ram_ren", false,-1);
    tracep->declQuad(c+219,"riscv_ram_raddr_o", false,-1, 63,0);
    tracep->declBit(c+2,"riscv_ram_hold_flag_o", false,-1);
    tracep->declQuad(c+227,"ram_riscv_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+229,"riscv_rom_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+231,"rom_riscv_rdata_o", false,-1, 63,0);
    tracep->declBus(c+233,"riscv_axi_sid_o", false,-1, 3,0);
    tracep->declBit(c+234,"riscv_axi_rwvalid_o", false,-1);
    tracep->pushNamePrefix("riscv_inst ");
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declQuad(c+227,"mem_rdata_i", false,-1, 63,0);
    tracep->declBit(c+1,"mem_ren_o", false,-1);
    tracep->declQuad(c+219,"mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+221,"mem_wen_o", false,-1);
    tracep->declQuad(c+222,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+224,"mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+226,"mem_wmask_o", false,-1, 7,0);
    tracep->declBit(c+2,"hold_flag_o", false,-1);
    tracep->declBit(c+234,"rwvalid_o", false,-1);
    tracep->declQuad(c+3,"pc_reg_pc_o", false,-1, 63,0);
    tracep->declQuad(c+5,"rom_if_inst_o", false,-1, 63,0);
    tracep->declBus(c+7,"if_inst_o", false,-1, 31,0);
    tracep->declQuad(c+3,"if_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+8,"if_id_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+10,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+11,"id_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+12,"id_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+10,"id_inst_o", false,-1, 31,0);
    tracep->declQuad(c+8,"id_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+207,"id_op1_o", false,-1, 63,0);
    tracep->declQuad(c+209,"id_op2_o", false,-1, 63,0);
    tracep->declBus(c+13,"id_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+14,"id_reg_wen", false,-1);
    tracep->declQuad(c+211,"id_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+15,"id_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+213,"regs_rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+215,"regs_rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+17,"id_ex_inst_o", false,-1, 31,0);
    tracep->declQuad(c+18,"id_ex_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+20,"id_ex_op1_o", false,-1, 63,0);
    tracep->declQuad(c+22,"id_ex_op2_o", false,-1, 63,0);
    tracep->declBus(c+24,"id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+25,"id_ex_reg_wen", false,-1);
    tracep->declQuad(c+26,"id_ex_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+28,"id_ex_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+235,"ex_ex_mem_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+30,"ex_ex_mem_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+31,"ex_ex_mem_reg_wen_o", false,-1);
    tracep->declQuad(c+18,"ex_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+32,"ex_ex_mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+34,"ex_ex_mem_wdata_o", false,-1, 63,0);
    tracep->declBit(c+36,"ex_ex_mem_wen_o", false,-1);
    tracep->declBus(c+37,"ex_ex_mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+38,"ex_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+40,"ex_jump_en_o", false,-1);
    tracep->declBit(c+237,"ex_hold_flag_o", false,-1);
    tracep->declQuad(c+41,"ex_wb_rd_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+38,"ctrl_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+40,"ctrl_jump_en_o", false,-1);
    tracep->declBit(c+2,"ctrl_hold_flag_o", false,-1);
    tracep->declQuad(c+43,"ex_mem_inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+238,"ex_mem_mem_ren_o", false,-1);
    tracep->declQuad(c+239,"ex_mem_mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+45,"ex_mem_mem_wen_o", false,-1);
    tracep->declQuad(c+46,"ex_mem_mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+48,"ex_mem_mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+50,"ex_mem_mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+51,"ex_mem_mem_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+53,"ex_mem_mem_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+54,"ex_mem_mem_reg_wen_o", false,-1);
    tracep->declQuad(c+43,"mem_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+51,"mem_mem_wb_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+53,"mem_mem_wb_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+54,"mem_mem_wb_reg_wen_o", false,-1);
    tracep->declQuad(c+55,"mem_ex_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+57,"mem_wb_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+59,"mem_wb_wb_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+60,"mem_wb_wb_reg_wen_o", false,-1);
    tracep->declQuad(c+241,"wb_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+41,"wb_reg_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+59,"wb_reg_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+60,"wb_reg_reg_wen_o", false,-1);
    tracep->pushNamePrefix("ctrl_inst ");
    tracep->declQuad(c+38,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+40,"jump_en_i", false,-1);
    tracep->declBit(c+237,"hold_flag_ex_i", false,-1);
    tracep->declQuad(c+38,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+40,"jump_en_o", false,-1);
    tracep->declBit(c+2,"hold_flag_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_inst ");
    tracep->declBus(c+17,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+18,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+20,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+22,"op2_i", false,-1, 63,0);
    tracep->declBus(c+24,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+25,"reg_wen_i", false,-1);
    tracep->declQuad(c+26,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+28,"offset_addr_i", false,-1, 63,0);
    tracep->declQuad(c+41,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+30,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+31,"reg_wen_o", false,-1);
    tracep->declQuad(c+18,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+38,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+40,"jump_en_o", false,-1);
    tracep->declBit(c+237,"hold_flag_o", false,-1);
    tracep->declQuad(c+55,"mem_rdata_i", false,-1, 63,0);
    tracep->declBit(c+36,"mem_wen_o", false,-1);
    tracep->declQuad(c+32,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+34,"mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+37,"mem_wmask", false,-1, 7,0);
    tracep->declBus(c+61,"opcode", false,-1, 6,0);
    tracep->declBus(c+62,"rd", false,-1, 4,0);
    tracep->declBus(c+63,"func3", false,-1, 2,0);
    tracep->declBus(c+64,"rs1", false,-1, 4,0);
    tracep->declBus(c+65,"rs2", false,-1, 4,0);
    tracep->declBus(c+66,"func7", false,-1, 6,0);
    tracep->declQuad(c+67,"op1_i_add_op2_i", false,-1, 63,0);
    tracep->declQuad(c+69,"op1_i_sub_op2_i", false,-1, 63,0);
    tracep->declQuad(c+71,"op1_i_mul_op2_i", false,-1, 63,0);
    tracep->declQuad(c+73,"op1_i_and_op2_i", false,-1, 63,0);
    tracep->declQuad(c+75,"op1_i_xor_op2_i", false,-1, 63,0);
    tracep->declQuad(c+77,"op1_i_or_op2_i", false,-1, 63,0);
    tracep->declQuad(c+79,"op1_i_rem_op2_i", false,-1, 63,0);
    tracep->declQuad(c+81,"op1_i_rem_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+83,"op1_i_div_op2_i", false,-1, 63,0);
    tracep->declQuad(c+85,"op1_i_div_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+87,"op1_i_shift_left_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+89,"op1_i_shift_right_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+91,"op1_i_shift_right_op2_i_signed", false,-1, 63,0);
    tracep->declQuad(c+93,"base_addr_add_addr_offset", false,-1, 63,0);
    tracep->declBit(c+95,"op1_i_equal_op2_i", false,-1);
    tracep->declBit(c+96,"op1_i_less_op2_i_signed", false,-1);
    tracep->declBit(c+97,"op1_i_less_op2_i_unsigned", false,-1);
    tracep->declQuad(c+98,"compress_add", false,-1, 63,0);
    tracep->declQuad(c+100,"compress_sub", false,-1, 63,0);
    tracep->declQuad(c+102,"compress_mul", false,-1, 63,0);
    tracep->declQuad(c+104,"compress_and", false,-1, 63,0);
    tracep->declQuad(c+106,"compress_xor", false,-1, 63,0);
    tracep->declQuad(c+108,"compress_or", false,-1, 63,0);
    tracep->declQuad(c+110,"compress_rem", false,-1, 63,0);
    tracep->declQuad(c+112,"compress_div", false,-1, 63,0);
    tracep->declQuad(c+114,"compress_shift_left_unsigned", false,-1, 63,0);
    tracep->declQuad(c+116,"compress_shift_right_unsigned", false,-1, 63,0);
    tracep->declQuad(c+118,"compress_shift_right_signed", false,-1, 63,0);
    tracep->declQuad(c+120,"compress_addr_offset", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_mem_inst ");
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declQuad(c+18,"inst_addr_i", false,-1, 63,0);
    tracep->declBit(c+36,"ex_wen_i", false,-1);
    tracep->declQuad(c+32,"ex_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+34,"ex_wdata_i", false,-1, 63,0);
    tracep->declBus(c+37,"ex_wmask_i", false,-1, 7,0);
    tracep->declQuad(c+235,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+30,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+31,"reg_wen_i", false,-1);
    tracep->declQuad(c+43,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+238,"ren_o", false,-1);
    tracep->declQuad(c+239,"raddr_o", false,-1, 63,0);
    tracep->declBit(c+45,"wen_o", false,-1);
    tracep->declQuad(c+46,"waddr_o", false,-1, 63,0);
    tracep->declQuad(c+48,"wdata_o", false,-1, 63,0);
    tracep->declBus(c+50,"wmask_o", false,-1, 7,0);
    tracep->declQuad(c+51,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+53,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+54,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+243,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+237,"hold_flag_i", false,-1);
    tracep->declQuad(c+244,"set_data", false,-1, 63,0);
    tracep->declQuad(c+18,"data_i", false,-1, 63,0);
    tracep->declQuad(c+43,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+246,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+237,"hold_flag_i", false,-1);
    tracep->declBus(c+237,"set_data", false,-1, 0,0);
    tracep->declBus(c+36,"data_i", false,-1, 0,0);
    tracep->declBus(c+45,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+243,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+237,"hold_flag_i", false,-1);
    tracep->declQuad(c+244,"set_data", false,-1, 63,0);
    tracep->declQuad(c+32,"data_i", false,-1, 63,0);
    tracep->declQuad(c+46,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+243,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+237,"hold_flag_i", false,-1);
    tracep->declQuad(c+244,"set_data", false,-1, 63,0);
    tracep->declQuad(c+34,"data_i", false,-1, 63,0);
    tracep->declQuad(c+48,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+247,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+237,"hold_flag_i", false,-1);
    tracep->declBus(c+248,"set_data", false,-1, 7,0);
    tracep->declBus(c+37,"data_i", false,-1, 7,0);
    tracep->declBus(c+50,"data_o", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+243,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+237,"hold_flag_i", false,-1);
    tracep->declQuad(c+244,"set_data", false,-1, 63,0);
    tracep->declQuad(c+235,"data_i", false,-1, 63,0);
    tracep->declQuad(c+51,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+249,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+237,"hold_flag_i", false,-1);
    tracep->declBus(c+250,"set_data", false,-1, 4,0);
    tracep->declBus(c+30,"data_i", false,-1, 4,0);
    tracep->declBus(c+53,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+246,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+237,"hold_flag_i", false,-1);
    tracep->declBus(c+237,"set_data", false,-1, 0,0);
    tracep->declBus(c+31,"data_i", false,-1, 0,0);
    tracep->declBus(c+54,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_ex_inst ");
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+2,"hold_flag_i", false,-1);
    tracep->declBus(c+10,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+8,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+207,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+209,"op2_i", false,-1, 63,0);
    tracep->declBus(c+13,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+14,"reg_wen_i", false,-1);
    tracep->declQuad(c+211,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+15,"offset_addr_i", false,-1, 63,0);
    tracep->declBus(c+17,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+18,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+20,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+22,"op2_o", false,-1, 63,0);
    tracep->declBus(c+24,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+25,"reg_wen_o", false,-1);
    tracep->declQuad(c+26,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+28,"offset_addr_o", false,-1, 63,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+251,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+2,"hold_flag_i", false,-1);
    tracep->declBus(c+252,"set_data", false,-1, 31,0);
    tracep->declBus(c+10,"data_i", false,-1, 31,0);
    tracep->declBus(c+17,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+243,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+2,"hold_flag_i", false,-1);
    tracep->declQuad(c+244,"set_data", false,-1, 63,0);
    tracep->declQuad(c+8,"data_i", false,-1, 63,0);
    tracep->declQuad(c+18,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+243,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+2,"hold_flag_i", false,-1);
    tracep->declQuad(c+244,"set_data", false,-1, 63,0);
    tracep->declQuad(c+207,"data_i", false,-1, 63,0);
    tracep->declQuad(c+20,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+243,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+2,"hold_flag_i", false,-1);
    tracep->declQuad(c+244,"set_data", false,-1, 63,0);
    tracep->declQuad(c+209,"data_i", false,-1, 63,0);
    tracep->declQuad(c+22,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+249,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+2,"hold_flag_i", false,-1);
    tracep->declBus(c+250,"set_data", false,-1, 4,0);
    tracep->declBus(c+13,"data_i", false,-1, 4,0);
    tracep->declBus(c+24,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+246,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+2,"hold_flag_i", false,-1);
    tracep->declBus(c+237,"set_data", false,-1, 0,0);
    tracep->declBus(c+14,"data_i", false,-1, 0,0);
    tracep->declBus(c+25,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+243,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+2,"hold_flag_i", false,-1);
    tracep->declQuad(c+244,"set_data", false,-1, 63,0);
    tracep->declQuad(c+211,"data_i", false,-1, 63,0);
    tracep->declQuad(c+26,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+243,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+2,"hold_flag_i", false,-1);
    tracep->declQuad(c+244,"set_data", false,-1, 63,0);
    tracep->declQuad(c+15,"data_i", false,-1, 63,0);
    tracep->declQuad(c+28,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_inst ");
    tracep->declBus(c+10,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+8,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+213,"rs1_data_i", false,-1, 63,0);
    tracep->declQuad(c+215,"rs2_data_i", false,-1, 63,0);
    tracep->declBus(c+11,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+12,"rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+10,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+8,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+207,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+209,"op2_o", false,-1, 63,0);
    tracep->declBus(c+13,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+14,"reg_wen", false,-1);
    tracep->declQuad(c+211,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+15,"offset_addr_o", false,-1, 63,0);
    tracep->declBit(c+1,"mem_ren", false,-1);
    tracep->declQuad(c+219,"mem_raddr_o", false,-1, 63,0);
    tracep->declBus(c+122,"opcode", false,-1, 6,0);
    tracep->declBus(c+123,"rd", false,-1, 4,0);
    tracep->declBus(c+124,"func3", false,-1, 2,0);
    tracep->declBus(c+125,"rs1", false,-1, 4,0);
    tracep->declBus(c+126,"rs2", false,-1, 4,0);
    tracep->declBus(c+127,"func7", false,-1, 6,0);
    tracep->declBus(c+128,"imm", false,-1, 11,0);
    tracep->declBus(c+129,"shamt", false,-1, 5,0);
    tracep->declQuad(c+130,"immI", false,-1, 63,0);
    tracep->declQuad(c+132,"immU", false,-1, 63,0);
    tracep->declQuad(c+134,"immS", false,-1, 63,0);
    tracep->declQuad(c+136,"immB", false,-1, 63,0);
    tracep->declQuad(c+138,"immJ", false,-1, 63,0);
    tracep->declQuad(c+140,"immL", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_inst ");
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+2,"hold_flag_i", false,-1);
    tracep->declBus(c+7,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+3,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+8,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+10,"inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+251,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+2,"hold_flag_i", false,-1);
    tracep->declBus(c+252,"set_data", false,-1, 31,0);
    tracep->declBus(c+7,"data_i", false,-1, 31,0);
    tracep->declBus(c+10,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+243,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+2,"hold_flag_i", false,-1);
    tracep->declQuad(c+244,"set_data", false,-1, 63,0);
    tracep->declQuad(c+3,"data_i", false,-1, 63,0);
    tracep->declQuad(c+8,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_fetch_inst ");
    tracep->declQuad(c+3,"pc_addr_i", false,-1, 63,0);
    tracep->declQuad(c+5,"rom_inst_i", false,-1, 63,0);
    tracep->declQuad(c+3,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+7,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+5,"inst_get", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_inst ");
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declQuad(c+43,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+43,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+238,"ren_i", false,-1);
    tracep->declBit(c+45,"wen_i", false,-1);
    tracep->declQuad(c+239,"raddr_i", false,-1, 63,0);
    tracep->declQuad(c+55,"rdata_o", false,-1, 63,0);
    tracep->declQuad(c+46,"waddr_i", false,-1, 63,0);
    tracep->declQuad(c+48,"wdata_i", false,-1, 63,0);
    tracep->declBus(c+50,"wmask_i", false,-1, 7,0);
    tracep->declQuad(c+51,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+53,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+54,"reg_wen_i", false,-1);
    tracep->declQuad(c+51,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+53,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+54,"reg_wen_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_wb_inst ");
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declQuad(c+43,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+57,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+53,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+54,"reg_wen_i", false,-1);
    tracep->declBus(c+59,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+60,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+243,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+237,"hold_flag_i", false,-1);
    tracep->declQuad(c+244,"set_data", false,-1, 63,0);
    tracep->declQuad(c+43,"data_i", false,-1, 63,0);
    tracep->declQuad(c+57,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+249,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+237,"hold_flag_i", false,-1);
    tracep->declBus(c+250,"set_data", false,-1, 4,0);
    tracep->declBus(c+53,"data_i", false,-1, 4,0);
    tracep->declBus(c+59,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+246,"DW", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+237,"hold_flag_i", false,-1);
    tracep->declBus(c+237,"set_data", false,-1, 0,0);
    tracep->declBus(c+54,"data_i", false,-1, 0,0);
    tracep->declBus(c+60,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declQuad(c+38,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+40,"jump_en_i", false,-1);
    tracep->declQuad(c+3,"pc_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_inst ");
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBus(c+11,"rs1_raddr_i", false,-1, 4,0);
    tracep->declBus(c+12,"rs2_raddr_i", false,-1, 4,0);
    tracep->declQuad(c+213,"rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+215,"rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+59,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+41,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+60,"reg_wen", false,-1);
    tracep->declQuad(c+241,"inst_addr_i", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+142+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->declQuad(c+241,"pc_reg", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+206,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rom_inst ");
    tracep->declQuad(c+3,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+5,"inst_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_inst ");
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declQuad(c+57,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+241,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+59,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+41,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+60,"reg_wen_i", false,-1);
    tracep->declBus(c+59,"reg_waddr_o", false,-1, 4,0);
    tracep->declQuad(c+41,"reg_wdata_o", false,-1, 63,0);
    tracep->declBit(c+60,"reg_wen_o", false,-1);
    tracep->popNamePrefix(4);
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
    tracep->fullBit(oldp+1,((1U & (IData)(((3U == (0x7fU 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) 
                                           & (0x7000U 
                                              != (0x7000U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)))))));
    tracep->fullBit(oldp+2,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_hold_flag_o));
    tracep->fullQData(oldp+3,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o),64);
    tracep->fullQData(oldp+5,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__rom_inst__DOT__rom_mem
                              [(0xfffU & (IData)((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
                                                  >> 2U)))]),64);
    tracep->fullIData(oldp+7,((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__rom_inst__DOT__rom_mem
                                      [(0xfffU & (IData)(
                                                         (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
                                                          >> 2U)))])),32);
    tracep->fullQData(oldp+8,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o),64);
    tracep->fullIData(oldp+10,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o),32);
    tracep->fullCData(oldp+11,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o),5);
    tracep->fullCData(oldp+12,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o),5);
    tracep->fullCData(oldp+13,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o),5);
    tracep->fullBit(oldp+14,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen));
    tracep->fullQData(oldp+15,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_offset_addr_o),64);
    tracep->fullIData(oldp+17,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o),32);
    tracep->fullQData(oldp+18,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o),64);
    tracep->fullQData(oldp+20,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o),64);
    tracep->fullQData(oldp+22,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o),64);
    tracep->fullCData(oldp+24,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+25,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen));
    tracep->fullQData(oldp+26,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_base_addr_o),64);
    tracep->fullQData(oldp+28,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_offset_addr_o),64);
    tracep->fullCData(oldp+30,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_rd_waddr_o),5);
    tracep->fullBit(oldp+31,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_reg_wen_o));
    tracep->fullQData(oldp+32,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? 0ULL : ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                            ? ((0x10U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                ? 0ULL
                                                : (
                                                   (8U 
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
                                                       ? 
                                                      ((0x4000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                        ? 0ULL
                                                        : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                       : 0ULL)
                                                      : 0ULL))))
                                            : 0ULL))),64);
    tracep->fullQData(oldp+34,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? 0ULL : ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                            ? ((0x10U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                ? 0ULL
                                                : (
                                                   (8U 
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
                                                       ? 
                                                      ((0x4000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                        ? 0ULL
                                                        : 
                                                       ((0x2000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                         ? 
                                                        ((0x1000U 
                                                          & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                          ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o
                                                          : (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)))
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                          ? (QData)((IData)(
                                                                            (0xffffU 
                                                                             & (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o))))
                                                          : (QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)))))))
                                                       : 0ULL)
                                                      : 0ULL))))
                                            : 0ULL))),64);
    tracep->fullBit(oldp+36,((IData)((0x23U == (0x407fU 
                                                & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)))));
    tracep->fullCData(oldp+37,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                 ? 0U : ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                          ? ((0x10U 
                                              & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                              ? 0U : 
                                             ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
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
    tracep->fullQData(oldp+38,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
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
    tracep->fullBit(oldp+40,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o));
    tracep->fullQData(oldp+41,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_wb_rd_wdata_o),64);
    tracep->fullQData(oldp+43,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_inst_addr_o),64);
    tracep->fullBit(oldp+45,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wen_o));
    tracep->fullQData(oldp+46,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_waddr_o),64);
    tracep->fullQData(oldp+48,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wdata_o),64);
    tracep->fullCData(oldp+50,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wmask_o),8);
    tracep->fullQData(oldp+51,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_rd_wdata_o),64);
    tracep->fullCData(oldp+53,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_rd_waddr_o),5);
    tracep->fullBit(oldp+54,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_reg_wen_o));
    tracep->fullQData(oldp+55,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_ex_rdata_o),64);
    tracep->fullQData(oldp+57,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_inst_addr_o),64);
    tracep->fullCData(oldp+59,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_wb_rd_waddr_o),5);
    tracep->fullBit(oldp+60,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_wb_reg_wen_o));
    tracep->fullCData(oldp+61,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)),7);
    tracep->fullCData(oldp+62,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 7U))),5);
    tracep->fullCData(oldp+63,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+64,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+65,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+66,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                >> 0x19U)),7);
    tracep->fullQData(oldp+67,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),64);
    tracep->fullQData(oldp+69,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i),64);
    tracep->fullQData(oldp+71,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i),64);
    tracep->fullQData(oldp+73,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),64);
    tracep->fullQData(oldp+75,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),64);
    tracep->fullQData(oldp+77,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),64);
    tracep->fullQData(oldp+79,(VL_MODDIVS_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+81,(VL_MODDIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+83,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i),64);
    tracep->fullQData(oldp+85,(VL_DIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+87,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned),64);
    tracep->fullQData(oldp+89,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned),64);
    tracep->fullQData(oldp+91,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed),64);
    tracep->fullQData(oldp+93,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),64);
    tracep->fullBit(oldp+95,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
    tracep->fullBit(oldp+96,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
    tracep->fullBit(oldp+97,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
    tracep->fullQData(oldp+98,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_add),64);
    tracep->fullQData(oldp+100,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i)))),64);
    tracep->fullQData(oldp+102,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i)))),64);
    tracep->fullQData(oldp+104,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i)))),64);
    tracep->fullQData(oldp+106,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i)))),64);
    tracep->fullQData(oldp+108,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)))),64);
    tracep->fullQData(oldp+110,((((QData)((IData)((- (IData)(
                                                             (VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)) 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)))))),64);
    tracep->fullQData(oldp+112,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i)))),64);
    tracep->fullQData(oldp+114,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned),64);
    tracep->fullQData(oldp+116,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned),64);
    tracep->fullQData(oldp+118,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_signed),64);
    tracep->fullQData(oldp+120,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)))),64);
    tracep->fullCData(oldp+122,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)),7);
    tracep->fullCData(oldp+123,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+124,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+125,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+126,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+127,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                 >> 0x19U)),7);
    tracep->fullSData(oldp+128,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                 >> 0x14U)),12);
    tracep->fullCData(oldp+129,((0x3fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),6);
    tracep->fullQData(oldp+130,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immI),64);
    tracep->fullQData(oldp+132,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immU),64);
    tracep->fullQData(oldp+134,((((- (QData)((IData)(
                                                     (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                    >> 7U))))))),64);
    tracep->fullQData(oldp+136,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immB),64);
    tracep->fullQData(oldp+138,((((- (QData)((IData)(
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
    tracep->fullQData(oldp+140,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immL),64);
    tracep->fullQData(oldp+142,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0]),64);
    tracep->fullQData(oldp+144,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[1]),64);
    tracep->fullQData(oldp+146,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[2]),64);
    tracep->fullQData(oldp+148,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[3]),64);
    tracep->fullQData(oldp+150,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[4]),64);
    tracep->fullQData(oldp+152,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[5]),64);
    tracep->fullQData(oldp+154,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[6]),64);
    tracep->fullQData(oldp+156,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[7]),64);
    tracep->fullQData(oldp+158,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[8]),64);
    tracep->fullQData(oldp+160,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[9]),64);
    tracep->fullQData(oldp+162,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[10]),64);
    tracep->fullQData(oldp+164,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[11]),64);
    tracep->fullQData(oldp+166,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[12]),64);
    tracep->fullQData(oldp+168,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[13]),64);
    tracep->fullQData(oldp+170,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[14]),64);
    tracep->fullQData(oldp+172,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[15]),64);
    tracep->fullQData(oldp+174,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[16]),64);
    tracep->fullQData(oldp+176,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[17]),64);
    tracep->fullQData(oldp+178,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[18]),64);
    tracep->fullQData(oldp+180,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[19]),64);
    tracep->fullQData(oldp+182,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[20]),64);
    tracep->fullQData(oldp+184,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[21]),64);
    tracep->fullQData(oldp+186,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[22]),64);
    tracep->fullQData(oldp+188,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[23]),64);
    tracep->fullQData(oldp+190,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[24]),64);
    tracep->fullQData(oldp+192,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[25]),64);
    tracep->fullQData(oldp+194,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[26]),64);
    tracep->fullQData(oldp+196,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[27]),64);
    tracep->fullQData(oldp+198,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[28]),64);
    tracep->fullQData(oldp+200,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[29]),64);
    tracep->fullQData(oldp+202,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[30]),64);
    tracep->fullQData(oldp+204,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[31]),64);
    tracep->fullIData(oldp+206,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullQData(oldp+207,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o),64);
    tracep->fullQData(oldp+209,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o),64);
    tracep->fullQData(oldp+211,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_base_addr_o),64);
    tracep->fullQData(oldp+213,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o),64);
    tracep->fullQData(oldp+215,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o),64);
    tracep->fullBit(oldp+217,(vlSelf->clk));
    tracep->fullBit(oldp+218,(vlSelf->rst));
    tracep->fullQData(oldp+219,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
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
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
                                                        ? 0ULL
                                                        : 
                                                       (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o 
                                                        + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immL))
                                                       : 
                                                      (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o 
                                                       + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immL))
                                                      : 
                                                     (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o 
                                                      + vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immL))
                                                     : 0ULL)
                                                    : 0ULL))))))),64);
    tracep->fullBit(oldp+221,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_wen));
    tracep->fullQData(oldp+222,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_waddr_o),64);
    tracep->fullQData(oldp+224,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_wdata_o),64);
    tracep->fullCData(oldp+226,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_wmask),8);
    tracep->fullQData(oldp+227,(vlSelf->tb__DOT__soc_inst__DOT__ram_riscv_rdata_o),64);
    tracep->fullQData(oldp+229,(vlSelf->tb__DOT__soc_inst__DOT__riscv_rom_raddr_o),64);
    tracep->fullQData(oldp+231,(vlSelf->tb__DOT__soc_inst__DOT__rom_riscv_rdata_o),64);
    tracep->fullCData(oldp+233,(vlSelf->tb__DOT__soc_inst__DOT__riscv_axi_sid_o),4);
    tracep->fullBit(oldp+234,(vlSelf->tb__DOT__soc_inst__DOT__riscv_axi_rwvalid_o));
    tracep->fullQData(oldp+235,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_rd_wdata_o),64);
    tracep->fullBit(oldp+237,(0U));
    tracep->fullBit(oldp+238,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_ren_o));
    tracep->fullQData(oldp+239,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_raddr_o),64);
    tracep->fullQData(oldp+241,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__wb_inst_addr_o),64);
    tracep->fullIData(oldp+243,(0x40U),32);
    tracep->fullQData(oldp+244,(0ULL),64);
    tracep->fullIData(oldp+246,(1U),32);
    tracep->fullIData(oldp+247,(8U),32);
    tracep->fullCData(oldp+248,(0U),8);
    tracep->fullIData(oldp+249,(5U),32);
    tracep->fullCData(oldp+250,(0U),5);
    tracep->fullIData(oldp+251,(0x20U),32);
    tracep->fullIData(oldp+252,(0x13U),32);
}
