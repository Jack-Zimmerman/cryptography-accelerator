// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdoublesha_tb__Syms.h"


void Vdoublesha_tb___024root__trace_chg_0_sub_0(Vdoublesha_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdoublesha_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root__trace_chg_0\n"); );
    // Init
    Vdoublesha_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdoublesha_tb___024root*>(voidSelf);
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdoublesha_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdoublesha_tb___024root__trace_chg_0_sub_0(Vdoublesha_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->doublesha_tb__DOT__complete));
        bufp->chgWData(oldp+1,(vlSelf->doublesha_tb__DOT__hash),256);
        bufp->chgIData(oldp+9,(vlSelf->doublesha_tb__DOT__DUT__DOT__text_i),32);
        bufp->chgWData(oldp+10,(vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i),512);
        bufp->chgWData(oldp+26,(vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash),256);
        bufp->chgCData(oldp+34,(vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_i),3);
        bufp->chgBit(oldp+35,(vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_w_i));
        bufp->chgIData(oldp+36,(vlSelf->doublesha_tb__DOT__DUT__DOT__text_o),32);
        bufp->chgCData(oldp+37,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+38,(vlSelf->doublesha_tb__DOT__DUT__DOT__second_cycle));
        bufp->chgCData(oldp+39,(vlSelf->doublesha_tb__DOT__DUT__DOT__delay_left),4);
        bufp->chgCData(oldp+40,(vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index),5);
        bufp->chgCData(oldp+41,(vlSelf->doublesha_tb__DOT__DUT__DOT__state),4);
        bufp->chgCData(oldp+42,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+43,((0x7fU & ((IData)(1U) 
                                          + (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+44,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+45,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+46,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+47,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+48,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+49,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+50,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+51,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+52,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+53,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+54,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+55,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+56,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+57,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+58,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+59,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+60,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+61,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+62,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+63,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+64,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+65,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+66,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+67,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+68,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+69,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+70,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+71,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+72,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+73,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+74,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+75,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+76,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+77,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+78,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy));
        bufp->chgIData(oldp+79,(((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                  & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F) 
                                 ^ ((~ vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E) 
                                    & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+80,(((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                  & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B) 
                                 ^ ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                                     & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C) 
                                    ^ (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                       & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+81,((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                   << 0x1eU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                                >> 2U)) 
                                 ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                      << 0x13U) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                                   >> 0xdU)) 
                                    ^ ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                        >> 0x16U))))),32);
        bufp->chgIData(oldp+82,((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                   << 0x1aU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                                >> 6U)) 
                                 ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                      << 0x15U) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                                   >> 0xbU)) 
                                    ^ ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                        << 7U) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                                  >> 0x19U))))),32);
        bufp->chgIData(oldp+83,((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                   << 0x19U) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                                >> 7U)) 
                                 ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                      << 0xeU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                                  >> 0x12U)) 
                                    ^ VL_SHIFTR_III(32,32,32, vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+84,((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                   << 0xfU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                               >> 0x11U)) 
                                 ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                      << 0xdU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                                  >> 0x13U)) 
                                    ^ VL_SHIFTR_III(32,32,32, vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+85,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+86,(((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                       << 0xaU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                                   >> 0x16U)))) 
                                 + ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                     & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B) 
                                    ^ ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                                        & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C) 
                                       ^ (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                          & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+87,(((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14, 0xaU))) 
                                 + (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9 
                                    + ((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                          << 0x19U) 
                                         | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                            >> 7U)) 
                                        ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                             << 0xeU) 
                                            | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                               >> 0x12U)) 
                                           ^ VL_SHIFTR_III(32,32,32, vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1, 3U))) 
                                       + vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+88,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+89,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+90,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result),256);
    }
    bufp->chgBit(oldp+98,(vlSelf->doublesha_tb__DOT__clk_i));
}

void Vdoublesha_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root__trace_cleanup\n"); );
    // Init
    Vdoublesha_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdoublesha_tb___024root*>(voidSelf);
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
