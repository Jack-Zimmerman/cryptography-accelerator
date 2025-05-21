// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdoublesha_tb.h for the primary calling header

#include "Vdoublesha_tb__pch.h"
#include "Vdoublesha_tb___024root.h"

VL_ATTR_COLD void Vdoublesha_tb___024root___eval_initial__TOP(Vdoublesha_tb___024root* vlSelf);
VlCoroutine Vdoublesha_tb___024root___eval_initial__TOP__Vtiming__0(Vdoublesha_tb___024root* vlSelf);

void Vdoublesha_tb___024root___eval_initial(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___eval_initial\n"); );
    // Body
    Vdoublesha_tb___024root___eval_initial__TOP(vlSelf);
    Vdoublesha_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__doublesha_tb__DOT__clk_i__0 
        = vlSelf->doublesha_tb__DOT__clk_i;
}

VL_INLINE_OPT VlCoroutine Vdoublesha_tb___024root___eval_initial__TOP__Vtiming__0(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1f4ULL, 
                                           nullptr, 
                                           "testbench/doublesha_tb.sv", 
                                           14);
        vlSelf->doublesha_tb__DOT__clk_i = (1U & (~ (IData)(vlSelf->doublesha_tb__DOT__clk_i)));
    }
}

void Vdoublesha_tb___024root___eval_act(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___eval_act\n"); );
}

extern const VlWide<16>/*511:0*/ Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0;
extern const VlWide<8>/*255:0*/ Vdoublesha_tb__ConstPool__CONST_hfc6abab7_0;
extern const VlWide<16>/*511:0*/ Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0;
extern const VlUnpacked<IData/*31:0*/, 256> Vdoublesha_tb__ConstPool__TABLE_hef79451c_0;

