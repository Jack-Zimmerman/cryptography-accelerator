// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

void Vtop_tb___024root___eval_act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__0(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__top_tb__DOT__TOP__DOT__TIMER__DOT__cycles 
        = vlSelf->top_tb__DOT__TOP__DOT__TIMER__DOT__cycles;
}

extern const VlWide<8>/*255:0*/ Vtop_tb__ConstPool__CONST_h5b979007_0;

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__1(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*2:0*/ __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main;
    __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main = 0;
    CData/*7:0*/ __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count;
    __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count = 0;
    CData/*2:0*/ __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main;
    __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main = 0;
    CData/*7:0*/ __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count;
    __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count = 0;
    VlWide<19>/*607:0*/ __Vtemp_2;
    // Body
    __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count 
        = vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count;
    __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main 
        = vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main;
    __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count 
        = vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count;
    __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main 
        = vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main;
    if ((1U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))) {
        if (vlSelf->top_tb__DOT__TOP__DOT__rst_i) {
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk4__DOT__i = 0xaU;
        }
    }
    if ((0U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))) {
        if (vlSelf->top_tb__DOT__TOP__DOT__finished_recieving) {
            vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))) {
        if (vlSelf->top_tb__DOT__TOP__DOT__second_tick) {
            vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))) {
        if (vlSelf->top_tb__DOT__TOP__DOT__finished_sending) {
            vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state = 0U;
        }
    } else {
        vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state = 0U;
    }
    if ((0U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))) {
        vlSelf->top_tb__DOT__TOP__DOT__finished_sending = 0U;
        if (((IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_DV) 
             | (0x4cU == (IData)(vlSelf->top_tb__DOT__TOP__DOT__read_bytes_passed)))) {
            if (VL_UNLIKELY((0x4cU == (IData)(vlSelf->top_tb__DOT__TOP__DOT__read_bytes_passed)))) {
                vlSelf->top_tb__DOT__TOP__DOT__finished_recieving = 1U;
                VL_WRITEF("block_info: %x\n",608,vlSelf->top_tb__DOT__TOP__DOT__block_info.data());
                vlSelf->top_tb__DOT__TOP__DOT__read_bytes_passed = 0U;
            } else {
                vlSelf->top_tb__DOT__TOP__DOT__read_bytes_passed 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_tb__DOT__TOP__DOT__read_bytes_passed)));
                vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U] 
                    = ((0xffffffU & vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U]) 
                       | ((IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Byte) 
                          << 0x18U));
                if ((0x4cU != (IData)(vlSelf->top_tb__DOT__TOP__DOT__read_bytes_passed))) {
                    VL_SHIFTR_WWI(608,608,32, __Vtemp_2, vlSelf->top_tb__DOT__TOP__DOT__block_info, 8U);
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[0U] 
                        = __Vtemp_2[0U];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[1U] 
                        = __Vtemp_2[1U];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[2U] 
                        = __Vtemp_2[2U];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[3U] 
                        = __Vtemp_2[3U];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[4U] 
                        = __Vtemp_2[4U];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[5U] 
                        = __Vtemp_2[5U];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[6U] 
                        = __Vtemp_2[6U];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[7U] 
                        = __Vtemp_2[7U];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[8U] 
                        = __Vtemp_2[8U];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[9U] 
                        = __Vtemp_2[9U];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU] 
                        = __Vtemp_2[0xaU];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU] 
                        = __Vtemp_2[0xbU];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU] 
                        = __Vtemp_2[0xcU];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU] 
                        = __Vtemp_2[0xdU];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU] 
                        = __Vtemp_2[0xeU];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU] 
                        = __Vtemp_2[0xfU];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U] 
                        = __Vtemp_2[0x10U];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U] 
                        = __Vtemp_2[0x11U];
                    vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U] 
                        = __Vtemp_2[0x12U];
                }
            }
        }
    } else if ((2U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))) {
        vlSelf->top_tb__DOT__TOP__DOT__finished_recieving = 0U;
        if (((IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Done) 
             | (0U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__write_bytes_passed)))) {
            if (VL_UNLIKELY((4U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__write_bytes_passed)))) {
                VL_WRITEF("Nonce for hash: %x\n",256,
                          vlSelf->top_tb__DOT__TOP__DOT__best_hash.data());
                vlSelf->top_tb__DOT__TOP__DOT__finished_sending = 1U;
                vlSelf->top_tb__DOT__TOP__DOT__write_bytes_passed = 0U;
            } else {
                vlSelf->top_tb__DOT__TOP__DOT__write_bytes_passed 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->top_tb__DOT__TOP__DOT__write_bytes_passed)));
                vlSelf->top_tb__DOT__TOP__DOT__tx_byte 
                    = (0xffU & vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce);
                vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce 
                    = VL_SHIFTR_III(32,32,32, vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce, 8U);
            }
        }
    }
    if ((1U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))) {
        if (vlSelf->top_tb__DOT__TOP__DOT__rst_i) {
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[0U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[0U];
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[1U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[1U];
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[2U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[2U];
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[3U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[3U];
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[4U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[4U];
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[5U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[5U];
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[6U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[6U];
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[7U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[7U];
            vlSelf->top_tb__DOT__TOP__DOT__best_hash[0U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[0U];
            vlSelf->top_tb__DOT__TOP__DOT__best_hash[1U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[1U];
            vlSelf->top_tb__DOT__TOP__DOT__best_hash[2U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[2U];
            vlSelf->top_tb__DOT__TOP__DOT__best_hash[3U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[3U];
            vlSelf->top_tb__DOT__TOP__DOT__best_hash[4U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[4U];
            vlSelf->top_tb__DOT__TOP__DOT__best_hash[5U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[5U];
            vlSelf->top_tb__DOT__TOP__DOT__best_hash[6U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[6U];
            vlSelf->top_tb__DOT__TOP__DOT__best_hash[7U] 
                = Vtop_tb__ConstPool__CONST_h5b979007_0[7U];
            vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce = 0U;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[0U] = 0U;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[1U] = 1U;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[2U] = 2U;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[3U] = 3U;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[4U] = 4U;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[5U] = 5U;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[6U] = 6U;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[7U] = 7U;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[8U] = 8U;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[9U] = 9U;
        } else if (vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst) {
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst = 0U;
        } else if (vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes
                   [0U]) {
            if (VL_LT_W(8, vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                        [0U], vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse)) {
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [0U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [0U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [0U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [0U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [0U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [0U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [0U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [0U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [0U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [0U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [0U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [0U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [0U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [0U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [0U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [0U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                    [0U];
            }
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk5__DOT__i = 0xaU;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk6__DOT__k = 0xaU;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst = 1U;
            if (VL_LT_W(8, vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                        [1U], vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse)) {
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [1U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [1U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [1U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [1U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [1U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [1U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [1U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [1U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [1U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [1U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [1U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [1U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [1U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [1U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [1U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [1U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                    [1U];
            }
            if (VL_LT_W(8, vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                        [2U], vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse)) {
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [2U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [2U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [2U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [2U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [2U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [2U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [2U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [2U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [2U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [2U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [2U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [2U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [2U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [2U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [2U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [2U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                    [2U];
            }
            if (VL_LT_W(8, vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                        [3U], vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse)) {
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [3U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [3U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [3U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [3U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [3U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [3U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [3U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [3U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [3U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [3U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [3U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [3U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [3U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [3U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [3U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [3U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                    [3U];
            }
            if (VL_LT_W(8, vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                        [4U], vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse)) {
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [4U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [4U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [4U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [4U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [4U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [4U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [4U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [4U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [4U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [4U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [4U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [4U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [4U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [4U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [4U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [4U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                    [4U];
            }
            if (VL_LT_W(8, vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                        [5U], vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse)) {
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [5U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [5U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [5U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [5U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [5U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [5U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [5U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [5U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [5U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [5U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [5U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [5U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [5U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [5U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [5U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [5U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                    [5U];
            }
            if (VL_LT_W(8, vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                        [6U], vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse)) {
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [6U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [6U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [6U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [6U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [6U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [6U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [6U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [6U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [6U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [6U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [6U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [6U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [6U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [6U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [6U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [6U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                    [6U];
            }
            if (VL_LT_W(8, vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                        [7U], vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse)) {
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [7U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [7U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [7U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [7U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [7U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [7U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [7U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [7U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [7U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [7U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [7U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [7U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [7U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [7U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [7U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [7U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                    [7U];
            }
            if (VL_LT_W(8, vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                        [8U], vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse)) {
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [8U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [8U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [8U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [8U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [8U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [8U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [8U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [8U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [8U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [8U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [8U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [8U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [8U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [8U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [8U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [8U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                    [8U];
            }
            if (VL_LT_W(8, vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                        [9U], vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse)) {
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [9U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [9U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [9U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [9U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [9U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [9U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [9U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes
                    [9U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[0U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [9U][0U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[1U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [9U][1U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[2U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [9U][2U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[3U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [9U][3U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[4U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [9U][4U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[5U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [9U][5U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[6U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [9U][6U];
                vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse[7U] 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes
                    [9U][7U];
                vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce 
                    = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                    [9U];
            }
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0 
                = ((IData)(0xaU) + vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                   [0U]);
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[0U] 
                = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0 
                = ((IData)(0xaU) + vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                   [1U]);
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[1U] 
                = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0 
                = ((IData)(0xaU) + vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                   [2U]);
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[2U] 
                = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0 
                = ((IData)(0xaU) + vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                   [3U]);
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[3U] 
                = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0 
                = ((IData)(0xaU) + vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                   [4U]);
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[4U] 
                = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0 
                = ((IData)(0xaU) + vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                   [5U]);
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[5U] 
                = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0 
                = ((IData)(0xaU) + vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                   [6U]);
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[6U] 
                = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0 
                = ((IData)(0xaU) + vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                   [7U]);
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[7U] 
                = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0 
                = ((IData)(0xaU) + vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                   [8U]);
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[8U] 
                = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0;
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0 
                = ((IData)(0xaU) + vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
                   [9U]);
            vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[9U] 
                = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0;
        }
    }
    if ((4U & (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main))) {
        if ((2U & (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main))) {
            __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main = 0U;
        } else if ((1U & (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main))) {
            __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main = 0U;
        } else {
            vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Done = 1U;
            __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main = 0U;
        }
    } else if ((2U & (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main))) {
        if ((1U & (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main))) {
            vlSelf->top_tb__DOT__UART_TXD = 1U;
            if (VL_LIKELY((0x13U > (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count)))) {
                __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count)));
                __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main = 3U;
            } else {
                VL_WRITEF("finished writing byte: %x\n",
                          8,vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Data);
                __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count = 0U;
                vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Done = 1U;
                __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main = 4U;
                vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Active = 0U;
            }
        } else {
            vlSelf->top_tb__DOT__UART_TXD = (1U & ((IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Data) 
                                                   >> (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Bit_Index)));
            if ((0x13U > (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count))) {
                __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count)));
                __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main = 2U;
            } else {
                __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count = 0U;
                if ((7U > (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Bit_Index))) {
                    vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Bit_Index 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Bit_Index)));
                    __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main = 2U;
                } else {
                    vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Bit_Index = 0U;
                    __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main = 3U;
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main))) {
        vlSelf->top_tb__DOT__UART_TXD = 0U;
        if ((0x13U > (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count))) {
            __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count)));
            __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main = 1U;
        } else {
            __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count = 0U;
            __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main = 2U;
        }
    } else {
        __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count = 0U;
        vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Bit_Index = 0U;
        vlSelf->top_tb__DOT__UART_TXD = 1U;
        vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Done = 0U;
        if ((2U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))) {
            vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Active = 1U;
            vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Data 
                = vlSelf->top_tb__DOT__TOP__DOT__tx_byte;
            __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main = 1U;
        } else {
            __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main = 0U;
        }
    }
    if ((4U & (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main))) {
        if ((2U & (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main))) {
            __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main = 0U;
        } else if ((1U & (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main))) {
            __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main = 0U;
        } else {
            __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main = 0U;
            vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_DV = 0U;
        }
    } else if ((2U & (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main))) {
        if ((1U & (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main))) {
            if ((0x13U > (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count))) {
                __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count)));
                __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main = 3U;
            } else {
                __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count = 0U;
                vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_DV = 1U;
                __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main = 4U;
            }
        } else if ((0x13U > (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count))) {
            __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count)));
            __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main = 2U;
        } else {
            __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count = 0U;
            vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Byte 
                = (((~ ((IData)(1U) << (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Bit_Index))) 
                    & (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Byte)) 
                   | (0xffU & ((IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data) 
                               << (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Bit_Index))));
            if ((7U > (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Bit_Index))) {
                vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Bit_Index 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Bit_Index)));
                __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main = 2U;
            } else {
                vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Bit_Index = 0U;
                __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main))) {
        if ((9U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count))) {
            if (vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data) {
                __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main = 0U;
            } else {
                __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count = 0U;
                __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main = 2U;
            }
        } else {
            __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count)));
            __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main = 1U;
        }
    } else {
        __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count = 0U;
        vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Bit_Index = 0U;
        vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_DV = 0U;
        __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main 
            = ((IData)(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data)
                ? 0U : 1U);
    }
    vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main 
        = __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main;
    vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count 
        = __Vdly__top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count;
    vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main 
        = __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main;
    vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count 
        = __Vdly__top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count;
    vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data 
        = vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data_R;
    vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data_R 
        = vlSelf->top_tb__DOT__UART_RXD;
}

VL_INLINE_OPT void Vtop_tb___024root___nba_sequent__TOP__3(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->top_tb__DOT__TOP__DOT__rst_i) {
        vlSelf->__Vdly__top_tb__DOT__TOP__DOT__TIMER__DOT__cycles = 0U;
        vlSelf->top_tb__DOT__TOP__DOT__second_tick = 0U;
    } else if ((1U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))) {
        if ((0x1869fU == vlSelf->top_tb__DOT__TOP__DOT__TIMER__DOT__cycles)) {
            vlSelf->top_tb__DOT__TOP__DOT__second_tick = 1U;
            vlSelf->__Vdly__top_tb__DOT__TOP__DOT__TIMER__DOT__cycles = 0U;
        } else {
            vlSelf->__Vdly__top_tb__DOT__TOP__DOT__TIMER__DOT__cycles 
                = (0x7ffffffU & ((IData)(1U) + vlSelf->top_tb__DOT__TOP__DOT__TIMER__DOT__cycles));
            vlSelf->top_tb__DOT__TOP__DOT__second_tick = 0U;
        }
    }
    vlSelf->top_tb__DOT__TOP__DOT__TIMER__DOT__cycles 
        = vlSelf->__Vdly__top_tb__DOT__TOP__DOT__TIMER__DOT__cycles;
}

void Vtop_tb___024root___timing_resume(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf);

bool Vtop_tb___024root___eval_phase__act(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop_tb___024root___timing_resume(vlSelf);
        Vtop_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtop_tb___024root___eval_nba(Vtop_tb___024root* vlSelf);

bool Vtop_tb___024root___eval_phase__nba(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__nba(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/top_tb.sv", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/top_tb.sv", 6, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop_tb___024root___eval_debug_assertions(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
