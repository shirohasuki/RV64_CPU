// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb__Syms.h"
#include "Vtb___024root.h"

void Vtb___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);
void Vtb___024unit____Vdpiimwrap_get_csrs__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 4> &csrs);
extern const VlUnpacked<QData/*63:0*/, 512> Vtb__ConstPool__TABLE_h5ca10654_0;
void Vtb___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, QData/*63:0*/ mask);
void Vtb___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

VL_INLINE_OPT void Vtb___024root___sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx3;
    IData/*31:0*/ __Vdly__tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o;
    QData/*63:0*/ __Vdly__tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
    CData/*0:0*/ __Vdlyvset__tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs__v0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs__v1;
    CData/*0:0*/ __Vdly__tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o;
    IData/*31:0*/ __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr;
    QData/*63:0*/ __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata;
    CData/*0:0*/ __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid;
    CData/*0:0*/ __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid;
    IData/*19:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v0;
    CData/*5:0*/ __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v0;
    QData/*55:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v0;
    IData/*19:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v1;
    CData/*5:0*/ __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v1;
    CData/*7:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v1;
    IData/*19:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v2;
    CData/*5:0*/ __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v2;
    QData/*47:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v2;
    CData/*0:0*/ __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v2;
    IData/*19:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v3;
    CData/*5:0*/ __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v3;
    SData/*15:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v3;
    IData/*19:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v4;
    CData/*5:0*/ __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v4;
    QData/*39:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v4;
    CData/*0:0*/ __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v4;
    IData/*19:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v5;
    CData/*5:0*/ __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v5;
    IData/*23:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v5;
    IData/*19:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v6;
    CData/*5:0*/ __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v6;
    IData/*31:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v6;
    CData/*0:0*/ __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v6;
    IData/*19:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v7;
    CData/*5:0*/ __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v7;
    IData/*31:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v7;
    IData/*19:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v8;
    CData/*5:0*/ __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v8;
    IData/*23:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v8;
    CData/*0:0*/ __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v8;
    IData/*19:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v9;
    CData/*5:0*/ __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v9;
    QData/*39:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v9;
    IData/*19:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v10;
    CData/*5:0*/ __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v10;
    SData/*15:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v10;
    CData/*0:0*/ __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v10;
    IData/*19:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v11;
    CData/*5:0*/ __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v11;
    QData/*47:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v11;
    IData/*19:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v12;
    CData/*5:0*/ __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v12;
    CData/*7:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v12;
    CData/*0:0*/ __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v12;
    IData/*19:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v13;
    CData/*5:0*/ __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v13;
    QData/*55:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v13;
    IData/*19:0*/ __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v14;
    QData/*63:0*/ __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v14;
    CData/*0:0*/ __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v14;
    SData/*31:0*/ __Vtemp_he6c6a8ab__0;
    QData/*63:0*/ __Vtemp_hd8320767__0;
    QData/*63:0*/ __Vtemp_hbee3ed94__0;
    // Body
    __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid 
        = vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid;
    __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid 
        = vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid;
    __Vdly__tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o 
        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
    __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata 
        = vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata;
    __Vdly__tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o 
        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o;
    __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr 
        = vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr;
    __Vdly__tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o;
    __Vdlyvset__tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs__v0 = 0U;
    __Vdlyvset__tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs__v1 = 0U;
    Vtb___024unit____Vdpiimwrap_get_pc_TOP____024unit(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_addr_o);
    Vtb___024unit____Vdpiimwrap_get_csrs__Vdpioc2_TOP____024unit(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs);
    __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v0 = 0U;
    __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v2 = 0U;
    __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v4 = 0U;
    __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v6 = 0U;
    __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v8 = 0U;
    __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v10 = 0U;
    __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v12 = 0U;
    __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v14 = 0U;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_inst_addr_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_flush_en_o)))
            ? 0ULL : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_stall_en_o)
                       ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_inst_addr_o
                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_inst_addr_o));
    __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid 
        = ((~ ((~ (IData)(vlSelf->rst)) | ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid) 
                                           & (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waready)))) 
           & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_wen_o) 
              | (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid)));
    __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid 
        = ((~ ((~ (IData)(vlSelf->rst)) | ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid) 
                                           & (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raready)))) 
           & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_ren_o) 
              | (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_reg_wen 
        = ((~ ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o))) 
           & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o)
               ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_reg_wen)
               : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_inst_addr_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o)))
            ? 0ULL : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o)
                       ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_inst_addr_o
                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_addr_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_addr_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o)))
            ? 0ULL : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o)
                       ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_addr_o
                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o));
    __Vdly__tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_flush_en_o)))
            ? 0ULL : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_stall_en_o)
                       ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o
                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o));
    if ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o)))) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_base_addr_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_offset_addr_o = 0ULL;
    } else if (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_base_addr_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_base_addr_o;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_offset_addr_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_offset_addr_o;
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_base_addr_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_offset_addr_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_offset_addr_o;
    }
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy 
        = ((IData)(vlSelf->rst) & (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_ren_o) 
                                    | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_wen_o)) 
                                   | ((~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__busy_end)) 
                                      & (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_clint_clint_inst_addr_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_clint_flush_en_o)))
            ? 0ULL : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_clint_stall_en_o)
                       ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_clint_clint_inst_addr_o
                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isstore_o 
        = ((~ ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o))) 
           & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o)
               ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isstore_o)
               : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isstore_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_wdata_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o)))
            ? 0ULL : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o)
                       ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_wdata_o
                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isload_o 
        = ((~ ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o))) 
           & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o)
               ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isload_o)
               : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isload_o)));
    if (vlSelf->rst) {
        if (((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raready) 
             & (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid))) {
            vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__ren_o = 1U;
            vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                = vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr;
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__ren_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr = 0U;
        }
        __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata 
            = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_wen_o)
                ? (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o) 
                    & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface)))
                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o
                    : 0ULL) : vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata);
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__ren_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr = 0U;
        __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata = 0ULL;
    }
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o 
        = ((~ ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_flush_en_o))) 
           & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_stall_en_o)
               ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o)
               : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_flush_en_o)))
            ? 0U : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_stall_en_o)
                     ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)
                     : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)));
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready 
        = ((IData)(vlSelf->rst) & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid) 
                                   & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raready) 
                                      | (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_flush_en_o)))
            ? 0ULL : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_stall_en_o)
                       ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o 
        = ((~ ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o))) 
           & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o)
               ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)
               : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o)))
            ? 0U : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o)
                     ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)
                     : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_wen_o 
        = (1U & ((~ ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o))) 
                 & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o)
                     ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_wen_o)
                     : (IData)(((0x73U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) 
                                & ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                    ? (IData)((0U != 
                                               (0x3000U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)))
                                    : (IData)((0U != 
                                               (0x3000U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)))))))));
    __Vtemp_he6c6a8ab__0 = ((1U & ((~ (IData)(vlSelf->rst)) 
                                   | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o)))
                             ? 0U : (0xfffU & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o)
                                                ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_waddr_o)
                                                : (
                                                   (0x40U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((0x20U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                     ? 
                                                    ((0x10U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                      ? 
                                                     ((8U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                          ? 
                                                         ((0x4000U 
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
                                                             : 0U)))
                                                          : 0U)
                                                         : 0U)))
                                                      : 0U)
                                                     : 0U)
                                                    : 0U))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_waddr_o 
        = __Vtemp_he6c6a8ab__0;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_clint_clint_inst_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_clint_flush_en_o)))
            ? 0x13U : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_clint_stall_en_o)
                        ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_clint_clint_inst_o
                        : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o)))
            ? 0U : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o)
                     ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o)
                     : ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                         ? 0U : ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                  ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                      ? 0U : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                               ? 0U
                                               : ((4U 
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
                                  : 0U))));
    __Vdly__tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o 
        = (1U & ((~ ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o))) 
                 & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o)
                     ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o)
                     : (IData)((0x23U == (0x407fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o))))));
    __Vtemp_hd8320767__0 = ((IData)(vlSelf->rst) ? 
                            (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_ctrl_typej_jump_en_o) 
                              | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_en_o))
                              ? (((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
                                 | vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_addr_o)
                              : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_stall_en_o)
                                  ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o
                                  : (4ULL + vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o)))
                             : 0x80000000ULL);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o 
        = __Vtemp_hd8320767__0;
    if (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_wen_o) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mcause 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_mcause_o;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mepc 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_mepc_o;
    }
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o)))
            ? 0x13U : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o)
                        ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o
                        : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o));
    __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr 
        = ((IData)(vlSelf->rst) ? ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_ren_o)
                                    ? (IData)((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o) 
                                                & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface)))
                                                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o
                                                : 0ULL))
                                    : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_wen_o)
                                        ? (IData)((
                                                   ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o) 
                                                    & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface)))
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o
                                                    : 0ULL))
                                        : vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr))
            : 0U);
    if (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_wen_o) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mstatus 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_mstatus_o;
    }
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o)))
            ? 0U : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o)
                     ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                     : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o 
        = (1U & ((~ ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o))) 
                 & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o)
                     ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o)
                     : (IData)(((3U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                                & (0x7000U != (0x7000U 
                                               & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))))));
    __Vdly__tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_flush_en_o)))
            ? 0x13U : ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_stall_en_o)
                        ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o
                        : (IData)(vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o)));
    if (vlSelf->rst) {
        if ((1U & (IData)(((0x73U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                           & ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                               ? (IData)((0U != (0x3000U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))
                               : (IData)((0U != (0x3000U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))))))) {
            if ((0x300U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_waddr_o))) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mstatus 
                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_wdata_o;
            } else if ((0x305U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_waddr_o))) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mtvec 
                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_wdata_o;
            } else if ((0x341U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_waddr_o))) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mepc 
                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_wdata_o;
            } else if (VL_LIKELY((0x342U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_waddr_o)))) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mcause 
                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_wdata_o;
            } else {
                VL_WRITEF("Visit Unknowed CSRs!\n");
            }
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdlyvset__tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs__v0 = 1U;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mstatus = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mtvec = 0xa00001800ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mepc = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mcause = 0ULL;
        __Vdlyvset__tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs__v1 = 1U;
    }
    if ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o)))) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o = 0ULL;
        __Vtemp_hbee3ed94__0 = 0ULL;
    } else if (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o;
        __Vtemp_hbee3ed94__0 = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o;
    } else if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o = 0ULL;
        __Vtemp_hbee3ed94__0 = 0ULL;
    } else if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o = 0ULL;
            __Vtemp_hbee3ed94__0 = 0ULL;
        } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o = 0ULL;
            __Vtemp_hbee3ed94__0 = 0ULL;
        } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o = 0ULL;
            __Vtemp_hbee3ed94__0 = 0ULL;
        } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
            if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
                if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o = 0ULL;
                    __Vtemp_hbee3ed94__0 = 0ULL;
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o = 0ULL;
                    __Vtemp_hbee3ed94__0 = ((0x2000U 
                                             & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                             ? ((0x1000U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                 ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o
                                                 : (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)))
                                             : ((0x1000U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o))))
                                                 : (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o))))));
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o = 0ULL;
                __Vtemp_hbee3ed94__0 = 0ULL;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o = 0ULL;
            __Vtemp_hbee3ed94__0 = 0ULL;
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o 
            = ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? 0ULL : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                           ? 0ULL : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                      ? 0ULL : ((2U 
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
                                                 : 0ULL))));
        __Vtemp_hbee3ed94__0 = 0ULL;
    }
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o 
        = __Vtemp_hbee3ed94__0;
    if ((1U & ((~ (IData)(vlSelf->rst)) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o)))) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o = 0x13U;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o = 0ULL;
    } else if (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o;
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o;
    }
    if (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wen_o) {
        if (VL_UNLIKELY(((0x80000000U > vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr) 
                         & (0U != vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr)))) {
            VL_WRITEF("[ram]invalid write\n[ram]waddr:%x  wstart:%b, wdata:%x\n",
                      32,vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr,
                      3,(7U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr),
                      64,vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata);
        }
        if ((4U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr)) {
            if ((2U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr)) {
                    __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v0 
                        = (0xffffffffffffffULL & ((vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata 
                                                   >> 8U) 
                                                  | (((0xffffffffffffffULL 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                       [
                                                       (0xfffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                            >> 3U)))]) 
                                                      | ((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                                                [
                                                                                (0xfffffU 
                                                                                & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                                                >> 3U))] 
                                                                                >> 0x38U))))) 
                                                         >> 8U)) 
                                                     & ((~ vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask) 
                                                        >> 8U))));
                    __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v0 = 1U;
                    __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v0 = 0U;
                    __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v0 
                        = (0xfffffU & ((IData)(1U) 
                                       + (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                          >> 3U)));
                    __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v1 
                        = (0xffU & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata) 
                                    | ((IData)((vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                [(0xfffffU 
                                                  & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                     >> 3U))] 
                                                >> 0x38U)) 
                                       & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask)))));
                    __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v1 = 0x38U;
                    __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v1 
                        = (0xfffffU & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                       >> 3U));
                } else {
                    __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v2 
                        = (0xffffffffffffULL & ((vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata 
                                                 >> 0x10U) 
                                                | (((0xffffffffffffULL 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                     [
                                                     (0xfffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                          >> 3U)))]) 
                                                    | ((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(
                                                                                (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                                                [
                                                                                (0xfffffU 
                                                                                & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                                                >> 3U))] 
                                                                                >> 0x30U))))) 
                                                       >> 0x10U)) 
                                                   & ((~ vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask) 
                                                      >> 0x10U))));
                    __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v2 = 1U;
                    __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v2 = 0U;
                    __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v2 
                        = (0xfffffU & ((IData)(1U) 
                                       + (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                          >> 3U)));
                    __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v3 
                        = (0xffffU & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata) 
                                      | ((IData)((vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                  [
                                                  (0xfffffU 
                                                   & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                      >> 3U))] 
                                                  >> 0x30U)) 
                                         & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask)))));
                    __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v3 = 0x30U;
                    __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v3 
                        = (0xfffffU & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                       >> 3U));
                }
            } else if ((1U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr)) {
                __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v4 
                    = (0xffffffffffULL & ((vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata 
                                           >> 0x18U) 
                                          | (((0xffffffffffULL 
                                               & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                               [(0xfffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                     >> 3U)))]) 
                                              | ((QData)((IData)(
                                                                 (0xffffffU 
                                                                  & (IData)(
                                                                            (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                                             [
                                                                             (0xfffffU 
                                                                              & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                                                >> 3U))] 
                                                                             >> 0x28U))))) 
                                                 >> 0x18U)) 
                                             & ((~ vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask) 
                                                >> 0x18U))));
                __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v4 = 1U;
                __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v4 = 0U;
                __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v4 
                    = (0xfffffU & ((IData)(1U) + (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                  >> 3U)));
                __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v5 
                    = (0xffffffU & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata) 
                                    | ((IData)((vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                [(0xfffffU 
                                                  & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                     >> 3U))] 
                                                >> 0x28U)) 
                                       & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask)))));
                __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v5 = 0x28U;
                __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v5 
                    = (0xfffffU & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                   >> 3U));
            } else {
                __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v6 
                    = (IData)(((vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata 
                                >> 0x20U) | (((0xffffffffULL 
                                               & (QData)((IData)(
                                                                 vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                                 [
                                                                 (0xfffffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                                      >> 3U)))]))) 
                                              | ((QData)((IData)(
                                                                 (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                                  [
                                                                  (0xfffffU 
                                                                   & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                                      >> 3U))] 
                                                                  >> 0x20U))) 
                                                 >> 0x20U)) 
                                             & ((~ vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask) 
                                                >> 0x20U))));
                __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v6 = 1U;
                __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v6 = 0U;
                __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v6 
                    = (0xfffffU & ((IData)(1U) + (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                  >> 3U)));
                __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v7 
                    = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata) 
                       | ((IData)((vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                   [(0xfffffU & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                 >> 3U))] 
                                   >> 0x20U)) & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask))));
                __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v7 = 0x20U;
                __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v7 
                    = (0xfffffU & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                   >> 3U));
            }
        } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr)) {
            if ((1U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr)) {
                __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v8 
                    = (0xffffffU & (IData)(((vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata 
                                             >> 0x28U) 
                                            | (0xffffffULL 
                                               & ((QData)((IData)(
                                                                  (0xffffffU 
                                                                   & (IData)(
                                                                             vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                                             [
                                                                             (0xfffffU 
                                                                              & ((IData)(1U) 
                                                                                + 
                                                                                (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                                                >> 3U)))])))) 
                                                  & ((~ vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask) 
                                                     >> 0x28U))))));
                __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v8 = 1U;
                __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v8 = 0U;
                __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v8 
                    = (0xfffffU & ((IData)(1U) + (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                  >> 3U)));
                __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v9 
                    = (0xffffffffffULL & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata 
                                          | ((vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                              [(0xfffffU 
                                                & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                   >> 3U))] 
                                              >> 0x18U) 
                                             & (~ vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask))));
                __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v9 = 0x18U;
                __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v9 
                    = (0xfffffU & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                   >> 3U));
            } else {
                __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v10 
                    = (0xffffU & (IData)(((vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata 
                                           >> 0x30U) 
                                          | (0xffffULL 
                                             & ((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                                           [
                                                                           (0xfffffU 
                                                                            & ((IData)(1U) 
                                                                               + 
                                                                               (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                                                >> 3U)))])))) 
                                                & ((~ vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask) 
                                                   >> 0x30U))))));
                __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v10 = 1U;
                __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v10 = 0U;
                __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v10 
                    = (0xfffffU & ((IData)(1U) + (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                  >> 3U)));
                __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v11 
                    = (0xffffffffffffULL & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata 
                                            | ((vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                [(0xfffffU 
                                                  & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                     >> 3U))] 
                                                >> 0x10U) 
                                               & (~ vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask))));
                __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v11 = 0x10U;
                __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v11 
                    = (0xfffffU & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                   >> 3U));
            }
        } else if ((1U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr)) {
            __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v12 
                = (0xffU & (IData)(((vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata 
                                     >> 0x38U) | (0xffULL 
                                                  & ((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                                                [
                                                                                (0xfffffU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                                                >> 3U)))])))) 
                                                     & ((~ vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask) 
                                                        >> 0x38U))))));
            __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v12 = 1U;
            __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v12 = 0U;
            __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v12 
                = (0xfffffU & ((IData)(1U) + (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                              >> 3U)));
            __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v13 
                = (0xffffffffffffffULL & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata 
                                          | ((vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                              [(0xfffffU 
                                                & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                                   >> 3U))] 
                                              >> 8U) 
                                             & (~ vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask))));
            __Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v13 = 8U;
            __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v13 
                = (0xfffffU & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                               >> 3U));
        } else {
            __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v14 
                = (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata 
                   | (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                      [(0xfffffU & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                                    >> 3U))] & (~ vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask)));
            __Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v14 = 1U;
            __Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v14 
                = (0xfffffU & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                               >> 3U));
        }
        vlSelf->tb__DOT__soc_inst__DOT__ram_axi_bvalid_o = 1U;
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__ram_axi_bvalid_o = 0U;
    }
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o 
        = __Vdly__tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid 
        = __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_ravalid;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o 
        = __Vdly__tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o;
    if (__Vdlyvset__tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs__v0) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[0U] = 0ULL;
    }
    if (__Vdlyvset__tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs__v1) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[1U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[2U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[3U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[0U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[1U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[2U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[3U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[0U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[1U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[2U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[3U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[0U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[1U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[2U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[3U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[0U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[1U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[2U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[3U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[0U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[1U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[2U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[3U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[0U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[1U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[2U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[3U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[0U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[1U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[2U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[3U] = 0ULL;
    }
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
        = __Vdly__tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o;
    if (__Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v0) {
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v0] 
            = (((~ (0xffffffffffffffULL << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v0))) 
                & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                [__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v0]) 
               | (__Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v0 
                  << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v0)));
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v1] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v1))) 
                & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                [__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v1]) 
               | ((QData)((IData)(__Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v1)) 
                  << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v1)));
    }
    if (__Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v2) {
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v2] 
            = (((~ (0xffffffffffffULL << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v2))) 
                & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                [__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v2]) 
               | (__Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v2 
                  << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v2)));
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v3] 
            = (((~ (0xffffULL << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v3))) 
                & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                [__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v3]) 
               | ((QData)((IData)(__Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v3)) 
                  << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v3)));
    }
    if (__Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v4) {
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v4] 
            = (((~ (0xffffffffffULL << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v4))) 
                & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                [__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v4]) 
               | (__Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v4 
                  << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v4)));
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v5] 
            = (((~ (0xffffffULL << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v5))) 
                & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                [__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v5]) 
               | ((QData)((IData)(__Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v5)) 
                  << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v5)));
    }
    if (__Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v6) {
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v6] 
            = (((~ (0xffffffffULL << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v6))) 
                & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                [__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v6]) 
               | ((QData)((IData)(__Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v6)) 
                  << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v6)));
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v7] 
            = (((~ (0xffffffffULL << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v7))) 
                & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                [__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v7]) 
               | ((QData)((IData)(__Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v7)) 
                  << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v7)));
    }
    if (__Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v8) {
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v8] 
            = (((~ (0xffffffULL << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v8))) 
                & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                [__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v8]) 
               | ((QData)((IData)(__Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v8)) 
                  << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v8)));
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v9] 
            = (((~ (0xffffffffffULL << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v9))) 
                & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                [__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v9]) 
               | (__Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v9 
                  << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v9)));
    }
    if (__Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v10) {
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v10] 
            = (((~ (0xffffULL << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v10))) 
                & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                [__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v10]) 
               | ((QData)((IData)(__Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v10)) 
                  << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v10)));
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v11] 
            = (((~ (0xffffffffffffULL << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v11))) 
                & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                [__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v11]) 
               | (__Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v11 
                  << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v11)));
    }
    if (__Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v12) {
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v12] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v12))) 
                & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                [__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v12]) 
               | ((QData)((IData)(__Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v12)) 
                  << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v12)));
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v13] 
            = (((~ (0xffffffffffffffULL << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v13))) 
                & vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                [__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v13]) 
               | (__Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v13 
                  << (IData)(__Vdlyvlsb__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v13)));
    }
    if (__Vdlyvset__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v14) {
        vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem[__Vdlyvdim0__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v14] 
            = __Vdlyvval__tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem__v14;
    }
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__base_addr_add_addr_offset 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_base_addr_o 
           + vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_offset_addr_o);
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raready 
        = vlSelf->rst;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_wen_o 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o) 
           & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_ram_ren_o 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o) 
           & (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[2U] 
        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mepc;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[3U] 
        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mcause;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[1U] 
        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mtvec;
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__csrs[0U] 
        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mstatus;
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o = 0U;
                } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o = 0U;
                } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            if ((1U & (~ (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                              >> 0xcU)))) {
                                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o = 0U;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                             >> 0xdU)))) {
                            if ((1U & (~ (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 0xcU)))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o = 0U;
                            }
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o 
                    = (0x1fU & ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                     ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                         ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                             ? (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 7U)
                                             : 0U) : 0U)
                                     : 0U) : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                               ? ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                    >> 7U)
                                                    : 0U)
                                                   : 0U)
                                               : 0U)));
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o = 0U;
        }
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen 
            = (1U & ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                      >> 5U) & ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? (IData)(((3U == 
                                             (0xfU 
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
                                                            & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o))))))
                                 : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                     ? (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)))
                                     : (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)))))));
    } else if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o 
                    = ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                        ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                     ? (0x1fU & ((0x4000U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                  ? 
                                                 (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                  >> 7U)
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 0U
                                                   : 
                                                  (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                   >> 7U))))
                                     : 0U) : 0U));
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen 
                    = (1U & (IData)(((3U == (7U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) 
                                     & (0x2000U != 
                                        (0x6000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)))));
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o 
                    = ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                        ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                            ? (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 7U)) : 0U)
                        : 0U);
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen 
                    = (IData)((3U == (3U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)));
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen = 1U;
                        } else if ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            if ((0U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o 
                                    = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 7U));
                            }
                            if ((1U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o 
                                    = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 7U));
                            }
                            if ((0U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen = 1U;
                            }
                            if ((1U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen = 1U;
                            }
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen = 1U;
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 7U));
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen = 1U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen = 0U;
        }
    } else if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o 
                = (0x1fU & ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                             ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                      ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                          ? ((0U == 
                                              (7U & 
                                               (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0xcU)))
                                              ? (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                 >> 7U)
                                              : (((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                       >> 0xcU))) 
                                                  | (5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                         >> 0xcU))))
                                                  ? 
                                                 (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                  >> 7U)
                                                  : 0U))
                                          : 0U) : 0U)));
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen 
                = (1U & (IData)(((3U == (7U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) 
                                 & ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                  >> 0xcU))) 
                                    | ((1U == (7U & 
                                               (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0xcU))) 
                                       | (5U == (7U 
                                                 & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                    >> 0xcU))))))));
        } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o 
                = (0x1fU & ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                             ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                    >> 7U) : 0U) : 0U));
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen 
                = (1U & ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                          >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o));
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o 
                = (0x1fU & ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                             ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                    >> 7U) : 0U) : 0U));
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen 
                = (1U & ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                          >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o));
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_rd_addr_o 
            = (0x1fU & ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                         ? 0U : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                  ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                           ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                               ? ((0x4000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                     ? 0U
                                                     : 
                                                    (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                     >> 7U))
                                                    : 
                                                   (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                    >> 7U))
                                                   : 
                                                  (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                   >> 7U))
                                               : 0U)
                                           : 0U))));
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_reg_wen 
            = (1U & (IData)(((3U == (0xfU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) 
                             & (0x7000U != (0x7000U 
                                            & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)))));
    }
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immB 
        = (((- (QData)((IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)(((0x800U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                         << 4U)) | 
                              ((0x7e0U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                          >> 0x14U)) 
                               | (0x1eU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                           >> 7U)))))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__Zimm 
        = (((- (QData)((IData)((1U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                      >> 0x13U))))) 
            << 5U) | (QData)((IData)((0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                               >> 0xfU)))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI 
        = (((- (QData)((IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                              >> 0x14U))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immU 
        = (((QData)((IData)((- (IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)((0xfffff000U 
                                         & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL 
        = (((- (QData)((IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                >> 0x1fU)))) << 0xcU) 
           | (QData)((IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                              >> 0x14U))));
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & (~ (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                                if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                                    if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o 
                                            = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                               >> 0x14U);
                                    } else if ((0x1000U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o 
                                            = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                               >> 0x14U);
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o 
                                        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                           >> 0x14U);
                                } else if ((0x1000U 
                                            & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o 
                                        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                           >> 0x14U);
                                }
                            }
                        }
                    }
                }
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                    = (0x1fU & ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? 0U : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                          ? 0U : ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                      ? 
                                                     (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                       ? 
                                                      (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                       >> 0xfU)
                                                       : 0U)))
                                                    : 0U)
                                                   : 0U))));
            } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                    = (0x1fU & 0U);
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                    = (0x1fU & ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                     ? (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0xfU) : 0U)
                                 : 0U));
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x14U));
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0xfU));
                    } else if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                            = (0x1fU & 0U);
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x14U));
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0xfU));
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                        = (0x1fU & 0U);
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                    = (0x1fU & 0U);
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
        }
    } else if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
                } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0xfU));
                        } else if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                                = (0x1fU & 0U);
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                                = (0x1fU & 0U);
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0xfU));
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
                }
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0xfU));
                        } else if ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            if ((0U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                                    = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0x14U));
                            }
                            if ((1U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                                    = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0x14U));
                            }
                            if ((0U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                                    = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0xfU));
                            }
                            if ((1U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                                    = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0xfU));
                            }
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                                = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                            >> 0xfU));
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x14U));
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                            = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0xfU));
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
            }
        } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
        } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
        } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o 
                        = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                    >> 0x14U));
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
                        = (0x1fU & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                    >> 0xfU));
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o = 0U;
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o 
            = (0x1fU & ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                         ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                             ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                 ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                          ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                              ? ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                      >> 0xcU)))
                                                  ? 
                                                 (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                  >> 0xfU)
                                                  : 
                                                 (((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                        >> 0xcU))) 
                                                   | (5U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                          >> 0xcU))))
                                                   ? 
                                                  (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                   >> 0xfU)
                                                   : 0U))
                                              : 0U)
                                          : 0U)) : 
                            ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                              ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                       ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                           ? (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                              >> 0xfU)
                                           : 0U) : 0U)))
                         : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                             ? 0U : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                      ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                               ? ((1U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                      ? 0U
                                                      : 
                                                     (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                      >> 0xfU))
                                                     : 
                                                    (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                     >> 0xfU))
                                                    : 
                                                   (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                    >> 0xfU))
                                                   : 0U)
                                               : 0U)))));
    }
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_waddr_o 
        = ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
            ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? 0U : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                          ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                              ? ((0x4000U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_waddr_o)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_waddr_o)
                                                    : 0U))
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_waddr_o)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_ex_csr_waddr_o)
                                                    : 0U)))
                                              : 0U)
                                          : 0U))) : 0U)
                : 0U) : 0U);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isstore_o 
        = (IData)((0x23U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isload_o 
        = (1U & (IData)(((3U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                         & (0x7000U != (0x7000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))));
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o 
            = (1U & ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                      >> 5U) & ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? (IData)(((3U == 
                                             (0xfU 
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
                                                            & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o))))))
                                 : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                     ? (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))
                                     : (IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))))));
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o 
            = ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? 0U : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                          ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                              ? ((0x4000U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                                    : 0U))
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                                    : 0U)))
                                              : 0U)
                                          : 0U))) : 
                   ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                     ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                         ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                             ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                 : 0U) : 0U) : 0U) : 
                    ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                      ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                          ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                              ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                              : 0U) : 0U) : 0U))) : 0U);
    } else if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o 
            = (1U & ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                      >> 4U) & ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? (IData)(((3U == 
                                             (7U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                                            & (0x2000U 
                                               != (0x6000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o))))
                                 : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                     ? ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                         >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                     : ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                         >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))));
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o 
            = ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                     ? ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                         ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                         : ((0x2000U 
                                             & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                             ? 0U : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)))
                                     : 0U) : 0U)) : 
                   ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                     ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                         ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                             ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                             : 0U) : 0U) : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                             ? ((1U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                 ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                                 : 0U)
                                             : 0U)))
                : 0U);
    } else if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o 
                = (1U & (IData)(((3U == (7U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                                 & ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                  >> 0xcU))) 
                                    | ((1U == (7U & 
                                               (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                >> 0xcU))) 
                                       | (5U == (7U 
                                                 & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                    >> 0xcU))))))));
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o 
                = ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                             ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                  >> 0xcU)))
                                     ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                     : ((1U == (7U 
                                                & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                   >> 0xcU)))
                                         ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                         : ((5U == 
                                             (7U & 
                                              (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                               >> 0xcU)))
                                             ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                                             : 0U)))
                                 : 0U) : 0U));
        } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o 
                = (1U & ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                          >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o));
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o 
                = ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                        : 0U) : 0U);
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o 
                = (1U & ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                          >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o));
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o 
                = ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o)
                        : 0U) : 0U);
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o 
            = (1U & (IData)(((3U == (0xfU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                             & (0x7000U != (0x7000U 
                                            & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))));
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o 
            = ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? 0U : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                         ? 0U : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                  ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                      ? ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                          ? ((0x2000U 
                                              & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                              ? ((0x1000U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                  ? 0U
                                                  : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o))
                                              : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o))
                                          : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_rd_addr_o))
                                      : 0U) : 0U)));
    }
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           == vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           - vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           * vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           ^ vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           << (0x3fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           >> (0x3fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed 
        = VL_SHIFTRS_QQI(64,64,6, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, 
                         (0x3fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_div_tmp 
        = VL_DIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_div_unsigned_tmp 
        = VL_DIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp 
        = VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp 
        = VL_MODDIV_III(32, (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o), (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           | vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           < vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed 
        = VL_LTS_IQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_u_tmp 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o) 
           << (0x1fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_u_tmp 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o) 
           >> (0x1fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_s_tmp 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o), 
                         (0x1fU & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i 
        = (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o 
           + vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o);
    if (vlSelf->rst) {
        if (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdready) {
            vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wen_o = 1U;
            vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata 
                = vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata;
            vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr 
                = vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr;
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wen_o = 0U;
            vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr = 0U;
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wen_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdata = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waddr = 0U;
    }
    if ((1U & (IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o 
                       >> 2U)))) {
        if ((1U & (IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o 
                           >> 2U)))) {
            vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o 
                = (QData)((IData)((vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                   [(0xfffffU & (IData)(
                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o 
                                                         >> 3U)))] 
                                   >> 0x20U)));
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__ram_core_inst_o 
            = (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                              [(0xfffffU & (IData)(
                                                   (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__pc_reg_pc_o 
                                                    >> 3U)))]));
    }
    vlSelf->tb__DOT__soc_inst__DOT__ram_axi_rdata_o 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__ren_o)
            ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr)
                ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr)
                    ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr)
                        ? ((vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                            [(0xfffffU & ((IData)(1U) 
                                          + (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                             >> 3U)))] 
                            << 8U) | (QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                                 [
                                                                 (0xfffffU 
                                                                  & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                                     >> 3U))] 
                                                                 >> 0x38U))))))
                        : ((vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                            [(0xfffffU & ((IData)(1U) 
                                          + (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                             >> 3U)))] 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(
                                                                   (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                                    [
                                                                    (0xfffffU 
                                                                     & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                                        >> 3U))] 
                                                                    >> 0x30U)))))))
                    : ((1U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr)
                        ? ((vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                            [(0xfffffU & ((IData)(1U) 
                                          + (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                             >> 3U)))] 
                            << 0x18U) | (QData)((IData)(
                                                        (0xffffffU 
                                                         & (IData)(
                                                                   (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                                    [
                                                                    (0xfffffU 
                                                                     & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                                        >> 3U))] 
                                                                    >> 0x28U))))))
                        : (((QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                            [(0xfffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                  >> 3U)))])) 
                            << 0x20U) | (QData)((IData)(
                                                        (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                         [
                                                         (0xfffffU 
                                                          & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                             >> 3U))] 
                                                         >> 0x20U))))))
                : ((2U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr)
                    ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr)
                        ? (((QData)((IData)((0xffffffU 
                                             & (IData)(
                                                       vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                       [
                                                       (0xfffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                            >> 3U)))])))) 
                            << 0x28U) | (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                         [(0xfffffU 
                                           & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                              >> 3U))] 
                                         >> 0x18U))
                        : (((QData)((IData)((0xffffU 
                                             & (IData)(
                                                       vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                       [
                                                       (0xfffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                            >> 3U)))])))) 
                            << 0x30U) | (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                         [(0xfffffU 
                                           & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                              >> 3U))] 
                                         >> 0x10U)))
                    : ((1U & vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr)
                        ? (((QData)((IData)((0xffU 
                                             & (IData)(
                                                       vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                                       [
                                                       (0xfffffU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                                            >> 3U)))])))) 
                            << 0x38U) | (vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                                         [(0xfffffU 
                                           & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                              >> 3U))] 
                                         >> 8U)) : 
                       vlSelf->tb__DOT__soc_inst__DOT__ram_inst__DOT__ram_mem
                       [(0xfffffU & (vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_raddr 
                                     >> 3U))]))) : 0ULL);
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wmask 
        = ((IData)(vlSelf->rst) ? ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdready)
                                    ? ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface)
                                        ? 0ULL : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__wmask_o)
                                    : 0ULL) : 0ULL);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_offset_addr_o 
        = ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
            ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                    ? 0ULL : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                               ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                   ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                       ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                           ? (((- (QData)((IData)(
                                                                  (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                   >> 0x1fU)))) 
                                               << 0x14U) 
                                              | (QData)((IData)(
                                                                ((0xff000U 
                                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                        >> 9U)) 
                                                                    | (0x7feU 
                                                                       & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                          >> 0x14U)))))))
                                           : 0ULL) : 0ULL)
                                   : 0ULL) : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                               ? ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI
                                                    : 0ULL)
                                                   : 0ULL)
                                               : ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immB
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                      ? 0ULL
                                                      : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immB))
                                                    : 0ULL)
                                                   : 0ULL))))
                : 0ULL) : ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                            ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                ? 0ULL : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                           ? 0ULL : 
                                          ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                            ? 0ULL : 
                                           ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                             ? ((1U 
                                                 & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                 ? 
                                                ((0x4000U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                  ? 0ULL
                                                  : 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                                           >> 7U)))))))
                                                 : 0ULL)
                                             : 0ULL))))
                            : ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                    ? 0ULL : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                               ? ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immU
                                                    : 0ULL)
                                                   : 0ULL)
                                               : 0ULL))
                                : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                    ? 0ULL : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                               ? 0ULL
                                               : ((2U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                    ? 
                                                   ((0x4000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                                       ? 0ULL
                                                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL)
                                                      : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL)
                                                     : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL)
                                                    : 0ULL)
                                                   : 0ULL))))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__store_inst 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isstore_o) 
           | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isstore_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_inst 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isload_o) 
           | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isload_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__rename_inst__DOT__rs2_id_ex_hit 
        = ((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
             == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o)) 
            & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o)) 
           & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__rename_inst__DOT__rs1_id_ex_hit 
        = ((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
             == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_waddr_o)) 
            & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_reg_wen_o)) 
           & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_csr_wdata_o 
        = ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
            ? ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? 0ULL : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                   ? 0ULL : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                              ? ((1U 
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
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i
                                                     : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o
                                                     : 0ULL))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i
                                                     : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o
                                                     : 0ULL)))
                                                  : 0ULL)
                                              : 0ULL)))
                    : 0ULL) : 0ULL) : 0ULL);
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_ctrl_typej_jump_en_o 
        = (1U & (IData)(((0x60U == (0x70U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) 
                         & ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                             ? (IData)((7U == (7U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)))
                             : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 ? ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                     >> 1U) & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                 : ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                     >> 1U) & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                               & ((0x4000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned))
                                                     : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed))
                                                     : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed)))
                                                   : 
                                                  ((~ 
                                                    (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                     >> 0xdU)) 
                                                   & ((0x1000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      (~ (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i))
                                                       : (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_equal_op2_i)))))))))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned 
        = (((QData)((IData)((- (IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_u_tmp 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_u_tmp)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned 
        = (((QData)((IData)((- (IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_u_tmp 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_u_tmp)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_signed 
        = (((QData)((IData)((- (IData)((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_s_tmp 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_s_tmp)));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_add 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i)));
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata 
        = __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__wdata;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr 
        = __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__rwaddr;
    __Vtableidx3 = (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wmask_o) 
                     << 1U) | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__wmask_o 
        = Vtb__ConstPool__TABLE_h5ca10654_0[__Vtableidx3];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface 
        = ((0xa0000000ULL <= vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o) 
           | (0xa0000000ULL <= vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_data_hit 
        = (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__rename_inst__DOT__rs1_id_ex_hit) 
            | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__rename_inst__DOT__rs2_id_ex_hit)) 
           & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_isload_o));
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o 
            = ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? 0ULL : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                   ? 0ULL : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                              ? ((1U 
                                                  & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o
                                                     : 0ULL))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o
                                                     : 0ULL)))
                                                  : 0ULL)
                                              : 0ULL)))
                    : ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                            ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i
                                    : 0ULL) : 0ULL)
                            : 0ULL) : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                        ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                            ? ((1U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i
                                                : 0ULL)
                                            : 0ULL)
                                        : 0ULL))) : 0ULL);
    } else if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o 
            = ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? 0ULL : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                   ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                       ? ((0x4000U 
                                           & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                           ? ((0x2000U 
                                               & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                               ? ((0x1000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_unsigned_tmp)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_rem_tmp))))
                                               : ((0x1000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_signed
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_div_unsigned_tmp 
                                                                                >> 0x1fU))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_div_unsigned_tmp)))
                                                     : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_div_tmp 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_div_tmp)))))
                                           : ((0x2000U 
                                               & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                               ? 0ULL
                                               : ((0x1000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                     >> 0x19U))
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_add
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                      >> 0x19U))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i))))))))
                                       : 0ULL) : 0ULL))
                    : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                            ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o
                                : 0ULL) : 0ULL) : (
                                                   (2U 
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
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                          >> 0x19U))
                                                         ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i
                                                         : 
                                                        VL_MODDIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o))
                                                        : 
                                                       ((vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                         >> 0x1fU)
                                                         ? 
                                                        VL_MODDIVS_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)
                                                         : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? 
                                                       ((0x10U 
                                                         == 
                                                         (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                          >> 0x19U))
                                                         ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed
                                                         : 
                                                        ((0U 
                                                          == 
                                                          (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                           >> 0x19U))
                                                          ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned
                                                          : 
                                                         VL_DIV_QQQ(64, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op1_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_op2_o)))
                                                        : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned))
                                                        : (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed)))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                          >> 0x19U))
                                                         ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                           >> 0x19U))
                                                          ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_mul_op2_i
                                                          : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_sub_op2_i)))))
                                                     : 0ULL)
                                                    : 0ULL)))
                : 0ULL);
    } else if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o 
            = ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                ? ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? 0ULL : ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                               ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                   ? ((0U == (7U & 
                                              (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                               >> 0xcU)))
                                       ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_add
                                       : ((1U == (7U 
                                                  & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                     >> 0xcU)))
                                           ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_left_unsigned
                                           : ((5U == 
                                               (7U 
                                                & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o 
                                                   >> 0xcU)))
                                               ? ((0x40000000U 
                                                   & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                   ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_signed
                                                   : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__compress_shift_right_unsigned)
                                               : 0ULL)))
                                   : 0ULL) : 0ULL))
                : ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                    ? ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                        ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                            ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i
                            : 0ULL) : 0ULL) : ((2U 
                                                & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                ? (
                                                   (1U 
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
                                                       ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_and_op2_i
                                                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_or_op2_i)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? 
                                                      ((0x40000000U 
                                                        & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                        ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_signed
                                                        : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_right_op2_i_unsigned)
                                                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_xor_op2_i))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_unsigned))
                                                       : (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_less_op2_i_signed)))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
                                                       ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_shift_left_op2_i_unsigned
                                                       : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_inst__DOT__op1_i_add_op2_i)))
                                                    : 0ULL)
                                                : 0ULL)));
    } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o = 0ULL;
    } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o = 0ULL;
    } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
        if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
            if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
                if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
                    if ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o = 0ULL;
                    }
                }
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o = 0ULL;
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o = 0ULL;
    }
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wdready 
        = ((IData)(vlSelf->rst) & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid) 
                                   & (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waready)));
    if (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface) 
         & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wen_o))) {
        Vtb___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_waddr_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_wdata_o, vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__wmask_o);
    }
    if (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface) 
         & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o))) {
        Vtb___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_raddr_o, vlSelf->__Vtask_pmem_read__4__rdata);
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__device_rdata 
            = vlSelf->__Vtask_pmem_read__4__rdata;
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__device_rdata = 0ULL;
    }
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid 
        = __Vdly__tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_wavalid;
    vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_waready 
        = vlSelf->rst;
}

