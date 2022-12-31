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
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->pushNamePrefix("tb ");
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->pushNamePrefix("soc_inst ");
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+232,"riscv_ram_wen", false,-1);
    tracep->declQuad(c+233,"riscv_ram_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+235,"riscv_ram_wdata_o", false,-1, 63,0);
    tracep->declBus(c+237,"riscv_ram_wmask", false,-1, 7,0);
    tracep->declBit(c+76,"riscv_ram_ren", false,-1);
    tracep->declQuad(c+230,"riscv_ram_raddr_o", false,-1, 63,0);
    tracep->declBit(c+238,"riscv_ram_flush_flag_o", false,-1);
    tracep->declQuad(c+239,"ram_riscv_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+241,"riscv_rom_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+243,"rom_riscv_rdata_o", false,-1, 63,0);
    tracep->declBus(c+245,"riscv_axi_sid_o", false,-1, 3,0);
    tracep->declBit(c+246,"riscv_axi_rwvalid_o", false,-1);
    tracep->pushNamePrefix("riscv_inst ");
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declQuad(c+239,"mem_rdata_i", false,-1, 63,0);
    tracep->declBit(c+76,"mem_ren_o", false,-1);
    tracep->declQuad(c+230,"mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+232,"mem_wen_o", false,-1);
    tracep->declQuad(c+233,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+235,"mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+237,"mem_wmask_o", false,-1, 7,0);
    tracep->declBit(c+238,"flush_flag_o", false,-1);
    tracep->declBit(c+246,"rwvalid_o", false,-1);
    tracep->declQuad(c+77,"pc_reg_pc_o", false,-1, 63,0);
    tracep->declQuad(c+79,"rom_if_inst_o", false,-1, 63,0);
    tracep->declBus(c+81,"if_inst_o", false,-1, 31,0);
    tracep->declQuad(c+77,"if_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+82,"if_id_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+84,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+85,"id_rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+86,"id_rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+84,"id_inst_o", false,-1, 31,0);
    tracep->declQuad(c+82,"id_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+1,"id_op1_o", false,-1, 63,0);
    tracep->declQuad(c+3,"id_op2_o", false,-1, 63,0);
    tracep->declBus(c+87,"id_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+88,"id_reg_wen", false,-1);
    tracep->declQuad(c+5,"id_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+89,"id_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+7,"regs_rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+9,"regs_rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+91,"id_ex_inst_o", false,-1, 31,0);
    tracep->declQuad(c+92,"id_ex_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+94,"id_ex_op1_o", false,-1, 63,0);
    tracep->declQuad(c+96,"id_ex_op2_o", false,-1, 63,0);
    tracep->declBus(c+98,"id_ex_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+99,"id_ex_reg_wen", false,-1);
    tracep->declQuad(c+100,"id_ex_base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+102,"id_ex_offset_addr_o", false,-1, 63,0);
    tracep->declQuad(c+247,"ex_ex_mem_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+104,"ex_ex_mem_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+105,"ex_ex_mem_reg_wen_o", false,-1);
    tracep->declQuad(c+92,"ex_inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+249,"ex_ex_mem_ren_o", false,-1);
    tracep->declQuad(c+250,"ex_ex_mem_raddr_o", false,-1, 63,0);
    tracep->declQuad(c+106,"ex_ex_mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+108,"ex_ex_mem_wdata_o", false,-1, 63,0);
    tracep->declBit(c+110,"ex_ex_mem_wen_o", false,-1);
    tracep->declBus(c+111,"ex_ex_mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+112,"ex_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+114,"ex_jump_en_o", false,-1);
    tracep->declBus(c+115,"ex_stall_flag_o", false,-1, 2,0);
    tracep->declBus(c+116,"ex_flush_flag_o", false,-1, 2,0);
    tracep->declQuad(c+117,"ex_wb_rd_wdata_o", false,-1, 63,0);
    tracep->declQuad(c+112,"ctrl_jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+114,"ctrl_jump_en_o", false,-1);
    tracep->declBit(c+119,"ctrl_pc_flush_en_o", false,-1);
    tracep->declBit(c+120,"ctrl_pc_stall_en_o", false,-1);
    tracep->declBit(c+121,"ctrl_if_id_flush_en_o", false,-1);
    tracep->declBit(c+122,"ctrl_if_id_stall_en_o", false,-1);
    tracep->declBit(c+123,"ctrl_id_ex_flush_en_o", false,-1);
    tracep->declBit(c+124,"ctrl_id_ex_stall_en_o", false,-1);
    tracep->declQuad(c+125,"ex_mem_inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+127,"ex_mem_mem_ren_o", false,-1);
    tracep->declQuad(c+128,"ex_mem_mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+130,"ex_mem_mem_wen_o", false,-1);
    tracep->declQuad(c+131,"ex_mem_mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+133,"ex_mem_mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+135,"ex_mem_mem_wmask_o", false,-1, 7,0);
    tracep->declQuad(c+136,"ex_mem_mem_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+138,"ex_mem_mem_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+139,"ex_mem_mem_reg_wen_o", false,-1);
    tracep->declBus(c+140,"ex_mem_mem_stall_flag_o", false,-1, 2,0);
    tracep->declQuad(c+125,"mem_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+136,"mem_mem_wb_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+138,"mem_mem_wb_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+139,"mem_mem_wb_reg_wen_o", false,-1);
    tracep->declQuad(c+141,"mem_ex_rdata_o", false,-1, 63,0);
    tracep->declBus(c+140,"mem_stall_flag_o", false,-1, 2,0);
    tracep->declQuad(c+143,"mem_wb_inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+145,"mem_wb_wb_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+146,"mem_wb_wb_reg_wen_o", false,-1);
    tracep->declQuad(c+143,"wb_inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+117,"wb_reg_rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+145,"wb_reg_rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+146,"wb_reg_reg_wen_o", false,-1);
    tracep->pushNamePrefix("ctrl_inst ");
    tracep->declQuad(c+112,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+114,"jump_en_i", false,-1);
    tracep->declBus(c+116,"flush_flag_ex_i", false,-1, 2,0);
    tracep->declBus(c+115,"stall_flag_ex_i", false,-1, 2,0);
    tracep->declBus(c+140,"stall_flag_mem_i", false,-1, 2,0);
    tracep->declQuad(c+112,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+114,"jump_en_o", false,-1);
    tracep->declBit(c+120,"pc_stall_en_o", false,-1);
    tracep->declBit(c+119,"pc_flush_en_o", false,-1);
    tracep->declBit(c+122,"if_id_stall_en_o", false,-1);
    tracep->declBit(c+121,"if_id_flush_en_o", false,-1);
    tracep->declBit(c+124,"id_ex_stall_en_o", false,-1);
    tracep->declBit(c+123,"id_ex_flush_en_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_inst ");
    tracep->declBus(c+91,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+92,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+94,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+96,"op2_i", false,-1, 63,0);
    tracep->declBus(c+98,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+99,"reg_wen_i", false,-1);
    tracep->declQuad(c+100,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+102,"offset_addr_i", false,-1, 63,0);
    tracep->declQuad(c+117,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+104,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+105,"reg_wen_o", false,-1);
    tracep->declQuad(c+92,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+112,"jump_addr_o", false,-1, 63,0);
    tracep->declBit(c+114,"jump_en_o", false,-1);
    tracep->declBus(c+116,"flush_flag_o", false,-1, 2,0);
    tracep->declBus(c+115,"stall_flag_o", false,-1, 2,0);
    tracep->declQuad(c+141,"mem_rdata_i", false,-1, 63,0);
    tracep->declBit(c+249,"mem_ren_o", false,-1);
    tracep->declQuad(c+250,"mem_raddr_o", false,-1, 63,0);
    tracep->declBit(c+110,"mem_wen_o", false,-1);
    tracep->declQuad(c+106,"mem_waddr_o", false,-1, 63,0);
    tracep->declQuad(c+108,"mem_wdata_o", false,-1, 63,0);
    tracep->declBus(c+111,"mem_wmask", false,-1, 7,0);
    tracep->declBus(c+147,"opcode", false,-1, 6,0);
    tracep->declBus(c+148,"rd", false,-1, 4,0);
    tracep->declBus(c+149,"func3", false,-1, 2,0);
    tracep->declBus(c+150,"rs1", false,-1, 4,0);
    tracep->declBus(c+151,"rs2", false,-1, 4,0);
    tracep->declBus(c+152,"func7", false,-1, 6,0);
    tracep->declQuad(c+153,"op1_i_add_op2_i", false,-1, 63,0);
    tracep->declQuad(c+155,"op1_i_sub_op2_i", false,-1, 63,0);
    tracep->declQuad(c+157,"op1_i_mul_op2_i", false,-1, 63,0);
    tracep->declQuad(c+159,"op1_i_and_op2_i", false,-1, 63,0);
    tracep->declQuad(c+161,"op1_i_xor_op2_i", false,-1, 63,0);
    tracep->declQuad(c+163,"op1_i_or_op2_i", false,-1, 63,0);
    tracep->declQuad(c+165,"op1_i_rem_op2_i", false,-1, 63,0);
    tracep->declQuad(c+167,"op1_i_rem_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+169,"op1_i_div_op2_i", false,-1, 63,0);
    tracep->declQuad(c+171,"op1_i_div_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+173,"op1_i_shift_left_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+175,"op1_i_shift_right_op2_i_unsigned", false,-1, 63,0);
    tracep->declQuad(c+177,"op1_i_shift_right_op2_i_signed", false,-1, 63,0);
    tracep->declQuad(c+179,"base_addr_add_addr_offset", false,-1, 63,0);
    tracep->declBit(c+181,"op1_i_equal_op2_i", false,-1);
    tracep->declBit(c+182,"op1_i_less_op2_i_signed", false,-1);
    tracep->declBit(c+183,"op1_i_less_op2_i_unsigned", false,-1);
    tracep->declQuad(c+184,"compress_add", false,-1, 63,0);
    tracep->declQuad(c+186,"compress_sub", false,-1, 63,0);
    tracep->declQuad(c+188,"compress_mul", false,-1, 63,0);
    tracep->declQuad(c+190,"compress_and", false,-1, 63,0);
    tracep->declQuad(c+192,"compress_xor", false,-1, 63,0);
    tracep->declQuad(c+194,"compress_or", false,-1, 63,0);
    tracep->declQuad(c+196,"compress_rem", false,-1, 63,0);
    tracep->declQuad(c+198,"compress_div", false,-1, 63,0);
    tracep->declQuad(c+200,"compress_shift_left_unsigned", false,-1, 63,0);
    tracep->declQuad(c+202,"compress_shift_right_unsigned", false,-1, 63,0);
    tracep->declQuad(c+204,"compress_shift_right_signed", false,-1, 63,0);
    tracep->declQuad(c+206,"compress_addr_offset", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_mem_inst ");
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBus(c+115,"stall_flag_i", false,-1, 2,0);
    tracep->declQuad(c+92,"inst_addr_i", false,-1, 63,0);
    tracep->declBit(c+249,"ex_ren_i", false,-1);
    tracep->declQuad(c+250,"ex_raddr_i", false,-1, 63,0);
    tracep->declBit(c+110,"ex_wen_i", false,-1);
    tracep->declQuad(c+106,"ex_waddr_i", false,-1, 63,0);
    tracep->declQuad(c+108,"ex_wdata_i", false,-1, 63,0);
    tracep->declBus(c+111,"ex_wmask_i", false,-1, 7,0);
    tracep->declQuad(c+247,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+104,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+105,"reg_wen_i", false,-1);
    tracep->declBus(c+140,"stall_flag_o", false,-1, 2,0);
    tracep->declQuad(c+125,"inst_addr_o", false,-1, 63,0);
    tracep->declBit(c+127,"ren_o", false,-1);
    tracep->declQuad(c+128,"raddr_o", false,-1, 63,0);
    tracep->declBit(c+130,"wen_o", false,-1);
    tracep->declQuad(c+131,"waddr_o", false,-1, 63,0);
    tracep->declQuad(c+133,"wdata_o", false,-1, 63,0);
    tracep->declBus(c+135,"wmask_o", false,-1, 7,0);
    tracep->declQuad(c+136,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+138,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+139,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+252,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+253,"flush_flag_i", false,-1);
    tracep->declBit(c+253,"stall_flag_i", false,-1);
    tracep->declQuad(c+254,"set_data", false,-1, 63,0);
    tracep->declQuad(c+92,"data_i", false,-1, 63,0);
    tracep->declQuad(c+125,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff10 ");
    tracep->declBus(c+256,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+253,"flush_flag_i", false,-1);
    tracep->declBit(c+253,"stall_flag_i", false,-1);
    tracep->declBus(c+253,"set_data", false,-1, 0,0);
    tracep->declBus(c+105,"data_i", false,-1, 0,0);
    tracep->declBus(c+139,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff11 ");
    tracep->declBus(c+257,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+253,"flush_flag_i", false,-1);
    tracep->declBit(c+253,"stall_flag_i", false,-1);
    tracep->declBus(c+258,"set_data", false,-1, 2,0);
    tracep->declBus(c+115,"data_i", false,-1, 2,0);
    tracep->declBus(c+140,"data_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+256,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+253,"flush_flag_i", false,-1);
    tracep->declBit(c+253,"stall_flag_i", false,-1);
    tracep->declBus(c+253,"set_data", false,-1, 0,0);
    tracep->declBus(c+249,"data_i", false,-1, 0,0);
    tracep->declBus(c+127,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+252,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+253,"flush_flag_i", false,-1);
    tracep->declBit(c+253,"stall_flag_i", false,-1);
    tracep->declQuad(c+254,"set_data", false,-1, 63,0);
    tracep->declQuad(c+250,"data_i", false,-1, 63,0);
    tracep->declQuad(c+128,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+256,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+253,"flush_flag_i", false,-1);
    tracep->declBit(c+253,"stall_flag_i", false,-1);
    tracep->declBus(c+253,"set_data", false,-1, 0,0);
    tracep->declBus(c+110,"data_i", false,-1, 0,0);
    tracep->declBus(c+130,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+252,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+253,"flush_flag_i", false,-1);
    tracep->declBit(c+253,"stall_flag_i", false,-1);
    tracep->declQuad(c+254,"set_data", false,-1, 63,0);
    tracep->declQuad(c+106,"data_i", false,-1, 63,0);
    tracep->declQuad(c+131,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+252,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+253,"flush_flag_i", false,-1);
    tracep->declBit(c+253,"stall_flag_i", false,-1);
    tracep->declQuad(c+254,"set_data", false,-1, 63,0);
    tracep->declQuad(c+108,"data_i", false,-1, 63,0);
    tracep->declQuad(c+133,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+259,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+253,"flush_flag_i", false,-1);
    tracep->declBit(c+253,"stall_flag_i", false,-1);
    tracep->declBus(c+260,"set_data", false,-1, 7,0);
    tracep->declBus(c+111,"data_i", false,-1, 7,0);
    tracep->declBus(c+135,"data_o", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+252,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+253,"flush_flag_i", false,-1);
    tracep->declBit(c+253,"stall_flag_i", false,-1);
    tracep->declQuad(c+254,"set_data", false,-1, 63,0);
    tracep->declQuad(c+247,"data_i", false,-1, 63,0);
    tracep->declQuad(c+136,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff9 ");
    tracep->declBus(c+261,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+253,"flush_flag_i", false,-1);
    tracep->declBit(c+253,"stall_flag_i", false,-1);
    tracep->declBus(c+262,"set_data", false,-1, 4,0);
    tracep->declBus(c+104,"data_i", false,-1, 4,0);
    tracep->declBus(c+138,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_ex_inst ");
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+123,"flush_flag_i", false,-1);
    tracep->declBit(c+124,"stall_flag_i", false,-1);
    tracep->declBus(c+84,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+82,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+1,"op1_i", false,-1, 63,0);
    tracep->declQuad(c+3,"op2_i", false,-1, 63,0);
    tracep->declBus(c+87,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+88,"reg_wen_i", false,-1);
    tracep->declQuad(c+5,"base_addr_i", false,-1, 63,0);
    tracep->declQuad(c+89,"offset_addr_i", false,-1, 63,0);
    tracep->declBus(c+91,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+92,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+94,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+96,"op2_o", false,-1, 63,0);
    tracep->declBus(c+98,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+99,"reg_wen_o", false,-1);
    tracep->declQuad(c+100,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+102,"offset_addr_o", false,-1, 63,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+263,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+123,"flush_flag_i", false,-1);
    tracep->declBit(c+124,"stall_flag_i", false,-1);
    tracep->declBus(c+264,"set_data", false,-1, 31,0);
    tracep->declBus(c+84,"data_i", false,-1, 31,0);
    tracep->declBus(c+91,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+252,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+123,"flush_flag_i", false,-1);
    tracep->declBit(c+124,"stall_flag_i", false,-1);
    tracep->declQuad(c+254,"set_data", false,-1, 63,0);
    tracep->declQuad(c+82,"data_i", false,-1, 63,0);
    tracep->declQuad(c+92,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+252,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+123,"flush_flag_i", false,-1);
    tracep->declBit(c+124,"stall_flag_i", false,-1);
    tracep->declQuad(c+254,"set_data", false,-1, 63,0);
    tracep->declQuad(c+1,"data_i", false,-1, 63,0);
    tracep->declQuad(c+94,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff4 ");
    tracep->declBus(c+252,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+123,"flush_flag_i", false,-1);
    tracep->declBit(c+124,"stall_flag_i", false,-1);
    tracep->declQuad(c+254,"set_data", false,-1, 63,0);
    tracep->declQuad(c+3,"data_i", false,-1, 63,0);
    tracep->declQuad(c+96,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff5 ");
    tracep->declBus(c+261,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+123,"flush_flag_i", false,-1);
    tracep->declBit(c+124,"stall_flag_i", false,-1);
    tracep->declBus(c+262,"set_data", false,-1, 4,0);
    tracep->declBus(c+87,"data_i", false,-1, 4,0);
    tracep->declBus(c+98,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff6 ");
    tracep->declBus(c+256,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+123,"flush_flag_i", false,-1);
    tracep->declBit(c+124,"stall_flag_i", false,-1);
    tracep->declBus(c+253,"set_data", false,-1, 0,0);
    tracep->declBus(c+88,"data_i", false,-1, 0,0);
    tracep->declBus(c+99,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff7 ");
    tracep->declBus(c+252,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+123,"flush_flag_i", false,-1);
    tracep->declBit(c+124,"stall_flag_i", false,-1);
    tracep->declQuad(c+254,"set_data", false,-1, 63,0);
    tracep->declQuad(c+5,"data_i", false,-1, 63,0);
    tracep->declQuad(c+100,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff8 ");
    tracep->declBus(c+252,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+123,"flush_flag_i", false,-1);
    tracep->declBit(c+124,"stall_flag_i", false,-1);
    tracep->declQuad(c+254,"set_data", false,-1, 63,0);
    tracep->declQuad(c+89,"data_i", false,-1, 63,0);
    tracep->declQuad(c+102,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_inst ");
    tracep->declBus(c+84,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+82,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+7,"rs1_data_i", false,-1, 63,0);
    tracep->declQuad(c+9,"rs2_data_i", false,-1, 63,0);
    tracep->declBus(c+85,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+86,"rs2_addr_o", false,-1, 4,0);
    tracep->declBus(c+84,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+82,"inst_addr_o", false,-1, 63,0);
    tracep->declQuad(c+1,"op1_o", false,-1, 63,0);
    tracep->declQuad(c+3,"op2_o", false,-1, 63,0);
    tracep->declBus(c+87,"rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+88,"reg_wen", false,-1);
    tracep->declQuad(c+5,"base_addr_o", false,-1, 63,0);
    tracep->declQuad(c+89,"offset_addr_o", false,-1, 63,0);
    tracep->declBit(c+76,"mem_ren", false,-1);
    tracep->declQuad(c+230,"mem_raddr_o", false,-1, 63,0);
    tracep->declBus(c+208,"opcode", false,-1, 6,0);
    tracep->declBus(c+209,"rd", false,-1, 4,0);
    tracep->declBus(c+210,"func3", false,-1, 2,0);
    tracep->declBus(c+211,"rs1", false,-1, 4,0);
    tracep->declBus(c+212,"rs2", false,-1, 4,0);
    tracep->declBus(c+213,"func7", false,-1, 6,0);
    tracep->declBus(c+214,"imm", false,-1, 11,0);
    tracep->declBus(c+215,"shamt", false,-1, 5,0);
    tracep->declQuad(c+216,"immI", false,-1, 63,0);
    tracep->declQuad(c+218,"immU", false,-1, 63,0);
    tracep->declQuad(c+220,"immS", false,-1, 63,0);
    tracep->declQuad(c+222,"immB", false,-1, 63,0);
    tracep->declQuad(c+224,"immJ", false,-1, 63,0);
    tracep->declQuad(c+226,"immL", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id_inst ");
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+121,"flush_flag_i", false,-1);
    tracep->declBit(c+122,"stall_flag_i", false,-1);
    tracep->declBus(c+81,"inst_i", false,-1, 31,0);
    tracep->declQuad(c+77,"inst_addr_i", false,-1, 63,0);
    tracep->declBus(c+84,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+82,"inst_addr_o", false,-1, 63,0);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+263,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+121,"flush_flag_i", false,-1);
    tracep->declBit(c+122,"stall_flag_i", false,-1);
    tracep->declBus(c+264,"set_data", false,-1, 31,0);
    tracep->declBus(c+81,"data_i", false,-1, 31,0);
    tracep->declBus(c+84,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+252,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+121,"flush_flag_i", false,-1);
    tracep->declBit(c+122,"stall_flag_i", false,-1);
    tracep->declQuad(c+254,"set_data", false,-1, 63,0);
    tracep->declQuad(c+77,"data_i", false,-1, 63,0);
    tracep->declQuad(c+82,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_fetch_inst ");
    tracep->declQuad(c+77,"pc_addr_i", false,-1, 63,0);
    tracep->declQuad(c+79,"rom_inst_i", false,-1, 63,0);
    tracep->declQuad(c+77,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+81,"inst_o", false,-1, 31,0);
    tracep->declQuad(c+79,"inst_get", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_inst ");
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declQuad(c+125,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+125,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+140,"stall_flag_i", false,-1, 2,0);
    tracep->declBit(c+127,"ren_i", false,-1);
    tracep->declBit(c+130,"wen_i", false,-1);
    tracep->declQuad(c+128,"raddr_i", false,-1, 63,0);
    tracep->declQuad(c+141,"rdata_o", false,-1, 63,0);
    tracep->declQuad(c+131,"waddr_i", false,-1, 63,0);
    tracep->declQuad(c+133,"wdata_i", false,-1, 63,0);
    tracep->declBus(c+135,"wmask_i", false,-1, 7,0);
    tracep->declQuad(c+136,"rd_wdata_i", false,-1, 63,0);
    tracep->declBus(c+138,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+139,"reg_wen_i", false,-1);
    tracep->declQuad(c+136,"rd_wdata_o", false,-1, 63,0);
    tracep->declBus(c+138,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+139,"reg_wen_o", false,-1);
    tracep->declBus(c+140,"stall_flag_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_wb_inst ");
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declQuad(c+125,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+143,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+138,"rd_waddr_i", false,-1, 4,0);
    tracep->declBit(c+139,"reg_wen_i", false,-1);
    tracep->declBus(c+145,"rd_waddr_o", false,-1, 4,0);
    tracep->declBit(c+146,"reg_wen_o", false,-1);
    tracep->pushNamePrefix("dff1 ");
    tracep->declBus(c+252,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+253,"flush_flag_i", false,-1);
    tracep->declBit(c+253,"stall_flag_i", false,-1);
    tracep->declQuad(c+254,"set_data", false,-1, 63,0);
    tracep->declQuad(c+125,"data_i", false,-1, 63,0);
    tracep->declQuad(c+143,"data_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff2 ");
    tracep->declBus(c+261,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+253,"flush_flag_i", false,-1);
    tracep->declBit(c+253,"stall_flag_i", false,-1);
    tracep->declBus(c+262,"set_data", false,-1, 4,0);
    tracep->declBus(c+138,"data_i", false,-1, 4,0);
    tracep->declBus(c+145,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dff3 ");
    tracep->declBus(c+256,"DW", false,-1, 31,0);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+253,"flush_flag_i", false,-1);
    tracep->declBit(c+253,"stall_flag_i", false,-1);
    tracep->declBus(c+253,"set_data", false,-1, 0,0);
    tracep->declBus(c+139,"data_i", false,-1, 0,0);
    tracep->declBus(c+146,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg_inst ");
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declQuad(c+112,"jump_addr_i", false,-1, 63,0);
    tracep->declBit(c+114,"jump_en_i", false,-1);
    tracep->declBit(c+119,"flush_en_i", false,-1);
    tracep->declBit(c+120,"stall_en_i", false,-1);
    tracep->declQuad(c+77,"pc_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_inst ");
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declBus(c+85,"rs1_raddr_i", false,-1, 4,0);
    tracep->declBus(c+86,"rs2_raddr_i", false,-1, 4,0);
    tracep->declQuad(c+7,"rs1_rdata_o", false,-1, 63,0);
    tracep->declQuad(c+9,"rs2_rdata_o", false,-1, 63,0);
    tracep->declBus(c+145,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+117,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+146,"reg_wen", false,-1);
    tracep->declQuad(c+143,"inst_addr_i", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+11+i*2,"regs", true,(i+0), 63,0);
    }
    tracep->declQuad(c+143,"pc_reg", false,-1, 63,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+75,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rom_inst ");
    tracep->declQuad(c+77,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+79,"inst_o", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_inst ");
    tracep->declBit(c+228,"clk", false,-1);
    tracep->declBit(c+229,"rst", false,-1);
    tracep->declQuad(c+143,"inst_addr_i", false,-1, 63,0);
    tracep->declQuad(c+143,"inst_addr_o", false,-1, 63,0);
    tracep->declBus(c+145,"reg_waddr_i", false,-1, 4,0);
    tracep->declQuad(c+117,"reg_wdata_i", false,-1, 63,0);
    tracep->declBit(c+146,"reg_wen_i", false,-1);
    tracep->declBus(c+145,"reg_waddr_o", false,-1, 4,0);
    tracep->declQuad(c+117,"reg_wdata_o", false,-1, 63,0);
    tracep->declBit(c+146,"reg_wen_o", false,-1);
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
    tracep->fullBit(oldp+76,((1U & (IData)(((3U == 
                                             (0x7fU 
                                              & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)) 
                                            & (0x7000U 
                                               != (0x7000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)))))));
    tracep->fullQData(oldp+77,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o),64);
    tracep->fullQData(oldp+79,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__rom_inst__DOT__rom_mem
                               [(0xfffU & (IData)((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
                                                   >> 2U)))]),64);
    tracep->fullIData(oldp+81,((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__rom_inst__DOT__rom_mem
                                       [(0xfffU & (IData)(
                                                          (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__pc_reg_pc_o 
                                                           >> 2U)))])),32);
    tracep->fullQData(oldp+82,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_addr_o),64);
    tracep->fullIData(oldp+84,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o),32);
    tracep->fullCData(oldp+85,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs1_addr_o),5);
    tracep->fullCData(oldp+86,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rs2_addr_o),5);
    tracep->fullCData(oldp+87,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_rd_addr_o),5);
    tracep->fullBit(oldp+88,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_reg_wen));
    tracep->fullQData(oldp+89,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_offset_addr_o),64);
    tracep->fullIData(oldp+91,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o),32);
    tracep->fullQData(oldp+92,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_addr_o),64);
    tracep->fullQData(oldp+94,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o),64);
    tracep->fullQData(oldp+96,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o),64);
    tracep->fullCData(oldp+98,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_rd_addr_o),5);
    tracep->fullBit(oldp+99,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_reg_wen));
    tracep->fullQData(oldp+100,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_base_addr_o),64);
    tracep->fullQData(oldp+102,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_offset_addr_o),64);
    tracep->fullCData(oldp+104,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_rd_waddr_o),5);
    tracep->fullBit(oldp+105,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_reg_wen_o));
    tracep->fullQData(oldp+106,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
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
    tracep->fullQData(oldp+108,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
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
    tracep->fullBit(oldp+110,((IData)((0x23U == (0x407fU 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)))));
    tracep->fullCData(oldp+111,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
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
    tracep->fullQData(oldp+112,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
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
    tracep->fullBit(oldp+114,((1U & (IData)(((0x60U 
                                              == (0x70U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)) 
                                             & ((8U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                 ? (IData)(
                                                           (7U 
                                                            == 
                                                            (7U 
                                                             & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)))
                                                 : 
                                                ((4U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                   >> 1U) 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                  : 
                                                 ((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                   >> 1U) 
                                                  & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                     & ((0x4000U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                         ? 
                                                        ((0x2000U 
                                                          & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                          ? 
                                                         ((0x1000U 
                                                           & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                           ? 
                                                          (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned))
                                                           : (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned))
                                                          : 
                                                         ((0x1000U 
                                                           & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                           ? 
                                                          (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed))
                                                           : (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed)))
                                                         : 
                                                        ((~ 
                                                          (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                                           >> 0xdU)) 
                                                         & ((0x1000U 
                                                             & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)
                                                             ? 
                                                            (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i))
                                                             : (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i)))))))))))));
    tracep->fullCData(oldp+115,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_stall_flag_o),3);
    tracep->fullCData(oldp+116,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_flush_flag_o),3);
    tracep->fullQData(oldp+117,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_wb_rd_wdata_o),64);
    tracep->fullBit(oldp+119,((1U & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_flush_flag_o) 
                                     >> 2U))));
    tracep->fullBit(oldp+120,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_pc_stall_en_o));
    tracep->fullBit(oldp+121,((1U & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_flush_flag_o) 
                                     >> 1U))));
    tracep->fullBit(oldp+122,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_if_id_stall_en_o));
    tracep->fullBit(oldp+123,((1U & (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_flush_flag_o))));
    tracep->fullBit(oldp+124,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ctrl_id_ex_stall_en_o));
    tracep->fullQData(oldp+125,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_inst_addr_o),64);
    tracep->fullBit(oldp+127,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_ren_o));
    tracep->fullQData(oldp+128,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_raddr_o),64);
    tracep->fullBit(oldp+130,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wen_o));
    tracep->fullQData(oldp+131,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_waddr_o),64);
    tracep->fullQData(oldp+133,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wdata_o),64);
    tracep->fullCData(oldp+135,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_wmask_o),8);
    tracep->fullQData(oldp+136,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_rd_wdata_o),64);
    tracep->fullCData(oldp+138,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_rd_waddr_o),5);
    tracep->fullBit(oldp+139,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_reg_wen_o));
    tracep->fullCData(oldp+140,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_mem_mem_stall_flag_o),3);
    tracep->fullQData(oldp+141,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_ex_rdata_o),64);
    tracep->fullQData(oldp+143,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_inst_addr_o),64);
    tracep->fullCData(oldp+145,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_wb_rd_waddr_o),5);
    tracep->fullBit(oldp+146,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__mem_wb_wb_reg_wen_o));
    tracep->fullCData(oldp+147,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o)),7);
    tracep->fullCData(oldp+148,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+149,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+150,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+151,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+152,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_inst_o 
                                 >> 0x19U)),7);
    tracep->fullQData(oldp+153,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_add_op2_i),64);
    tracep->fullQData(oldp+155,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i),64);
    tracep->fullQData(oldp+157,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i),64);
    tracep->fullQData(oldp+159,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i),64);
    tracep->fullQData(oldp+161,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i),64);
    tracep->fullQData(oldp+163,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i),64);
    tracep->fullQData(oldp+165,(VL_MODDIVS_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+167,(VL_MODDIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+169,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i),64);
    tracep->fullQData(oldp+171,(VL_DIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)),64);
    tracep->fullQData(oldp+173,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned),64);
    tracep->fullQData(oldp+175,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned),64);
    tracep->fullQData(oldp+177,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed),64);
    tracep->fullQData(oldp+179,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset),64);
    tracep->fullBit(oldp+181,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i));
    tracep->fullBit(oldp+182,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed));
    tracep->fullBit(oldp+183,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned));
    tracep->fullQData(oldp+184,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_add),64);
    tracep->fullQData(oldp+186,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i)))),64);
    tracep->fullQData(oldp+188,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i)))),64);
    tracep->fullQData(oldp+190,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_and_op2_i)))),64);
    tracep->fullQData(oldp+192,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i)))),64);
    tracep->fullQData(oldp+194,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)))),64);
    tracep->fullQData(oldp+196,((((QData)((IData)((- (IData)(
                                                             (VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)) 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_ex_op2_o)))))),64);
    tracep->fullQData(oldp+198,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__op1_i_div_op2_i)))),64);
    tracep->fullQData(oldp+200,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned),64);
    tracep->fullQData(oldp+202,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned),64);
    tracep->fullQData(oldp+204,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__compress_shift_right_signed),64);
    tracep->fullQData(oldp+206,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset 
                                                                         >> 0x1fU))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset)))),64);
    tracep->fullCData(oldp+208,((0x7fU & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)),7);
    tracep->fullCData(oldp+209,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 7U))),5);
    tracep->fullCData(oldp+210,((7U & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+211,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+212,((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+213,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                 >> 0x19U)),7);
    tracep->fullSData(oldp+214,((vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                 >> 0x14U)),12);
    tracep->fullCData(oldp+215,((0x3fU & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                          >> 0x14U))),6);
    tracep->fullQData(oldp+216,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immI),64);
    tracep->fullQData(oldp+218,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immU),64);
    tracep->fullQData(oldp+220,((((- (QData)((IData)(
                                                     (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o 
                                                                    >> 7U))))))),64);
    tracep->fullQData(oldp+222,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immB),64);
    tracep->fullQData(oldp+224,((((- (QData)((IData)(
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
    tracep->fullQData(oldp+226,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__id_inst__DOT__immL),64);
    tracep->fullBit(oldp+228,(vlSelf->clk));
    tracep->fullBit(oldp+229,(vlSelf->rst));
    tracep->fullQData(oldp+230,(((0x40U & vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__if_id_inst_o)
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
    tracep->fullBit(oldp+232,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_wen));
    tracep->fullQData(oldp+233,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_waddr_o),64);
    tracep->fullQData(oldp+235,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_wdata_o),64);
    tracep->fullCData(oldp+237,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_wmask),8);
    tracep->fullBit(oldp+238,(vlSelf->tb__DOT__soc_inst__DOT__riscv_ram_flush_flag_o));
    tracep->fullQData(oldp+239,(vlSelf->tb__DOT__soc_inst__DOT__ram_riscv_rdata_o),64);
    tracep->fullQData(oldp+241,(vlSelf->tb__DOT__soc_inst__DOT__riscv_rom_raddr_o),64);
    tracep->fullQData(oldp+243,(vlSelf->tb__DOT__soc_inst__DOT__rom_riscv_rdata_o),64);
    tracep->fullCData(oldp+245,(vlSelf->tb__DOT__soc_inst__DOT__riscv_axi_sid_o),4);
    tracep->fullBit(oldp+246,(vlSelf->tb__DOT__soc_inst__DOT__riscv_axi_rwvalid_o));
    tracep->fullQData(oldp+247,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_rd_wdata_o),64);
    tracep->fullBit(oldp+249,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_ren_o));
    tracep->fullQData(oldp+250,(vlSelf->tb__DOT__soc_inst__DOT__riscv_inst__DOT__ex_ex_mem_raddr_o),64);
    tracep->fullIData(oldp+252,(0x40U),32);
    tracep->fullBit(oldp+253,(0U));
    tracep->fullQData(oldp+254,(0ULL),64);
    tracep->fullIData(oldp+256,(1U),32);
    tracep->fullIData(oldp+257,(3U),32);
    tracep->fullCData(oldp+258,(0U),3);
    tracep->fullIData(oldp+259,(8U),32);
    tracep->fullCData(oldp+260,(0U),8);
    tracep->fullIData(oldp+261,(5U),32);
    tracep->fullCData(oldp+262,(0U),5);
    tracep->fullIData(oldp+263,(0x20U),32);
    tracep->fullIData(oldp+264,(0x13U),32);
}
