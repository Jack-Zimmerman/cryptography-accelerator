// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdoublesha_tb.h for the primary calling header

#ifndef VERILATED_VDOUBLESHA_TB___024ROOT_H_
#define VERILATED_VDOUBLESHA_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdoublesha_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdoublesha_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ doublesha_tb__DOT__clk_i;
    CData/*0:0*/ doublesha_tb__DOT__rst_i;
    CData/*0:0*/ doublesha_tb__DOT__complete;
    CData/*2:0*/ doublesha_tb__DOT__DUT__DOT__cmd_i;
    CData/*0:0*/ doublesha_tb__DOT__DUT__DOT__cmd_w_i;
    CData/*0:0*/ doublesha_tb__DOT__DUT__DOT__second_cycle;
    CData/*3:0*/ doublesha_tb__DOT__DUT__DOT__delay_left;
    CData/*4:0*/ doublesha_tb__DOT__DUT__DOT__internal_index;
    CData/*3:0*/ doublesha_tb__DOT__DUT__DOT__state;
    CData/*3:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd;
    CData/*6:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round;
    CData/*6:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round_plus_1;
    CData/*2:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter;
    CData/*0:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__doublesha_tb__DOT__clk_i__0;
    CData/*0:0*/ __VactContinue;
    VlWide<8>/*255:0*/ doublesha_tb__DOT__hash;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__text_i;
    VlWide<16>/*511:0*/ doublesha_tb__DOT__DUT__DOT__tmp_i;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__tmp;
    VlWide<32>/*1023:0*/ doublesha_tb__DOT__DUT__DOT__message;
    VlWide<8>/*255:0*/ doublesha_tb__DOT__DUT__DOT__first_hash;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__text_o;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H0;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H1;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H2;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H3;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H4;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H5;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H6;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H7;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W0;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W2;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W3;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W4;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W5;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W6;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W7;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W8;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W10;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W11;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W12;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W13;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Kt;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__T1_32;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_Wt;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E;
    IData/*31:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A;
    VlWide<8>/*255:0*/ doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdoublesha_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdoublesha_tb___024root(Vdoublesha_tb__Syms* symsp, const char* v__name);
    ~Vdoublesha_tb___024root();
    VL_UNCOPYABLE(Vdoublesha_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
