// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___eval_triggers__stl(Vtop_tb___024root* vlSelf);
VL_ATTR_COLD void Vtop_tb___024root___eval_stl(Vtop_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtop_tb___024root___eval_phase__stl(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge top_tb.CLK_100MHZ)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge top_tb.CLK_100MHZ or posedge top_tb.TOP.rst_i)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge top_tb.CLK_100MHZ)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge top_tb.CLK_100MHZ or posedge top_tb.TOP.rst_i)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop_tb___024root___ctor_var_reset(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->top_tb__DOT__CLK_100MHZ = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__UART_RXD = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__UART_TXD = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__LED = VL_RAND_RESET_I(16);
    vlSelf->top_tb__DOT__read_byte = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(256, vlSelf->top_tb__DOT__hash);
    vlSelf->top_tb__DOT__bits_read = VL_RAND_RESET_I(4);
    vlSelf->top_tb__DOT__hashing = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b = 0;
    vlSelf->top_tb__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->top_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b = 0;
    vlSelf->top_tb__DOT__TOP__DOT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__TOP__DOT__finished_recieving = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__TOP__DOT__finished_sending = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__TOP__DOT__read_bytes_passed = VL_RAND_RESET_I(8);
    vlSelf->top_tb__DOT__TOP__DOT__write_bytes_passed = VL_RAND_RESET_I(8);
    vlSelf->top_tb__DOT__TOP__DOT__repeat_bytes_sent = VL_RAND_RESET_I(3);
    vlSelf->top_tb__DOT__TOP__DOT__tx_byte = VL_RAND_RESET_I(8);
    vlSelf->top_tb__DOT__TOP__DOT__second_tick = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(608, vlSelf->top_tb__DOT__TOP__DOT__block_info);
    VL_RAND_RESET_W(256, vlSelf->top_tb__DOT__TOP__DOT__best_hash);
    VL_RAND_RESET_W(256, vlSelf->top_tb__DOT__TOP__DOT__copy_hash);
    vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce_copy = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__TOP__DOT__TIMER__DOT__cycles = VL_RAND_RESET_I(27);
    vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(256, vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk4__DOT__k = 0;
    vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_hb8c511ee__0 = VL_RAND_RESET_I(32);
    vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data_R = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count = VL_RAND_RESET_I(8);
    vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Bit_Index = VL_RAND_RESET_I(3);
    vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Byte = VL_RAND_RESET_I(8);
    vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_DV = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main = VL_RAND_RESET_I(3);
    vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main = VL_RAND_RESET_I(3);
    vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count = VL_RAND_RESET_I(8);
    vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Bit_Index = VL_RAND_RESET_I(3);
    vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Data = VL_RAND_RESET_I(8);
    vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Done = VL_RAND_RESET_I(1);
    vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Active = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__top_tb__DOT__TOP__DOT__TIMER__DOT__cycles = VL_RAND_RESET_I(27);
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__CLK_100MHZ__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top_tb__DOT__TOP__DOT__rst_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
