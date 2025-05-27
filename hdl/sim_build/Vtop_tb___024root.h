// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtop_tb_doublesha;


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_tb_doublesha* __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE;
    Vtop_tb_doublesha* __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE;
    Vtop_tb_doublesha* __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE;
    Vtop_tb_doublesha* __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE;
    Vtop_tb_doublesha* __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE;
    Vtop_tb_doublesha* __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE;
    Vtop_tb_doublesha* __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE;
    Vtop_tb_doublesha* __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE;
    Vtop_tb_doublesha* __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE;
    Vtop_tb_doublesha* __PVT__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ top_tb__DOT__CLK_100MHZ;
    CData/*0:0*/ top_tb__DOT__TOP__DOT__rst_i;
    CData/*0:0*/ top_tb__DOT__UART_RXD;
    CData/*0:0*/ top_tb__DOT__UART_TXD;
    CData/*7:0*/ top_tb__DOT__read_byte;
    CData/*3:0*/ top_tb__DOT__bits_read;
    CData/*0:0*/ top_tb__DOT__TOP__DOT__finished_recieving;
    CData/*0:0*/ top_tb__DOT__TOP__DOT__finished_sending;
    CData/*7:0*/ top_tb__DOT__TOP__DOT__read_bytes_passed;
    CData/*2:0*/ top_tb__DOT__TOP__DOT__write_bytes_passed;
    CData/*7:0*/ top_tb__DOT__TOP__DOT__tx_byte;
    CData/*0:0*/ top_tb__DOT__TOP__DOT__second_tick;
    CData/*2:0*/ top_tb__DOT__TOP__DOT__FSM__DOT__state;
    CData/*0:0*/ top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst;
    CData/*0:0*/ top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h1a24ae08__0;
    CData/*0:0*/ top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data_R;
    CData/*0:0*/ top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data;
    CData/*7:0*/ top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count;
    CData/*2:0*/ top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Bit_Index;
    CData/*7:0*/ top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Byte;
    CData/*0:0*/ top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_DV;
    CData/*2:0*/ top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main;
    CData/*2:0*/ top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main;
    CData/*7:0*/ top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count;
    CData/*2:0*/ top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Bit_Index;
    CData/*7:0*/ top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Data;
    CData/*0:0*/ top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Done;
    CData/*0:0*/ top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Active;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__CLK_100MHZ__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__TOP__DOT__rst_i__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top_tb__DOT__nonce;
    IData/*31:0*/ top_tb__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ top_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b;
    IData/*31:0*/ top_tb__DOT__unnamedblk5__DOT__i;
    IData/*31:0*/ top_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b;
    IData/*31:0*/ top_tb__DOT__unnamedblk7__DOT__i;
    IData/*31:0*/ top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b;
    VlWide<19>/*607:0*/ top_tb__DOT__TOP__DOT__block_info;
    VlWide<8>/*255:0*/ top_tb__DOT__TOP__DOT__best_hash;
    IData/*31:0*/ top_tb__DOT__TOP__DOT__best_hash_nonce;
    IData/*26:0*/ top_tb__DOT__TOP__DOT__TIMER__DOT__cycles;
    VlWide<8>/*255:0*/ top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse;
    IData/*31:0*/ top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk1__DOT__j;
    IData/*31:0*/ top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b;
    IData/*31:0*/ top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk5__DOT__i;
    IData/*31:0*/ top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk6__DOT__k;
    IData/*31:0*/ top_tb__DOT__TOP__DOT__HASHCORE__DOT____Vlvbound_h50a59ce7__0;
    IData/*26:0*/ __Vdly__top_tb__DOT__TOP__DOT__TIMER__DOT__cycles;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 10> top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces;
    VlUnpacked<VlWide<8>/*255:0*/, 10> top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes;
    VlUnpacked<VlWide<8>/*255:0*/, 10> top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes;
    VlUnpacked<CData/*0:0*/, 10> top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
