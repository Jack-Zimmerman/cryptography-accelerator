// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_doublesha.h"

extern const VlWide<8>/*255:0*/ Vtop_tb__ConstPool__CONST_h9e67c271_0;
extern const VlWide<16>/*511:0*/ Vtop_tb__ConstPool__CONST_h93e1b771_0;
extern const VlWide<8>/*255:0*/ Vtop_tb__ConstPool__CONST_hfc6abab7_0;
extern const VlWide<12>/*383:0*/ Vtop_tb__ConstPool__CONST_hb9eaa18d_0;
extern const VlUnpacked<IData/*31:0*/, 256> Vtop_tb__ConstPool__TABLE_hef79451c_0;

VL_INLINE_OPT void Vtop_tb_doublesha___nba_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE__0(Vtop_tb_doublesha* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_doublesha___nba_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vdly__sha_core__DOT__round;
    __Vdly__sha_core__DOT__round = 0;
    CData/*0:0*/ __Vdly__sha_core__DOT__busy;
    __Vdly__sha_core__DOT__busy = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W1;
    __Vdly__sha_core__DOT__W1 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W2;
    __Vdly__sha_core__DOT__W2 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W3;
    __Vdly__sha_core__DOT__W3 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W4;
    __Vdly__sha_core__DOT__W4 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W5;
    __Vdly__sha_core__DOT__W5 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W6;
    __Vdly__sha_core__DOT__W6 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W7;
    __Vdly__sha_core__DOT__W7 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W8;
    __Vdly__sha_core__DOT__W8 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W9;
    __Vdly__sha_core__DOT__W9 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W10;
    __Vdly__sha_core__DOT__W10 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W11;
    __Vdly__sha_core__DOT__W11 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W12;
    __Vdly__sha_core__DOT__W12 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W13;
    __Vdly__sha_core__DOT__W13 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W14;
    __Vdly__sha_core__DOT__W14 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__Wt;
    __Vdly__sha_core__DOT__Wt = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__A;
    __Vdly__sha_core__DOT__A = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__B;
    __Vdly__sha_core__DOT__B = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__C;
    __Vdly__sha_core__DOT__C = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__D;
    __Vdly__sha_core__DOT__D = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__E;
    __Vdly__sha_core__DOT__E = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__F;
    __Vdly__sha_core__DOT__F = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__G;
    __Vdly__sha_core__DOT__G = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H;
    __Vdly__sha_core__DOT__H = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H0;
    __Vdly__sha_core__DOT__H0 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H1;
    __Vdly__sha_core__DOT__H1 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H2;
    __Vdly__sha_core__DOT__H2 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H3;
    __Vdly__sha_core__DOT__H3 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H4;
    __Vdly__sha_core__DOT__H4 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H5;
    __Vdly__sha_core__DOT__H5 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H6;
    __Vdly__sha_core__DOT__H6 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H7;
    __Vdly__sha_core__DOT__H7 = 0;
    CData/*2:0*/ __Vdly__sha_core__DOT__read_counter;
    __Vdly__sha_core__DOT__read_counter = 0;
    VlWide<16>/*511:0*/ __Vtemp_3;
    VlWide<16>/*511:0*/ __Vtemp_7;
    VlWide<8>/*255:0*/ __Vtemp_9;
    // Body
    __Vdly__sha_core__DOT__read_counter = vlSelf->__PVT__sha_core__DOT__read_counter;
    __Vdly__sha_core__DOT__H7 = vlSelf->__PVT__sha_core__DOT__H7;
    __Vdly__sha_core__DOT__H6 = vlSelf->__PVT__sha_core__DOT__H6;
    __Vdly__sha_core__DOT__H5 = vlSelf->__PVT__sha_core__DOT__H5;
    __Vdly__sha_core__DOT__H4 = vlSelf->__PVT__sha_core__DOT__H4;
    __Vdly__sha_core__DOT__H3 = vlSelf->__PVT__sha_core__DOT__H3;
    __Vdly__sha_core__DOT__H2 = vlSelf->__PVT__sha_core__DOT__H2;
    __Vdly__sha_core__DOT__H1 = vlSelf->__PVT__sha_core__DOT__H1;
    __Vdly__sha_core__DOT__H0 = vlSelf->__PVT__sha_core__DOT__H0;
    __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__sha_core__DOT__W13;
    __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__sha_core__DOT__W12;
    __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__sha_core__DOT__W11;
    __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__sha_core__DOT__W10;
    __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__sha_core__DOT__W8;
    __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__sha_core__DOT__W7;
    __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__sha_core__DOT__W6;
    __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__sha_core__DOT__W5;
    __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__sha_core__DOT__W4;
    __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__sha_core__DOT__W3;
    __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__sha_core__DOT__W2;
    __Vdly__sha_core__DOT__busy = vlSelf->__PVT__sha_core__DOT__busy;
    __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round;
    __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__sha_core__DOT__W14;
    __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__sha_core__DOT__W9;
    __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__sha_core__DOT__W1;
    __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__D;
    __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__C;
    __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__B;
    __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__A;
    __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__sha_core__DOT__Wt;
    __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__H;
    __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__G;
    __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__F;
    __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__E;
    if (vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst) {
        vlSelf->__PVT__hash_index = 0U;
        vlSelf->__PVT__delay_left = 0U;
        vlSelf->__PVT__first_hash[0U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__first_hash[1U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__first_hash[2U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__first_hash[3U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__first_hash[4U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__first_hash[5U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__first_hash[6U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__first_hash[7U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__second_cycle = 0U;
        vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->__PVT__tmp_i[8U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->__PVT__tmp_i[9U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->__PVT__tmp_i[0xaU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->__PVT__tmp_i[0xbU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->__PVT__tmp_i[0xcU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->__PVT__tmp_i[0xdU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->__PVT__tmp_i[0xeU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->__PVT__tmp_i[0xfU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->complete = 0U;
        vlSelf->__PVT__state = 0U;
        __Vdly__sha_core__DOT__round = 0U;
        __Vdly__sha_core__DOT__busy = 0U;
        vlSelf->__PVT__sha_core__DOT__W0 = 0U;
        __Vdly__sha_core__DOT__W1 = 0U;
        __Vdly__sha_core__DOT__W2 = 0U;
        __Vdly__sha_core__DOT__W3 = 0U;
        __Vdly__sha_core__DOT__W4 = 0U;
        __Vdly__sha_core__DOT__W5 = 0U;
        __Vdly__sha_core__DOT__W6 = 0U;
        __Vdly__sha_core__DOT__W7 = 0U;
        __Vdly__sha_core__DOT__W8 = 0U;
        __Vdly__sha_core__DOT__W9 = 0U;
        __Vdly__sha_core__DOT__W10 = 0U;
        __Vdly__sha_core__DOT__W11 = 0U;
        __Vdly__sha_core__DOT__W12 = 0U;
        __Vdly__sha_core__DOT__W13 = 0U;
        __Vdly__sha_core__DOT__W14 = 0U;
        __Vdly__sha_core__DOT__Wt = 0U;
        __Vdly__sha_core__DOT__A = 0U;
        __Vdly__sha_core__DOT__B = 0U;
        __Vdly__sha_core__DOT__C = 0U;
        __Vdly__sha_core__DOT__D = 0U;
        __Vdly__sha_core__DOT__E = 0U;
        __Vdly__sha_core__DOT__F = 0U;
        __Vdly__sha_core__DOT__G = 0U;
        __Vdly__sha_core__DOT__H = 0U;
        __Vdly__sha_core__DOT__H0 = 0U;
        __Vdly__sha_core__DOT__H1 = 0U;
        __Vdly__sha_core__DOT__H2 = 0U;
        __Vdly__sha_core__DOT__H3 = 0U;
        __Vdly__sha_core__DOT__H4 = 0U;
        __Vdly__sha_core__DOT__H5 = 0U;
        __Vdly__sha_core__DOT__H6 = 0U;
        __Vdly__sha_core__DOT__H7 = 0U;
        vlSelf->__PVT__text_o = 0U;
        __Vdly__sha_core__DOT__read_counter = 0U;
        vlSelf->__PVT__sha_core__DOT__cmd = 0U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__delay_left))) {
            vlSelf->__PVT__delay_left = (0xfU & ((IData)(vlSelf->__PVT__delay_left) 
                                                 - (IData)(1U)));
        } else if ((1U & (~ (((IData)(vlSelf->__PVT__sha_core__DOT__cmd) 
                              >> 3U) & ((2U == (IData)(vlSelf->__PVT__state)) 
                                        | (4U == (IData)(vlSelf->__PVT__state))))))) {
            if ((0U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_i = 2U;
                vlSelf->__PVT__cmd_w_i = 1U;
                vlSelf->__PVT__tmp_i[0U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[3U];
                vlSelf->__PVT__tmp_i[1U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[4U];
                vlSelf->__PVT__tmp_i[2U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[5U];
                vlSelf->__PVT__tmp_i[3U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[6U];
                vlSelf->__PVT__tmp_i[4U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[7U];
                vlSelf->__PVT__tmp_i[5U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[8U];
                vlSelf->__PVT__tmp_i[6U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[9U];
                vlSelf->__PVT__tmp_i[7U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xaU];
                vlSelf->__PVT__tmp_i[8U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xbU];
                vlSelf->__PVT__tmp_i[9U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xcU];
                vlSelf->__PVT__tmp_i[0xaU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xdU];
                vlSelf->__PVT__tmp_i[0xbU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xeU];
                vlSelf->__PVT__tmp_i[0xcU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xfU];
                vlSelf->__PVT__tmp_i[0xdU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x10U];
                vlSelf->__PVT__tmp_i[0xeU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x11U];
                vlSelf->__PVT__tmp_i[0xfU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x12U];
                vlSelf->__PVT__state = 1U;
            } else if ((1U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__text_i = vlSelf->__PVT__tmp_i[0xfU];
                VL_SHIFTL_WWI(512,512,32, __Vtemp_3, vlSelf->__PVT__tmp_i, 0x20U);
                vlSelf->__PVT__tmp_i[0U] = __Vtemp_3[0U];
                vlSelf->__PVT__tmp_i[1U] = __Vtemp_3[1U];
                vlSelf->__PVT__tmp_i[2U] = __Vtemp_3[2U];
                vlSelf->__PVT__tmp_i[3U] = __Vtemp_3[3U];
                vlSelf->__PVT__tmp_i[4U] = __Vtemp_3[4U];
                vlSelf->__PVT__tmp_i[5U] = __Vtemp_3[5U];
                vlSelf->__PVT__tmp_i[6U] = __Vtemp_3[6U];
                vlSelf->__PVT__tmp_i[7U] = __Vtemp_3[7U];
                vlSelf->__PVT__tmp_i[8U] = __Vtemp_3[8U];
                vlSelf->__PVT__tmp_i[9U] = __Vtemp_3[9U];
                vlSelf->__PVT__tmp_i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->__PVT__tmp_i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->__PVT__tmp_i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->__PVT__tmp_i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->__PVT__tmp_i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->__PVT__tmp_i[0xfU] = __Vtemp_3[0xfU];
                if ((0x10U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 2U;
                }
            } else if ((2U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 1U;
                if (vlSelf->__PVT__second_cycle) {
                    vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[0U];
                    vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[1U];
                    vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[2U];
                    vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[3U];
                    vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[4U];
                    vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[5U];
                    vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[6U];
                    vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[7U];
                    vlSelf->__PVT__tmp_i[8U] = vlSelf->__PVT__first_hash[0U];
                    vlSelf->__PVT__tmp_i[9U] = vlSelf->__PVT__first_hash[1U];
                    vlSelf->__PVT__tmp_i[0xaU] = vlSelf->__PVT__first_hash[2U];
                    vlSelf->__PVT__tmp_i[0xbU] = vlSelf->__PVT__first_hash[3U];
                    vlSelf->__PVT__tmp_i[0xcU] = vlSelf->__PVT__first_hash[4U];
                    vlSelf->__PVT__tmp_i[0xdU] = vlSelf->__PVT__first_hash[5U];
                    vlSelf->__PVT__tmp_i[0xeU] = vlSelf->__PVT__first_hash[6U];
                    vlSelf->__PVT__tmp_i[0xfU] = vlSelf->__PVT__first_hash[7U];
                    vlSelf->__PVT__cmd_i = 2U;
                } else {
                    vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0U];
                    vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[1U];
                    vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[2U];
                    vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[3U];
                    vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[4U];
                    vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[5U];
                    vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[6U];
                    vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[7U];
                    vlSelf->__PVT__tmp_i[8U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[8U];
                    vlSelf->__PVT__tmp_i[9U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[9U];
                    vlSelf->__PVT__tmp_i[0xaU] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0xaU];
                    vlSelf->__PVT__tmp_i[0xbU] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0xbU];
                    vlSelf->__PVT__tmp_i[0xcU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                        [0U];
                    vlSelf->__PVT__tmp_i[0xdU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0U];
                    vlSelf->__PVT__tmp_i[0xeU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[1U];
                    vlSelf->__PVT__tmp_i[0xfU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[2U];
                    vlSelf->__PVT__cmd_i = 6U;
                }
                vlSelf->__PVT__state = 3U;
            } else if ((3U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__text_i = vlSelf->__PVT__tmp_i[0xfU];
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                VL_SHIFTL_WWI(512,512,32, __Vtemp_7, vlSelf->__PVT__tmp_i, 0x20U);
                vlSelf->__PVT__tmp_i[0U] = __Vtemp_7[0U];
                vlSelf->__PVT__tmp_i[1U] = __Vtemp_7[1U];
                vlSelf->__PVT__tmp_i[2U] = __Vtemp_7[2U];
                vlSelf->__PVT__tmp_i[3U] = __Vtemp_7[3U];
                vlSelf->__PVT__tmp_i[4U] = __Vtemp_7[4U];
                vlSelf->__PVT__tmp_i[5U] = __Vtemp_7[5U];
                vlSelf->__PVT__tmp_i[6U] = __Vtemp_7[6U];
                vlSelf->__PVT__tmp_i[7U] = __Vtemp_7[7U];
                vlSelf->__PVT__tmp_i[8U] = __Vtemp_7[8U];
                vlSelf->__PVT__tmp_i[9U] = __Vtemp_7[9U];
                vlSelf->__PVT__tmp_i[0xaU] = __Vtemp_7[0xaU];
                vlSelf->__PVT__tmp_i[0xbU] = __Vtemp_7[0xbU];
                vlSelf->__PVT__tmp_i[0xcU] = __Vtemp_7[0xcU];
                vlSelf->__PVT__tmp_i[0xdU] = __Vtemp_7[0xdU];
                vlSelf->__PVT__tmp_i[0xeU] = __Vtemp_7[0xeU];
                vlSelf->__PVT__tmp_i[0xfU] = __Vtemp_7[0xfU];
                if ((0x10U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 4U;
                }
            } else if ((4U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_i = 1U;
                vlSelf->__PVT__cmd_w_i = 1U;
                vlSelf->__PVT__state = 5U;
            } else if ((5U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__state = 6U;
                vlSelf->__PVT__delay_left = 1U;
            } else if ((6U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__first_hash[0U] = vlSelf->__PVT__text_o;
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                if ((8U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 7U;
                    if (vlSelf->__PVT__second_cycle) {
                        vlSelf->complete = 1U;
                        vlSelf->hash[0U] = vlSelf->__PVT__first_hash[0U];
                        vlSelf->hash[1U] = vlSelf->__PVT__first_hash[1U];
                        vlSelf->hash[2U] = vlSelf->__PVT__first_hash[2U];
                        vlSelf->hash[3U] = vlSelf->__PVT__first_hash[3U];
                        vlSelf->hash[4U] = vlSelf->__PVT__first_hash[4U];
                        vlSelf->hash[5U] = vlSelf->__PVT__first_hash[5U];
                        vlSelf->hash[6U] = vlSelf->__PVT__first_hash[6U];
                        vlSelf->hash[7U] = vlSelf->__PVT__first_hash[7U];
                    } else {
                        vlSelf->__PVT__state = 2U;
                        vlSelf->__PVT__second_cycle = 1U;
                    }
                } else {
                    VL_SHIFTL_WWI(256,256,32, __Vtemp_9, vlSelf->__PVT__first_hash, 0x20U);
                    vlSelf->__PVT__first_hash[0U] = 
                        __Vtemp_9[0U];
                    vlSelf->__PVT__first_hash[1U] = 
                        __Vtemp_9[1U];
                    vlSelf->__PVT__first_hash[2U] = 
                        __Vtemp_9[2U];
                    vlSelf->__PVT__first_hash[3U] = 
                        __Vtemp_9[3U];
                    vlSelf->__PVT__first_hash[4U] = 
                        __Vtemp_9[4U];
                    vlSelf->__PVT__first_hash[5U] = 
                        __Vtemp_9[5U];
                    vlSelf->__PVT__first_hash[6U] = 
                        __Vtemp_9[6U];
                    vlSelf->__PVT__first_hash[7U] = 
                        __Vtemp_9[7U];
                }
            }
        }
        if (((((((((0U == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                   | (1U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                  | (2U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                 | (3U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                | (4U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
               | (5U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
              | (6U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
             | (7U == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            if ((0U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                if ((2U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                    vlSelf->__PVT__sha_core__DOT__W0 
                        = vlSelf->__PVT__text_i;
                    __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                    __Vdly__sha_core__DOT__busy = 1U;
                    __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                    if ((4U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                        if ((4U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                            __Vdly__sha_core__DOT__H0 
                                = vlSelf->__PVT__sha_core__DOT__A;
                            __Vdly__sha_core__DOT__H1 
                                = vlSelf->__PVT__sha_core__DOT__B;
                            __Vdly__sha_core__DOT__H2 
                                = vlSelf->__PVT__sha_core__DOT__C;
                            __Vdly__sha_core__DOT__H3 
                                = vlSelf->__PVT__sha_core__DOT__D;
                            __Vdly__sha_core__DOT__H4 
                                = vlSelf->__PVT__sha_core__DOT__E;
                            __Vdly__sha_core__DOT__H5 
                                = vlSelf->__PVT__sha_core__DOT__F;
                            __Vdly__sha_core__DOT__H6 
                                = vlSelf->__PVT__sha_core__DOT__G;
                            __Vdly__sha_core__DOT__H7 
                                = vlSelf->__PVT__sha_core__DOT__H;
                        }
                    } else {
                        __Vdly__sha_core__DOT__A = 0x6a09e667U;
                        __Vdly__sha_core__DOT__B = 0xbb67ae85U;
                        __Vdly__sha_core__DOT__C = 0x3c6ef372U;
                        __Vdly__sha_core__DOT__D = 0xa54ff53aU;
                        __Vdly__sha_core__DOT__E = 0x510e527fU;
                        __Vdly__sha_core__DOT__F = 0x9b05688cU;
                        __Vdly__sha_core__DOT__G = 0x1f83d9abU;
                        __Vdly__sha_core__DOT__H = 0x5be0cd19U;
                        __Vdly__sha_core__DOT__H0 = 0x6a09e667U;
                        __Vdly__sha_core__DOT__H1 = 0xbb67ae85U;
                        __Vdly__sha_core__DOT__H2 = 0x3c6ef372U;
                        __Vdly__sha_core__DOT__H3 = 0xa54ff53aU;
                        __Vdly__sha_core__DOT__H4 = 0x510e527fU;
                        __Vdly__sha_core__DOT__H5 = 0x9b05688cU;
                        __Vdly__sha_core__DOT__H6 = 0x1f83d9abU;
                        __Vdly__sha_core__DOT__H7 = 0x5be0cd19U;
                    }
                } else {
                    __Vdly__sha_core__DOT__round = 0U;
                }
            } else if ((1U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((2U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((3U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((4U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((5U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((6U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else {
                __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            }
        } else if (((((((((8U == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                          | (9U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                         | (0xaU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                        | (0xbU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                       | (0xcU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                      | (0xdU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                     | (0xeU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                    | (0xfU == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            if ((8U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((9U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xaU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xbU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xcU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xdU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xeU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else {
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            }
        } else if (((((((((((((((((((((((((((((((((
                                                   ((((((((((((((((0x10U 
                                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                                                                  || (0x11U 
                                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                                 || (0x12U 
                                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                                || (0x13U 
                                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                               || (0x14U 
                                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                              || (0x15U 
                                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                             || (0x16U 
                                                                 == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                            || (0x17U 
                                                                == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                           || (0x18U 
                                                               == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                          || (0x19U 
                                                              == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                         || (0x1aU 
                                                             == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                        || (0x1bU 
                                                            == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                       || (0x1cU 
                                                           == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                      || (0x1dU 
                                                          == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                     || (0x1eU 
                                                         == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                    || (0x1fU 
                                                        == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                   || (0x20U 
                                                       == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                  || (0x21U 
                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                 || (0x22U 
                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                || (0x23U 
                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                               || (0x24U 
                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                              || (0x25U 
                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                             || (0x26U 
                                                 == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                            || (0x27U 
                                                == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                           || (0x28U 
                                               == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                          || (0x29U 
                                              == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                         || (0x2aU 
                                             == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                        || (0x2bU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                       || (0x2cU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                      || (0x2dU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                     || (0x2eU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                    || (0x2fU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                   || (0x30U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                  || (0x31U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                 || (0x32U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                || (0x33U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                               || (0x34U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                              || (0x35U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                             || (0x36U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                            || (0x37U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                           || (0x38U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                          || (0x39U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                         || (0x3aU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                        || (0x3bU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                       || (0x3cU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                      || (0x3dU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                     || (0x3eU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                    || (0x3fU == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            vlSelf->__PVT__sha_core__DOT__W0 = vlSelf->__PVT__sha_core__DOT__W1;
            __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
            __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
            __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
            __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__sha_core__DOT__W2;
            __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
            __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
            __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__sha_core__DOT__W3;
            __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
            __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
            __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__sha_core__DOT__W4;
            __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
            __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__sha_core__DOT__W5;
            __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__sha_core__DOT__W6;
            __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__sha_core__DOT__W7;
            __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__sha_core__DOT__W8;
            __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__sha_core__DOT__W9;
            __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__sha_core__DOT__W10;
            __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__sha_core__DOT__W11;
            __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__sha_core__DOT__W12;
            __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__sha_core__DOT__W13;
            __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__sha_core__DOT__W14;
            __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__sha_core__DOT__Wt;
            __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__sha_core__DOT__next_Wt;
        } else if ((0x40U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
            __Vdly__sha_core__DOT__D = (vlSelf->__PVT__sha_core__DOT__C 
                                        + vlSelf->__PVT__sha_core__DOT__H3);
            __Vdly__sha_core__DOT__H = (vlSelf->__PVT__sha_core__DOT__G 
                                        + vlSelf->__PVT__sha_core__DOT__H7);
            __Vdly__sha_core__DOT__round = 0U;
            __Vdly__sha_core__DOT__busy = 0U;
            __Vdly__sha_core__DOT__C = (vlSelf->__PVT__sha_core__DOT__B 
                                        + vlSelf->__PVT__sha_core__DOT__H2);
            __Vdly__sha_core__DOT__G = (vlSelf->__PVT__sha_core__DOT__F 
                                        + vlSelf->__PVT__sha_core__DOT__H6);
            __Vdly__sha_core__DOT__B = (vlSelf->__PVT__sha_core__DOT__A 
                                        + vlSelf->__PVT__sha_core__DOT__H1);
            __Vdly__sha_core__DOT__F = (vlSelf->__PVT__sha_core__DOT__E 
                                        + vlSelf->__PVT__sha_core__DOT__H5);
            __Vdly__sha_core__DOT__A = (vlSelf->__PVT__sha_core__DOT__next_A 
                                        + vlSelf->__PVT__sha_core__DOT__H0);
            __Vdly__sha_core__DOT__E = (vlSelf->__PVT__sha_core__DOT__next_E 
                                        + vlSelf->__PVT__sha_core__DOT__H4);
        } else {
            __Vdly__sha_core__DOT__round = 0U;
            __Vdly__sha_core__DOT__busy = 0U;
        }
        if ((1U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
            __Vdly__sha_core__DOT__read_counter = 7U;
        } else if (vlSelf->__PVT__sha_core__DOT__busy) {
            vlSelf->__PVT__text_o = 0U;
        } else {
            vlSelf->__PVT__text_o = (((((((((7U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter)) 
                                            | (6U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                           | (5U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                          | (4U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                         | (3U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                        | (2U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                       | (1U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                      | (0U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter)))
                                      ? ((7U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                          ? vlSelf->__PVT__sha_core__DOT__SHA256_result[7U]
                                          : ((6U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                              ? vlSelf->__PVT__sha_core__DOT__SHA256_result[6U]
                                              : ((5U 
                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                  ? 
                                                 vlSelf->__PVT__sha_core__DOT__SHA256_result[5U]
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                   ? 
                                                  vlSelf->__PVT__sha_core__DOT__SHA256_result[4U]
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                    ? 
                                                   vlSelf->__PVT__sha_core__DOT__SHA256_result[3U]
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                     ? 
                                                    vlSelf->__PVT__sha_core__DOT__SHA256_result[2U]
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                      ? 
                                                     vlSelf->__PVT__sha_core__DOT__SHA256_result[1U]
                                                      : 
                                                     vlSelf->__PVT__sha_core__DOT__SHA256_result[0U])))))))
                                      : 0U);
            if ((0U != (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) {
                __Vdly__sha_core__DOT__read_counter 
                    = (7U & ((IData)(vlSelf->__PVT__sha_core__DOT__read_counter) 
                             - (IData)(1U)));
            }
        }
        if (vlSelf->__PVT__cmd_w_i) {
            vlSelf->__PVT__sha_core__DOT__cmd = ((8U 
                                                  & (IData)(vlSelf->__PVT__sha_core__DOT__cmd)) 
                                                 | (IData)(vlSelf->__PVT__cmd_i));
        } else {
            vlSelf->__PVT__sha_core__DOT__cmd = ((7U 
                                                  & (IData)(vlSelf->__PVT__sha_core__DOT__cmd)) 
                                                 | ((IData)(vlSelf->__PVT__sha_core__DOT__busy) 
                                                    << 3U));
            if ((1U & (~ (IData)(vlSelf->__PVT__sha_core__DOT__busy)))) {
                vlSelf->__PVT__sha_core__DOT__cmd = 
                    (0xcU & (IData)(vlSelf->__PVT__sha_core__DOT__cmd));
            }
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->__PVT__sha_core__DOT__round) 
                     << 1U) | (IData)(vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst));
    vlSelf->__PVT__sha_core__DOT__Kt = Vtop_tb__ConstPool__TABLE_hef79451c_0
        [__Vtableidx1];
    vlSelf->__PVT__sha_core__DOT__W2 = __Vdly__sha_core__DOT__W2;
    vlSelf->__PVT__sha_core__DOT__W3 = __Vdly__sha_core__DOT__W3;
    vlSelf->__PVT__sha_core__DOT__W4 = __Vdly__sha_core__DOT__W4;
    vlSelf->__PVT__sha_core__DOT__W5 = __Vdly__sha_core__DOT__W5;
    vlSelf->__PVT__sha_core__DOT__W6 = __Vdly__sha_core__DOT__W6;
    vlSelf->__PVT__sha_core__DOT__W7 = __Vdly__sha_core__DOT__W7;
    vlSelf->__PVT__sha_core__DOT__W8 = __Vdly__sha_core__DOT__W8;
    vlSelf->__PVT__sha_core__DOT__W10 = __Vdly__sha_core__DOT__W10;
    vlSelf->__PVT__sha_core__DOT__W11 = __Vdly__sha_core__DOT__W11;
    vlSelf->__PVT__sha_core__DOT__W12 = __Vdly__sha_core__DOT__W12;
    vlSelf->__PVT__sha_core__DOT__W13 = __Vdly__sha_core__DOT__W13;
    vlSelf->__PVT__sha_core__DOT__H0 = __Vdly__sha_core__DOT__H0;
    vlSelf->__PVT__sha_core__DOT__H1 = __Vdly__sha_core__DOT__H1;
    vlSelf->__PVT__sha_core__DOT__H2 = __Vdly__sha_core__DOT__H2;
    vlSelf->__PVT__sha_core__DOT__H3 = __Vdly__sha_core__DOT__H3;
    vlSelf->__PVT__sha_core__DOT__H4 = __Vdly__sha_core__DOT__H4;
    vlSelf->__PVT__sha_core__DOT__H5 = __Vdly__sha_core__DOT__H5;
    vlSelf->__PVT__sha_core__DOT__H6 = __Vdly__sha_core__DOT__H6;
    vlSelf->__PVT__sha_core__DOT__H7 = __Vdly__sha_core__DOT__H7;
    vlSelf->__PVT__sha_core__DOT__round = __Vdly__sha_core__DOT__round;
    vlSelf->__PVT__sha_core__DOT__W1 = __Vdly__sha_core__DOT__W1;
    vlSelf->__PVT__sha_core__DOT__W9 = __Vdly__sha_core__DOT__W9;
    vlSelf->__PVT__sha_core__DOT__W14 = __Vdly__sha_core__DOT__W14;
    vlSelf->__PVT__sha_core__DOT__D = __Vdly__sha_core__DOT__D;
    vlSelf->__PVT__sha_core__DOT__A = __Vdly__sha_core__DOT__A;
    vlSelf->__PVT__sha_core__DOT__B = __Vdly__sha_core__DOT__B;
    vlSelf->__PVT__sha_core__DOT__C = __Vdly__sha_core__DOT__C;
    vlSelf->__PVT__sha_core__DOT__Wt = __Vdly__sha_core__DOT__Wt;
    vlSelf->__PVT__sha_core__DOT__E = __Vdly__sha_core__DOT__E;
    vlSelf->__PVT__sha_core__DOT__F = __Vdly__sha_core__DOT__F;
    vlSelf->__PVT__sha_core__DOT__G = __Vdly__sha_core__DOT__G;
    vlSelf->__PVT__sha_core__DOT__H = __Vdly__sha_core__DOT__H;
    vlSelf->__PVT__sha_core__DOT__read_counter = __Vdly__sha_core__DOT__read_counter;
    vlSelf->__PVT__sha_core__DOT__round_plus_1 = (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__sha_core__DOT__round)));
    vlSelf->__PVT__sha_core__DOT__next_Wt = ((((vlSelf->__PVT__sha_core__DOT__W14 
                                                << 0xfU) 
                                               | (vlSelf->__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                              ^ (((vlSelf->__PVT__sha_core__DOT__W14 
                                                   << 0xdU) 
                                                  | (vlSelf->__PVT__sha_core__DOT__W14 
                                                     >> 0x13U)) 
                                                 ^ 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->__PVT__sha_core__DOT__W14, 0xaU))) 
                                             + (vlSelf->__PVT__sha_core__DOT__W9 
                                                + (
                                                   (((vlSelf->__PVT__sha_core__DOT__W1 
                                                      << 0x19U) 
                                                     | (vlSelf->__PVT__sha_core__DOT__W1 
                                                        >> 7U)) 
                                                    ^ 
                                                    (((vlSelf->__PVT__sha_core__DOT__W1 
                                                       << 0xeU) 
                                                      | (vlSelf->__PVT__sha_core__DOT__W1 
                                                         >> 0x12U)) 
                                                     ^ 
                                                     VL_SHIFTR_III(32,32,32, vlSelf->__PVT__sha_core__DOT__W1, 3U))) 
                                                   + vlSelf->__PVT__sha_core__DOT__W0)));
    vlSelf->__PVT__sha_core__DOT__SHA256_result[0U] 
        = vlSelf->__PVT__sha_core__DOT__H;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[1U] 
        = vlSelf->__PVT__sha_core__DOT__G;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[2U] 
        = vlSelf->__PVT__sha_core__DOT__F;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[3U] 
        = vlSelf->__PVT__sha_core__DOT__E;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[4U] 
        = vlSelf->__PVT__sha_core__DOT__D;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[5U] 
        = vlSelf->__PVT__sha_core__DOT__C;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[6U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__sha_core__DOT__A)) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__sha_core__DOT__B))));
    vlSelf->__PVT__sha_core__DOT__SHA256_result[7U] 
        = (IData)(((((QData)((IData)(vlSelf->__PVT__sha_core__DOT__A)) 
                     << 0x20U) | (QData)((IData)(vlSelf->__PVT__sha_core__DOT__B))) 
                   >> 0x20U));
    vlSelf->__PVT__sha_core__DOT__T1_32 = (vlSelf->__PVT__sha_core__DOT__H 
                                           + ((((vlSelf->__PVT__sha_core__DOT__E 
                                                 << 0x1aU) 
                                                | (vlSelf->__PVT__sha_core__DOT__E 
                                                   >> 6U)) 
                                               ^ ((
                                                   (vlSelf->__PVT__sha_core__DOT__E 
                                                    << 0x15U) 
                                                   | (vlSelf->__PVT__sha_core__DOT__E 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  ((vlSelf->__PVT__sha_core__DOT__E 
                                                    << 7U) 
                                                   | (vlSelf->__PVT__sha_core__DOT__E 
                                                      >> 0x19U)))) 
                                              + (((vlSelf->__PVT__sha_core__DOT__E 
                                                   & vlSelf->__PVT__sha_core__DOT__F) 
                                                  ^ 
                                                  ((~ vlSelf->__PVT__sha_core__DOT__E) 
                                                   & vlSelf->__PVT__sha_core__DOT__G)) 
                                                 + 
                                                 (vlSelf->__PVT__sha_core__DOT__Kt 
                                                  + vlSelf->__PVT__sha_core__DOT__Wt))));
    vlSelf->__PVT__sha_core__DOT__next_E = (vlSelf->__PVT__sha_core__DOT__D 
                                            + vlSelf->__PVT__sha_core__DOT__T1_32);
    vlSelf->__PVT__sha_core__DOT__next_A = (vlSelf->__PVT__sha_core__DOT__T1_32 
                                            + ((((vlSelf->__PVT__sha_core__DOT__A 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__sha_core__DOT__A 
                                                    >> 2U)) 
                                                ^ (
                                                   ((vlSelf->__PVT__sha_core__DOT__A 
                                                     << 0x13U) 
                                                    | (vlSelf->__PVT__sha_core__DOT__A 
                                                       >> 0xdU)) 
                                                   ^ 
                                                   ((vlSelf->__PVT__sha_core__DOT__A 
                                                     << 0xaU) 
                                                    | (vlSelf->__PVT__sha_core__DOT__A 
                                                       >> 0x16U)))) 
                                               + ((vlSelf->__PVT__sha_core__DOT__A 
                                                   & vlSelf->__PVT__sha_core__DOT__B) 
                                                  ^ 
                                                  ((vlSelf->__PVT__sha_core__DOT__B 
                                                    & vlSelf->__PVT__sha_core__DOT__C) 
                                                   ^ 
                                                   (vlSelf->__PVT__sha_core__DOT__A 
                                                    & vlSelf->__PVT__sha_core__DOT__C)))));
    vlSelf->__PVT__sha_core__DOT__busy = __Vdly__sha_core__DOT__busy;
}

VL_INLINE_OPT void Vtop_tb_doublesha___nba_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE__0(Vtop_tb_doublesha* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_doublesha___nba_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vdly__sha_core__DOT__round;
    __Vdly__sha_core__DOT__round = 0;
    CData/*0:0*/ __Vdly__sha_core__DOT__busy;
    __Vdly__sha_core__DOT__busy = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W1;
    __Vdly__sha_core__DOT__W1 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W2;
    __Vdly__sha_core__DOT__W2 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W3;
    __Vdly__sha_core__DOT__W3 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W4;
    __Vdly__sha_core__DOT__W4 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W5;
    __Vdly__sha_core__DOT__W5 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W6;
    __Vdly__sha_core__DOT__W6 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W7;
    __Vdly__sha_core__DOT__W7 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W8;
    __Vdly__sha_core__DOT__W8 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W9;
    __Vdly__sha_core__DOT__W9 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W10;
    __Vdly__sha_core__DOT__W10 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W11;
    __Vdly__sha_core__DOT__W11 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W12;
    __Vdly__sha_core__DOT__W12 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W13;
    __Vdly__sha_core__DOT__W13 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W14;
    __Vdly__sha_core__DOT__W14 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__Wt;
    __Vdly__sha_core__DOT__Wt = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__A;
    __Vdly__sha_core__DOT__A = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__B;
    __Vdly__sha_core__DOT__B = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__C;
    __Vdly__sha_core__DOT__C = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__D;
    __Vdly__sha_core__DOT__D = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__E;
    __Vdly__sha_core__DOT__E = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__F;
    __Vdly__sha_core__DOT__F = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__G;
    __Vdly__sha_core__DOT__G = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H;
    __Vdly__sha_core__DOT__H = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H0;
    __Vdly__sha_core__DOT__H0 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H1;
    __Vdly__sha_core__DOT__H1 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H2;
    __Vdly__sha_core__DOT__H2 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H3;
    __Vdly__sha_core__DOT__H3 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H4;
    __Vdly__sha_core__DOT__H4 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H5;
    __Vdly__sha_core__DOT__H5 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H6;
    __Vdly__sha_core__DOT__H6 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H7;
    __Vdly__sha_core__DOT__H7 = 0;
    CData/*2:0*/ __Vdly__sha_core__DOT__read_counter;
    __Vdly__sha_core__DOT__read_counter = 0;
    VlWide<16>/*511:0*/ __Vtemp_3;
    VlWide<16>/*511:0*/ __Vtemp_7;
    VlWide<8>/*255:0*/ __Vtemp_9;
    // Body
    __Vdly__sha_core__DOT__read_counter = vlSelf->__PVT__sha_core__DOT__read_counter;
    __Vdly__sha_core__DOT__H7 = vlSelf->__PVT__sha_core__DOT__H7;
    __Vdly__sha_core__DOT__H6 = vlSelf->__PVT__sha_core__DOT__H6;
    __Vdly__sha_core__DOT__H5 = vlSelf->__PVT__sha_core__DOT__H5;
    __Vdly__sha_core__DOT__H4 = vlSelf->__PVT__sha_core__DOT__H4;
    __Vdly__sha_core__DOT__H3 = vlSelf->__PVT__sha_core__DOT__H3;
    __Vdly__sha_core__DOT__H2 = vlSelf->__PVT__sha_core__DOT__H2;
    __Vdly__sha_core__DOT__H1 = vlSelf->__PVT__sha_core__DOT__H1;
    __Vdly__sha_core__DOT__H0 = vlSelf->__PVT__sha_core__DOT__H0;
    __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__sha_core__DOT__W13;
    __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__sha_core__DOT__W12;
    __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__sha_core__DOT__W11;
    __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__sha_core__DOT__W10;
    __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__sha_core__DOT__W8;
    __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__sha_core__DOT__W7;
    __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__sha_core__DOT__W6;
    __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__sha_core__DOT__W5;
    __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__sha_core__DOT__W4;
    __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__sha_core__DOT__W3;
    __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__sha_core__DOT__W2;
    __Vdly__sha_core__DOT__busy = vlSelf->__PVT__sha_core__DOT__busy;
    __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round;
    __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__sha_core__DOT__W14;
    __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__sha_core__DOT__W9;
    __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__sha_core__DOT__W1;
    __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__D;
    __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__C;
    __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__B;
    __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__A;
    __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__sha_core__DOT__Wt;
    __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__H;
    __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__G;
    __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__F;
    __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__E;
    if (vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst) {
        vlSelf->__PVT__hash_index = 0U;
        vlSelf->__PVT__delay_left = 0U;
        vlSelf->__PVT__first_hash[0U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__first_hash[1U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__first_hash[2U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__first_hash[3U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__first_hash[4U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__first_hash[5U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__first_hash[6U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__first_hash[7U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__second_cycle = 0U;
        vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->__PVT__tmp_i[8U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->__PVT__tmp_i[9U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->__PVT__tmp_i[0xaU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->__PVT__tmp_i[0xbU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->__PVT__tmp_i[0xcU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->__PVT__tmp_i[0xdU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->__PVT__tmp_i[0xeU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->__PVT__tmp_i[0xfU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->complete = 0U;
        vlSelf->__PVT__state = 0U;
        __Vdly__sha_core__DOT__round = 0U;
        __Vdly__sha_core__DOT__busy = 0U;
        vlSelf->__PVT__sha_core__DOT__W0 = 0U;
        __Vdly__sha_core__DOT__W1 = 0U;
        __Vdly__sha_core__DOT__W2 = 0U;
        __Vdly__sha_core__DOT__W3 = 0U;
        __Vdly__sha_core__DOT__W4 = 0U;
        __Vdly__sha_core__DOT__W5 = 0U;
        __Vdly__sha_core__DOT__W6 = 0U;
        __Vdly__sha_core__DOT__W7 = 0U;
        __Vdly__sha_core__DOT__W8 = 0U;
        __Vdly__sha_core__DOT__W9 = 0U;
        __Vdly__sha_core__DOT__W10 = 0U;
        __Vdly__sha_core__DOT__W11 = 0U;
        __Vdly__sha_core__DOT__W12 = 0U;
        __Vdly__sha_core__DOT__W13 = 0U;
        __Vdly__sha_core__DOT__W14 = 0U;
        __Vdly__sha_core__DOT__Wt = 0U;
        __Vdly__sha_core__DOT__A = 0U;
        __Vdly__sha_core__DOT__B = 0U;
        __Vdly__sha_core__DOT__C = 0U;
        __Vdly__sha_core__DOT__D = 0U;
        __Vdly__sha_core__DOT__E = 0U;
        __Vdly__sha_core__DOT__F = 0U;
        __Vdly__sha_core__DOT__G = 0U;
        __Vdly__sha_core__DOT__H = 0U;
        __Vdly__sha_core__DOT__H0 = 0U;
        __Vdly__sha_core__DOT__H1 = 0U;
        __Vdly__sha_core__DOT__H2 = 0U;
        __Vdly__sha_core__DOT__H3 = 0U;
        __Vdly__sha_core__DOT__H4 = 0U;
        __Vdly__sha_core__DOT__H5 = 0U;
        __Vdly__sha_core__DOT__H6 = 0U;
        __Vdly__sha_core__DOT__H7 = 0U;
        vlSelf->__PVT__text_o = 0U;
        __Vdly__sha_core__DOT__read_counter = 0U;
        vlSelf->__PVT__sha_core__DOT__cmd = 0U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__delay_left))) {
            vlSelf->__PVT__delay_left = (0xfU & ((IData)(vlSelf->__PVT__delay_left) 
                                                 - (IData)(1U)));
        } else if ((1U & (~ (((IData)(vlSelf->__PVT__sha_core__DOT__cmd) 
                              >> 3U) & ((2U == (IData)(vlSelf->__PVT__state)) 
                                        | (4U == (IData)(vlSelf->__PVT__state))))))) {
            if ((0U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_i = 2U;
                vlSelf->__PVT__cmd_w_i = 1U;
                vlSelf->__PVT__tmp_i[0U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[3U];
                vlSelf->__PVT__tmp_i[1U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[4U];
                vlSelf->__PVT__tmp_i[2U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[5U];
                vlSelf->__PVT__tmp_i[3U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[6U];
                vlSelf->__PVT__tmp_i[4U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[7U];
                vlSelf->__PVT__tmp_i[5U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[8U];
                vlSelf->__PVT__tmp_i[6U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[9U];
                vlSelf->__PVT__tmp_i[7U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xaU];
                vlSelf->__PVT__tmp_i[8U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xbU];
                vlSelf->__PVT__tmp_i[9U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xcU];
                vlSelf->__PVT__tmp_i[0xaU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xdU];
                vlSelf->__PVT__tmp_i[0xbU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xeU];
                vlSelf->__PVT__tmp_i[0xcU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xfU];
                vlSelf->__PVT__tmp_i[0xdU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x10U];
                vlSelf->__PVT__tmp_i[0xeU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x11U];
                vlSelf->__PVT__tmp_i[0xfU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x12U];
                vlSelf->__PVT__state = 1U;
            } else if ((1U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__text_i = vlSelf->__PVT__tmp_i[0xfU];
                VL_SHIFTL_WWI(512,512,32, __Vtemp_3, vlSelf->__PVT__tmp_i, 0x20U);
                vlSelf->__PVT__tmp_i[0U] = __Vtemp_3[0U];
                vlSelf->__PVT__tmp_i[1U] = __Vtemp_3[1U];
                vlSelf->__PVT__tmp_i[2U] = __Vtemp_3[2U];
                vlSelf->__PVT__tmp_i[3U] = __Vtemp_3[3U];
                vlSelf->__PVT__tmp_i[4U] = __Vtemp_3[4U];
                vlSelf->__PVT__tmp_i[5U] = __Vtemp_3[5U];
                vlSelf->__PVT__tmp_i[6U] = __Vtemp_3[6U];
                vlSelf->__PVT__tmp_i[7U] = __Vtemp_3[7U];
                vlSelf->__PVT__tmp_i[8U] = __Vtemp_3[8U];
                vlSelf->__PVT__tmp_i[9U] = __Vtemp_3[9U];
                vlSelf->__PVT__tmp_i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->__PVT__tmp_i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->__PVT__tmp_i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->__PVT__tmp_i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->__PVT__tmp_i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->__PVT__tmp_i[0xfU] = __Vtemp_3[0xfU];
                if ((0x10U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 2U;
                }
            } else if ((2U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 1U;
                if (vlSelf->__PVT__second_cycle) {
                    vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[0U];
                    vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[1U];
                    vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[2U];
                    vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[3U];
                    vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[4U];
                    vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[5U];
                    vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[6U];
                    vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[7U];
                    vlSelf->__PVT__tmp_i[8U] = vlSelf->__PVT__first_hash[0U];
                    vlSelf->__PVT__tmp_i[9U] = vlSelf->__PVT__first_hash[1U];
                    vlSelf->__PVT__tmp_i[0xaU] = vlSelf->__PVT__first_hash[2U];
                    vlSelf->__PVT__tmp_i[0xbU] = vlSelf->__PVT__first_hash[3U];
                    vlSelf->__PVT__tmp_i[0xcU] = vlSelf->__PVT__first_hash[4U];
                    vlSelf->__PVT__tmp_i[0xdU] = vlSelf->__PVT__first_hash[5U];
                    vlSelf->__PVT__tmp_i[0xeU] = vlSelf->__PVT__first_hash[6U];
                    vlSelf->__PVT__tmp_i[0xfU] = vlSelf->__PVT__first_hash[7U];
                    vlSelf->__PVT__cmd_i = 2U;
                } else {
                    vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0U];
                    vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[1U];
                    vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[2U];
                    vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[3U];
                    vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[4U];
                    vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[5U];
                    vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[6U];
                    vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[7U];
                    vlSelf->__PVT__tmp_i[8U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[8U];
                    vlSelf->__PVT__tmp_i[9U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[9U];
                    vlSelf->__PVT__tmp_i[0xaU] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0xaU];
                    vlSelf->__PVT__tmp_i[0xbU] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0xbU];
                    vlSelf->__PVT__tmp_i[0xcU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                        [1U];
                    vlSelf->__PVT__tmp_i[0xdU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0U];
                    vlSelf->__PVT__tmp_i[0xeU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[1U];
                    vlSelf->__PVT__tmp_i[0xfU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[2U];
                    vlSelf->__PVT__cmd_i = 6U;
                }
                vlSelf->__PVT__state = 3U;
            } else if ((3U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__text_i = vlSelf->__PVT__tmp_i[0xfU];
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                VL_SHIFTL_WWI(512,512,32, __Vtemp_7, vlSelf->__PVT__tmp_i, 0x20U);
                vlSelf->__PVT__tmp_i[0U] = __Vtemp_7[0U];
                vlSelf->__PVT__tmp_i[1U] = __Vtemp_7[1U];
                vlSelf->__PVT__tmp_i[2U] = __Vtemp_7[2U];
                vlSelf->__PVT__tmp_i[3U] = __Vtemp_7[3U];
                vlSelf->__PVT__tmp_i[4U] = __Vtemp_7[4U];
                vlSelf->__PVT__tmp_i[5U] = __Vtemp_7[5U];
                vlSelf->__PVT__tmp_i[6U] = __Vtemp_7[6U];
                vlSelf->__PVT__tmp_i[7U] = __Vtemp_7[7U];
                vlSelf->__PVT__tmp_i[8U] = __Vtemp_7[8U];
                vlSelf->__PVT__tmp_i[9U] = __Vtemp_7[9U];
                vlSelf->__PVT__tmp_i[0xaU] = __Vtemp_7[0xaU];
                vlSelf->__PVT__tmp_i[0xbU] = __Vtemp_7[0xbU];
                vlSelf->__PVT__tmp_i[0xcU] = __Vtemp_7[0xcU];
                vlSelf->__PVT__tmp_i[0xdU] = __Vtemp_7[0xdU];
                vlSelf->__PVT__tmp_i[0xeU] = __Vtemp_7[0xeU];
                vlSelf->__PVT__tmp_i[0xfU] = __Vtemp_7[0xfU];
                if ((0x10U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 4U;
                }
            } else if ((4U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_i = 1U;
                vlSelf->__PVT__cmd_w_i = 1U;
                vlSelf->__PVT__state = 5U;
            } else if ((5U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__state = 6U;
                vlSelf->__PVT__delay_left = 1U;
            } else if ((6U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__first_hash[0U] = vlSelf->__PVT__text_o;
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                if ((8U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 7U;
                    if (vlSelf->__PVT__second_cycle) {
                        vlSelf->complete = 1U;
                        vlSelf->hash[0U] = vlSelf->__PVT__first_hash[0U];
                        vlSelf->hash[1U] = vlSelf->__PVT__first_hash[1U];
                        vlSelf->hash[2U] = vlSelf->__PVT__first_hash[2U];
                        vlSelf->hash[3U] = vlSelf->__PVT__first_hash[3U];
                        vlSelf->hash[4U] = vlSelf->__PVT__first_hash[4U];
                        vlSelf->hash[5U] = vlSelf->__PVT__first_hash[5U];
                        vlSelf->hash[6U] = vlSelf->__PVT__first_hash[6U];
                        vlSelf->hash[7U] = vlSelf->__PVT__first_hash[7U];
                    } else {
                        vlSelf->__PVT__state = 2U;
                        vlSelf->__PVT__second_cycle = 1U;
                    }
                } else {
                    VL_SHIFTL_WWI(256,256,32, __Vtemp_9, vlSelf->__PVT__first_hash, 0x20U);
                    vlSelf->__PVT__first_hash[0U] = 
                        __Vtemp_9[0U];
                    vlSelf->__PVT__first_hash[1U] = 
                        __Vtemp_9[1U];
                    vlSelf->__PVT__first_hash[2U] = 
                        __Vtemp_9[2U];
                    vlSelf->__PVT__first_hash[3U] = 
                        __Vtemp_9[3U];
                    vlSelf->__PVT__first_hash[4U] = 
                        __Vtemp_9[4U];
                    vlSelf->__PVT__first_hash[5U] = 
                        __Vtemp_9[5U];
                    vlSelf->__PVT__first_hash[6U] = 
                        __Vtemp_9[6U];
                    vlSelf->__PVT__first_hash[7U] = 
                        __Vtemp_9[7U];
                }
            }
        }
        if (((((((((0U == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                   | (1U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                  | (2U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                 | (3U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                | (4U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
               | (5U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
              | (6U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
             | (7U == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            if ((0U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                if ((2U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                    vlSelf->__PVT__sha_core__DOT__W0 
                        = vlSelf->__PVT__text_i;
                    __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                    __Vdly__sha_core__DOT__busy = 1U;
                    __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                    if ((4U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                        if ((4U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                            __Vdly__sha_core__DOT__H0 
                                = vlSelf->__PVT__sha_core__DOT__A;
                            __Vdly__sha_core__DOT__H1 
                                = vlSelf->__PVT__sha_core__DOT__B;
                            __Vdly__sha_core__DOT__H2 
                                = vlSelf->__PVT__sha_core__DOT__C;
                            __Vdly__sha_core__DOT__H3 
                                = vlSelf->__PVT__sha_core__DOT__D;
                            __Vdly__sha_core__DOT__H4 
                                = vlSelf->__PVT__sha_core__DOT__E;
                            __Vdly__sha_core__DOT__H5 
                                = vlSelf->__PVT__sha_core__DOT__F;
                            __Vdly__sha_core__DOT__H6 
                                = vlSelf->__PVT__sha_core__DOT__G;
                            __Vdly__sha_core__DOT__H7 
                                = vlSelf->__PVT__sha_core__DOT__H;
                        }
                    } else {
                        __Vdly__sha_core__DOT__A = 0x6a09e667U;
                        __Vdly__sha_core__DOT__B = 0xbb67ae85U;
                        __Vdly__sha_core__DOT__C = 0x3c6ef372U;
                        __Vdly__sha_core__DOT__D = 0xa54ff53aU;
                        __Vdly__sha_core__DOT__E = 0x510e527fU;
                        __Vdly__sha_core__DOT__F = 0x9b05688cU;
                        __Vdly__sha_core__DOT__G = 0x1f83d9abU;
                        __Vdly__sha_core__DOT__H = 0x5be0cd19U;
                        __Vdly__sha_core__DOT__H0 = 0x6a09e667U;
                        __Vdly__sha_core__DOT__H1 = 0xbb67ae85U;
                        __Vdly__sha_core__DOT__H2 = 0x3c6ef372U;
                        __Vdly__sha_core__DOT__H3 = 0xa54ff53aU;
                        __Vdly__sha_core__DOT__H4 = 0x510e527fU;
                        __Vdly__sha_core__DOT__H5 = 0x9b05688cU;
                        __Vdly__sha_core__DOT__H6 = 0x1f83d9abU;
                        __Vdly__sha_core__DOT__H7 = 0x5be0cd19U;
                    }
                } else {
                    __Vdly__sha_core__DOT__round = 0U;
                }
            } else if ((1U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((2U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((3U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((4U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((5U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((6U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else {
                __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            }
        } else if (((((((((8U == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                          | (9U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                         | (0xaU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                        | (0xbU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                       | (0xcU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                      | (0xdU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                     | (0xeU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                    | (0xfU == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            if ((8U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((9U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xaU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xbU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xcU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xdU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xeU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else {
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            }
        } else if (((((((((((((((((((((((((((((((((
                                                   ((((((((((((((((0x10U 
                                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                                                                  || (0x11U 
                                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                                 || (0x12U 
                                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                                || (0x13U 
                                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                               || (0x14U 
                                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                              || (0x15U 
                                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                             || (0x16U 
                                                                 == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                            || (0x17U 
                                                                == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                           || (0x18U 
                                                               == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                          || (0x19U 
                                                              == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                         || (0x1aU 
                                                             == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                        || (0x1bU 
                                                            == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                       || (0x1cU 
                                                           == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                      || (0x1dU 
                                                          == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                     || (0x1eU 
                                                         == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                    || (0x1fU 
                                                        == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                   || (0x20U 
                                                       == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                  || (0x21U 
                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                 || (0x22U 
                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                || (0x23U 
                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                               || (0x24U 
                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                              || (0x25U 
                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                             || (0x26U 
                                                 == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                            || (0x27U 
                                                == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                           || (0x28U 
                                               == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                          || (0x29U 
                                              == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                         || (0x2aU 
                                             == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                        || (0x2bU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                       || (0x2cU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                      || (0x2dU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                     || (0x2eU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                    || (0x2fU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                   || (0x30U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                  || (0x31U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                 || (0x32U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                || (0x33U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                               || (0x34U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                              || (0x35U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                             || (0x36U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                            || (0x37U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                           || (0x38U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                          || (0x39U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                         || (0x3aU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                        || (0x3bU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                       || (0x3cU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                      || (0x3dU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                     || (0x3eU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                    || (0x3fU == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            vlSelf->__PVT__sha_core__DOT__W0 = vlSelf->__PVT__sha_core__DOT__W1;
            __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
            __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
            __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
            __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__sha_core__DOT__W2;
            __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
            __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
            __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__sha_core__DOT__W3;
            __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
            __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
            __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__sha_core__DOT__W4;
            __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
            __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__sha_core__DOT__W5;
            __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__sha_core__DOT__W6;
            __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__sha_core__DOT__W7;
            __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__sha_core__DOT__W8;
            __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__sha_core__DOT__W9;
            __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__sha_core__DOT__W10;
            __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__sha_core__DOT__W11;
            __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__sha_core__DOT__W12;
            __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__sha_core__DOT__W13;
            __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__sha_core__DOT__W14;
            __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__sha_core__DOT__Wt;
            __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__sha_core__DOT__next_Wt;
        } else if ((0x40U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
            __Vdly__sha_core__DOT__D = (vlSelf->__PVT__sha_core__DOT__C 
                                        + vlSelf->__PVT__sha_core__DOT__H3);
            __Vdly__sha_core__DOT__H = (vlSelf->__PVT__sha_core__DOT__G 
                                        + vlSelf->__PVT__sha_core__DOT__H7);
            __Vdly__sha_core__DOT__round = 0U;
            __Vdly__sha_core__DOT__busy = 0U;
            __Vdly__sha_core__DOT__C = (vlSelf->__PVT__sha_core__DOT__B 
                                        + vlSelf->__PVT__sha_core__DOT__H2);
            __Vdly__sha_core__DOT__G = (vlSelf->__PVT__sha_core__DOT__F 
                                        + vlSelf->__PVT__sha_core__DOT__H6);
            __Vdly__sha_core__DOT__B = (vlSelf->__PVT__sha_core__DOT__A 
                                        + vlSelf->__PVT__sha_core__DOT__H1);
            __Vdly__sha_core__DOT__F = (vlSelf->__PVT__sha_core__DOT__E 
                                        + vlSelf->__PVT__sha_core__DOT__H5);
            __Vdly__sha_core__DOT__A = (vlSelf->__PVT__sha_core__DOT__next_A 
                                        + vlSelf->__PVT__sha_core__DOT__H0);
            __Vdly__sha_core__DOT__E = (vlSelf->__PVT__sha_core__DOT__next_E 
                                        + vlSelf->__PVT__sha_core__DOT__H4);
        } else {
            __Vdly__sha_core__DOT__round = 0U;
            __Vdly__sha_core__DOT__busy = 0U;
        }
        if ((1U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
            __Vdly__sha_core__DOT__read_counter = 7U;
        } else if (vlSelf->__PVT__sha_core__DOT__busy) {
            vlSelf->__PVT__text_o = 0U;
        } else {
            vlSelf->__PVT__text_o = (((((((((7U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter)) 
                                            | (6U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                           | (5U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                          | (4U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                         | (3U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                        | (2U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                       | (1U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                      | (0U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter)))
                                      ? ((7U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                          ? vlSelf->__PVT__sha_core__DOT__SHA256_result[7U]
                                          : ((6U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                              ? vlSelf->__PVT__sha_core__DOT__SHA256_result[6U]
                                              : ((5U 
                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                  ? 
                                                 vlSelf->__PVT__sha_core__DOT__SHA256_result[5U]
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                   ? 
                                                  vlSelf->__PVT__sha_core__DOT__SHA256_result[4U]
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                    ? 
                                                   vlSelf->__PVT__sha_core__DOT__SHA256_result[3U]
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                     ? 
                                                    vlSelf->__PVT__sha_core__DOT__SHA256_result[2U]
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                      ? 
                                                     vlSelf->__PVT__sha_core__DOT__SHA256_result[1U]
                                                      : 
                                                     vlSelf->__PVT__sha_core__DOT__SHA256_result[0U])))))))
                                      : 0U);
            if ((0U != (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) {
                __Vdly__sha_core__DOT__read_counter 
                    = (7U & ((IData)(vlSelf->__PVT__sha_core__DOT__read_counter) 
                             - (IData)(1U)));
            }
        }
        if (vlSelf->__PVT__cmd_w_i) {
            vlSelf->__PVT__sha_core__DOT__cmd = ((8U 
                                                  & (IData)(vlSelf->__PVT__sha_core__DOT__cmd)) 
                                                 | (IData)(vlSelf->__PVT__cmd_i));
        } else {
            vlSelf->__PVT__sha_core__DOT__cmd = ((7U 
                                                  & (IData)(vlSelf->__PVT__sha_core__DOT__cmd)) 
                                                 | ((IData)(vlSelf->__PVT__sha_core__DOT__busy) 
                                                    << 3U));
            if ((1U & (~ (IData)(vlSelf->__PVT__sha_core__DOT__busy)))) {
                vlSelf->__PVT__sha_core__DOT__cmd = 
                    (0xcU & (IData)(vlSelf->__PVT__sha_core__DOT__cmd));
            }
        }
    }
    __Vtableidx2 = (((IData)(vlSelf->__PVT__sha_core__DOT__round) 
                     << 1U) | (IData)(vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst));
    vlSelf->__PVT__sha_core__DOT__Kt = Vtop_tb__ConstPool__TABLE_hef79451c_0
        [__Vtableidx2];
    vlSelf->__PVT__sha_core__DOT__W2 = __Vdly__sha_core__DOT__W2;
    vlSelf->__PVT__sha_core__DOT__W3 = __Vdly__sha_core__DOT__W3;
    vlSelf->__PVT__sha_core__DOT__W4 = __Vdly__sha_core__DOT__W4;
    vlSelf->__PVT__sha_core__DOT__W5 = __Vdly__sha_core__DOT__W5;
    vlSelf->__PVT__sha_core__DOT__W6 = __Vdly__sha_core__DOT__W6;
    vlSelf->__PVT__sha_core__DOT__W7 = __Vdly__sha_core__DOT__W7;
    vlSelf->__PVT__sha_core__DOT__W8 = __Vdly__sha_core__DOT__W8;
    vlSelf->__PVT__sha_core__DOT__W10 = __Vdly__sha_core__DOT__W10;
    vlSelf->__PVT__sha_core__DOT__W11 = __Vdly__sha_core__DOT__W11;
    vlSelf->__PVT__sha_core__DOT__W12 = __Vdly__sha_core__DOT__W12;
    vlSelf->__PVT__sha_core__DOT__W13 = __Vdly__sha_core__DOT__W13;
    vlSelf->__PVT__sha_core__DOT__H0 = __Vdly__sha_core__DOT__H0;
    vlSelf->__PVT__sha_core__DOT__H1 = __Vdly__sha_core__DOT__H1;
    vlSelf->__PVT__sha_core__DOT__H2 = __Vdly__sha_core__DOT__H2;
    vlSelf->__PVT__sha_core__DOT__H3 = __Vdly__sha_core__DOT__H3;
    vlSelf->__PVT__sha_core__DOT__H4 = __Vdly__sha_core__DOT__H4;
    vlSelf->__PVT__sha_core__DOT__H5 = __Vdly__sha_core__DOT__H5;
    vlSelf->__PVT__sha_core__DOT__H6 = __Vdly__sha_core__DOT__H6;
    vlSelf->__PVT__sha_core__DOT__H7 = __Vdly__sha_core__DOT__H7;
    vlSelf->__PVT__sha_core__DOT__round = __Vdly__sha_core__DOT__round;
    vlSelf->__PVT__sha_core__DOT__W1 = __Vdly__sha_core__DOT__W1;
    vlSelf->__PVT__sha_core__DOT__W9 = __Vdly__sha_core__DOT__W9;
    vlSelf->__PVT__sha_core__DOT__W14 = __Vdly__sha_core__DOT__W14;
    vlSelf->__PVT__sha_core__DOT__D = __Vdly__sha_core__DOT__D;
    vlSelf->__PVT__sha_core__DOT__A = __Vdly__sha_core__DOT__A;
    vlSelf->__PVT__sha_core__DOT__B = __Vdly__sha_core__DOT__B;
    vlSelf->__PVT__sha_core__DOT__C = __Vdly__sha_core__DOT__C;
    vlSelf->__PVT__sha_core__DOT__Wt = __Vdly__sha_core__DOT__Wt;
    vlSelf->__PVT__sha_core__DOT__E = __Vdly__sha_core__DOT__E;
    vlSelf->__PVT__sha_core__DOT__F = __Vdly__sha_core__DOT__F;
    vlSelf->__PVT__sha_core__DOT__G = __Vdly__sha_core__DOT__G;
    vlSelf->__PVT__sha_core__DOT__H = __Vdly__sha_core__DOT__H;
    vlSelf->__PVT__sha_core__DOT__read_counter = __Vdly__sha_core__DOT__read_counter;
    vlSelf->__PVT__sha_core__DOT__round_plus_1 = (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__sha_core__DOT__round)));
    vlSelf->__PVT__sha_core__DOT__next_Wt = ((((vlSelf->__PVT__sha_core__DOT__W14 
                                                << 0xfU) 
                                               | (vlSelf->__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                              ^ (((vlSelf->__PVT__sha_core__DOT__W14 
                                                   << 0xdU) 
                                                  | (vlSelf->__PVT__sha_core__DOT__W14 
                                                     >> 0x13U)) 
                                                 ^ 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->__PVT__sha_core__DOT__W14, 0xaU))) 
                                             + (vlSelf->__PVT__sha_core__DOT__W9 
                                                + (
                                                   (((vlSelf->__PVT__sha_core__DOT__W1 
                                                      << 0x19U) 
                                                     | (vlSelf->__PVT__sha_core__DOT__W1 
                                                        >> 7U)) 
                                                    ^ 
                                                    (((vlSelf->__PVT__sha_core__DOT__W1 
                                                       << 0xeU) 
                                                      | (vlSelf->__PVT__sha_core__DOT__W1 
                                                         >> 0x12U)) 
                                                     ^ 
                                                     VL_SHIFTR_III(32,32,32, vlSelf->__PVT__sha_core__DOT__W1, 3U))) 
                                                   + vlSelf->__PVT__sha_core__DOT__W0)));
    vlSelf->__PVT__sha_core__DOT__SHA256_result[0U] 
        = vlSelf->__PVT__sha_core__DOT__H;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[1U] 
        = vlSelf->__PVT__sha_core__DOT__G;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[2U] 
        = vlSelf->__PVT__sha_core__DOT__F;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[3U] 
        = vlSelf->__PVT__sha_core__DOT__E;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[4U] 
        = vlSelf->__PVT__sha_core__DOT__D;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[5U] 
        = vlSelf->__PVT__sha_core__DOT__C;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[6U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__sha_core__DOT__A)) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__sha_core__DOT__B))));
    vlSelf->__PVT__sha_core__DOT__SHA256_result[7U] 
        = (IData)(((((QData)((IData)(vlSelf->__PVT__sha_core__DOT__A)) 
                     << 0x20U) | (QData)((IData)(vlSelf->__PVT__sha_core__DOT__B))) 
                   >> 0x20U));
    vlSelf->__PVT__sha_core__DOT__T1_32 = (vlSelf->__PVT__sha_core__DOT__H 
                                           + ((((vlSelf->__PVT__sha_core__DOT__E 
                                                 << 0x1aU) 
                                                | (vlSelf->__PVT__sha_core__DOT__E 
                                                   >> 6U)) 
                                               ^ ((
                                                   (vlSelf->__PVT__sha_core__DOT__E 
                                                    << 0x15U) 
                                                   | (vlSelf->__PVT__sha_core__DOT__E 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  ((vlSelf->__PVT__sha_core__DOT__E 
                                                    << 7U) 
                                                   | (vlSelf->__PVT__sha_core__DOT__E 
                                                      >> 0x19U)))) 
                                              + (((vlSelf->__PVT__sha_core__DOT__E 
                                                   & vlSelf->__PVT__sha_core__DOT__F) 
                                                  ^ 
                                                  ((~ vlSelf->__PVT__sha_core__DOT__E) 
                                                   & vlSelf->__PVT__sha_core__DOT__G)) 
                                                 + 
                                                 (vlSelf->__PVT__sha_core__DOT__Kt 
                                                  + vlSelf->__PVT__sha_core__DOT__Wt))));
    vlSelf->__PVT__sha_core__DOT__next_E = (vlSelf->__PVT__sha_core__DOT__D 
                                            + vlSelf->__PVT__sha_core__DOT__T1_32);
    vlSelf->__PVT__sha_core__DOT__next_A = (vlSelf->__PVT__sha_core__DOT__T1_32 
                                            + ((((vlSelf->__PVT__sha_core__DOT__A 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__sha_core__DOT__A 
                                                    >> 2U)) 
                                                ^ (
                                                   ((vlSelf->__PVT__sha_core__DOT__A 
                                                     << 0x13U) 
                                                    | (vlSelf->__PVT__sha_core__DOT__A 
                                                       >> 0xdU)) 
                                                   ^ 
                                                   ((vlSelf->__PVT__sha_core__DOT__A 
                                                     << 0xaU) 
                                                    | (vlSelf->__PVT__sha_core__DOT__A 
                                                       >> 0x16U)))) 
                                               + ((vlSelf->__PVT__sha_core__DOT__A 
                                                   & vlSelf->__PVT__sha_core__DOT__B) 
                                                  ^ 
                                                  ((vlSelf->__PVT__sha_core__DOT__B 
                                                    & vlSelf->__PVT__sha_core__DOT__C) 
                                                   ^ 
                                                   (vlSelf->__PVT__sha_core__DOT__A 
                                                    & vlSelf->__PVT__sha_core__DOT__C)))));
    vlSelf->__PVT__sha_core__DOT__busy = __Vdly__sha_core__DOT__busy;
}

VL_INLINE_OPT void Vtop_tb_doublesha___nba_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE__0(Vtop_tb_doublesha* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_doublesha___nba_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vdly__sha_core__DOT__round;
    __Vdly__sha_core__DOT__round = 0;
    CData/*0:0*/ __Vdly__sha_core__DOT__busy;
    __Vdly__sha_core__DOT__busy = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W1;
    __Vdly__sha_core__DOT__W1 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W2;
    __Vdly__sha_core__DOT__W2 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W3;
    __Vdly__sha_core__DOT__W3 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W4;
    __Vdly__sha_core__DOT__W4 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W5;
    __Vdly__sha_core__DOT__W5 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W6;
    __Vdly__sha_core__DOT__W6 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W7;
    __Vdly__sha_core__DOT__W7 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W8;
    __Vdly__sha_core__DOT__W8 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W9;
    __Vdly__sha_core__DOT__W9 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W10;
    __Vdly__sha_core__DOT__W10 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W11;
    __Vdly__sha_core__DOT__W11 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W12;
    __Vdly__sha_core__DOT__W12 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W13;
    __Vdly__sha_core__DOT__W13 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W14;
    __Vdly__sha_core__DOT__W14 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__Wt;
    __Vdly__sha_core__DOT__Wt = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__A;
    __Vdly__sha_core__DOT__A = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__B;
    __Vdly__sha_core__DOT__B = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__C;
    __Vdly__sha_core__DOT__C = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__D;
    __Vdly__sha_core__DOT__D = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__E;
    __Vdly__sha_core__DOT__E = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__F;
    __Vdly__sha_core__DOT__F = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__G;
    __Vdly__sha_core__DOT__G = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H;
    __Vdly__sha_core__DOT__H = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H0;
    __Vdly__sha_core__DOT__H0 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H1;
    __Vdly__sha_core__DOT__H1 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H2;
    __Vdly__sha_core__DOT__H2 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H3;
    __Vdly__sha_core__DOT__H3 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H4;
    __Vdly__sha_core__DOT__H4 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H5;
    __Vdly__sha_core__DOT__H5 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H6;
    __Vdly__sha_core__DOT__H6 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H7;
    __Vdly__sha_core__DOT__H7 = 0;
    CData/*2:0*/ __Vdly__sha_core__DOT__read_counter;
    __Vdly__sha_core__DOT__read_counter = 0;
    VlWide<16>/*511:0*/ __Vtemp_3;
    VlWide<16>/*511:0*/ __Vtemp_7;
    VlWide<8>/*255:0*/ __Vtemp_9;
    // Body
    __Vdly__sha_core__DOT__read_counter = vlSelf->__PVT__sha_core__DOT__read_counter;
    __Vdly__sha_core__DOT__H7 = vlSelf->__PVT__sha_core__DOT__H7;
    __Vdly__sha_core__DOT__H6 = vlSelf->__PVT__sha_core__DOT__H6;
    __Vdly__sha_core__DOT__H5 = vlSelf->__PVT__sha_core__DOT__H5;
    __Vdly__sha_core__DOT__H4 = vlSelf->__PVT__sha_core__DOT__H4;
    __Vdly__sha_core__DOT__H3 = vlSelf->__PVT__sha_core__DOT__H3;
    __Vdly__sha_core__DOT__H2 = vlSelf->__PVT__sha_core__DOT__H2;
    __Vdly__sha_core__DOT__H1 = vlSelf->__PVT__sha_core__DOT__H1;
    __Vdly__sha_core__DOT__H0 = vlSelf->__PVT__sha_core__DOT__H0;
    __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__sha_core__DOT__W13;
    __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__sha_core__DOT__W12;
    __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__sha_core__DOT__W11;
    __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__sha_core__DOT__W10;
    __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__sha_core__DOT__W8;
    __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__sha_core__DOT__W7;
    __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__sha_core__DOT__W6;
    __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__sha_core__DOT__W5;
    __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__sha_core__DOT__W4;
    __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__sha_core__DOT__W3;
    __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__sha_core__DOT__W2;
    __Vdly__sha_core__DOT__busy = vlSelf->__PVT__sha_core__DOT__busy;
    __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round;
    __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__sha_core__DOT__W14;
    __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__sha_core__DOT__W9;
    __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__sha_core__DOT__W1;
    __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__D;
    __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__C;
    __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__B;
    __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__A;
    __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__sha_core__DOT__Wt;
    __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__H;
    __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__G;
    __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__F;
    __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__E;
    if (vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst) {
        vlSelf->__PVT__hash_index = 0U;
        vlSelf->__PVT__delay_left = 0U;
        vlSelf->__PVT__first_hash[0U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__first_hash[1U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__first_hash[2U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__first_hash[3U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__first_hash[4U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__first_hash[5U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__first_hash[6U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__first_hash[7U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__second_cycle = 0U;
        vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->__PVT__tmp_i[8U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->__PVT__tmp_i[9U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->__PVT__tmp_i[0xaU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->__PVT__tmp_i[0xbU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->__PVT__tmp_i[0xcU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->__PVT__tmp_i[0xdU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->__PVT__tmp_i[0xeU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->__PVT__tmp_i[0xfU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->complete = 0U;
        vlSelf->__PVT__state = 0U;
        __Vdly__sha_core__DOT__round = 0U;
        __Vdly__sha_core__DOT__busy = 0U;
        vlSelf->__PVT__sha_core__DOT__W0 = 0U;
        __Vdly__sha_core__DOT__W1 = 0U;
        __Vdly__sha_core__DOT__W2 = 0U;
        __Vdly__sha_core__DOT__W3 = 0U;
        __Vdly__sha_core__DOT__W4 = 0U;
        __Vdly__sha_core__DOT__W5 = 0U;
        __Vdly__sha_core__DOT__W6 = 0U;
        __Vdly__sha_core__DOT__W7 = 0U;
        __Vdly__sha_core__DOT__W8 = 0U;
        __Vdly__sha_core__DOT__W9 = 0U;
        __Vdly__sha_core__DOT__W10 = 0U;
        __Vdly__sha_core__DOT__W11 = 0U;
        __Vdly__sha_core__DOT__W12 = 0U;
        __Vdly__sha_core__DOT__W13 = 0U;
        __Vdly__sha_core__DOT__W14 = 0U;
        __Vdly__sha_core__DOT__Wt = 0U;
        __Vdly__sha_core__DOT__A = 0U;
        __Vdly__sha_core__DOT__B = 0U;
        __Vdly__sha_core__DOT__C = 0U;
        __Vdly__sha_core__DOT__D = 0U;
        __Vdly__sha_core__DOT__E = 0U;
        __Vdly__sha_core__DOT__F = 0U;
        __Vdly__sha_core__DOT__G = 0U;
        __Vdly__sha_core__DOT__H = 0U;
        __Vdly__sha_core__DOT__H0 = 0U;
        __Vdly__sha_core__DOT__H1 = 0U;
        __Vdly__sha_core__DOT__H2 = 0U;
        __Vdly__sha_core__DOT__H3 = 0U;
        __Vdly__sha_core__DOT__H4 = 0U;
        __Vdly__sha_core__DOT__H5 = 0U;
        __Vdly__sha_core__DOT__H6 = 0U;
        __Vdly__sha_core__DOT__H7 = 0U;
        vlSelf->__PVT__text_o = 0U;
        __Vdly__sha_core__DOT__read_counter = 0U;
        vlSelf->__PVT__sha_core__DOT__cmd = 0U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__delay_left))) {
            vlSelf->__PVT__delay_left = (0xfU & ((IData)(vlSelf->__PVT__delay_left) 
                                                 - (IData)(1U)));
        } else if ((1U & (~ (((IData)(vlSelf->__PVT__sha_core__DOT__cmd) 
                              >> 3U) & ((2U == (IData)(vlSelf->__PVT__state)) 
                                        | (4U == (IData)(vlSelf->__PVT__state))))))) {
            if ((0U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_i = 2U;
                vlSelf->__PVT__cmd_w_i = 1U;
                vlSelf->__PVT__tmp_i[0U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[3U];
                vlSelf->__PVT__tmp_i[1U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[4U];
                vlSelf->__PVT__tmp_i[2U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[5U];
                vlSelf->__PVT__tmp_i[3U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[6U];
                vlSelf->__PVT__tmp_i[4U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[7U];
                vlSelf->__PVT__tmp_i[5U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[8U];
                vlSelf->__PVT__tmp_i[6U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[9U];
                vlSelf->__PVT__tmp_i[7U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xaU];
                vlSelf->__PVT__tmp_i[8U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xbU];
                vlSelf->__PVT__tmp_i[9U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xcU];
                vlSelf->__PVT__tmp_i[0xaU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xdU];
                vlSelf->__PVT__tmp_i[0xbU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xeU];
                vlSelf->__PVT__tmp_i[0xcU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xfU];
                vlSelf->__PVT__tmp_i[0xdU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x10U];
                vlSelf->__PVT__tmp_i[0xeU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x11U];
                vlSelf->__PVT__tmp_i[0xfU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x12U];
                vlSelf->__PVT__state = 1U;
            } else if ((1U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__text_i = vlSelf->__PVT__tmp_i[0xfU];
                VL_SHIFTL_WWI(512,512,32, __Vtemp_3, vlSelf->__PVT__tmp_i, 0x20U);
                vlSelf->__PVT__tmp_i[0U] = __Vtemp_3[0U];
                vlSelf->__PVT__tmp_i[1U] = __Vtemp_3[1U];
                vlSelf->__PVT__tmp_i[2U] = __Vtemp_3[2U];
                vlSelf->__PVT__tmp_i[3U] = __Vtemp_3[3U];
                vlSelf->__PVT__tmp_i[4U] = __Vtemp_3[4U];
                vlSelf->__PVT__tmp_i[5U] = __Vtemp_3[5U];
                vlSelf->__PVT__tmp_i[6U] = __Vtemp_3[6U];
                vlSelf->__PVT__tmp_i[7U] = __Vtemp_3[7U];
                vlSelf->__PVT__tmp_i[8U] = __Vtemp_3[8U];
                vlSelf->__PVT__tmp_i[9U] = __Vtemp_3[9U];
                vlSelf->__PVT__tmp_i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->__PVT__tmp_i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->__PVT__tmp_i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->__PVT__tmp_i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->__PVT__tmp_i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->__PVT__tmp_i[0xfU] = __Vtemp_3[0xfU];
                if ((0x10U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 2U;
                }
            } else if ((2U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 1U;
                if (vlSelf->__PVT__second_cycle) {
                    vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[0U];
                    vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[1U];
                    vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[2U];
                    vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[3U];
                    vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[4U];
                    vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[5U];
                    vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[6U];
                    vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[7U];
                    vlSelf->__PVT__tmp_i[8U] = vlSelf->__PVT__first_hash[0U];
                    vlSelf->__PVT__tmp_i[9U] = vlSelf->__PVT__first_hash[1U];
                    vlSelf->__PVT__tmp_i[0xaU] = vlSelf->__PVT__first_hash[2U];
                    vlSelf->__PVT__tmp_i[0xbU] = vlSelf->__PVT__first_hash[3U];
                    vlSelf->__PVT__tmp_i[0xcU] = vlSelf->__PVT__first_hash[4U];
                    vlSelf->__PVT__tmp_i[0xdU] = vlSelf->__PVT__first_hash[5U];
                    vlSelf->__PVT__tmp_i[0xeU] = vlSelf->__PVT__first_hash[6U];
                    vlSelf->__PVT__tmp_i[0xfU] = vlSelf->__PVT__first_hash[7U];
                    vlSelf->__PVT__cmd_i = 2U;
                } else {
                    vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0U];
                    vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[1U];
                    vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[2U];
                    vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[3U];
                    vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[4U];
                    vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[5U];
                    vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[6U];
                    vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[7U];
                    vlSelf->__PVT__tmp_i[8U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[8U];
                    vlSelf->__PVT__tmp_i[9U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[9U];
                    vlSelf->__PVT__tmp_i[0xaU] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0xaU];
                    vlSelf->__PVT__tmp_i[0xbU] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0xbU];
                    vlSelf->__PVT__tmp_i[0xcU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                        [2U];
                    vlSelf->__PVT__tmp_i[0xdU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0U];
                    vlSelf->__PVT__tmp_i[0xeU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[1U];
                    vlSelf->__PVT__tmp_i[0xfU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[2U];
                    vlSelf->__PVT__cmd_i = 6U;
                }
                vlSelf->__PVT__state = 3U;
            } else if ((3U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__text_i = vlSelf->__PVT__tmp_i[0xfU];
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                VL_SHIFTL_WWI(512,512,32, __Vtemp_7, vlSelf->__PVT__tmp_i, 0x20U);
                vlSelf->__PVT__tmp_i[0U] = __Vtemp_7[0U];
                vlSelf->__PVT__tmp_i[1U] = __Vtemp_7[1U];
                vlSelf->__PVT__tmp_i[2U] = __Vtemp_7[2U];
                vlSelf->__PVT__tmp_i[3U] = __Vtemp_7[3U];
                vlSelf->__PVT__tmp_i[4U] = __Vtemp_7[4U];
                vlSelf->__PVT__tmp_i[5U] = __Vtemp_7[5U];
                vlSelf->__PVT__tmp_i[6U] = __Vtemp_7[6U];
                vlSelf->__PVT__tmp_i[7U] = __Vtemp_7[7U];
                vlSelf->__PVT__tmp_i[8U] = __Vtemp_7[8U];
                vlSelf->__PVT__tmp_i[9U] = __Vtemp_7[9U];
                vlSelf->__PVT__tmp_i[0xaU] = __Vtemp_7[0xaU];
                vlSelf->__PVT__tmp_i[0xbU] = __Vtemp_7[0xbU];
                vlSelf->__PVT__tmp_i[0xcU] = __Vtemp_7[0xcU];
                vlSelf->__PVT__tmp_i[0xdU] = __Vtemp_7[0xdU];
                vlSelf->__PVT__tmp_i[0xeU] = __Vtemp_7[0xeU];
                vlSelf->__PVT__tmp_i[0xfU] = __Vtemp_7[0xfU];
                if ((0x10U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 4U;
                }
            } else if ((4U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_i = 1U;
                vlSelf->__PVT__cmd_w_i = 1U;
                vlSelf->__PVT__state = 5U;
            } else if ((5U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__state = 6U;
                vlSelf->__PVT__delay_left = 1U;
            } else if ((6U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__first_hash[0U] = vlSelf->__PVT__text_o;
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                if ((8U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 7U;
                    if (vlSelf->__PVT__second_cycle) {
                        vlSelf->complete = 1U;
                        vlSelf->hash[0U] = vlSelf->__PVT__first_hash[0U];
                        vlSelf->hash[1U] = vlSelf->__PVT__first_hash[1U];
                        vlSelf->hash[2U] = vlSelf->__PVT__first_hash[2U];
                        vlSelf->hash[3U] = vlSelf->__PVT__first_hash[3U];
                        vlSelf->hash[4U] = vlSelf->__PVT__first_hash[4U];
                        vlSelf->hash[5U] = vlSelf->__PVT__first_hash[5U];
                        vlSelf->hash[6U] = vlSelf->__PVT__first_hash[6U];
                        vlSelf->hash[7U] = vlSelf->__PVT__first_hash[7U];
                    } else {
                        vlSelf->__PVT__state = 2U;
                        vlSelf->__PVT__second_cycle = 1U;
                    }
                } else {
                    VL_SHIFTL_WWI(256,256,32, __Vtemp_9, vlSelf->__PVT__first_hash, 0x20U);
                    vlSelf->__PVT__first_hash[0U] = 
                        __Vtemp_9[0U];
                    vlSelf->__PVT__first_hash[1U] = 
                        __Vtemp_9[1U];
                    vlSelf->__PVT__first_hash[2U] = 
                        __Vtemp_9[2U];
                    vlSelf->__PVT__first_hash[3U] = 
                        __Vtemp_9[3U];
                    vlSelf->__PVT__first_hash[4U] = 
                        __Vtemp_9[4U];
                    vlSelf->__PVT__first_hash[5U] = 
                        __Vtemp_9[5U];
                    vlSelf->__PVT__first_hash[6U] = 
                        __Vtemp_9[6U];
                    vlSelf->__PVT__first_hash[7U] = 
                        __Vtemp_9[7U];
                }
            }
        }
        if (((((((((0U == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                   | (1U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                  | (2U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                 | (3U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                | (4U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
               | (5U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
              | (6U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
             | (7U == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            if ((0U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                if ((2U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                    vlSelf->__PVT__sha_core__DOT__W0 
                        = vlSelf->__PVT__text_i;
                    __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                    __Vdly__sha_core__DOT__busy = 1U;
                    __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                    if ((4U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                        if ((4U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                            __Vdly__sha_core__DOT__H0 
                                = vlSelf->__PVT__sha_core__DOT__A;
                            __Vdly__sha_core__DOT__H1 
                                = vlSelf->__PVT__sha_core__DOT__B;
                            __Vdly__sha_core__DOT__H2 
                                = vlSelf->__PVT__sha_core__DOT__C;
                            __Vdly__sha_core__DOT__H3 
                                = vlSelf->__PVT__sha_core__DOT__D;
                            __Vdly__sha_core__DOT__H4 
                                = vlSelf->__PVT__sha_core__DOT__E;
                            __Vdly__sha_core__DOT__H5 
                                = vlSelf->__PVT__sha_core__DOT__F;
                            __Vdly__sha_core__DOT__H6 
                                = vlSelf->__PVT__sha_core__DOT__G;
                            __Vdly__sha_core__DOT__H7 
                                = vlSelf->__PVT__sha_core__DOT__H;
                        }
                    } else {
                        __Vdly__sha_core__DOT__A = 0x6a09e667U;
                        __Vdly__sha_core__DOT__B = 0xbb67ae85U;
                        __Vdly__sha_core__DOT__C = 0x3c6ef372U;
                        __Vdly__sha_core__DOT__D = 0xa54ff53aU;
                        __Vdly__sha_core__DOT__E = 0x510e527fU;
                        __Vdly__sha_core__DOT__F = 0x9b05688cU;
                        __Vdly__sha_core__DOT__G = 0x1f83d9abU;
                        __Vdly__sha_core__DOT__H = 0x5be0cd19U;
                        __Vdly__sha_core__DOT__H0 = 0x6a09e667U;
                        __Vdly__sha_core__DOT__H1 = 0xbb67ae85U;
                        __Vdly__sha_core__DOT__H2 = 0x3c6ef372U;
                        __Vdly__sha_core__DOT__H3 = 0xa54ff53aU;
                        __Vdly__sha_core__DOT__H4 = 0x510e527fU;
                        __Vdly__sha_core__DOT__H5 = 0x9b05688cU;
                        __Vdly__sha_core__DOT__H6 = 0x1f83d9abU;
                        __Vdly__sha_core__DOT__H7 = 0x5be0cd19U;
                    }
                } else {
                    __Vdly__sha_core__DOT__round = 0U;
                }
            } else if ((1U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((2U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((3U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((4U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((5U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((6U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else {
                __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            }
        } else if (((((((((8U == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                          | (9U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                         | (0xaU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                        | (0xbU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                       | (0xcU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                      | (0xdU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                     | (0xeU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                    | (0xfU == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            if ((8U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((9U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xaU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xbU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xcU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xdU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xeU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else {
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            }
        } else if (((((((((((((((((((((((((((((((((
                                                   ((((((((((((((((0x10U 
                                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                                                                  || (0x11U 
                                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                                 || (0x12U 
                                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                                || (0x13U 
                                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                               || (0x14U 
                                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                              || (0x15U 
                                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                             || (0x16U 
                                                                 == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                            || (0x17U 
                                                                == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                           || (0x18U 
                                                               == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                          || (0x19U 
                                                              == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                         || (0x1aU 
                                                             == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                        || (0x1bU 
                                                            == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                       || (0x1cU 
                                                           == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                      || (0x1dU 
                                                          == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                     || (0x1eU 
                                                         == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                    || (0x1fU 
                                                        == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                   || (0x20U 
                                                       == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                  || (0x21U 
                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                 || (0x22U 
                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                || (0x23U 
                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                               || (0x24U 
                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                              || (0x25U 
                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                             || (0x26U 
                                                 == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                            || (0x27U 
                                                == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                           || (0x28U 
                                               == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                          || (0x29U 
                                              == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                         || (0x2aU 
                                             == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                        || (0x2bU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                       || (0x2cU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                      || (0x2dU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                     || (0x2eU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                    || (0x2fU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                   || (0x30U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                  || (0x31U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                 || (0x32U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                || (0x33U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                               || (0x34U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                              || (0x35U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                             || (0x36U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                            || (0x37U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                           || (0x38U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                          || (0x39U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                         || (0x3aU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                        || (0x3bU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                       || (0x3cU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                      || (0x3dU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                     || (0x3eU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                    || (0x3fU == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            vlSelf->__PVT__sha_core__DOT__W0 = vlSelf->__PVT__sha_core__DOT__W1;
            __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
            __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
            __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
            __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__sha_core__DOT__W2;
            __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
            __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
            __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__sha_core__DOT__W3;
            __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
            __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
            __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__sha_core__DOT__W4;
            __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
            __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__sha_core__DOT__W5;
            __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__sha_core__DOT__W6;
            __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__sha_core__DOT__W7;
            __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__sha_core__DOT__W8;
            __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__sha_core__DOT__W9;
            __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__sha_core__DOT__W10;
            __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__sha_core__DOT__W11;
            __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__sha_core__DOT__W12;
            __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__sha_core__DOT__W13;
            __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__sha_core__DOT__W14;
            __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__sha_core__DOT__Wt;
            __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__sha_core__DOT__next_Wt;
        } else if ((0x40U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
            __Vdly__sha_core__DOT__D = (vlSelf->__PVT__sha_core__DOT__C 
                                        + vlSelf->__PVT__sha_core__DOT__H3);
            __Vdly__sha_core__DOT__H = (vlSelf->__PVT__sha_core__DOT__G 
                                        + vlSelf->__PVT__sha_core__DOT__H7);
            __Vdly__sha_core__DOT__round = 0U;
            __Vdly__sha_core__DOT__busy = 0U;
            __Vdly__sha_core__DOT__C = (vlSelf->__PVT__sha_core__DOT__B 
                                        + vlSelf->__PVT__sha_core__DOT__H2);
            __Vdly__sha_core__DOT__G = (vlSelf->__PVT__sha_core__DOT__F 
                                        + vlSelf->__PVT__sha_core__DOT__H6);
            __Vdly__sha_core__DOT__B = (vlSelf->__PVT__sha_core__DOT__A 
                                        + vlSelf->__PVT__sha_core__DOT__H1);
            __Vdly__sha_core__DOT__F = (vlSelf->__PVT__sha_core__DOT__E 
                                        + vlSelf->__PVT__sha_core__DOT__H5);
            __Vdly__sha_core__DOT__A = (vlSelf->__PVT__sha_core__DOT__next_A 
                                        + vlSelf->__PVT__sha_core__DOT__H0);
            __Vdly__sha_core__DOT__E = (vlSelf->__PVT__sha_core__DOT__next_E 
                                        + vlSelf->__PVT__sha_core__DOT__H4);
        } else {
            __Vdly__sha_core__DOT__round = 0U;
            __Vdly__sha_core__DOT__busy = 0U;
        }
        if ((1U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
            __Vdly__sha_core__DOT__read_counter = 7U;
        } else if (vlSelf->__PVT__sha_core__DOT__busy) {
            vlSelf->__PVT__text_o = 0U;
        } else {
            vlSelf->__PVT__text_o = (((((((((7U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter)) 
                                            | (6U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                           | (5U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                          | (4U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                         | (3U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                        | (2U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                       | (1U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                      | (0U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter)))
                                      ? ((7U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                          ? vlSelf->__PVT__sha_core__DOT__SHA256_result[7U]
                                          : ((6U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                              ? vlSelf->__PVT__sha_core__DOT__SHA256_result[6U]
                                              : ((5U 
                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                  ? 
                                                 vlSelf->__PVT__sha_core__DOT__SHA256_result[5U]
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                   ? 
                                                  vlSelf->__PVT__sha_core__DOT__SHA256_result[4U]
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                    ? 
                                                   vlSelf->__PVT__sha_core__DOT__SHA256_result[3U]
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                     ? 
                                                    vlSelf->__PVT__sha_core__DOT__SHA256_result[2U]
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                      ? 
                                                     vlSelf->__PVT__sha_core__DOT__SHA256_result[1U]
                                                      : 
                                                     vlSelf->__PVT__sha_core__DOT__SHA256_result[0U])))))))
                                      : 0U);
            if ((0U != (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) {
                __Vdly__sha_core__DOT__read_counter 
                    = (7U & ((IData)(vlSelf->__PVT__sha_core__DOT__read_counter) 
                             - (IData)(1U)));
            }
        }
        if (vlSelf->__PVT__cmd_w_i) {
            vlSelf->__PVT__sha_core__DOT__cmd = ((8U 
                                                  & (IData)(vlSelf->__PVT__sha_core__DOT__cmd)) 
                                                 | (IData)(vlSelf->__PVT__cmd_i));
        } else {
            vlSelf->__PVT__sha_core__DOT__cmd = ((7U 
                                                  & (IData)(vlSelf->__PVT__sha_core__DOT__cmd)) 
                                                 | ((IData)(vlSelf->__PVT__sha_core__DOT__busy) 
                                                    << 3U));
            if ((1U & (~ (IData)(vlSelf->__PVT__sha_core__DOT__busy)))) {
                vlSelf->__PVT__sha_core__DOT__cmd = 
                    (0xcU & (IData)(vlSelf->__PVT__sha_core__DOT__cmd));
            }
        }
    }
    __Vtableidx3 = (((IData)(vlSelf->__PVT__sha_core__DOT__round) 
                     << 1U) | (IData)(vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst));
    vlSelf->__PVT__sha_core__DOT__Kt = Vtop_tb__ConstPool__TABLE_hef79451c_0
        [__Vtableidx3];
    vlSelf->__PVT__sha_core__DOT__W2 = __Vdly__sha_core__DOT__W2;
    vlSelf->__PVT__sha_core__DOT__W3 = __Vdly__sha_core__DOT__W3;
    vlSelf->__PVT__sha_core__DOT__W4 = __Vdly__sha_core__DOT__W4;
    vlSelf->__PVT__sha_core__DOT__W5 = __Vdly__sha_core__DOT__W5;
    vlSelf->__PVT__sha_core__DOT__W6 = __Vdly__sha_core__DOT__W6;
    vlSelf->__PVT__sha_core__DOT__W7 = __Vdly__sha_core__DOT__W7;
    vlSelf->__PVT__sha_core__DOT__W8 = __Vdly__sha_core__DOT__W8;
    vlSelf->__PVT__sha_core__DOT__W10 = __Vdly__sha_core__DOT__W10;
    vlSelf->__PVT__sha_core__DOT__W11 = __Vdly__sha_core__DOT__W11;
    vlSelf->__PVT__sha_core__DOT__W12 = __Vdly__sha_core__DOT__W12;
    vlSelf->__PVT__sha_core__DOT__W13 = __Vdly__sha_core__DOT__W13;
    vlSelf->__PVT__sha_core__DOT__H0 = __Vdly__sha_core__DOT__H0;
    vlSelf->__PVT__sha_core__DOT__H1 = __Vdly__sha_core__DOT__H1;
    vlSelf->__PVT__sha_core__DOT__H2 = __Vdly__sha_core__DOT__H2;
    vlSelf->__PVT__sha_core__DOT__H3 = __Vdly__sha_core__DOT__H3;
    vlSelf->__PVT__sha_core__DOT__H4 = __Vdly__sha_core__DOT__H4;
    vlSelf->__PVT__sha_core__DOT__H5 = __Vdly__sha_core__DOT__H5;
    vlSelf->__PVT__sha_core__DOT__H6 = __Vdly__sha_core__DOT__H6;
    vlSelf->__PVT__sha_core__DOT__H7 = __Vdly__sha_core__DOT__H7;
    vlSelf->__PVT__sha_core__DOT__round = __Vdly__sha_core__DOT__round;
    vlSelf->__PVT__sha_core__DOT__W1 = __Vdly__sha_core__DOT__W1;
    vlSelf->__PVT__sha_core__DOT__W9 = __Vdly__sha_core__DOT__W9;
    vlSelf->__PVT__sha_core__DOT__W14 = __Vdly__sha_core__DOT__W14;
    vlSelf->__PVT__sha_core__DOT__D = __Vdly__sha_core__DOT__D;
    vlSelf->__PVT__sha_core__DOT__A = __Vdly__sha_core__DOT__A;
    vlSelf->__PVT__sha_core__DOT__B = __Vdly__sha_core__DOT__B;
    vlSelf->__PVT__sha_core__DOT__C = __Vdly__sha_core__DOT__C;
    vlSelf->__PVT__sha_core__DOT__Wt = __Vdly__sha_core__DOT__Wt;
    vlSelf->__PVT__sha_core__DOT__E = __Vdly__sha_core__DOT__E;
    vlSelf->__PVT__sha_core__DOT__F = __Vdly__sha_core__DOT__F;
    vlSelf->__PVT__sha_core__DOT__G = __Vdly__sha_core__DOT__G;
    vlSelf->__PVT__sha_core__DOT__H = __Vdly__sha_core__DOT__H;
    vlSelf->__PVT__sha_core__DOT__read_counter = __Vdly__sha_core__DOT__read_counter;
    vlSelf->__PVT__sha_core__DOT__round_plus_1 = (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__sha_core__DOT__round)));
    vlSelf->__PVT__sha_core__DOT__next_Wt = ((((vlSelf->__PVT__sha_core__DOT__W14 
                                                << 0xfU) 
                                               | (vlSelf->__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                              ^ (((vlSelf->__PVT__sha_core__DOT__W14 
                                                   << 0xdU) 
                                                  | (vlSelf->__PVT__sha_core__DOT__W14 
                                                     >> 0x13U)) 
                                                 ^ 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->__PVT__sha_core__DOT__W14, 0xaU))) 
                                             + (vlSelf->__PVT__sha_core__DOT__W9 
                                                + (
                                                   (((vlSelf->__PVT__sha_core__DOT__W1 
                                                      << 0x19U) 
                                                     | (vlSelf->__PVT__sha_core__DOT__W1 
                                                        >> 7U)) 
                                                    ^ 
                                                    (((vlSelf->__PVT__sha_core__DOT__W1 
                                                       << 0xeU) 
                                                      | (vlSelf->__PVT__sha_core__DOT__W1 
                                                         >> 0x12U)) 
                                                     ^ 
                                                     VL_SHIFTR_III(32,32,32, vlSelf->__PVT__sha_core__DOT__W1, 3U))) 
                                                   + vlSelf->__PVT__sha_core__DOT__W0)));
    vlSelf->__PVT__sha_core__DOT__SHA256_result[0U] 
        = vlSelf->__PVT__sha_core__DOT__H;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[1U] 
        = vlSelf->__PVT__sha_core__DOT__G;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[2U] 
        = vlSelf->__PVT__sha_core__DOT__F;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[3U] 
        = vlSelf->__PVT__sha_core__DOT__E;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[4U] 
        = vlSelf->__PVT__sha_core__DOT__D;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[5U] 
        = vlSelf->__PVT__sha_core__DOT__C;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[6U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__sha_core__DOT__A)) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__sha_core__DOT__B))));
    vlSelf->__PVT__sha_core__DOT__SHA256_result[7U] 
        = (IData)(((((QData)((IData)(vlSelf->__PVT__sha_core__DOT__A)) 
                     << 0x20U) | (QData)((IData)(vlSelf->__PVT__sha_core__DOT__B))) 
                   >> 0x20U));
    vlSelf->__PVT__sha_core__DOT__T1_32 = (vlSelf->__PVT__sha_core__DOT__H 
                                           + ((((vlSelf->__PVT__sha_core__DOT__E 
                                                 << 0x1aU) 
                                                | (vlSelf->__PVT__sha_core__DOT__E 
                                                   >> 6U)) 
                                               ^ ((
                                                   (vlSelf->__PVT__sha_core__DOT__E 
                                                    << 0x15U) 
                                                   | (vlSelf->__PVT__sha_core__DOT__E 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  ((vlSelf->__PVT__sha_core__DOT__E 
                                                    << 7U) 
                                                   | (vlSelf->__PVT__sha_core__DOT__E 
                                                      >> 0x19U)))) 
                                              + (((vlSelf->__PVT__sha_core__DOT__E 
                                                   & vlSelf->__PVT__sha_core__DOT__F) 
                                                  ^ 
                                                  ((~ vlSelf->__PVT__sha_core__DOT__E) 
                                                   & vlSelf->__PVT__sha_core__DOT__G)) 
                                                 + 
                                                 (vlSelf->__PVT__sha_core__DOT__Kt 
                                                  + vlSelf->__PVT__sha_core__DOT__Wt))));
    vlSelf->__PVT__sha_core__DOT__next_E = (vlSelf->__PVT__sha_core__DOT__D 
                                            + vlSelf->__PVT__sha_core__DOT__T1_32);
    vlSelf->__PVT__sha_core__DOT__next_A = (vlSelf->__PVT__sha_core__DOT__T1_32 
                                            + ((((vlSelf->__PVT__sha_core__DOT__A 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__sha_core__DOT__A 
                                                    >> 2U)) 
                                                ^ (
                                                   ((vlSelf->__PVT__sha_core__DOT__A 
                                                     << 0x13U) 
                                                    | (vlSelf->__PVT__sha_core__DOT__A 
                                                       >> 0xdU)) 
                                                   ^ 
                                                   ((vlSelf->__PVT__sha_core__DOT__A 
                                                     << 0xaU) 
                                                    | (vlSelf->__PVT__sha_core__DOT__A 
                                                       >> 0x16U)))) 
                                               + ((vlSelf->__PVT__sha_core__DOT__A 
                                                   & vlSelf->__PVT__sha_core__DOT__B) 
                                                  ^ 
                                                  ((vlSelf->__PVT__sha_core__DOT__B 
                                                    & vlSelf->__PVT__sha_core__DOT__C) 
                                                   ^ 
                                                   (vlSelf->__PVT__sha_core__DOT__A 
                                                    & vlSelf->__PVT__sha_core__DOT__C)))));
    vlSelf->__PVT__sha_core__DOT__busy = __Vdly__sha_core__DOT__busy;
}

VL_INLINE_OPT void Vtop_tb_doublesha___nba_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE__0(Vtop_tb_doublesha* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_doublesha___nba_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*6:0*/ __Vdly__sha_core__DOT__round;
    __Vdly__sha_core__DOT__round = 0;
    CData/*0:0*/ __Vdly__sha_core__DOT__busy;
    __Vdly__sha_core__DOT__busy = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W1;
    __Vdly__sha_core__DOT__W1 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W2;
    __Vdly__sha_core__DOT__W2 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W3;
    __Vdly__sha_core__DOT__W3 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W4;
    __Vdly__sha_core__DOT__W4 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W5;
    __Vdly__sha_core__DOT__W5 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W6;
    __Vdly__sha_core__DOT__W6 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W7;
    __Vdly__sha_core__DOT__W7 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W8;
    __Vdly__sha_core__DOT__W8 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W9;
    __Vdly__sha_core__DOT__W9 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W10;
    __Vdly__sha_core__DOT__W10 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W11;
    __Vdly__sha_core__DOT__W11 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W12;
    __Vdly__sha_core__DOT__W12 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W13;
    __Vdly__sha_core__DOT__W13 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W14;
    __Vdly__sha_core__DOT__W14 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__Wt;
    __Vdly__sha_core__DOT__Wt = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__A;
    __Vdly__sha_core__DOT__A = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__B;
    __Vdly__sha_core__DOT__B = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__C;
    __Vdly__sha_core__DOT__C = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__D;
    __Vdly__sha_core__DOT__D = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__E;
    __Vdly__sha_core__DOT__E = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__F;
    __Vdly__sha_core__DOT__F = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__G;
    __Vdly__sha_core__DOT__G = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H;
    __Vdly__sha_core__DOT__H = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H0;
    __Vdly__sha_core__DOT__H0 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H1;
    __Vdly__sha_core__DOT__H1 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H2;
    __Vdly__sha_core__DOT__H2 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H3;
    __Vdly__sha_core__DOT__H3 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H4;
    __Vdly__sha_core__DOT__H4 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H5;
    __Vdly__sha_core__DOT__H5 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H6;
    __Vdly__sha_core__DOT__H6 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H7;
    __Vdly__sha_core__DOT__H7 = 0;
    CData/*2:0*/ __Vdly__sha_core__DOT__read_counter;
    __Vdly__sha_core__DOT__read_counter = 0;
    VlWide<16>/*511:0*/ __Vtemp_3;
    VlWide<16>/*511:0*/ __Vtemp_7;
    VlWide<8>/*255:0*/ __Vtemp_9;
    // Body
    __Vdly__sha_core__DOT__read_counter = vlSelf->__PVT__sha_core__DOT__read_counter;
    __Vdly__sha_core__DOT__H7 = vlSelf->__PVT__sha_core__DOT__H7;
    __Vdly__sha_core__DOT__H6 = vlSelf->__PVT__sha_core__DOT__H6;
    __Vdly__sha_core__DOT__H5 = vlSelf->__PVT__sha_core__DOT__H5;
    __Vdly__sha_core__DOT__H4 = vlSelf->__PVT__sha_core__DOT__H4;
    __Vdly__sha_core__DOT__H3 = vlSelf->__PVT__sha_core__DOT__H3;
    __Vdly__sha_core__DOT__H2 = vlSelf->__PVT__sha_core__DOT__H2;
    __Vdly__sha_core__DOT__H1 = vlSelf->__PVT__sha_core__DOT__H1;
    __Vdly__sha_core__DOT__H0 = vlSelf->__PVT__sha_core__DOT__H0;
    __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__sha_core__DOT__W13;
    __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__sha_core__DOT__W12;
    __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__sha_core__DOT__W11;
    __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__sha_core__DOT__W10;
    __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__sha_core__DOT__W8;
    __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__sha_core__DOT__W7;
    __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__sha_core__DOT__W6;
    __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__sha_core__DOT__W5;
    __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__sha_core__DOT__W4;
    __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__sha_core__DOT__W3;
    __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__sha_core__DOT__W2;
    __Vdly__sha_core__DOT__busy = vlSelf->__PVT__sha_core__DOT__busy;
    __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round;
    __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__sha_core__DOT__W14;
    __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__sha_core__DOT__W9;
    __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__sha_core__DOT__W1;
    __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__D;
    __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__C;
    __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__B;
    __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__A;
    __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__sha_core__DOT__Wt;
    __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__H;
    __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__G;
    __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__F;
    __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__E;
    if (vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst) {
        vlSelf->__PVT__hash_index = 0U;
        vlSelf->__PVT__delay_left = 0U;
        vlSelf->__PVT__first_hash[0U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__first_hash[1U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__first_hash[2U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__first_hash[3U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__first_hash[4U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__first_hash[5U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__first_hash[6U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__first_hash[7U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__second_cycle = 0U;
        vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->__PVT__tmp_i[8U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->__PVT__tmp_i[9U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->__PVT__tmp_i[0xaU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->__PVT__tmp_i[0xbU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->__PVT__tmp_i[0xcU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->__PVT__tmp_i[0xdU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->__PVT__tmp_i[0xeU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->__PVT__tmp_i[0xfU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->complete = 0U;
        vlSelf->__PVT__state = 0U;
        __Vdly__sha_core__DOT__round = 0U;
        __Vdly__sha_core__DOT__busy = 0U;
        vlSelf->__PVT__sha_core__DOT__W0 = 0U;
        __Vdly__sha_core__DOT__W1 = 0U;
        __Vdly__sha_core__DOT__W2 = 0U;
        __Vdly__sha_core__DOT__W3 = 0U;
        __Vdly__sha_core__DOT__W4 = 0U;
        __Vdly__sha_core__DOT__W5 = 0U;
        __Vdly__sha_core__DOT__W6 = 0U;
        __Vdly__sha_core__DOT__W7 = 0U;
        __Vdly__sha_core__DOT__W8 = 0U;
        __Vdly__sha_core__DOT__W9 = 0U;
        __Vdly__sha_core__DOT__W10 = 0U;
        __Vdly__sha_core__DOT__W11 = 0U;
        __Vdly__sha_core__DOT__W12 = 0U;
        __Vdly__sha_core__DOT__W13 = 0U;
        __Vdly__sha_core__DOT__W14 = 0U;
        __Vdly__sha_core__DOT__Wt = 0U;
        __Vdly__sha_core__DOT__A = 0U;
        __Vdly__sha_core__DOT__B = 0U;
        __Vdly__sha_core__DOT__C = 0U;
        __Vdly__sha_core__DOT__D = 0U;
        __Vdly__sha_core__DOT__E = 0U;
        __Vdly__sha_core__DOT__F = 0U;
        __Vdly__sha_core__DOT__G = 0U;
        __Vdly__sha_core__DOT__H = 0U;
        __Vdly__sha_core__DOT__H0 = 0U;
        __Vdly__sha_core__DOT__H1 = 0U;
        __Vdly__sha_core__DOT__H2 = 0U;
        __Vdly__sha_core__DOT__H3 = 0U;
        __Vdly__sha_core__DOT__H4 = 0U;
        __Vdly__sha_core__DOT__H5 = 0U;
        __Vdly__sha_core__DOT__H6 = 0U;
        __Vdly__sha_core__DOT__H7 = 0U;
        vlSelf->__PVT__text_o = 0U;
        __Vdly__sha_core__DOT__read_counter = 0U;
        vlSelf->__PVT__sha_core__DOT__cmd = 0U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__delay_left))) {
            vlSelf->__PVT__delay_left = (0xfU & ((IData)(vlSelf->__PVT__delay_left) 
                                                 - (IData)(1U)));
        } else if ((1U & (~ (((IData)(vlSelf->__PVT__sha_core__DOT__cmd) 
                              >> 3U) & ((2U == (IData)(vlSelf->__PVT__state)) 
                                        | (4U == (IData)(vlSelf->__PVT__state))))))) {
            if ((0U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_i = 2U;
                vlSelf->__PVT__cmd_w_i = 1U;
                vlSelf->__PVT__tmp_i[0U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[3U];
                vlSelf->__PVT__tmp_i[1U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[4U];
                vlSelf->__PVT__tmp_i[2U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[5U];
                vlSelf->__PVT__tmp_i[3U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[6U];
                vlSelf->__PVT__tmp_i[4U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[7U];
                vlSelf->__PVT__tmp_i[5U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[8U];
                vlSelf->__PVT__tmp_i[6U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[9U];
                vlSelf->__PVT__tmp_i[7U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xaU];
                vlSelf->__PVT__tmp_i[8U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xbU];
                vlSelf->__PVT__tmp_i[9U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xcU];
                vlSelf->__PVT__tmp_i[0xaU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xdU];
                vlSelf->__PVT__tmp_i[0xbU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xeU];
                vlSelf->__PVT__tmp_i[0xcU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xfU];
                vlSelf->__PVT__tmp_i[0xdU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x10U];
                vlSelf->__PVT__tmp_i[0xeU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x11U];
                vlSelf->__PVT__tmp_i[0xfU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x12U];
                vlSelf->__PVT__state = 1U;
            } else if ((1U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__text_i = vlSelf->__PVT__tmp_i[0xfU];
                VL_SHIFTL_WWI(512,512,32, __Vtemp_3, vlSelf->__PVT__tmp_i, 0x20U);
                vlSelf->__PVT__tmp_i[0U] = __Vtemp_3[0U];
                vlSelf->__PVT__tmp_i[1U] = __Vtemp_3[1U];
                vlSelf->__PVT__tmp_i[2U] = __Vtemp_3[2U];
                vlSelf->__PVT__tmp_i[3U] = __Vtemp_3[3U];
                vlSelf->__PVT__tmp_i[4U] = __Vtemp_3[4U];
                vlSelf->__PVT__tmp_i[5U] = __Vtemp_3[5U];
                vlSelf->__PVT__tmp_i[6U] = __Vtemp_3[6U];
                vlSelf->__PVT__tmp_i[7U] = __Vtemp_3[7U];
                vlSelf->__PVT__tmp_i[8U] = __Vtemp_3[8U];
                vlSelf->__PVT__tmp_i[9U] = __Vtemp_3[9U];
                vlSelf->__PVT__tmp_i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->__PVT__tmp_i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->__PVT__tmp_i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->__PVT__tmp_i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->__PVT__tmp_i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->__PVT__tmp_i[0xfU] = __Vtemp_3[0xfU];
                if ((0x10U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 2U;
                }
            } else if ((2U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 1U;
                if (vlSelf->__PVT__second_cycle) {
                    vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[0U];
                    vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[1U];
                    vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[2U];
                    vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[3U];
                    vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[4U];
                    vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[5U];
                    vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[6U];
                    vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[7U];
                    vlSelf->__PVT__tmp_i[8U] = vlSelf->__PVT__first_hash[0U];
                    vlSelf->__PVT__tmp_i[9U] = vlSelf->__PVT__first_hash[1U];
                    vlSelf->__PVT__tmp_i[0xaU] = vlSelf->__PVT__first_hash[2U];
                    vlSelf->__PVT__tmp_i[0xbU] = vlSelf->__PVT__first_hash[3U];
                    vlSelf->__PVT__tmp_i[0xcU] = vlSelf->__PVT__first_hash[4U];
                    vlSelf->__PVT__tmp_i[0xdU] = vlSelf->__PVT__first_hash[5U];
                    vlSelf->__PVT__tmp_i[0xeU] = vlSelf->__PVT__first_hash[6U];
                    vlSelf->__PVT__tmp_i[0xfU] = vlSelf->__PVT__first_hash[7U];
                    vlSelf->__PVT__cmd_i = 2U;
                } else {
                    vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0U];
                    vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[1U];
                    vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[2U];
                    vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[3U];
                    vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[4U];
                    vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[5U];
                    vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[6U];
                    vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[7U];
                    vlSelf->__PVT__tmp_i[8U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[8U];
                    vlSelf->__PVT__tmp_i[9U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[9U];
                    vlSelf->__PVT__tmp_i[0xaU] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0xaU];
                    vlSelf->__PVT__tmp_i[0xbU] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0xbU];
                    vlSelf->__PVT__tmp_i[0xcU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                        [3U];
                    vlSelf->__PVT__tmp_i[0xdU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0U];
                    vlSelf->__PVT__tmp_i[0xeU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[1U];
                    vlSelf->__PVT__tmp_i[0xfU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[2U];
                    vlSelf->__PVT__cmd_i = 6U;
                }
                vlSelf->__PVT__state = 3U;
            } else if ((3U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__text_i = vlSelf->__PVT__tmp_i[0xfU];
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                VL_SHIFTL_WWI(512,512,32, __Vtemp_7, vlSelf->__PVT__tmp_i, 0x20U);
                vlSelf->__PVT__tmp_i[0U] = __Vtemp_7[0U];
                vlSelf->__PVT__tmp_i[1U] = __Vtemp_7[1U];
                vlSelf->__PVT__tmp_i[2U] = __Vtemp_7[2U];
                vlSelf->__PVT__tmp_i[3U] = __Vtemp_7[3U];
                vlSelf->__PVT__tmp_i[4U] = __Vtemp_7[4U];
                vlSelf->__PVT__tmp_i[5U] = __Vtemp_7[5U];
                vlSelf->__PVT__tmp_i[6U] = __Vtemp_7[6U];
                vlSelf->__PVT__tmp_i[7U] = __Vtemp_7[7U];
                vlSelf->__PVT__tmp_i[8U] = __Vtemp_7[8U];
                vlSelf->__PVT__tmp_i[9U] = __Vtemp_7[9U];
                vlSelf->__PVT__tmp_i[0xaU] = __Vtemp_7[0xaU];
                vlSelf->__PVT__tmp_i[0xbU] = __Vtemp_7[0xbU];
                vlSelf->__PVT__tmp_i[0xcU] = __Vtemp_7[0xcU];
                vlSelf->__PVT__tmp_i[0xdU] = __Vtemp_7[0xdU];
                vlSelf->__PVT__tmp_i[0xeU] = __Vtemp_7[0xeU];
                vlSelf->__PVT__tmp_i[0xfU] = __Vtemp_7[0xfU];
                if ((0x10U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 4U;
                }
            } else if ((4U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_i = 1U;
                vlSelf->__PVT__cmd_w_i = 1U;
                vlSelf->__PVT__state = 5U;
            } else if ((5U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__state = 6U;
                vlSelf->__PVT__delay_left = 1U;
            } else if ((6U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__first_hash[0U] = vlSelf->__PVT__text_o;
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                if ((8U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 7U;
                    if (vlSelf->__PVT__second_cycle) {
                        vlSelf->complete = 1U;
                        vlSelf->hash[0U] = vlSelf->__PVT__first_hash[0U];
                        vlSelf->hash[1U] = vlSelf->__PVT__first_hash[1U];
                        vlSelf->hash[2U] = vlSelf->__PVT__first_hash[2U];
                        vlSelf->hash[3U] = vlSelf->__PVT__first_hash[3U];
                        vlSelf->hash[4U] = vlSelf->__PVT__first_hash[4U];
                        vlSelf->hash[5U] = vlSelf->__PVT__first_hash[5U];
                        vlSelf->hash[6U] = vlSelf->__PVT__first_hash[6U];
                        vlSelf->hash[7U] = vlSelf->__PVT__first_hash[7U];
                    } else {
                        vlSelf->__PVT__state = 2U;
                        vlSelf->__PVT__second_cycle = 1U;
                    }
                } else {
                    VL_SHIFTL_WWI(256,256,32, __Vtemp_9, vlSelf->__PVT__first_hash, 0x20U);
                    vlSelf->__PVT__first_hash[0U] = 
                        __Vtemp_9[0U];
                    vlSelf->__PVT__first_hash[1U] = 
                        __Vtemp_9[1U];
                    vlSelf->__PVT__first_hash[2U] = 
                        __Vtemp_9[2U];
                    vlSelf->__PVT__first_hash[3U] = 
                        __Vtemp_9[3U];
                    vlSelf->__PVT__first_hash[4U] = 
                        __Vtemp_9[4U];
                    vlSelf->__PVT__first_hash[5U] = 
                        __Vtemp_9[5U];
                    vlSelf->__PVT__first_hash[6U] = 
                        __Vtemp_9[6U];
                    vlSelf->__PVT__first_hash[7U] = 
                        __Vtemp_9[7U];
                }
            }
        }
        if (((((((((0U == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                   | (1U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                  | (2U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                 | (3U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                | (4U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
               | (5U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
              | (6U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
             | (7U == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            if ((0U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                if ((2U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                    vlSelf->__PVT__sha_core__DOT__W0 
                        = vlSelf->__PVT__text_i;
                    __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                    __Vdly__sha_core__DOT__busy = 1U;
                    __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                    if ((4U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                        if ((4U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                            __Vdly__sha_core__DOT__H0 
                                = vlSelf->__PVT__sha_core__DOT__A;
                            __Vdly__sha_core__DOT__H1 
                                = vlSelf->__PVT__sha_core__DOT__B;
                            __Vdly__sha_core__DOT__H2 
                                = vlSelf->__PVT__sha_core__DOT__C;
                            __Vdly__sha_core__DOT__H3 
                                = vlSelf->__PVT__sha_core__DOT__D;
                            __Vdly__sha_core__DOT__H4 
                                = vlSelf->__PVT__sha_core__DOT__E;
                            __Vdly__sha_core__DOT__H5 
                                = vlSelf->__PVT__sha_core__DOT__F;
                            __Vdly__sha_core__DOT__H6 
                                = vlSelf->__PVT__sha_core__DOT__G;
                            __Vdly__sha_core__DOT__H7 
                                = vlSelf->__PVT__sha_core__DOT__H;
                        }
                    } else {
                        __Vdly__sha_core__DOT__A = 0x6a09e667U;
                        __Vdly__sha_core__DOT__B = 0xbb67ae85U;
                        __Vdly__sha_core__DOT__C = 0x3c6ef372U;
                        __Vdly__sha_core__DOT__D = 0xa54ff53aU;
                        __Vdly__sha_core__DOT__E = 0x510e527fU;
                        __Vdly__sha_core__DOT__F = 0x9b05688cU;
                        __Vdly__sha_core__DOT__G = 0x1f83d9abU;
                        __Vdly__sha_core__DOT__H = 0x5be0cd19U;
                        __Vdly__sha_core__DOT__H0 = 0x6a09e667U;
                        __Vdly__sha_core__DOT__H1 = 0xbb67ae85U;
                        __Vdly__sha_core__DOT__H2 = 0x3c6ef372U;
                        __Vdly__sha_core__DOT__H3 = 0xa54ff53aU;
                        __Vdly__sha_core__DOT__H4 = 0x510e527fU;
                        __Vdly__sha_core__DOT__H5 = 0x9b05688cU;
                        __Vdly__sha_core__DOT__H6 = 0x1f83d9abU;
                        __Vdly__sha_core__DOT__H7 = 0x5be0cd19U;
                    }
                } else {
                    __Vdly__sha_core__DOT__round = 0U;
                }
            } else if ((1U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((2U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((3U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((4U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((5U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((6U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else {
                __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            }
        } else if (((((((((8U == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                          | (9U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                         | (0xaU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                        | (0xbU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                       | (0xcU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                      | (0xdU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                     | (0xeU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                    | (0xfU == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            if ((8U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((9U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xaU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xbU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xcU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xdU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xeU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else {
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            }
        } else if (((((((((((((((((((((((((((((((((
                                                   ((((((((((((((((0x10U 
                                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                                                                  || (0x11U 
                                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                                 || (0x12U 
                                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                                || (0x13U 
                                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                               || (0x14U 
                                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                              || (0x15U 
                                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                             || (0x16U 
                                                                 == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                            || (0x17U 
                                                                == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                           || (0x18U 
                                                               == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                          || (0x19U 
                                                              == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                         || (0x1aU 
                                                             == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                        || (0x1bU 
                                                            == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                       || (0x1cU 
                                                           == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                      || (0x1dU 
                                                          == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                     || (0x1eU 
                                                         == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                    || (0x1fU 
                                                        == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                   || (0x20U 
                                                       == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                  || (0x21U 
                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                 || (0x22U 
                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                || (0x23U 
                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                               || (0x24U 
                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                              || (0x25U 
                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                             || (0x26U 
                                                 == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                            || (0x27U 
                                                == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                           || (0x28U 
                                               == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                          || (0x29U 
                                              == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                         || (0x2aU 
                                             == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                        || (0x2bU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                       || (0x2cU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                      || (0x2dU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                     || (0x2eU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                    || (0x2fU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                   || (0x30U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                  || (0x31U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                 || (0x32U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                || (0x33U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                               || (0x34U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                              || (0x35U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                             || (0x36U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                            || (0x37U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                           || (0x38U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                          || (0x39U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                         || (0x3aU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                        || (0x3bU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                       || (0x3cU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                      || (0x3dU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                     || (0x3eU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                    || (0x3fU == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            vlSelf->__PVT__sha_core__DOT__W0 = vlSelf->__PVT__sha_core__DOT__W1;
            __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
            __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
            __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
            __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__sha_core__DOT__W2;
            __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
            __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
            __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__sha_core__DOT__W3;
            __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
            __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
            __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__sha_core__DOT__W4;
            __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
            __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__sha_core__DOT__W5;
            __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__sha_core__DOT__W6;
            __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__sha_core__DOT__W7;
            __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__sha_core__DOT__W8;
            __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__sha_core__DOT__W9;
            __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__sha_core__DOT__W10;
            __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__sha_core__DOT__W11;
            __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__sha_core__DOT__W12;
            __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__sha_core__DOT__W13;
            __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__sha_core__DOT__W14;
            __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__sha_core__DOT__Wt;
            __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__sha_core__DOT__next_Wt;
        } else if ((0x40U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
            __Vdly__sha_core__DOT__D = (vlSelf->__PVT__sha_core__DOT__C 
                                        + vlSelf->__PVT__sha_core__DOT__H3);
            __Vdly__sha_core__DOT__H = (vlSelf->__PVT__sha_core__DOT__G 
                                        + vlSelf->__PVT__sha_core__DOT__H7);
            __Vdly__sha_core__DOT__round = 0U;
            __Vdly__sha_core__DOT__busy = 0U;
            __Vdly__sha_core__DOT__C = (vlSelf->__PVT__sha_core__DOT__B 
                                        + vlSelf->__PVT__sha_core__DOT__H2);
            __Vdly__sha_core__DOT__G = (vlSelf->__PVT__sha_core__DOT__F 
                                        + vlSelf->__PVT__sha_core__DOT__H6);
            __Vdly__sha_core__DOT__B = (vlSelf->__PVT__sha_core__DOT__A 
                                        + vlSelf->__PVT__sha_core__DOT__H1);
            __Vdly__sha_core__DOT__F = (vlSelf->__PVT__sha_core__DOT__E 
                                        + vlSelf->__PVT__sha_core__DOT__H5);
            __Vdly__sha_core__DOT__A = (vlSelf->__PVT__sha_core__DOT__next_A 
                                        + vlSelf->__PVT__sha_core__DOT__H0);
            __Vdly__sha_core__DOT__E = (vlSelf->__PVT__sha_core__DOT__next_E 
                                        + vlSelf->__PVT__sha_core__DOT__H4);
        } else {
            __Vdly__sha_core__DOT__round = 0U;
            __Vdly__sha_core__DOT__busy = 0U;
        }
        if ((1U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
            __Vdly__sha_core__DOT__read_counter = 7U;
        } else if (vlSelf->__PVT__sha_core__DOT__busy) {
            vlSelf->__PVT__text_o = 0U;
        } else {
            vlSelf->__PVT__text_o = (((((((((7U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter)) 
                                            | (6U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                           | (5U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                          | (4U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                         | (3U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                        | (2U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                       | (1U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                      | (0U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter)))
                                      ? ((7U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                          ? vlSelf->__PVT__sha_core__DOT__SHA256_result[7U]
                                          : ((6U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                              ? vlSelf->__PVT__sha_core__DOT__SHA256_result[6U]
                                              : ((5U 
                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                  ? 
                                                 vlSelf->__PVT__sha_core__DOT__SHA256_result[5U]
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                   ? 
                                                  vlSelf->__PVT__sha_core__DOT__SHA256_result[4U]
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                    ? 
                                                   vlSelf->__PVT__sha_core__DOT__SHA256_result[3U]
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                     ? 
                                                    vlSelf->__PVT__sha_core__DOT__SHA256_result[2U]
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                      ? 
                                                     vlSelf->__PVT__sha_core__DOT__SHA256_result[1U]
                                                      : 
                                                     vlSelf->__PVT__sha_core__DOT__SHA256_result[0U])))))))
                                      : 0U);
            if ((0U != (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) {
                __Vdly__sha_core__DOT__read_counter 
                    = (7U & ((IData)(vlSelf->__PVT__sha_core__DOT__read_counter) 
                             - (IData)(1U)));
            }
        }
        if (vlSelf->__PVT__cmd_w_i) {
            vlSelf->__PVT__sha_core__DOT__cmd = ((8U 
                                                  & (IData)(vlSelf->__PVT__sha_core__DOT__cmd)) 
                                                 | (IData)(vlSelf->__PVT__cmd_i));
        } else {
            vlSelf->__PVT__sha_core__DOT__cmd = ((7U 
                                                  & (IData)(vlSelf->__PVT__sha_core__DOT__cmd)) 
                                                 | ((IData)(vlSelf->__PVT__sha_core__DOT__busy) 
                                                    << 3U));
            if ((1U & (~ (IData)(vlSelf->__PVT__sha_core__DOT__busy)))) {
                vlSelf->__PVT__sha_core__DOT__cmd = 
                    (0xcU & (IData)(vlSelf->__PVT__sha_core__DOT__cmd));
            }
        }
    }
    __Vtableidx4 = (((IData)(vlSelf->__PVT__sha_core__DOT__round) 
                     << 1U) | (IData)(vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst));
    vlSelf->__PVT__sha_core__DOT__Kt = Vtop_tb__ConstPool__TABLE_hef79451c_0
        [__Vtableidx4];
    vlSelf->__PVT__sha_core__DOT__W2 = __Vdly__sha_core__DOT__W2;
    vlSelf->__PVT__sha_core__DOT__W3 = __Vdly__sha_core__DOT__W3;
    vlSelf->__PVT__sha_core__DOT__W4 = __Vdly__sha_core__DOT__W4;
    vlSelf->__PVT__sha_core__DOT__W5 = __Vdly__sha_core__DOT__W5;
    vlSelf->__PVT__sha_core__DOT__W6 = __Vdly__sha_core__DOT__W6;
    vlSelf->__PVT__sha_core__DOT__W7 = __Vdly__sha_core__DOT__W7;
    vlSelf->__PVT__sha_core__DOT__W8 = __Vdly__sha_core__DOT__W8;
    vlSelf->__PVT__sha_core__DOT__W10 = __Vdly__sha_core__DOT__W10;
    vlSelf->__PVT__sha_core__DOT__W11 = __Vdly__sha_core__DOT__W11;
    vlSelf->__PVT__sha_core__DOT__W12 = __Vdly__sha_core__DOT__W12;
    vlSelf->__PVT__sha_core__DOT__W13 = __Vdly__sha_core__DOT__W13;
    vlSelf->__PVT__sha_core__DOT__H0 = __Vdly__sha_core__DOT__H0;
    vlSelf->__PVT__sha_core__DOT__H1 = __Vdly__sha_core__DOT__H1;
    vlSelf->__PVT__sha_core__DOT__H2 = __Vdly__sha_core__DOT__H2;
    vlSelf->__PVT__sha_core__DOT__H3 = __Vdly__sha_core__DOT__H3;
    vlSelf->__PVT__sha_core__DOT__H4 = __Vdly__sha_core__DOT__H4;
    vlSelf->__PVT__sha_core__DOT__H5 = __Vdly__sha_core__DOT__H5;
    vlSelf->__PVT__sha_core__DOT__H6 = __Vdly__sha_core__DOT__H6;
    vlSelf->__PVT__sha_core__DOT__H7 = __Vdly__sha_core__DOT__H7;
    vlSelf->__PVT__sha_core__DOT__round = __Vdly__sha_core__DOT__round;
    vlSelf->__PVT__sha_core__DOT__W1 = __Vdly__sha_core__DOT__W1;
    vlSelf->__PVT__sha_core__DOT__W9 = __Vdly__sha_core__DOT__W9;
    vlSelf->__PVT__sha_core__DOT__W14 = __Vdly__sha_core__DOT__W14;
    vlSelf->__PVT__sha_core__DOT__D = __Vdly__sha_core__DOT__D;
    vlSelf->__PVT__sha_core__DOT__A = __Vdly__sha_core__DOT__A;
    vlSelf->__PVT__sha_core__DOT__B = __Vdly__sha_core__DOT__B;
    vlSelf->__PVT__sha_core__DOT__C = __Vdly__sha_core__DOT__C;
    vlSelf->__PVT__sha_core__DOT__Wt = __Vdly__sha_core__DOT__Wt;
    vlSelf->__PVT__sha_core__DOT__E = __Vdly__sha_core__DOT__E;
    vlSelf->__PVT__sha_core__DOT__F = __Vdly__sha_core__DOT__F;
    vlSelf->__PVT__sha_core__DOT__G = __Vdly__sha_core__DOT__G;
    vlSelf->__PVT__sha_core__DOT__H = __Vdly__sha_core__DOT__H;
    vlSelf->__PVT__sha_core__DOT__read_counter = __Vdly__sha_core__DOT__read_counter;
    vlSelf->__PVT__sha_core__DOT__round_plus_1 = (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__sha_core__DOT__round)));
    vlSelf->__PVT__sha_core__DOT__next_Wt = ((((vlSelf->__PVT__sha_core__DOT__W14 
                                                << 0xfU) 
                                               | (vlSelf->__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                              ^ (((vlSelf->__PVT__sha_core__DOT__W14 
                                                   << 0xdU) 
                                                  | (vlSelf->__PVT__sha_core__DOT__W14 
                                                     >> 0x13U)) 
                                                 ^ 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->__PVT__sha_core__DOT__W14, 0xaU))) 
                                             + (vlSelf->__PVT__sha_core__DOT__W9 
                                                + (
                                                   (((vlSelf->__PVT__sha_core__DOT__W1 
                                                      << 0x19U) 
                                                     | (vlSelf->__PVT__sha_core__DOT__W1 
                                                        >> 7U)) 
                                                    ^ 
                                                    (((vlSelf->__PVT__sha_core__DOT__W1 
                                                       << 0xeU) 
                                                      | (vlSelf->__PVT__sha_core__DOT__W1 
                                                         >> 0x12U)) 
                                                     ^ 
                                                     VL_SHIFTR_III(32,32,32, vlSelf->__PVT__sha_core__DOT__W1, 3U))) 
                                                   + vlSelf->__PVT__sha_core__DOT__W0)));
    vlSelf->__PVT__sha_core__DOT__SHA256_result[0U] 
        = vlSelf->__PVT__sha_core__DOT__H;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[1U] 
        = vlSelf->__PVT__sha_core__DOT__G;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[2U] 
        = vlSelf->__PVT__sha_core__DOT__F;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[3U] 
        = vlSelf->__PVT__sha_core__DOT__E;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[4U] 
        = vlSelf->__PVT__sha_core__DOT__D;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[5U] 
        = vlSelf->__PVT__sha_core__DOT__C;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[6U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__sha_core__DOT__A)) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__sha_core__DOT__B))));
    vlSelf->__PVT__sha_core__DOT__SHA256_result[7U] 
        = (IData)(((((QData)((IData)(vlSelf->__PVT__sha_core__DOT__A)) 
                     << 0x20U) | (QData)((IData)(vlSelf->__PVT__sha_core__DOT__B))) 
                   >> 0x20U));
    vlSelf->__PVT__sha_core__DOT__T1_32 = (vlSelf->__PVT__sha_core__DOT__H 
                                           + ((((vlSelf->__PVT__sha_core__DOT__E 
                                                 << 0x1aU) 
                                                | (vlSelf->__PVT__sha_core__DOT__E 
                                                   >> 6U)) 
                                               ^ ((
                                                   (vlSelf->__PVT__sha_core__DOT__E 
                                                    << 0x15U) 
                                                   | (vlSelf->__PVT__sha_core__DOT__E 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  ((vlSelf->__PVT__sha_core__DOT__E 
                                                    << 7U) 
                                                   | (vlSelf->__PVT__sha_core__DOT__E 
                                                      >> 0x19U)))) 
                                              + (((vlSelf->__PVT__sha_core__DOT__E 
                                                   & vlSelf->__PVT__sha_core__DOT__F) 
                                                  ^ 
                                                  ((~ vlSelf->__PVT__sha_core__DOT__E) 
                                                   & vlSelf->__PVT__sha_core__DOT__G)) 
                                                 + 
                                                 (vlSelf->__PVT__sha_core__DOT__Kt 
                                                  + vlSelf->__PVT__sha_core__DOT__Wt))));
    vlSelf->__PVT__sha_core__DOT__next_E = (vlSelf->__PVT__sha_core__DOT__D 
                                            + vlSelf->__PVT__sha_core__DOT__T1_32);
    vlSelf->__PVT__sha_core__DOT__next_A = (vlSelf->__PVT__sha_core__DOT__T1_32 
                                            + ((((vlSelf->__PVT__sha_core__DOT__A 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__sha_core__DOT__A 
                                                    >> 2U)) 
                                                ^ (
                                                   ((vlSelf->__PVT__sha_core__DOT__A 
                                                     << 0x13U) 
                                                    | (vlSelf->__PVT__sha_core__DOT__A 
                                                       >> 0xdU)) 
                                                   ^ 
                                                   ((vlSelf->__PVT__sha_core__DOT__A 
                                                     << 0xaU) 
                                                    | (vlSelf->__PVT__sha_core__DOT__A 
                                                       >> 0x16U)))) 
                                               + ((vlSelf->__PVT__sha_core__DOT__A 
                                                   & vlSelf->__PVT__sha_core__DOT__B) 
                                                  ^ 
                                                  ((vlSelf->__PVT__sha_core__DOT__B 
                                                    & vlSelf->__PVT__sha_core__DOT__C) 
                                                   ^ 
                                                   (vlSelf->__PVT__sha_core__DOT__A 
                                                    & vlSelf->__PVT__sha_core__DOT__C)))));
    vlSelf->__PVT__sha_core__DOT__busy = __Vdly__sha_core__DOT__busy;
}

VL_INLINE_OPT void Vtop_tb_doublesha___nba_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE__0(Vtop_tb_doublesha* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_doublesha___nba_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vdly__sha_core__DOT__round;
    __Vdly__sha_core__DOT__round = 0;
    CData/*0:0*/ __Vdly__sha_core__DOT__busy;
    __Vdly__sha_core__DOT__busy = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W1;
    __Vdly__sha_core__DOT__W1 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W2;
    __Vdly__sha_core__DOT__W2 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W3;
    __Vdly__sha_core__DOT__W3 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W4;
    __Vdly__sha_core__DOT__W4 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W5;
    __Vdly__sha_core__DOT__W5 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W6;
    __Vdly__sha_core__DOT__W6 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W7;
    __Vdly__sha_core__DOT__W7 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W8;
    __Vdly__sha_core__DOT__W8 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W9;
    __Vdly__sha_core__DOT__W9 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W10;
    __Vdly__sha_core__DOT__W10 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W11;
    __Vdly__sha_core__DOT__W11 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W12;
    __Vdly__sha_core__DOT__W12 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W13;
    __Vdly__sha_core__DOT__W13 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W14;
    __Vdly__sha_core__DOT__W14 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__Wt;
    __Vdly__sha_core__DOT__Wt = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__A;
    __Vdly__sha_core__DOT__A = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__B;
    __Vdly__sha_core__DOT__B = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__C;
    __Vdly__sha_core__DOT__C = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__D;
    __Vdly__sha_core__DOT__D = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__E;
    __Vdly__sha_core__DOT__E = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__F;
    __Vdly__sha_core__DOT__F = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__G;
    __Vdly__sha_core__DOT__G = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H;
    __Vdly__sha_core__DOT__H = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H0;
    __Vdly__sha_core__DOT__H0 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H1;
    __Vdly__sha_core__DOT__H1 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H2;
    __Vdly__sha_core__DOT__H2 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H3;
    __Vdly__sha_core__DOT__H3 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H4;
    __Vdly__sha_core__DOT__H4 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H5;
    __Vdly__sha_core__DOT__H5 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H6;
    __Vdly__sha_core__DOT__H6 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H7;
    __Vdly__sha_core__DOT__H7 = 0;
    CData/*2:0*/ __Vdly__sha_core__DOT__read_counter;
    __Vdly__sha_core__DOT__read_counter = 0;
    VlWide<16>/*511:0*/ __Vtemp_3;
    VlWide<16>/*511:0*/ __Vtemp_7;
    VlWide<8>/*255:0*/ __Vtemp_9;
    // Body
    __Vdly__sha_core__DOT__read_counter = vlSelf->__PVT__sha_core__DOT__read_counter;
    __Vdly__sha_core__DOT__H7 = vlSelf->__PVT__sha_core__DOT__H7;
    __Vdly__sha_core__DOT__H6 = vlSelf->__PVT__sha_core__DOT__H6;
    __Vdly__sha_core__DOT__H5 = vlSelf->__PVT__sha_core__DOT__H5;
    __Vdly__sha_core__DOT__H4 = vlSelf->__PVT__sha_core__DOT__H4;
    __Vdly__sha_core__DOT__H3 = vlSelf->__PVT__sha_core__DOT__H3;
    __Vdly__sha_core__DOT__H2 = vlSelf->__PVT__sha_core__DOT__H2;
    __Vdly__sha_core__DOT__H1 = vlSelf->__PVT__sha_core__DOT__H1;
    __Vdly__sha_core__DOT__H0 = vlSelf->__PVT__sha_core__DOT__H0;
    __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__sha_core__DOT__W13;
    __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__sha_core__DOT__W12;
    __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__sha_core__DOT__W11;
    __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__sha_core__DOT__W10;
    __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__sha_core__DOT__W8;
    __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__sha_core__DOT__W7;
    __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__sha_core__DOT__W6;
    __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__sha_core__DOT__W5;
    __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__sha_core__DOT__W4;
    __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__sha_core__DOT__W3;
    __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__sha_core__DOT__W2;
    __Vdly__sha_core__DOT__busy = vlSelf->__PVT__sha_core__DOT__busy;
    __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round;
    __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__sha_core__DOT__W14;
    __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__sha_core__DOT__W9;
    __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__sha_core__DOT__W1;
    __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__D;
    __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__C;
    __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__B;
    __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__A;
    __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__sha_core__DOT__Wt;
    __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__H;
    __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__G;
    __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__F;
    __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__E;
    if (vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst) {
        vlSelf->__PVT__hash_index = 0U;
        vlSelf->__PVT__delay_left = 0U;
        vlSelf->__PVT__first_hash[0U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__first_hash[1U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__first_hash[2U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__first_hash[3U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__first_hash[4U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__first_hash[5U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__first_hash[6U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__first_hash[7U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__second_cycle = 0U;
        vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->__PVT__tmp_i[8U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->__PVT__tmp_i[9U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->__PVT__tmp_i[0xaU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->__PVT__tmp_i[0xbU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->__PVT__tmp_i[0xcU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->__PVT__tmp_i[0xdU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->__PVT__tmp_i[0xeU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->__PVT__tmp_i[0xfU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->complete = 0U;
        vlSelf->__PVT__state = 0U;
        __Vdly__sha_core__DOT__round = 0U;
        __Vdly__sha_core__DOT__busy = 0U;
        vlSelf->__PVT__sha_core__DOT__W0 = 0U;
        __Vdly__sha_core__DOT__W1 = 0U;
        __Vdly__sha_core__DOT__W2 = 0U;
        __Vdly__sha_core__DOT__W3 = 0U;
        __Vdly__sha_core__DOT__W4 = 0U;
        __Vdly__sha_core__DOT__W5 = 0U;
        __Vdly__sha_core__DOT__W6 = 0U;
        __Vdly__sha_core__DOT__W7 = 0U;
        __Vdly__sha_core__DOT__W8 = 0U;
        __Vdly__sha_core__DOT__W9 = 0U;
        __Vdly__sha_core__DOT__W10 = 0U;
        __Vdly__sha_core__DOT__W11 = 0U;
        __Vdly__sha_core__DOT__W12 = 0U;
        __Vdly__sha_core__DOT__W13 = 0U;
        __Vdly__sha_core__DOT__W14 = 0U;
        __Vdly__sha_core__DOT__Wt = 0U;
        __Vdly__sha_core__DOT__A = 0U;
        __Vdly__sha_core__DOT__B = 0U;
        __Vdly__sha_core__DOT__C = 0U;
        __Vdly__sha_core__DOT__D = 0U;
        __Vdly__sha_core__DOT__E = 0U;
        __Vdly__sha_core__DOT__F = 0U;
        __Vdly__sha_core__DOT__G = 0U;
        __Vdly__sha_core__DOT__H = 0U;
        __Vdly__sha_core__DOT__H0 = 0U;
        __Vdly__sha_core__DOT__H1 = 0U;
        __Vdly__sha_core__DOT__H2 = 0U;
        __Vdly__sha_core__DOT__H3 = 0U;
        __Vdly__sha_core__DOT__H4 = 0U;
        __Vdly__sha_core__DOT__H5 = 0U;
        __Vdly__sha_core__DOT__H6 = 0U;
        __Vdly__sha_core__DOT__H7 = 0U;
        vlSelf->__PVT__text_o = 0U;
        __Vdly__sha_core__DOT__read_counter = 0U;
        vlSelf->__PVT__sha_core__DOT__cmd = 0U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__delay_left))) {
            vlSelf->__PVT__delay_left = (0xfU & ((IData)(vlSelf->__PVT__delay_left) 
                                                 - (IData)(1U)));
        } else if ((1U & (~ (((IData)(vlSelf->__PVT__sha_core__DOT__cmd) 
                              >> 3U) & ((2U == (IData)(vlSelf->__PVT__state)) 
                                        | (4U == (IData)(vlSelf->__PVT__state))))))) {
            if ((0U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_i = 2U;
                vlSelf->__PVT__cmd_w_i = 1U;
                vlSelf->__PVT__tmp_i[0U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[3U];
                vlSelf->__PVT__tmp_i[1U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[4U];
                vlSelf->__PVT__tmp_i[2U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[5U];
                vlSelf->__PVT__tmp_i[3U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[6U];
                vlSelf->__PVT__tmp_i[4U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[7U];
                vlSelf->__PVT__tmp_i[5U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[8U];
                vlSelf->__PVT__tmp_i[6U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[9U];
                vlSelf->__PVT__tmp_i[7U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xaU];
                vlSelf->__PVT__tmp_i[8U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xbU];
                vlSelf->__PVT__tmp_i[9U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xcU];
                vlSelf->__PVT__tmp_i[0xaU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xdU];
                vlSelf->__PVT__tmp_i[0xbU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xeU];
                vlSelf->__PVT__tmp_i[0xcU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xfU];
                vlSelf->__PVT__tmp_i[0xdU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x10U];
                vlSelf->__PVT__tmp_i[0xeU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x11U];
                vlSelf->__PVT__tmp_i[0xfU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x12U];
                vlSelf->__PVT__state = 1U;
            } else if ((1U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__text_i = vlSelf->__PVT__tmp_i[0xfU];
                VL_SHIFTL_WWI(512,512,32, __Vtemp_3, vlSelf->__PVT__tmp_i, 0x20U);
                vlSelf->__PVT__tmp_i[0U] = __Vtemp_3[0U];
                vlSelf->__PVT__tmp_i[1U] = __Vtemp_3[1U];
                vlSelf->__PVT__tmp_i[2U] = __Vtemp_3[2U];
                vlSelf->__PVT__tmp_i[3U] = __Vtemp_3[3U];
                vlSelf->__PVT__tmp_i[4U] = __Vtemp_3[4U];
                vlSelf->__PVT__tmp_i[5U] = __Vtemp_3[5U];
                vlSelf->__PVT__tmp_i[6U] = __Vtemp_3[6U];
                vlSelf->__PVT__tmp_i[7U] = __Vtemp_3[7U];
                vlSelf->__PVT__tmp_i[8U] = __Vtemp_3[8U];
                vlSelf->__PVT__tmp_i[9U] = __Vtemp_3[9U];
                vlSelf->__PVT__tmp_i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->__PVT__tmp_i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->__PVT__tmp_i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->__PVT__tmp_i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->__PVT__tmp_i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->__PVT__tmp_i[0xfU] = __Vtemp_3[0xfU];
                if ((0x10U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 2U;
                }
            } else if ((2U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 1U;
                if (vlSelf->__PVT__second_cycle) {
                    vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[0U];
                    vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[1U];
                    vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[2U];
                    vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[3U];
                    vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[4U];
                    vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[5U];
                    vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[6U];
                    vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[7U];
                    vlSelf->__PVT__tmp_i[8U] = vlSelf->__PVT__first_hash[0U];
                    vlSelf->__PVT__tmp_i[9U] = vlSelf->__PVT__first_hash[1U];
                    vlSelf->__PVT__tmp_i[0xaU] = vlSelf->__PVT__first_hash[2U];
                    vlSelf->__PVT__tmp_i[0xbU] = vlSelf->__PVT__first_hash[3U];
                    vlSelf->__PVT__tmp_i[0xcU] = vlSelf->__PVT__first_hash[4U];
                    vlSelf->__PVT__tmp_i[0xdU] = vlSelf->__PVT__first_hash[5U];
                    vlSelf->__PVT__tmp_i[0xeU] = vlSelf->__PVT__first_hash[6U];
                    vlSelf->__PVT__tmp_i[0xfU] = vlSelf->__PVT__first_hash[7U];
                    vlSelf->__PVT__cmd_i = 2U;
                } else {
                    vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0U];
                    vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[1U];
                    vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[2U];
                    vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[3U];
                    vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[4U];
                    vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[5U];
                    vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[6U];
                    vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[7U];
                    vlSelf->__PVT__tmp_i[8U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[8U];
                    vlSelf->__PVT__tmp_i[9U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[9U];
                    vlSelf->__PVT__tmp_i[0xaU] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0xaU];
                    vlSelf->__PVT__tmp_i[0xbU] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0xbU];
                    vlSelf->__PVT__tmp_i[0xcU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                        [4U];
                    vlSelf->__PVT__tmp_i[0xdU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0U];
                    vlSelf->__PVT__tmp_i[0xeU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[1U];
                    vlSelf->__PVT__tmp_i[0xfU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[2U];
                    vlSelf->__PVT__cmd_i = 6U;
                }
                vlSelf->__PVT__state = 3U;
            } else if ((3U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__text_i = vlSelf->__PVT__tmp_i[0xfU];
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                VL_SHIFTL_WWI(512,512,32, __Vtemp_7, vlSelf->__PVT__tmp_i, 0x20U);
                vlSelf->__PVT__tmp_i[0U] = __Vtemp_7[0U];
                vlSelf->__PVT__tmp_i[1U] = __Vtemp_7[1U];
                vlSelf->__PVT__tmp_i[2U] = __Vtemp_7[2U];
                vlSelf->__PVT__tmp_i[3U] = __Vtemp_7[3U];
                vlSelf->__PVT__tmp_i[4U] = __Vtemp_7[4U];
                vlSelf->__PVT__tmp_i[5U] = __Vtemp_7[5U];
                vlSelf->__PVT__tmp_i[6U] = __Vtemp_7[6U];
                vlSelf->__PVT__tmp_i[7U] = __Vtemp_7[7U];
                vlSelf->__PVT__tmp_i[8U] = __Vtemp_7[8U];
                vlSelf->__PVT__tmp_i[9U] = __Vtemp_7[9U];
                vlSelf->__PVT__tmp_i[0xaU] = __Vtemp_7[0xaU];
                vlSelf->__PVT__tmp_i[0xbU] = __Vtemp_7[0xbU];
                vlSelf->__PVT__tmp_i[0xcU] = __Vtemp_7[0xcU];
                vlSelf->__PVT__tmp_i[0xdU] = __Vtemp_7[0xdU];
                vlSelf->__PVT__tmp_i[0xeU] = __Vtemp_7[0xeU];
                vlSelf->__PVT__tmp_i[0xfU] = __Vtemp_7[0xfU];
                if ((0x10U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 4U;
                }
            } else if ((4U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_i = 1U;
                vlSelf->__PVT__cmd_w_i = 1U;
                vlSelf->__PVT__state = 5U;
            } else if ((5U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__state = 6U;
                vlSelf->__PVT__delay_left = 1U;
            } else if ((6U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__first_hash[0U] = vlSelf->__PVT__text_o;
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                if ((8U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 7U;
                    if (vlSelf->__PVT__second_cycle) {
                        vlSelf->complete = 1U;
                        vlSelf->hash[0U] = vlSelf->__PVT__first_hash[0U];
                        vlSelf->hash[1U] = vlSelf->__PVT__first_hash[1U];
                        vlSelf->hash[2U] = vlSelf->__PVT__first_hash[2U];
                        vlSelf->hash[3U] = vlSelf->__PVT__first_hash[3U];
                        vlSelf->hash[4U] = vlSelf->__PVT__first_hash[4U];
                        vlSelf->hash[5U] = vlSelf->__PVT__first_hash[5U];
                        vlSelf->hash[6U] = vlSelf->__PVT__first_hash[6U];
                        vlSelf->hash[7U] = vlSelf->__PVT__first_hash[7U];
                    } else {
                        vlSelf->__PVT__state = 2U;
                        vlSelf->__PVT__second_cycle = 1U;
                    }
                } else {
                    VL_SHIFTL_WWI(256,256,32, __Vtemp_9, vlSelf->__PVT__first_hash, 0x20U);
                    vlSelf->__PVT__first_hash[0U] = 
                        __Vtemp_9[0U];
                    vlSelf->__PVT__first_hash[1U] = 
                        __Vtemp_9[1U];
                    vlSelf->__PVT__first_hash[2U] = 
                        __Vtemp_9[2U];
                    vlSelf->__PVT__first_hash[3U] = 
                        __Vtemp_9[3U];
                    vlSelf->__PVT__first_hash[4U] = 
                        __Vtemp_9[4U];
                    vlSelf->__PVT__first_hash[5U] = 
                        __Vtemp_9[5U];
                    vlSelf->__PVT__first_hash[6U] = 
                        __Vtemp_9[6U];
                    vlSelf->__PVT__first_hash[7U] = 
                        __Vtemp_9[7U];
                }
            }
        }
        if (((((((((0U == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                   | (1U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                  | (2U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                 | (3U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                | (4U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
               | (5U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
              | (6U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
             | (7U == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            if ((0U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                if ((2U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                    vlSelf->__PVT__sha_core__DOT__W0 
                        = vlSelf->__PVT__text_i;
                    __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                    __Vdly__sha_core__DOT__busy = 1U;
                    __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                    if ((4U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                        if ((4U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                            __Vdly__sha_core__DOT__H0 
                                = vlSelf->__PVT__sha_core__DOT__A;
                            __Vdly__sha_core__DOT__H1 
                                = vlSelf->__PVT__sha_core__DOT__B;
                            __Vdly__sha_core__DOT__H2 
                                = vlSelf->__PVT__sha_core__DOT__C;
                            __Vdly__sha_core__DOT__H3 
                                = vlSelf->__PVT__sha_core__DOT__D;
                            __Vdly__sha_core__DOT__H4 
                                = vlSelf->__PVT__sha_core__DOT__E;
                            __Vdly__sha_core__DOT__H5 
                                = vlSelf->__PVT__sha_core__DOT__F;
                            __Vdly__sha_core__DOT__H6 
                                = vlSelf->__PVT__sha_core__DOT__G;
                            __Vdly__sha_core__DOT__H7 
                                = vlSelf->__PVT__sha_core__DOT__H;
                        }
                    } else {
                        __Vdly__sha_core__DOT__A = 0x6a09e667U;
                        __Vdly__sha_core__DOT__B = 0xbb67ae85U;
                        __Vdly__sha_core__DOT__C = 0x3c6ef372U;
                        __Vdly__sha_core__DOT__D = 0xa54ff53aU;
                        __Vdly__sha_core__DOT__E = 0x510e527fU;
                        __Vdly__sha_core__DOT__F = 0x9b05688cU;
                        __Vdly__sha_core__DOT__G = 0x1f83d9abU;
                        __Vdly__sha_core__DOT__H = 0x5be0cd19U;
                        __Vdly__sha_core__DOT__H0 = 0x6a09e667U;
                        __Vdly__sha_core__DOT__H1 = 0xbb67ae85U;
                        __Vdly__sha_core__DOT__H2 = 0x3c6ef372U;
                        __Vdly__sha_core__DOT__H3 = 0xa54ff53aU;
                        __Vdly__sha_core__DOT__H4 = 0x510e527fU;
                        __Vdly__sha_core__DOT__H5 = 0x9b05688cU;
                        __Vdly__sha_core__DOT__H6 = 0x1f83d9abU;
                        __Vdly__sha_core__DOT__H7 = 0x5be0cd19U;
                    }
                } else {
                    __Vdly__sha_core__DOT__round = 0U;
                }
            } else if ((1U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((2U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((3U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((4U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((5U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((6U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else {
                __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            }
        } else if (((((((((8U == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                          | (9U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                         | (0xaU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                        | (0xbU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                       | (0xcU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                      | (0xdU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                     | (0xeU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                    | (0xfU == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            if ((8U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((9U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xaU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xbU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xcU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xdU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xeU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else {
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            }
        } else if (((((((((((((((((((((((((((((((((
                                                   ((((((((((((((((0x10U 
                                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                                                                  || (0x11U 
                                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                                 || (0x12U 
                                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                                || (0x13U 
                                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                               || (0x14U 
                                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                              || (0x15U 
                                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                             || (0x16U 
                                                                 == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                            || (0x17U 
                                                                == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                           || (0x18U 
                                                               == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                          || (0x19U 
                                                              == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                         || (0x1aU 
                                                             == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                        || (0x1bU 
                                                            == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                       || (0x1cU 
                                                           == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                      || (0x1dU 
                                                          == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                     || (0x1eU 
                                                         == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                    || (0x1fU 
                                                        == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                   || (0x20U 
                                                       == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                  || (0x21U 
                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                 || (0x22U 
                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                || (0x23U 
                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                               || (0x24U 
                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                              || (0x25U 
                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                             || (0x26U 
                                                 == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                            || (0x27U 
                                                == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                           || (0x28U 
                                               == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                          || (0x29U 
                                              == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                         || (0x2aU 
                                             == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                        || (0x2bU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                       || (0x2cU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                      || (0x2dU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                     || (0x2eU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                    || (0x2fU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                   || (0x30U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                  || (0x31U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                 || (0x32U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                || (0x33U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                               || (0x34U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                              || (0x35U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                             || (0x36U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                            || (0x37U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                           || (0x38U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                          || (0x39U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                         || (0x3aU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                        || (0x3bU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                       || (0x3cU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                      || (0x3dU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                     || (0x3eU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                    || (0x3fU == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            vlSelf->__PVT__sha_core__DOT__W0 = vlSelf->__PVT__sha_core__DOT__W1;
            __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
            __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
            __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
            __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__sha_core__DOT__W2;
            __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
            __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
            __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__sha_core__DOT__W3;
            __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
            __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
            __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__sha_core__DOT__W4;
            __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
            __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__sha_core__DOT__W5;
            __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__sha_core__DOT__W6;
            __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__sha_core__DOT__W7;
            __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__sha_core__DOT__W8;
            __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__sha_core__DOT__W9;
            __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__sha_core__DOT__W10;
            __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__sha_core__DOT__W11;
            __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__sha_core__DOT__W12;
            __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__sha_core__DOT__W13;
            __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__sha_core__DOT__W14;
            __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__sha_core__DOT__Wt;
            __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__sha_core__DOT__next_Wt;
        } else if ((0x40U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
            __Vdly__sha_core__DOT__D = (vlSelf->__PVT__sha_core__DOT__C 
                                        + vlSelf->__PVT__sha_core__DOT__H3);
            __Vdly__sha_core__DOT__H = (vlSelf->__PVT__sha_core__DOT__G 
                                        + vlSelf->__PVT__sha_core__DOT__H7);
            __Vdly__sha_core__DOT__round = 0U;
            __Vdly__sha_core__DOT__busy = 0U;
            __Vdly__sha_core__DOT__C = (vlSelf->__PVT__sha_core__DOT__B 
                                        + vlSelf->__PVT__sha_core__DOT__H2);
            __Vdly__sha_core__DOT__G = (vlSelf->__PVT__sha_core__DOT__F 
                                        + vlSelf->__PVT__sha_core__DOT__H6);
            __Vdly__sha_core__DOT__B = (vlSelf->__PVT__sha_core__DOT__A 
                                        + vlSelf->__PVT__sha_core__DOT__H1);
            __Vdly__sha_core__DOT__F = (vlSelf->__PVT__sha_core__DOT__E 
                                        + vlSelf->__PVT__sha_core__DOT__H5);
            __Vdly__sha_core__DOT__A = (vlSelf->__PVT__sha_core__DOT__next_A 
                                        + vlSelf->__PVT__sha_core__DOT__H0);
            __Vdly__sha_core__DOT__E = (vlSelf->__PVT__sha_core__DOT__next_E 
                                        + vlSelf->__PVT__sha_core__DOT__H4);
        } else {
            __Vdly__sha_core__DOT__round = 0U;
            __Vdly__sha_core__DOT__busy = 0U;
        }
        if ((1U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
            __Vdly__sha_core__DOT__read_counter = 7U;
        } else if (vlSelf->__PVT__sha_core__DOT__busy) {
            vlSelf->__PVT__text_o = 0U;
        } else {
            vlSelf->__PVT__text_o = (((((((((7U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter)) 
                                            | (6U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                           | (5U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                          | (4U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                         | (3U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                        | (2U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                       | (1U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                      | (0U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter)))
                                      ? ((7U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                          ? vlSelf->__PVT__sha_core__DOT__SHA256_result[7U]
                                          : ((6U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                              ? vlSelf->__PVT__sha_core__DOT__SHA256_result[6U]
                                              : ((5U 
                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                  ? 
                                                 vlSelf->__PVT__sha_core__DOT__SHA256_result[5U]
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                   ? 
                                                  vlSelf->__PVT__sha_core__DOT__SHA256_result[4U]
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                    ? 
                                                   vlSelf->__PVT__sha_core__DOT__SHA256_result[3U]
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                     ? 
                                                    vlSelf->__PVT__sha_core__DOT__SHA256_result[2U]
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                      ? 
                                                     vlSelf->__PVT__sha_core__DOT__SHA256_result[1U]
                                                      : 
                                                     vlSelf->__PVT__sha_core__DOT__SHA256_result[0U])))))))
                                      : 0U);
            if ((0U != (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) {
                __Vdly__sha_core__DOT__read_counter 
                    = (7U & ((IData)(vlSelf->__PVT__sha_core__DOT__read_counter) 
                             - (IData)(1U)));
            }
        }
        if (vlSelf->__PVT__cmd_w_i) {
            vlSelf->__PVT__sha_core__DOT__cmd = ((8U 
                                                  & (IData)(vlSelf->__PVT__sha_core__DOT__cmd)) 
                                                 | (IData)(vlSelf->__PVT__cmd_i));
        } else {
            vlSelf->__PVT__sha_core__DOT__cmd = ((7U 
                                                  & (IData)(vlSelf->__PVT__sha_core__DOT__cmd)) 
                                                 | ((IData)(vlSelf->__PVT__sha_core__DOT__busy) 
                                                    << 3U));
            if ((1U & (~ (IData)(vlSelf->__PVT__sha_core__DOT__busy)))) {
                vlSelf->__PVT__sha_core__DOT__cmd = 
                    (0xcU & (IData)(vlSelf->__PVT__sha_core__DOT__cmd));
            }
        }
    }
    __Vtableidx5 = (((IData)(vlSelf->__PVT__sha_core__DOT__round) 
                     << 1U) | (IData)(vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst));
    vlSelf->__PVT__sha_core__DOT__Kt = Vtop_tb__ConstPool__TABLE_hef79451c_0
        [__Vtableidx5];
    vlSelf->__PVT__sha_core__DOT__W2 = __Vdly__sha_core__DOT__W2;
    vlSelf->__PVT__sha_core__DOT__W3 = __Vdly__sha_core__DOT__W3;
    vlSelf->__PVT__sha_core__DOT__W4 = __Vdly__sha_core__DOT__W4;
    vlSelf->__PVT__sha_core__DOT__W5 = __Vdly__sha_core__DOT__W5;
    vlSelf->__PVT__sha_core__DOT__W6 = __Vdly__sha_core__DOT__W6;
    vlSelf->__PVT__sha_core__DOT__W7 = __Vdly__sha_core__DOT__W7;
    vlSelf->__PVT__sha_core__DOT__W8 = __Vdly__sha_core__DOT__W8;
    vlSelf->__PVT__sha_core__DOT__W10 = __Vdly__sha_core__DOT__W10;
    vlSelf->__PVT__sha_core__DOT__W11 = __Vdly__sha_core__DOT__W11;
    vlSelf->__PVT__sha_core__DOT__W12 = __Vdly__sha_core__DOT__W12;
    vlSelf->__PVT__sha_core__DOT__W13 = __Vdly__sha_core__DOT__W13;
    vlSelf->__PVT__sha_core__DOT__H0 = __Vdly__sha_core__DOT__H0;
    vlSelf->__PVT__sha_core__DOT__H1 = __Vdly__sha_core__DOT__H1;
    vlSelf->__PVT__sha_core__DOT__H2 = __Vdly__sha_core__DOT__H2;
    vlSelf->__PVT__sha_core__DOT__H3 = __Vdly__sha_core__DOT__H3;
    vlSelf->__PVT__sha_core__DOT__H4 = __Vdly__sha_core__DOT__H4;
    vlSelf->__PVT__sha_core__DOT__H5 = __Vdly__sha_core__DOT__H5;
    vlSelf->__PVT__sha_core__DOT__H6 = __Vdly__sha_core__DOT__H6;
    vlSelf->__PVT__sha_core__DOT__H7 = __Vdly__sha_core__DOT__H7;
    vlSelf->__PVT__sha_core__DOT__round = __Vdly__sha_core__DOT__round;
    vlSelf->__PVT__sha_core__DOT__W1 = __Vdly__sha_core__DOT__W1;
    vlSelf->__PVT__sha_core__DOT__W9 = __Vdly__sha_core__DOT__W9;
    vlSelf->__PVT__sha_core__DOT__W14 = __Vdly__sha_core__DOT__W14;
    vlSelf->__PVT__sha_core__DOT__D = __Vdly__sha_core__DOT__D;
    vlSelf->__PVT__sha_core__DOT__A = __Vdly__sha_core__DOT__A;
    vlSelf->__PVT__sha_core__DOT__B = __Vdly__sha_core__DOT__B;
    vlSelf->__PVT__sha_core__DOT__C = __Vdly__sha_core__DOT__C;
    vlSelf->__PVT__sha_core__DOT__Wt = __Vdly__sha_core__DOT__Wt;
    vlSelf->__PVT__sha_core__DOT__E = __Vdly__sha_core__DOT__E;
    vlSelf->__PVT__sha_core__DOT__F = __Vdly__sha_core__DOT__F;
    vlSelf->__PVT__sha_core__DOT__G = __Vdly__sha_core__DOT__G;
    vlSelf->__PVT__sha_core__DOT__H = __Vdly__sha_core__DOT__H;
    vlSelf->__PVT__sha_core__DOT__read_counter = __Vdly__sha_core__DOT__read_counter;
    vlSelf->__PVT__sha_core__DOT__round_plus_1 = (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__sha_core__DOT__round)));
    vlSelf->__PVT__sha_core__DOT__next_Wt = ((((vlSelf->__PVT__sha_core__DOT__W14 
                                                << 0xfU) 
                                               | (vlSelf->__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                              ^ (((vlSelf->__PVT__sha_core__DOT__W14 
                                                   << 0xdU) 
                                                  | (vlSelf->__PVT__sha_core__DOT__W14 
                                                     >> 0x13U)) 
                                                 ^ 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->__PVT__sha_core__DOT__W14, 0xaU))) 
                                             + (vlSelf->__PVT__sha_core__DOT__W9 
                                                + (
                                                   (((vlSelf->__PVT__sha_core__DOT__W1 
                                                      << 0x19U) 
                                                     | (vlSelf->__PVT__sha_core__DOT__W1 
                                                        >> 7U)) 
                                                    ^ 
                                                    (((vlSelf->__PVT__sha_core__DOT__W1 
                                                       << 0xeU) 
                                                      | (vlSelf->__PVT__sha_core__DOT__W1 
                                                         >> 0x12U)) 
                                                     ^ 
                                                     VL_SHIFTR_III(32,32,32, vlSelf->__PVT__sha_core__DOT__W1, 3U))) 
                                                   + vlSelf->__PVT__sha_core__DOT__W0)));
    vlSelf->__PVT__sha_core__DOT__SHA256_result[0U] 
        = vlSelf->__PVT__sha_core__DOT__H;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[1U] 
        = vlSelf->__PVT__sha_core__DOT__G;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[2U] 
        = vlSelf->__PVT__sha_core__DOT__F;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[3U] 
        = vlSelf->__PVT__sha_core__DOT__E;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[4U] 
        = vlSelf->__PVT__sha_core__DOT__D;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[5U] 
        = vlSelf->__PVT__sha_core__DOT__C;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[6U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__sha_core__DOT__A)) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__sha_core__DOT__B))));
    vlSelf->__PVT__sha_core__DOT__SHA256_result[7U] 
        = (IData)(((((QData)((IData)(vlSelf->__PVT__sha_core__DOT__A)) 
                     << 0x20U) | (QData)((IData)(vlSelf->__PVT__sha_core__DOT__B))) 
                   >> 0x20U));
    vlSelf->__PVT__sha_core__DOT__T1_32 = (vlSelf->__PVT__sha_core__DOT__H 
                                           + ((((vlSelf->__PVT__sha_core__DOT__E 
                                                 << 0x1aU) 
                                                | (vlSelf->__PVT__sha_core__DOT__E 
                                                   >> 6U)) 
                                               ^ ((
                                                   (vlSelf->__PVT__sha_core__DOT__E 
                                                    << 0x15U) 
                                                   | (vlSelf->__PVT__sha_core__DOT__E 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  ((vlSelf->__PVT__sha_core__DOT__E 
                                                    << 7U) 
                                                   | (vlSelf->__PVT__sha_core__DOT__E 
                                                      >> 0x19U)))) 
                                              + (((vlSelf->__PVT__sha_core__DOT__E 
                                                   & vlSelf->__PVT__sha_core__DOT__F) 
                                                  ^ 
                                                  ((~ vlSelf->__PVT__sha_core__DOT__E) 
                                                   & vlSelf->__PVT__sha_core__DOT__G)) 
                                                 + 
                                                 (vlSelf->__PVT__sha_core__DOT__Kt 
                                                  + vlSelf->__PVT__sha_core__DOT__Wt))));
    vlSelf->__PVT__sha_core__DOT__next_E = (vlSelf->__PVT__sha_core__DOT__D 
                                            + vlSelf->__PVT__sha_core__DOT__T1_32);
    vlSelf->__PVT__sha_core__DOT__next_A = (vlSelf->__PVT__sha_core__DOT__T1_32 
                                            + ((((vlSelf->__PVT__sha_core__DOT__A 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__sha_core__DOT__A 
                                                    >> 2U)) 
                                                ^ (
                                                   ((vlSelf->__PVT__sha_core__DOT__A 
                                                     << 0x13U) 
                                                    | (vlSelf->__PVT__sha_core__DOT__A 
                                                       >> 0xdU)) 
                                                   ^ 
                                                   ((vlSelf->__PVT__sha_core__DOT__A 
                                                     << 0xaU) 
                                                    | (vlSelf->__PVT__sha_core__DOT__A 
                                                       >> 0x16U)))) 
                                               + ((vlSelf->__PVT__sha_core__DOT__A 
                                                   & vlSelf->__PVT__sha_core__DOT__B) 
                                                  ^ 
                                                  ((vlSelf->__PVT__sha_core__DOT__B 
                                                    & vlSelf->__PVT__sha_core__DOT__C) 
                                                   ^ 
                                                   (vlSelf->__PVT__sha_core__DOT__A 
                                                    & vlSelf->__PVT__sha_core__DOT__C)))));
    vlSelf->__PVT__sha_core__DOT__busy = __Vdly__sha_core__DOT__busy;
}

VL_INLINE_OPT void Vtop_tb_doublesha___nba_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE__0(Vtop_tb_doublesha* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_doublesha___nba_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*6:0*/ __Vdly__sha_core__DOT__round;
    __Vdly__sha_core__DOT__round = 0;
    CData/*0:0*/ __Vdly__sha_core__DOT__busy;
    __Vdly__sha_core__DOT__busy = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W1;
    __Vdly__sha_core__DOT__W1 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W2;
    __Vdly__sha_core__DOT__W2 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W3;
    __Vdly__sha_core__DOT__W3 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W4;
    __Vdly__sha_core__DOT__W4 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W5;
    __Vdly__sha_core__DOT__W5 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W6;
    __Vdly__sha_core__DOT__W6 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W7;
    __Vdly__sha_core__DOT__W7 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W8;
    __Vdly__sha_core__DOT__W8 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W9;
    __Vdly__sha_core__DOT__W9 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W10;
    __Vdly__sha_core__DOT__W10 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W11;
    __Vdly__sha_core__DOT__W11 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W12;
    __Vdly__sha_core__DOT__W12 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W13;
    __Vdly__sha_core__DOT__W13 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W14;
    __Vdly__sha_core__DOT__W14 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__Wt;
    __Vdly__sha_core__DOT__Wt = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__A;
    __Vdly__sha_core__DOT__A = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__B;
    __Vdly__sha_core__DOT__B = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__C;
    __Vdly__sha_core__DOT__C = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__D;
    __Vdly__sha_core__DOT__D = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__E;
    __Vdly__sha_core__DOT__E = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__F;
    __Vdly__sha_core__DOT__F = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__G;
    __Vdly__sha_core__DOT__G = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H;
    __Vdly__sha_core__DOT__H = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H0;
    __Vdly__sha_core__DOT__H0 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H1;
    __Vdly__sha_core__DOT__H1 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H2;
    __Vdly__sha_core__DOT__H2 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H3;
    __Vdly__sha_core__DOT__H3 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H4;
    __Vdly__sha_core__DOT__H4 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H5;
    __Vdly__sha_core__DOT__H5 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H6;
    __Vdly__sha_core__DOT__H6 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H7;
    __Vdly__sha_core__DOT__H7 = 0;
    CData/*2:0*/ __Vdly__sha_core__DOT__read_counter;
    __Vdly__sha_core__DOT__read_counter = 0;
    VlWide<16>/*511:0*/ __Vtemp_3;
    VlWide<16>/*511:0*/ __Vtemp_7;
    VlWide<8>/*255:0*/ __Vtemp_9;
    // Body
    __Vdly__sha_core__DOT__read_counter = vlSelf->__PVT__sha_core__DOT__read_counter;
    __Vdly__sha_core__DOT__H7 = vlSelf->__PVT__sha_core__DOT__H7;
    __Vdly__sha_core__DOT__H6 = vlSelf->__PVT__sha_core__DOT__H6;
    __Vdly__sha_core__DOT__H5 = vlSelf->__PVT__sha_core__DOT__H5;
    __Vdly__sha_core__DOT__H4 = vlSelf->__PVT__sha_core__DOT__H4;
    __Vdly__sha_core__DOT__H3 = vlSelf->__PVT__sha_core__DOT__H3;
    __Vdly__sha_core__DOT__H2 = vlSelf->__PVT__sha_core__DOT__H2;
    __Vdly__sha_core__DOT__H1 = vlSelf->__PVT__sha_core__DOT__H1;
    __Vdly__sha_core__DOT__H0 = vlSelf->__PVT__sha_core__DOT__H0;
    __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__sha_core__DOT__W13;
    __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__sha_core__DOT__W12;
    __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__sha_core__DOT__W11;
    __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__sha_core__DOT__W10;
    __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__sha_core__DOT__W8;
    __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__sha_core__DOT__W7;
    __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__sha_core__DOT__W6;
    __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__sha_core__DOT__W5;
    __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__sha_core__DOT__W4;
    __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__sha_core__DOT__W3;
    __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__sha_core__DOT__W2;
    __Vdly__sha_core__DOT__busy = vlSelf->__PVT__sha_core__DOT__busy;
    __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round;
    __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__sha_core__DOT__W14;
    __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__sha_core__DOT__W9;
    __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__sha_core__DOT__W1;
    __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__D;
    __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__C;
    __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__B;
    __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__A;
    __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__sha_core__DOT__Wt;
    __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__H;
    __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__G;
    __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__F;
    __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__E;
    if (vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst) {
        vlSelf->__PVT__hash_index = 0U;
        vlSelf->__PVT__delay_left = 0U;
        vlSelf->__PVT__first_hash[0U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__first_hash[1U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__first_hash[2U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__first_hash[3U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__first_hash[4U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__first_hash[5U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__first_hash[6U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__first_hash[7U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__second_cycle = 0U;
        vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->__PVT__tmp_i[8U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->__PVT__tmp_i[9U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->__PVT__tmp_i[0xaU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->__PVT__tmp_i[0xbU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->__PVT__tmp_i[0xcU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->__PVT__tmp_i[0xdU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->__PVT__tmp_i[0xeU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->__PVT__tmp_i[0xfU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->complete = 0U;
        vlSelf->__PVT__state = 0U;
        __Vdly__sha_core__DOT__round = 0U;
        __Vdly__sha_core__DOT__busy = 0U;
        vlSelf->__PVT__sha_core__DOT__W0 = 0U;
        __Vdly__sha_core__DOT__W1 = 0U;
        __Vdly__sha_core__DOT__W2 = 0U;
        __Vdly__sha_core__DOT__W3 = 0U;
        __Vdly__sha_core__DOT__W4 = 0U;
        __Vdly__sha_core__DOT__W5 = 0U;
        __Vdly__sha_core__DOT__W6 = 0U;
        __Vdly__sha_core__DOT__W7 = 0U;
        __Vdly__sha_core__DOT__W8 = 0U;
        __Vdly__sha_core__DOT__W9 = 0U;
        __Vdly__sha_core__DOT__W10 = 0U;
        __Vdly__sha_core__DOT__W11 = 0U;
        __Vdly__sha_core__DOT__W12 = 0U;
        __Vdly__sha_core__DOT__W13 = 0U;
        __Vdly__sha_core__DOT__W14 = 0U;
        __Vdly__sha_core__DOT__Wt = 0U;
        __Vdly__sha_core__DOT__A = 0U;
        __Vdly__sha_core__DOT__B = 0U;
        __Vdly__sha_core__DOT__C = 0U;
        __Vdly__sha_core__DOT__D = 0U;
        __Vdly__sha_core__DOT__E = 0U;
        __Vdly__sha_core__DOT__F = 0U;
        __Vdly__sha_core__DOT__G = 0U;
        __Vdly__sha_core__DOT__H = 0U;
        __Vdly__sha_core__DOT__H0 = 0U;
        __Vdly__sha_core__DOT__H1 = 0U;
        __Vdly__sha_core__DOT__H2 = 0U;
        __Vdly__sha_core__DOT__H3 = 0U;
        __Vdly__sha_core__DOT__H4 = 0U;
        __Vdly__sha_core__DOT__H5 = 0U;
        __Vdly__sha_core__DOT__H6 = 0U;
        __Vdly__sha_core__DOT__H7 = 0U;
        vlSelf->__PVT__text_o = 0U;
        __Vdly__sha_core__DOT__read_counter = 0U;
        vlSelf->__PVT__sha_core__DOT__cmd = 0U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__delay_left))) {
            vlSelf->__PVT__delay_left = (0xfU & ((IData)(vlSelf->__PVT__delay_left) 
                                                 - (IData)(1U)));
        } else if ((1U & (~ (((IData)(vlSelf->__PVT__sha_core__DOT__cmd) 
                              >> 3U) & ((2U == (IData)(vlSelf->__PVT__state)) 
                                        | (4U == (IData)(vlSelf->__PVT__state))))))) {
            if ((0U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_i = 2U;
                vlSelf->__PVT__cmd_w_i = 1U;
                vlSelf->__PVT__tmp_i[0U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[3U];
                vlSelf->__PVT__tmp_i[1U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[4U];
                vlSelf->__PVT__tmp_i[2U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[5U];
                vlSelf->__PVT__tmp_i[3U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[6U];
                vlSelf->__PVT__tmp_i[4U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[7U];
                vlSelf->__PVT__tmp_i[5U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[8U];
                vlSelf->__PVT__tmp_i[6U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[9U];
                vlSelf->__PVT__tmp_i[7U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xaU];
                vlSelf->__PVT__tmp_i[8U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xbU];
                vlSelf->__PVT__tmp_i[9U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xcU];
                vlSelf->__PVT__tmp_i[0xaU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xdU];
                vlSelf->__PVT__tmp_i[0xbU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xeU];
                vlSelf->__PVT__tmp_i[0xcU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xfU];
                vlSelf->__PVT__tmp_i[0xdU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x10U];
                vlSelf->__PVT__tmp_i[0xeU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x11U];
                vlSelf->__PVT__tmp_i[0xfU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x12U];
                vlSelf->__PVT__state = 1U;
            } else if ((1U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__text_i = vlSelf->__PVT__tmp_i[0xfU];
                VL_SHIFTL_WWI(512,512,32, __Vtemp_3, vlSelf->__PVT__tmp_i, 0x20U);
                vlSelf->__PVT__tmp_i[0U] = __Vtemp_3[0U];
                vlSelf->__PVT__tmp_i[1U] = __Vtemp_3[1U];
                vlSelf->__PVT__tmp_i[2U] = __Vtemp_3[2U];
                vlSelf->__PVT__tmp_i[3U] = __Vtemp_3[3U];
                vlSelf->__PVT__tmp_i[4U] = __Vtemp_3[4U];
                vlSelf->__PVT__tmp_i[5U] = __Vtemp_3[5U];
                vlSelf->__PVT__tmp_i[6U] = __Vtemp_3[6U];
                vlSelf->__PVT__tmp_i[7U] = __Vtemp_3[7U];
                vlSelf->__PVT__tmp_i[8U] = __Vtemp_3[8U];
                vlSelf->__PVT__tmp_i[9U] = __Vtemp_3[9U];
                vlSelf->__PVT__tmp_i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->__PVT__tmp_i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->__PVT__tmp_i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->__PVT__tmp_i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->__PVT__tmp_i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->__PVT__tmp_i[0xfU] = __Vtemp_3[0xfU];
                if ((0x10U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 2U;
                }
            } else if ((2U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 1U;
                if (vlSelf->__PVT__second_cycle) {
                    vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[0U];
                    vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[1U];
                    vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[2U];
                    vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[3U];
                    vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[4U];
                    vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[5U];
                    vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[6U];
                    vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[7U];
                    vlSelf->__PVT__tmp_i[8U] = vlSelf->__PVT__first_hash[0U];
                    vlSelf->__PVT__tmp_i[9U] = vlSelf->__PVT__first_hash[1U];
                    vlSelf->__PVT__tmp_i[0xaU] = vlSelf->__PVT__first_hash[2U];
                    vlSelf->__PVT__tmp_i[0xbU] = vlSelf->__PVT__first_hash[3U];
                    vlSelf->__PVT__tmp_i[0xcU] = vlSelf->__PVT__first_hash[4U];
                    vlSelf->__PVT__tmp_i[0xdU] = vlSelf->__PVT__first_hash[5U];
                    vlSelf->__PVT__tmp_i[0xeU] = vlSelf->__PVT__first_hash[6U];
                    vlSelf->__PVT__tmp_i[0xfU] = vlSelf->__PVT__first_hash[7U];
                    vlSelf->__PVT__cmd_i = 2U;
                } else {
                    vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0U];
                    vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[1U];
                    vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[2U];
                    vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[3U];
                    vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[4U];
                    vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[5U];
                    vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[6U];
                    vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[7U];
                    vlSelf->__PVT__tmp_i[8U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[8U];
                    vlSelf->__PVT__tmp_i[9U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[9U];
                    vlSelf->__PVT__tmp_i[0xaU] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0xaU];
                    vlSelf->__PVT__tmp_i[0xbU] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0xbU];
                    vlSelf->__PVT__tmp_i[0xcU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                        [5U];
                    vlSelf->__PVT__tmp_i[0xdU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0U];
                    vlSelf->__PVT__tmp_i[0xeU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[1U];
                    vlSelf->__PVT__tmp_i[0xfU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[2U];
                    vlSelf->__PVT__cmd_i = 6U;
                }
                vlSelf->__PVT__state = 3U;
            } else if ((3U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__text_i = vlSelf->__PVT__tmp_i[0xfU];
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                VL_SHIFTL_WWI(512,512,32, __Vtemp_7, vlSelf->__PVT__tmp_i, 0x20U);
                vlSelf->__PVT__tmp_i[0U] = __Vtemp_7[0U];
                vlSelf->__PVT__tmp_i[1U] = __Vtemp_7[1U];
                vlSelf->__PVT__tmp_i[2U] = __Vtemp_7[2U];
                vlSelf->__PVT__tmp_i[3U] = __Vtemp_7[3U];
                vlSelf->__PVT__tmp_i[4U] = __Vtemp_7[4U];
                vlSelf->__PVT__tmp_i[5U] = __Vtemp_7[5U];
                vlSelf->__PVT__tmp_i[6U] = __Vtemp_7[6U];
                vlSelf->__PVT__tmp_i[7U] = __Vtemp_7[7U];
                vlSelf->__PVT__tmp_i[8U] = __Vtemp_7[8U];
                vlSelf->__PVT__tmp_i[9U] = __Vtemp_7[9U];
                vlSelf->__PVT__tmp_i[0xaU] = __Vtemp_7[0xaU];
                vlSelf->__PVT__tmp_i[0xbU] = __Vtemp_7[0xbU];
                vlSelf->__PVT__tmp_i[0xcU] = __Vtemp_7[0xcU];
                vlSelf->__PVT__tmp_i[0xdU] = __Vtemp_7[0xdU];
                vlSelf->__PVT__tmp_i[0xeU] = __Vtemp_7[0xeU];
                vlSelf->__PVT__tmp_i[0xfU] = __Vtemp_7[0xfU];
                if ((0x10U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 4U;
                }
            } else if ((4U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_i = 1U;
                vlSelf->__PVT__cmd_w_i = 1U;
                vlSelf->__PVT__state = 5U;
            } else if ((5U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__state = 6U;
                vlSelf->__PVT__delay_left = 1U;
            } else if ((6U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__first_hash[0U] = vlSelf->__PVT__text_o;
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                if ((8U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 7U;
                    if (vlSelf->__PVT__second_cycle) {
                        vlSelf->complete = 1U;
                        vlSelf->hash[0U] = vlSelf->__PVT__first_hash[0U];
                        vlSelf->hash[1U] = vlSelf->__PVT__first_hash[1U];
                        vlSelf->hash[2U] = vlSelf->__PVT__first_hash[2U];
                        vlSelf->hash[3U] = vlSelf->__PVT__first_hash[3U];
                        vlSelf->hash[4U] = vlSelf->__PVT__first_hash[4U];
                        vlSelf->hash[5U] = vlSelf->__PVT__first_hash[5U];
                        vlSelf->hash[6U] = vlSelf->__PVT__first_hash[6U];
                        vlSelf->hash[7U] = vlSelf->__PVT__first_hash[7U];
                    } else {
                        vlSelf->__PVT__state = 2U;
                        vlSelf->__PVT__second_cycle = 1U;
                    }
                } else {
                    VL_SHIFTL_WWI(256,256,32, __Vtemp_9, vlSelf->__PVT__first_hash, 0x20U);
                    vlSelf->__PVT__first_hash[0U] = 
                        __Vtemp_9[0U];
                    vlSelf->__PVT__first_hash[1U] = 
                        __Vtemp_9[1U];
                    vlSelf->__PVT__first_hash[2U] = 
                        __Vtemp_9[2U];
                    vlSelf->__PVT__first_hash[3U] = 
                        __Vtemp_9[3U];
                    vlSelf->__PVT__first_hash[4U] = 
                        __Vtemp_9[4U];
                    vlSelf->__PVT__first_hash[5U] = 
                        __Vtemp_9[5U];
                    vlSelf->__PVT__first_hash[6U] = 
                        __Vtemp_9[6U];
                    vlSelf->__PVT__first_hash[7U] = 
                        __Vtemp_9[7U];
                }
            }
        }
        if (((((((((0U == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                   | (1U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                  | (2U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                 | (3U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                | (4U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
               | (5U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
              | (6U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
             | (7U == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            if ((0U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                if ((2U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                    vlSelf->__PVT__sha_core__DOT__W0 
                        = vlSelf->__PVT__text_i;
                    __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                    __Vdly__sha_core__DOT__busy = 1U;
                    __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                    if ((4U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                        if ((4U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                            __Vdly__sha_core__DOT__H0 
                                = vlSelf->__PVT__sha_core__DOT__A;
                            __Vdly__sha_core__DOT__H1 
                                = vlSelf->__PVT__sha_core__DOT__B;
                            __Vdly__sha_core__DOT__H2 
                                = vlSelf->__PVT__sha_core__DOT__C;
                            __Vdly__sha_core__DOT__H3 
                                = vlSelf->__PVT__sha_core__DOT__D;
                            __Vdly__sha_core__DOT__H4 
                                = vlSelf->__PVT__sha_core__DOT__E;
                            __Vdly__sha_core__DOT__H5 
                                = vlSelf->__PVT__sha_core__DOT__F;
                            __Vdly__sha_core__DOT__H6 
                                = vlSelf->__PVT__sha_core__DOT__G;
                            __Vdly__sha_core__DOT__H7 
                                = vlSelf->__PVT__sha_core__DOT__H;
                        }
                    } else {
                        __Vdly__sha_core__DOT__A = 0x6a09e667U;
                        __Vdly__sha_core__DOT__B = 0xbb67ae85U;
                        __Vdly__sha_core__DOT__C = 0x3c6ef372U;
                        __Vdly__sha_core__DOT__D = 0xa54ff53aU;
                        __Vdly__sha_core__DOT__E = 0x510e527fU;
                        __Vdly__sha_core__DOT__F = 0x9b05688cU;
                        __Vdly__sha_core__DOT__G = 0x1f83d9abU;
                        __Vdly__sha_core__DOT__H = 0x5be0cd19U;
                        __Vdly__sha_core__DOT__H0 = 0x6a09e667U;
                        __Vdly__sha_core__DOT__H1 = 0xbb67ae85U;
                        __Vdly__sha_core__DOT__H2 = 0x3c6ef372U;
                        __Vdly__sha_core__DOT__H3 = 0xa54ff53aU;
                        __Vdly__sha_core__DOT__H4 = 0x510e527fU;
                        __Vdly__sha_core__DOT__H5 = 0x9b05688cU;
                        __Vdly__sha_core__DOT__H6 = 0x1f83d9abU;
                        __Vdly__sha_core__DOT__H7 = 0x5be0cd19U;
                    }
                } else {
                    __Vdly__sha_core__DOT__round = 0U;
                }
            } else if ((1U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((2U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((3U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((4U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((5U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((6U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else {
                __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            }
        } else if (((((((((8U == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                          | (9U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                         | (0xaU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                        | (0xbU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                       | (0xcU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                      | (0xdU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                     | (0xeU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                    | (0xfU == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            if ((8U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((9U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xaU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xbU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xcU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xdU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xeU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else {
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            }
        } else if (((((((((((((((((((((((((((((((((
                                                   ((((((((((((((((0x10U 
                                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                                                                  || (0x11U 
                                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                                 || (0x12U 
                                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                                || (0x13U 
                                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                               || (0x14U 
                                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                              || (0x15U 
                                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                             || (0x16U 
                                                                 == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                            || (0x17U 
                                                                == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                           || (0x18U 
                                                               == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                          || (0x19U 
                                                              == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                         || (0x1aU 
                                                             == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                        || (0x1bU 
                                                            == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                       || (0x1cU 
                                                           == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                      || (0x1dU 
                                                          == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                     || (0x1eU 
                                                         == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                    || (0x1fU 
                                                        == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                   || (0x20U 
                                                       == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                  || (0x21U 
                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                 || (0x22U 
                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                || (0x23U 
                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                               || (0x24U 
                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                              || (0x25U 
                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                             || (0x26U 
                                                 == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                            || (0x27U 
                                                == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                           || (0x28U 
                                               == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                          || (0x29U 
                                              == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                         || (0x2aU 
                                             == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                        || (0x2bU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                       || (0x2cU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                      || (0x2dU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                     || (0x2eU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                    || (0x2fU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                   || (0x30U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                  || (0x31U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                 || (0x32U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                || (0x33U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                               || (0x34U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                              || (0x35U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                             || (0x36U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                            || (0x37U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                           || (0x38U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                          || (0x39U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                         || (0x3aU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                        || (0x3bU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                       || (0x3cU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                      || (0x3dU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                     || (0x3eU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                    || (0x3fU == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            vlSelf->__PVT__sha_core__DOT__W0 = vlSelf->__PVT__sha_core__DOT__W1;
            __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
            __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
            __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
            __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__sha_core__DOT__W2;
            __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
            __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
            __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__sha_core__DOT__W3;
            __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
            __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
            __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__sha_core__DOT__W4;
            __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
            __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__sha_core__DOT__W5;
            __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__sha_core__DOT__W6;
            __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__sha_core__DOT__W7;
            __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__sha_core__DOT__W8;
            __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__sha_core__DOT__W9;
            __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__sha_core__DOT__W10;
            __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__sha_core__DOT__W11;
            __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__sha_core__DOT__W12;
            __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__sha_core__DOT__W13;
            __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__sha_core__DOT__W14;
            __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__sha_core__DOT__Wt;
            __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__sha_core__DOT__next_Wt;
        } else if ((0x40U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
            __Vdly__sha_core__DOT__D = (vlSelf->__PVT__sha_core__DOT__C 
                                        + vlSelf->__PVT__sha_core__DOT__H3);
            __Vdly__sha_core__DOT__H = (vlSelf->__PVT__sha_core__DOT__G 
                                        + vlSelf->__PVT__sha_core__DOT__H7);
            __Vdly__sha_core__DOT__round = 0U;
            __Vdly__sha_core__DOT__busy = 0U;
            __Vdly__sha_core__DOT__C = (vlSelf->__PVT__sha_core__DOT__B 
                                        + vlSelf->__PVT__sha_core__DOT__H2);
            __Vdly__sha_core__DOT__G = (vlSelf->__PVT__sha_core__DOT__F 
                                        + vlSelf->__PVT__sha_core__DOT__H6);
            __Vdly__sha_core__DOT__B = (vlSelf->__PVT__sha_core__DOT__A 
                                        + vlSelf->__PVT__sha_core__DOT__H1);
            __Vdly__sha_core__DOT__F = (vlSelf->__PVT__sha_core__DOT__E 
                                        + vlSelf->__PVT__sha_core__DOT__H5);
            __Vdly__sha_core__DOT__A = (vlSelf->__PVT__sha_core__DOT__next_A 
                                        + vlSelf->__PVT__sha_core__DOT__H0);
            __Vdly__sha_core__DOT__E = (vlSelf->__PVT__sha_core__DOT__next_E 
                                        + vlSelf->__PVT__sha_core__DOT__H4);
        } else {
            __Vdly__sha_core__DOT__round = 0U;
            __Vdly__sha_core__DOT__busy = 0U;
        }
        if ((1U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
            __Vdly__sha_core__DOT__read_counter = 7U;
        } else if (vlSelf->__PVT__sha_core__DOT__busy) {
            vlSelf->__PVT__text_o = 0U;
        } else {
            vlSelf->__PVT__text_o = (((((((((7U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter)) 
                                            | (6U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                           | (5U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                          | (4U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                         | (3U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                        | (2U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                       | (1U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                      | (0U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter)))
                                      ? ((7U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                          ? vlSelf->__PVT__sha_core__DOT__SHA256_result[7U]
                                          : ((6U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                              ? vlSelf->__PVT__sha_core__DOT__SHA256_result[6U]
                                              : ((5U 
                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                  ? 
                                                 vlSelf->__PVT__sha_core__DOT__SHA256_result[5U]
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                   ? 
                                                  vlSelf->__PVT__sha_core__DOT__SHA256_result[4U]
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                    ? 
                                                   vlSelf->__PVT__sha_core__DOT__SHA256_result[3U]
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                     ? 
                                                    vlSelf->__PVT__sha_core__DOT__SHA256_result[2U]
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                      ? 
                                                     vlSelf->__PVT__sha_core__DOT__SHA256_result[1U]
                                                      : 
                                                     vlSelf->__PVT__sha_core__DOT__SHA256_result[0U])))))))
                                      : 0U);
            if ((0U != (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) {
                __Vdly__sha_core__DOT__read_counter 
                    = (7U & ((IData)(vlSelf->__PVT__sha_core__DOT__read_counter) 
                             - (IData)(1U)));
            }
        }
        if (vlSelf->__PVT__cmd_w_i) {
            vlSelf->__PVT__sha_core__DOT__cmd = ((8U 
                                                  & (IData)(vlSelf->__PVT__sha_core__DOT__cmd)) 
                                                 | (IData)(vlSelf->__PVT__cmd_i));
        } else {
            vlSelf->__PVT__sha_core__DOT__cmd = ((7U 
                                                  & (IData)(vlSelf->__PVT__sha_core__DOT__cmd)) 
                                                 | ((IData)(vlSelf->__PVT__sha_core__DOT__busy) 
                                                    << 3U));
            if ((1U & (~ (IData)(vlSelf->__PVT__sha_core__DOT__busy)))) {
                vlSelf->__PVT__sha_core__DOT__cmd = 
                    (0xcU & (IData)(vlSelf->__PVT__sha_core__DOT__cmd));
            }
        }
    }
    __Vtableidx6 = (((IData)(vlSelf->__PVT__sha_core__DOT__round) 
                     << 1U) | (IData)(vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst));
    vlSelf->__PVT__sha_core__DOT__Kt = Vtop_tb__ConstPool__TABLE_hef79451c_0
        [__Vtableidx6];
    vlSelf->__PVT__sha_core__DOT__W2 = __Vdly__sha_core__DOT__W2;
    vlSelf->__PVT__sha_core__DOT__W3 = __Vdly__sha_core__DOT__W3;
    vlSelf->__PVT__sha_core__DOT__W4 = __Vdly__sha_core__DOT__W4;
    vlSelf->__PVT__sha_core__DOT__W5 = __Vdly__sha_core__DOT__W5;
    vlSelf->__PVT__sha_core__DOT__W6 = __Vdly__sha_core__DOT__W6;
    vlSelf->__PVT__sha_core__DOT__W7 = __Vdly__sha_core__DOT__W7;
    vlSelf->__PVT__sha_core__DOT__W8 = __Vdly__sha_core__DOT__W8;
    vlSelf->__PVT__sha_core__DOT__W10 = __Vdly__sha_core__DOT__W10;
    vlSelf->__PVT__sha_core__DOT__W11 = __Vdly__sha_core__DOT__W11;
    vlSelf->__PVT__sha_core__DOT__W12 = __Vdly__sha_core__DOT__W12;
    vlSelf->__PVT__sha_core__DOT__W13 = __Vdly__sha_core__DOT__W13;
    vlSelf->__PVT__sha_core__DOT__H0 = __Vdly__sha_core__DOT__H0;
    vlSelf->__PVT__sha_core__DOT__H1 = __Vdly__sha_core__DOT__H1;
    vlSelf->__PVT__sha_core__DOT__H2 = __Vdly__sha_core__DOT__H2;
    vlSelf->__PVT__sha_core__DOT__H3 = __Vdly__sha_core__DOT__H3;
    vlSelf->__PVT__sha_core__DOT__H4 = __Vdly__sha_core__DOT__H4;
    vlSelf->__PVT__sha_core__DOT__H5 = __Vdly__sha_core__DOT__H5;
    vlSelf->__PVT__sha_core__DOT__H6 = __Vdly__sha_core__DOT__H6;
    vlSelf->__PVT__sha_core__DOT__H7 = __Vdly__sha_core__DOT__H7;
    vlSelf->__PVT__sha_core__DOT__round = __Vdly__sha_core__DOT__round;
    vlSelf->__PVT__sha_core__DOT__W1 = __Vdly__sha_core__DOT__W1;
    vlSelf->__PVT__sha_core__DOT__W9 = __Vdly__sha_core__DOT__W9;
    vlSelf->__PVT__sha_core__DOT__W14 = __Vdly__sha_core__DOT__W14;
    vlSelf->__PVT__sha_core__DOT__D = __Vdly__sha_core__DOT__D;
    vlSelf->__PVT__sha_core__DOT__A = __Vdly__sha_core__DOT__A;
    vlSelf->__PVT__sha_core__DOT__B = __Vdly__sha_core__DOT__B;
    vlSelf->__PVT__sha_core__DOT__C = __Vdly__sha_core__DOT__C;
    vlSelf->__PVT__sha_core__DOT__Wt = __Vdly__sha_core__DOT__Wt;
    vlSelf->__PVT__sha_core__DOT__E = __Vdly__sha_core__DOT__E;
    vlSelf->__PVT__sha_core__DOT__F = __Vdly__sha_core__DOT__F;
    vlSelf->__PVT__sha_core__DOT__G = __Vdly__sha_core__DOT__G;
    vlSelf->__PVT__sha_core__DOT__H = __Vdly__sha_core__DOT__H;
    vlSelf->__PVT__sha_core__DOT__read_counter = __Vdly__sha_core__DOT__read_counter;
    vlSelf->__PVT__sha_core__DOT__round_plus_1 = (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__sha_core__DOT__round)));
    vlSelf->__PVT__sha_core__DOT__next_Wt = ((((vlSelf->__PVT__sha_core__DOT__W14 
                                                << 0xfU) 
                                               | (vlSelf->__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                              ^ (((vlSelf->__PVT__sha_core__DOT__W14 
                                                   << 0xdU) 
                                                  | (vlSelf->__PVT__sha_core__DOT__W14 
                                                     >> 0x13U)) 
                                                 ^ 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->__PVT__sha_core__DOT__W14, 0xaU))) 
                                             + (vlSelf->__PVT__sha_core__DOT__W9 
                                                + (
                                                   (((vlSelf->__PVT__sha_core__DOT__W1 
                                                      << 0x19U) 
                                                     | (vlSelf->__PVT__sha_core__DOT__W1 
                                                        >> 7U)) 
                                                    ^ 
                                                    (((vlSelf->__PVT__sha_core__DOT__W1 
                                                       << 0xeU) 
                                                      | (vlSelf->__PVT__sha_core__DOT__W1 
                                                         >> 0x12U)) 
                                                     ^ 
                                                     VL_SHIFTR_III(32,32,32, vlSelf->__PVT__sha_core__DOT__W1, 3U))) 
                                                   + vlSelf->__PVT__sha_core__DOT__W0)));
    vlSelf->__PVT__sha_core__DOT__SHA256_result[0U] 
        = vlSelf->__PVT__sha_core__DOT__H;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[1U] 
        = vlSelf->__PVT__sha_core__DOT__G;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[2U] 
        = vlSelf->__PVT__sha_core__DOT__F;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[3U] 
        = vlSelf->__PVT__sha_core__DOT__E;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[4U] 
        = vlSelf->__PVT__sha_core__DOT__D;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[5U] 
        = vlSelf->__PVT__sha_core__DOT__C;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[6U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__sha_core__DOT__A)) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__sha_core__DOT__B))));
    vlSelf->__PVT__sha_core__DOT__SHA256_result[7U] 
        = (IData)(((((QData)((IData)(vlSelf->__PVT__sha_core__DOT__A)) 
                     << 0x20U) | (QData)((IData)(vlSelf->__PVT__sha_core__DOT__B))) 
                   >> 0x20U));
    vlSelf->__PVT__sha_core__DOT__T1_32 = (vlSelf->__PVT__sha_core__DOT__H 
                                           + ((((vlSelf->__PVT__sha_core__DOT__E 
                                                 << 0x1aU) 
                                                | (vlSelf->__PVT__sha_core__DOT__E 
                                                   >> 6U)) 
                                               ^ ((
                                                   (vlSelf->__PVT__sha_core__DOT__E 
                                                    << 0x15U) 
                                                   | (vlSelf->__PVT__sha_core__DOT__E 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  ((vlSelf->__PVT__sha_core__DOT__E 
                                                    << 7U) 
                                                   | (vlSelf->__PVT__sha_core__DOT__E 
                                                      >> 0x19U)))) 
                                              + (((vlSelf->__PVT__sha_core__DOT__E 
                                                   & vlSelf->__PVT__sha_core__DOT__F) 
                                                  ^ 
                                                  ((~ vlSelf->__PVT__sha_core__DOT__E) 
                                                   & vlSelf->__PVT__sha_core__DOT__G)) 
                                                 + 
                                                 (vlSelf->__PVT__sha_core__DOT__Kt 
                                                  + vlSelf->__PVT__sha_core__DOT__Wt))));
    vlSelf->__PVT__sha_core__DOT__next_E = (vlSelf->__PVT__sha_core__DOT__D 
                                            + vlSelf->__PVT__sha_core__DOT__T1_32);
    vlSelf->__PVT__sha_core__DOT__next_A = (vlSelf->__PVT__sha_core__DOT__T1_32 
                                            + ((((vlSelf->__PVT__sha_core__DOT__A 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__sha_core__DOT__A 
                                                    >> 2U)) 
                                                ^ (
                                                   ((vlSelf->__PVT__sha_core__DOT__A 
                                                     << 0x13U) 
                                                    | (vlSelf->__PVT__sha_core__DOT__A 
                                                       >> 0xdU)) 
                                                   ^ 
                                                   ((vlSelf->__PVT__sha_core__DOT__A 
                                                     << 0xaU) 
                                                    | (vlSelf->__PVT__sha_core__DOT__A 
                                                       >> 0x16U)))) 
                                               + ((vlSelf->__PVT__sha_core__DOT__A 
                                                   & vlSelf->__PVT__sha_core__DOT__B) 
                                                  ^ 
                                                  ((vlSelf->__PVT__sha_core__DOT__B 
                                                    & vlSelf->__PVT__sha_core__DOT__C) 
                                                   ^ 
                                                   (vlSelf->__PVT__sha_core__DOT__A 
                                                    & vlSelf->__PVT__sha_core__DOT__C)))));
    vlSelf->__PVT__sha_core__DOT__busy = __Vdly__sha_core__DOT__busy;
}

VL_INLINE_OPT void Vtop_tb_doublesha___nba_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE__0(Vtop_tb_doublesha* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_doublesha___nba_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*6:0*/ __Vdly__sha_core__DOT__round;
    __Vdly__sha_core__DOT__round = 0;
    CData/*0:0*/ __Vdly__sha_core__DOT__busy;
    __Vdly__sha_core__DOT__busy = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W1;
    __Vdly__sha_core__DOT__W1 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W2;
    __Vdly__sha_core__DOT__W2 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W3;
    __Vdly__sha_core__DOT__W3 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W4;
    __Vdly__sha_core__DOT__W4 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W5;
    __Vdly__sha_core__DOT__W5 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W6;
    __Vdly__sha_core__DOT__W6 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W7;
    __Vdly__sha_core__DOT__W7 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W8;
    __Vdly__sha_core__DOT__W8 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W9;
    __Vdly__sha_core__DOT__W9 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W10;
    __Vdly__sha_core__DOT__W10 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W11;
    __Vdly__sha_core__DOT__W11 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W12;
    __Vdly__sha_core__DOT__W12 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W13;
    __Vdly__sha_core__DOT__W13 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__W14;
    __Vdly__sha_core__DOT__W14 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__Wt;
    __Vdly__sha_core__DOT__Wt = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__A;
    __Vdly__sha_core__DOT__A = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__B;
    __Vdly__sha_core__DOT__B = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__C;
    __Vdly__sha_core__DOT__C = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__D;
    __Vdly__sha_core__DOT__D = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__E;
    __Vdly__sha_core__DOT__E = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__F;
    __Vdly__sha_core__DOT__F = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__G;
    __Vdly__sha_core__DOT__G = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H;
    __Vdly__sha_core__DOT__H = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H0;
    __Vdly__sha_core__DOT__H0 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H1;
    __Vdly__sha_core__DOT__H1 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H2;
    __Vdly__sha_core__DOT__H2 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H3;
    __Vdly__sha_core__DOT__H3 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H4;
    __Vdly__sha_core__DOT__H4 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H5;
    __Vdly__sha_core__DOT__H5 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H6;
    __Vdly__sha_core__DOT__H6 = 0;
    IData/*31:0*/ __Vdly__sha_core__DOT__H7;
    __Vdly__sha_core__DOT__H7 = 0;
    CData/*2:0*/ __Vdly__sha_core__DOT__read_counter;
    __Vdly__sha_core__DOT__read_counter = 0;
    VlWide<16>/*511:0*/ __Vtemp_3;
    VlWide<16>/*511:0*/ __Vtemp_7;
    VlWide<8>/*255:0*/ __Vtemp_9;
    // Body
    __Vdly__sha_core__DOT__read_counter = vlSelf->__PVT__sha_core__DOT__read_counter;
    __Vdly__sha_core__DOT__H7 = vlSelf->__PVT__sha_core__DOT__H7;
    __Vdly__sha_core__DOT__H6 = vlSelf->__PVT__sha_core__DOT__H6;
    __Vdly__sha_core__DOT__H5 = vlSelf->__PVT__sha_core__DOT__H5;
    __Vdly__sha_core__DOT__H4 = vlSelf->__PVT__sha_core__DOT__H4;
    __Vdly__sha_core__DOT__H3 = vlSelf->__PVT__sha_core__DOT__H3;
    __Vdly__sha_core__DOT__H2 = vlSelf->__PVT__sha_core__DOT__H2;
    __Vdly__sha_core__DOT__H1 = vlSelf->__PVT__sha_core__DOT__H1;
    __Vdly__sha_core__DOT__H0 = vlSelf->__PVT__sha_core__DOT__H0;
    __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__sha_core__DOT__W13;
    __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__sha_core__DOT__W12;
    __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__sha_core__DOT__W11;
    __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__sha_core__DOT__W10;
    __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__sha_core__DOT__W8;
    __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__sha_core__DOT__W7;
    __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__sha_core__DOT__W6;
    __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__sha_core__DOT__W5;
    __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__sha_core__DOT__W4;
    __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__sha_core__DOT__W3;
    __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__sha_core__DOT__W2;
    __Vdly__sha_core__DOT__busy = vlSelf->__PVT__sha_core__DOT__busy;
    __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round;
    __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__sha_core__DOT__W14;
    __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__sha_core__DOT__W9;
    __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__sha_core__DOT__W1;
    __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__D;
    __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__C;
    __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__B;
    __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__A;
    __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__sha_core__DOT__Wt;
    __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__H;
    __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__G;
    __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__F;
    __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__E;
    if (vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst) {
        vlSelf->__PVT__hash_index = 0U;
        vlSelf->__PVT__delay_left = 0U;
        vlSelf->__PVT__first_hash[0U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__first_hash[1U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__first_hash[2U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__first_hash[3U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__first_hash[4U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__first_hash[5U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__first_hash[6U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__first_hash[7U] = Vtop_tb__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__second_cycle = 0U;
        vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->__PVT__tmp_i[8U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->__PVT__tmp_i[9U] = Vtop_tb__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->__PVT__tmp_i[0xaU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->__PVT__tmp_i[0xbU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->__PVT__tmp_i[0xcU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->__PVT__tmp_i[0xdU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->__PVT__tmp_i[0xeU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->__PVT__tmp_i[0xfU] = Vtop_tb__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->complete = 0U;
        vlSelf->__PVT__state = 0U;
        __Vdly__sha_core__DOT__round = 0U;
        __Vdly__sha_core__DOT__busy = 0U;
        vlSelf->__PVT__sha_core__DOT__W0 = 0U;
        __Vdly__sha_core__DOT__W1 = 0U;
        __Vdly__sha_core__DOT__W2 = 0U;
        __Vdly__sha_core__DOT__W3 = 0U;
        __Vdly__sha_core__DOT__W4 = 0U;
        __Vdly__sha_core__DOT__W5 = 0U;
        __Vdly__sha_core__DOT__W6 = 0U;
        __Vdly__sha_core__DOT__W7 = 0U;
        __Vdly__sha_core__DOT__W8 = 0U;
        __Vdly__sha_core__DOT__W9 = 0U;
        __Vdly__sha_core__DOT__W10 = 0U;
        __Vdly__sha_core__DOT__W11 = 0U;
        __Vdly__sha_core__DOT__W12 = 0U;
        __Vdly__sha_core__DOT__W13 = 0U;
        __Vdly__sha_core__DOT__W14 = 0U;
        __Vdly__sha_core__DOT__Wt = 0U;
        __Vdly__sha_core__DOT__A = 0U;
        __Vdly__sha_core__DOT__B = 0U;
        __Vdly__sha_core__DOT__C = 0U;
        __Vdly__sha_core__DOT__D = 0U;
        __Vdly__sha_core__DOT__E = 0U;
        __Vdly__sha_core__DOT__F = 0U;
        __Vdly__sha_core__DOT__G = 0U;
        __Vdly__sha_core__DOT__H = 0U;
        __Vdly__sha_core__DOT__H0 = 0U;
        __Vdly__sha_core__DOT__H1 = 0U;
        __Vdly__sha_core__DOT__H2 = 0U;
        __Vdly__sha_core__DOT__H3 = 0U;
        __Vdly__sha_core__DOT__H4 = 0U;
        __Vdly__sha_core__DOT__H5 = 0U;
        __Vdly__sha_core__DOT__H6 = 0U;
        __Vdly__sha_core__DOT__H7 = 0U;
        vlSelf->__PVT__text_o = 0U;
        __Vdly__sha_core__DOT__read_counter = 0U;
        vlSelf->__PVT__sha_core__DOT__cmd = 0U;
    } else {
        if ((0U != (IData)(vlSelf->__PVT__delay_left))) {
            vlSelf->__PVT__delay_left = (0xfU & ((IData)(vlSelf->__PVT__delay_left) 
                                                 - (IData)(1U)));
        } else if ((1U & (~ (((IData)(vlSelf->__PVT__sha_core__DOT__cmd) 
                              >> 3U) & ((2U == (IData)(vlSelf->__PVT__state)) 
                                        | (4U == (IData)(vlSelf->__PVT__state))))))) {
            if ((0U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_i = 2U;
                vlSelf->__PVT__cmd_w_i = 1U;
                vlSelf->__PVT__tmp_i[0U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[3U];
                vlSelf->__PVT__tmp_i[1U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[4U];
                vlSelf->__PVT__tmp_i[2U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[5U];
                vlSelf->__PVT__tmp_i[3U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[6U];
                vlSelf->__PVT__tmp_i[4U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[7U];
                vlSelf->__PVT__tmp_i[5U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[8U];
                vlSelf->__PVT__tmp_i[6U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[9U];
                vlSelf->__PVT__tmp_i[7U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xaU];
                vlSelf->__PVT__tmp_i[8U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xbU];
                vlSelf->__PVT__tmp_i[9U] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xcU];
                vlSelf->__PVT__tmp_i[0xaU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xdU];
                vlSelf->__PVT__tmp_i[0xbU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xeU];
                vlSelf->__PVT__tmp_i[0xcU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0xfU];
                vlSelf->__PVT__tmp_i[0xdU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x10U];
                vlSelf->__PVT__tmp_i[0xeU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x11U];
                vlSelf->__PVT__tmp_i[0xfU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0x12U];
                vlSelf->__PVT__state = 1U;
            } else if ((1U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__text_i = vlSelf->__PVT__tmp_i[0xfU];
                VL_SHIFTL_WWI(512,512,32, __Vtemp_3, vlSelf->__PVT__tmp_i, 0x20U);
                vlSelf->__PVT__tmp_i[0U] = __Vtemp_3[0U];
                vlSelf->__PVT__tmp_i[1U] = __Vtemp_3[1U];
                vlSelf->__PVT__tmp_i[2U] = __Vtemp_3[2U];
                vlSelf->__PVT__tmp_i[3U] = __Vtemp_3[3U];
                vlSelf->__PVT__tmp_i[4U] = __Vtemp_3[4U];
                vlSelf->__PVT__tmp_i[5U] = __Vtemp_3[5U];
                vlSelf->__PVT__tmp_i[6U] = __Vtemp_3[6U];
                vlSelf->__PVT__tmp_i[7U] = __Vtemp_3[7U];
                vlSelf->__PVT__tmp_i[8U] = __Vtemp_3[8U];
                vlSelf->__PVT__tmp_i[9U] = __Vtemp_3[9U];
                vlSelf->__PVT__tmp_i[0xaU] = __Vtemp_3[0xaU];
                vlSelf->__PVT__tmp_i[0xbU] = __Vtemp_3[0xbU];
                vlSelf->__PVT__tmp_i[0xcU] = __Vtemp_3[0xcU];
                vlSelf->__PVT__tmp_i[0xdU] = __Vtemp_3[0xdU];
                vlSelf->__PVT__tmp_i[0xeU] = __Vtemp_3[0xeU];
                vlSelf->__PVT__tmp_i[0xfU] = __Vtemp_3[0xfU];
                if ((0x10U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 2U;
                }
            } else if ((2U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 1U;
                if (vlSelf->__PVT__second_cycle) {
                    vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[0U];
                    vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[1U];
                    vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[2U];
                    vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[3U];
                    vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[4U];
                    vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[5U];
                    vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[6U];
                    vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_hfc6abab7_0[7U];
                    vlSelf->__PVT__tmp_i[8U] = vlSelf->__PVT__first_hash[0U];
                    vlSelf->__PVT__tmp_i[9U] = vlSelf->__PVT__first_hash[1U];
                    vlSelf->__PVT__tmp_i[0xaU] = vlSelf->__PVT__first_hash[2U];
                    vlSelf->__PVT__tmp_i[0xbU] = vlSelf->__PVT__first_hash[3U];
                    vlSelf->__PVT__tmp_i[0xcU] = vlSelf->__PVT__first_hash[4U];
                    vlSelf->__PVT__tmp_i[0xdU] = vlSelf->__PVT__first_hash[5U];
                    vlSelf->__PVT__tmp_i[0xeU] = vlSelf->__PVT__first_hash[6U];
                    vlSelf->__PVT__tmp_i[0xfU] = vlSelf->__PVT__first_hash[7U];
                    vlSelf->__PVT__cmd_i = 2U;
                } else {
                    vlSelf->__PVT__tmp_i[0U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0U];
                    vlSelf->__PVT__tmp_i[1U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[1U];
                    vlSelf->__PVT__tmp_i[2U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[2U];
                    vlSelf->__PVT__tmp_i[3U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[3U];
                    vlSelf->__PVT__tmp_i[4U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[4U];
                    vlSelf->__PVT__tmp_i[5U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[5U];
                    vlSelf->__PVT__tmp_i[6U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[6U];
                    vlSelf->__PVT__tmp_i[7U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[7U];
                    vlSelf->__PVT__tmp_i[8U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[8U];
                    vlSelf->__PVT__tmp_i[9U] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[9U];
                    vlSelf->__PVT__tmp_i[0xaU] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0xaU];
                    vlSelf->__PVT__tmp_i[0xbU] = Vtop_tb__ConstPool__CONST_hb9eaa18d_0[0xbU];
                    vlSelf->__PVT__tmp_i[0xcU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                        [6U];
                    vlSelf->__PVT__tmp_i[0xdU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[0U];
                    vlSelf->__PVT__tmp_i[0xeU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[1U];
                    vlSelf->__PVT__tmp_i[0xfU] = vlSymsp->TOP.top_tb__DOT__TOP__DOT__block_info[2U];
                    vlSelf->__PVT__cmd_i = 6U;
                }
                vlSelf->__PVT__state = 3U;
            } else if ((3U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__text_i = vlSelf->__PVT__tmp_i[0xfU];
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                VL_SHIFTL_WWI(512,512,32, __Vtemp_7, vlSelf->__PVT__tmp_i, 0x20U);
                vlSelf->__PVT__tmp_i[0U] = __Vtemp_7[0U];
                vlSelf->__PVT__tmp_i[1U] = __Vtemp_7[1U];
                vlSelf->__PVT__tmp_i[2U] = __Vtemp_7[2U];
                vlSelf->__PVT__tmp_i[3U] = __Vtemp_7[3U];
                vlSelf->__PVT__tmp_i[4U] = __Vtemp_7[4U];
                vlSelf->__PVT__tmp_i[5U] = __Vtemp_7[5U];
                vlSelf->__PVT__tmp_i[6U] = __Vtemp_7[6U];
                vlSelf->__PVT__tmp_i[7U] = __Vtemp_7[7U];
                vlSelf->__PVT__tmp_i[8U] = __Vtemp_7[8U];
                vlSelf->__PVT__tmp_i[9U] = __Vtemp_7[9U];
                vlSelf->__PVT__tmp_i[0xaU] = __Vtemp_7[0xaU];
                vlSelf->__PVT__tmp_i[0xbU] = __Vtemp_7[0xbU];
                vlSelf->__PVT__tmp_i[0xcU] = __Vtemp_7[0xcU];
                vlSelf->__PVT__tmp_i[0xdU] = __Vtemp_7[0xdU];
                vlSelf->__PVT__tmp_i[0xeU] = __Vtemp_7[0xeU];
                vlSelf->__PVT__tmp_i[0xfU] = __Vtemp_7[0xfU];
                if ((0x10U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 4U;
                }
            } else if ((4U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_i = 1U;
                vlSelf->__PVT__cmd_w_i = 1U;
                vlSelf->__PVT__state = 5U;
            } else if ((5U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__cmd_w_i = 0U;
                vlSelf->__PVT__state = 6U;
                vlSelf->__PVT__delay_left = 1U;
            } else if ((6U == (IData)(vlSelf->__PVT__state))) {
                vlSelf->__PVT__first_hash[0U] = vlSelf->__PVT__text_o;
                vlSelf->__PVT__internal_index = (0x1fU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__internal_index)));
                if ((8U == (IData)(vlSelf->__PVT__internal_index))) {
                    vlSelf->__PVT__internal_index = 0U;
                    vlSelf->__PVT__state = 7U;
                    if (vlSelf->__PVT__second_cycle) {
                        vlSelf->complete = 1U;
                        vlSelf->hash[0U] = vlSelf->__PVT__first_hash[0U];
                        vlSelf->hash[1U] = vlSelf->__PVT__first_hash[1U];
                        vlSelf->hash[2U] = vlSelf->__PVT__first_hash[2U];
                        vlSelf->hash[3U] = vlSelf->__PVT__first_hash[3U];
                        vlSelf->hash[4U] = vlSelf->__PVT__first_hash[4U];
                        vlSelf->hash[5U] = vlSelf->__PVT__first_hash[5U];
                        vlSelf->hash[6U] = vlSelf->__PVT__first_hash[6U];
                        vlSelf->hash[7U] = vlSelf->__PVT__first_hash[7U];
                    } else {
                        vlSelf->__PVT__state = 2U;
                        vlSelf->__PVT__second_cycle = 1U;
                    }
                } else {
                    VL_SHIFTL_WWI(256,256,32, __Vtemp_9, vlSelf->__PVT__first_hash, 0x20U);
                    vlSelf->__PVT__first_hash[0U] = 
                        __Vtemp_9[0U];
                    vlSelf->__PVT__first_hash[1U] = 
                        __Vtemp_9[1U];
                    vlSelf->__PVT__first_hash[2U] = 
                        __Vtemp_9[2U];
                    vlSelf->__PVT__first_hash[3U] = 
                        __Vtemp_9[3U];
                    vlSelf->__PVT__first_hash[4U] = 
                        __Vtemp_9[4U];
                    vlSelf->__PVT__first_hash[5U] = 
                        __Vtemp_9[5U];
                    vlSelf->__PVT__first_hash[6U] = 
                        __Vtemp_9[6U];
                    vlSelf->__PVT__first_hash[7U] = 
                        __Vtemp_9[7U];
                }
            }
        }
        if (((((((((0U == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                   | (1U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                  | (2U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                 | (3U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                | (4U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
               | (5U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
              | (6U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
             | (7U == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            if ((0U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                if ((2U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                    vlSelf->__PVT__sha_core__DOT__W0 
                        = vlSelf->__PVT__text_i;
                    __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                    __Vdly__sha_core__DOT__busy = 1U;
                    __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                    if ((4U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                        if ((4U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
                            __Vdly__sha_core__DOT__H0 
                                = vlSelf->__PVT__sha_core__DOT__A;
                            __Vdly__sha_core__DOT__H1 
                                = vlSelf->__PVT__sha_core__DOT__B;
                            __Vdly__sha_core__DOT__H2 
                                = vlSelf->__PVT__sha_core__DOT__C;
                            __Vdly__sha_core__DOT__H3 
                                = vlSelf->__PVT__sha_core__DOT__D;
                            __Vdly__sha_core__DOT__H4 
                                = vlSelf->__PVT__sha_core__DOT__E;
                            __Vdly__sha_core__DOT__H5 
                                = vlSelf->__PVT__sha_core__DOT__F;
                            __Vdly__sha_core__DOT__H6 
                                = vlSelf->__PVT__sha_core__DOT__G;
                            __Vdly__sha_core__DOT__H7 
                                = vlSelf->__PVT__sha_core__DOT__H;
                        }
                    } else {
                        __Vdly__sha_core__DOT__A = 0x6a09e667U;
                        __Vdly__sha_core__DOT__B = 0xbb67ae85U;
                        __Vdly__sha_core__DOT__C = 0x3c6ef372U;
                        __Vdly__sha_core__DOT__D = 0xa54ff53aU;
                        __Vdly__sha_core__DOT__E = 0x510e527fU;
                        __Vdly__sha_core__DOT__F = 0x9b05688cU;
                        __Vdly__sha_core__DOT__G = 0x1f83d9abU;
                        __Vdly__sha_core__DOT__H = 0x5be0cd19U;
                        __Vdly__sha_core__DOT__H0 = 0x6a09e667U;
                        __Vdly__sha_core__DOT__H1 = 0xbb67ae85U;
                        __Vdly__sha_core__DOT__H2 = 0x3c6ef372U;
                        __Vdly__sha_core__DOT__H3 = 0xa54ff53aU;
                        __Vdly__sha_core__DOT__H4 = 0x510e527fU;
                        __Vdly__sha_core__DOT__H5 = 0x9b05688cU;
                        __Vdly__sha_core__DOT__H6 = 0x1f83d9abU;
                        __Vdly__sha_core__DOT__H7 = 0x5be0cd19U;
                    }
                } else {
                    __Vdly__sha_core__DOT__round = 0U;
                }
            } else if ((1U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((2U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((3U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((4U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((5U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((6U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else {
                __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            }
        } else if (((((((((8U == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                          | (9U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                         | (0xaU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                        | (0xbU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                       | (0xcU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                      | (0xdU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                     | (0xeU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                    | (0xfU == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            if ((8U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((9U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xaU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xbU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xcU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xdU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else if ((0xeU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
                __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            } else {
                __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__text_i;
                __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
                __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
                __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
                __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
                __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
                __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
                __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
                __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
                __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            }
        } else if (((((((((((((((((((((((((((((((((
                                                   ((((((((((((((((0x10U 
                                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round)) 
                                                                  || (0x11U 
                                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                                 || (0x12U 
                                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                                || (0x13U 
                                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                               || (0x14U 
                                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                              || (0x15U 
                                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                             || (0x16U 
                                                                 == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                            || (0x17U 
                                                                == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                           || (0x18U 
                                                               == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                          || (0x19U 
                                                              == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                         || (0x1aU 
                                                             == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                        || (0x1bU 
                                                            == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                       || (0x1cU 
                                                           == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                      || (0x1dU 
                                                          == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                     || (0x1eU 
                                                         == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                    || (0x1fU 
                                                        == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                   || (0x20U 
                                                       == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                  || (0x21U 
                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                 || (0x22U 
                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                                || (0x23U 
                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                               || (0x24U 
                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                              || (0x25U 
                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                             || (0x26U 
                                                 == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                            || (0x27U 
                                                == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                           || (0x28U 
                                               == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                          || (0x29U 
                                              == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                         || (0x2aU 
                                             == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                        || (0x2bU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                       || (0x2cU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                      || (0x2dU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                     || (0x2eU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                    || (0x2fU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                   || (0x30U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                  || (0x31U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                 || (0x32U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                                || (0x33U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                               || (0x34U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                              || (0x35U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                             || (0x36U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                            || (0x37U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                           || (0x38U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                          || (0x39U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                         || (0x3aU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                        || (0x3bU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                       || (0x3cU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                      || (0x3dU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                     || (0x3eU == (IData)(vlSelf->__PVT__sha_core__DOT__round))) 
                    || (0x3fU == (IData)(vlSelf->__PVT__sha_core__DOT__round)))) {
            vlSelf->__PVT__sha_core__DOT__W0 = vlSelf->__PVT__sha_core__DOT__W1;
            __Vdly__sha_core__DOT__H = vlSelf->__PVT__sha_core__DOT__G;
            __Vdly__sha_core__DOT__D = vlSelf->__PVT__sha_core__DOT__C;
            __Vdly__sha_core__DOT__round = vlSelf->__PVT__sha_core__DOT__round_plus_1;
            __Vdly__sha_core__DOT__W1 = vlSelf->__PVT__sha_core__DOT__W2;
            __Vdly__sha_core__DOT__G = vlSelf->__PVT__sha_core__DOT__F;
            __Vdly__sha_core__DOT__C = vlSelf->__PVT__sha_core__DOT__B;
            __Vdly__sha_core__DOT__W2 = vlSelf->__PVT__sha_core__DOT__W3;
            __Vdly__sha_core__DOT__F = vlSelf->__PVT__sha_core__DOT__E;
            __Vdly__sha_core__DOT__B = vlSelf->__PVT__sha_core__DOT__A;
            __Vdly__sha_core__DOT__W3 = vlSelf->__PVT__sha_core__DOT__W4;
            __Vdly__sha_core__DOT__E = vlSelf->__PVT__sha_core__DOT__next_E;
            __Vdly__sha_core__DOT__A = vlSelf->__PVT__sha_core__DOT__next_A;
            __Vdly__sha_core__DOT__W4 = vlSelf->__PVT__sha_core__DOT__W5;
            __Vdly__sha_core__DOT__W5 = vlSelf->__PVT__sha_core__DOT__W6;
            __Vdly__sha_core__DOT__W6 = vlSelf->__PVT__sha_core__DOT__W7;
            __Vdly__sha_core__DOT__W7 = vlSelf->__PVT__sha_core__DOT__W8;
            __Vdly__sha_core__DOT__W8 = vlSelf->__PVT__sha_core__DOT__W9;
            __Vdly__sha_core__DOT__W9 = vlSelf->__PVT__sha_core__DOT__W10;
            __Vdly__sha_core__DOT__W10 = vlSelf->__PVT__sha_core__DOT__W11;
            __Vdly__sha_core__DOT__W11 = vlSelf->__PVT__sha_core__DOT__W12;
            __Vdly__sha_core__DOT__W12 = vlSelf->__PVT__sha_core__DOT__W13;
            __Vdly__sha_core__DOT__W13 = vlSelf->__PVT__sha_core__DOT__W14;
            __Vdly__sha_core__DOT__W14 = vlSelf->__PVT__sha_core__DOT__Wt;
            __Vdly__sha_core__DOT__Wt = vlSelf->__PVT__sha_core__DOT__next_Wt;
        } else if ((0x40U == (IData)(vlSelf->__PVT__sha_core__DOT__round))) {
            __Vdly__sha_core__DOT__D = (vlSelf->__PVT__sha_core__DOT__C 
                                        + vlSelf->__PVT__sha_core__DOT__H3);
            __Vdly__sha_core__DOT__H = (vlSelf->__PVT__sha_core__DOT__G 
                                        + vlSelf->__PVT__sha_core__DOT__H7);
            __Vdly__sha_core__DOT__round = 0U;
            __Vdly__sha_core__DOT__busy = 0U;
            __Vdly__sha_core__DOT__C = (vlSelf->__PVT__sha_core__DOT__B 
                                        + vlSelf->__PVT__sha_core__DOT__H2);
            __Vdly__sha_core__DOT__G = (vlSelf->__PVT__sha_core__DOT__F 
                                        + vlSelf->__PVT__sha_core__DOT__H6);
            __Vdly__sha_core__DOT__B = (vlSelf->__PVT__sha_core__DOT__A 
                                        + vlSelf->__PVT__sha_core__DOT__H1);
            __Vdly__sha_core__DOT__F = (vlSelf->__PVT__sha_core__DOT__E 
                                        + vlSelf->__PVT__sha_core__DOT__H5);
            __Vdly__sha_core__DOT__A = (vlSelf->__PVT__sha_core__DOT__next_A 
                                        + vlSelf->__PVT__sha_core__DOT__H0);
            __Vdly__sha_core__DOT__E = (vlSelf->__PVT__sha_core__DOT__next_E 
                                        + vlSelf->__PVT__sha_core__DOT__H4);
        } else {
            __Vdly__sha_core__DOT__round = 0U;
            __Vdly__sha_core__DOT__busy = 0U;
        }
        if ((1U & (IData)(vlSelf->__PVT__sha_core__DOT__cmd))) {
            __Vdly__sha_core__DOT__read_counter = 7U;
        } else if (vlSelf->__PVT__sha_core__DOT__busy) {
            vlSelf->__PVT__text_o = 0U;
        } else {
            vlSelf->__PVT__text_o = (((((((((7U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter)) 
                                            | (6U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                           | (5U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                          | (4U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                         | (3U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                        | (2U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                       | (1U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) 
                                      | (0U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter)))
                                      ? ((7U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                          ? vlSelf->__PVT__sha_core__DOT__SHA256_result[7U]
                                          : ((6U == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                              ? vlSelf->__PVT__sha_core__DOT__SHA256_result[6U]
                                              : ((5U 
                                                  == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                  ? 
                                                 vlSelf->__PVT__sha_core__DOT__SHA256_result[5U]
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                   ? 
                                                  vlSelf->__PVT__sha_core__DOT__SHA256_result[4U]
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                    ? 
                                                   vlSelf->__PVT__sha_core__DOT__SHA256_result[3U]
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                     ? 
                                                    vlSelf->__PVT__sha_core__DOT__SHA256_result[2U]
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))
                                                      ? 
                                                     vlSelf->__PVT__sha_core__DOT__SHA256_result[1U]
                                                      : 
                                                     vlSelf->__PVT__sha_core__DOT__SHA256_result[0U])))))))
                                      : 0U);
            if ((0U != (IData)(vlSelf->__PVT__sha_core__DOT__read_counter))) {
                __Vdly__sha_core__DOT__read_counter 
                    = (7U & ((IData)(vlSelf->__PVT__sha_core__DOT__read_counter) 
                             - (IData)(1U)));
            }
        }
        if (vlSelf->__PVT__cmd_w_i) {
            vlSelf->__PVT__sha_core__DOT__cmd = ((8U 
                                                  & (IData)(vlSelf->__PVT__sha_core__DOT__cmd)) 
                                                 | (IData)(vlSelf->__PVT__cmd_i));
        } else {
            vlSelf->__PVT__sha_core__DOT__cmd = ((7U 
                                                  & (IData)(vlSelf->__PVT__sha_core__DOT__cmd)) 
                                                 | ((IData)(vlSelf->__PVT__sha_core__DOT__busy) 
                                                    << 3U));
            if ((1U & (~ (IData)(vlSelf->__PVT__sha_core__DOT__busy)))) {
                vlSelf->__PVT__sha_core__DOT__cmd = 
                    (0xcU & (IData)(vlSelf->__PVT__sha_core__DOT__cmd));
            }
        }
    }
    __Vtableidx7 = (((IData)(vlSelf->__PVT__sha_core__DOT__round) 
                     << 1U) | (IData)(vlSymsp->TOP.top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst));
    vlSelf->__PVT__sha_core__DOT__Kt = Vtop_tb__ConstPool__TABLE_hef79451c_0
        [__Vtableidx7];
    vlSelf->__PVT__sha_core__DOT__W2 = __Vdly__sha_core__DOT__W2;
    vlSelf->__PVT__sha_core__DOT__W3 = __Vdly__sha_core__DOT__W3;
    vlSelf->__PVT__sha_core__DOT__W4 = __Vdly__sha_core__DOT__W4;
    vlSelf->__PVT__sha_core__DOT__W5 = __Vdly__sha_core__DOT__W5;
    vlSelf->__PVT__sha_core__DOT__W6 = __Vdly__sha_core__DOT__W6;
    vlSelf->__PVT__sha_core__DOT__W7 = __Vdly__sha_core__DOT__W7;
    vlSelf->__PVT__sha_core__DOT__W8 = __Vdly__sha_core__DOT__W8;
    vlSelf->__PVT__sha_core__DOT__W10 = __Vdly__sha_core__DOT__W10;
    vlSelf->__PVT__sha_core__DOT__W11 = __Vdly__sha_core__DOT__W11;
    vlSelf->__PVT__sha_core__DOT__W12 = __Vdly__sha_core__DOT__W12;
    vlSelf->__PVT__sha_core__DOT__W13 = __Vdly__sha_core__DOT__W13;
    vlSelf->__PVT__sha_core__DOT__H0 = __Vdly__sha_core__DOT__H0;
    vlSelf->__PVT__sha_core__DOT__H1 = __Vdly__sha_core__DOT__H1;
    vlSelf->__PVT__sha_core__DOT__H2 = __Vdly__sha_core__DOT__H2;
    vlSelf->__PVT__sha_core__DOT__H3 = __Vdly__sha_core__DOT__H3;
    vlSelf->__PVT__sha_core__DOT__H4 = __Vdly__sha_core__DOT__H4;
    vlSelf->__PVT__sha_core__DOT__H5 = __Vdly__sha_core__DOT__H5;
    vlSelf->__PVT__sha_core__DOT__H6 = __Vdly__sha_core__DOT__H6;
    vlSelf->__PVT__sha_core__DOT__H7 = __Vdly__sha_core__DOT__H7;
    vlSelf->__PVT__sha_core__DOT__round = __Vdly__sha_core__DOT__round;
    vlSelf->__PVT__sha_core__DOT__W1 = __Vdly__sha_core__DOT__W1;
    vlSelf->__PVT__sha_core__DOT__W9 = __Vdly__sha_core__DOT__W9;
    vlSelf->__PVT__sha_core__DOT__W14 = __Vdly__sha_core__DOT__W14;
    vlSelf->__PVT__sha_core__DOT__D = __Vdly__sha_core__DOT__D;
    vlSelf->__PVT__sha_core__DOT__A = __Vdly__sha_core__DOT__A;
    vlSelf->__PVT__sha_core__DOT__B = __Vdly__sha_core__DOT__B;
    vlSelf->__PVT__sha_core__DOT__C = __Vdly__sha_core__DOT__C;
    vlSelf->__PVT__sha_core__DOT__Wt = __Vdly__sha_core__DOT__Wt;
    vlSelf->__PVT__sha_core__DOT__E = __Vdly__sha_core__DOT__E;
    vlSelf->__PVT__sha_core__DOT__F = __Vdly__sha_core__DOT__F;
    vlSelf->__PVT__sha_core__DOT__G = __Vdly__sha_core__DOT__G;
    vlSelf->__PVT__sha_core__DOT__H = __Vdly__sha_core__DOT__H;
    vlSelf->__PVT__sha_core__DOT__read_counter = __Vdly__sha_core__DOT__read_counter;
    vlSelf->__PVT__sha_core__DOT__round_plus_1 = (0x7fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__sha_core__DOT__round)));
    vlSelf->__PVT__sha_core__DOT__next_Wt = ((((vlSelf->__PVT__sha_core__DOT__W14 
                                                << 0xfU) 
                                               | (vlSelf->__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                              ^ (((vlSelf->__PVT__sha_core__DOT__W14 
                                                   << 0xdU) 
                                                  | (vlSelf->__PVT__sha_core__DOT__W14 
                                                     >> 0x13U)) 
                                                 ^ 
                                                 VL_SHIFTR_III(32,32,32, vlSelf->__PVT__sha_core__DOT__W14, 0xaU))) 
                                             + (vlSelf->__PVT__sha_core__DOT__W9 
                                                + (
                                                   (((vlSelf->__PVT__sha_core__DOT__W1 
                                                      << 0x19U) 
                                                     | (vlSelf->__PVT__sha_core__DOT__W1 
                                                        >> 7U)) 
                                                    ^ 
                                                    (((vlSelf->__PVT__sha_core__DOT__W1 
                                                       << 0xeU) 
                                                      | (vlSelf->__PVT__sha_core__DOT__W1 
                                                         >> 0x12U)) 
                                                     ^ 
                                                     VL_SHIFTR_III(32,32,32, vlSelf->__PVT__sha_core__DOT__W1, 3U))) 
                                                   + vlSelf->__PVT__sha_core__DOT__W0)));
    vlSelf->__PVT__sha_core__DOT__SHA256_result[0U] 
        = vlSelf->__PVT__sha_core__DOT__H;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[1U] 
        = vlSelf->__PVT__sha_core__DOT__G;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[2U] 
        = vlSelf->__PVT__sha_core__DOT__F;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[3U] 
        = vlSelf->__PVT__sha_core__DOT__E;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[4U] 
        = vlSelf->__PVT__sha_core__DOT__D;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[5U] 
        = vlSelf->__PVT__sha_core__DOT__C;
    vlSelf->__PVT__sha_core__DOT__SHA256_result[6U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__sha_core__DOT__A)) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__sha_core__DOT__B))));
    vlSelf->__PVT__sha_core__DOT__SHA256_result[7U] 
        = (IData)(((((QData)((IData)(vlSelf->__PVT__sha_core__DOT__A)) 
                     << 0x20U) | (QData)((IData)(vlSelf->__PVT__sha_core__DOT__B))) 
                   >> 0x20U));
    vlSelf->__PVT__sha_core__DOT__T1_32 = (vlSelf->__PVT__sha_core__DOT__H 
                                           + ((((vlSelf->__PVT__sha_core__DOT__E 
                                                 << 0x1aU) 
                                                | (vlSelf->__PVT__sha_core__DOT__E 
                                                   >> 6U)) 
                                               ^ ((
                                                   (vlSelf->__PVT__sha_core__DOT__E 
                                                    << 0x15U) 
                                                   | (vlSelf->__PVT__sha_core__DOT__E 
                                                      >> 0xbU)) 
                                                  ^ 
                                                  ((vlSelf->__PVT__sha_core__DOT__E 
                                                    << 7U) 
                                                   | (vlSelf->__PVT__sha_core__DOT__E 
                                                      >> 0x19U)))) 
                                              + (((vlSelf->__PVT__sha_core__DOT__E 
                                                   & vlSelf->__PVT__sha_core__DOT__F) 
                                                  ^ 
                                                  ((~ vlSelf->__PVT__sha_core__DOT__E) 
                                                   & vlSelf->__PVT__sha_core__DOT__G)) 
                                                 + 
                                                 (vlSelf->__PVT__sha_core__DOT__Kt 
                                                  + vlSelf->__PVT__sha_core__DOT__Wt))));
    vlSelf->__PVT__sha_core__DOT__next_E = (vlSelf->__PVT__sha_core__DOT__D 
                                            + vlSelf->__PVT__sha_core__DOT__T1_32);
    vlSelf->__PVT__sha_core__DOT__next_A = (vlSelf->__PVT__sha_core__DOT__T1_32 
                                            + ((((vlSelf->__PVT__sha_core__DOT__A 
                                                  << 0x1eU) 
                                                 | (vlSelf->__PVT__sha_core__DOT__A 
                                                    >> 2U)) 
                                                ^ (
                                                   ((vlSelf->__PVT__sha_core__DOT__A 
                                                     << 0x13U) 
                                                    | (vlSelf->__PVT__sha_core__DOT__A 
                                                       >> 0xdU)) 
                                                   ^ 
                                                   ((vlSelf->__PVT__sha_core__DOT__A 
                                                     << 0xaU) 
                                                    | (vlSelf->__PVT__sha_core__DOT__A 
                                                       >> 0x16U)))) 
                                               + ((vlSelf->__PVT__sha_core__DOT__A 
                                                   & vlSelf->__PVT__sha_core__DOT__B) 
                                                  ^ 
                                                  ((vlSelf->__PVT__sha_core__DOT__B 
                                                    & vlSelf->__PVT__sha_core__DOT__C) 
                                                   ^ 
                                                   (vlSelf->__PVT__sha_core__DOT__A 
                                                    & vlSelf->__PVT__sha_core__DOT__C)))));
    vlSelf->__PVT__sha_core__DOT__busy = __Vdly__sha_core__DOT__busy;
}
