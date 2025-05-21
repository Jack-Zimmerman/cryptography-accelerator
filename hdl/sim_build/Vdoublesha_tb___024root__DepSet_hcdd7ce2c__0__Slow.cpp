// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdoublesha_tb.h for the primary calling header

#include "Vdoublesha_tb__pch.h"
#include "Vdoublesha_tb___024root.h"

VL_ATTR_COLD void Vdoublesha_tb___024root___eval_static__TOP(Vdoublesha_tb___024root* vlSelf);

VL_ATTR_COLD void Vdoublesha_tb___024root___eval_static(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___eval_static\n"); );
    // Body
    Vdoublesha_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vdoublesha_tb___024root___eval_static__TOP(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_i = 2U;
    vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_w_i = 1U;
    vlSelf->doublesha_tb__DOT__DUT__DOT__second_cycle = 0U;
    vlSelf->doublesha_tb__DOT__DUT__DOT__delay_left = 0U;
    vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index = 0U;
    vlSelf->doublesha_tb__DOT__DUT__DOT__state = 0U;
}

VL_ATTR_COLD void Vdoublesha_tb___024root___eval_final(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdoublesha_tb___024root___dump_triggers__stl(Vdoublesha_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdoublesha_tb___024root___eval_phase__stl(Vdoublesha_tb___024root* vlSelf);

VL_ATTR_COLD void Vdoublesha_tb___024root___eval_settle(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___eval_settle\n"); );
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
            Vdoublesha_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench/doublesha_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vdoublesha_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdoublesha_tb___024root___dump_triggers__stl(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdoublesha_tb___024root___stl_sequent__TOP__0(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->doublesha_tb__DOT__complete)) {
        VL_WRITEF("%x\n",256,vlSelf->doublesha_tb__DOT__hash.data());
        VL_FINISH_MT("testbench/doublesha_tb.sv", 33, "");
    }
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round)));
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_Wt 
        = ((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
              << 0xfU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                          >> 0x11U)) ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                          << 0xdU) 
                                         | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                            >> 0x13U)) 
                                        ^ VL_SHIFTR_III(32,32,32, vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14, 0xaU))) 
           + (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9 
              + ((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                    << 0x19U) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                 >> 7U)) ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                              << 0xeU) 
                                             | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                            ^ VL_SHIFTR_III(32,32,32, vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1, 3U))) 
                 + vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W0)));
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[0U] 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[1U] 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[2U] 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[3U] 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[4U] 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[5U] 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[6U] 
        = (IData)((((QData)((IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A)) 
                    << 0x20U) | (QData)((IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B))));
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[7U] 
        = (IData)(((((QData)((IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A)) 
                     << 0x20U) | (QData)((IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B))) 
                   >> 0x20U));
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__T1_32 
        = (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
           + ((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                 << 0x1aU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                              >> 6U)) ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                           << 0x15U) 
                                          | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                             >> 0xbU)) 
                                         ^ ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                             << 7U) 
                                            | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                               >> 0x19U)))) 
              + (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                   & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F) 
                  ^ ((~ vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E) 
                     & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G)) 
                 + (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Kt 
                    + vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt))));
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E 
        = (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
           + vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__T1_32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A 
        = (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__T1_32 
           + ((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                 << 0x1eU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                              >> 2U)) ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                           << 0x13U) 
                                          | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                             >> 0xdU)) 
                                         ^ ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                             << 0xaU) 
                                            | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                               >> 0x16U)))) 
              + ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                  & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B) 
                 ^ ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                     & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C) 
                    ^ (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                       & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C)))));
}

VL_ATTR_COLD void Vdoublesha_tb___024root___eval_stl(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vdoublesha_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vdoublesha_tb___024root___eval_triggers__stl(Vdoublesha_tb___024root* vlSelf);

VL_ATTR_COLD bool Vdoublesha_tb___024root___eval_phase__stl(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vdoublesha_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vdoublesha_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdoublesha_tb___024root___dump_triggers__act(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge doublesha_tb.clk_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdoublesha_tb___024root___dump_triggers__nba(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge doublesha_tb.clk_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdoublesha_tb___024root___ctor_var_reset(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->doublesha_tb__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->doublesha_tb__DOT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->doublesha_tb__DOT__complete = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->doublesha_tb__DOT__hash);
    vlSelf->doublesha_tb__DOT__DUT__DOT__text_i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i);
    vlSelf->doublesha_tb__DOT__DUT__DOT__tmp = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1024, vlSelf->doublesha_tb__DOT__DUT__DOT__message);
    VL_RAND_RESET_W(256, vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash);
    vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_i = VL_RAND_RESET_I(3);
    vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_w_i = VL_RAND_RESET_I(1);
    vlSelf->doublesha_tb__DOT__DUT__DOT__text_o = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__second_cycle = VL_RAND_RESET_I(1);
    vlSelf->doublesha_tb__DOT__DUT__DOT__delay_left = VL_RAND_RESET_I(4);
    vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index = VL_RAND_RESET_I(5);
    vlSelf->doublesha_tb__DOT__DUT__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd = VL_RAND_RESET_I(4);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round = VL_RAND_RESET_I(7);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1 = VL_RAND_RESET_I(7);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter = VL_RAND_RESET_I(3);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H0 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H1 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H2 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H3 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H4 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H5 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H6 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H7 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W0 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W2 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W3 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W4 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W5 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W6 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W7 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W8 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W10 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W11 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W12 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W13 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Kt = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__T1_32 = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_Wt = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E = VL_RAND_RESET_I(32);
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result);
    vlSelf->__Vtrigprevexpr___TOP__doublesha_tb__DOT__clk_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
