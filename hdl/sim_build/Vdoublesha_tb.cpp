// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdoublesha_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdoublesha_tb::Vdoublesha_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdoublesha_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdoublesha_tb::Vdoublesha_tb(const char* _vcname__)
    : Vdoublesha_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdoublesha_tb::~Vdoublesha_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdoublesha_tb___024root___eval_debug_assertions(Vdoublesha_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vdoublesha_tb___024root___eval_static(Vdoublesha_tb___024root* vlSelf);
void Vdoublesha_tb___024root___eval_initial(Vdoublesha_tb___024root* vlSelf);
void Vdoublesha_tb___024root___eval_settle(Vdoublesha_tb___024root* vlSelf);
void Vdoublesha_tb___024root___eval(Vdoublesha_tb___024root* vlSelf);

void Vdoublesha_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdoublesha_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdoublesha_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdoublesha_tb___024root___eval_static(&(vlSymsp->TOP));
        Vdoublesha_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vdoublesha_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdoublesha_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vdoublesha_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vdoublesha_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vdoublesha_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vdoublesha_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdoublesha_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdoublesha_tb___024root___eval_final(Vdoublesha_tb___024root* vlSelf);

VL_ATTR_COLD void Vdoublesha_tb::final() {
    Vdoublesha_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdoublesha_tb::hierName() const { return vlSymsp->name(); }
const char* Vdoublesha_tb::modelName() const { return "Vdoublesha_tb"; }
unsigned Vdoublesha_tb::threads() const { return 1; }
void Vdoublesha_tb::prepareClone() const { contextp()->prepareClone(); }
void Vdoublesha_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdoublesha_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdoublesha_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdoublesha_tb___024root__trace_init_top(Vdoublesha_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdoublesha_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdoublesha_tb___024root*>(voidSelf);
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdoublesha_tb___024root__trace_decl_types(tracep);
    Vdoublesha_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdoublesha_tb___024root__trace_register(Vdoublesha_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdoublesha_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdoublesha_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdoublesha_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
