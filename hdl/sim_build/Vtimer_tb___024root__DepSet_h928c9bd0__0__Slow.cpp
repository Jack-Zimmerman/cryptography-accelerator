// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer_tb.h for the primary calling header

#include "Vtimer_tb__pch.h"
#include "Vtimer_tb___024root.h"

VL_ATTR_COLD void Vtimer_tb___024root___eval_static(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtimer_tb___024root___eval_final(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtimer_tb___024root___eval_settle(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_tb___024root___dump_triggers__act(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge timer_tb.clk or posedge timer_tb.rst_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_tb___024root___dump_triggers__nba(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge timer_tb.clk or posedge timer_tb.rst_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtimer_tb___024root___ctor_var_reset(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->timer_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->timer_tb__DOT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->timer_tb__DOT__second_tick = VL_RAND_RESET_I(1);
    vlSelf->timer_tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->timer_tb__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->timer_tb__DOT__DUT__DOT__cycles = VL_RAND_RESET_I(27);
    vlSelf->__Vtrigprevexpr___TOP__timer_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__timer_tb__DOT__rst_i__0 = VL_RAND_RESET_I(1);
}
