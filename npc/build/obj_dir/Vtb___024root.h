// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"

class Vtb__Syms;
class Vtb___024unit;

VL_MODULE(Vtb___024root) {
  public:
    // CELLS
    Vtb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*2:0*/ tb__DOT__soc_inst__DOT__axi_core_stall_flag_o;
        CData/*2:0*/ tb__DOT__soc_inst__DOT__axi_core_flush_flag_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__ram_axi_bvalid_o;
        CData/*4:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o;
        CData/*4:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o;
        CData/*4:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_en_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_wen_o;
        CData/*4:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_reg_wen;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_wen_o;
        CData/*4:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_ctrl_typej_jump_en_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isload_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isstore_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_flush_en_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_stall_en_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_flush_en_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_stall_en_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_clint_flush_en_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_clint_stall_en_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_flush_en_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_stall_en_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o;
        CData/*7:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o;
        CData/*4:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o;
        CData/*2:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_stall_flag_o;
        CData/*2:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_flush_flag_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isload_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isstore_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_ren_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_wen_o;
        CData/*4:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__rename_inst__DOT__rs1_id_ex_hit;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__rename_inst__DOT__rs2_id_ex_hit;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_data_hit;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_inst;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__store_inst;
        CData/*6:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__func7;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__ren_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__wen_o;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__busy_end;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raready;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waready;
        CData/*0:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdready;
    };
    struct {
        CData/*0:0*/ __Vclklast__TOP__clk;
        SData/*11:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o;
        SData/*11:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_waddr_o;
        SData/*11:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_waddr_o;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_clint_inst_o;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_clint_clint_inst_o;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_div_tmp;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_div_unsigned_tmp;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_u_tmp;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_u_tmp;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_s_tmp;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr;
        IData/*31:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_axi_inst_addr_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__axi_ram_inst_addr_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__ram_axi_rdata_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__ram_core_inst_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_offset_addr_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_csr_wdata_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_clint_inst_addr_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_clint_clint_inst_addr_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_addr_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_mepc_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_mcause_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_mstatus_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__csr_id_rdata_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mtvec_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mstatus_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_addr_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_base_addr_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_offset_addr_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_wdata_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_wdata_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_inst_addr_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_wdata_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_inst_addr_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immU;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immB;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__Zimm;
    };
    struct {
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mstatus;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mtvec;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mepc;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mcause;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_add;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_signed;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__device_rdata_tmp;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__device_rdata;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__wmask_o;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata;
        QData/*63:0*/ tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask;
        QData/*63:0*/ __Vtask_pmem_read__4__rdata;
        VlUnpacked<QData/*63:0*/, 32> tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs;
        VlUnpacked<QData/*63:0*/, 4> tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs;
        VlUnpacked<QData/*63:0*/, 1048576> tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtb___024root(const char* name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
