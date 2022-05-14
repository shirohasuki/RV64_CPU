// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpc_reg.h"
#include "Vpc_reg__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpc_reg::Vpc_reg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vpc_reg__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , pc_o{vlSymsp->TOP.pc_o}
    , rootp{&(vlSymsp->TOP)}
{
}

Vpc_reg::Vpc_reg(const char* _vcname__)
    : Vpc_reg(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vpc_reg::~Vpc_reg() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vpc_reg___024root___eval_initial(Vpc_reg___024root* vlSelf);
void Vpc_reg___024root___eval_settle(Vpc_reg___024root* vlSelf);
void Vpc_reg___024root___eval(Vpc_reg___024root* vlSelf);
#ifdef VL_DEBUG
void Vpc_reg___024root___eval_debug_assertions(Vpc_reg___024root* vlSelf);
#endif  // VL_DEBUG
void Vpc_reg___024root___final(Vpc_reg___024root* vlSelf);

static void _eval_initial_loop(Vpc_reg__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vpc_reg___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vpc_reg___024root___eval_settle(&(vlSymsp->TOP));
        Vpc_reg___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vpc_reg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpc_reg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpc_reg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vpc_reg___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vpc_reg::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vpc_reg::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vpc_reg::final() {
    Vpc_reg___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vpc_reg___024root__trace_init_top(Vpc_reg___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpc_reg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpc_reg___024root*>(voidSelf);
    Vpc_reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vpc_reg___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vpc_reg___024root__trace_register(Vpc_reg___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpc_reg::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpc_reg___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
