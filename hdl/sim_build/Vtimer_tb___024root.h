// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtimer_tb.h for the primary calling header

#ifndef VERILATED_VTIMER_TB___024ROOT_H_
#define VERILATED_VTIMER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtimer_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtimer_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ timer_tb__DOT__clk;
    CData/*0:0*/ timer_tb__DOT__rst_i;
    CData/*0:0*/ timer_tb__DOT__second_tick;
    CData/*0:0*/ __Vtrigprevexpr___TOP__timer_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__timer_tb__DOT__rst_i__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ timer_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ timer_tb__DOT__unnamedblk2__DOT__i;
    IData/*26:0*/ timer_tb__DOT__DUT__DOT__cycles;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtimer_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtimer_tb___024root(Vtimer_tb__Syms* symsp, const char* v__name);
    ~Vtimer_tb___024root();
    VL_UNCOPYABLE(Vtimer_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
