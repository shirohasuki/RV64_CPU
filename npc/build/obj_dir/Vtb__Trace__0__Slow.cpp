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
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->pushNamePrefix("tb ");
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->pushNamePrefix("soc_inst ");
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+255,"riscv_ram_wen", false,-1);
    tracep->declQuad(c+256,"riscv_ram_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+258,"riscv_ram_wdata_o", false,-1, 63,0);
    tracep->declBus(c+260,"riscv_ram_wmask", false,-1, 7,0);
    tracep->declBit(c+261,"riscv_ram_ren", false,-1);
    tracep->declQuad(c+262,"riscv_ram_raddr_o", false,-1, 63,0);
    tracep->declBit(c+264,"riscv_ram_flush_flag_o", false,-1);
    tracep->declQuad(c+265,"ram_riscv_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+267,"riscv_rom_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+269,"rom_riscv_rdata_o", false,-1, 63,0);
    tracep->declBus(c+271,"riscv_axi_sid_o", false,-1, 3,0);
    tracep->declBit(c+272,"riscv_axi_rwvalid_o", false,-1);
    tracep->pushNamePrefix("riscv_inst ");
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declQuad(c+265,"mem_rdata_i", false,-1, 63,0);
    tracep->declBit(c+261,"mem_ren_o", false,-1);
    tracep->declQuad(c+262,"mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+255,"mem_wen_o", false,-1);
    tracep->declQuad(c+256,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+258,"mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+260,"mem_wmask_o", false,-1, 7,0);
    tracep->declBit(c+264,"flush_flag_o", false,-1);
    tracep->declBit(c+272,"rwvalid_o", false,-1);
    tracep->declQuad(c+76,"pc_reg_pc_o", false,-1, 63,0);
    tracep->declQuad(c+78,"rom_if_inst_o", false,-1, 63,0);
    tracep->declBus(c+80,"if_inst_o", false,-1, 31,0);
    tracep->declQuad(c+76,"if_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+81,"rom_mem_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+83,"if_id_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+85,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+86,"id_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+87,"id_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+85,"id_inst_o", false,-1, 31,0);
    tracep->declQuad(c+83,"id_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+1,"id_op1_o", false,-1, 63,0);
    tracep->declQuad(c+3,"id_op2_o", false,-1, 63,0);
    tracep->declBus(c+88,"id_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+89,"id_reg_wen", false,-1);
    tracep->declQuad(c+5,"id_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+90,"id_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+7,"regs_rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+9,"regs_rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+92,"id_ex_inst_o", false,-1, 31,0);
    tracep->declQuad(c+93,"id_ex_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+95,"id_ex_op1_o", false,-1, 63,0);
    tracep->declQuad(c+97,"id_ex_op2_o", false,-1, 63,0);
    tracep->declBus(c+99,"id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+100,"id_ex_reg_wen", false,-1);
    tracep->declQuad(c+101,"id_ex_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+103,"id_ex_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+105,"ex_ex_mem_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+107,"ex_ex_mem_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+108,"ex_ex_mem_reg_wen_o", false,-1);
    tracep->declQuad(c+93,"ex_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+92,"ex_ex_mem_inst_o", false,-1, 31,0);
    tracep->declBit(c+109,"ex_ex_mem_ren_o", false,-1);
    tracep->declQuad(c+110,"ex_ex_mem_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+112,"ex_ex_mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+114,"ex_ex_mem_wdata_o", false,-1, 63,0);
    tracep->declBit(c+116,"ex_ex_mem_wen_o", false,-1);
    tracep->declBus(c+117,"ex_ex_mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+118,"ex_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+120,"ex_jump_en_o", false,-1);
    tracep->declBus(c+121,"ex_stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+122,"ex_flush_flag_o", false,-1, 2,0);
    tracep->declQuad(c+118,"ctrl_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+120,"ctrl_jump_en_o", false,-1);
    tracep->declBit(c+123,"ctrl_pc_flush_en_o", false,-1);
    tracep->declBit(c+124,"ctrl_pc_stall_en_o", false,-1);
    tracep->declBit(c+125,"ctrl_if_id_flush_en_o", false,-1);
    tracep->declBit(c+126,"ctrl_if_id_stall_en_o", false,-1);
    tracep->declBit(c+127,"ctrl_id_ex_flush_en_o", false,-1);
    tracep->declBit(c+128,"ctrl_id_ex_stall_en_o", false,-1);
    tracep->declQuad(c+129,"ex_mem_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+131,"ex_mem_mem_inst_o", false,-1, 31,0);
    tracep->declBit(c+132,"ex_mem_mem_ren_o", false,-1);
    tracep->declQuad(c+133,"ex_mem_mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+135,"ex_mem_mem_wen_o", false,-1);
    tracep->declQuad(c+136,"ex_mem_mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+138,"ex_mem_mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+140,"ex_mem_mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+141,"ex_mem_mem_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+143,"ex_mem_mem_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+144,"ex_mem_mem_reg_wen_o", false,-1);
    tracep->declBus(c+145,"ex_mem_mem_stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+146,"ex_mem_mem_flush_flag_o", false,-1, 2,0);
    tracep->declQuad(c+129,"mem_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+147,"mem_mem_wb_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+143,"mem_mem_wb_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+144,"mem_mem_wb_reg_wen_o", false,-1);
    tracep->declQuad(c+149,"mem_ex_rdata_o", false,-1, 63,0);
    tracep->declBus(c+145,"mem_stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+146,"mem_flush_flag_o", false,-1, 2,0);
    tracep->declQuad(c+151,"mem_ram_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+153,"mem_ram_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+155,"mem_ram_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+157,"mem_rom_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+159,"mem_wb_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+161,"mem_wb_wb_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+163,"mem_wb_wb_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+164,"mem_wb_wb_reg_wen_o", false,-1);
    tracep->declQuad(c+159,"wb_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+161,"wb_reg_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+163,"wb_reg_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+164,"wb_reg_reg_wen_o", false,-1);
    tracep->declQuad(c+165,"ram_mem_rdata_o", false,-1, 63,0);
    tracep->pushNamePrefix("ctrl_inst ");
    tracep->declQuad(c+118,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+120,"jump_en_i", false,-1);
    tracep->declBus(c+122,"flush_flag_ex_i", false,-1, 2,0);
    tracep->declBus(c+146,"flush_flag_mem_i", false,-1, 2,0);
    tracep->declBus(c+121,"stall_flag_ex_i", false,-1, 2,0);
    tracep->declBus(c+145,"stall_flag_mem_i", false,-1, 2,0);
    tracep->declQuad(c+118,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+120,"jump_en_o", false,-1);
    tracep->declBit(c+124,"pc_stall_en_o", false,-1);
    tracep->declBit(c+123,"pc_flush_en_o", false,-1);
    tracep->declBit(c+126,"if_id_stall_en_o", false,-1);
    tracep->declBit(c+125,"if_id_flush_en_o", false,-1);
    tracep->declBit(c+128,"id_ex_stall_en_o", false,-1);
    tracep->declBit(c+127,"id_ex_flush_en_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_inst ");
    tracep->declBus(c+92,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+93,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+95,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+97,"op2_i", false,-1, 63,0);
    tracep->declBus(c+99,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+100,"reg_wen_i", false,-1);
    tracep->declQuad(c+101,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+103,"offset_addr_i", false,-1, 63,0);
    tracep->declQuad(c+118,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+120,"jump_en_o", false,-1);
    tracep->declBus(c+122,"flush_flag_o", false,-1, 2,0);
    tracep->declBus(c+121,"stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+92,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+93,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+109,"mem_ren_o", false,-1);
    tracep->declQuad(c+110,"mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+116,"mem_wen_o", false,-1);
    tracep->declQuad(c+112,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+114,"mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+117,"mem_wmask", false,-1, 7,0);
    tracep->declQuad(c+105,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+107,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+108,"reg_wen_o", false,-1);
    tracep->declBus(c+167,"opcode", false,-1, 6,0);
    tracep->declBus(c+168,"rd", false,-1, 4,0);
    tracep->declBus(c+169,"func3", false,-1, 2,0);
    tracep->declBus(c+170,"rs1", false,-1, 4,0);
    tracep->declBus(c+171,"rs2", false,-1, 4,0);
    tracep->declBus(c+172,"func7", false,-1, 6,0);
    tracep->declQuad(c+173,"op1_i_add_op2_i", false,-1, 63,0);
    tracep->declQuad(c+175,"op1_i_sub_op2_i", false,-1, 63,0);
    tracep->declQuad(c+177,"op1_i_mul_op2_i", false,-1, 63,0);
    tracep->declQuad(c+179,"op1_i_and_op2_i", false,-1, 63,0);
    tracep->declQuad(c+181,"op1_i_xor_op2_i", false,-1, 63,0);
    tracep->declQuad(c+183,"op1_i_or_op2_i", false,-1, 63,0);
    tracep->declQuad(c+185,"op1_i_rem_op2_i", false,-1, 63,0);
    tracep->declQuad(c+187,"op1_i_rem_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+189,"op1_i_div_op2_i", false,-1, 63,0);
    tracep->declQuad(c+191,"op1_i_div_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+193,"op1_i_shift_left_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+195,"op1_i_shift_right_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+197,"op1_i_shift_right_op2_i_signed", false,-1, 63,0);
    tracep->declQuad(c+199,"base_addr_add_addr_offset", false,-1, 63,0);
    tracep->declBit(c+201,"op1_i_equal_op2_i", false,-1);
    tracep->declBit(c+202,"op1_i_less_op2_i_signed", false,-1);
    tracep->declBit(c+203,"op1_i_less_op2_i_unsigned", false,-1);
    tracep->declQuad(c+204,"compress_add", false,-1, 63,0);
    tracep->declQuad(c+206,"compress_sub", false,-1, 63,0);
    tracep->declQuad(c+208,"compress_mul", false,-1, 63,0);
    tracep->declQuad(c+210,"compress_and", false,-1, 63,0);
    tracep->declQuad(c+212,"compress_xor", false,-1, 63,0);
    tracep->declQuad(c+214,"compress_or", false,-1, 63,0);
    tracep->declQuad(c+216,"compress_rem", false,-1, 63,0);
    tracep->declQuad(c+218,"compress_div", false,-1, 63,0);
    tracep->declQuad(c+220,"compress_shift_left_unsigned", false,-1, 63,0);
    tracep->declQuad(c+222,"compress_shift_right_unsigned", false,-1, 63,0);
    tracep->declQuad(c+224,"compress_shift_right_signed", false,-1, 63,0);
    tracep->declQuad(c+226,"compress_addr_offset", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_mem_inst ");
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBus(c+121,"stall_flag_i", false,-1, 2,0);
    tracep->declBus(c+122,"flush_flag_i", false,-1, 2,0);
    tracep->declBus(c+92,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+93,"inst_addr_i", false,-1, 63,0);
    tracep->declBit(c+109,"ex_ren_i", false,-1);
    tracep->declQuad(c+110,"ex_raddr_i", false,-1, 63,0);
    tracep->declBit(c+116,"ex_wen_i", false,-1);
    tracep->declQuad(c+112,"ex_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+114,"ex_wdata_i", false,-1, 63,0);
    tracep->declBus(c+117,"ex_wmask_i", false,-1, 7,0);
    tracep->declQuad(c+105,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+107,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+108,"reg_wen_i", false,-1);
    tracep->declBus(c+145,"stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+146,"flush_flag_o", false,-1, 2,0);
    tracep->declBus(c+131,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+129,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+132,"ren_o", false,-1);
    tracep->declQuad(c+133,"raddr_o", false,-1, 63,0);
    tracep->declBit(c+135,"wen_o", false,-1);
    tracep->declQuad(c+136,"waddr_o", false,-1, 63,0);
    tracep->declQuad(c+138,"wdata_o", false,-1, 63,0);
    tracep->declBus(c+140,"wmask_o", false,-1, 7,0);
    tracep->declQuad(c+141,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+143,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+144,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff0 ");
    tracep->declBus(c+273,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declBus(c+275,"set_data", false,-1, 31,0);
    tracep->declBus(c+92,"data_i", false,-1, 31,0);
    tracep->declBus(c+131,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+276,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declQuad(c+277,"set_data", false,-1, 63,0);
    tracep->declQuad(c+93,"data_i", false,-1, 63,0);
    tracep->declQuad(c+129,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff10 ");
    tracep->declBus(c+279,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declBus(c+274,"set_data", false,-1, 0,0);
    tracep->declBus(c+108,"data_i", false,-1, 0,0);
    tracep->declBus(c+144,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff11 ");
    tracep->declBus(c+280,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declBus(c+281,"set_data", false,-1, 2,0);
    tracep->declBus(c+121,"data_i", false,-1, 2,0);
    tracep->declBus(c+145,"data_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff12 ");
    tracep->declBus(c+280,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declBus(c+281,"set_data", false,-1, 2,0);
    tracep->declBus(c+122,"data_i", false,-1, 2,0);
    tracep->declBus(c+146,"data_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+279,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declBus(c+274,"set_data", false,-1, 0,0);
    tracep->declBus(c+109,"data_i", false,-1, 0,0);
    tracep->declBus(c+132,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+276,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declQuad(c+277,"set_data", false,-1, 63,0);
    tracep->declQuad(c+110,"data_i", false,-1, 63,0);
    tracep->declQuad(c+133,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+279,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declBus(c+274,"set_data", false,-1, 0,0);
    tracep->declBus(c+116,"data_i", false,-1, 0,0);
    tracep->declBus(c+135,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+276,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declQuad(c+277,"set_data", false,-1, 63,0);
    tracep->declQuad(c+112,"data_i", false,-1, 63,0);
    tracep->declQuad(c+136,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+276,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declQuad(c+277,"set_data", false,-1, 63,0);
    tracep->declQuad(c+114,"data_i", false,-1, 63,0);
    tracep->declQuad(c+138,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+282,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declBus(c+283,"set_data", false,-1, 7,0);
    tracep->declBus(c+117,"data_i", false,-1, 7,0);
    tracep->declBus(c+140,"data_o", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+276,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declQuad(c+277,"set_data", false,-1, 63,0);
    tracep->declQuad(c+105,"data_i", false,-1, 63,0);
    tracep->declQuad(c+141,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff9 ");
    tracep->declBus(c+284,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declBus(c+285,"set_data", false,-1, 4,0);
    tracep->declBus(c+107,"data_i", false,-1, 4,0);
    tracep->declBus(c+143,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_ex_inst ");
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+127,"flush_flag_i", false,-1);
    tracep->declBit(c+128,"stall_flag_i", false,-1);
    tracep->declBus(c+85,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+83,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+1,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+3,"op2_i", false,-1, 63,0);
    tracep->declBus(c+88,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+89,"reg_wen_i", false,-1);
    tracep->declQuad(c+5,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+90,"offset_addr_i", false,-1, 63,0);
    tracep->declBus(c+92,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+93,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+95,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+97,"op2_o", false,-1, 63,0);
    tracep->declBus(c+99,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+100,"reg_wen_o", false,-1);
    tracep->declQuad(c+101,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+103,"offset_addr_o", false,-1, 63,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+273,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+127,"flush_flag_i", false,-1);
    tracep->declBit(c+128,"stall_flag_i", false,-1);
    tracep->declBus(c+275,"set_data", false,-1, 31,0);
    tracep->declBus(c+85,"data_i", false,-1, 31,0);
    tracep->declBus(c+92,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+276,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+127,"flush_flag_i", false,-1);
    tracep->declBit(c+128,"stall_flag_i", false,-1);
    tracep->declQuad(c+277,"set_data", false,-1, 63,0);
    tracep->declQuad(c+83,"data_i", false,-1, 63,0);
    tracep->declQuad(c+93,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+276,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+127,"flush_flag_i", false,-1);
    tracep->declBit(c+128,"stall_flag_i", false,-1);
    tracep->declQuad(c+277,"set_data", false,-1, 63,0);
    tracep->declQuad(c+1,"data_i", false,-1, 63,0);
    tracep->declQuad(c+95,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+276,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+127,"flush_flag_i", false,-1);
    tracep->declBit(c+128,"stall_flag_i", false,-1);
    tracep->declQuad(c+277,"set_data", false,-1, 63,0);
    tracep->declQuad(c+3,"data_i", false,-1, 63,0);
    tracep->declQuad(c+97,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+284,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+127,"flush_flag_i", false,-1);
    tracep->declBit(c+128,"stall_flag_i", false,-1);
    tracep->declBus(c+285,"set_data", false,-1, 4,0);
    tracep->declBus(c+88,"data_i", false,-1, 4,0);
    tracep->declBus(c+99,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+279,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+127,"flush_flag_i", false,-1);
    tracep->declBit(c+128,"stall_flag_i", false,-1);
    tracep->declBus(c+274,"set_data", false,-1, 0,0);
    tracep->declBus(c+89,"data_i", false,-1, 0,0);
    tracep->declBus(c+100,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+276,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+127,"flush_flag_i", false,-1);
    tracep->declBit(c+128,"stall_flag_i", false,-1);
    tracep->declQuad(c+277,"set_data", false,-1, 63,0);
    tracep->declQuad(c+5,"data_i", false,-1, 63,0);
    tracep->declQuad(c+101,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+276,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+127,"flush_flag_i", false,-1);
    tracep->declBit(c+128,"stall_flag_i", false,-1);
    tracep->declQuad(c+277,"set_data", false,-1, 63,0);
    tracep->declQuad(c+90,"data_i", false,-1, 63,0);
    tracep->declQuad(c+103,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_inst ");
    tracep->declBus(c+85,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+83,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+7,"rs1_data_i", false,-1, 63,0);
    tracep->declQuad(c+9,"rs2_data_i", false,-1, 63,0);
    tracep->declBus(c+86,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+87,"rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+85,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+83,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+1,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+3,"op2_o", false,-1, 63,0);
    tracep->declBus(c+88,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+89,"reg_wen", false,-1);
    tracep->declQuad(c+5,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+90,"offset_addr_o", false,-1, 63,0);
    tracep->declBus(c+228,"opcode", false,-1, 6,0);
    tracep->declBus(c+229,"rd", false,-1, 4,0);
    tracep->declBus(c+230,"func3", false,-1, 2,0);
    tracep->declBus(c+231,"rs1", false,-1, 4,0);
    tracep->declBus(c+232,"rs2", false,-1, 4,0);
    tracep->declBus(c+233,"func7", false,-1, 6,0);
    tracep->declBus(c+234,"imm", false,-1, 11,0);
    tracep->declBus(c+235,"shamt", false,-1, 5,0);
    tracep->declQuad(c+236,"immI", false,-1, 63,0);
    tracep->declQuad(c+238,"immU", false,-1, 63,0);
    tracep->declQuad(c+240,"immS", false,-1, 63,0);
    tracep->declQuad(c+242,"immB", false,-1, 63,0);
    tracep->declQuad(c+244,"immJ", false,-1, 63,0);
    tracep->declQuad(c+246,"immL", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_inst ");
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+125,"flush_flag_i", false,-1);
    tracep->declBit(c+126,"stall_flag_i", false,-1);
    tracep->declBus(c+80,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+76,"inst_addr_i", false,-1, 63,0);
    tracep->declBus(c+85,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+83,"inst_addr_o", false,-1, 63,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+273,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+125,"flush_flag_i", false,-1);
    tracep->declBit(c+126,"stall_flag_i", false,-1);
    tracep->declBus(c+275,"set_data", false,-1, 31,0);
    tracep->declBus(c+80,"data_i", false,-1, 31,0);
    tracep->declBus(c+85,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+276,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+125,"flush_flag_i", false,-1);
    tracep->declBit(c+126,"stall_flag_i", false,-1);
    tracep->declQuad(c+277,"set_data", false,-1, 63,0);
    tracep->declQuad(c+76,"data_i", false,-1, 63,0);
    tracep->declQuad(c+83,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_fetch_inst ");
    tracep->declQuad(c+76,"pc_addr_i", false,-1, 63,0);
    tracep->declQuad(c+78,"rom_inst_i", false,-1, 63,0);
    tracep->declQuad(c+76,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+80,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+78,"inst_get", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_inst ");
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBus(c+131,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+129,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+129,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+145,"stall_flag_i", false,-1, 2,0);
    tracep->declBus(c+146,"flush_flag_i", false,-1, 2,0);
    tracep->declBit(c+132,"ren_i", false,-1);
    tracep->declBit(c+135,"wen_i", false,-1);
    tracep->declQuad(c+133,"raddr_i", false,-1, 63,0);
    tracep->declQuad(c+149,"rdata_o", false,-1, 63,0);
    tracep->declQuad(c+136,"waddr_i", false,-1, 63,0);
    tracep->declQuad(c+138,"wdata_i", false,-1, 63,0);
    tracep->declBus(c+140,"wmask_i", false,-1, 7,0);
    tracep->declQuad(c+141,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+143,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+144,"reg_wen_i", false,-1);
    tracep->declQuad(c+151,"ram_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+153,"ram_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+155,"ram_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+165,"ram_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+81,"rom_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+157,"rom_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+147,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+143,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+144,"reg_wen_o", false,-1);
    tracep->declBus(c+145,"stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+146,"flush_flag_o", false,-1, 2,0);
    tracep->declBus(c+248,"opcode", false,-1, 6,0);
    tracep->declBus(c+249,"rd", false,-1, 4,0);
    tracep->declBus(c+250,"func3", false,-1, 2,0);
    tracep->declBus(c+251,"rs1", false,-1, 4,0);
    tracep->declBus(c+252,"rs2", false,-1, 4,0);
    tracep->declBus(c+286,"func7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_wb_inst ");
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declQuad(c+129,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+159,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+147,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+143,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+144,"reg_wen_i", false,-1);
    tracep->declQuad(c+161,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+163,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+164,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+276,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declQuad(c+277,"set_data", false,-1, 63,0);
    tracep->declQuad(c+129,"data_i", false,-1, 63,0);
    tracep->declQuad(c+159,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+284,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declBus(c+285,"set_data", false,-1, 4,0);
    tracep->declBus(c+143,"data_i", false,-1, 4,0);
    tracep->declBus(c+163,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+279,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declBus(c+274,"set_data", false,-1, 0,0);
    tracep->declBus(c+144,"data_i", false,-1, 0,0);
    tracep->declBus(c+164,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+276,"DW", false,-1, 31,0);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+274,"flush_flag_i", false,-1);
    tracep->declBit(c+274,"stall_flag_i", false,-1);
    tracep->declQuad(c+277,"set_data", false,-1, 63,0);
    tracep->declQuad(c+147,"data_i", false,-1, 63,0);
    tracep->declQuad(c+161,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declQuad(c+118,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+120,"jump_en_i", false,-1);
    tracep->declBit(c+123,"flush_en_i", false,-1);
    tracep->declBit(c+124,"stall_en_i", false,-1);
    tracep->declQuad(c+76,"pc_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ram_inst ");
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declQuad(c+153,"ram_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+151,"ram_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+155,"ram_raddr_i", false,-1, 63,0);
    tracep->declQuad(c+165,"ram_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+153,"waddr", false,-1, 63,0);
    tracep->declQuad(c+155,"raddr", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_inst ");
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declBus(c+86,"rs1_raddr_i", false,-1, 4,0);
    tracep->declBus(c+87,"rs2_raddr_i", false,-1, 4,0);
    tracep->declQuad(c+7,"rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+9,"rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+163,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+161,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+164,"reg_wen", false,-1);
    tracep->declQuad(c+159,"inst_addr_i", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+11+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->declQuad(c+159,"pc_reg", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+75,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rom_inst ");
    tracep->declQuad(c+76,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+78,"inst_o", false,-1, 63,0);
    tracep->declQuad(c+81,"mem_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+157,"mem_raddr_i", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_inst ");
    tracep->declBit(c+253,"clk", false,-1);
    tracep->declBit(c+254,"rst", false,-1);
    tracep->declQuad(c+159,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+159,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+163,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+161,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+164,"reg_wen_i", false,-1);
    tracep->declBus(c+163,"reg_waddr_o", false,-1, 4,0);
    tracep->declQuad(c+161,"reg_wdata_o", false,-1, 63,0);
    tracep->declBit(c+164,"reg_wen_o", false,-1);
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
    tracep->fullQData(oldp+81,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__rom_inst__DOT__rom_mem
                               [(0xfffU & (IData)((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_rom_raddr_o 
                                                   >> 2U)))]),64);
    tracep->fullQData(oldp+83,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o),64);
    tracep->fullIData(oldp+85,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o),32);
    tracep->fullCData(oldp+86,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o),5);
    tracep->fullCData(oldp+87,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o),5);
    tracep->fullCData(oldp+88,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o),5);
    tracep->fullBit(oldp+89,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen));
    tracep->fullQData(oldp+90,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_offset_addr_o),64);
    tracep->fullIData(oldp+92,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o),32);
    tracep->fullQData(oldp+93,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o),64);
    tracep->fullQData(oldp+95,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o),64);
    tracep->fullQData(oldp+97,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o),64);
    tracep->fullCData(oldp+99,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+100,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen));
    tracep->fullQData(oldp+101,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_base_addr_o),64);
    tracep->fullQData(oldp+103,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_offset_addr_o),64);
    tracep->fullQData(oldp+105,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_rd_wdata_o),64);
    tracep->fullCData(oldp+107,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_rd_waddr_o),5);
    tracep->fullBit(oldp+108,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_reg_wen_o));
    tracep->fullBit(oldp+109,((1U & (IData)(((3U == 
                                              (0x7fU 
                                               & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                                             & (0x7000U 
                                                != 
                                                (0x7000U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)))))));
    tracep->fullQData(oldp+110,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
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
                                                      : vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                     : 0ULL)
                                                    : 0ULL))))
                                             : 0ULL))),64);
    tracep->fullQData(oldp+114,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
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
    tracep->fullBit(oldp+116,((IData)((0x23U == (0x407fU 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)))));
    tracep->fullCData(oldp+117,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
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
    tracep->fullQData(oldp+118,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
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
    tracep->fullBit(oldp+120,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_jump_en_o));
    tracep->fullCData(oldp+121,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_stall_flag_o),3);
    tracep->fullCData(oldp+122,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_flush_flag_o),3);
    tracep->fullBit(oldp+123,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_pc_flush_en_o));
    tracep->fullBit(oldp+124,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_pc_stall_en_o));
    tracep->fullBit(oldp+125,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_if_id_flush_en_o));
    tracep->fullBit(oldp+126,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_if_id_stall_en_o));
    tracep->fullBit(oldp+127,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_id_ex_flush_en_o));
    tracep->fullBit(oldp+128,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_id_ex_stall_en_o));
    tracep->fullQData(oldp+129,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_inst_addr_o),64);
    tracep->fullIData(oldp+131,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o),32);
    tracep->fullBit(oldp+132,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_ren_o));
    tracep->fullQData(oldp+133,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_raddr_o),64);
    tracep->fullBit(oldp+135,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wen_o));
    tracep->fullQData(oldp+136,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_waddr_o),64);
    tracep->fullQData(oldp+138,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wdata_o),64);
    tracep->fullCData(oldp+140,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wmask_o),8);
    tracep->fullQData(oldp+141,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_rd_wdata_o),64);
    tracep->fullCData(oldp+143,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_rd_waddr_o),5);
    tracep->fullBit(oldp+144,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_reg_wen_o));
    tracep->fullCData(oldp+145,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_stall_flag_o),3);
    tracep->fullCData(oldp+146,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_flush_flag_o),3);
    tracep->fullQData(oldp+147,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_mem_wb_rd_wdata_o),64);
    tracep->fullQData(oldp+149,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_ex_rdata_o),64);
    tracep->fullQData(oldp+151,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_ram_wdata_o),64);
    tracep->fullQData(oldp+153,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_ram_waddr_o),64);
    tracep->fullQData(oldp+155,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_ram_raddr_o),64);
    tracep->fullQData(oldp+157,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_rom_raddr_o),64);
    tracep->fullQData(oldp+159,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_inst_addr_o),64);
    tracep->fullQData(oldp+161,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_wb_rd_wdata_o),64);
    tracep->fullCData(oldp+163,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_wb_rd_waddr_o),5);
    tracep->fullBit(oldp+164,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_wb_reg_wen_o));
    tracep->fullQData(oldp+165,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ram_inst__DOT__ram_mem
                                [(0xfffU & (IData)(
                                                   (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_ram_raddr_o 
                                                    >> 2U)))]),64);
    tracep->fullCData(oldp+167,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)),7);
    tracep->fullCData(oldp+168,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+169,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+170,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+171,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+172,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                 >> 0x19U)),7);
    tracep->fullQData(oldp+173,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),64);
    tracep->fullQData(oldp+175,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i),64);
    tracep->fullQData(oldp+177,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i),64);
    tracep->fullQData(oldp+179,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),64);
    tracep->fullQData(oldp+181,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),64);
    tracep->fullQData(oldp+183,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),64);
    tracep->fullQData(oldp+185,(VL_MODDIVS_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+187,(VL_MODDIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+189,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i),64);
    tracep->fullQData(oldp+191,(VL_DIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+193,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned),64);
    tracep->fullQData(oldp+195,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned),64);
    tracep->fullQData(oldp+197,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed),64);
    tracep->fullQData(oldp+199,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),64);
    tracep->fullBit(oldp+201,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
    tracep->fullBit(oldp+202,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
    tracep->fullBit(oldp+203,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
    tracep->fullQData(oldp+204,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_add),64);
    tracep->fullQData(oldp+206,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i)))),64);
    tracep->fullQData(oldp+208,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i)))),64);
    tracep->fullQData(oldp+210,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i)))),64);
    tracep->fullQData(oldp+212,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i)))),64);
    tracep->fullQData(oldp+214,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)))),64);
    tracep->fullQData(oldp+216,((((QData)((IData)((- (IData)(
                                                             (VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)) 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)))))),64);
    tracep->fullQData(oldp+218,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i)))),64);
    tracep->fullQData(oldp+220,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned),64);
    tracep->fullQData(oldp+222,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned),64);
    tracep->fullQData(oldp+224,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_signed),64);
    tracep->fullQData(oldp+226,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)))),64);
    tracep->fullCData(oldp+228,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)),7);
    tracep->fullCData(oldp+229,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+230,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+231,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+232,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+233,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                 >> 0x19U)),7);
    tracep->fullSData(oldp+234,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                 >> 0x14U)),12);
    tracep->fullCData(oldp+235,((0x3fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),6);
    tracep->fullQData(oldp+236,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immI),64);
    tracep->fullQData(oldp+238,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immU),64);
    tracep->fullQData(oldp+240,((((- (QData)((IData)(
                                                     (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                    >> 7U))))))),64);
    tracep->fullQData(oldp+242,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immB),64);
    tracep->fullQData(oldp+244,((((- (QData)((IData)(
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
    tracep->fullQData(oldp+246,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immL),64);
    tracep->fullCData(oldp+248,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o)),7);
    tracep->fullCData(oldp+249,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+250,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+251,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+252,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_inst_o 
                                          >> 0x14U))),5);
    tracep->fullBit(oldp+253,(vlSelf->clk));
    tracep->fullBit(oldp+254,(vlSelf->rst));
    tracep->fullBit(oldp+255,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_wen));
    tracep->fullQData(oldp+256,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_waddr_o),64);
    tracep->fullQData(oldp+258,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_wdata_o),64);
    tracep->fullCData(oldp+260,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_wmask),8);
    tracep->fullBit(oldp+261,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_ren));
    tracep->fullQData(oldp+262,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_raddr_o),64);
    tracep->fullBit(oldp+264,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_flush_flag_o));
    tracep->fullQData(oldp+265,(vlSelf->tb__DOT__soc_inst__DOT__ram_riscv_rdata_o),64);
    tracep->fullQData(oldp+267,(vlSelf->tb__DOT__soc_inst__DOT__riscv_rom_raddr_o),64);
    tracep->fullQData(oldp+269,(vlSelf->tb__DOT__soc_inst__DOT__rom_riscv_rdata_o),64);
    tracep->fullCData(oldp+271,(vlSelf->tb__DOT__soc_inst__DOT__riscv_axi_sid_o),4);
    tracep->fullBit(oldp+272,(vlSelf->tb__DOT__soc_inst__DOT__riscv_axi_rwvalid_o));
    tracep->fullIData(oldp+273,(0x20U),32);
    tracep->fullBit(oldp+274,(0U));
    tracep->fullIData(oldp+275,(0x13U),32);
    tracep->fullIData(oldp+276,(0x40U),32);
    tracep->fullQData(oldp+277,(0ULL),64);
    tracep->fullIData(oldp+279,(1U),32);
    tracep->fullIData(oldp+280,(3U),32);
    tracep->fullCData(oldp+281,(0U),3);
    tracep->fullIData(oldp+282,(8U),32);
    tracep->fullCData(oldp+283,(0U),8);
    tracep->fullIData(oldp+284,(5U),32);
    tracep->fullCData(oldp+285,(0U),5);
    tracep->fullCData(oldp+286,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_inst__DOT__func7),7);
}
