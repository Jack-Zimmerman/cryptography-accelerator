// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb_doublesha.h"

VL_ATTR_COLD void Vtop_tb_doublesha___eval_static__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE(Vtop_tb_doublesha* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_doublesha___eval_static__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE\n"); );
    // Body
    vlSelf->__PVT__cmd_i = 2U;
    vlSelf->__PVT__cmd_w_i = 1U;
    vlSelf->__PVT__hash_index = 0U;
    vlSelf->__PVT__second_cycle = 0U;
    vlSelf->__PVT__delay_left = 0U;
    vlSelf->__PVT__internal_index = 0U;
    vlSelf->__PVT__state = 0U;
}

VL_ATTR_COLD void Vtop_tb_doublesha___stl_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE__0(Vtop_tb_doublesha* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_doublesha___stl_sequent__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE__0\n"); );
    // Body
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
}

VL_ATTR_COLD void Vtop_tb_doublesha___ctor_var_reset(Vtop_tb_doublesha* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_doublesha___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(640, vlSelf->block_info);
    vlSelf->complete = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->hash);
    vlSelf->__PVT__text_i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->__PVT__tmp_i);
    vlSelf->__PVT__tmp = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->__PVT__first_hash);
    vlSelf->__PVT__cmd_i = VL_RAND_RESET_I(3);
    vlSelf->__PVT__cmd_w_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__hash_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__text_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__second_cycle = VL_RAND_RESET_I(1);
    vlSelf->__PVT__delay_left = VL_RAND_RESET_I(4);
    vlSelf->__PVT__internal_index = VL_RAND_RESET_I(5);
    vlSelf->__PVT__state = VL_RAND_RESET_I(4);
    vlSelf->__PVT__sha_core__DOT__cmd = VL_RAND_RESET_I(4);
    vlSelf->__PVT__sha_core__DOT__round = VL_RAND_RESET_I(7);
    vlSelf->__PVT__sha_core__DOT__round_plus_1 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__sha_core__DOT__read_counter = VL_RAND_RESET_I(3);
    vlSelf->__PVT__sha_core__DOT__H0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__H1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__H2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__H3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__H4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__H5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__H6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__H7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__W0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__W1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__W2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__W3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__W4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__W5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__W6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__W7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__W8 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__W9 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__W10 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__W11 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__W12 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__W13 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__W14 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__Wt = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__Kt = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__D = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__E = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__F = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__G = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__H = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sha_core__DOT__T1_32 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__next_Wt = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__next_E = VL_RAND_RESET_I(32);
    vlSelf->__PVT__sha_core__DOT__next_A = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->__PVT__sha_core__DOT__SHA256_result);
}
