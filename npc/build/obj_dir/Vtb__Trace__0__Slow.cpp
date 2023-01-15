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
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->pushNamePrefix("tb ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->pushNamePrefix("soc_inst ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+243,"riscv_ram_wen", false,-1);
    tracep->declQuad(c+244,"riscv_ram_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+246,"riscv_ram_wdata_o", false,-1, 63,0);
    tracep->declBus(c+248,"riscv_ram_wmask", false,-1, 7,0);
    tracep->declBit(c+249,"riscv_ram_ren", false,-1);
    tracep->declQuad(c+250,"riscv_ram_raddr_o", false,-1, 63,0);
    tracep->declBit(c+252,"riscv_ram_flush_flag_o", false,-1);
    tracep->declQuad(c+253,"ram_riscv_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+255,"riscv_rom_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+257,"rom_riscv_rdata_o", false,-1, 63,0);
    tracep->declBus(c+259,"riscv_axi_sid_o", false,-1, 3,0);
    tracep->declBit(c+260,"riscv_axi_rwvalid_o", false,-1);
    tracep->pushNamePrefix("riscv_inst ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declQuad(c+253,"mem_rdata_i", false,-1, 63,0);
    tracep->declBit(c+249,"mem_ren_o", false,-1);
    tracep->declQuad(c+250,"mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+243,"mem_wen_o", false,-1);
    tracep->declQuad(c+244,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+246,"mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+248,"mem_wmask_o", false,-1, 7,0);
    tracep->declBit(c+252,"flush_flag_o", false,-1);
    tracep->declBit(c+260,"rwvalid_o", false,-1);
    tracep->declQuad(c+76,"pc_reg_pc_o", false,-1, 63,0);
    tracep->declQuad(c+78,"rom_if_inst_o", false,-1, 63,0);
    tracep->declBus(c+80,"if_inst_o", false,-1, 31,0);
    tracep->declQuad(c+76,"if_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+81,"if_id_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+83,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+84,"id_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+85,"id_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+83,"id_inst_o", false,-1, 31,0);
    tracep->declQuad(c+81,"id_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+1,"id_op1_o", false,-1, 63,0);
    tracep->declQuad(c+3,"id_op2_o", false,-1, 63,0);
    tracep->declBus(c+86,"id_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+87,"id_reg_wen", false,-1);
    tracep->declQuad(c+5,"id_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+88,"id_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+7,"regs_rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+9,"regs_rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+90,"id_ex_inst_o", false,-1, 31,0);
    tracep->declQuad(c+91,"id_ex_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+93,"id_ex_op1_o", false,-1, 63,0);
    tracep->declQuad(c+95,"id_ex_op2_o", false,-1, 63,0);
    tracep->declBus(c+97,"id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+98,"id_ex_reg_wen", false,-1);
    tracep->declQuad(c+99,"id_ex_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+101,"id_ex_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+103,"ex_ex_mem_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+105,"ex_ex_mem_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+106,"ex_ex_mem_reg_wen_o", false,-1);
    tracep->declQuad(c+91,"ex_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+90,"ex_ex_mem_inst_o", false,-1, 31,0);
    tracep->declBit(c+107,"ex_ex_mem_ren_o", false,-1);
    tracep->declQuad(c+108,"ex_ex_mem_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+110,"ex_ex_mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+112,"ex_ex_mem_wdata_o", false,-1, 63,0);
    tracep->declBit(c+114,"ex_ex_mem_wen_o", false,-1);
    tracep->declBus(c+115,"ex_ex_mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+116,"ex_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+118,"ex_jump_en_o", false,-1);
    tracep->declBus(c+119,"ex_stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+120,"ex_flush_flag_o", false,-1, 2,0);
    tracep->declQuad(c+116,"ctrl_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+118,"ctrl_jump_en_o", false,-1);
    tracep->declBit(c+121,"ctrl_pc_flush_en_o", false,-1);
    tracep->declBit(c+122,"ctrl_pc_stall_en_o", false,-1);
    tracep->declBit(c+123,"ctrl_if_id_flush_en_o", false,-1);
    tracep->declBit(c+124,"ctrl_if_id_stall_en_o", false,-1);
    tracep->declBit(c+125,"ctrl_id_ex_flush_en_o", false,-1);
    tracep->declBit(c+126,"ctrl_id_ex_stall_en_o", false,-1);
    tracep->declQuad(c+127,"ex_mem_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+129,"ex_mem_mem_inst_o", false,-1, 31,0);
    tracep->declBit(c+130,"ex_mem_mem_ren_o", false,-1);
    tracep->declQuad(c+131,"ex_mem_mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+133,"ex_mem_mem_wen_o", false,-1);
    tracep->declQuad(c+134,"ex_mem_mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+136,"ex_mem_mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+138,"ex_mem_mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+139,"ex_mem_mem_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+141,"ex_mem_mem_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+142,"ex_mem_mem_reg_wen_o", false,-1);
    tracep->declBus(c+143,"ex_mem_mem_stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+144,"ex_mem_mem_flush_flag_o", false,-1, 2,0);
    tracep->declQuad(c+127,"mem_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+145,"mem_mem_wb_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+141,"mem_mem_wb_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+142,"mem_mem_wb_reg_wen_o", false,-1);
    tracep->declQuad(c+147,"mem_ex_rdata_o", false,-1, 63,0);
    tracep->declBus(c+143,"mem_stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+144,"mem_flush_flag_o", false,-1, 2,0);
    tracep->declQuad(c+149,"mem_wb_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+151,"mem_wb_wb_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+153,"mem_wb_wb_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+154,"mem_wb_wb_reg_wen_o", false,-1);
    tracep->declQuad(c+149,"wb_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+151,"wb_reg_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+153,"wb_reg_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+154,"wb_reg_reg_wen_o", false,-1);
    tracep->pushNamePrefix("ctrl_inst ");
    tracep->declQuad(c+116,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+118,"jump_en_i", false,-1);
    tracep->declBus(c+120,"flush_flag_ex_i", false,-1, 2,0);
    tracep->declBus(c+144,"flush_flag_mem_i", false,-1, 2,0);
    tracep->declBus(c+119,"stall_flag_ex_i", false,-1, 2,0);
    tracep->declBus(c+143,"stall_flag_mem_i", false,-1, 2,0);
    tracep->declQuad(c+116,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+118,"jump_en_o", false,-1);
    tracep->declBit(c+122,"pc_stall_en_o", false,-1);
    tracep->declBit(c+121,"pc_flush_en_o", false,-1);
    tracep->declBit(c+124,"if_id_stall_en_o", false,-1);
    tracep->declBit(c+123,"if_id_flush_en_o", false,-1);
    tracep->declBit(c+126,"id_ex_stall_en_o", false,-1);
    tracep->declBit(c+125,"id_ex_flush_en_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_inst ");
    tracep->declBus(c+90,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+91,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+93,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+95,"op2_i", false,-1, 63,0);
    tracep->declBus(c+97,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+98,"reg_wen_i", false,-1);
    tracep->declQuad(c+99,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+101,"offset_addr_i", false,-1, 63,0);
    tracep->declQuad(c+116,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+118,"jump_en_o", false,-1);
    tracep->declBus(c+120,"flush_flag_o", false,-1, 2,0);
    tracep->declBus(c+119,"stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+90,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+91,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+107,"mem_ren_o", false,-1);
    tracep->declQuad(c+108,"mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+114,"mem_wen_o", false,-1);
    tracep->declQuad(c+110,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+112,"mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+115,"mem_wmask", false,-1, 7,0);
    tracep->declQuad(c+103,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+105,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+106,"reg_wen_o", false,-1);
    tracep->declBus(c+155,"opcode", false,-1, 6,0);
    tracep->declBus(c+156,"rd", false,-1, 4,0);
    tracep->declBus(c+157,"func3", false,-1, 2,0);
    tracep->declBus(c+158,"rs1", false,-1, 4,0);
    tracep->declBus(c+159,"rs2", false,-1, 4,0);
    tracep->declBus(c+160,"func7", false,-1, 6,0);
    tracep->declQuad(c+161,"op1_i_add_op2_i", false,-1, 63,0);
    tracep->declQuad(c+163,"op1_i_sub_op2_i", false,-1, 63,0);
    tracep->declQuad(c+165,"op1_i_mul_op2_i", false,-1, 63,0);
    tracep->declQuad(c+167,"op1_i_and_op2_i", false,-1, 63,0);
    tracep->declQuad(c+169,"op1_i_xor_op2_i", false,-1, 63,0);
    tracep->declQuad(c+171,"op1_i_or_op2_i", false,-1, 63,0);
    tracep->declQuad(c+173,"op1_i_rem_op2_i", false,-1, 63,0);
    tracep->declQuad(c+175,"op1_i_rem_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+177,"op1_i_div_op2_i", false,-1, 63,0);
    tracep->declQuad(c+179,"op1_i_div_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+181,"op1_i_shift_left_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+183,"op1_i_shift_right_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+185,"op1_i_shift_right_op2_i_signed", false,-1, 63,0);
    tracep->declQuad(c+187,"base_addr_add_addr_offset", false,-1, 63,0);
    tracep->declBit(c+189,"op1_i_equal_op2_i", false,-1);
    tracep->declBit(c+190,"op1_i_less_op2_i_signed", false,-1);
    tracep->declBit(c+191,"op1_i_less_op2_i_unsigned", false,-1);
    tracep->declQuad(c+192,"compress_add", false,-1, 63,0);
    tracep->declQuad(c+194,"compress_sub", false,-1, 63,0);
    tracep->declQuad(c+196,"compress_mul", false,-1, 63,0);
    tracep->declQuad(c+198,"compress_and", false,-1, 63,0);
    tracep->declQuad(c+200,"compress_xor", false,-1, 63,0);
    tracep->declQuad(c+202,"compress_or", false,-1, 63,0);
    tracep->declQuad(c+204,"compress_rem", false,-1, 63,0);
    tracep->declQuad(c+206,"compress_div", false,-1, 63,0);
    tracep->declQuad(c+208,"compress_shift_left_unsigned", false,-1, 63,0);
    tracep->declQuad(c+210,"compress_shift_right_unsigned", false,-1, 63,0);
    tracep->declQuad(c+212,"compress_shift_right_signed", false,-1, 63,0);
    tracep->declQuad(c+214,"compress_addr_offset", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_mem_inst ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+119,"stall_flag_i", false,-1, 2,0);
    tracep->declBus(c+120,"flush_flag_i", false,-1, 2,0);
    tracep->declBus(c+90,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+91,"inst_addr_i", false,-1, 63,0);
    tracep->declBit(c+107,"ex_ren_i", false,-1);
    tracep->declQuad(c+108,"ex_raddr_i", false,-1, 63,0);
    tracep->declBit(c+114,"ex_wen_i", false,-1);
    tracep->declQuad(c+110,"ex_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+112,"ex_wdata_i", false,-1, 63,0);
    tracep->declBus(c+115,"ex_wmask_i", false,-1, 7,0);
    tracep->declQuad(c+103,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+105,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+106,"reg_wen_i", false,-1);
    tracep->declBus(c+143,"stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+144,"flush_flag_o", false,-1, 2,0);
    tracep->declBus(c+129,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+127,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+130,"ren_o", false,-1);
    tracep->declQuad(c+131,"raddr_o", false,-1, 63,0);
    tracep->declBit(c+133,"wen_o", false,-1);
    tracep->declQuad(c+134,"waddr_o", false,-1, 63,0);
    tracep->declQuad(c+136,"wdata_o", false,-1, 63,0);
    tracep->declBus(c+138,"wmask_o", false,-1, 7,0);
    tracep->declQuad(c+139,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+141,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+142,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff0 ");
    tracep->declBus(c+261,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declBus(c+263,"set_data", false,-1, 31,0);
    tracep->declBus(c+90,"data_i", false,-1, 31,0);
    tracep->declBus(c+129,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+264,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declQuad(c+265,"set_data", false,-1, 63,0);
    tracep->declQuad(c+91,"data_i", false,-1, 63,0);
    tracep->declQuad(c+127,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff10 ");
    tracep->declBus(c+267,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declBus(c+262,"set_data", false,-1, 0,0);
    tracep->declBus(c+106,"data_i", false,-1, 0,0);
    tracep->declBus(c+142,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff11 ");
    tracep->declBus(c+268,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declBus(c+269,"set_data", false,-1, 2,0);
    tracep->declBus(c+119,"data_i", false,-1, 2,0);
    tracep->declBus(c+143,"data_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff12 ");
    tracep->declBus(c+268,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declBus(c+269,"set_data", false,-1, 2,0);
    tracep->declBus(c+120,"data_i", false,-1, 2,0);
    tracep->declBus(c+144,"data_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+267,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declBus(c+262,"set_data", false,-1, 0,0);
    tracep->declBus(c+107,"data_i", false,-1, 0,0);
    tracep->declBus(c+130,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+264,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declQuad(c+265,"set_data", false,-1, 63,0);
    tracep->declQuad(c+108,"data_i", false,-1, 63,0);
    tracep->declQuad(c+131,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+267,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declBus(c+262,"set_data", false,-1, 0,0);
    tracep->declBus(c+114,"data_i", false,-1, 0,0);
    tracep->declBus(c+133,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+264,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declQuad(c+265,"set_data", false,-1, 63,0);
    tracep->declQuad(c+110,"data_i", false,-1, 63,0);
    tracep->declQuad(c+134,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+264,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declQuad(c+265,"set_data", false,-1, 63,0);
    tracep->declQuad(c+112,"data_i", false,-1, 63,0);
    tracep->declQuad(c+136,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+270,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declBus(c+271,"set_data", false,-1, 7,0);
    tracep->declBus(c+115,"data_i", false,-1, 7,0);
    tracep->declBus(c+138,"data_o", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+264,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declQuad(c+265,"set_data", false,-1, 63,0);
    tracep->declQuad(c+103,"data_i", false,-1, 63,0);
    tracep->declQuad(c+139,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff9 ");
    tracep->declBus(c+272,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declBus(c+273,"set_data", false,-1, 4,0);
    tracep->declBus(c+105,"data_i", false,-1, 4,0);
    tracep->declBus(c+141,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_ex_inst ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+125,"flush_flag_i", false,-1);
    tracep->declBit(c+126,"stall_flag_i", false,-1);
    tracep->declBus(c+83,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+81,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+1,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+3,"op2_i", false,-1, 63,0);
    tracep->declBus(c+86,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+87,"reg_wen_i", false,-1);
    tracep->declQuad(c+5,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+88,"offset_addr_i", false,-1, 63,0);
    tracep->declBus(c+90,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+91,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+93,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+95,"op2_o", false,-1, 63,0);
    tracep->declBus(c+97,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+98,"reg_wen_o", false,-1);
    tracep->declQuad(c+99,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+101,"offset_addr_o", false,-1, 63,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+261,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+125,"flush_flag_i", false,-1);
    tracep->declBit(c+126,"stall_flag_i", false,-1);
    tracep->declBus(c+263,"set_data", false,-1, 31,0);
    tracep->declBus(c+83,"data_i", false,-1, 31,0);
    tracep->declBus(c+90,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+264,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+125,"flush_flag_i", false,-1);
    tracep->declBit(c+126,"stall_flag_i", false,-1);
    tracep->declQuad(c+265,"set_data", false,-1, 63,0);
    tracep->declQuad(c+81,"data_i", false,-1, 63,0);
    tracep->declQuad(c+91,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+264,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+125,"flush_flag_i", false,-1);
    tracep->declBit(c+126,"stall_flag_i", false,-1);
    tracep->declQuad(c+265,"set_data", false,-1, 63,0);
    tracep->declQuad(c+1,"data_i", false,-1, 63,0);
    tracep->declQuad(c+93,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+264,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+125,"flush_flag_i", false,-1);
    tracep->declBit(c+126,"stall_flag_i", false,-1);
    tracep->declQuad(c+265,"set_data", false,-1, 63,0);
    tracep->declQuad(c+3,"data_i", false,-1, 63,0);
    tracep->declQuad(c+95,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+272,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+125,"flush_flag_i", false,-1);
    tracep->declBit(c+126,"stall_flag_i", false,-1);
    tracep->declBus(c+273,"set_data", false,-1, 4,0);
    tracep->declBus(c+86,"data_i", false,-1, 4,0);
    tracep->declBus(c+97,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+267,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+125,"flush_flag_i", false,-1);
    tracep->declBit(c+126,"stall_flag_i", false,-1);
    tracep->declBus(c+262,"set_data", false,-1, 0,0);
    tracep->declBus(c+87,"data_i", false,-1, 0,0);
    tracep->declBus(c+98,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+264,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+125,"flush_flag_i", false,-1);
    tracep->declBit(c+126,"stall_flag_i", false,-1);
    tracep->declQuad(c+265,"set_data", false,-1, 63,0);
    tracep->declQuad(c+5,"data_i", false,-1, 63,0);
    tracep->declQuad(c+99,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+264,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+125,"flush_flag_i", false,-1);
    tracep->declBit(c+126,"stall_flag_i", false,-1);
    tracep->declQuad(c+265,"set_data", false,-1, 63,0);
    tracep->declQuad(c+88,"data_i", false,-1, 63,0);
    tracep->declQuad(c+101,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_inst ");
    tracep->declBus(c+83,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+81,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+7,"rs1_data_i", false,-1, 63,0);
    tracep->declQuad(c+9,"rs2_data_i", false,-1, 63,0);
    tracep->declBus(c+84,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+85,"rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+83,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+81,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+1,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+3,"op2_o", false,-1, 63,0);
    tracep->declBus(c+86,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+87,"reg_wen", false,-1);
    tracep->declQuad(c+5,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+88,"offset_addr_o", false,-1, 63,0);
    tracep->declBus(c+216,"opcode", false,-1, 6,0);
    tracep->declBus(c+217,"rd", false,-1, 4,0);
    tracep->declBus(c+218,"func3", false,-1, 2,0);
    tracep->declBus(c+219,"rs1", false,-1, 4,0);
    tracep->declBus(c+220,"rs2", false,-1, 4,0);
    tracep->declBus(c+221,"func7", false,-1, 6,0);
    tracep->declBus(c+222,"imm", false,-1, 11,0);
    tracep->declBus(c+223,"shamt", false,-1, 5,0);
    tracep->declQuad(c+224,"immI", false,-1, 63,0);
    tracep->declQuad(c+226,"immU", false,-1, 63,0);
    tracep->declQuad(c+228,"immS", false,-1, 63,0);
    tracep->declQuad(c+230,"immB", false,-1, 63,0);
    tracep->declQuad(c+232,"immJ", false,-1, 63,0);
    tracep->declQuad(c+234,"immL", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_inst ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+123,"flush_flag_i", false,-1);
    tracep->declBit(c+124,"stall_flag_i", false,-1);
    tracep->declBus(c+80,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+76,"inst_addr_i", false,-1, 63,0);
    tracep->declBus(c+83,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+81,"inst_addr_o", false,-1, 63,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+261,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+123,"flush_flag_i", false,-1);
    tracep->declBit(c+124,"stall_flag_i", false,-1);
    tracep->declBus(c+263,"set_data", false,-1, 31,0);
    tracep->declBus(c+80,"data_i", false,-1, 31,0);
    tracep->declBus(c+83,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+264,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+123,"flush_flag_i", false,-1);
    tracep->declBit(c+124,"stall_flag_i", false,-1);
    tracep->declQuad(c+265,"set_data", false,-1, 63,0);
    tracep->declQuad(c+76,"data_i", false,-1, 63,0);
    tracep->declQuad(c+81,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_fetch_inst ");
    tracep->declQuad(c+76,"pc_addr_i", false,-1, 63,0);
    tracep->declQuad(c+78,"rom_inst_i", false,-1, 63,0);
    tracep->declQuad(c+76,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+80,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+78,"inst_get", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_inst ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+129,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+127,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+127,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+143,"stall_flag_i", false,-1, 2,0);
    tracep->declBus(c+144,"flush_flag_i", false,-1, 2,0);
    tracep->declBit(c+130,"ren_i", false,-1);
    tracep->declBit(c+133,"wen_i", false,-1);
    tracep->declQuad(c+131,"raddr_i", false,-1, 63,0);
    tracep->declQuad(c+147,"rdata_o", false,-1, 63,0);
    tracep->declQuad(c+134,"waddr_i", false,-1, 63,0);
    tracep->declQuad(c+136,"wdata_i", false,-1, 63,0);
    tracep->declBus(c+138,"wmask_i", false,-1, 7,0);
    tracep->declQuad(c+139,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+141,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+142,"reg_wen_i", false,-1);
    tracep->declQuad(c+145,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+141,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+142,"reg_wen_o", false,-1);
    tracep->declBus(c+143,"stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+144,"flush_flag_o", false,-1, 2,0);
    tracep->declBus(c+236,"opcode", false,-1, 6,0);
    tracep->declBus(c+237,"rd", false,-1, 4,0);
    tracep->declBus(c+238,"func3", false,-1, 2,0);
    tracep->declBus(c+239,"rs1", false,-1, 4,0);
    tracep->declBus(c+240,"rs2", false,-1, 4,0);
    tracep->declBus(c+274,"func7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_wb_inst ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declQuad(c+127,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+149,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+145,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+141,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+142,"reg_wen_i", false,-1);
    tracep->declQuad(c+151,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+153,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+154,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+264,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declQuad(c+265,"set_data", false,-1, 63,0);
    tracep->declQuad(c+127,"data_i", false,-1, 63,0);
    tracep->declQuad(c+149,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+272,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declBus(c+273,"set_data", false,-1, 4,0);
    tracep->declBus(c+141,"data_i", false,-1, 4,0);
    tracep->declBus(c+153,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+267,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declBus(c+262,"set_data", false,-1, 0,0);
    tracep->declBus(c+142,"data_i", false,-1, 0,0);
    tracep->declBus(c+154,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+264,"DW", false,-1, 31,0);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+262,"flush_flag_i", false,-1);
    tracep->declBit(c+262,"stall_flag_i", false,-1);
    tracep->declQuad(c+265,"set_data", false,-1, 63,0);
    tracep->declQuad(c+145,"data_i", false,-1, 63,0);
    tracep->declQuad(c+151,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declQuad(c+116,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+118,"jump_en_i", false,-1);
    tracep->declBit(c+121,"flush_en_i", false,-1);
    tracep->declBit(c+122,"stall_en_i", false,-1);
    tracep->declQuad(c+76,"pc_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_inst ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declBus(c+84,"rs1_raddr_i", false,-1, 4,0);
    tracep->declBus(c+85,"rs2_raddr_i", false,-1, 4,0);
    tracep->declQuad(c+7,"rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+9,"rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+153,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+151,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+154,"reg_wen", false,-1);
    tracep->declQuad(c+149,"inst_addr_i", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+11+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->declQuad(c+149,"pc_reg", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+75,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rom_inst ");
    tracep->declQuad(c+76,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+78,"inst_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_inst ");
    tracep->declBit(c+241,"clk", false,-1);
    tracep->declBit(c+242,"rst", false,-1);
    tracep->declQuad(c+149,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+149,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+153,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+151,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+154,"reg_wen_i", false,-1);
    tracep->declBus(c+153,"reg_waddr_o", false,-1, 4,0);
    tracep->declQuad(c+151,"reg_wdata_o", false,-1, 63,0);
    tracep->declBit(c+154,"reg_wen_o", false,-1);
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
    tracep->fullQData(oldp+1,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op1_o),64);
    tracep->fullQData(oldp+3,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_op2_o),64);
    tracep->fullQData(oldp+5,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_base_addr_o),64);
    tracep->fullQData(oldp+7,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs1_rdata_o),64);
    tracep->fullQData(oldp+9,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_rs2_rdata_o),64);
    tracep->fullQData(oldp+11,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[0]),64);
    tracep->fullQData(oldp+13,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[1]),64);
    tracep->fullQData(oldp+15,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[2]),64);
    tracep->fullQData(oldp+17,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[3]),64);
    tracep->fullQData(oldp+19,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[4]),64);
    tracep->fullQData(oldp+21,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[5]),64);
    tracep->fullQData(oldp+23,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[6]),64);
    tracep->fullQData(oldp+25,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[7]),64);
    tracep->fullQData(oldp+27,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[8]),64);
    tracep->fullQData(oldp+29,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[9]),64);
    tracep->fullQData(oldp+31,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[10]),64);
    tracep->fullQData(oldp+33,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[11]),64);
    tracep->fullQData(oldp+35,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[12]),64);
    tracep->fullQData(oldp+37,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[13]),64);
    tracep->fullQData(oldp+39,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[14]),64);
    tracep->fullQData(oldp+41,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[15]),64);
    tracep->fullQData(oldp+43,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[16]),64);
    tracep->fullQData(oldp+45,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[17]),64);
    tracep->fullQData(oldp+47,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[18]),64);
    tracep->fullQData(oldp+49,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[19]),64);
    tracep->fullQData(oldp+51,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[20]),64);
    tracep->fullQData(oldp+53,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[21]),64);
    tracep->fullQData(oldp+55,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[22]),64);
    tracep->fullQData(oldp+57,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[23]),64);
    tracep->fullQData(oldp+59,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[24]),64);
    tracep->fullQData(oldp+61,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[25]),64);
    tracep->fullQData(oldp+63,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[26]),64);
    tracep->fullQData(oldp+65,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[27]),64);
    tracep->fullQData(oldp+67,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[28]),64);
    tracep->fullQData(oldp+69,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[29]),64);
    tracep->fullQData(oldp+71,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[30]),64);
    tracep->fullQData(oldp+73,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__regs[31]),64);
    tracep->fullIData(oldp+75,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullQData(oldp+76,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o),64);
    tracep->fullQData(oldp+78,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__rom_inst__DOT__rom_mem
                               [(0xfffU & (IData)((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
                                                   >> 2U)))]),64);
    tracep->fullIData(oldp+80,((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__rom_inst__DOT__rom_mem
                                       [(0xfffU & (IData)(
                                                          (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
                                                           >> 2U)))])),32);
    tracep->fullQData(oldp+81,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o),64);
    tracep->fullIData(oldp+83,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o),32);
    tracep->fullCData(oldp+84,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o),5);
    tracep->fullCData(oldp+85,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o),5);
    tracep->fullCData(oldp+86,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o),5);
    tracep->fullBit(oldp+87,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen));
    tracep->fullQData(oldp+88,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_offset_addr_o),64);
    tracep->fullIData(oldp+90,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o),32);
    tracep->fullQData(oldp+91,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o),64);
    tracep->fullQData(oldp+93,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o),64);
    tracep->fullQData(oldp+95,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o),64);
    tracep->fullCData(oldp+97,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+98,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen));
    tracep->fullQData(oldp+99,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_base_addr_o),64);
    tracep->fullQData(oldp+101,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_offset_addr_o),64);
    tracep->fullQData(oldp+103,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_rd_wdata_o),64);
    tracep->fullCData(oldp+105,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_rd_waddr_o),5);
    tracep->fullBit(oldp+106,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_reg_wen_o));
    tracep->fullBit(oldp+107,((1U & (IData)(((3U == 
                                              (0x7fU 
                                               & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                                             & (0x7000U 
                                                != 
                                                (0x7000U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)))))));
    tracep->fullQData(oldp+108,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                  ? 0ULL : ((0x20U 
                                             & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                             ? 0ULL
                                             : ((0x10U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                 ? 0ULL
                                                 : 
                                                ((8U 
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
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                        ? 0ULL
                                                        : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                       : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                      : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                     : 0ULL)
                                                    : 0ULL))))))),64);
    tracep->fullQData(oldp+110,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                  ? 0ULL : ((0x20U 
                                             & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                             ? ((0x10U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                 ? 0ULL
                                                 : 
                                                ((8U 
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
    tracep->fullQData(oldp+112,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                  ? 0ULL : ((0x20U 
                                             & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                             ? ((0x10U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                 ? 0ULL
                                                 : 
                                                ((8U 
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
    tracep->fullBit(oldp+114,((IData)((0x23U == (0x407fU 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)))));
    tracep->fullCData(oldp+115,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                  ? 0U : ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                           ? ((0x10U 
                                               & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                               ? 0U
                                               : ((8U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((4U 
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
    tracep->fullQData(oldp+116,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                  ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                      ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                          ? 0ULL : 
                                         ((8U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                           ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                               ? ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                    : 0ULL)
                                                   : 0ULL)
                                               : 0ULL)
                                           : ((4U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                               ? ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                    : 0ULL)
                                                   : 0ULL)
                                               : ((2U 
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
    tracep->fullBit(oldp+118,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o));
    tracep->fullCData(oldp+119,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_stall_flag_o),3);
    tracep->fullCData(oldp+120,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_flush_flag_o),3);
    tracep->fullBit(oldp+121,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_pc_flush_en_o));
    tracep->fullBit(oldp+122,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_pc_stall_en_o));
    tracep->fullBit(oldp+123,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_if_id_flush_en_o));
    tracep->fullBit(oldp+124,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_if_id_stall_en_o));
    tracep->fullBit(oldp+125,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_id_ex_flush_en_o));
    tracep->fullBit(oldp+126,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_id_ex_stall_en_o));
    tracep->fullQData(oldp+127,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_inst_addr_o),64);
    tracep->fullIData(oldp+129,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o),32);
    tracep->fullBit(oldp+130,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_ren_o));
    tracep->fullQData(oldp+131,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_raddr_o),64);
    tracep->fullBit(oldp+133,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wen_o));
    tracep->fullQData(oldp+134,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_waddr_o),64);
    tracep->fullQData(oldp+136,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wdata_o),64);
    tracep->fullCData(oldp+138,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wmask_o),8);
    tracep->fullQData(oldp+139,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_rd_wdata_o),64);
    tracep->fullCData(oldp+141,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_rd_waddr_o),5);
    tracep->fullBit(oldp+142,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_reg_wen_o));
    tracep->fullCData(oldp+143,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_stall_flag_o),3);
    tracep->fullCData(oldp+144,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_flush_flag_o),3);
    tracep->fullQData(oldp+145,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_mem_wb_rd_wdata_o),64);
    tracep->fullQData(oldp+147,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_ex_rdata_o),64);
    tracep->fullQData(oldp+149,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_inst_addr_o),64);
    tracep->fullQData(oldp+151,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_wb_rd_wdata_o),64);
    tracep->fullCData(oldp+153,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_wb_rd_waddr_o),5);
    tracep->fullBit(oldp+154,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_wb_reg_wen_o));
    tracep->fullCData(oldp+155,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)),7);
    tracep->fullCData(oldp+156,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+157,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+158,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+159,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+160,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                 >> 0x19U)),7);
    tracep->fullQData(oldp+161,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),64);
    tracep->fullQData(oldp+163,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i),64);
    tracep->fullQData(oldp+165,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i),64);
    tracep->fullQData(oldp+167,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),64);
    tracep->fullQData(oldp+169,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),64);
    tracep->fullQData(oldp+171,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),64);
    tracep->fullQData(oldp+173,(VL_MODDIVS_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+175,(VL_MODDIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+177,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i),64);
    tracep->fullQData(oldp+179,(VL_DIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+181,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned),64);
    tracep->fullQData(oldp+183,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned),64);
    tracep->fullQData(oldp+185,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed),64);
    tracep->fullQData(oldp+187,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),64);
    tracep->fullBit(oldp+189,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
    tracep->fullBit(oldp+190,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
    tracep->fullBit(oldp+191,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
    tracep->fullQData(oldp+192,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_add),64);
    tracep->fullQData(oldp+194,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i)))),64);
    tracep->fullQData(oldp+196,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i)))),64);
    tracep->fullQData(oldp+198,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i)))),64);
    tracep->fullQData(oldp+200,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i)))),64);
    tracep->fullQData(oldp+202,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)))),64);
    tracep->fullQData(oldp+204,((((QData)((IData)((- (IData)(
                                                             (VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)) 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)))))),64);
    tracep->fullQData(oldp+206,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i)))),64);
    tracep->fullQData(oldp+208,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned),64);
    tracep->fullQData(oldp+210,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned),64);
    tracep->fullQData(oldp+212,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_signed),64);
    tracep->fullQData(oldp+214,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)))),64);
    tracep->fullCData(oldp+216,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)),7);
    tracep->fullCData(oldp+217,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+218,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+219,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+220,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+221,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                 >> 0x19U)),7);
    tracep->fullSData(oldp+222,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                 >> 0x14U)),12);
    tracep->fullCData(oldp+223,((0x3fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),6);
    tracep->fullQData(oldp+224,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immI),64);
    tracep->fullQData(oldp+226,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immU),64);
    tracep->fullQData(oldp+228,((((- (QData)((IData)(
                                                     (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                    >> 7U))))))),64);
    tracep->fullQData(oldp+230,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immB),64);
    tracep->fullQData(oldp+232,((((- (QData)((IData)(
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
    tracep->fullQData(oldp+234,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immL),64);
    tracep->fullCData(oldp+236,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o)),7);
    tracep->fullCData(oldp+237,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+238,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+239,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+240,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o 
                                          >> 0x14U))),5);
    tracep->fullBit(oldp+241,(vlSelf->clk));
    tracep->fullBit(oldp+242,(vlSelf->rst));
    tracep->fullBit(oldp+243,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_wen));
    tracep->fullQData(oldp+244,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_waddr_o),64);
    tracep->fullQData(oldp+246,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_wdata_o),64);
    tracep->fullCData(oldp+248,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_wmask),8);
    tracep->fullBit(oldp+249,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_ren));
    tracep->fullQData(oldp+250,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_raddr_o),64);
    tracep->fullBit(oldp+252,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_flush_flag_o));
    tracep->fullQData(oldp+253,(vlSelf->tb__DOT__soc_inst__DOT__ram_riscv_rdata_o),64);
    tracep->fullQData(oldp+255,(vlSelf->tb__DOT__soc_inst__DOT__riscv_rom_raddr_o),64);
    tracep->fullQData(oldp+257,(vlSelf->tb__DOT__soc_inst__DOT__rom_riscv_rdata_o),64);
    tracep->fullCData(oldp+259,(vlSelf->tb__DOT__soc_inst__DOT__riscv_axi_sid_o),4);
    tracep->fullBit(oldp+260,(vlSelf->tb__DOT__soc_inst__DOT__riscv_axi_rwvalid_o));
    tracep->fullIData(oldp+261,(0x20U),32);
    tracep->fullBit(oldp+262,(0U));
    tracep->fullIData(oldp+263,(0x13U),32);
    tracep->fullIData(oldp+264,(0x40U),32);
    tracep->fullQData(oldp+265,(0ULL),64);
    tracep->fullIData(oldp+267,(1U),32);
    tracep->fullIData(oldp+268,(3U),32);
    tracep->fullCData(oldp+269,(0U),3);
    tracep->fullIData(oldp+270,(8U),32);
    tracep->fullCData(oldp+271,(0U),8);
    tracep->fullIData(oldp+272,(5U),32);
    tracep->fullCData(oldp+273,(0U),5);
    tracep->fullCData(oldp+274,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_inst__DOT__func7),7);
}
