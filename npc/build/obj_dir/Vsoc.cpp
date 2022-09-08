// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsoc.h"
#include "Vsoc__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsoc::Vsoc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vsoc__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , rootp{&(vlSymsp->TOP)}
{
}

Vsoc::Vsoc(const char* _vcname__)
    : Vsoc(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vsoc::~Vsoc() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsoc___024root___eval_initial(Vsoc___024root* vlSelf);
void Vsoc___024root___eval_settle(Vsoc___024root* vlSelf);
void Vsoc___024root___eval(Vsoc___024root* vlSelf);
#ifdef VL_DEBUG
void Vsoc___024root___eval_debug_assertions(Vsoc___024root* vlSelf);
#endif  // VL_DEBUG
void Vsoc___024root___final(Vsoc___024root* vlSelf);

static void _eval_initial_loop(Vsoc__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsoc___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsoc___024root___eval_settle(&(vlSymsp->TOP));
        Vsoc___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vsoc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsoc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsoc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsoc___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vsoc::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vsoc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsoc::final() {
    Vsoc___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vsoc___024root__trace_init_top(Vsoc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc___024root*>(voidSelf);
    Vsoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsoc___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsoc___024root__trace_register(Vsoc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsoc::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsoc___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
