// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhashcore_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhashcore_tb::Vhashcore_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhashcore_tb__Syms(contextp(), _vcname__, this)}
    , __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE}
    , __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE}
    , __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE}
    , __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE}
    , __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE}
    , __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE}
    , __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE}
    , __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE}
    , __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE}
    , __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vhashcore_tb::Vhashcore_tb(const char* _vcname__)
    : Vhashcore_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhashcore_tb::~Vhashcore_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhashcore_tb___024root___eval_debug_assertions(Vhashcore_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vhashcore_tb___024root___eval_static(Vhashcore_tb___024root* vlSelf);
void Vhashcore_tb___024root___eval_initial(Vhashcore_tb___024root* vlSelf);
void Vhashcore_tb___024root___eval_settle(Vhashcore_tb___024root* vlSelf);
void Vhashcore_tb___024root___eval(Vhashcore_tb___024root* vlSelf);

void Vhashcore_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhashcore_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhashcore_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhashcore_tb___024root___eval_static(&(vlSymsp->TOP));
        Vhashcore_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vhashcore_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhashcore_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vhashcore_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vhashcore_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vhashcore_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhashcore_tb___024root___eval_final(Vhashcore_tb___024root* vlSelf);

VL_ATTR_COLD void Vhashcore_tb::final() {
    Vhashcore_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhashcore_tb::hierName() const { return vlSymsp->name(); }
const char* Vhashcore_tb::modelName() const { return "Vhashcore_tb"; }
unsigned Vhashcore_tb::threads() const { return 1; }
void Vhashcore_tb::prepareClone() const { contextp()->prepareClone(); }
void Vhashcore_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhashcore_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vhashcore_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vhashcore_tb___024root__trace_init_top(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhashcore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhashcore_tb___024root*>(voidSelf);
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vhashcore_tb___024root__trace_decl_types(tracep);
    Vhashcore_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_register(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhashcore_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhashcore_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vhashcore_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
