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
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->pushNamePrefix("tb ");
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->pushNamePrefix("soc_inst ");
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBus(c+363,"axi_core_stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+364,"axi_core_flush_flag_o", false,-1, 2,0);
    tracep->declBit(c+109,"core_axi_ren_o", false,-1);
    tracep->declQuad(c+110,"core_axi_raddr_o", false,-1, 63,0);
    tracep->declBit(c+112,"core_axi_wen_o", false,-1);
    tracep->declQuad(c+113,"core_axi_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+115,"core_axi_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+117,"core_axi_wmask_o", false,-1, 63,0);
    tracep->declQuad(c+365,"core_axi_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+119,"core_ram_inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+367,"core_ram_if_ren_o", false,-1);
    tracep->declBus(c+121,"axi_ram_raddr_o", false,-1, 31,0);
    tracep->declBit(c+122,"axi_ram_ren_o", false,-1);
    tracep->declBus(c+123,"axi_ram_waddr_o", false,-1, 31,0);
    tracep->declQuad(c+124,"axi_ram_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+126,"axi_ram_wmask_o", false,-1, 63,0);
    tracep->declBit(c+128,"axi_ram_wen_o", false,-1);
    tracep->declQuad(c+368,"axi_ram_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+354,"axi_core_rdata_o", false,-1, 63,0);
    tracep->declBit(c+129,"axi_core_busy_o", false,-1);
    tracep->declBit(c+1,"axi_core_busy_end_o", false,-1);
    tracep->declQuad(c+130,"ram_axi_rdata_o", false,-1, 63,0);
    tracep->declBit(c+367,"ram_axi_rready_o", false,-1);
    tracep->declBit(c+367,"ram_axi_wready_o", false,-1);
    tracep->declBit(c+132,"ram_axi_bvalid_o", false,-1);
    tracep->declQuad(c+133,"ram_core_inst_o", false,-1, 63,0);
    tracep->pushNamePrefix("axi_inst ");
    tracep->declBus(c+370,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+370,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+370,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+371,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+372,"AXI_BURST_WIDTH", false,-1, 31,0);
    tracep->declBus(c+370,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+373,"AXI_SID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+374,"AXI_MID_WIDTH", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+129,"axi_busy_o", false,-1);
    tracep->declBit(c+1,"axi_busy_end_o", false,-1);
    tracep->declBit(c+109,"core_ren_i", false,-1);
    tracep->declQuad(c+110,"core_raddr_i", false,-1, 63,0);
    tracep->declQuad(c+354,"core_rdata_o", false,-1, 63,0);
    tracep->declBit(c+367,"ram_rready_i", false,-1);
    tracep->declQuad(c+130,"ram_rdata_i", false,-1, 63,0);
    tracep->declBus(c+121,"ram_raddr_o", false,-1, 31,0);
    tracep->declBit(c+122,"ram_ren_o", false,-1);
    tracep->declBit(c+112,"core_wen_i", false,-1);
    tracep->declQuad(c+113,"core_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+115,"core_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+117,"core_wmask_i", false,-1, 63,0);
    tracep->declBit(c+367,"ram_wready_i", false,-1);
    tracep->declBit(c+132,"ram_bvalid_i", false,-1);
    tracep->declBus(c+123,"ram_waddr_o", false,-1, 31,0);
    tracep->declQuad(c+124,"ram_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+126,"ram_wmask_o", false,-1, 63,0);
    tracep->declBit(c+128,"ram_wen_o", false,-1);
    tracep->declBus(c+135,"rwaddr", false,-1, 31,0);
    tracep->declQuad(c+136,"wdata", false,-1, 63,0);
    tracep->declBit(c+109,"ren_i", false,-1);
    tracep->declBit(c+122,"ren_o", false,-1);
    tracep->declBit(c+367,"rready", false,-1);
    tracep->declBit(c+112,"wen_i", false,-1);
    tracep->declBit(c+128,"wen_o", false,-1);
    tracep->declBit(c+367,"wready", false,-1);
    tracep->declBit(c+132,"bvalid", false,-1);
    tracep->declBit(c+129,"axi_busy", false,-1);
    tracep->declBit(c+1,"busy_end", false,-1);
    tracep->declBit(c+138,"maxi_ravalid", false,-1);
    tracep->declBit(c+139,"maxi_raready", false,-1);
    tracep->declBus(c+121,"maxi_raddr", false,-1, 31,0);
    tracep->declBit(c+367,"maxi_rdvalid", false,-1);
    tracep->declBit(c+140,"maxi_rdready", false,-1);
    tracep->declQuad(c+354,"maxi_rdata", false,-1, 63,0);
    tracep->declBit(c+141,"maxi_wavalid", false,-1);
    tracep->declBit(c+142,"maxi_waready", false,-1);
    tracep->declBus(c+123,"maxi_waddr", false,-1, 31,0);
    tracep->declBit(c+367,"maxi_wdvalid", false,-1);
    tracep->declBit(c+143,"maxi_wdready", false,-1);
    tracep->declQuad(c+124,"maxi_wdata", false,-1, 63,0);
    tracep->declQuad(c+126,"maxi_wmask", false,-1, 63,0);
    tracep->declBit(c+367,"maxi_bready", false,-1);
    tracep->declBit(c+132,"maxi_bvalid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core_inst ");
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declQuad(c+354,"mem_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+133,"if_inst_i", false,-1, 63,0);
    tracep->declBit(c+109,"mem_ren_o", false,-1);
    tracep->declQuad(c+110,"mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+112,"mem_wen_o", false,-1);
    tracep->declQuad(c+113,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+115,"mem_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+117,"mem_wmask_o", false,-1, 63,0);
    tracep->declQuad(c+119,"if_inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+367,"if_ren_o", false,-1);
    tracep->declBus(c+363,"axi_stall_flag_i", false,-1, 2,0);
    tracep->declBus(c+364,"axi_flush_flag_i", false,-1, 2,0);
    tracep->declBit(c+129,"axi_busy_i", false,-1);
    tracep->declBit(c+1,"axi_busy_end_i", false,-1);
    tracep->declQuad(c+119,"pc_reg_pc_o", false,-1, 63,0);
    tracep->declQuad(c+354,"ram_mem_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+133,"ram_if_inst_o", false,-1, 63,0);
    tracep->declBus(c+144,"if_inst_o", false,-1, 31,0);
    tracep->declQuad(c+119,"if_if_id_inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+367,"if_ram_ren_o", false,-1);
    tracep->declQuad(c+145,"if_id_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+147,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+148,"id_re_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+149,"id_re_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+147,"id_id_ex_inst_o", false,-1, 31,0);
    tracep->declQuad(c+145,"id_id_ex_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+2,"id_id_ex_op1_o", false,-1, 63,0);
    tracep->declQuad(c+4,"id_id_ex_op2_o", false,-1, 63,0);
    tracep->declBus(c+150,"id_id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+151,"id_id_ex_reg_wen", false,-1);
    tracep->declQuad(c+6,"id_id_ex_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+152,"id_id_ex_offset_addr_o", false,-1, 63,0);
    tracep->declBus(c+154,"id_id_ex_csr_waddr_o", false,-1, 11,0);
    tracep->declQuad(c+375,"id_id_ex_csr_wdata_o", false,-1, 63,0);
    tracep->declBit(c+155,"id_id_ex_csr_wen_o", false,-1);
    tracep->declBus(c+377,"id_id_clint_inst_o", false,-1, 31,0);
    tracep->declQuad(c+378,"id_id_clint_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+156,"id_csr_raddr_o", false,-1, 11,0);
    tracep->declQuad(c+356,"regs_re_rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+358,"regs_re_rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+157,"id_clint_clint_inst_o", false,-1, 31,0);
    tracep->declQuad(c+158,"id_clint_clint_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+8,"clint_ctrl_intr_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+10,"clint_ctrl_intr_jump_en_o", false,-1);
    tracep->declQuad(c+11,"clint_csr_mepc_o", false,-1, 63,0);
    tracep->declQuad(c+13,"clint_csr_mcause_o", false,-1, 63,0);
    tracep->declQuad(c+15,"clint_csr_mstatus_o", false,-1, 63,0);
    tracep->declBit(c+17,"clint_csr_wen_o", false,-1);
    tracep->declQuad(c+18,"csr_id_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+20,"csr_clint_mepc_o", false,-1, 63,0);
    tracep->declQuad(c+22,"csr_clint_mtvec_o", false,-1, 63,0);
    tracep->declQuad(c+24,"csr_clint_mstatus_o", false,-1, 63,0);
    tracep->declQuad(c+26,"re_id_rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+28,"re_id_rs2_rdata_o", false,-1, 63,0);
    tracep->declBit(c+160,"rs_id_ex_hit_o", false,-1);
    tracep->declBus(c+148,"re_reg_rs1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+149,"re_reg_rs2_raddr_o", false,-1, 4,0);
    tracep->declBus(c+161,"id_ex_inst_o", false,-1, 31,0);
    tracep->declQuad(c+162,"id_ex_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+164,"id_ex_op1_o", false,-1, 63,0);
    tracep->declQuad(c+166,"id_ex_op2_o", false,-1, 63,0);
    tracep->declBus(c+168,"id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+169,"id_ex_reg_wen", false,-1);
    tracep->declQuad(c+170,"id_ex_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+172,"id_ex_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+380,"id_ex_ex_csr_wdata_o", false,-1, 63,0);
    tracep->declBus(c+174,"id_ex_ex_csr_waddr_o", false,-1, 11,0);
    tracep->declBit(c+175,"id_ex_ex_csr_wen_o", false,-1);
    tracep->declQuad(c+176,"ex_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+178,"ex_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+179,"ex_reg_wen_o", false,-1);
    tracep->declQuad(c+162,"ex_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+161,"ex_ex_mem_inst_o", false,-1, 31,0);
    tracep->declBit(c+180,"ex_ex_mem_ren_o", false,-1);
    tracep->declQuad(c+181,"ex_ex_mem_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+183,"ex_ex_mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+185,"ex_ex_mem_wdata_o", false,-1, 63,0);
    tracep->declBit(c+187,"ex_ex_mem_wen_o", false,-1);
    tracep->declBus(c+188,"ex_ex_mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+189,"ex_csr_wdata_o", false,-1, 63,0);
    tracep->declBus(c+191,"ex_csr_waddr_o", false,-1, 11,0);
    tracep->declBit(c+192,"ex_csr_wen_o", false,-1);
    tracep->declQuad(c+193,"ex_ctrl_typej_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+195,"ex_ctrl_typej_jump_en_o", false,-1);
    tracep->declBit(c+196,"ex_isload_o", false,-1);
    tracep->declBit(c+197,"ex_isstore_o", false,-1);
    tracep->declQuad(c+360,"ctrl_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+362,"ctrl_jump_en_o", false,-1);
    tracep->declBit(c+30,"ctrl_pc_flush_en_o", false,-1);
    tracep->declBit(c+31,"ctrl_pc_stall_en_o", false,-1);
    tracep->declBit(c+32,"ctrl_if_id_flush_en_o", false,-1);
    tracep->declBit(c+33,"ctrl_if_id_stall_en_o", false,-1);
    tracep->declBit(c+34,"ctrl_id_ex_flush_en_o", false,-1);
    tracep->declBit(c+35,"ctrl_id_ex_stall_en_o", false,-1);
    tracep->declBit(c+382,"ctrl_id_clint_flush_en_o", false,-1);
    tracep->declBit(c+383,"ctrl_id_clint_stall_en_o", false,-1);
    tracep->declBit(c+36,"ctrl_ex_mem_flush_en_o", false,-1);
    tracep->declBit(c+37,"ctrl_ex_mem_stall_en_o", false,-1);
    tracep->declBit(c+38,"ctrl_mem_wb_flush_en_o", false,-1);
    tracep->declBit(c+39,"ctrl_mem_wb_stall_en_o", false,-1);
    tracep->declQuad(c+198,"ex_mem_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+200,"ex_mem_mem_inst_o", false,-1, 31,0);
    tracep->declBit(c+201,"ex_mem_mem_ren_o", false,-1);
    tracep->declQuad(c+202,"ex_mem_mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+204,"ex_mem_mem_wen_o", false,-1);
    tracep->declQuad(c+205,"ex_mem_mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+207,"ex_mem_mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+209,"ex_mem_mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+210,"ex_mem_mem_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+212,"ex_mem_mem_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+213,"ex_mem_mem_reg_wen_o", false,-1);
    tracep->declBus(c+384,"ex_mem_mem_stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+385,"ex_mem_mem_flush_flag_o", false,-1, 2,0);
    tracep->declBit(c+214,"ex_mem_isload_o", false,-1);
    tracep->declBit(c+215,"ex_mem_isstore_o", false,-1);
    tracep->declQuad(c+198,"mem_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+40,"mem_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+212,"mem_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+213,"mem_reg_wen_o", false,-1);
    tracep->declBit(c+214,"mem_isload_o", false,-1);
    tracep->declBit(c+215,"mem_isstore_o", false,-1);
    tracep->declQuad(c+115,"mem_ram_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+113,"mem_ram_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+117,"mem_ram_wmask_o", false,-1, 63,0);
    tracep->declQuad(c+110,"mem_ram_raddr_o", false,-1, 63,0);
    tracep->declBit(c+109,"mem_ram_ren_o", false,-1);
    tracep->declBit(c+112,"mem_ram_wen_o", false,-1);
    tracep->declQuad(c+216,"mem_wb_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+218,"mem_wb_wb_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+220,"mem_wb_wb_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+221,"mem_wb_wb_reg_wen_o", false,-1);
    tracep->declQuad(c+216,"wb_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+218,"wb_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+220,"wb_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+221,"wb_reg_wen_o", false,-1);
    tracep->pushNamePrefix("clint_inst ");
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBus(c+157,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+158,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+8,"intr_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+10,"intr_jump_en_o", false,-1);
    tracep->declQuad(c+22,"mtvec_i", false,-1, 63,0);
    tracep->declQuad(c+20,"mepc_i", false,-1, 63,0);
    tracep->declQuad(c+24,"mstatus_i", false,-1, 63,0);
    tracep->declBit(c+17,"csr_wen_o", false,-1);
    tracep->declQuad(c+11,"mepc_o", false,-1, 63,0);
    tracep->declQuad(c+13,"mcause_o", false,-1, 63,0);
    tracep->declQuad(c+15,"mstatus_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_regs_inst ");
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBus(c+156,"id_csr_raddr_i", false,-1, 11,0);
    tracep->declQuad(c+18,"id_csr_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+189,"ex_csr_wdata_i", false,-1, 63,0);
    tracep->declBus(c+191,"ex_csr_waddr_i", false,-1, 11,0);
    tracep->declBit(c+192,"ex_csr_wen_i", false,-1);
    tracep->declBit(c+17,"clint_csr_wen_i", false,-1);
    tracep->declQuad(c+11,"mepc_i", false,-1, 63,0);
    tracep->declQuad(c+13,"mcause_i", false,-1, 63,0);
    tracep->declQuad(c+15,"mstatus_i", false,-1, 63,0);
    tracep->declQuad(c+20,"mepc_o", false,-1, 63,0);
    tracep->declQuad(c+22,"mtvec_o", false,-1, 63,0);
    tracep->declQuad(c+24,"mstatus_o", false,-1, 63,0);
    tracep->declQuad(c+222,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+224,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+226,"mepc", false,-1, 63,0);
    tracep->declQuad(c+228,"mcause", false,-1, 63,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+230+i*2,"csrs", true,(i+0), 63,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+238,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ctrl_inst ");
    tracep->declQuad(c+193,"typej_jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+195,"typej_jump_en_i", false,-1);
    tracep->declQuad(c+8,"intr_jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+10,"intr_jump_en_i", false,-1);
    tracep->declBit(c+196,"ex_inst_isload_i", false,-1);
    tracep->declBit(c+197,"ex_inst_isstore_i", false,-1);
    tracep->declBit(c+214,"mem_inst_isload_i", false,-1);
    tracep->declBit(c+215,"mem_inst_isstore_i", false,-1);
    tracep->declBit(c+160,"rs_id_ex_hit_i", false,-1);
    tracep->declBit(c+129,"axi_busy_i", false,-1);
    tracep->declBit(c+1,"axi_busy_end_i", false,-1);
    tracep->declQuad(c+360,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+362,"jump_en_o", false,-1);
    tracep->declBit(c+31,"pc_stall_en_o", false,-1);
    tracep->declBit(c+30,"pc_flush_en_o", false,-1);
    tracep->declBit(c+33,"if_id_stall_en_o", false,-1);
    tracep->declBit(c+32,"if_id_flush_en_o", false,-1);
    tracep->declBit(c+35,"id_ex_stall_en_o", false,-1);
    tracep->declBit(c+34,"id_ex_flush_en_o", false,-1);
    tracep->declBit(c+383,"id_clint_stall_en_o", false,-1);
    tracep->declBit(c+382,"id_clint_flush_en_o", false,-1);
    tracep->declBit(c+37,"ex_mem_stall_en_o", false,-1);
    tracep->declBit(c+36,"ex_mem_flush_en_o", false,-1);
    tracep->declBit(c+39,"mem_wb_stall_en_o", false,-1);
    tracep->declBit(c+38,"mem_wb_flush_en_o", false,-1);
    tracep->declBit(c+239,"load_data_hit", false,-1);
    tracep->declBit(c+362,"jump", false,-1);
    tracep->declBit(c+129,"busy", false,-1);
    tracep->declBit(c+240,"load_inst", false,-1);
    tracep->declBit(c+241,"store_inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_inst ");
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBus(c+161,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+162,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+164,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+166,"op2_i", false,-1, 63,0);
    tracep->declBus(c+168,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+169,"reg_wen_i", false,-1);
    tracep->declQuad(c+170,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+172,"offset_addr_i", false,-1, 63,0);
    tracep->declBus(c+174,"csr_waddr_i", false,-1, 11,0);
    tracep->declBit(c+175,"csr_wen_i", false,-1);
    tracep->declQuad(c+193,"typej_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+195,"typej_jump_en_o", false,-1);
    tracep->declBus(c+161,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+162,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+180,"mem_ren_o", false,-1);
    tracep->declQuad(c+181,"mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+187,"mem_wen_o", false,-1);
    tracep->declQuad(c+183,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+185,"mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+188,"mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+176,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+178,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+179,"reg_wen_o", false,-1);
    tracep->declBus(c+191,"csr_waddr_o", false,-1, 11,0);
    tracep->declQuad(c+189,"csr_data_o", false,-1, 63,0);
    tracep->declBit(c+192,"csr_wen_o", false,-1);
    tracep->declBit(c+196,"isload_o", false,-1);
    tracep->declBit(c+197,"isstore_o", false,-1);
    tracep->declBus(c+242,"opcode", false,-1, 6,0);
    tracep->declBus(c+243,"rd", false,-1, 4,0);
    tracep->declBus(c+244,"func3", false,-1, 2,0);
    tracep->declBus(c+245,"rs1", false,-1, 4,0);
    tracep->declBus(c+246,"rs2", false,-1, 4,0);
    tracep->declBus(c+247,"func7", false,-1, 6,0);
    tracep->declQuad(c+248,"op1_i_add_op2_i", false,-1, 63,0);
    tracep->declQuad(c+250,"op1_i_sub_op2_i", false,-1, 63,0);
    tracep->declQuad(c+252,"op1_i_mul_op2_i", false,-1, 63,0);
    tracep->declQuad(c+254,"op1_i_and_op2_i", false,-1, 63,0);
    tracep->declQuad(c+256,"op1_i_xor_op2_i", false,-1, 63,0);
    tracep->declQuad(c+258,"op1_i_or_op2_i", false,-1, 63,0);
    tracep->declQuad(c+260,"op1_i_rem_op2_i", false,-1, 63,0);
    tracep->declQuad(c+262,"op1_i_rem_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+264,"op1_i_div_op2_i", false,-1, 63,0);
    tracep->declQuad(c+266,"op1_i_div_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+268,"op1_i_shift_left_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+270,"op1_i_shift_right_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+272,"op1_i_shift_right_op2_i_signed", false,-1, 63,0);
    tracep->declQuad(c+274,"base_addr_add_addr_offset", false,-1, 63,0);
    tracep->declBit(c+276,"op1_i_equal_op2_i", false,-1);
    tracep->declBit(c+277,"op1_i_less_op2_i_signed", false,-1);
    tracep->declBit(c+278,"op1_i_less_op2_i_unsigned", false,-1);
    tracep->declQuad(c+279,"compress_add", false,-1, 63,0);
    tracep->declQuad(c+281,"compress_sub", false,-1, 63,0);
    tracep->declQuad(c+283,"compress_mul", false,-1, 63,0);
    tracep->declQuad(c+285,"compress_and", false,-1, 63,0);
    tracep->declQuad(c+287,"compress_xor", false,-1, 63,0);
    tracep->declQuad(c+289,"compress_or", false,-1, 63,0);
    tracep->declQuad(c+291,"compress_rem", false,-1, 63,0);
    tracep->declQuad(c+293,"compress_rem_unsigned", false,-1, 63,0);
    tracep->declQuad(c+295,"compress_div", false,-1, 63,0);
    tracep->declQuad(c+297,"compress_div_unsigned", false,-1, 63,0);
    tracep->declQuad(c+299,"compress_shift_left_unsigned", false,-1, 63,0);
    tracep->declQuad(c+301,"compress_shift_right_unsigned", false,-1, 63,0);
    tracep->declQuad(c+303,"compress_shift_right_signed", false,-1, 63,0);
    tracep->declQuad(c+305,"compress_addr_offset", false,-1, 63,0);
    tracep->declBus(c+307,"compress_div_tmp", false,-1, 31,0);
    tracep->declBus(c+308,"compress_div_unsigned_tmp", false,-1, 31,0);
    tracep->declBus(c+309,"compress_rem_tmp", false,-1, 31,0);
    tracep->declBus(c+310,"compress_rem_unsigned_tmp", false,-1, 31,0);
    tracep->declBus(c+311,"compress_shift_left_u_tmp", false,-1, 31,0);
    tracep->declBus(c+312,"compress_shift_right_u_tmp", false,-1, 31,0);
    tracep->declBus(c+313,"compress_shift_right_s_tmp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_mem_inst ");
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+37,"stall_flag_i", false,-1);
    tracep->declBit(c+36,"flush_flag_i", false,-1);
    tracep->declBus(c+161,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+162,"inst_addr_i", false,-1, 63,0);
    tracep->declBit(c+180,"ex_ren_i", false,-1);
    tracep->declQuad(c+181,"ex_raddr_i", false,-1, 63,0);
    tracep->declBit(c+187,"ex_wen_i", false,-1);
    tracep->declQuad(c+183,"ex_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+185,"ex_wdata_i", false,-1, 63,0);
    tracep->declBus(c+188,"ex_wmask_i", false,-1, 7,0);
    tracep->declQuad(c+176,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+178,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+179,"reg_wen_i", false,-1);
    tracep->declBit(c+196,"load_inst_i", false,-1);
    tracep->declBit(c+214,"load_inst_o", false,-1);
    tracep->declBit(c+197,"store_inst_i", false,-1);
    tracep->declBit(c+215,"store_inst_o", false,-1);
    tracep->declBus(c+200,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+198,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+201,"ren_o", false,-1);
    tracep->declQuad(c+202,"raddr_o", false,-1, 63,0);
    tracep->declBit(c+204,"wen_o", false,-1);
    tracep->declQuad(c+205,"waddr_o", false,-1, 63,0);
    tracep->declQuad(c+207,"wdata_o", false,-1, 63,0);
    tracep->declBus(c+209,"wmask_o", false,-1, 7,0);
    tracep->declQuad(c+210,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+212,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+213,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff0 ");
    tracep->declBus(c+371,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+36,"flush_flag_i", false,-1);
    tracep->declBit(c+37,"stall_flag_i", false,-1);
    tracep->declBus(c+386,"set_data", false,-1, 31,0);
    tracep->declBus(c+161,"data_i", false,-1, 31,0);
    tracep->declBus(c+200,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+370,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+36,"flush_flag_i", false,-1);
    tracep->declBit(c+37,"stall_flag_i", false,-1);
    tracep->declQuad(c+387,"set_data", false,-1, 63,0);
    tracep->declQuad(c+162,"data_i", false,-1, 63,0);
    tracep->declQuad(c+198,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff10 ");
    tracep->declBus(c+374,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+36,"flush_flag_i", false,-1);
    tracep->declBit(c+37,"stall_flag_i", false,-1);
    tracep->declBus(c+389,"set_data", false,-1, 0,0);
    tracep->declBus(c+179,"data_i", false,-1, 0,0);
    tracep->declBus(c+213,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff11 ");
    tracep->declBus(c+374,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+36,"flush_flag_i", false,-1);
    tracep->declBit(c+37,"stall_flag_i", false,-1);
    tracep->declBus(c+389,"set_data", false,-1, 0,0);
    tracep->declBus(c+196,"data_i", false,-1, 0,0);
    tracep->declBus(c+214,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff12 ");
    tracep->declBus(c+374,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+36,"flush_flag_i", false,-1);
    tracep->declBit(c+37,"stall_flag_i", false,-1);
    tracep->declBus(c+389,"set_data", false,-1, 0,0);
    tracep->declBus(c+197,"data_i", false,-1, 0,0);
    tracep->declBus(c+215,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+374,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+36,"flush_flag_i", false,-1);
    tracep->declBit(c+37,"stall_flag_i", false,-1);
    tracep->declBus(c+389,"set_data", false,-1, 0,0);
    tracep->declBus(c+180,"data_i", false,-1, 0,0);
    tracep->declBus(c+201,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+370,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+36,"flush_flag_i", false,-1);
    tracep->declBit(c+37,"stall_flag_i", false,-1);
    tracep->declQuad(c+387,"set_data", false,-1, 63,0);
    tracep->declQuad(c+181,"data_i", false,-1, 63,0);
    tracep->declQuad(c+202,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+374,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+36,"flush_flag_i", false,-1);
    tracep->declBit(c+37,"stall_flag_i", false,-1);
    tracep->declBus(c+389,"set_data", false,-1, 0,0);
    tracep->declBus(c+187,"data_i", false,-1, 0,0);
    tracep->declBus(c+204,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+370,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+36,"flush_flag_i", false,-1);
    tracep->declBit(c+37,"stall_flag_i", false,-1);
    tracep->declQuad(c+387,"set_data", false,-1, 63,0);
    tracep->declQuad(c+183,"data_i", false,-1, 63,0);
    tracep->declQuad(c+205,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+370,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+36,"flush_flag_i", false,-1);
    tracep->declBit(c+37,"stall_flag_i", false,-1);
    tracep->declQuad(c+387,"set_data", false,-1, 63,0);
    tracep->declQuad(c+185,"data_i", false,-1, 63,0);
    tracep->declQuad(c+207,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+372,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+36,"flush_flag_i", false,-1);
    tracep->declBit(c+37,"stall_flag_i", false,-1);
    tracep->declBus(c+390,"set_data", false,-1, 7,0);
    tracep->declBus(c+188,"data_i", false,-1, 7,0);
    tracep->declBus(c+209,"data_o", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+370,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+36,"flush_flag_i", false,-1);
    tracep->declBit(c+37,"stall_flag_i", false,-1);
    tracep->declQuad(c+387,"set_data", false,-1, 63,0);
    tracep->declQuad(c+176,"data_i", false,-1, 63,0);
    tracep->declQuad(c+210,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff9 ");
    tracep->declBus(c+391,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+36,"flush_flag_i", false,-1);
    tracep->declBit(c+37,"stall_flag_i", false,-1);
    tracep->declBus(c+392,"set_data", false,-1, 4,0);
    tracep->declBus(c+178,"data_i", false,-1, 4,0);
    tracep->declBus(c+212,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_clint_inst ");
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+382,"flush_flag_i", false,-1);
    tracep->declBit(c+383,"stall_flag_i", false,-1);
    tracep->declBus(c+147,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+145,"inst_addr_i", false,-1, 63,0);
    tracep->declBus(c+157,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+158,"inst_addr_o", false,-1, 63,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+371,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+382,"flush_flag_i", false,-1);
    tracep->declBit(c+383,"stall_flag_i", false,-1);
    tracep->declBus(c+386,"set_data", false,-1, 31,0);
    tracep->declBus(c+147,"data_i", false,-1, 31,0);
    tracep->declBus(c+157,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+370,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+382,"flush_flag_i", false,-1);
    tracep->declBit(c+383,"stall_flag_i", false,-1);
    tracep->declQuad(c+387,"set_data", false,-1, 63,0);
    tracep->declQuad(c+145,"data_i", false,-1, 63,0);
    tracep->declQuad(c+158,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_ex_inst ");
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+34,"flush_flag_i", false,-1);
    tracep->declBit(c+35,"stall_flag_i", false,-1);
    tracep->declBus(c+147,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+145,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+2,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+4,"op2_i", false,-1, 63,0);
    tracep->declBus(c+150,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+151,"reg_wen_i", false,-1);
    tracep->declQuad(c+6,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+152,"offset_addr_i", false,-1, 63,0);
    tracep->declBus(c+154,"csr_waddr_i", false,-1, 11,0);
    tracep->declBit(c+155,"csr_wen_i", false,-1);
    tracep->declBus(c+161,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+162,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+164,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+166,"op2_o", false,-1, 63,0);
    tracep->declBus(c+168,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+169,"reg_wen_o", false,-1);
    tracep->declQuad(c+170,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+172,"offset_addr_o", false,-1, 63,0);
    tracep->declBus(c+174,"csr_waddr_o", false,-1, 11,0);
    tracep->declBit(c+175,"csr_wen_o", false,-1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+371,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+34,"flush_flag_i", false,-1);
    tracep->declBit(c+35,"stall_flag_i", false,-1);
    tracep->declBus(c+386,"set_data", false,-1, 31,0);
    tracep->declBus(c+147,"data_i", false,-1, 31,0);
    tracep->declBus(c+161,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff10 ");
    tracep->declBus(c+393,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+34,"flush_flag_i", false,-1);
    tracep->declBit(c+35,"stall_flag_i", false,-1);
    tracep->declBus(c+394,"set_data", false,-1, 11,0);
    tracep->declBus(c+154,"data_i", false,-1, 11,0);
    tracep->declBus(c+174,"data_o", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff11 ");
    tracep->declBus(c+374,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+34,"flush_flag_i", false,-1);
    tracep->declBit(c+35,"stall_flag_i", false,-1);
    tracep->declBus(c+389,"set_data", false,-1, 0,0);
    tracep->declBus(c+155,"data_i", false,-1, 0,0);
    tracep->declBus(c+175,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+370,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+34,"flush_flag_i", false,-1);
    tracep->declBit(c+35,"stall_flag_i", false,-1);
    tracep->declQuad(c+387,"set_data", false,-1, 63,0);
    tracep->declQuad(c+145,"data_i", false,-1, 63,0);
    tracep->declQuad(c+162,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+370,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+34,"flush_flag_i", false,-1);
    tracep->declBit(c+35,"stall_flag_i", false,-1);
    tracep->declQuad(c+387,"set_data", false,-1, 63,0);
    tracep->declQuad(c+2,"data_i", false,-1, 63,0);
    tracep->declQuad(c+164,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+370,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+34,"flush_flag_i", false,-1);
    tracep->declBit(c+35,"stall_flag_i", false,-1);
    tracep->declQuad(c+387,"set_data", false,-1, 63,0);
    tracep->declQuad(c+4,"data_i", false,-1, 63,0);
    tracep->declQuad(c+166,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+391,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+34,"flush_flag_i", false,-1);
    tracep->declBit(c+35,"stall_flag_i", false,-1);
    tracep->declBus(c+392,"set_data", false,-1, 4,0);
    tracep->declBus(c+150,"data_i", false,-1, 4,0);
    tracep->declBus(c+168,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+374,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+34,"flush_flag_i", false,-1);
    tracep->declBit(c+35,"stall_flag_i", false,-1);
    tracep->declBus(c+389,"set_data", false,-1, 0,0);
    tracep->declBus(c+151,"data_i", false,-1, 0,0);
    tracep->declBus(c+169,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+370,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+34,"flush_flag_i", false,-1);
    tracep->declBit(c+35,"stall_flag_i", false,-1);
    tracep->declQuad(c+387,"set_data", false,-1, 63,0);
    tracep->declQuad(c+6,"data_i", false,-1, 63,0);
    tracep->declQuad(c+170,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+370,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+34,"flush_flag_i", false,-1);
    tracep->declBit(c+35,"stall_flag_i", false,-1);
    tracep->declQuad(c+387,"set_data", false,-1, 63,0);
    tracep->declQuad(c+152,"data_i", false,-1, 63,0);
    tracep->declQuad(c+172,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_inst ");
    tracep->declBus(c+147,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+145,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+26,"rs1_data_i", false,-1, 63,0);
    tracep->declQuad(c+28,"rs2_data_i", false,-1, 63,0);
    tracep->declBus(c+148,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+149,"rs2_addr_o", false,-1, 4,0);
    tracep->declQuad(c+18,"csr_data_i", false,-1, 63,0);
    tracep->declBus(c+156,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+147,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+145,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+2,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+4,"op2_o", false,-1, 63,0);
    tracep->declBus(c+150,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+151,"reg_wen", false,-1);
    tracep->declQuad(c+6,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+152,"offset_addr_o", false,-1, 63,0);
    tracep->declBus(c+154,"csr_waddr_o", false,-1, 11,0);
    tracep->declBit(c+155,"csr_wen_o", false,-1);
    tracep->declBus(c+314,"opcode", false,-1, 6,0);
    tracep->declBus(c+315,"rd", false,-1, 4,0);
    tracep->declBus(c+316,"func3", false,-1, 2,0);
    tracep->declBus(c+317,"rs1", false,-1, 4,0);
    tracep->declBus(c+318,"rs2", false,-1, 4,0);
    tracep->declBus(c+319,"csr", false,-1, 11,0);
    tracep->declBus(c+320,"func7", false,-1, 6,0);
    tracep->declBus(c+319,"imm", false,-1, 11,0);
    tracep->declBus(c+321,"shamt", false,-1, 5,0);
    tracep->declQuad(c+322,"immI", false,-1, 63,0);
    tracep->declQuad(c+324,"immU", false,-1, 63,0);
    tracep->declQuad(c+326,"immS", false,-1, 63,0);
    tracep->declQuad(c+328,"immB", false,-1, 63,0);
    tracep->declQuad(c+330,"immJ", false,-1, 63,0);
    tracep->declQuad(c+332,"immL", false,-1, 63,0);
    tracep->declQuad(c+334,"Zimm", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_inst ");
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+32,"flush_flag_i", false,-1);
    tracep->declBit(c+33,"stall_flag_i", false,-1);
    tracep->declBus(c+144,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+119,"inst_addr_i", false,-1, 63,0);
    tracep->declBus(c+147,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+145,"inst_addr_o", false,-1, 63,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+371,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+32,"flush_flag_i", false,-1);
    tracep->declBit(c+33,"stall_flag_i", false,-1);
    tracep->declBus(c+386,"set_data", false,-1, 31,0);
    tracep->declBus(c+144,"data_i", false,-1, 31,0);
    tracep->declBus(c+147,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+370,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+32,"flush_flag_i", false,-1);
    tracep->declBit(c+33,"stall_flag_i", false,-1);
    tracep->declQuad(c+387,"set_data", false,-1, 63,0);
    tracep->declQuad(c+119,"data_i", false,-1, 63,0);
    tracep->declQuad(c+145,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_fetch_inst ");
    tracep->declQuad(c+119,"pc_addr_i", false,-1, 63,0);
    tracep->declQuad(c+133,"ram_inst_i", false,-1, 63,0);
    tracep->declQuad(c+119,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+144,"inst_o", false,-1, 31,0);
    tracep->declBit(c+367,"ren_o", false,-1);
    tracep->declQuad(c+133,"inst_get", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_inst ");
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBus(c+200,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+198,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+198,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+129,"axi_busy_i", false,-1);
    tracep->declBit(c+201,"ren_i", false,-1);
    tracep->declBit(c+204,"wen_i", false,-1);
    tracep->declQuad(c+202,"raddr_i", false,-1, 63,0);
    tracep->declQuad(c+205,"waddr_i", false,-1, 63,0);
    tracep->declQuad(c+207,"wdata_i", false,-1, 63,0);
    tracep->declBus(c+209,"wmask_i", false,-1, 7,0);
    tracep->declQuad(c+210,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+212,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+213,"reg_wen_i", false,-1);
    tracep->declQuad(c+115,"ram_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+113,"ram_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+117,"ram_wmask_o", false,-1, 63,0);
    tracep->declQuad(c+110,"ram_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+354,"ram_rdata_i", false,-1, 63,0);
    tracep->declBit(c+109,"ram_ren_o", false,-1);
    tracep->declBit(c+112,"ram_wen_o", false,-1);
    tracep->declQuad(c+40,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+212,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+213,"reg_wen_o", false,-1);
    tracep->declBit(c+214,"isload_i", false,-1);
    tracep->declBit(c+214,"isload_o", false,-1);
    tracep->declBit(c+215,"isstore_i", false,-1);
    tracep->declBit(c+215,"isstore_o", false,-1);
    tracep->declBus(c+336,"opcode", false,-1, 6,0);
    tracep->declBus(c+337,"rd", false,-1, 4,0);
    tracep->declBus(c+338,"func3", false,-1, 2,0);
    tracep->declBus(c+339,"rs1", false,-1, 4,0);
    tracep->declBus(c+340,"rs2", false,-1, 4,0);
    tracep->declBus(c+395,"func7", false,-1, 6,0);
    tracep->declQuad(c+42,"rdata", false,-1, 63,0);
    tracep->declQuad(c+354,"ram_rdata", false,-1, 63,0);
    tracep->declQuad(c+396,"device_rdata_tmp", false,-1, 63,0);
    tracep->declQuad(c+341,"device_rdata", false,-1, 63,0);
    tracep->declBit(c+343,"visit_interface", false,-1);
    tracep->declQuad(c+344,"wmask_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_wb_inst ");
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+39,"stall_flag_i", false,-1);
    tracep->declBit(c+38,"flush_flag_i", false,-1);
    tracep->declQuad(c+198,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+216,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+40,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+212,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+213,"reg_wen_i", false,-1);
    tracep->declQuad(c+218,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+220,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+221,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+370,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+38,"flush_flag_i", false,-1);
    tracep->declBit(c+39,"stall_flag_i", false,-1);
    tracep->declQuad(c+387,"set_data", false,-1, 63,0);
    tracep->declQuad(c+198,"data_i", false,-1, 63,0);
    tracep->declQuad(c+216,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+391,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+38,"flush_flag_i", false,-1);
    tracep->declBit(c+39,"stall_flag_i", false,-1);
    tracep->declBus(c+392,"set_data", false,-1, 4,0);
    tracep->declBus(c+212,"data_i", false,-1, 4,0);
    tracep->declBus(c+220,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+374,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+38,"flush_flag_i", false,-1);
    tracep->declBit(c+39,"stall_flag_i", false,-1);
    tracep->declBus(c+389,"set_data", false,-1, 0,0);
    tracep->declBus(c+213,"data_i", false,-1, 0,0);
    tracep->declBus(c+221,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+370,"DW", false,-1, 31,0);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+38,"flush_flag_i", false,-1);
    tracep->declBit(c+39,"stall_flag_i", false,-1);
    tracep->declQuad(c+387,"set_data", false,-1, 63,0);
    tracep->declQuad(c+40,"data_i", false,-1, 63,0);
    tracep->declQuad(c+218,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declQuad(c+360,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+362,"jump_en_i", false,-1);
    tracep->declBit(c+30,"flush_en_i", false,-1);
    tracep->declBit(c+31,"stall_en_i", false,-1);
    tracep->declQuad(c+119,"pc_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_inst ");
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBus(c+148,"rs1_raddr_i", false,-1, 4,0);
    tracep->declBus(c+149,"rs2_raddr_i", false,-1, 4,0);
    tracep->declQuad(c+356,"rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+358,"rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+220,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+218,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+221,"reg_wen", false,-1);
    tracep->declQuad(c+216,"inst_addr_i", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+44+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->declQuad(c+216,"pc_reg", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+108,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rename_inst ");
    tracep->declBus(c+148,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+149,"rs2_addr_i", false,-1, 4,0);
    tracep->declBus(c+178,"ex_rd_addr_i", false,-1, 4,0);
    tracep->declQuad(c+176,"ex_rd_data_i", false,-1, 63,0);
    tracep->declBit(c+179,"ex_rd_wen_i", false,-1);
    tracep->declBus(c+212,"mem_rd_addr_i", false,-1, 4,0);
    tracep->declQuad(c+40,"mem_rd_data_i", false,-1, 63,0);
    tracep->declBit(c+213,"mem_rd_wen_i", false,-1);
    tracep->declBus(c+220,"wb_rd_addr_i", false,-1, 4,0);
    tracep->declQuad(c+218,"wb_rd_data_i", false,-1, 63,0);
    tracep->declBit(c+221,"wb_rd_wen_i", false,-1);
    tracep->declQuad(c+356,"rs1_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+358,"rs2_rdata_i", false,-1, 63,0);
    tracep->declBus(c+148,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+149,"rs2_addr_o", false,-1, 4,0);
    tracep->declQuad(c+26,"rs1_data_o", false,-1, 63,0);
    tracep->declQuad(c+28,"rs2_data_o", false,-1, 63,0);
    tracep->declBit(c+160,"rs_id_ex_hit_o", false,-1);
    tracep->declBit(c+346,"rs1_id_ex_hit", false,-1);
    tracep->declBit(c+347,"rs1_id_mem_hit", false,-1);
    tracep->declBit(c+348,"rs1_id_wb_hit", false,-1);
    tracep->declBit(c+349,"rs2_id_ex_hit", false,-1);
    tracep->declBit(c+350,"rs2_id_mem_hit", false,-1);
    tracep->declBit(c+351,"rs2_id_wb_hit", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_inst ");
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declQuad(c+216,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+216,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+220,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+218,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+221,"reg_wen_i", false,-1);
    tracep->declBus(c+220,"reg_waddr_o", false,-1, 4,0);
    tracep->declQuad(c+218,"reg_wdata_o", false,-1, 63,0);
    tracep->declBit(c+221,"reg_wen_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram_inst ");
    tracep->declBit(c+352,"clk", false,-1);
    tracep->declBit(c+353,"rst", false,-1);
    tracep->declBus(c+123,"ram_waddr_i", false,-1, 31,0);
    tracep->declQuad(c+124,"ram_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+126,"ram_wmask_i", false,-1, 63,0);
    tracep->declBus(c+121,"ram_raddr_i", false,-1, 31,0);
    tracep->declBit(c+122,"ram_ren_i", false,-1);
    tracep->declBit(c+128,"ram_wen_i", false,-1);
    tracep->declQuad(c+130,"ram_rdata_o", false,-1, 63,0);
    tracep->declBit(c+367,"ram_rready_o", false,-1);
    tracep->declBit(c+367,"ram_wready_o", false,-1);
    tracep->declBit(c+132,"ram_bvalid_o", false,-1);
    tracep->declQuad(c+119,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+133,"inst_o", false,-1, 63,0);
    tracep->declBus(c+123,"waddr", false,-1, 31,0);
    tracep->declBus(c+121,"raddr", false,-1, 31,0);
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
    tracep->fullQData(oldp+2,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o),64);
    tracep->fullQData(oldp+4,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o),64);
    tracep->fullQData(oldp+6,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o),64);
    tracep->fullQData(oldp+8,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_addr_o),64);
    tracep->fullBit(oldp+10,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_en_o));
    tracep->fullQData(oldp+11,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_mepc_o),64);
    tracep->fullQData(oldp+13,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_mcause_o),64);
    tracep->fullQData(oldp+15,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_mstatus_o),64);
    tracep->fullBit(oldp+17,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_wen_o));
    tracep->fullQData(oldp+18,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_id_rdata_o),64);
    tracep->fullQData(oldp+20,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mepc_o),64);
    tracep->fullQData(oldp+22,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mtvec_o),64);
    tracep->fullQData(oldp+24,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mstatus_o),64);
    tracep->fullQData(oldp+26,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o),64);
    tracep->fullQData(oldp+28,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o),64);
    tracep->fullBit(oldp+30,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_flush_en_o));
    tracep->fullBit(oldp+31,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_stall_en_o));
    tracep->fullBit(oldp+32,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_flush_en_o));
    tracep->fullBit(oldp+33,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_stall_en_o));
    tracep->fullBit(oldp+34,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o));
    tracep->fullBit(oldp+35,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o));
    tracep->fullBit(oldp+36,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o));
    tracep->fullBit(oldp+37,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o));
    tracep->fullBit(oldp+38,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_flush_en_o));
    tracep->fullBit(oldp+39,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_stall_en_o));
    tracep->fullQData(oldp+40,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o),64);
    tracep->fullQData(oldp+42,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata),64);
    tracep->fullQData(oldp+44,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0]),64);
    tracep->fullQData(oldp+46,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[1]),64);
    tracep->fullQData(oldp+48,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[2]),64);
    tracep->fullQData(oldp+50,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[3]),64);
    tracep->fullQData(oldp+52,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[4]),64);
    tracep->fullQData(oldp+54,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[5]),64);
    tracep->fullQData(oldp+56,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[6]),64);
    tracep->fullQData(oldp+58,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[7]),64);
    tracep->fullQData(oldp+60,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[8]),64);
    tracep->fullQData(oldp+62,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[9]),64);
    tracep->fullQData(oldp+64,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[10]),64);
    tracep->fullQData(oldp+66,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[11]),64);
    tracep->fullQData(oldp+68,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[12]),64);
    tracep->fullQData(oldp+70,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[13]),64);
    tracep->fullQData(oldp+72,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[14]),64);
    tracep->fullQData(oldp+74,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[15]),64);
    tracep->fullQData(oldp+76,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[16]),64);
    tracep->fullQData(oldp+78,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[17]),64);
    tracep->fullQData(oldp+80,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[18]),64);
    tracep->fullQData(oldp+82,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[19]),64);
    tracep->fullQData(oldp+84,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[20]),64);
    tracep->fullQData(oldp+86,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[21]),64);
    tracep->fullQData(oldp+88,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[22]),64);
    tracep->fullQData(oldp+90,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[23]),64);
    tracep->fullQData(oldp+92,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[24]),64);
    tracep->fullQData(oldp+94,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[25]),64);
    tracep->fullQData(oldp+96,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[26]),64);
    tracep->fullQData(oldp+98,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[27]),64);
    tracep->fullQData(oldp+100,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[28]),64);
    tracep->fullQData(oldp+102,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[29]),64);
    tracep->fullQData(oldp+104,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[30]),64);
    tracep->fullQData(oldp+106,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[31]),64);
    tracep->fullIData(oldp+108,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullBit(oldp+109,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_ren_o));
    tracep->fullQData(oldp+110,((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o) 
                                  & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface)))
                                  ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o
                                  : 0ULL)),64);
    tracep->fullBit(oldp+112,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_wen_o));
    tracep->fullQData(oldp+113,((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o) 
                                  & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface)))
                                  ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o
                                  : 0ULL)),64);
    tracep->fullQData(oldp+115,((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o) 
                                  & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface)))
                                  ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o
                                  : 0ULL)),64);
    tracep->fullQData(oldp+117,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface)
                                  ? 0ULL : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__wmask_o)),64);
    tracep->fullQData(oldp+119,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o),64);
    tracep->fullIData(oldp+121,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr),32);
    tracep->fullBit(oldp+122,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__ren_o));
    tracep->fullIData(oldp+123,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr),32);
    tracep->fullQData(oldp+124,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata),64);
    tracep->fullQData(oldp+126,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask),64);
    tracep->fullBit(oldp+128,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wen_o));
    tracep->fullBit(oldp+129,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy));
    tracep->fullQData(oldp+130,(vlSelf->tb__DOT__soc_inst__DOT__ram_axi_rdata_o),64);
    tracep->fullBit(oldp+132,(vlSelf->tb__DOT__soc_inst__DOT__ram_axi_bvalid_o));
    tracep->fullQData(oldp+133,(vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o),64);
    tracep->fullIData(oldp+135,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr),32);
    tracep->fullQData(oldp+136,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata),64);
    tracep->fullBit(oldp+138,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid));
    tracep->fullBit(oldp+139,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raready));
    tracep->fullBit(oldp+140,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready));
    tracep->fullBit(oldp+141,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid));
    tracep->fullBit(oldp+142,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waready));
    tracep->fullBit(oldp+143,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdready));
    tracep->fullIData(oldp+144,((IData)(vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o)),32);
    tracep->fullQData(oldp+145,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o),64);
    tracep->fullIData(oldp+147,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o),32);
    tracep->fullCData(oldp+148,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o),5);
    tracep->fullCData(oldp+149,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o),5);
    tracep->fullCData(oldp+150,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+151,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen));
    tracep->fullQData(oldp+152,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_offset_addr_o),64);
    tracep->fullSData(oldp+154,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                  ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                      ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                          ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                              ? 0U : 
                                             ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                               ? 0U
                                               : ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   (0xfffU 
                                                    & ((0x4000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                        ? 
                                                       ((0x2000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                         ? 
                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                         >> 0x14U)
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                          ? 
                                                         (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                          >> 0x14U)
                                                          : 0U))
                                                        : 
                                                       ((0x2000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                         ? 
                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                         >> 0x14U)
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                          ? 
                                                         (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                          >> 0x14U)
                                                          : 0U))))
                                                    : 0U)
                                                   : 0U)))
                                          : 0U) : 0U)
                                  : 0U)),12);
    tracep->fullBit(oldp+155,((1U & (IData)(((0x73U 
                                              == (0x7fU 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) 
                                             & ((0x4000U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                 ? (IData)(
                                                           (0U 
                                                            != 
                                                            (0x3000U 
                                                             & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)))
                                                 : (IData)(
                                                           (0U 
                                                            != 
                                                            (0x3000U 
                                                             & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)))))))));
    tracep->fullSData(oldp+156,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o),12);
    tracep->fullIData(oldp+157,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_clint_clint_inst_o),32);
    tracep->fullQData(oldp+158,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_clint_clint_inst_addr_o),64);
    tracep->fullBit(oldp+160,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__rename_inst__DOT__rs1_id_ex_hit) 
                               | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__rename_inst__DOT__rs2_id_ex_hit))));
    tracep->fullIData(oldp+161,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o),32);
    tracep->fullQData(oldp+162,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_addr_o),64);
    tracep->fullQData(oldp+164,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o),64);
    tracep->fullQData(oldp+166,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o),64);
    tracep->fullCData(oldp+168,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+169,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_reg_wen));
    tracep->fullQData(oldp+170,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_base_addr_o),64);
    tracep->fullQData(oldp+172,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_offset_addr_o),64);
    tracep->fullSData(oldp+174,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_waddr_o),12);
    tracep->fullBit(oldp+175,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_wen_o));
    tracep->fullQData(oldp+176,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o),64);
    tracep->fullCData(oldp+178,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o),5);
    tracep->fullBit(oldp+179,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o));
    tracep->fullBit(oldp+180,((1U & (IData)(((3U == 
                                              (0x7fU 
                                               & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                                             & (0x7000U 
                                                != 
                                                (0x7000U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))))));
    tracep->fullQData(oldp+181,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
    tracep->fullQData(oldp+183,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
    tracep->fullQData(oldp+185,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
    tracep->fullBit(oldp+187,((IData)((0x23U == (0x407fU 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))));
    tracep->fullCData(oldp+188,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
    tracep->fullQData(oldp+189,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_wdata_o),64);
    tracep->fullSData(oldp+191,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_waddr_o),12);
    tracep->fullBit(oldp+192,((1U & (IData)(((0x73U 
                                              == (0x7fU 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                                             & ((0x4000U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                 ? (IData)(
                                                           (0U 
                                                            != 
                                                            (0x3000U 
                                                             & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))
                                                 : (IData)(
                                                           (0U 
                                                            != 
                                                            (0x3000U 
                                                             & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))))))));
    tracep->fullQData(oldp+193,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
    tracep->fullBit(oldp+195,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_ctrl_typej_jump_en_o));
    tracep->fullBit(oldp+196,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isload_o));
    tracep->fullBit(oldp+197,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isstore_o));
    tracep->fullQData(oldp+198,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_inst_addr_o),64);
    tracep->fullIData(oldp+200,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o),32);
    tracep->fullBit(oldp+201,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o));
    tracep->fullQData(oldp+202,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o),64);
    tracep->fullBit(oldp+204,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o));
    tracep->fullQData(oldp+205,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o),64);
    tracep->fullQData(oldp+207,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o),64);
    tracep->fullCData(oldp+209,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o),8);
    tracep->fullQData(oldp+210,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_wdata_o),64);
    tracep->fullCData(oldp+212,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o),5);
    tracep->fullBit(oldp+213,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o));
    tracep->fullBit(oldp+214,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isload_o));
    tracep->fullBit(oldp+215,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isstore_o));
    tracep->fullQData(oldp+216,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_inst_addr_o),64);
    tracep->fullQData(oldp+218,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o),64);
    tracep->fullCData(oldp+220,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o),5);
    tracep->fullBit(oldp+221,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o));
    tracep->fullQData(oldp+222,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mstatus),64);
    tracep->fullQData(oldp+224,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mtvec),64);
    tracep->fullQData(oldp+226,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mepc),64);
    tracep->fullQData(oldp+228,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mcause),64);
    tracep->fullQData(oldp+230,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[0]),64);
    tracep->fullQData(oldp+232,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[1]),64);
    tracep->fullQData(oldp+234,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[2]),64);
    tracep->fullQData(oldp+236,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[3]),64);
    tracep->fullIData(oldp+238,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullBit(oldp+239,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_data_hit));
    tracep->fullBit(oldp+240,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_inst));
    tracep->fullBit(oldp+241,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__store_inst));
    tracep->fullCData(oldp+242,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)),7);
    tracep->fullCData(oldp+243,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+244,((7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+245,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+246,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+247,((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                 >> 0x19U)),7);
    tracep->fullQData(oldp+248,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),64);
    tracep->fullQData(oldp+250,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i),64);
    tracep->fullQData(oldp+252,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i),64);
    tracep->fullQData(oldp+254,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),64);
    tracep->fullQData(oldp+256,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),64);
    tracep->fullQData(oldp+258,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),64);
    tracep->fullQData(oldp+260,(VL_MODDIVS_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+262,(VL_MODDIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+264,(VL_DIVS_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+266,(VL_DIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+268,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned),64);
    tracep->fullQData(oldp+270,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned),64);
    tracep->fullQData(oldp+272,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed),64);
    tracep->fullQData(oldp+274,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),64);
    tracep->fullBit(oldp+276,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
    tracep->fullBit(oldp+277,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
    tracep->fullBit(oldp+278,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
    tracep->fullQData(oldp+279,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_add),64);
    tracep->fullQData(oldp+281,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i)))),64);
    tracep->fullQData(oldp+283,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i)))),64);
    tracep->fullQData(oldp+285,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i)))),64);
    tracep->fullQData(oldp+287,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i)))),64);
    tracep->fullQData(oldp+289,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)))),64);
    tracep->fullQData(oldp+291,((((QData)((IData)((- (IData)(
                                                             (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp)))),64);
    tracep->fullQData(oldp+293,((((QData)((IData)((- (IData)(
                                                             (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp)))),64);
    tracep->fullQData(oldp+295,((((QData)((IData)((- (IData)(
                                                             (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_div_tmp 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_div_tmp)))),64);
    tracep->fullQData(oldp+297,((((QData)((IData)((- (IData)(
                                                             (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_div_unsigned_tmp 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_div_unsigned_tmp)))),64);
    tracep->fullQData(oldp+299,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned),64);
    tracep->fullQData(oldp+301,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned),64);
    tracep->fullQData(oldp+303,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_signed),64);
    tracep->fullQData(oldp+305,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)))),64);
    tracep->fullIData(oldp+307,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_div_tmp),32);
    tracep->fullIData(oldp+308,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_div_unsigned_tmp),32);
    tracep->fullIData(oldp+309,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp),32);
    tracep->fullIData(oldp+310,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp),32);
    tracep->fullIData(oldp+311,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_u_tmp),32);
    tracep->fullIData(oldp+312,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_u_tmp),32);
    tracep->fullIData(oldp+313,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_s_tmp),32);
    tracep->fullCData(oldp+314,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)),7);
    tracep->fullCData(oldp+315,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+316,((7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+317,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+318,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),5);
    tracep->fullSData(oldp+319,((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                 >> 0x14U)),12);
    tracep->fullCData(oldp+320,((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                 >> 0x19U)),7);
    tracep->fullCData(oldp+321,((0x3fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),6);
    tracep->fullQData(oldp+322,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI),64);
    tracep->fullQData(oldp+324,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immU),64);
    tracep->fullQData(oldp+326,((((- (QData)((IData)(
                                                     (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                    >> 7U))))))),64);
    tracep->fullQData(oldp+328,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immB),64);
    tracep->fullQData(oldp+330,((((- (QData)((IData)(
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
    tracep->fullQData(oldp+332,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL),64);
    tracep->fullQData(oldp+334,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__Zimm),64);
    tracep->fullCData(oldp+336,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)),7);
    tracep->fullCData(oldp+337,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+338,((7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+339,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+340,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                          >> 0x14U))),5);
    tracep->fullQData(oldp+341,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__device_rdata),64);
    tracep->fullBit(oldp+343,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface));
    tracep->fullQData(oldp+344,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__wmask_o),64);
    tracep->fullBit(oldp+346,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__rename_inst__DOT__rs1_id_ex_hit));
    tracep->fullBit(oldp+347,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
                                 == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)) 
                                & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)) 
                               & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))));
    tracep->fullBit(oldp+348,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
                                 == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)) 
                                & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o)) 
                               & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))));
    tracep->fullBit(oldp+349,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__rename_inst__DOT__rs2_id_ex_hit));
    tracep->fullBit(oldp+350,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
                                 == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)) 
                                & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)) 
                               & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))));
    tracep->fullBit(oldp+351,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
                                 == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)) 
                                & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o)) 
                               & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))));
    tracep->fullBit(oldp+352,(vlSelf->clk));
    tracep->fullBit(oldp+353,(vlSelf->rst));
    tracep->fullQData(oldp+354,(((IData)(vlSelf->rst)
                                  ? ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready)
                                      ? vlSelf->tb__DOT__soc_inst__DOT__ram_axi_rdata_o
                                      : 0ULL) : 0ULL)),64);
    tracep->fullQData(oldp+356,(((IData)(vlSelf->rst)
                                  ? ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o))
                                      ? 0ULL : (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                                                 & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o) 
                                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))
                                                 ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                                                 : 
                                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs
                                                [vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o]))
                                  : 0ULL)),64);
    tracep->fullQData(oldp+358,(((IData)(vlSelf->rst)
                                  ? ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o))
                                      ? 0ULL : (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                                                 & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o) 
                                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))
                                                 ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                                                 : 
                                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs
                                                [vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o]))
                                  : 0ULL)),64);
    tracep->fullQData(oldp+360,((((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                   ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                       ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                           ? 0ULL : 
                                          ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                            ? ((4U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                ? (
                                                   (2U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                     : 0ULL)
                                                    : 0ULL)
                                                : 0ULL)
                                            : ((4U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                ? (
                                                   (2U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset
                                                     : 0ULL)
                                                    : 0ULL)
                                                : (
                                                   (2U 
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
                                       : 0ULL) : 0ULL) 
                                 | vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_addr_o)),64);
    tracep->fullBit(oldp+362,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_ctrl_typej_jump_en_o) 
                               | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_en_o))));
    tracep->fullCData(oldp+363,(vlSelf->tb__DOT__soc_inst__DOT__axi_core_stall_flag_o),3);
    tracep->fullCData(oldp+364,(vlSelf->tb__DOT__soc_inst__DOT__axi_core_flush_flag_o),3);
    tracep->fullQData(oldp+365,(vlSelf->tb__DOT__soc_inst__DOT__core_axi_inst_addr_o),64);
    tracep->fullBit(oldp+367,(1U));
    tracep->fullQData(oldp+368,(vlSelf->tb__DOT__soc_inst__DOT__axi_ram_inst_addr_o),64);
    tracep->fullIData(oldp+370,(0x40U),32);
    tracep->fullIData(oldp+371,(0x20U),32);
    tracep->fullIData(oldp+372,(8U),32);
    tracep->fullIData(oldp+373,(4U),32);
    tracep->fullIData(oldp+374,(1U),32);
    tracep->fullQData(oldp+375,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_csr_wdata_o),64);
    tracep->fullIData(oldp+377,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_clint_inst_o),32);
    tracep->fullQData(oldp+378,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_clint_inst_addr_o),64);
    tracep->fullQData(oldp+380,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_wdata_o),64);
    tracep->fullBit(oldp+382,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_clint_flush_en_o));
    tracep->fullBit(oldp+383,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_clint_stall_en_o));
    tracep->fullCData(oldp+384,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_stall_flag_o),3);
    tracep->fullCData(oldp+385,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_flush_flag_o),3);
    tracep->fullIData(oldp+386,(0x13U),32);
    tracep->fullQData(oldp+387,(0ULL),64);
    tracep->fullBit(oldp+389,(0U));
    tracep->fullCData(oldp+390,(0U),8);
    tracep->fullIData(oldp+391,(5U),32);
    tracep->fullCData(oldp+392,(0U),5);
    tracep->fullIData(oldp+393,(0xcU),32);
    tracep->fullSData(oldp+394,(0U),12);
    tracep->fullCData(oldp+395,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__func7),7);
    tracep->fullQData(oldp+396,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__device_rdata_tmp),64);
}