VL_INLINE_OPT void Vdoublesha_tb___024root___nba_sequent__TOP__0(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round = 0;
    CData/*0:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W2;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W2 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W3;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W3 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W4;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W4 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W5;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W5 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W6;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W6 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W7;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W7 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W8;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W8 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W10;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W10 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W11;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W11 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W12;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W12 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W13;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W13 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H0;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H0 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H1;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H1 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H2;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H2 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H3;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H3 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H4;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H4 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H5;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H5 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H6;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H6 = 0;
    IData/*31:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H7;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H7 = 0;
    CData/*2:0*/ __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter = 0;
    VlWide<16>/*511:0*/ __Vtemp_3;
    VlWide<16>/*511:0*/ __Vtemp_5;
    VlWide<8>/*255:0*/ __Vtemp_7;
    // Body
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H7 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H7;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H6 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H6;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H5 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H5;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H4 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H4;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H3 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H3;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H2 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H2;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H1 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H1;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H0 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H0;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W13 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W13;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W12 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W12;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W11 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W11;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W10 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W10;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W8 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W8;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W7 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W7;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W6 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W6;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W5 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W5;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W4 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W4;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W3 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W3;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W2 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W2;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
    if ((0U != (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__delay_left))) {
        vlSelf->doublesha_tb__DOT__DUT__DOT__delay_left 
            = (0xfU & ((IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__delay_left) 
                       - (IData)(1U)));
    } else if ((1U & (~ (((IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd) 
                          >> 3U) & ((2U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__state)) 
                                    | (4U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__state))))))) {
        if ((0U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__state))) {
            vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_i = 2U;
            vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_w_i = 1U;
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0U] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[0U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[1U] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[1U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[2U] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[2U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[3U] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[3U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[4U] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[4U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[5U] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[5U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[6U] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[6U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[7U] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[7U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[8U] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[8U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[9U] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[9U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xaU] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[0xaU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xbU] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[0xbU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xcU] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[0xcU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xdU] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[0xdU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xeU] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[0xeU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xfU] 
                = Vdoublesha_tb__ConstPool__CONST_hfc07fb70_0[0xfU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__state = 1U;
        } else if ((1U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__state))) {
            vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index)));
            vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_w_i = 0U;
            vlSelf->doublesha_tb__DOT__DUT__DOT__text_i 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xfU];
            VL_SHIFTL_WWI(512,512,32, __Vtemp_3, vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i, 0x20U);
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0U] 
                = __Vtemp_3[0U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[1U] 
                = __Vtemp_3[1U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[2U] 
                = __Vtemp_3[2U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[3U] 
                = __Vtemp_3[3U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[4U] 
                = __Vtemp_3[4U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[5U] 
                = __Vtemp_3[5U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[6U] 
                = __Vtemp_3[6U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[7U] 
                = __Vtemp_3[7U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[8U] 
                = __Vtemp_3[8U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[9U] 
                = __Vtemp_3[9U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xaU] 
                = __Vtemp_3[0xaU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xbU] 
                = __Vtemp_3[0xbU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xcU] 
                = __Vtemp_3[0xcU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xdU] 
                = __Vtemp_3[0xdU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xeU] 
                = __Vtemp_3[0xeU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xfU] 
                = __Vtemp_3[0xfU];
            if ((0x10U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index))) {
                vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index = 0U;
                vlSelf->doublesha_tb__DOT__DUT__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__state))) {
            vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_w_i = 1U;
            if (vlSelf->doublesha_tb__DOT__DUT__DOT__second_cycle) {
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfc6abab7_0[0U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[1U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfc6abab7_0[1U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[2U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfc6abab7_0[2U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[3U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfc6abab7_0[3U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[4U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfc6abab7_0[4U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[5U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfc6abab7_0[5U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[6U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfc6abab7_0[6U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[7U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfc6abab7_0[7U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[8U] 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[0U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[9U] 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[1U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xaU] 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[2U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xbU] 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[3U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xcU] 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[4U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xdU] 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[5U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xeU] 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[6U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xfU] 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[7U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_i = 2U;
            } else {
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[0U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[1U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[1U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[2U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[2U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[3U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[3U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[4U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[4U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[5U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[5U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[6U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[6U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[7U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[7U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[8U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[8U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[9U] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[9U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xaU] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[0xaU];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xbU] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[0xbU];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xcU] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[0xcU];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xdU] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[0xdU];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xeU] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[0xeU];
                vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xfU] 
                    = Vdoublesha_tb__ConstPool__CONST_hfa3620dd_0[0xfU];
                vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_i = 6U;
            }
            vlSelf->doublesha_tb__DOT__DUT__DOT__state = 3U;
        } else if ((3U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__state))) {
            vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_w_i = 0U;
            vlSelf->doublesha_tb__DOT__DUT__DOT__text_i 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xfU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index)));
            VL_SHIFTL_WWI(512,512,32, __Vtemp_5, vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i, 0x20U);
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0U] 
                = __Vtemp_5[0U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[1U] 
                = __Vtemp_5[1U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[2U] 
                = __Vtemp_5[2U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[3U] 
                = __Vtemp_5[3U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[4U] 
                = __Vtemp_5[4U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[5U] 
                = __Vtemp_5[5U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[6U] 
                = __Vtemp_5[6U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[7U] 
                = __Vtemp_5[7U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[8U] 
                = __Vtemp_5[8U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[9U] 
                = __Vtemp_5[9U];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xaU] 
                = __Vtemp_5[0xaU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xbU] 
                = __Vtemp_5[0xbU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xcU] 
                = __Vtemp_5[0xcU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xdU] 
                = __Vtemp_5[0xdU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xeU] 
                = __Vtemp_5[0xeU];
            vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i[0xfU] 
                = __Vtemp_5[0xfU];
            if ((0x10U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index))) {
                vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index = 0U;
                vlSelf->doublesha_tb__DOT__DUT__DOT__state = 4U;
            }
        } else if ((4U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__state))) {
            vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_i = 1U;
            vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_w_i = 1U;
            vlSelf->doublesha_tb__DOT__DUT__DOT__state = 5U;
        } else if ((5U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__state))) {
            vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_w_i = 0U;
            vlSelf->doublesha_tb__DOT__DUT__DOT__state = 6U;
            vlSelf->doublesha_tb__DOT__DUT__DOT__delay_left = 1U;
        } else if ((6U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__state))) {
            vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[0U] 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__text_o;
            vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index)));
            if ((8U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index))) {
                vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index = 0U;
                vlSelf->doublesha_tb__DOT__DUT__DOT__state = 7U;
                if (vlSelf->doublesha_tb__DOT__DUT__DOT__second_cycle) {
                    vlSelf->doublesha_tb__DOT__complete = 1U;
                    vlSelf->doublesha_tb__DOT__hash[0U] 
                        = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[0U];
                    vlSelf->doublesha_tb__DOT__hash[1U] 
                        = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[1U];
                    vlSelf->doublesha_tb__DOT__hash[2U] 
                        = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[2U];
                    vlSelf->doublesha_tb__DOT__hash[3U] 
                        = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[3U];
                    vlSelf->doublesha_tb__DOT__hash[4U] 
                        = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[4U];
                    vlSelf->doublesha_tb__DOT__hash[5U] 
                        = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[5U];
                    vlSelf->doublesha_tb__DOT__hash[6U] 
                        = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[6U];
                    vlSelf->doublesha_tb__DOT__hash[7U] 
                        = vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[7U];
                } else {
                    vlSelf->doublesha_tb__DOT__DUT__DOT__state = 2U;
                    vlSelf->doublesha_tb__DOT__DUT__DOT__second_cycle = 1U;
                }
            } else {
                VL_SHIFTL_WWI(256,256,32, __Vtemp_7, vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash, 0x20U);
                vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[0U] 
                    = __Vtemp_7[0U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[1U] 
                    = __Vtemp_7[1U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[2U] 
                    = __Vtemp_7[2U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[3U] 
                    = __Vtemp_7[3U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[4U] 
                    = __Vtemp_7[4U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[5U] 
                    = __Vtemp_7[5U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[6U] 
                    = __Vtemp_7[6U];
                vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash[7U] 
                    = __Vtemp_7[7U];
            }
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round) 
                     << 1U) | (IData)(vlSelf->doublesha_tb__DOT__rst_i));
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Kt 
        = Vdoublesha_tb__ConstPool__TABLE_hef79451c_0
        [__Vtableidx1];
    if (VL_UNLIKELY(vlSelf->doublesha_tb__DOT__complete)) {
        VL_WRITEF("%x\n",256,vlSelf->doublesha_tb__DOT__hash.data());
        VL_FINISH_MT("testbench/doublesha_tb.sv", 33, "");
    }
    if (vlSelf->doublesha_tb__DOT__rst_i) {
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy = 0U;
        vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W0 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W2 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W3 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W4 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W5 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W6 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W7 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W8 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W10 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W11 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W12 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W13 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H0 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H1 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H2 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H3 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H4 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H5 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H6 = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H7 = 0U;
        vlSelf->doublesha_tb__DOT__DUT__DOT__text_o = 0U;
        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter = 0U;
        vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd = 0U;
    } else {
        if (((((((((0U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round)) 
                   | (1U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                  | (2U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                 | (3U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                | (4U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
               | (5U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
              | (6U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
             | (7U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round)))) {
            if ((0U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) {
                if ((2U & (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd))) {
                    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W0 
                        = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                        = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy = 1U;
                    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                        = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                    if ((4U & (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd))) {
                        if ((4U & (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd))) {
                            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H0 
                                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H1 
                                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H2 
                                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H3 
                                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D;
                            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H4 
                                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H5 
                                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H6 
                                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H7 
                                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H;
                        }
                    } else {
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A = 0x6a09e667U;
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B = 0xbb67ae85U;
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C = 0x3c6ef372U;
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D = 0xa54ff53aU;
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E = 0x510e527fU;
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F = 0x9b05688cU;
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G = 0x1f83d9abU;
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H = 0x5be0cd19U;
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H0 = 0x6a09e667U;
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H1 = 0xbb67ae85U;
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H2 = 0x3c6ef372U;
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H3 = 0xa54ff53aU;
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H4 = 0x510e527fU;
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H5 = 0x9b05688cU;
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H6 = 0x1f83d9abU;
                        __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H7 = 0x5be0cd19U;
                    }
                } else {
                    __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round = 0U;
                }
            } else if ((1U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            } else if ((2U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W2 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            } else if ((3U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W3 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            } else if ((4U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W4 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            } else if ((5U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W5 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            } else if ((6U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W6 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            } else {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W7 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            }
        } else if (((((((((8U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round)) 
                          | (9U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                         | (0xaU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                        | (0xbU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                       | (0xcU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                      | (0xdU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                     | (0xeU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                    | (0xfU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round)))) {
            if ((8U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W8 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            } else if ((9U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            } else if ((0xaU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W10 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            } else if ((0xbU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W11 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            } else if ((0xcU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W12 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            } else if ((0xdU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W13 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            } else if ((0xeU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            } else {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__text_i;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                    = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            }
        } else if (((((((((((((((((((((((((((((((((
                                                   ((((((((((((((((0x10U 
                                                                   == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round)) 
                                                                  || (0x11U 
                                                                      == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                                 || (0x12U 
                                                                     == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                                || (0x13U 
                                                                    == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                               || (0x14U 
                                                                   == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                              || (0x15U 
                                                                  == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                             || (0x16U 
                                                                 == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                            || (0x17U 
                                                                == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                           || (0x18U 
                                                               == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                          || (0x19U 
                                                              == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                         || (0x1aU 
                                                             == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                        || (0x1bU 
                                                            == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                       || (0x1cU 
                                                           == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                      || (0x1dU 
                                                          == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                     || (0x1eU 
                                                         == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                    || (0x1fU 
                                                        == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                   || (0x20U 
                                                       == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                  || (0x21U 
                                                      == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                 || (0x22U 
                                                     == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                                || (0x23U 
                                                    == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                               || (0x24U 
                                                   == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                              || (0x25U 
                                                  == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                             || (0x26U 
                                                 == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                            || (0x27U 
                                                == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                           || (0x28U 
                                               == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                          || (0x29U 
                                              == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                         || (0x2aU 
                                             == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                        || (0x2bU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                       || (0x2cU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                      || (0x2dU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                     || (0x2eU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                    || (0x2fU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                   || (0x30U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                  || (0x31U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                 || (0x32U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                                || (0x33U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                               || (0x34U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                              || (0x35U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                             || (0x36U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                            || (0x37U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                           || (0x38U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                          || (0x39U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                         || (0x3aU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                        || (0x3bU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                       || (0x3cU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                      || (0x3dU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                     || (0x3eU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) 
                    || (0x3fU == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round)))) {
            vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W0 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W2;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W2 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W3;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W3 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W4;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W4 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W5;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W5 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W6;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W6 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W7;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W7 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W8;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W8 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W10;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W10 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W11;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W11 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W12;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W12 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W13;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W13 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
                = vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_Wt;
        } else if ((0x40U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round))) {
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
                = (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                   + vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H3);
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
                = (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                   + vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H7);
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round = 0U;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy = 0U;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
                = (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                   + vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H2);
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
                = (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                   + vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H6);
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                = (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                   + vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H1);
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
                = (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                   + vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H5);
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                = (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A 
                   + vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H0);
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                = (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E 
                   + vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H4);
        } else {
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round = 0U;
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy = 0U;
        }
        if ((1U & (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd))) {
            __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter = 7U;
        } else if (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy) {
            vlSelf->doublesha_tb__DOT__DUT__DOT__text_o = 0U;
        } else {
            vlSelf->doublesha_tb__DOT__DUT__DOT__text_o 
                = (((((((((7U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter)) 
                          | (6U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter))) 
                         | (5U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter))) 
                        | (4U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter))) 
                       | (3U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter))) 
                      | (2U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter))) 
                     | (1U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter))) 
                    | (0U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter)))
                    ? ((7U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter))
                        ? vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[7U]
                        : ((6U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter))
                            ? vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[6U]
                            : ((5U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter))
                                ? vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[5U]
                                : ((4U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter))
                                    ? vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[4U]
                                    : ((3U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter))
                                        ? vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[3U]
                                        : ((2U == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter))
                                            ? vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[2U]
                                            : ((1U 
                                                == (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter))
                                                ? vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[1U]
                                                : vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result[0U])))))))
                    : 0U);
            if ((0U != (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter))) {
                __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter 
                    = (7U & ((IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter) 
                             - (IData)(1U)));
            }
        }
        if (vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_w_i) {
            vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd 
                = ((8U & (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd)) 
                   | (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_i));
        } else {
            vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd 
                = ((7U & (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd)) 
                   | ((IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy) 
                      << 3U));
            if ((1U & (~ (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy)))) {
                vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd 
                    = (0xcU & (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd));
            }
        }
    }
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W2 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W2;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W3 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W3;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W4 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W4;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W5 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W5;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W6 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W6;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W7 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W7;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W8 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W8;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W10 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W10;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W11 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W11;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W12 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W12;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W13 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W13;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H0 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H0;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H1 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H1;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H2 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H2;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H3 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H3;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H4 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H4;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H5 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H5;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H6 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H6;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H7 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H7;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H;
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter;
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
    vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy 
        = __Vdly__doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy;
}

void Vdoublesha_tb___024root___eval_nba(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vdoublesha_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vdoublesha_tb___024root___timing_resume(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vdoublesha_tb___024root___eval_triggers__act(Vdoublesha_tb___024root* vlSelf);

bool Vdoublesha_tb___024root___eval_phase__act(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vdoublesha_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vdoublesha_tb___024root___timing_resume(vlSelf);
        Vdoublesha_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdoublesha_tb___024root___eval_phase__nba(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vdoublesha_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdoublesha_tb___024root___dump_triggers__nba(Vdoublesha_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdoublesha_tb___024root___dump_triggers__act(Vdoublesha_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdoublesha_tb___024root___eval(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vdoublesha_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/doublesha_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vdoublesha_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/doublesha_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vdoublesha_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vdoublesha_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vdoublesha_tb___024root___eval_debug_assertions(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
