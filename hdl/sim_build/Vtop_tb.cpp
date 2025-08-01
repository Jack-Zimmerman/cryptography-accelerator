// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop_tb::Vtop_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_tb__Syms(contextp(), _vcname__, this)}
    , __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE}
    , __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE}
    , __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE}
    , __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE}
    , __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE}
    , __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE}
    , __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE}
    , __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE}
    , __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE}
    , __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE{vlSymsp->TOP.__PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_tb::Vtop_tb(const char* _vcname__)
    : Vtop_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop_tb::~Vtop_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtop_tb___024root___eval_debug_assertions(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_tb___024root___eval_static(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___eval_initial(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___eval_settle(Vtop_tb___024root* vlSelf);
void Vtop_tb___024root___eval(Vtop_tb___024root* vlSelf);

void Vtop_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtop_tb___024root___eval_static(&(vlSymsp->TOP));
        Vtop_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vtop_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtop_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtop_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtop_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtop_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtop_tb___024root___eval_final(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD void Vtop_tb::final() {
    Vtop_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_tb::hierName() const { return vlSymsp->name(); }
const char* Vtop_tb::modelName() const { return "Vtop_tb"; }
unsigned Vtop_tb::threads() const { return 1; }
void Vtop_tb::prepareClone() const { contextp()->prepareClone(); }
void Vtop_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtop_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtop_tb___024root__trace_init_top(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_decl_types(tracep);
    Vtop_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_register(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtop_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
