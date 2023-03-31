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
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->pushNamePrefix("tb ");
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->pushNamePrefix("soc_inst ");
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBus(c+336,"axi_core_stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+337,"axi_core_flush_flag_o", false,-1, 2,0);
    tracep->declBit(c+93,"core_axi_ren_o", false,-1);
    tracep->declQuad(c+94,"core_axi_raddr_o", false,-1, 63,0);
    tracep->declBit(c+96,"core_axi_wen_o", false,-1);
    tracep->declQuad(c+97,"core_axi_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+99,"core_axi_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+101,"core_axi_wmask_o", false,-1, 63,0);
    tracep->declQuad(c+103,"core_ram_inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+338,"core_ram_if_ren_o", false,-1);
    tracep->declBus(c+105,"axi_ram_raddr_o", false,-1, 31,0);
    tracep->declBit(c+106,"axi_ram_ren_o", false,-1);
    tracep->declBus(c+107,"axi_ram_waddr_o", false,-1, 31,0);
    tracep->declQuad(c+108,"axi_ram_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+110,"axi_ram_wmask_o", false,-1, 63,0);
    tracep->declBit(c+112,"axi_ram_wen_o", false,-1);
    tracep->declQuad(c+326,"axi_core_rdata_o", false,-1, 63,0);
    tracep->declBit(c+113,"axi_core_busy_o", false,-1);
    tracep->declBit(c+1,"axi_core_busy_end_o", false,-1);
    tracep->declQuad(c+114,"ram_axi_rdata_o", false,-1, 63,0);
    tracep->declBit(c+338,"ram_axi_rready_o", false,-1);
    tracep->declBit(c+338,"ram_axi_wready_o", false,-1);
    tracep->declBit(c+116,"ram_axi_bvalid_o", false,-1);
    tracep->declQuad(c+117,"ram_core_inst_o", false,-1, 63,0);
    tracep->pushNamePrefix("axi_inst ");
    tracep->declBus(c+339,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+339,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+339,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+340,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+341,"AXI_BURST_WIDTH", false,-1, 31,0);
    tracep->declBus(c+339,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+342,"AXI_SID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+343,"AXI_MID_WIDTH", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+113,"axi_busy_o", false,-1);
    tracep->declBit(c+1,"axi_busy_end_o", false,-1);
    tracep->declBit(c+93,"core_ren_i", false,-1);
    tracep->declQuad(c+94,"core_raddr_i", false,-1, 63,0);
    tracep->declQuad(c+326,"core_rdata_o", false,-1, 63,0);
    tracep->declBit(c+338,"ram_rready_i", false,-1);
    tracep->declQuad(c+114,"ram_rdata_i", false,-1, 63,0);
    tracep->declBus(c+105,"ram_raddr_o", false,-1, 31,0);
    tracep->declBit(c+106,"ram_ren_o", false,-1);
    tracep->declBit(c+96,"core_wen_i", false,-1);
    tracep->declQuad(c+97,"core_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+99,"core_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+101,"core_wmask_i", false,-1, 63,0);
    tracep->declBit(c+338,"ram_wready_i", false,-1);
    tracep->declBit(c+116,"ram_bvalid_i", false,-1);
    tracep->declBus(c+107,"ram_waddr_o", false,-1, 31,0);
    tracep->declQuad(c+108,"ram_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+110,"ram_wmask_o", false,-1, 63,0);
    tracep->declBit(c+112,"ram_wen_o", false,-1);
    tracep->declBus(c+119,"rwaddr", false,-1, 31,0);
    tracep->declQuad(c+120,"wdata", false,-1, 63,0);
    tracep->declBit(c+93,"ren_i", false,-1);
    tracep->declBit(c+106,"ren_o", false,-1);
    tracep->declBit(c+338,"rready", false,-1);
    tracep->declBit(c+96,"wen_i", false,-1);
    tracep->declBit(c+112,"wen_o", false,-1);
    tracep->declBit(c+338,"wready", false,-1);
    tracep->declBit(c+116,"bvalid", false,-1);
    tracep->declBit(c+113,"axi_busy", false,-1);
    tracep->declBit(c+1,"busy_end", false,-1);
    tracep->declBit(c+122,"maxi_ravalid", false,-1);
    tracep->declBit(c+123,"maxi_raready", false,-1);
    tracep->declBus(c+105,"maxi_raddr", false,-1, 31,0);
    tracep->declBit(c+338,"maxi_rdvalid", false,-1);
    tracep->declBit(c+124,"maxi_rdready", false,-1);
    tracep->declQuad(c+326,"maxi_rdata", false,-1, 63,0);
    tracep->declBit(c+125,"maxi_wavalid", false,-1);
    tracep->declBit(c+126,"maxi_waready", false,-1);
    tracep->declBus(c+107,"maxi_waddr", false,-1, 31,0);
    tracep->declBit(c+338,"maxi_wdvalid", false,-1);
    tracep->declBit(c+127,"maxi_wdready", false,-1);
    tracep->declQuad(c+108,"maxi_wdata", false,-1, 63,0);
    tracep->declQuad(c+110,"maxi_wmask", false,-1, 63,0);
    tracep->declBit(c+338,"maxi_bready", false,-1);
    tracep->declBit(c+116,"maxi_bvalid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core_inst ");
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declQuad(c+326,"mem_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+117,"if_inst_i", false,-1, 63,0);
    tracep->declBit(c+93,"mem_ren_o", false,-1);
    tracep->declQuad(c+94,"mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+96,"mem_wen_o", false,-1);
    tracep->declQuad(c+97,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+99,"mem_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+101,"mem_wmask_o", false,-1, 63,0);
    tracep->declQuad(c+103,"if_inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+338,"if_ren_o", false,-1);
    tracep->declBus(c+336,"axi_stall_flag_i", false,-1, 2,0);
    tracep->declBus(c+337,"axi_flush_flag_i", false,-1, 2,0);
    tracep->declBit(c+113,"axi_busy_i", false,-1);
    tracep->declBit(c+1,"axi_busy_end_i", false,-1);
    tracep->declQuad(c+103,"pc_reg_pc_o", false,-1, 63,0);
    tracep->declQuad(c+326,"ram_mem_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+117,"ram_if_inst_o", false,-1, 63,0);
    tracep->declBus(c+128,"if_inst_o", false,-1, 31,0);
    tracep->declQuad(c+103,"if_if_id_inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+338,"if_ram_ren_o", false,-1);
    tracep->declQuad(c+129,"if_id_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+131,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+132,"id_re_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+133,"id_re_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+131,"id_inst_o", false,-1, 31,0);
    tracep->declQuad(c+129,"id_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+2,"id_op1_o", false,-1, 63,0);
    tracep->declQuad(c+4,"id_op2_o", false,-1, 63,0);
    tracep->declBus(c+134,"id_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+135,"id_reg_wen", false,-1);
    tracep->declQuad(c+6,"id_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+136,"id_offset_addr_o", false,-1, 63,0);
    tracep->declBus(c+138,"id_id_ex_csr_waddr_o", false,-1, 11,0);
    tracep->declQuad(c+328,"id_id_ex_csr_wdata_o", false,-1, 63,0);
    tracep->declBit(c+139,"id_id_ex_csr_wen_o", false,-1);
    tracep->declBus(c+140,"id_csr_raddr_o", false,-1, 11,0);
    tracep->declQuad(c+330,"regs_re_rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+332,"regs_re_rs2_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+8,"csr_id_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+10,"re_id_rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+12,"re_id_rs2_rdata_o", false,-1, 63,0);
    tracep->declBit(c+141,"rs_id_ex_hit_o", false,-1);
    tracep->declBus(c+132,"re_reg_rs1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+133,"re_reg_rs2_raddr_o", false,-1, 4,0);
    tracep->declBus(c+142,"id_ex_inst_o", false,-1, 31,0);
    tracep->declQuad(c+143,"id_ex_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+145,"id_ex_op1_o", false,-1, 63,0);
    tracep->declQuad(c+147,"id_ex_op2_o", false,-1, 63,0);
    tracep->declBus(c+149,"id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+150,"id_ex_reg_wen", false,-1);
    tracep->declQuad(c+151,"id_ex_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+153,"id_ex_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+155,"id_ex_ex_csr_wdata_o", false,-1, 63,0);
    tracep->declBus(c+157,"id_ex_ex_csr_waddr_o", false,-1, 11,0);
    tracep->declBit(c+158,"id_ex_ex_csr_wen_o", false,-1);
    tracep->declQuad(c+159,"ex_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+161,"ex_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+162,"ex_reg_wen_o", false,-1);
    tracep->declQuad(c+143,"ex_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+142,"ex_ex_mem_inst_o", false,-1, 31,0);
    tracep->declBit(c+163,"ex_ex_mem_ren_o", false,-1);
    tracep->declQuad(c+164,"ex_ex_mem_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+166,"ex_ex_mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+168,"ex_ex_mem_wdata_o", false,-1, 63,0);
    tracep->declBit(c+170,"ex_ex_mem_wen_o", false,-1);
    tracep->declBus(c+171,"ex_ex_mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+172,"ex_csr_wdata_o", false,-1, 63,0);
    tracep->declBus(c+174,"ex_csr_waddr_o", false,-1, 11,0);
    tracep->declBit(c+175,"ex_csr_wen_o", false,-1);
    tracep->declQuad(c+176,"ex_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+178,"ex_jump_en_o", false,-1);
    tracep->declBit(c+179,"ex_isload_o", false,-1);
    tracep->declBit(c+180,"ex_isstore_o", false,-1);
    tracep->declQuad(c+176,"ctrl_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+178,"ctrl_jump_en_o", false,-1);
    tracep->declBit(c+14,"ctrl_pc_flush_en_o", false,-1);
    tracep->declBit(c+15,"ctrl_pc_stall_en_o", false,-1);
    tracep->declBit(c+16,"ctrl_if_id_flush_en_o", false,-1);
    tracep->declBit(c+17,"ctrl_if_id_stall_en_o", false,-1);
    tracep->declBit(c+18,"ctrl_id_ex_flush_en_o", false,-1);
    tracep->declBit(c+19,"ctrl_id_ex_stall_en_o", false,-1);
    tracep->declBit(c+20,"ctrl_ex_mem_flush_en_o", false,-1);
    tracep->declBit(c+21,"ctrl_ex_mem_stall_en_o", false,-1);
    tracep->declBit(c+22,"ctrl_mem_wb_flush_en_o", false,-1);
    tracep->declBit(c+23,"ctrl_mem_wb_stall_en_o", false,-1);
    tracep->declQuad(c+181,"ex_mem_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+183,"ex_mem_mem_inst_o", false,-1, 31,0);
    tracep->declBit(c+184,"ex_mem_mem_ren_o", false,-1);
    tracep->declQuad(c+185,"ex_mem_mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+187,"ex_mem_mem_wen_o", false,-1);
    tracep->declQuad(c+188,"ex_mem_mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+190,"ex_mem_mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+192,"ex_mem_mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+193,"ex_mem_mem_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+195,"ex_mem_mem_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+196,"ex_mem_mem_reg_wen_o", false,-1);
    tracep->declBus(c+344,"ex_mem_mem_stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+345,"ex_mem_mem_flush_flag_o", false,-1, 2,0);
    tracep->declBit(c+197,"ex_mem_isload_o", false,-1);
    tracep->declBit(c+198,"ex_mem_isstore_o", false,-1);
    tracep->declQuad(c+181,"mem_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+24,"mem_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+195,"mem_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+196,"mem_reg_wen_o", false,-1);
    tracep->declBit(c+197,"mem_isload_o", false,-1);
    tracep->declBit(c+198,"mem_isstore_o", false,-1);
    tracep->declQuad(c+99,"mem_ram_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+97,"mem_ram_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+101,"mem_ram_wmask_o", false,-1, 63,0);
    tracep->declQuad(c+94,"mem_ram_raddr_o", false,-1, 63,0);
    tracep->declBit(c+93,"mem_ram_ren_o", false,-1);
    tracep->declBit(c+96,"mem_ram_wen_o", false,-1);
    tracep->declQuad(c+199,"mem_wb_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+201,"mem_wb_wb_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+203,"mem_wb_wb_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+204,"mem_wb_wb_reg_wen_o", false,-1);
    tracep->declQuad(c+199,"wb_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+201,"wb_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+203,"wb_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+204,"wb_reg_wen_o", false,-1);
    tracep->pushNamePrefix("csr_regs_inst ");
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBus(c+140,"csr_raddr_i", false,-1, 11,0);
    tracep->declQuad(c+8,"csr_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+172,"csr_wdata_i", false,-1, 63,0);
    tracep->declBus(c+174,"csr_waddr_i", false,-1, 11,0);
    tracep->declBit(c+175,"csr_wen_i", false,-1);
    tracep->declQuad(c+205,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+207,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+209,"mepc", false,-1, 63,0);
    tracep->declQuad(c+211,"mcause", false,-1, 63,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+213+i*2,"csrs", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctrl_inst ");
    tracep->declQuad(c+176,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+178,"jump_en_i", false,-1);
    tracep->declBit(c+179,"ex_inst_isload_i", false,-1);
    tracep->declBit(c+180,"ex_inst_isstore_i", false,-1);
    tracep->declBit(c+197,"mem_inst_isload_i", false,-1);
    tracep->declBit(c+198,"mem_inst_isstore_i", false,-1);
    tracep->declBit(c+141,"rs_id_ex_hit_i", false,-1);
    tracep->declBit(c+113,"axi_busy_i", false,-1);
    tracep->declBit(c+1,"axi_busy_end_i", false,-1);
    tracep->declQuad(c+176,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+178,"jump_en_o", false,-1);
    tracep->declBit(c+15,"pc_stall_en_o", false,-1);
    tracep->declBit(c+14,"pc_flush_en_o", false,-1);
    tracep->declBit(c+17,"if_id_stall_en_o", false,-1);
    tracep->declBit(c+16,"if_id_flush_en_o", false,-1);
    tracep->declBit(c+19,"id_ex_stall_en_o", false,-1);
    tracep->declBit(c+18,"id_ex_flush_en_o", false,-1);
    tracep->declBit(c+21,"ex_mem_stall_en_o", false,-1);
    tracep->declBit(c+20,"ex_mem_flush_en_o", false,-1);
    tracep->declBit(c+23,"mem_wb_stall_en_o", false,-1);
    tracep->declBit(c+22,"mem_wb_flush_en_o", false,-1);
    tracep->declBit(c+221,"load_data_hit", false,-1);
    tracep->declBit(c+178,"jump", false,-1);
    tracep->declBit(c+113,"busy", false,-1);
    tracep->declBit(c+222,"load_inst", false,-1);
    tracep->declBit(c+223,"store_inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_inst ");
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBus(c+142,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+143,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+145,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+147,"op2_i", false,-1, 63,0);
    tracep->declBus(c+149,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+150,"reg_wen_i", false,-1);
    tracep->declQuad(c+151,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+153,"offset_addr_i", false,-1, 63,0);
    tracep->declQuad(c+155,"csr_data_i", false,-1, 63,0);
    tracep->declBus(c+157,"csr_waddr_i", false,-1, 11,0);
    tracep->declBit(c+158,"csr_wen_i", false,-1);
    tracep->declQuad(c+176,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+178,"jump_en_o", false,-1);
    tracep->declBus(c+142,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+143,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+163,"mem_ren_o", false,-1);
    tracep->declQuad(c+164,"mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+170,"mem_wen_o", false,-1);
    tracep->declQuad(c+166,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+168,"mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+171,"mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+159,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+161,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+162,"reg_wen_o", false,-1);
    tracep->declBus(c+174,"csr_waddr_o", false,-1, 11,0);
    tracep->declQuad(c+172,"csr_data_o", false,-1, 63,0);
    tracep->declBit(c+175,"csr_wen_o", false,-1);
    tracep->declBit(c+179,"isload_o", false,-1);
    tracep->declBit(c+180,"isstore_o", false,-1);
    tracep->declBus(c+224,"opcode", false,-1, 6,0);
    tracep->declBus(c+225,"rd", false,-1, 4,0);
    tracep->declBus(c+226,"func3", false,-1, 2,0);
    tracep->declBus(c+227,"rs1", false,-1, 4,0);
    tracep->declBus(c+228,"rs2", false,-1, 4,0);
    tracep->declBus(c+229,"func7", false,-1, 6,0);
    tracep->declQuad(c+230,"op1_i_add_op2_i", false,-1, 63,0);
    tracep->declQuad(c+232,"op1_i_sub_op2_i", false,-1, 63,0);
    tracep->declQuad(c+234,"op1_i_mul_op2_i", false,-1, 63,0);
    tracep->declQuad(c+236,"op1_i_and_op2_i", false,-1, 63,0);
    tracep->declQuad(c+238,"op1_i_xor_op2_i", false,-1, 63,0);
    tracep->declQuad(c+240,"op1_i_or_op2_i", false,-1, 63,0);
    tracep->declQuad(c+242,"op1_i_rem_op2_i", false,-1, 63,0);
    tracep->declQuad(c+244,"op1_i_rem_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+246,"op1_i_div_op2_i", false,-1, 63,0);
    tracep->declQuad(c+248,"op1_i_div_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+250,"op1_i_shift_left_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+252,"op1_i_shift_right_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+254,"op1_i_shift_right_op2_i_signed", false,-1, 63,0);
    tracep->declQuad(c+256,"base_addr_add_addr_offset", false,-1, 63,0);
    tracep->declBit(c+258,"op1_i_equal_op2_i", false,-1);
    tracep->declBit(c+259,"op1_i_less_op2_i_signed", false,-1);
    tracep->declBit(c+260,"op1_i_less_op2_i_unsigned", false,-1);
    tracep->declQuad(c+261,"compress_add", false,-1, 63,0);
    tracep->declQuad(c+263,"compress_sub", false,-1, 63,0);
    tracep->declQuad(c+265,"compress_mul", false,-1, 63,0);
    tracep->declQuad(c+267,"compress_and", false,-1, 63,0);
    tracep->declQuad(c+269,"compress_xor", false,-1, 63,0);
    tracep->declQuad(c+271,"compress_or", false,-1, 63,0);
    tracep->declQuad(c+273,"compress_rem", false,-1, 63,0);
    tracep->declQuad(c+275,"compress_rem_unsigned", false,-1, 63,0);
    tracep->declQuad(c+277,"compress_div", false,-1, 63,0);
    tracep->declQuad(c+279,"compress_shift_left_unsigned", false,-1, 63,0);
    tracep->declQuad(c+281,"compress_shift_right_unsigned", false,-1, 63,0);
    tracep->declQuad(c+283,"compress_shift_right_signed", false,-1, 63,0);
    tracep->declQuad(c+285,"compress_addr_offset", false,-1, 63,0);
    tracep->declBus(c+287,"compress_rem_tmp", false,-1, 31,0);
    tracep->declBus(c+288,"compress_rem_unsigned_tmp", false,-1, 31,0);
    tracep->declBus(c+289,"compress_shift_left_u_tmp", false,-1, 31,0);
    tracep->declBus(c+290,"compress_shift_right_u_tmp", false,-1, 31,0);
    tracep->declBus(c+291,"compress_shift_right_s_tmp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_mem_inst ");
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBus(c+142,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+143,"inst_addr_i", false,-1, 63,0);
    tracep->declBit(c+163,"ex_ren_i", false,-1);
    tracep->declQuad(c+164,"ex_raddr_i", false,-1, 63,0);
    tracep->declBit(c+170,"ex_wen_i", false,-1);
    tracep->declQuad(c+166,"ex_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+168,"ex_wdata_i", false,-1, 63,0);
    tracep->declBus(c+171,"ex_wmask_i", false,-1, 7,0);
    tracep->declQuad(c+159,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+161,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+162,"reg_wen_i", false,-1);
    tracep->declBit(c+179,"load_inst_i", false,-1);
    tracep->declBit(c+197,"load_inst_o", false,-1);
    tracep->declBit(c+180,"store_inst_i", false,-1);
    tracep->declBit(c+198,"store_inst_o", false,-1);
    tracep->declBus(c+183,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+181,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+184,"ren_o", false,-1);
    tracep->declQuad(c+185,"raddr_o", false,-1, 63,0);
    tracep->declBit(c+187,"wen_o", false,-1);
    tracep->declQuad(c+188,"waddr_o", false,-1, 63,0);
    tracep->declQuad(c+190,"wdata_o", false,-1, 63,0);
    tracep->declBus(c+192,"wmask_o", false,-1, 7,0);
    tracep->declQuad(c+193,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+195,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+196,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff0 ");
    tracep->declBus(c+340,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declBus(c+346,"set_data", false,-1, 31,0);
    tracep->declBus(c+142,"data_i", false,-1, 31,0);
    tracep->declBus(c+183,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+339,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declQuad(c+347,"set_data", false,-1, 63,0);
    tracep->declQuad(c+143,"data_i", false,-1, 63,0);
    tracep->declQuad(c+181,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff10 ");
    tracep->declBus(c+343,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declBus(c+349,"set_data", false,-1, 0,0);
    tracep->declBus(c+162,"data_i", false,-1, 0,0);
    tracep->declBus(c+196,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff11 ");
    tracep->declBus(c+343,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declBus(c+349,"set_data", false,-1, 0,0);
    tracep->declBus(c+179,"data_i", false,-1, 0,0);
    tracep->declBus(c+197,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff12 ");
    tracep->declBus(c+343,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declBus(c+349,"set_data", false,-1, 0,0);
    tracep->declBus(c+180,"data_i", false,-1, 0,0);
    tracep->declBus(c+198,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+343,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declBus(c+349,"set_data", false,-1, 0,0);
    tracep->declBus(c+163,"data_i", false,-1, 0,0);
    tracep->declBus(c+184,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+339,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declQuad(c+347,"set_data", false,-1, 63,0);
    tracep->declQuad(c+164,"data_i", false,-1, 63,0);
    tracep->declQuad(c+185,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+343,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declBus(c+349,"set_data", false,-1, 0,0);
    tracep->declBus(c+170,"data_i", false,-1, 0,0);
    tracep->declBus(c+187,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+339,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declQuad(c+347,"set_data", false,-1, 63,0);
    tracep->declQuad(c+166,"data_i", false,-1, 63,0);
    tracep->declQuad(c+188,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+339,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declQuad(c+347,"set_data", false,-1, 63,0);
    tracep->declQuad(c+168,"data_i", false,-1, 63,0);
    tracep->declQuad(c+190,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+341,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declBus(c+350,"set_data", false,-1, 7,0);
    tracep->declBus(c+171,"data_i", false,-1, 7,0);
    tracep->declBus(c+192,"data_o", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+339,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declQuad(c+347,"set_data", false,-1, 63,0);
    tracep->declQuad(c+159,"data_i", false,-1, 63,0);
    tracep->declQuad(c+193,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff9 ");
    tracep->declBus(c+351,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+20,"flush_flag_i", false,-1);
    tracep->declBit(c+21,"stall_flag_i", false,-1);
    tracep->declBus(c+352,"set_data", false,-1, 4,0);
    tracep->declBus(c+161,"data_i", false,-1, 4,0);
    tracep->declBus(c+195,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_ex_inst ");
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declBus(c+131,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+129,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+2,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+4,"op2_i", false,-1, 63,0);
    tracep->declBus(c+134,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+135,"reg_wen_i", false,-1);
    tracep->declQuad(c+6,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+136,"offset_addr_i", false,-1, 63,0);
    tracep->declQuad(c+328,"csr_data_i", false,-1, 63,0);
    tracep->declBus(c+138,"csr_waddr_i", false,-1, 11,0);
    tracep->declBit(c+139,"csr_wen_i", false,-1);
    tracep->declBus(c+142,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+143,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+145,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+147,"op2_o", false,-1, 63,0);
    tracep->declBus(c+149,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+150,"reg_wen_o", false,-1);
    tracep->declQuad(c+151,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+153,"offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+155,"csr_data_o", false,-1, 63,0);
    tracep->declBus(c+157,"csr_waddr_o", false,-1, 11,0);
    tracep->declBit(c+158,"csr_wen_o", false,-1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+340,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declBus(c+346,"set_data", false,-1, 31,0);
    tracep->declBus(c+131,"data_i", false,-1, 31,0);
    tracep->declBus(c+142,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff10 ");
    tracep->declBus(c+353,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declBus(c+354,"set_data", false,-1, 11,0);
    tracep->declBus(c+138,"data_i", false,-1, 11,0);
    tracep->declBus(c+157,"data_o", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff11 ");
    tracep->declBus(c+343,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declBus(c+349,"set_data", false,-1, 0,0);
    tracep->declBus(c+139,"data_i", false,-1, 0,0);
    tracep->declBus(c+158,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+339,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declQuad(c+347,"set_data", false,-1, 63,0);
    tracep->declQuad(c+129,"data_i", false,-1, 63,0);
    tracep->declQuad(c+143,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+339,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declQuad(c+347,"set_data", false,-1, 63,0);
    tracep->declQuad(c+2,"data_i", false,-1, 63,0);
    tracep->declQuad(c+145,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+339,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declQuad(c+347,"set_data", false,-1, 63,0);
    tracep->declQuad(c+4,"data_i", false,-1, 63,0);
    tracep->declQuad(c+147,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+351,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declBus(c+352,"set_data", false,-1, 4,0);
    tracep->declBus(c+134,"data_i", false,-1, 4,0);
    tracep->declBus(c+149,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+343,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declBus(c+349,"set_data", false,-1, 0,0);
    tracep->declBus(c+135,"data_i", false,-1, 0,0);
    tracep->declBus(c+150,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+339,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declQuad(c+347,"set_data", false,-1, 63,0);
    tracep->declQuad(c+6,"data_i", false,-1, 63,0);
    tracep->declQuad(c+151,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+339,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declQuad(c+347,"set_data", false,-1, 63,0);
    tracep->declQuad(c+136,"data_i", false,-1, 63,0);
    tracep->declQuad(c+153,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff9 ");
    tracep->declBus(c+339,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+18,"flush_flag_i", false,-1);
    tracep->declBit(c+19,"stall_flag_i", false,-1);
    tracep->declQuad(c+347,"set_data", false,-1, 63,0);
    tracep->declQuad(c+328,"data_i", false,-1, 63,0);
    tracep->declQuad(c+155,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_inst ");
    tracep->declBus(c+131,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+129,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+10,"rs1_data_i", false,-1, 63,0);
    tracep->declQuad(c+12,"rs2_data_i", false,-1, 63,0);
    tracep->declBus(c+132,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+133,"rs2_addr_o", false,-1, 4,0);
    tracep->declQuad(c+8,"csr_data_i", false,-1, 63,0);
    tracep->declBus(c+140,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+131,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+129,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+2,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+4,"op2_o", false,-1, 63,0);
    tracep->declBus(c+134,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+135,"reg_wen", false,-1);
    tracep->declQuad(c+6,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+136,"offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+328,"csr_data_o", false,-1, 63,0);
    tracep->declBus(c+138,"csr_waddr_o", false,-1, 11,0);
    tracep->declBit(c+139,"csr_wen_o", false,-1);
    tracep->declBus(c+292,"opcode", false,-1, 6,0);
    tracep->declBus(c+293,"rd", false,-1, 4,0);
    tracep->declBus(c+294,"func3", false,-1, 2,0);
    tracep->declBus(c+295,"rs1", false,-1, 4,0);
    tracep->declBus(c+296,"rs2", false,-1, 4,0);
    tracep->declBus(c+297,"csr", false,-1, 11,0);
    tracep->declBus(c+298,"func7", false,-1, 6,0);
    tracep->declBus(c+297,"imm", false,-1, 11,0);
    tracep->declBus(c+299,"shamt", false,-1, 5,0);
    tracep->declQuad(c+300,"immI", false,-1, 63,0);
    tracep->declQuad(c+302,"immU", false,-1, 63,0);
    tracep->declQuad(c+304,"immS", false,-1, 63,0);
    tracep->declQuad(c+306,"immB", false,-1, 63,0);
    tracep->declQuad(c+308,"immJ", false,-1, 63,0);
    tracep->declQuad(c+310,"immL", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_inst ");
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+16,"flush_flag_i", false,-1);
    tracep->declBit(c+17,"stall_flag_i", false,-1);
    tracep->declBus(c+128,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+103,"inst_addr_i", false,-1, 63,0);
    tracep->declBus(c+131,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+129,"inst_addr_o", false,-1, 63,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+340,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+16,"flush_flag_i", false,-1);
    tracep->declBit(c+17,"stall_flag_i", false,-1);
    tracep->declBus(c+346,"set_data", false,-1, 31,0);
    tracep->declBus(c+128,"data_i", false,-1, 31,0);
    tracep->declBus(c+131,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+339,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+16,"flush_flag_i", false,-1);
    tracep->declBit(c+17,"stall_flag_i", false,-1);
    tracep->declQuad(c+347,"set_data", false,-1, 63,0);
    tracep->declQuad(c+103,"data_i", false,-1, 63,0);
    tracep->declQuad(c+129,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_fetch_inst ");
    tracep->declQuad(c+103,"pc_addr_i", false,-1, 63,0);
    tracep->declQuad(c+117,"ram_inst_i", false,-1, 63,0);
    tracep->declQuad(c+103,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+128,"inst_o", false,-1, 31,0);
    tracep->declBit(c+338,"ren_o", false,-1);
    tracep->declQuad(c+117,"inst_get", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_inst ");
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBus(c+183,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+181,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+181,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+113,"axi_busy_i", false,-1);
    tracep->declBit(c+184,"ren_i", false,-1);
    tracep->declBit(c+187,"wen_i", false,-1);
    tracep->declQuad(c+185,"raddr_i", false,-1, 63,0);
    tracep->declQuad(c+188,"waddr_i", false,-1, 63,0);
    tracep->declQuad(c+190,"wdata_i", false,-1, 63,0);
    tracep->declBus(c+192,"wmask_i", false,-1, 7,0);
    tracep->declQuad(c+193,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+195,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+196,"reg_wen_i", false,-1);
    tracep->declQuad(c+99,"ram_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+97,"ram_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+101,"ram_wmask_o", false,-1, 63,0);
    tracep->declQuad(c+94,"ram_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+326,"ram_rdata_i", false,-1, 63,0);
    tracep->declBit(c+93,"ram_ren_o", false,-1);
    tracep->declBit(c+96,"ram_wen_o", false,-1);
    tracep->declQuad(c+24,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+195,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+196,"reg_wen_o", false,-1);
    tracep->declBit(c+197,"isload_i", false,-1);
    tracep->declBit(c+197,"isload_o", false,-1);
    tracep->declBit(c+198,"isstore_i", false,-1);
    tracep->declBit(c+198,"isstore_o", false,-1);
    tracep->declBus(c+312,"opcode", false,-1, 6,0);
    tracep->declBus(c+313,"rd", false,-1, 4,0);
    tracep->declBus(c+314,"func3", false,-1, 2,0);
    tracep->declBus(c+315,"rs1", false,-1, 4,0);
    tracep->declBus(c+316,"rs2", false,-1, 4,0);
    tracep->declBus(c+355,"func7", false,-1, 6,0);
    tracep->declQuad(c+26,"rdata", false,-1, 63,0);
    tracep->declQuad(c+326,"ram_rdata", false,-1, 63,0);
    tracep->declQuad(c+334,"device_rdata", false,-1, 63,0);
    tracep->declBit(c+317,"visit_interface", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_wb_inst ");
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+23,"stall_flag_i", false,-1);
    tracep->declBit(c+22,"flush_flag_i", false,-1);
    tracep->declQuad(c+181,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+199,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+24,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+195,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+196,"reg_wen_i", false,-1);
    tracep->declQuad(c+201,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+203,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+204,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+339,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+22,"flush_flag_i", false,-1);
    tracep->declBit(c+23,"stall_flag_i", false,-1);
    tracep->declQuad(c+347,"set_data", false,-1, 63,0);
    tracep->declQuad(c+181,"data_i", false,-1, 63,0);
    tracep->declQuad(c+199,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+351,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+22,"flush_flag_i", false,-1);
    tracep->declBit(c+23,"stall_flag_i", false,-1);
    tracep->declBus(c+352,"set_data", false,-1, 4,0);
    tracep->declBus(c+195,"data_i", false,-1, 4,0);
    tracep->declBus(c+203,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+343,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+22,"flush_flag_i", false,-1);
    tracep->declBit(c+23,"stall_flag_i", false,-1);
    tracep->declBus(c+349,"set_data", false,-1, 0,0);
    tracep->declBus(c+196,"data_i", false,-1, 0,0);
    tracep->declBus(c+204,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+339,"DW", false,-1, 31,0);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+22,"flush_flag_i", false,-1);
    tracep->declBit(c+23,"stall_flag_i", false,-1);
    tracep->declQuad(c+347,"set_data", false,-1, 63,0);
    tracep->declQuad(c+24,"data_i", false,-1, 63,0);
    tracep->declQuad(c+201,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declQuad(c+176,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+178,"jump_en_i", false,-1);
    tracep->declBit(c+14,"flush_en_i", false,-1);
    tracep->declBit(c+15,"stall_en_i", false,-1);
    tracep->declQuad(c+103,"pc_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("redirect_inst ");
    tracep->declBus(c+132,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+133,"rs2_addr_i", false,-1, 4,0);
    tracep->declBus(c+161,"ex_rd_addr_i", false,-1, 4,0);
    tracep->declQuad(c+159,"ex_rd_data_i", false,-1, 63,0);
    tracep->declBit(c+162,"ex_rd_wen_i", false,-1);
    tracep->declBus(c+195,"mem_rd_addr_i", false,-1, 4,0);
    tracep->declQuad(c+24,"mem_rd_data_i", false,-1, 63,0);
    tracep->declBit(c+196,"mem_rd_wen_i", false,-1);
    tracep->declBus(c+203,"wb_rd_addr_i", false,-1, 4,0);
    tracep->declQuad(c+201,"wb_rd_data_i", false,-1, 63,0);
    tracep->declBit(c+204,"wb_rd_wen_i", false,-1);
    tracep->declQuad(c+330,"rs1_rdata_i", false,-1, 63,0);
    tracep->declQuad(c+332,"rs2_rdata_i", false,-1, 63,0);
    tracep->declBus(c+132,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+133,"rs2_addr_o", false,-1, 4,0);
    tracep->declQuad(c+10,"rs1_data_o", false,-1, 63,0);
    tracep->declQuad(c+12,"rs2_data_o", false,-1, 63,0);
    tracep->declBit(c+141,"rs_id_ex_hit_o", false,-1);
    tracep->declBit(c+318,"rs1_id_ex_hit", false,-1);
    tracep->declBit(c+319,"rs1_id_mem_hit", false,-1);
    tracep->declBit(c+320,"rs1_id_wb_hit", false,-1);
    tracep->declBit(c+321,"rs2_id_ex_hit", false,-1);
    tracep->declBit(c+322,"rs2_id_mem_hit", false,-1);
    tracep->declBit(c+323,"rs2_id_wb_hit", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_inst ");
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBus(c+132,"rs1_raddr_i", false,-1, 4,0);
    tracep->declBus(c+133,"rs2_raddr_i", false,-1, 4,0);
    tracep->declQuad(c+330,"rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+332,"rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+203,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+201,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+204,"reg_wen", false,-1);
    tracep->declQuad(c+199,"inst_addr_i", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+28+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->declQuad(c+199,"pc_reg", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+92,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb_inst ");
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declQuad(c+199,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+199,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+203,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+201,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+204,"reg_wen_i", false,-1);
    tracep->declBus(c+203,"reg_waddr_o", false,-1, 4,0);
    tracep->declQuad(c+201,"reg_wdata_o", false,-1, 63,0);
    tracep->declBit(c+204,"reg_wen_o", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ram_inst ");
    tracep->declBit(c+324,"clk", false,-1);
    tracep->declBit(c+325,"rst", false,-1);
    tracep->declBus(c+107,"ram_waddr_i", false,-1, 31,0);
    tracep->declQuad(c+108,"ram_wdata_i", false,-1, 63,0);
    tracep->declQuad(c+110,"ram_wmask_i", false,-1, 63,0);
    tracep->declBus(c+105,"ram_raddr_i", false,-1, 31,0);
    tracep->declBit(c+106,"ram_ren_i", false,-1);
    tracep->declBit(c+112,"ram_wen_i", false,-1);
    tracep->declQuad(c+114,"ram_rdata_o", false,-1, 63,0);
    tracep->declBit(c+338,"ram_rready_o", false,-1);
    tracep->declBit(c+338,"ram_wready_o", false,-1);
    tracep->declBit(c+116,"ram_bvalid_o", false,-1);
    tracep->declQuad(c+103,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+117,"inst_o", false,-1, 63,0);
    tracep->declBus(c+107,"waddr", false,-1, 31,0);
    tracep->declBus(c+105,"raddr", false,-1, 31,0);
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
    tracep->fullQData(oldp+8,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_id_rdata_o),64);
    tracep->fullQData(oldp+10,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o),64);
    tracep->fullQData(oldp+12,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o),64);
    tracep->fullBit(oldp+14,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_flush_en_o));
    tracep->fullBit(oldp+15,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_stall_en_o));
    tracep->fullBit(oldp+16,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_flush_en_o));
    tracep->fullBit(oldp+17,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_stall_en_o));
    tracep->fullBit(oldp+18,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o));
    tracep->fullBit(oldp+19,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o));
    tracep->fullBit(oldp+20,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o));
    tracep->fullBit(oldp+21,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o));
    tracep->fullBit(oldp+22,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_flush_en_o));
    tracep->fullBit(oldp+23,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_stall_en_o));
    tracep->fullQData(oldp+24,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o),64);
    tracep->fullQData(oldp+26,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata),64);
    tracep->fullQData(oldp+28,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0]),64);
    tracep->fullQData(oldp+30,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[1]),64);
    tracep->fullQData(oldp+32,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[2]),64);
    tracep->fullQData(oldp+34,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[3]),64);
    tracep->fullQData(oldp+36,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[4]),64);
    tracep->fullQData(oldp+38,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[5]),64);
    tracep->fullQData(oldp+40,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[6]),64);
    tracep->fullQData(oldp+42,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[7]),64);
    tracep->fullQData(oldp+44,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[8]),64);
    tracep->fullQData(oldp+46,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[9]),64);
    tracep->fullQData(oldp+48,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[10]),64);
    tracep->fullQData(oldp+50,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[11]),64);
    tracep->fullQData(oldp+52,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[12]),64);
    tracep->fullQData(oldp+54,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[13]),64);
    tracep->fullQData(oldp+56,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[14]),64);
    tracep->fullQData(oldp+58,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[15]),64);
    tracep->fullQData(oldp+60,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[16]),64);
    tracep->fullQData(oldp+62,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[17]),64);
    tracep->fullQData(oldp+64,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[18]),64);
    tracep->fullQData(oldp+66,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[19]),64);
    tracep->fullQData(oldp+68,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[20]),64);
    tracep->fullQData(oldp+70,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[21]),64);
    tracep->fullQData(oldp+72,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[22]),64);
    tracep->fullQData(oldp+74,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[23]),64);
    tracep->fullQData(oldp+76,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[24]),64);
    tracep->fullQData(oldp+78,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[25]),64);
    tracep->fullQData(oldp+80,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[26]),64);
    tracep->fullQData(oldp+82,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[27]),64);
    tracep->fullQData(oldp+84,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[28]),64);
    tracep->fullQData(oldp+86,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[29]),64);
    tracep->fullQData(oldp+88,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[30]),64);
    tracep->fullQData(oldp+90,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[31]),64);
    tracep->fullIData(oldp+92,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullBit(oldp+93,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_ren_o));
    tracep->fullQData(oldp+94,((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o) 
                                 & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface)))
                                 ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o
                                 : 0ULL)),64);
    tracep->fullBit(oldp+96,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_wen_o));
    tracep->fullQData(oldp+97,((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o) 
                                 & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface)))
                                 ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o
                                 : 0ULL)),64);
    tracep->fullQData(oldp+99,((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o) 
                                 & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface)))
                                 ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o
                                 : 0ULL)),64);
    tracep->fullQData(oldp+101,(((1U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o))
                                  ? 0xffULL : ((3U 
                                                == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o))
                                                ? 0xffffULL
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o))
                                                    ? 0xffffffffULL
                                                    : 
                                                   ((0xffU 
                                                     == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o))
                                                     ? 0xffffffffffffffffULL
                                                     : 0ULL))))),64);
    tracep->fullQData(oldp+103,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o),64);
    tracep->fullIData(oldp+105,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr),32);
    tracep->fullBit(oldp+106,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__ren_o));
    tracep->fullIData(oldp+107,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr),32);
    tracep->fullQData(oldp+108,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata),64);
    tracep->fullQData(oldp+110,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask),64);
    tracep->fullBit(oldp+112,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wen_o));
    tracep->fullBit(oldp+113,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy));
    tracep->fullQData(oldp+114,(vlSelf->tb__DOT__soc_inst__DOT__ram_axi_rdata_o),64);
    tracep->fullBit(oldp+116,(vlSelf->tb__DOT__soc_inst__DOT__ram_axi_bvalid_o));
    tracep->fullQData(oldp+117,(vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o),64);
    tracep->fullIData(oldp+119,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr),32);
    tracep->fullQData(oldp+120,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata),64);
    tracep->fullBit(oldp+122,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid));
    tracep->fullBit(oldp+123,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raready));
    tracep->fullBit(oldp+124,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready));
    tracep->fullBit(oldp+125,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid));
    tracep->fullBit(oldp+126,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waready));
    tracep->fullBit(oldp+127,(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdready));
    tracep->fullIData(oldp+128,((IData)(vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o)),32);
    tracep->fullQData(oldp+129,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o),64);
    tracep->fullIData(oldp+131,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o),32);
    tracep->fullCData(oldp+132,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o),5);
    tracep->fullCData(oldp+133,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o),5);
    tracep->fullCData(oldp+134,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_rd_addr_o),5);
    tracep->fullBit(oldp+135,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_reg_wen));
    tracep->fullQData(oldp+136,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_offset_addr_o),64);
    tracep->fullSData(oldp+138,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
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
                                                   ((((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                           >> 0xcU))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                             >> 0xcU)))) 
                                                     | (3U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                            >> 0xcU))))
                                                     ? 
                                                    (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                     >> 0x14U)
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)))
                                          : 0U) : 0U)
                                  : 0U)),12);
    tracep->fullBit(oldp+139,((IData)(((0x73U == (0x7fU 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) 
                                       & (((2U == (7U 
                                                   & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                      >> 0xcU))) 
                                           | (1U == 
                                              (7U & 
                                               (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0xcU)))) 
                                          | (3U == 
                                             (7U & 
                                              (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                               >> 0xcU))))))));
    tracep->fullSData(oldp+140,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o),12);
    tracep->fullBit(oldp+141,(((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs1_id_ex_hit) 
                               | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs2_id_ex_hit))));
    tracep->fullIData(oldp+142,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o),32);
    tracep->fullQData(oldp+143,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_addr_o),64);
    tracep->fullQData(oldp+145,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o),64);
    tracep->fullQData(oldp+147,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o),64);
    tracep->fullCData(oldp+149,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+150,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_reg_wen));
    tracep->fullQData(oldp+151,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_base_addr_o),64);
    tracep->fullQData(oldp+153,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_offset_addr_o),64);
    tracep->fullQData(oldp+155,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_wdata_o),64);
    tracep->fullSData(oldp+157,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_waddr_o),12);
    tracep->fullBit(oldp+158,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_wen_o));
    tracep->fullQData(oldp+159,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o),64);
    tracep->fullCData(oldp+161,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o),5);
    tracep->fullBit(oldp+162,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o));
    tracep->fullBit(oldp+163,((1U & (IData)(((3U == 
                                              (0x7fU 
                                               & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                                             & (0x7000U 
                                                != 
                                                (0x7000U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))))));
    tracep->fullQData(oldp+164,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
    tracep->fullQData(oldp+166,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
    tracep->fullQData(oldp+168,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
    tracep->fullBit(oldp+170,((IData)((0x23U == (0x407fU 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))));
    tracep->fullCData(oldp+171,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
    tracep->fullQData(oldp+172,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_wdata_o),64);
    tracep->fullSData(oldp+174,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_waddr_o),12);
    tracep->fullBit(oldp+175,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_wen_o));
    tracep->fullQData(oldp+176,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
    tracep->fullBit(oldp+178,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_jump_en_o));
    tracep->fullBit(oldp+179,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isload_o));
    tracep->fullBit(oldp+180,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isstore_o));
    tracep->fullQData(oldp+181,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_inst_addr_o),64);
    tracep->fullIData(oldp+183,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o),32);
    tracep->fullBit(oldp+184,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o));
    tracep->fullQData(oldp+185,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o),64);
    tracep->fullBit(oldp+187,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o));
    tracep->fullQData(oldp+188,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o),64);
    tracep->fullQData(oldp+190,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o),64);
    tracep->fullCData(oldp+192,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o),8);
    tracep->fullQData(oldp+193,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_wdata_o),64);
    tracep->fullCData(oldp+195,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o),5);
    tracep->fullBit(oldp+196,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o));
    tracep->fullBit(oldp+197,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isload_o));
    tracep->fullBit(oldp+198,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isstore_o));
    tracep->fullQData(oldp+199,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_inst_addr_o),64);
    tracep->fullQData(oldp+201,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o),64);
    tracep->fullCData(oldp+203,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o),5);
    tracep->fullBit(oldp+204,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o));
    tracep->fullQData(oldp+205,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mstatus),64);
    tracep->fullQData(oldp+207,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mtvec),64);
    tracep->fullQData(oldp+209,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mepc),64);
    tracep->fullQData(oldp+211,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mcause),64);
    tracep->fullQData(oldp+213,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[0]),64);
    tracep->fullQData(oldp+215,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[1]),64);
    tracep->fullQData(oldp+217,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[2]),64);
    tracep->fullQData(oldp+219,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[3]),64);
    tracep->fullBit(oldp+221,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_data_hit));
    tracep->fullBit(oldp+222,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_inst));
    tracep->fullBit(oldp+223,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__store_inst));
    tracep->fullCData(oldp+224,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)),7);
    tracep->fullCData(oldp+225,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+226,((7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+227,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+228,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+229,((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                 >> 0x19U)),7);
    tracep->fullQData(oldp+230,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),64);
    tracep->fullQData(oldp+232,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i),64);
    tracep->fullQData(oldp+234,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i),64);
    tracep->fullQData(oldp+236,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),64);
    tracep->fullQData(oldp+238,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),64);
    tracep->fullQData(oldp+240,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),64);
    tracep->fullQData(oldp+242,(VL_MODDIVS_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+244,(VL_MODDIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+246,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i),64);
    tracep->fullQData(oldp+248,(VL_DIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+250,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned),64);
    tracep->fullQData(oldp+252,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned),64);
    tracep->fullQData(oldp+254,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed),64);
    tracep->fullQData(oldp+256,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),64);
    tracep->fullBit(oldp+258,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
    tracep->fullBit(oldp+259,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
    tracep->fullBit(oldp+260,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
    tracep->fullQData(oldp+261,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_add),64);
    tracep->fullQData(oldp+263,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i)))),64);
    tracep->fullQData(oldp+265,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i)))),64);
    tracep->fullQData(oldp+267,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i)))),64);
    tracep->fullQData(oldp+269,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i)))),64);
    tracep->fullQData(oldp+271,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)))),64);
    tracep->fullQData(oldp+273,((((QData)((IData)((- (IData)(
                                                             (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp)))),64);
    tracep->fullQData(oldp+275,((((QData)((IData)((- (IData)(
                                                             (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp)))),64);
    tracep->fullQData(oldp+277,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_div_op2_i)))),64);
    tracep->fullQData(oldp+279,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned),64);
    tracep->fullQData(oldp+281,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned),64);
    tracep->fullQData(oldp+283,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_signed),64);
    tracep->fullQData(oldp+285,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)))),64);
    tracep->fullIData(oldp+287,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp),32);
    tracep->fullIData(oldp+288,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp),32);
    tracep->fullIData(oldp+289,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_u_tmp),32);
    tracep->fullIData(oldp+290,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_u_tmp),32);
    tracep->fullIData(oldp+291,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_s_tmp),32);
    tracep->fullCData(oldp+292,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)),7);
    tracep->fullCData(oldp+293,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+294,((7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+295,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+296,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),5);
    tracep->fullSData(oldp+297,((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                 >> 0x14U)),12);
    tracep->fullCData(oldp+298,((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                 >> 0x19U)),7);
    tracep->fullCData(oldp+299,((0x3fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),6);
    tracep->fullQData(oldp+300,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI),64);
    tracep->fullQData(oldp+302,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immU),64);
    tracep->fullQData(oldp+304,((((- (QData)((IData)(
                                                     (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                    >> 7U))))))),64);
    tracep->fullQData(oldp+306,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immB),64);
    tracep->fullQData(oldp+308,((((- (QData)((IData)(
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
    tracep->fullQData(oldp+310,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL),64);
    tracep->fullCData(oldp+312,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)),7);
    tracep->fullCData(oldp+313,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+314,((7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+315,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+316,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
                                          >> 0x14U))),5);
    tracep->fullBit(oldp+317,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface));
    tracep->fullBit(oldp+318,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs1_id_ex_hit));
    tracep->fullBit(oldp+319,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
                                 == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)) 
                                & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)) 
                               & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))));
    tracep->fullBit(oldp+320,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
                                 == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)) 
                                & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o)) 
                               & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))));
    tracep->fullBit(oldp+321,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__redirect_inst__DOT__rs2_id_ex_hit));
    tracep->fullBit(oldp+322,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
                                 == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)) 
                                & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)) 
                               & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))));
    tracep->fullBit(oldp+323,(((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
                                 == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)) 
                                & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o)) 
                               & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))));
    tracep->fullBit(oldp+324,(vlSelf->clk));
    tracep->fullBit(oldp+325,(vlSelf->rst));
    tracep->fullQData(oldp+326,(((IData)(vlSelf->rst)
                                  ? ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready)
                                      ? vlSelf->tb__DOT__soc_inst__DOT__ram_axi_rdata_o
                                      : 0ULL) : 0ULL)),64);
    tracep->fullQData(oldp+328,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                  ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                      ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                          ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                              ? 0ULL
                                              : ((4U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                           >> 0xcU))) 
                                                      | (1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                             >> 0xcU)))) 
                                                     | (3U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                            >> 0xcU))))
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_id_rdata_o
                                                     : 0ULL)
                                                    : 0ULL)
                                                   : 0ULL)))
                                          : 0ULL) : 0ULL)
                                  : 0ULL)),64);
    tracep->fullQData(oldp+330,(((IData)(vlSelf->rst)
                                  ? ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o))
                                      ? 0ULL : (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                                                 & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o) 
                                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))
                                                 ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                                                 : 
                                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs
                                                [vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o]))
                                  : 0ULL)),64);
    tracep->fullQData(oldp+332,(((IData)(vlSelf->rst)
                                  ? ((0U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o))
                                      ? 0ULL : (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                                                 & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o) 
                                                    == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))
                                                 ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                                                 : 
                                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs
                                                [vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o]))
                                  : 0ULL)),64);
    tracep->fullQData(oldp+334,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__device_rdata),64);
    tracep->fullCData(oldp+336,(vlSelf->tb__DOT__soc_inst__DOT__axi_core_stall_flag_o),3);
    tracep->fullCData(oldp+337,(vlSelf->tb__DOT__soc_inst__DOT__axi_core_flush_flag_o),3);
    tracep->fullBit(oldp+338,(1U));
    tracep->fullIData(oldp+339,(0x40U),32);
    tracep->fullIData(oldp+340,(0x20U),32);
    tracep->fullIData(oldp+341,(8U),32);
    tracep->fullIData(oldp+342,(4U),32);
    tracep->fullIData(oldp+343,(1U),32);
    tracep->fullCData(oldp+344,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_stall_flag_o),3);
    tracep->fullCData(oldp+345,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_flush_flag_o),3);
    tracep->fullIData(oldp+346,(0x13U),32);
    tracep->fullQData(oldp+347,(0ULL),64);
    tracep->fullBit(oldp+349,(0U));
    tracep->fullCData(oldp+350,(0U),8);
    tracep->fullIData(oldp+351,(5U),32);
    tracep->fullCData(oldp+352,(0U),5);
    tracep->fullIData(oldp+353,(0xcU),32);
    tracep->fullSData(oldp+354,(0U),12);
    tracep->fullCData(oldp+355,(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__func7),7);
}
