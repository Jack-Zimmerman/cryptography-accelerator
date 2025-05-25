// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtimer_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtimer_tb::Vtimer_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtimer_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtimer_tb::Vtimer_tb(const char* _vcname__)
    : Vtimer_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtimer_tb::~Vtimer_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtimer_tb___024root___eval_debug_assertions(Vtimer_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtimer_tb___024root___eval_static(Vtimer_tb___024root* vlSelf);
void Vtimer_tb___024root___eval_initial(Vtimer_tb___024root* vlSelf);
void Vtimer_tb___024root___eval_settle(Vtimer_tb___024root* vlSelf);
void Vtimer_tb___024root___eval(Vtimer_tb___024root* vlSelf);

void Vtimer_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtimer_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtimer_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtimer_tb___024root___eval_static(&(vlSymsp->TOP));
        Vtimer_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vtimer_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtimer_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtimer_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtimer_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtimer_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtimer_tb___024root___eval_final(Vtimer_tb___024root* vlSelf);

VL_ATTR_COLD void Vtimer_tb::final() {
    Vtimer_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtimer_tb::hierName() const { return vlSymsp->name(); }
const char* Vtimer_tb::modelName() const { return "Vtimer_tb"; }
unsigned Vtimer_tb::threads() const { return 1; }
void Vtimer_tb::prepareClone() const { contextp()->prepareClone(); }
void Vtimer_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtimer_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtimer_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtimer_tb___024root__trace_init_top(Vtimer_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtimer_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtimer_tb___024root*>(voidSelf);
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtimer_tb___024root__trace_decl_types(tracep);
    Vtimer_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtimer_tb___024root__trace_register(Vtimer_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtimer_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtimer_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtimer_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
