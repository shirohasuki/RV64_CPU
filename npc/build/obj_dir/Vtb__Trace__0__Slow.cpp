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
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->pushNamePrefix("tb ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->pushNamePrefix("soc_inst ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBus(c+295,"axi_core_stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+296,"axi_core_flush_flag_o", false,-1, 2,0);
    tracep->declBit(c+89,"core_axi_ren_o", false,-1);
    tracep->declQuad(c+90,"core_axi_raddr_o", false,-1, 63,0);
    tracep->declBit(c+92,"core_axi_wen_o", false,-1);
    tracep->declQuad(c+93,"core_axi_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+95,"core_axi_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+97,"core_axi_wmask_o", false,-1, 63,0);
    tracep->declQuad(c+99,"core_ram_inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+297,"core_ram_if_ren_o", false,-1);
    tracep->declBus(c+101,"axi_ram_raddr_o", false,-1, 31,0);
    tracep->declBit(c+102,"axi_ram_ren_o", false,-1);
    tracep->declBus(c+103,"axi_ram_waddr_o", false,-1, 31,0);
    tracep->declQuad(c+104,"axi_ram_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+106,"axi_ram_wmask_o", false,-1, 63,0);
    tracep->declBit(c+108,"axi_ram_wen_o", false,-1);
    tracep->declQuad(c+287,"axi_core_rdata_o", false,-1, 63,0);
    tracep->declBit(c+109,"axi_core_busy_o", false,-1);
    tracep->declBit(c+1,"axi_core_busy_end_o", false,-1);
    tracep->declQuad(c+110,"ram_axi_rdata_o", false,-1, 63,0);
    tracep->declBit(c+297,"ram_axi_rready_o", false,-1);
    tracep->declBit(c+297,"ram_axi_wready_o", false,-1);
    tracep->declBit(c+112,"ram_axi_bvalid_o", false,-1);
    tracep->declQuad(c+113,"ram_core_inst_o", false,-1, 63,0);
    tracep->pushNamePrefix("axi_inst ");
    tracep->declBus(c+298,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+298,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+298,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+299,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+300,"AXI_BURST_WIDTH", false,-1, 31,0);
    tracep->declBus(c+298,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+301,"AXI_SID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+302,"AXI_MID_WIDTH", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+109,"axi_busy_o", false,-1);
    tracep->declBit(c+1,"axi_busy_end_o", false,-1);
    tracep->declBit(c+89,"core_ren_i", false,-1);
    tracep->declQuad(c+90,"core_raddr_i", false,-1, 63,0);
    tracep->declQuad(c+287,"core_rdata_o", false,-1, 63,0);
    tracep->declBit(c+297,"ram_rready_i", false,-1);
    tracep->declQuad(c+110,"ram_rdata_i", false,-1, 63,0);
    tracep->declBus(c+101,"ram_raddr_o", false,-1, 31,0);
    tracep->declBit(c+102,"ram_ren_o", false,-1);
    tracep->declBit(c+92,"core_wen_i", false,-1);
    tracep->declQuad(c+93,"core_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+95,"core_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+97,"core_wmask_i", false,-1, 63,0);
    tracep->declBit(c+297,"ram_wready_i", false,-1);
    tracep->declBit(c+112,"ram_bvalid_i", false,-1);
    tracep->declBus(c+103,"ram_waddr_o", false,-1, 31,0);
    tracep->declQuad(c+104,"ram_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+106,"ram_wmask_o", false,-1, 63,0);
    tracep->declBit(c+108,"ram_wen_o", false,-1);
    tracep->declBus(c+115,"rwaddr", false,-1, 31,0);
    tracep->declQuad(c+116,"wdata", false,-1, 63,0);
    tracep->declBit(c+89,"ren_i", false,-1);
    tracep->declBit(c+102,"ren_o", false,-1);
    tracep->declBit(c+297,"rready", false,-1);
    tracep->declBit(c+92,"wen_i", false,-1);
    tracep->declBit(c+108,"wen_o", false,-1);
    tracep->declBit(c+297,"wready", false,-1);
    tracep->declBit(c+112,"bvalid", false,-1);
    tracep->declBit(c+109,"axi_busy", false,-1);
    tracep->declBit(c+1,"busy_end", false,-1);
    tracep->declBit(c+118,"maxi_ravalid", false,-1);
    tracep->declBit(c+119,"maxi_raready", false,-1);
    tracep->declBus(c+101,"maxi_raddr", false,-1, 31,0);
    tracep->declBit(c+297,"maxi_rdvalid", false,-1);
    tracep->declBit(c+120,"maxi_rdready", false,-1);
    tracep->declQuad(c+287,"maxi_rdata", false,-1, 63,0);
    tracep->declBit(c+121,"maxi_wavalid", false,-1);
    tracep->declBit(c+122,"maxi_waready", false,-1);
    tracep->declBus(c+103,"maxi_waddr", false,-1, 31,0);
    tracep->declBit(c+297,"maxi_wdvalid", false,-1);
    tracep->declBit(c+123,"maxi_wdready", false,-1);
    tracep->declQuad(c+104,"maxi_wdata", false,-1, 63,0);
    tracep->declQuad(c+106,"maxi_wmask", false,-1, 63,0);
    tracep->declBit(c+297,"maxi_bready", false,-1);
    tracep->declBit(c+112,"maxi_bvalid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core_inst ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declQuad(c+287,"mem_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+113,"if_inst_i", false,-1, 63,0);
    tracep->declBit(c+89,"mem_ren_o", false,-1);
    tracep->declQuad(c+90,"mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+92,"mem_wen_o", false,-1);
    tracep->declQuad(c+93,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+95,"mem_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+97,"mem_wmask_o", false,-1, 63,0);
    tracep->declQuad(c+99,"if_inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+297,"if_ren_o", false,-1);
    tracep->declBus(c+295,"axi_stall_flag_i", false,-1, 2,0);
    tracep->declBus(c+296,"axi_flush_flag_i", false,-1, 2,0);
    tracep->declBit(c+109,"axi_busy_i", false,-1);
    tracep->declBit(c+1,"axi_busy_end_i", false,-1);
    tracep->declQuad(c+99,"pc_reg_pc_o", false,-1, 63,0);
    tracep->declQuad(c+287,"ram_mem_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+113,"ram_if_inst_o", false,-1, 63,0);
    tracep->declBus(c+124,"if_inst_o", false,-1, 31,0);
    tracep->declQuad(c+99,"if_if_id_inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+297,"if_ram_ren_o", false,-1);
    tracep->declQuad(c+125,"if_id_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+127,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+128,"id_re_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+129,"id_re_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+127,"id_inst_o", false,-1, 31,0);
    tracep->declQuad(c+125,"id_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+2,"id_op1_o", false,-1, 63,0);
    tracep->declQuad(c+4,"id_op2_o", false,-1, 63,0);
    tracep->declBus(c+130,"id_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+131,"id_reg_wen", false,-1);
    tracep->declQuad(c+6,"id_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+132,"id_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+289,"regs_re_rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+291,"regs_re_rs2_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+8,"re_id_rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+10,"re_id_rs2_rdata_o", false,-1, 63,0);
    tracep->declBit(c+134,"rs_id_ex_hit_o", false,-1);
    tracep->declBus(c+128,"re_reg_rs1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+129,"re_reg_rs2_raddr_o", false,-1, 4,0);
    tracep->declBus(c+135,"id_ex_inst_o", false,-1, 31,0);
    tracep->declQuad(c+136,"id_ex_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+138,"id_ex_op1_o", false,-1, 63,0);
    tracep->declQuad(c+140,"id_ex_op2_o", false,-1, 63,0);
    tracep->declBus(c+142,"id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+143,"id_ex_reg_wen", false,-1);
    tracep->declQuad(c+144,"id_ex_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+146,"id_ex_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+148,"ex_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+150,"ex_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+151,"ex_reg_wen_o", false,-1);
    tracep->declQuad(c+136,"ex_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+135,"ex_ex_mem_inst_o", false,-1, 31,0);
    tracep->declBit(c+152,"ex_ex_mem_ren_o", false,-1);
    tracep->declQuad(c+153,"ex_ex_mem_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+155,"ex_ex_mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+157,"ex_ex_mem_wdata_o", false,-1, 63,0);
    tracep->declBit(c+159,"ex_ex_mem_wen_o", false,-1);
    tracep->declBus(c+160,"ex_ex_mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+161,"ex_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+163,"ex_jump_en_o", false,-1);
    tracep->declBit(c+164,"ex_isload_o", false,-1);
    tracep->declBit(c+165,"ex_issave_o", false,-1);
    tracep->declQuad(c+161,"ctrl_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+163,"ctrl_jump_en_o", false,-1);
    tracep->declBit(c+12,"ctrl_pc_flush_en_o", false,-1);
    tracep->declBit(c+13,"ctrl_pc_stall_en_o", false,-1);
    tracep->declBit(c+14,"ctrl_if_id_flush_en_o", false,-1);
    tracep->declBit(c+15,"ctrl_if_id_stall_en_o", false,-1);
    tracep->declBit(c+16,"ctrl_id_ex_flush_en_o", false,-1);
    tracep->declBit(c+17,"ctrl_id_ex_stall_en_o", false,-1);
    tracep->declBit(c+18,"ctrl_ex_mem_flush_en_o", false,-1);
    tracep->declBit(c+19,"ctrl_ex_mem_stall_en_o", false,-1);
    tracep->declBit(c+20,"ctrl_mem_wb_flush_en_o", false,-1);
    tracep->declBit(c+21,"ctrl_mem_wb_stall_en_o", false,-1);
    tracep->declQuad(c+166,"ex_mem_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+168,"ex_mem_mem_inst_o", false,-1, 31,0);
    tracep->declBit(c+169,"ex_mem_mem_ren_o", false,-1);
    tracep->declQuad(c+170,"ex_mem_mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+172,"ex_mem_mem_wen_o", false,-1);
    tracep->declQuad(c+173,"ex_mem_mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+175,"ex_mem_mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+177,"ex_mem_mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+178,"ex_mem_mem_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+180,"ex_mem_mem_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+181,"ex_mem_mem_reg_wen_o", false,-1);
    tracep->declBus(c+303,"ex_mem_mem_stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+304,"ex_mem_mem_flush_flag_o", false,-1, 2,0);
    tracep->declBit(c+182,"ex_mem_isload_o", false,-1);
    tracep->declBit(c+183,"ex_mem_issave_o", false,-1);
    tracep->declQuad(c+166,"mem_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+293,"mem_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+180,"mem_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+181,"mem_reg_wen_o", false,-1);
    tracep->declQuad(c+22,"mem_ex_rdata_o", false,-1, 63,0);
    tracep->declBit(c+182,"mem_isload_o", false,-1);
    tracep->declBit(c+183,"mem_issave_o", false,-1);
    tracep->declQuad(c+95,"mem_ram_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+93,"mem_ram_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+97,"mem_ram_wmask_o", false,-1, 63,0);
    tracep->declQuad(c+90,"mem_ram_raddr_o", false,-1, 63,0);
    tracep->declBit(c+89,"mem_ram_ren_o", false,-1);
    tracep->declBit(c+92,"mem_ram_wen_o", false,-1);
    tracep->declQuad(c+184,"mem_wb_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+186,"mem_wb_wb_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+188,"mem_wb_wb_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+189,"mem_wb_wb_reg_wen_o", false,-1);
    tracep->declQuad(c+184,"wb_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+186,"wb_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+188,"wb_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+189,"wb_reg_wen_o", false,-1);
    tracep->pushNamePrefix("ctrl_inst ");
    tracep->declQuad(c+161,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+163,"jump_en_i", false,-1);
    tracep->declBit(c+164,"ex_inst_isload_i", false,-1);
    tracep->declBit(c+165,"ex_inst_issave_i", false,-1);
    tracep->declBit(c+182,"mem_inst_isload_i", false,-1);
    tracep->declBit(c+183,"mem_inst_issave_i", false,-1);
    tracep->declBit(c+134,"rs_id_ex_hit_i", false,-1);
    tracep->declBit(c+109,"axi_busy_i", false,-1);
    tracep->declBit(c+1,"axi_busy_end_i", false,-1);
    tracep->declQuad(c+161,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+163,"jump_en_o", false,-1);
    tracep->declBit(c+13,"pc_stall_en_o", false,-1);
    tracep->declBit(c+12,"pc_flush_en_o", false,-1);
    tracep->declBit(c+15,"if_id_stall_en_o", false,-1);
    tracep->declBit(c+14,"if_id_flush_en_o", false,-1);
    tracep->declBit(c+17,"id_ex_stall_en_o", false,-1);
    tracep->declBit(c+16,"id_ex_flush_en_o", false,-1);
    tracep->declBit(c+19,"ex_mem_stall_en_o", false,-1);
    tracep->declBit(c+18,"ex_mem_flush_en_o", false,-1);
    tracep->declBit(c+21,"mem_wb_stall_en_o", false,-1);
    tracep->declBit(c+20,"mem_wb_flush_en_o", false,-1);
    tracep->declBit(c+190,"load_data_hit", false,-1);
    tracep->declBit(c+163,"jump", false,-1);
    tracep->declBit(c+109,"busy", false,-1);
    tracep->declBit(c+191,"load_inst", false,-1);
    tracep->declBit(c+192,"save_inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_inst ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBus(c+135,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+136,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+138,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+140,"op2_i", false,-1, 63,0);
    tracep->declBus(c+142,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+143,"reg_wen_i", false,-1);
    tracep->declQuad(c+144,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+146,"offset_addr_i", false,-1, 63,0);
    tracep->declQuad(c+161,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+163,"jump_en_o", false,-1);
    tracep->declBus(c+135,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+136,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+152,"mem_ren_o", false,-1);
    tracep->declQuad(c+153,"mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+159,"mem_wen_o", false,-1);
    tracep->declQuad(c+155,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+157,"mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+160,"mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+148,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+150,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+151,"reg_wen_o", false,-1);
    tracep->declBit(c+164,"isload_o", false,-1);
    tracep->declBit(c+165,"issave_o", false,-1);
    tracep->declBus(c+193,"opcode", false,-1, 6,0);
    tracep->declBus(c+194,"rd", false,-1, 4,0);
    tracep->declBus(c+195,"func3", false,-1, 2,0);
    tracep->declBus(c+196,"rs1", false,-1, 4,0);
    tracep->declBus(c+197,"rs2", false,-1, 4,0);
    tracep->declBus(c+198,"func7", false,-1, 6,0);
    tracep->declQuad(c+199,"op1_i_add_op2_i", false,-1, 63,0);
    tracep->declQuad(c+201,"op1_i_sub_op2_i", false,-1, 63,0);
    tracep->declQuad(c+203,"op1_i_mul_op2_i", false,-1, 63,0);
    tracep->declQuad(c+205,"op1_i_and_op2_i", false,-1, 63,0);
    tracep->declQuad(c+207,"op1_i_xor_op2_i", false,-1, 63,0);
    tracep->declQuad(c+209,"op1_i_or_op2_i", false,-1, 63,0);
    tracep->declQuad(c+211,"op1_i_rem_op2_i", false,-1, 63,0);
    tracep->declQuad(c+213,"op1_i_rem_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+215,"op1_i_div_op2_i", false,-1, 63,0);
    tracep->declQuad(c+217,"op1_i_div_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+219,"op1_i_shift_left_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+221,"op1_i_shift_right_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+223,"op1_i_shift_right_op2_i_signed", false,-1, 63,0);
    tracep->declQuad(c+225,"base_addr_add_addr_offset", false,-1, 63,0);
    tracep->declBit(c+227,"op1_i_equal_op2_i", false,-1);
    tracep->declBit(c+228,"op1_i_less_op2_i_signed", false,-1);
    tracep->declBit(c+229,"op1_i_less_op2_i_unsigned", false,-1);
    tracep->declQuad(c+230,"compress_add", false,-1, 63,0);
    tracep->declQuad(c+232,"compress_sub", false,-1, 63,0);
    tracep->declQuad(c+234,"compress_mul", false,-1, 63,0);
    tracep->declQuad(c+236,"compress_and", false,-1, 63,0);
    tracep->declQuad(c+238,"compress_xor", false,-1, 63,0);
    tracep->declQuad(c+240,"compress_or", false,-1, 63,0);
    tracep->declQuad(c+242,"compress_rem", false,-1, 63,0);
    tracep->declQuad(c+244,"compress_div", false,-1, 63,0);
    tracep->declQuad(c+246,"compress_shift_left_unsigned", false,-1, 63,0);
    tracep->declQuad(c+248,"compress_shift_right_unsigned", false,-1, 63,0);
    tracep->declQuad(c+250,"compress_shift_right_signed", false,-1, 63,0);
    tracep->declQuad(c+252,"compress_addr_offset", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_mem_inst ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBus(c+135,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+136,"inst_addr_i", false,-1, 63,0);
    tracep->declBit(c+152,"ex_ren_i", false,-1);
    tracep->declQuad(c+153,"ex_raddr_i", false,-1, 63,0);
    tracep->declBit(c+159,"ex_wen_i", false,-1);
    tracep->declQuad(c+155,"ex_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+157,"ex_wdata_i", false,-1, 63,0);
    tracep->declBus(c+160,"ex_wmask_i", false,-1, 7,0);
    tracep->declQuad(c+148,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+150,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+151,"reg_wen_i", false,-1);
    tracep->declBit(c+164,"load_inst_i", false,-1);
    tracep->declBit(c+182,"load_inst_o", false,-1);
    tracep->declBit(c+165,"save_inst_i", false,-1);
    tracep->declBit(c+183,"save_inst_o", false,-1);
    tracep->declBus(c+168,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+166,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+169,"ren_o", false,-1);
    tracep->declQuad(c+170,"raddr_o", false,-1, 63,0);
    tracep->declBit(c+172,"wen_o", false,-1);
    tracep->declQuad(c+173,"waddr_o", false,-1, 63,0);
    tracep->declQuad(c+175,"wdata_o", false,-1, 63,0);
    tracep->declBus(c+177,"wmask_o", false,-1, 7,0);
    tracep->declQuad(c+178,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+180,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+181,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff0 ");
    tracep->declBus(c+299,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declBus(c+305,"set_data", false,-1, 31,0);
    tracep->declBus(c+135,"data_i", false,-1, 31,0);
    tracep->declBus(c+168,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+298,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declQuad(c+306,"set_data", false,-1, 63,0);
    tracep->declQuad(c+136,"data_i", false,-1, 63,0);
    tracep->declQuad(c+166,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff10 ");
    tracep->declBus(c+302,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declBus(c+308,"set_data", false,-1, 0,0);
    tracep->declBus(c+151,"data_i", false,-1, 0,0);
    tracep->declBus(c+181,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff11 ");
    tracep->declBus(c+302,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declBus(c+308,"set_data", false,-1, 0,0);
    tracep->declBus(c+164,"data_i", false,-1, 0,0);
    tracep->declBus(c+182,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff12 ");
    tracep->declBus(c+302,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declBus(c+308,"set_data", false,-1, 0,0);
    tracep->declBus(c+165,"data_i", false,-1, 0,0);
    tracep->declBus(c+183,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+302,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declBus(c+308,"set_data", false,-1, 0,0);
    tracep->declBus(c+152,"data_i", false,-1, 0,0);
    tracep->declBus(c+169,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+298,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declQuad(c+306,"set_data", false,-1, 63,0);
    tracep->declQuad(c+153,"data_i", false,-1, 63,0);
    tracep->declQuad(c+170,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+302,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declBus(c+308,"set_data", false,-1, 0,0);
    tracep->declBus(c+159,"data_i", false,-1, 0,0);
    tracep->declBus(c+172,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+298,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declQuad(c+306,"set_data", false,-1, 63,0);
    tracep->declQuad(c+155,"data_i", false,-1, 63,0);
    tracep->declQuad(c+173,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+298,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declQuad(c+306,"set_data", false,-1, 63,0);
    tracep->declQuad(c+157,"data_i", false,-1, 63,0);
    tracep->declQuad(c+175,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+300,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declBus(c+309,"set_data", false,-1, 7,0);
    tracep->declBus(c+160,"data_i", false,-1, 7,0);
    tracep->declBus(c+177,"data_o", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+298,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declQuad(c+306,"set_data", false,-1, 63,0);
    tracep->declQuad(c+148,"data_i", false,-1, 63,0);
    tracep->declQuad(c+178,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff9 ");
    tracep->declBus(c+310,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declBus(c+311,"set_data", false,-1, 4,0);
    tracep->declBus(c+150,"data_i", false,-1, 4,0);
    tracep->declBus(c+180,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_ex_inst ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+16,"flush_flag_i", false,-1);
    tracep->declBit(c+17,"stall_flag_i", false,-1);
    tracep->declBus(c+127,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+125,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+2,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+4,"op2_i", false,-1, 63,0);
    tracep->declBus(c+130,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+131,"reg_wen_i", false,-1);
    tracep->declQuad(c+6,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+132,"offset_addr_i", false,-1, 63,0);
    tracep->declBus(c+135,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+136,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+138,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+140,"op2_o", false,-1, 63,0);
    tracep->declBus(c+142,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+143,"reg_wen_o", false,-1);
    tracep->declQuad(c+144,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+146,"offset_addr_o", false,-1, 63,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+299,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+16,"flush_flag_i", false,-1);
    tracep->declBit(c+17,"stall_flag_i", false,-1);
    tracep->declBus(c+305,"set_data", false,-1, 31,0);
    tracep->declBus(c+127,"data_i", false,-1, 31,0);
    tracep->declBus(c+135,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+298,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+16,"flush_flag_i", false,-1);
    tracep->declBit(c+17,"stall_flag_i", false,-1);
    tracep->declQuad(c+306,"set_data", false,-1, 63,0);
    tracep->declQuad(c+125,"data_i", false,-1, 63,0);
    tracep->declQuad(c+136,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+298,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+16,"flush_flag_i", false,-1);
    tracep->declBit(c+17,"stall_flag_i", false,-1);
    tracep->declQuad(c+306,"set_data", false,-1, 63,0);
    tracep->declQuad(c+2,"data_i", false,-1, 63,0);
    tracep->declQuad(c+138,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+298,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+16,"flush_flag_i", false,-1);
    tracep->declBit(c+17,"stall_flag_i", false,-1);
    tracep->declQuad(c+306,"set_data", false,-1, 63,0);
    tracep->declQuad(c+4,"data_i", false,-1, 63,0);
    tracep->declQuad(c+140,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+310,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+16,"flush_flag_i", false,-1);
    tracep->declBit(c+17,"stall_flag_i", false,-1);
    tracep->declBus(c+311,"set_data", false,-1, 4,0);
    tracep->declBus(c+130,"data_i", false,-1, 4,0);
    tracep->declBus(c+142,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+302,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+16,"flush_flag_i", false,-1);
    tracep->declBit(c+17,"stall_flag_i", false,-1);
    tracep->declBus(c+308,"set_data", false,-1, 0,0);
    tracep->declBus(c+131,"data_i", false,-1, 0,0);
    tracep->declBus(c+143,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+298,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+16,"flush_flag_i", false,-1);
    tracep->declBit(c+17,"stall_flag_i", false,-1);
    tracep->declQuad(c+306,"set_data", false,-1, 63,0);
    tracep->declQuad(c+6,"data_i", false,-1, 63,0);
    tracep->declQuad(c+144,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+298,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+16,"flush_flag_i", false,-1);
    tracep->declBit(c+17,"stall_flag_i", false,-1);
    tracep->declQuad(c+306,"set_data", false,-1, 63,0);
    tracep->declQuad(c+132,"data_i", false,-1, 63,0);
    tracep->declQuad(c+146,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_inst ");
    tracep->declBus(c+127,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+125,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+8,"rs1_data_i", false,-1, 63,0);
    tracep->declQuad(c+10,"rs2_data_i", false,-1, 63,0);
    tracep->declBus(c+128,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+129,"rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+127,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+125,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+2,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+4,"op2_o", false,-1, 63,0);
    tracep->declBus(c+130,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+131,"reg_wen", false,-1);
    tracep->declQuad(c+6,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+132,"offset_addr_o", false,-1, 63,0);
    tracep->declBus(c+254,"opcode", false,-1, 6,0);
    tracep->declBus(c+255,"rd", false,-1, 4,0);
    tracep->declBus(c+256,"func3", false,-1, 2,0);
    tracep->declBus(c+257,"rs1", false,-1, 4,0);
    tracep->declBus(c+258,"rs2", false,-1, 4,0);
    tracep->declBus(c+259,"func7", false,-1, 6,0);
    tracep->declBus(c+260,"imm", false,-1, 11,0);
    tracep->declBus(c+261,"shamt", false,-1, 5,0);
    tracep->declQuad(c+262,"immI", false,-1, 63,0);
    tracep->declQuad(c+264,"immU", false,-1, 63,0);
    tracep->declQuad(c+266,"immS", false,-1, 63,0);
    tracep->declQuad(c+268,"immB", false,-1, 63,0);
    tracep->declQuad(c+270,"immJ", false,-1, 63,0);
    tracep->declQuad(c+272,"immL", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_inst ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+14,"flush_flag_i", false,-1);
    tracep->declBit(c+15,"stall_flag_i", false,-1);
    tracep->declBus(c+124,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+99,"inst_addr_i", false,-1, 63,0);
    tracep->declBus(c+127,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+125,"inst_addr_o", false,-1, 63,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+299,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+14,"flush_flag_i", false,-1);
    tracep->declBit(c+15,"stall_flag_i", false,-1);
    tracep->declBus(c+305,"set_data", false,-1, 31,0);
    tracep->declBus(c+124,"data_i", false,-1, 31,0);
    tracep->declBus(c+127,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+298,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+14,"flush_flag_i", false,-1);
    tracep->declBit(c+15,"stall_flag_i", false,-1);
    tracep->declQuad(c+306,"set_data", false,-1, 63,0);
    tracep->declQuad(c+99,"data_i", false,-1, 63,0);
    tracep->declQuad(c+125,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_fetch_inst ");
    tracep->declQuad(c+99,"pc_addr_i", false,-1, 63,0);
    tracep->declQuad(c+113,"ram_inst_i", false,-1, 63,0);
    tracep->declQuad(c+99,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+124,"inst_o", false,-1, 31,0);
    tracep->declBit(c+297,"ren_o", false,-1);
    tracep->declQuad(c+113,"inst_get", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_inst ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBus(c+168,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+166,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+166,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+109,"axi_busy_i", false,-1);
    tracep->declBit(c+169,"ren_i", false,-1);
    tracep->declBit(c+172,"wen_i", false,-1);
    tracep->declQuad(c+170,"raddr_i", false,-1, 63,0);
    tracep->declQuad(c+22,"rdata_o", false,-1, 63,0);
    tracep->declQuad(c+173,"waddr_i", false,-1, 63,0);
    tracep->declQuad(c+175,"wdata_i", false,-1, 63,0);
    tracep->declBus(c+177,"wmask_i", false,-1, 7,0);
    tracep->declQuad(c+178,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+180,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+181,"reg_wen_i", false,-1);
    tracep->declQuad(c+95,"ram_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+93,"ram_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+97,"ram_wmask_o", false,-1, 63,0);
    tracep->declQuad(c+90,"ram_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+287,"ram_rdata_i", false,-1, 63,0);
    tracep->declBit(c+89,"ram_ren_o", false,-1);
    tracep->declBit(c+92,"ram_wen_o", false,-1);
    tracep->declQuad(c+293,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+180,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+181,"reg_wen_o", false,-1);
    tracep->declBit(c+182,"isload_i", false,-1);
    tracep->declBit(c+182,"isload_o", false,-1);
    tracep->declBit(c+183,"issave_i", false,-1);
    tracep->declBit(c+183,"issave_o", false,-1);
    tracep->declBus(c+274,"opcode", false,-1, 6,0);
    tracep->declBus(c+275,"rd", false,-1, 4,0);
    tracep->declBus(c+276,"func3", false,-1, 2,0);
    tracep->declBus(c+277,"rs1", false,-1, 4,0);
    tracep->declBus(c+278,"rs2", false,-1, 4,0);
    tracep->declBus(c+312,"func7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_wb_inst ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declQuad(c+166,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+184,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+293,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+180,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+181,"reg_wen_i", false,-1);
    tracep->declQuad(c+186,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+188,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+189,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+298,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declQuad(c+306,"set_data", false,-1, 63,0);
    tracep->declQuad(c+166,"data_i", false,-1, 63,0);
    tracep->declQuad(c+184,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+310,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declBus(c+311,"set_data", false,-1, 4,0);
    tracep->declBus(c+180,"data_i", false,-1, 4,0);
    tracep->declBus(c+188,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+302,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declBus(c+308,"set_data", false,-1, 0,0);
    tracep->declBus(c+181,"data_i", false,-1, 0,0);
    tracep->declBus(c+189,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+298,"DW", false,-1, 31,0);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declQuad(c+306,"set_data", false,-1, 63,0);
    tracep->declQuad(c+293,"data_i", false,-1, 63,0);
    tracep->declQuad(c+186,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declQuad(c+161,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+163,"jump_en_i", false,-1);
    tracep->declBit(c+12,"flush_en_i", false,-1);
    tracep->declBit(c+13,"stall_en_i", false,-1);
    tracep->declQuad(c+99,"pc_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("redirect_inst ");
    tracep->declBus(c+128,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+129,"rs2_addr_i", false,-1, 4,0);
    tracep->declBus(c+150,"ex_rd_addr_i", false,-1, 4,0);
    tracep->declQuad(c+148,"ex_rd_data_i", false,-1, 63,0);
    tracep->declBit(c+151,"ex_rd_wen_i", false,-1);
    tracep->declBus(c+180,"mem_rd_addr_i", false,-1, 4,0);
    tracep->declQuad(c+293,"mem_rd_data_i", false,-1, 63,0);
    tracep->declBit(c+181,"mem_rd_wen_i", false,-1);
    tracep->declBus(c+188,"wb_rd_addr_i", false,-1, 4,0);
    tracep->declQuad(c+186,"wb_rd_data_i", false,-1, 63,0);
    tracep->declBit(c+189,"wb_rd_wen_i", false,-1);
    tracep->declQuad(c+289,"rs1_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+291,"rs2_rdata_i", false,-1, 63,0);
    tracep->declBus(c+128,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+129,"rs2_addr_o", false,-1, 4,0);
    tracep->declQuad(c+8,"rs1_data_o", false,-1, 63,0);
    tracep->declQuad(c+10,"rs2_data_o", false,-1, 63,0);
    tracep->declBit(c+134,"rs_id_ex_hit_o", false,-1);
    tracep->declBit(c+279,"rs1_id_ex_hit", false,-1);
    tracep->declBit(c+280,"rs1_id_mem_hit", false,-1);
    tracep->declBit(c+281,"rs1_id_wb_hit", false,-1);
    tracep->declBit(c+282,"rs2_id_ex_hit", false,-1);
    tracep->declBit(c+283,"rs2_id_mem_hit", false,-1);
    tracep->declBit(c+284,"rs2_id_wb_hit", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_inst ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBus(c+128,"rs1_raddr_i", false,-1, 4,0);
    tracep->declBus(c+129,"rs2_raddr_i", false,-1, 4,0);
    tracep->declQuad(c+289,"rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+291,"rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+188,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+186,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+189,"reg_wen", false,-1);
    tracep->declQuad(c+184,"inst_addr_i", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+24+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->declQuad(c+184,"pc_reg", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+88,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_inst ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declQuad(c+184,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+184,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+188,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+186,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+189,"reg_wen_i", false,-1);
    tracep->declBus(c+188,"reg_waddr_o", false,-1, 4,0);
    tracep->declQuad(c+186,"reg_wdata_o", false,-1, 63,0);
    tracep->declBit(c+189,"reg_wen_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram_inst ");
    tracep->declBit(c+285,"clk", false,-1);
    tracep->declBit(c+286,"rst", false,-1);
    tracep->declBus(c+103,"ram_waddr_i", false,-1, 31,0);
    tracep->declQuad(c+104,"ram_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+106,"ram_wmask_i", false,-1, 63,0);
    tracep->declBus(c+101,"ram_raddr_i", false,-1, 31,0);
    tracep->declBit(c+102,"ram_ren_i", false,-1);
    tracep->declBit(c+108,"ram_wen_i", false,-1);
    tracep->declQuad(c+110,"ram_rdata_o", false,-1, 63,0);
    tracep->declBit(c+297,"ram_rready_o", false,-1);
    tracep->declBit(c+297,"ram_wready_o", false,-1);
    tracep->declBit(c+112,"ram_bvalid_o", false,-1);
    tracep->declQuad(c+99,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+113,"inst_o", false,-1, 63,0);
    tracep->declBus(c+103,"waddr", false,-1, 31,0);
    tracep->declBus(c+101,"raddr", false,-1, 31,0);
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
    tracep->fullBit(oldp+1,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__busy_end));
    tracep->fullQData(oldp+2,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op1_o),64);
    tracep->fullQData(oldp+4,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_op2_o),64);
    tracep->fullQData(oldp+6,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_base_addr_o),64);
    tracep->fullQData(oldp+8,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o),64);
    tracep->fullQData(oldp+10,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o),64);
    tracep->fullBit(oldp+12,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_flush_en_o));
    tracep->fullBit(oldp+13,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_stall_en_o));
    tracep->fullBit(oldp+14,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_flush_en_o));
    tracep->fullBit(oldp+15,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_stall_en_o));
    tracep->fullBit(oldp+16,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o));
    tracep->fullBit(oldp+17,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o));
    tracep->fullBit(oldp+18,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o));
    tracep->fullBit(oldp+19,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o));
    tracep->fullBit(oldp+20,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_flush_en_o));
    tracep->fullBit(oldp+21,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_stall_en_o));
    tracep->fullQData(oldp+22,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ex_rdata_o),64);
    tracep->fullQData(oldp+24,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0]),64);
    tracep->fullQData(oldp+26,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[1]),64);
    tracep->fullQData(oldp+28,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[2]),64);
    tracep->fullQData(oldp+30,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[3]),64);
    tracep->fullQData(oldp+32,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[4]),64);
    tracep->fullQData(oldp+34,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[5]),64);
    tracep->fullQData(oldp+36,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[6]),64);
    tracep->fullQData(oldp+38,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[7]),64);
    tracep->fullQData(oldp+40,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[8]),64);
    tracep->fullQData(oldp+42,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[9]),64);
    tracep->fullQData(oldp+44,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[10]),64);
    tracep->fullQData(oldp+46,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[11]),64);
    tracep->fullQData(oldp+48,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[12]),64);
    tracep->fullQData(oldp+50,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[13]),64);
    tracep->fullQData(oldp+52,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[14]),64);
    tracep->fullQData(oldp+54,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[15]),64);
    tracep->fullQData(oldp+56,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[16]),64);
    tracep->fullQData(oldp+58,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[17]),64);
    tracep->fullQData(oldp+60,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[18]),64);
    tracep->fullQData(oldp+62,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[19]),64);
    tracep->fullQData(oldp+64,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[20]),64);
    tracep->fullQData(oldp+66,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[21]),64);
    tracep->fullQData(oldp+68,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[22]),64);
    tracep->fullQData(oldp+70,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[23]),64);
    tracep->fullQData(oldp+72,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[24]),64);
    tracep->fullQData(oldp+74,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[25]),64);
    tracep->fullQData(oldp+76,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[26]),64);
    tracep->fullQData(oldp+78,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[27]),64);
    tracep->fullQData(oldp+80,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[28]),64);
    tracep->fullQData(oldp+82,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[29]),64);
    tracep->fullQData(oldp+84,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[30]),64);
    tracep->fullQData(oldp+86,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[31]),64);
    tracep->fullIData(oldp+88,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullBit(oldp+89,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_ren_o));
    tracep->fullQData(oldp+90,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o)
                                 ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o
                                 : 0ULL)),64);
    tracep->fullBit(oldp+92,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_wen_o));
    tracep->fullQData(oldp+93,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o)
                                 ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o
                                 : 0ULL)),64);
    tracep->fullQData(oldp+95,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o)
                                 ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o
                                 : 0ULL)),64);
    tracep->fullQData(oldp+97,(((1U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o))
                                 ? 0xffULL : ((3U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o))
                                               ? 0xffffULL
                                               : ((0xfU 
                                                   == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o))
                                                   ? 0xffffffffULL
                                                   : 
                                                  ((0xffU 
                                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o))
                                                    ? 0xffffffffffffffffULL
                                                    : 0ULL))))),64);
    tracep->fullQData(oldp+99,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o),64);
    tracep->fullIData(oldp+101,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr),32);
    tracep->fullBit(oldp+102,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__ren_o));
    tracep->fullIData(oldp+103,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr),32);
    tracep->fullQData(oldp+104,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata),64);
    tracep->fullQData(oldp+106,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask),64);
    tracep->fullBit(oldp+108,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wen_o));
    tracep->fullBit(oldp+109,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy));
    tracep->fullQData(oldp+110,(vlSelf->tb__DOT__soc_inst__DOT__ram_axi_rdata_o),64);
    tracep->fullBit(oldp+112,(vlSelf->tb__DOT__soc_inst__DOT__ram_axi_bvalid_o));
    tracep->fullQData(oldp+113,(vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o),64);
    tracep->fullIData(oldp+115,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr),32);
    tracep->fullQData(oldp+116,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata),64);
    tracep->fullBit(oldp+118,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid));
    tracep->fullBit(oldp+119,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raready));
    tracep->fullBit(oldp+120,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready));
    tracep->fullBit(oldp+121,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid));
    tracep->fullBit(oldp+122,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waready));
    tracep->fullBit(oldp+123,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdready));
    tracep->fullIData(oldp+124,((IData)(vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o)),32);
    tracep->fullQData(oldp+125,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o),64);
    tracep->fullIData(oldp+127,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o),32);
    tracep->fullCData(oldp+128,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o),5);
    tracep->fullCData(oldp+129,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o),5);
    tracep->fullCData(oldp+130,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o),5);
    tracep->fullBit(oldp+131,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen));
    tracep->fullQData(oldp+132,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_offset_addr_o),64);
    tracep->fullBit(oldp+134,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs1_id_ex_hit) 
                               | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs2_id_ex_hit))));
    tracep->fullIData(oldp+135,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o),32);
    tracep->fullQData(oldp+136,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_addr_o),64);
    tracep->fullQData(oldp+138,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o),64);
    tracep->fullQData(oldp+140,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o),64);
    tracep->fullCData(oldp+142,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+143,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_reg_wen));
    tracep->fullQData(oldp+144,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_base_addr_o),64);
    tracep->fullQData(oldp+146,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_offset_addr_o),64);
    tracep->fullQData(oldp+148,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o),64);
    tracep->fullCData(oldp+150,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o),5);
    tracep->fullBit(oldp+151,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o));
    tracep->fullBit(oldp+152,((1U & (IData)(((3U == 
                                              (0x7fU 
                                               & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                                             & (0x7000U 
                                                != 
                                                (0x7000U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))))));
    tracep->fullQData(oldp+153,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                  ? 0ULL : ((0x20U 
                                             & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                             ? 0ULL
                                             : ((0x10U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                 ? 0ULL
                                                 : 
                                                ((8U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                  ? 0ULL
                                                  : 
                                                 ((4U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 0ULL
                                                   : 
                                                  ((2U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? 0ULL
                                                        : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                      : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                     : 0ULL)
                                                    : 0ULL))))))),64);
    tracep->fullQData(oldp+155,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                  ? 0ULL : ((0x20U 
                                             & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                             ? ((0x10U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                 ? 0ULL
                                                 : 
                                                ((8U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                  ? 0ULL
                                                  : 
                                                 ((4U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 0ULL
                                                   : 
                                                  ((2U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                      ? 0ULL
                                                      : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)
                                                     : 0ULL)
                                                    : 0ULL))))
                                             : 0ULL))),64);
    tracep->fullQData(oldp+157,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                  ? 0ULL : ((0x20U 
                                             & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                             ? ((0x10U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                 ? 0ULL
                                                 : 
                                                ((8U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                  ? 0ULL
                                                  : 
                                                 ((4U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 0ULL
                                                   : 
                                                  ((2U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                      ? 0ULL
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o
                                                        : (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o))))
                                                        : (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)))))))
                                                     : 0ULL)
                                                    : 0ULL))))
                                             : 0ULL))),64);
    tracep->fullBit(oldp+159,((IData)((0x23U == (0x407fU 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))));
    tracep->fullCData(oldp+160,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                  ? 0U : ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                           ? ((0x10U 
                                               & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                               ? 0U
                                               : ((8U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((0x2000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? 
                                                       ((0x1000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                         ? 0xffU
                                                         : 0xfU)
                                                        : 
                                                       ((0x1000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                         ? 3U
                                                         : 1U)))
                                                      : 0U)
                                                     : 0U))))
                                           : 0U))),8);
    tracep->fullQData(oldp+161,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                  ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                      ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                          ? 0ULL : 
                                         ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                           ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                               ? ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                    : 0ULL)
                                                   : 0ULL)
                                               : 0ULL)
                                           : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                               ? ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                    : 0ULL)
                                                   : 0ULL)
                                               : ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                      ? 0ULL
                                                      : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset))
                                                    : 0ULL)
                                                   : 0ULL))))
                                      : 0ULL) : 0ULL)),64);
    tracep->fullBit(oldp+163,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_jump_en_o));
    tracep->fullBit(oldp+164,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isload_o));
    tracep->fullBit(oldp+165,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_issave_o));
    tracep->fullQData(oldp+166,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_inst_addr_o),64);
    tracep->fullIData(oldp+168,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o),32);
    tracep->fullBit(oldp+169,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o));
    tracep->fullQData(oldp+170,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o),64);
    tracep->fullBit(oldp+172,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o));
    tracep->fullQData(oldp+173,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o),64);
    tracep->fullQData(oldp+175,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o),64);
    tracep->fullCData(oldp+177,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o),8);
    tracep->fullQData(oldp+178,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_wdata_o),64);
    tracep->fullCData(oldp+180,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o),5);
    tracep->fullBit(oldp+181,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o));
    tracep->fullBit(oldp+182,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isload_o));
    tracep->fullBit(oldp+183,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_issave_o));
    tracep->fullQData(oldp+184,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_inst_addr_o),64);
    tracep->fullQData(oldp+186,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o),64);
    tracep->fullCData(oldp+188,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o),5);
    tracep->fullBit(oldp+189,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o));
    tracep->fullBit(oldp+190,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_data_hit));
    tracep->fullBit(oldp+191,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_inst));
    tracep->fullBit(oldp+192,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__save_inst));
    tracep->fullCData(oldp+193,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)),7);
    tracep->fullCData(oldp+194,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+195,((7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+196,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+197,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+198,((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                 >> 0x19U)),7);
    tracep->fullQData(oldp+199,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),64);
    tracep->fullQData(oldp+201,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i),64);
    tracep->fullQData(oldp+203,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i),64);
    tracep->fullQData(oldp+205,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),64);
    tracep->fullQData(oldp+207,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),64);
    tracep->fullQData(oldp+209,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),64);
    tracep->fullQData(oldp+211,(VL_MODDIVS_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+213,(VL_MODDIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+215,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i),64);
    tracep->fullQData(oldp+217,(VL_DIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+219,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned),64);
    tracep->fullQData(oldp+221,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned),64);
    tracep->fullQData(oldp+223,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed),64);
    tracep->fullQData(oldp+225,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),64);
    tracep->fullBit(oldp+227,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
    tracep->fullBit(oldp+228,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
    tracep->fullBit(oldp+229,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
    tracep->fullQData(oldp+230,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_add),64);
    tracep->fullQData(oldp+232,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i)))),64);
    tracep->fullQData(oldp+234,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i)))),64);
    tracep->fullQData(oldp+236,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i)))),64);
    tracep->fullQData(oldp+238,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i)))),64);
    tracep->fullQData(oldp+240,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)))),64);
    tracep->fullQData(oldp+242,((((QData)((IData)((- (IData)(
                                                             (VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)) 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)))))),64);
    tracep->fullQData(oldp+244,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i)))),64);
    tracep->fullQData(oldp+246,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned),64);
    tracep->fullQData(oldp+248,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned),64);
    tracep->fullQData(oldp+250,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_signed),64);
    tracep->fullQData(oldp+252,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)))),64);
    tracep->fullCData(oldp+254,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)),7);
    tracep->fullCData(oldp+255,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+256,((7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+257,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+258,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+259,((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                 >> 0x19U)),7);
    tracep->fullSData(oldp+260,((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                 >> 0x14U)),12);
    tracep->fullCData(oldp+261,((0x3fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),6);
    tracep->fullQData(oldp+262,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI),64);
    tracep->fullQData(oldp+264,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immU),64);
    tracep->fullQData(oldp+266,((((- (QData)((IData)(
                                                     (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                    >> 7U))))))),64);
    tracep->fullQData(oldp+268,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immB),64);
    tracep->fullQData(oldp+270,((((- (QData)((IData)(
                                                     (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                  << 0x14U) | (QData)((IData)(
                                                              ((0xff000U 
                                                                & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o) 
                                                               | ((0x800U 
                                                                   & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                      >> 9U)) 
                                                                  | (0x7feU 
                                                                     & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                        >> 0x14U)))))))),64);
    tracep->fullQData(oldp+272,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL),64);
    tracep->fullCData(oldp+274,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)),7);
    tracep->fullCData(oldp+275,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+276,((7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+277,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+278,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                          >> 0x14U))),5);
    tracep->fullBit(oldp+279,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs1_id_ex_hit));
    tracep->fullBit(oldp+280,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
                                 == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)) 
                                & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)) 
                               & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))));
    tracep->fullBit(oldp+281,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
                                 == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)) 
                                & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o)) 
                               & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))));
    tracep->fullBit(oldp+282,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs2_id_ex_hit));
    tracep->fullBit(oldp+283,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
                                 == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)) 
                                & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)) 
                               & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))));
    tracep->fullBit(oldp+284,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
                                 == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)) 
                                & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o)) 
                               & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))));
    tracep->fullBit(oldp+285,(vlSelf->clk));
    tracep->fullBit(oldp+286,(vlSelf->rst));
    tracep->fullQData(oldp+287,(((IData)(vlSelf->rst)
                                  ? ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready)
                                      ? vlSelf->tb__DOT__soc_inst__DOT__ram_axi_rdata_o
                                      : 0ULL) : 0ULL)),64);
    tracep->fullQData(oldp+289,(((IData)(vlSelf->rst)
                                  ? ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o))
                                      ? 0ULL : (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                                                 & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o) 
                                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))
                                                 ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                                                 : 
                                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs
                                                [vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o]))
                                  : 0ULL)),64);
    tracep->fullQData(oldp+291,(((IData)(vlSelf->rst)
                                  ? ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o))
                                      ? 0ULL : (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                                                 & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o) 
                                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))
                                                 ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                                                 : 
                                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs
                                                [vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o]))
                                  : 0ULL)),64);
    tracep->fullQData(oldp+293,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o),64);
    tracep->fullCData(oldp+295,(vlSelf->tb__DOT__soc_inst__DOT__axi_core_stall_flag_o),3);
    tracep->fullCData(oldp+296,(vlSelf->tb__DOT__soc_inst__DOT__axi_core_flush_flag_o),3);
    tracep->fullBit(oldp+297,(1U));
    tracep->fullIData(oldp+298,(0x40U),32);
    tracep->fullIData(oldp+299,(0x20U),32);
    tracep->fullIData(oldp+300,(8U),32);
    tracep->fullIData(oldp+301,(4U),32);
    tracep->fullIData(oldp+302,(1U),32);
    tracep->fullCData(oldp+303,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_stall_flag_o),3);
    tracep->fullCData(oldp+304,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_flush_flag_o),3);
    tracep->fullIData(oldp+305,(0x13U),32);
    tracep->fullQData(oldp+306,(0ULL),64);
    tracep->fullBit(oldp+308,(0U));
    tracep->fullCData(oldp+309,(0U),8);
    tracep->fullIData(oldp+310,(5U),32);
    tracep->fullCData(oldp+311,(0U),5);
    tracep->fullCData(oldp+312,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__func7),7);
}
