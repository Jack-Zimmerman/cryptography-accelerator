// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhashcore_tb.h for the primary calling header

#include "Vhashcore_tb__pch.h"
#include "Vhashcore_tb___024root.h"

VL_ATTR_COLD void Vhashcore_tb___024root___eval_static__TOP(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->hashcore_tb__DOT__rst_i = 0U;
    vlSelf->hashcore_tb__DOT__DUT__DOT__rst = 0U;
}

extern const VlWide<8>/*255:0*/ Vhashcore_tb__ConstPool__CONST_h5b979007_0;

VL_ATTR_COLD void Vhashcore_tb___024root___eval_initial__TOP(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->hashcore_tb__DOT__DUT__DOT__best_hash_reverse[0U] 
        = Vhashcore_tb__ConstPool__CONST_h5b979007_0[0U];
    vlSelf->hashcore_tb__DOT__DUT__DOT__best_hash_reverse[1U] 
        = Vhashcore_tb__ConstPool__CONST_h5b979007_0[1U];
    vlSelf->hashcore_tb__DOT__DUT__DOT__best_hash_reverse[2U] 
        = Vhashcore_tb__ConstPool__CONST_h5b979007_0[2U];
    vlSelf->hashcore_tb__DOT__DUT__DOT__best_hash_reverse[3U] 
        = Vhashcore_tb__ConstPool__CONST_h5b979007_0[3U];
    vlSelf->hashcore_tb__DOT__DUT__DOT__best_hash_reverse[4U] 
        = Vhashcore_tb__ConstPool__CONST_h5b979007_0[4U];
    vlSelf->hashcore_tb__DOT__DUT__DOT__best_hash_reverse[5U] 
        = Vhashcore_tb__ConstPool__CONST_h5b979007_0[5U];
    vlSelf->hashcore_tb__DOT__DUT__DOT__best_hash_reverse[6U] 
        = Vhashcore_tb__ConstPool__CONST_h5b979007_0[6U];
    vlSelf->hashcore_tb__DOT__DUT__DOT__best_hash_reverse[7U] 
        = Vhashcore_tb__ConstPool__CONST_h5b979007_0[7U];
    vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[0U] = 0U;
    vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[1U] = 1U;
    vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[2U] = 2U;
    vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[3U] = 3U;
    vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[4U] = 4U;
    vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[5U] = 5U;
    vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[6U] = 6U;
    vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[7U] = 7U;
    vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[8U] = 8U;
    vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[9U] = 9U;
    vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk1__DOT__j = 0xaU;
}

VL_ATTR_COLD void Vhashcore_tb___024root___eval_final(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhashcore_tb___024root___dump_triggers__stl(Vhashcore_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vhashcore_tb___024root___eval_phase__stl(Vhashcore_tb___024root* vlSelf);

VL_ATTR_COLD void Vhashcore_tb___024root___eval_settle(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vhashcore_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench/hashcore_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vhashcore_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhashcore_tb___024root___dump_triggers__stl(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhashcore_tb___024root___eval_triggers__stl(Vhashcore_tb___024root* vlSelf);
VL_ATTR_COLD void Vhashcore_tb___024root___eval_stl(Vhashcore_tb___024root* vlSelf);

VL_ATTR_COLD bool Vhashcore_tb___024root___eval_phase__stl(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vhashcore_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vhashcore_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhashcore_tb___024root___dump_triggers__act(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge hashcore_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhashcore_tb___024root___dump_triggers__nba(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge hashcore_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhashcore_tb___024root___ctor_var_reset(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->hashcore_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->hashcore_tb__DOT__start = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->hashcore_tb__DOT__best_hash);
    vlSelf->hashcore_tb__DOT__best_hash_nonce = VL_RAND_RESET_I(32);
    vlSelf->hashcore_tb__DOT__enable = VL_RAND_RESET_I(1);
    vlSelf->hashcore_tb__DOT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->hashcore_tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->hashcore_tb__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(256, vlSelf->hashcore_tb__DOT__DUT__DOT__best_hash_reverse);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->hashcore_tb__DOT__DUT__DOT__completes[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->hashcore_tb__DOT__DUT__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b = 0;
    vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk6__DOT__k = 0;
    vlSelf->hashcore_tb__DOT__DUT__DOT____Vlvbound_h1a24ae08__0 = VL_RAND_RESET_I(1);
    vlSelf->hashcore_tb__DOT__DUT__DOT____Vlvbound_h50a59ce7__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__hashcore_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
