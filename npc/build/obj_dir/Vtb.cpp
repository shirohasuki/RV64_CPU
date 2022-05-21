// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb.h"
#include "Vtb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb::Vtb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtb__Syms(_vcontextp__, _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtb::Vtb(const char* _vcname__)
    : Vtb(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtb::~Vtb() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtb___024root___eval_initial(Vtb___024root* vlSelf);
void Vtb___024root___eval_settle(Vtb___024root* vlSelf);
void Vtb___024root___eval(Vtb___024root* vlSelf);
#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb___024root___final(Vtb___024root* vlSelf);

static void _eval_initial_loop(Vtb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtb___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtb___024root___eval_settle(&(vlSymsp->TOP));
        Vtb___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtb___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

void Vtb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Utilities

VerilatedContext* Vtb::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb::final() {
    Vtb___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vtb___024root__trace_init_top(Vtb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtb___024root__trace_register(Vtb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
