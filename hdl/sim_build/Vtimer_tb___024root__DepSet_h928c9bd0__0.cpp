// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer_tb.h for the primary calling header

#include "Vtimer_tb__pch.h"
#include "Vtimer_tb___024root.h"

VlCoroutine Vtimer_tb___024root___eval_initial__TOP__Vtiming__0(Vtimer_tb___024root* vlSelf);

void Vtimer_tb___024root___eval_initial(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___eval_initial\n"); );
    // Body
    Vtimer_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__timer_tb__DOT__clk__0 
        = vlSelf->timer_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__timer_tb__DOT__rst_i__0 
        = vlSelf->timer_tb__DOT__rst_i;
}

VL_INLINE_OPT VlCoroutine Vtimer_tb___024root___eval_initial__TOP__Vtiming__0(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    VL_WRITEF("Starting timer\n");
    vlSelf->timer_tb__DOT__rst_i = 1U;
    vlSelf->timer_tb__DOT__clk = 1U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "testbench/timer_tb.sv", 
                                       6);
    vlSelf->timer_tb__DOT__clk = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "testbench/timer_tb.sv", 
                                       8);
    vlSelf->timer_tb__DOT__rst_i = 0U;
    VL_WRITEF("Passing 1 second\n");
    vlSelf->timer_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x2710U, vlSelf->timer_tb__DOT__unnamedblk1__DOT__i)) {
        vlSelf->timer_tb__DOT__clk = 1U;
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "testbench/timer_tb.sv", 
                                           6);
        vlSelf->timer_tb__DOT__clk = 0U;
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "testbench/timer_tb.sv", 
                                           8);
        vlSelf->timer_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->timer_tb__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF("Second tick: %b\n\nTrying reset\n\n",
              1,vlSelf->timer_tb__DOT__second_tick);
    vlSelf->timer_tb__DOT__rst_i = 1U;
    vlSelf->timer_tb__DOT__clk = 1U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "testbench/timer_tb.sv", 
                                       6);
    vlSelf->timer_tb__DOT__clk = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "testbench/timer_tb.sv", 
                                       8);
    vlSelf->timer_tb__DOT__rst_i = 0U;
    VL_WRITEF("Passing 1 second\n");
    vlSelf->timer_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x2710U, vlSelf->timer_tb__DOT__unnamedblk2__DOT__i)) {
        vlSelf->timer_tb__DOT__clk = 1U;
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "testbench/timer_tb.sv", 
                                           6);
        vlSelf->timer_tb__DOT__clk = 0U;
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "testbench/timer_tb.sv", 
                                           8);
        vlSelf->timer_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelf->timer_tb__DOT__unnamedblk2__DOT__i);
    }
    VL_WRITEF("Second tick: %b\n\n",1,vlSelf->timer_tb__DOT__second_tick);
}

void Vtimer_tb___024root___eval_act(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtimer_tb___024root___nba_sequent__TOP__0(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*26:0*/ __Vdly__timer_tb__DOT__DUT__DOT__cycles;
    __Vdly__timer_tb__DOT__DUT__DOT__cycles = 0;
    // Body
    __Vdly__timer_tb__DOT__DUT__DOT__cycles = vlSelf->timer_tb__DOT__DUT__DOT__cycles;
    if (vlSelf->timer_tb__DOT__rst_i) {
        __Vdly__timer_tb__DOT__DUT__DOT__cycles = 0U;
        vlSelf->timer_tb__DOT__second_tick = 0U;
    } else if ((0x270fU == vlSelf->timer_tb__DOT__DUT__DOT__cycles)) {
        vlSelf->timer_tb__DOT__second_tick = 1U;
        __Vdly__timer_tb__DOT__DUT__DOT__cycles = 0U;
    } else {
        __Vdly__timer_tb__DOT__DUT__DOT__cycles = (0x7ffffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->timer_tb__DOT__DUT__DOT__cycles));
        vlSelf->timer_tb__DOT__second_tick = 0U;
    }
    vlSelf->timer_tb__DOT__DUT__DOT__cycles = __Vdly__timer_tb__DOT__DUT__DOT__cycles;
}

void Vtimer_tb___024root___eval_nba(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtimer_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtimer_tb___024root___timing_resume(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtimer_tb___024root___eval_triggers__act(Vtimer_tb___024root* vlSelf);

bool Vtimer_tb___024root___eval_phase__act(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtimer_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtimer_tb___024root___timing_resume(vlSelf);
        Vtimer_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtimer_tb___024root___eval_phase__nba(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtimer_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_tb___024root___dump_triggers__nba(Vtimer_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_tb___024root___dump_triggers__act(Vtimer_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtimer_tb___024root___eval(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtimer_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/timer_tb.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtimer_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/timer_tb.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtimer_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtimer_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtimer_tb___024root___eval_debug_assertions(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
