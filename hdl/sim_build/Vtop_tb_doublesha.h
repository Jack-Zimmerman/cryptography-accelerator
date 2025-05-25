// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB_DOUBLESHA_H_
#define VERILATED_VTOP_TB_DOUBLESHA_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb_doublesha final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_OUT8(complete,0,0);
    CData/*2:0*/ __PVT__cmd_i;
    CData/*0:0*/ __PVT__cmd_w_i;
    CData/*4:0*/ __PVT__hash_index;
    CData/*0:0*/ __PVT__second_cycle;
    CData/*3:0*/ __PVT__delay_left;
    CData/*4:0*/ __PVT__internal_index;
    CData/*3:0*/ __PVT__state;
    CData/*3:0*/ __PVT__sha_core__DOT__cmd;
    CData/*6:0*/ __PVT__sha_core__DOT__round;
    CData/*6:0*/ __PVT__sha_core__DOT__round_plus_1;
    CData/*2:0*/ __PVT__sha_core__DOT__read_counter;
    CData/*0:0*/ __PVT__sha_core__DOT__busy;
    VL_INW(block_info,639,0,20);
    VL_OUTW(hash,255,0,8);
    IData/*31:0*/ __PVT__text_i;
    VlWide<16>/*511:0*/ __PVT__tmp_i;
    IData/*31:0*/ __PVT__tmp;
    VlWide<8>/*255:0*/ __PVT__first_hash;
    IData/*31:0*/ __PVT__text_o;
    IData/*31:0*/ __PVT__sha_core__DOT__H0;
    IData/*31:0*/ __PVT__sha_core__DOT__H1;
    IData/*31:0*/ __PVT__sha_core__DOT__H2;
    IData/*31:0*/ __PVT__sha_core__DOT__H3;
    IData/*31:0*/ __PVT__sha_core__DOT__H4;
    IData/*31:0*/ __PVT__sha_core__DOT__H5;
    IData/*31:0*/ __PVT__sha_core__DOT__H6;
    IData/*31:0*/ __PVT__sha_core__DOT__H7;
    IData/*31:0*/ __PVT__sha_core__DOT__W0;
    IData/*31:0*/ __PVT__sha_core__DOT__W1;
    IData/*31:0*/ __PVT__sha_core__DOT__W2;
    IData/*31:0*/ __PVT__sha_core__DOT__W3;
    IData/*31:0*/ __PVT__sha_core__DOT__W4;
    IData/*31:0*/ __PVT__sha_core__DOT__W5;
    IData/*31:0*/ __PVT__sha_core__DOT__W6;
    IData/*31:0*/ __PVT__sha_core__DOT__W7;
    IData/*31:0*/ __PVT__sha_core__DOT__W8;
    IData/*31:0*/ __PVT__sha_core__DOT__W9;
    IData/*31:0*/ __PVT__sha_core__DOT__W10;
    IData/*31:0*/ __PVT__sha_core__DOT__W11;
    IData/*31:0*/ __PVT__sha_core__DOT__W12;
    IData/*31:0*/ __PVT__sha_core__DOT__W13;
    IData/*31:0*/ __PVT__sha_core__DOT__W14;
    IData/*31:0*/ __PVT__sha_core__DOT__Wt;
    IData/*31:0*/ __PVT__sha_core__DOT__Kt;
    IData/*31:0*/ __PVT__sha_core__DOT__A;
    IData/*31:0*/ __PVT__sha_core__DOT__B;
    IData/*31:0*/ __PVT__sha_core__DOT__C;
    IData/*31:0*/ __PVT__sha_core__DOT__D;
    IData/*31:0*/ __PVT__sha_core__DOT__E;
    IData/*31:0*/ __PVT__sha_core__DOT__F;
    IData/*31:0*/ __PVT__sha_core__DOT__G;
    IData/*31:0*/ __PVT__sha_core__DOT__H;
    IData/*31:0*/ __PVT__sha_core__DOT__T1_32;
    IData/*31:0*/ __PVT__sha_core__DOT__next_Wt;
    IData/*31:0*/ __PVT__sha_core__DOT__next_E;
    IData/*31:0*/ __PVT__sha_core__DOT__next_A;
    VlWide<8>/*255:0*/ __PVT__sha_core__DOT__SHA256_result;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb_doublesha(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb_doublesha();
    VL_UNCOPYABLE(Vtop_tb_doublesha);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
