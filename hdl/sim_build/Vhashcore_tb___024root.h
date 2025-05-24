// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhashcore_tb.h for the primary calling header

#ifndef VERILATED_VHASHCORE_TB___024ROOT_H_
#define VERILATED_VHASHCORE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vhashcore_tb_doublesha;


class Vhashcore_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhashcore_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vhashcore_tb_doublesha* __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha* __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha* __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha* __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha* __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha* __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha* __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha* __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha* __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha* __PVT__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ hashcore_tb__DOT__clk;
    CData/*0:0*/ hashcore_tb__DOT__start;
    CData/*0:0*/ hashcore_tb__DOT__enable;
    CData/*0:0*/ hashcore_tb__DOT__rst_i;
    CData/*0:0*/ hashcore_tb__DOT__DUT__DOT__rst;
    CData/*0:0*/ hashcore_tb__DOT__DUT__DOT____Vlvbound_h1a24ae08__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__hashcore_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    VlWide<8>/*255:0*/ hashcore_tb__DOT__best_hash;
    IData/*31:0*/ hashcore_tb__DOT__best_hash_nonce;
    IData/*31:0*/ hashcore_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ hashcore_tb__DOT__unnamedblk2__DOT__i;
    VlWide<8>/*255:0*/ hashcore_tb__DOT__DUT__DOT__best_hash_reverse;
    IData/*31:0*/ hashcore_tb__DOT__DUT__DOT__unnamedblk1__DOT__j;
    IData/*31:0*/ hashcore_tb__DOT__DUT__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
    IData/*31:0*/ hashcore_tb__DOT__DUT__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ hashcore_tb__DOT__DUT__DOT__unnamedblk5__DOT__i;
    IData/*31:0*/ hashcore_tb__DOT__DUT__DOT__unnamedblk6__DOT__k;
    IData/*31:0*/ hashcore_tb__DOT__DUT__DOT____Vlvbound_h50a59ce7__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 10> hashcore_tb__DOT__DUT__DOT__nonces;
    VlUnpacked<VlWide<8>/*255:0*/, 10> hashcore_tb__DOT__DUT__DOT__output_hashes;
    VlUnpacked<VlWide<8>/*255:0*/, 10> hashcore_tb__DOT__DUT__DOT__reverse_output_hashes;
    VlUnpacked<CData/*0:0*/, 10> hashcore_tb__DOT__DUT__DOT__completes;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhashcore_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhashcore_tb___024root(Vhashcore_tb__Syms* symsp, const char* v__name);
    ~Vhashcore_tb___024root();
    VL_UNCOPYABLE(Vhashcore_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