void Vtb___024unit____Vdpiimwrap_get_gprs__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &regs);
void Vtb___024unit____Vdpiimwrap_ebreak_TOP____024unit();
extern const VlUnpacked<CData/*0:0*/, 128> Vtb__ConstPool__TABLE_hd883f979_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb__ConstPool__TABLE_hc9e07f1f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb__ConstPool__TABLE_h011d071a_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb__ConstPool__TABLE_ha41e00fd_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb__ConstPool__TABLE_h257ad544_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vtb__ConstPool__TABLE_hb68ce13d_0;

VL_INLINE_OPT void Vtb___024root___combo__TOP__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___combo__TOP__1\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    // Body
    if (vlSelf->rst) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o] 
            = (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)))
                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                : 0ULL);
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[1U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[2U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[3U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[4U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[5U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[6U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[7U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[8U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[9U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0xaU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0xbU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0xcU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0xdU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0xeU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0xfU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x10U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x11U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x12U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x13U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x14U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x15U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x16U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x17U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x18U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x19U] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x1aU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x1bU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x1cU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x1dU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x1eU] = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs[0x1fU] = 0ULL;
    }
    Vtb___024unit____Vdpiimwrap_get_gprs__Vdpioc2_TOP____024unit(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs);
    if (vlSelf->rst) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mtvec_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mtvec;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mstatus_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mstatus;
        vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__busy_end 
            = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready) 
               | (IData)(vlSelf->tb__DOT__soc_inst__DOT__ram_axi_bvalid_o));
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_id_rdata_o 
            = ((0x300U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o))
                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mstatus
                : ((0x305U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o))
                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mtvec
                    : ((0x341U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o))
                        ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mepc
                        : ((0x342U == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_csr_raddr_o))
                            ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_regs_inst__DOT__mcause
                            : 0ULL))));
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mtvec_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mstatus_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__busy_end = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_id_rdata_o = 0ULL;
    }
    if (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_ren_o) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata 
            = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__visit_interface)
                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__device_rdata
                : ((IData)(vlSelf->rst) ? ((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__maxi_rdready)
                                            ? vlSelf->tb__DOT__soc_inst__DOT__ram_axi_rdata_o
                                            : 0ULL)
                    : 0ULL));
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o 
            = ((3U == (0x7fU & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o))
                ? ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                    ? ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                        ? ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                            ? 0ULL : (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata)))
                        : ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                            ? (QData)((IData)((0xffffU 
                                               & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata))))
                            : (QData)((IData)((0xffU 
                                               & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata))))))
                    : ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                        ? ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                            ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata
                            : (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata))))
                        : ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_inst_o)
                            ? (((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata 
                                                               >> 0xfU)))))) 
                                << 0x10U) | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata)))))
                            : (((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata 
                                                               >> 7U)))))) 
                                << 8U) | (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_inst__DOT__rdata))))))))
                : 0ULL);
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_wdata_o;
    }
    if ((0x100073U == vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_clint_clint_inst_o)) {
        Vtb___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    } else if ((0x73U == vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_clint_clint_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_mepc_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_clint_clint_inst_addr_o;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_mcause_o = 0xbULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_mstatus_o 
            = ((0xffffffffffffff00ULL & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mstatus_o) 
               | (QData)((IData)(((0x80U & ((IData)(
                                                    (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mstatus_o 
                                                     >> 3U)) 
                                            << 7U)) 
                                  | ((0x70U & ((IData)(
                                                       (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mstatus_o 
                                                        >> 4U)) 
                                               << 4U)) 
                                     | (7U & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mstatus_o)))))));
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_addr_o 
            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mtvec_o;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_en_o = 1U;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_wen_o = 1U;
    } else if ((0x30200073U == vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_clint_clint_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_mstatus_o 
            = ((0xffffffffffffff00ULL & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mstatus_o) 
               | (QData)((IData)((0x80U | ((0x70U & 
                                            ((IData)(
                                                     (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mstatus_o 
                                                      >> 4U)) 
                                             << 4U)) 
                                           | ((8U & 
                                               ((IData)(
                                                        (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mstatus_o 
                                                         >> 7U)) 
                                                << 3U)) 
                                              | (7U 
                                                 & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mstatus_o))))))));
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_addr_o 
            = (4ULL + vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_clint_mtvec_o);
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_en_o = 1U;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_wen_o = 1U;
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_addr_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_en_o = 0U;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_csr_wen_o = 0U;
    }
    __Vtableidx2 = (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_data_hit) 
                     << 6U) | (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isstore_o) 
                                << 5U) | (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__store_inst) 
                                           << 4U) | 
                                          (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_isload_o) 
                                            << 3U) 
                                           | (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_inst) 
                                               << 2U) 
                                              | (((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__busy_end) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy)))))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_stall_en_o 
        = Vtb__ConstPool__TABLE_hd883f979_0[__Vtableidx2];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_stall_en_o 
        = Vtb__ConstPool__TABLE_hd883f979_0[__Vtableidx2];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_stall_en_o 
        = Vtb__ConstPool__TABLE_hc9e07f1f_0[__Vtableidx2];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_stall_en_o 
        = Vtb__ConstPool__TABLE_h011d071a_0[__Vtableidx2];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_stall_en_o 
        = Vtb__ConstPool__TABLE_hc9e07f1f_0[__Vtableidx2];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__rename_inst__DOT__rs2_id_ex_hit)
            ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o
            : (((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
                  == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)) 
                 & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)) 
                & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))
                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o
                : (((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o) 
                      == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)) 
                     & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o)) 
                    & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))
                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                    : ((IData)(vlSelf->rst) ? ((0U 
                                                == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o))
                                                ? 0ULL
                                                : (
                                                   ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                                                    & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o) 
                                                       == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o)))
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                                                    : 
                                                   vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs
                                                   [vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs2_addr_o]))
                        : 0ULL))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o 
        = ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__rename_inst__DOT__rs1_id_ex_hit)
            ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_rd_wdata_o
            : (((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
                  == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_rd_waddr_o)) 
                 & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_mem_mem_reg_wen_o)) 
                & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))
                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_rd_wdata_o
                : (((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o) 
                      == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o)) 
                     & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o)) 
                    & (0U != (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))
                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                    : ((IData)(vlSelf->rst) ? ((0U 
                                                == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o))
                                                ? 0ULL
                                                : (
                                                   ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_reg_wen_o) 
                                                    & ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_waddr_o) 
                                                       == (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o)))
                                                    ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__mem_wb_wb_rd_wdata_o
                                                    : 
                                                   vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__regs_inst__DOT__regs
                                                   [vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_re_rs1_addr_o]))
                        : 0ULL))));
    if (VL_UNLIKELY((((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_ctrl_typej_jump_en_o) 
                      & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_en_o)) 
                     | ((0ULL != ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_ex_inst_o)
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
                                       : 0ULL) : 0ULL)) 
                        & (0ULL != vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_addr_o))))) {
        VL_WRITEF("JUMP conflict!\n\n");
    }
    __Vtableidx1 = (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_data_hit) 
                     << 5U) | (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__store_inst) 
                                << 4U) | (((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_inst__DOT__load_inst) 
                                           << 3U) | 
                                          (((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__busy_end) 
                                            << 2U) 
                                           | (((IData)(vlSelf->tb__DOT__soc_inst__DOT__axi_inst__DOT__axi_busy) 
                                               << 1U) 
                                              | ((IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ex_ctrl_typej_jump_en_o) 
                                                 | (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__clint_ctrl_intr_jump_en_o)))))));
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_pc_flush_en_o 
        = Vtb__ConstPool__TABLE_ha41e00fd_0[__Vtableidx1];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_if_id_flush_en_o 
        = Vtb__ConstPool__TABLE_h257ad544_0[__Vtableidx1];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_id_ex_flush_en_o 
        = Vtb__ConstPool__TABLE_hb68ce13d_0[__Vtableidx1];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_ex_mem_flush_en_o 
        = Vtb__ConstPool__TABLE_ha41e00fd_0[__Vtableidx1];
    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__ctrl_mem_wb_flush_en_o 
        = Vtb__ConstPool__TABLE_ha41e00fd_0[__Vtableidx1];
    if ((0x40U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
                if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_id_rdata_o;
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__Zimm;
                            } else if ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_id_rdata_o;
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__Zimm;
                            } else {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                            }
                        } else if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_id_rdata_o;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        } else if ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__csr_id_rdata_o;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                }
            } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 4ULL;
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                }
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 4ULL;
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                }
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                    } else if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
        }
    } else if ((0x20U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
            if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                        } else if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                }
            } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                    = ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                        ? ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                            ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immU
                            : 0ULL) : 0ULL);
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                        } else if ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                            if ((0U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                            }
                            if ((1U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                            }
                            if ((0U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                                    = (QData)((IData)(
                                                      (0x3fU 
                                                       & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o))));
                            }
                            if ((1U == (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                        >> 0x19U))) {
                                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                            }
                        } else {
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                                = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                        }
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                            = ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o
                                : ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                                    ? (QData)((IData)(
                                                      (0x3fU 
                                                       & (IData)(vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o))))
                                    : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o));
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
            }
        } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
        } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
        } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs2_rdata_o;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
        }
    } else if ((0x10U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
        if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
            } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((0U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                      >> 0xcU)))) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI;
                    } else if (((1U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                              >> 0xcU))) 
                                | (5U == (7U & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                >> 0xcU))))) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                            = (QData)((IData)((0x3fU 
                                               & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                  >> 0x14U))));
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
            }
        } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_addr_o;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immU;
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
            }
        } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                    = ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                        ? vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI
                        : ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)
                            ? (QData)((IData)((0x3fU 
                                               & (vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o 
                                                  >> 0x14U))))
                            : vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immI));
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
        }
    } else if ((8U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
    } else if ((4U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
    } else if ((2U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
        if ((1U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
            if ((0x4000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                if ((0x2000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                    if ((0x1000U & vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__if_id_inst_o)) {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
                    } else {
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                            = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL;
                    }
                } else {
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                    vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                        = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL;
                }
            } else {
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o 
                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o 
                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__re_id_rs1_rdata_o;
                vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o 
                    = vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_inst__DOT__immL;
            }
        } else {
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
            vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
        }
    } else {
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_base_addr_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op1_o = 0ULL;
        vlSelf->tb__DOT__soc_inst__DOT__core_inst__DOT__id_id_ex_op2_o = 0ULL;
    }
}
