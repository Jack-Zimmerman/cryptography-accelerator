// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_tb___024root__trace_chg_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<20>/*639:0*/ __Vtemp_1;
    VlWide<20>/*639:0*/ __Vtemp_2;
    VlWide<20>/*639:0*/ __Vtemp_3;
    VlWide<20>/*639:0*/ __Vtemp_4;
    VlWide<20>/*639:0*/ __Vtemp_5;
    VlWide<20>/*639:0*/ __Vtemp_6;
    VlWide<20>/*639:0*/ __Vtemp_7;
    VlWide<20>/*639:0*/ __Vtemp_8;
    VlWide<20>/*639:0*/ __Vtemp_9;
    VlWide<20>/*639:0*/ __Vtemp_10;
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->top_tb__DOT__CLK_100MHZ));
        bufp->chgBit(oldp+1,(vlSelf->top_tb__DOT__UART_RXD));
        bufp->chgCData(oldp+2,(vlSelf->top_tb__DOT__read_byte),8);
        bufp->chgIData(oldp+3,(vlSelf->top_tb__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+4,(vlSelf->top_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b),32);
        bufp->chgIData(oldp+5,(vlSelf->top_tb__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+6,(vlSelf->top_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+7,((2U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))));
        bufp->chgBit(oldp+8,((0U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))));
        bufp->chgBit(oldp+9,((1U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))));
        bufp->chgCData(oldp+10,(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state),3);
        bufp->chgIData(oldp+11,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[0]),32);
        bufp->chgIData(oldp+12,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[1]),32);
        bufp->chgIData(oldp+13,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[2]),32);
        bufp->chgIData(oldp+14,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[3]),32);
        bufp->chgIData(oldp+15,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[4]),32);
        bufp->chgIData(oldp+16,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[5]),32);
        bufp->chgIData(oldp+17,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[6]),32);
        bufp->chgIData(oldp+18,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[7]),32);
        bufp->chgIData(oldp+19,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[8]),32);
        bufp->chgIData(oldp+20,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[9]),32);
        bufp->chgWData(oldp+21,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse),256);
        __Vtemp_1[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
            [0U];
        __Vtemp_1[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
        __Vtemp_1[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
        __Vtemp_1[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
        __Vtemp_1[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
        __Vtemp_1[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
        __Vtemp_1[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
        __Vtemp_1[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
        __Vtemp_1[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
        __Vtemp_1[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
        __Vtemp_1[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
        __Vtemp_1[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
        __Vtemp_1[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
        __Vtemp_1[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
        __Vtemp_1[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
        __Vtemp_1[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
        __Vtemp_1[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
        __Vtemp_1[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
        __Vtemp_1[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
        __Vtemp_1[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
        bufp->chgWData(oldp+29,(__Vtemp_1),640);
        __Vtemp_2[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
            [1U];
        __Vtemp_2[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
        __Vtemp_2[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
        __Vtemp_2[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
        __Vtemp_2[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
        __Vtemp_2[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
        __Vtemp_2[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
        __Vtemp_2[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
        __Vtemp_2[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
        __Vtemp_2[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
        __Vtemp_2[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
        __Vtemp_2[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
        __Vtemp_2[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
        __Vtemp_2[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
        __Vtemp_2[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
        __Vtemp_2[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
        __Vtemp_2[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
        __Vtemp_2[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
        __Vtemp_2[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
        __Vtemp_2[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
        bufp->chgWData(oldp+49,(__Vtemp_2),640);
        __Vtemp_3[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
            [2U];
        __Vtemp_3[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
        __Vtemp_3[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
        __Vtemp_3[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
        __Vtemp_3[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
        __Vtemp_3[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
        __Vtemp_3[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
        __Vtemp_3[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
        __Vtemp_3[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
        __Vtemp_3[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
        __Vtemp_3[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
        __Vtemp_3[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
        __Vtemp_3[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
        __Vtemp_3[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
        __Vtemp_3[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
        __Vtemp_3[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
        __Vtemp_3[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
        __Vtemp_3[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
        __Vtemp_3[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
        __Vtemp_3[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
        bufp->chgWData(oldp+69,(__Vtemp_3),640);
        __Vtemp_4[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
            [3U];
        __Vtemp_4[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
        __Vtemp_4[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
        __Vtemp_4[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
        __Vtemp_4[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
        __Vtemp_4[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
        __Vtemp_4[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
        __Vtemp_4[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
        __Vtemp_4[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
        __Vtemp_4[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
        __Vtemp_4[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
        __Vtemp_4[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
        __Vtemp_4[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
        __Vtemp_4[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
        __Vtemp_4[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
        __Vtemp_4[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
        __Vtemp_4[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
        __Vtemp_4[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
        __Vtemp_4[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
        __Vtemp_4[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
        bufp->chgWData(oldp+89,(__Vtemp_4),640);
        __Vtemp_5[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
            [4U];
        __Vtemp_5[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
        __Vtemp_5[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
        __Vtemp_5[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
        __Vtemp_5[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
        __Vtemp_5[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
        __Vtemp_5[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
        __Vtemp_5[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
        __Vtemp_5[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
        __Vtemp_5[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
        __Vtemp_5[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
        __Vtemp_5[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
        __Vtemp_5[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
        __Vtemp_5[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
        __Vtemp_5[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
        __Vtemp_5[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
        __Vtemp_5[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
        __Vtemp_5[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
        __Vtemp_5[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
        __Vtemp_5[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
        bufp->chgWData(oldp+109,(__Vtemp_5),640);
        __Vtemp_6[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
            [5U];
        __Vtemp_6[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
        __Vtemp_6[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
        __Vtemp_6[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
        __Vtemp_6[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
        __Vtemp_6[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
        __Vtemp_6[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
        __Vtemp_6[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
        __Vtemp_6[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
        __Vtemp_6[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
        __Vtemp_6[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
        __Vtemp_6[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
        __Vtemp_6[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
        __Vtemp_6[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
        __Vtemp_6[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
        __Vtemp_6[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
        __Vtemp_6[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
        __Vtemp_6[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
        __Vtemp_6[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
        __Vtemp_6[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
        bufp->chgWData(oldp+129,(__Vtemp_6),640);
        __Vtemp_7[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
            [6U];
        __Vtemp_7[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
        __Vtemp_7[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
        __Vtemp_7[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
        __Vtemp_7[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
        __Vtemp_7[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
        __Vtemp_7[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
        __Vtemp_7[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
        __Vtemp_7[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
        __Vtemp_7[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
        __Vtemp_7[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
        __Vtemp_7[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
        __Vtemp_7[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
        __Vtemp_7[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
        __Vtemp_7[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
        __Vtemp_7[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
        __Vtemp_7[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
        __Vtemp_7[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
        __Vtemp_7[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
        __Vtemp_7[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
        bufp->chgWData(oldp+149,(__Vtemp_7),640);
        __Vtemp_8[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
            [7U];
        __Vtemp_8[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
        __Vtemp_8[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
        __Vtemp_8[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
        __Vtemp_8[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
        __Vtemp_8[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
        __Vtemp_8[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
        __Vtemp_8[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
        __Vtemp_8[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
        __Vtemp_8[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
        __Vtemp_8[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
        __Vtemp_8[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
        __Vtemp_8[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
        __Vtemp_8[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
        __Vtemp_8[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
        __Vtemp_8[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
        __Vtemp_8[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
        __Vtemp_8[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
        __Vtemp_8[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
        __Vtemp_8[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
        bufp->chgWData(oldp+169,(__Vtemp_8),640);
        __Vtemp_9[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
            [8U];
        __Vtemp_9[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
        __Vtemp_9[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
        __Vtemp_9[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
        __Vtemp_9[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
        __Vtemp_9[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
        __Vtemp_9[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
        __Vtemp_9[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
        __Vtemp_9[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
        __Vtemp_9[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
        __Vtemp_9[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
        __Vtemp_9[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
        __Vtemp_9[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
        __Vtemp_9[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
        __Vtemp_9[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
        __Vtemp_9[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
        __Vtemp_9[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
        __Vtemp_9[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
        __Vtemp_9[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
        __Vtemp_9[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
        bufp->chgWData(oldp+189,(__Vtemp_9),640);
        __Vtemp_10[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
            [9U];
        __Vtemp_10[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
        __Vtemp_10[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
        __Vtemp_10[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
        __Vtemp_10[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
        __Vtemp_10[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
        __Vtemp_10[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
        __Vtemp_10[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
        __Vtemp_10[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
        __Vtemp_10[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
        __Vtemp_10[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
        __Vtemp_10[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
        __Vtemp_10[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
        __Vtemp_10[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
        __Vtemp_10[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
        __Vtemp_10[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
        __Vtemp_10[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
        __Vtemp_10[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
        __Vtemp_10[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
        __Vtemp_10[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
        bufp->chgWData(oldp+209,(__Vtemp_10),640);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+229,(vlSelf->top_tb__DOT__UART_TXD));
        bufp->chgSData(oldp+230,(vlSelf->top_tb__DOT__LED),16);
        bufp->chgBit(oldp+231,(vlSelf->top_tb__DOT__TOP__DOT__finished_recieving));
        bufp->chgBit(oldp+232,(vlSelf->top_tb__DOT__TOP__DOT__finished_sending));
        bufp->chgBit(oldp+233,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_DV));
        bufp->chgBit(oldp+234,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Done));
        bufp->chgCData(oldp+235,(vlSelf->top_tb__DOT__TOP__DOT__read_bytes_passed),8);
        bufp->chgCData(oldp+236,(vlSelf->top_tb__DOT__TOP__DOT__write_bytes_passed),8);
        bufp->chgCData(oldp+237,(vlSelf->top_tb__DOT__TOP__DOT__repeat_bytes_sent),5);
        bufp->chgCData(oldp+238,(vlSelf->top_tb__DOT__TOP__DOT__tx_byte),8);
        bufp->chgCData(oldp+239,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Byte),8);
        bufp->chgBit(oldp+240,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Active));
        bufp->chgWData(oldp+241,(vlSelf->top_tb__DOT__TOP__DOT__block_info),608);
        bufp->chgWData(oldp+260,(vlSelf->top_tb__DOT__TOP__DOT__best_hash),256);
        bufp->chgWData(oldp+268,(vlSelf->top_tb__DOT__TOP__DOT__copy_hash),256);
        bufp->chgIData(oldp+276,(vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce),32);
        bufp->chgWData(oldp+277,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[0]),256);
        bufp->chgWData(oldp+285,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[1]),256);
        bufp->chgWData(oldp+293,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[2]),256);
        bufp->chgWData(oldp+301,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[3]),256);
        bufp->chgWData(oldp+309,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[4]),256);
        bufp->chgWData(oldp+317,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[5]),256);
        bufp->chgWData(oldp+325,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[6]),256);
        bufp->chgWData(oldp+333,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[7]),256);
        bufp->chgWData(oldp+341,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[8]),256);
        bufp->chgWData(oldp+349,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[9]),256);
        bufp->chgWData(oldp+357,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[0]),256);
        bufp->chgWData(oldp+365,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[1]),256);
        bufp->chgWData(oldp+373,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[2]),256);
        bufp->chgWData(oldp+381,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[3]),256);
        bufp->chgWData(oldp+389,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[4]),256);
        bufp->chgWData(oldp+397,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[5]),256);
        bufp->chgWData(oldp+405,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[6]),256);
        bufp->chgWData(oldp+413,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[7]),256);
        bufp->chgWData(oldp+421,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[8]),256);
        bufp->chgWData(oldp+429,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[9]),256);
        bufp->chgBit(oldp+437,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[0]));
        bufp->chgBit(oldp+438,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[1]));
        bufp->chgBit(oldp+439,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[2]));
        bufp->chgBit(oldp+440,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[3]));
        bufp->chgBit(oldp+441,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[4]));
        bufp->chgBit(oldp+442,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[5]));
        bufp->chgBit(oldp+443,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[6]));
        bufp->chgBit(oldp+444,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[7]));
        bufp->chgBit(oldp+445,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[8]));
        bufp->chgBit(oldp+446,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[9]));
        bufp->chgBit(oldp+447,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst));
        bufp->chgIData(oldp+448,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+449,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+450,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk4__DOT__k),32);
        bufp->chgBit(oldp+451,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data_R));
        bufp->chgBit(oldp+452,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data));
        bufp->chgCData(oldp+453,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count),8);
        bufp->chgCData(oldp+454,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Bit_Index),3);
        bufp->chgCData(oldp+455,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main),3);
        bufp->chgCData(oldp+456,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main),3);
        bufp->chgCData(oldp+457,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count),8);
        bufp->chgCData(oldp+458,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Bit_Index),3);
        bufp->chgCData(oldp+459,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Data),8);
        bufp->chgBit(oldp+460,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+461,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+469,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+470,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+486,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+494,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+495,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+496,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+497,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+498,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+499,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+500,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+501,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+502,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+503,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+504,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+505,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+506,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+507,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+508,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+509,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+510,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+511,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+512,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+513,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+514,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+515,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+516,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+517,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+518,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+519,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+520,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+521,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+522,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+523,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+524,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+525,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+526,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+527,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+528,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+529,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+530,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+531,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+532,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+533,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+534,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+535,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+536,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+537,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+538,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+539,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+540,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+541,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+542,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+543,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+544,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+545,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+546,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+547,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                  + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                     ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                        ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+548,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                  + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                     + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           << 0x19U) 
                                          | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                             >> 7U)) 
                                         ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              << 0xeU) 
                                             | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                            ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                        + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+549,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+550,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+551,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+559,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+560,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+568,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+569,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+585,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+593,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+594,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+595,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+596,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+597,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+598,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+599,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+600,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+601,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+602,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+603,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+604,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+605,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+606,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+607,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+608,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+609,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+610,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+611,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+612,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+613,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+614,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+615,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+616,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+617,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+618,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+619,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+620,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+621,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+622,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+623,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+624,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+625,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+626,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+627,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+628,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+629,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+630,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+631,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+632,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+633,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+634,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+635,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+636,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+637,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+638,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+639,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+640,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+641,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+642,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+643,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+644,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+645,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+646,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                  + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                     ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                        ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+647,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                  + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                     + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           << 0x19U) 
                                          | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                             >> 7U)) 
                                         ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              << 0xeU) 
                                             | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                            ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                        + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+648,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+649,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+650,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+658,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+659,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+667,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+668,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+684,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+692,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+693,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+694,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+695,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+696,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+697,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+698,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+699,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+700,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+701,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+702,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+703,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+704,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+705,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+706,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+707,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+708,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+709,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+710,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+711,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+712,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+713,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+714,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+715,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+716,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+717,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+718,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+719,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+720,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+721,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+722,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+723,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+724,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+725,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+726,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+727,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+728,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+729,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+730,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+731,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+732,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+733,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+734,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+735,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+736,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+737,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+738,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+739,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+740,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+741,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+742,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+743,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+744,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+745,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                  + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                     ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                        ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+746,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                  + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                     + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           << 0x19U) 
                                          | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                             >> 7U)) 
                                         ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              << 0xeU) 
                                             | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                            ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                        + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+747,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+748,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+749,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+757,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+758,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+766,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+767,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+783,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+791,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+792,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+793,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+794,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+795,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+796,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+797,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+798,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+799,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+800,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+801,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+802,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+803,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+804,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+805,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+806,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+807,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+808,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+809,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+810,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+811,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+812,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+813,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+814,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+815,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+816,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+817,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+818,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+819,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+820,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+821,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+822,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+823,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+824,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+825,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+826,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+827,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+828,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+829,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+830,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+831,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+832,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+833,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+834,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+835,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+836,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+837,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+838,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+839,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+840,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+841,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+842,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+843,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+844,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                  + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                     ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                        ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+845,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                  + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                     + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           << 0x19U) 
                                          | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                             >> 7U)) 
                                         ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              << 0xeU) 
                                             | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                            ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                        + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+846,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+847,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+848,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+856,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+857,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+865,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+866,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+882,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+890,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+891,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+892,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+893,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+894,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+895,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+896,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+897,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+898,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+899,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+900,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+901,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+902,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+903,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+904,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+905,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+906,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+907,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+908,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+909,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+910,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+911,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+912,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+913,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+914,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+915,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+916,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+917,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+918,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+919,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+920,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+921,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+922,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+923,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+924,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+925,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+926,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+927,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+928,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+929,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+930,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+931,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+932,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+933,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+934,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+935,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+936,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+937,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+938,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+939,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+940,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+941,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+942,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+943,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                  + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                     ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                        ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+944,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                  + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                     + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           << 0x19U) 
                                          | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                             >> 7U)) 
                                         ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              << 0xeU) 
                                             | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                            ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                        + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+945,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+946,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+947,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+955,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+956,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+964,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+965,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+981,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+989,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+990,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+991,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+992,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+993,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+994,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+995,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+996,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+997,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+998,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+999,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+1000,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+1001,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+1002,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+1003,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+1004,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+1005,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+1006,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+1007,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+1008,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+1009,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+1010,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+1011,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+1012,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+1013,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+1014,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+1015,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+1016,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+1017,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+1018,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+1019,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+1020,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+1021,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+1022,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+1023,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+1024,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+1025,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+1026,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+1027,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+1028,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+1029,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+1030,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+1031,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+1032,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+1033,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+1034,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+1035,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                   ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+1036,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+1037,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U))))),32);
        bufp->chgIData(oldp+1038,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 6U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 0x15U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        >> 0xbU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0x19U))))),32);
        bufp->chgIData(oldp+1039,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                  >> 7U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 0x12U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+1040,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+1041,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+1042,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 2U)) 
                                    ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         << 0x13U) 
                                        | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           >> 0xdU)) 
                                       ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           << 0xaU) 
                                          | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                             >> 0x16U)))) 
                                   + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                      ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                          & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                         ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                            & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+1043,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                    ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         << 0xdU) | 
                                        (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         >> 0x13U)) 
                                       ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                   + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                      + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                            << 0x19U) 
                                           | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                                          ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                             ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                         + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+1044,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+1045,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+1046,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+1054,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+1055,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+1063,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+1064,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+1080,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+1088,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+1089,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+1090,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+1091,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+1092,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+1093,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+1094,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+1095,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+1096,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+1097,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+1098,((0x7fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+1099,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+1100,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+1101,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+1102,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+1103,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+1104,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+1105,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+1106,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+1107,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+1108,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+1109,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+1110,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+1111,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+1112,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+1113,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+1114,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+1115,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+1116,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+1117,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+1118,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+1119,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+1120,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+1121,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+1122,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+1123,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+1124,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+1125,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+1126,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+1127,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+1128,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+1129,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+1130,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+1131,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+1132,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+1133,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+1134,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                   ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+1135,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+1136,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U))))),32);
        bufp->chgIData(oldp+1137,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 6U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 0x15U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        >> 0xbU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0x19U))))),32);
        bufp->chgIData(oldp+1138,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                  >> 7U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 0x12U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+1139,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+1140,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+1141,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 2U)) 
                                    ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         << 0x13U) 
                                        | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           >> 0xdU)) 
                                       ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           << 0xaU) 
                                          | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                             >> 0x16U)))) 
                                   + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                      ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                          & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                         ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                            & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+1142,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                    ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         << 0xdU) | 
                                        (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         >> 0x13U)) 
                                       ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                   + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                      + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                            << 0x19U) 
                                           | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                                          ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                             ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                         + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+1143,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+1144,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+1145,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+1153,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+1154,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+1162,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+1163,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+1179,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+1187,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+1188,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+1189,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+1190,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+1191,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+1192,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+1193,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+1194,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+1195,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+1196,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+1197,((0x7fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+1198,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+1199,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+1200,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+1201,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+1202,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+1203,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+1204,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+1205,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+1206,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+1207,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+1208,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+1209,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+1210,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+1211,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+1212,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+1213,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+1214,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+1215,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+1216,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+1217,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+1218,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+1219,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+1220,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+1221,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+1222,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+1223,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+1224,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+1225,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+1226,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+1227,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+1228,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+1229,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+1230,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+1231,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+1232,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+1233,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                   ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+1234,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+1235,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U))))),32);
        bufp->chgIData(oldp+1236,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 6U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 0x15U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        >> 0xbU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0x19U))))),32);
        bufp->chgIData(oldp+1237,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                  >> 7U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 0x12U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+1238,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+1239,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+1240,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 2U)) 
                                    ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         << 0x13U) 
                                        | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           >> 0xdU)) 
                                       ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           << 0xaU) 
                                          | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                             >> 0x16U)))) 
                                   + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                      ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                          & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                         ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                            & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+1241,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                    ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         << 0xdU) | 
                                        (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         >> 0x13U)) 
                                       ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                   + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                      + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                            << 0x19U) 
                                           | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                                          ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                             ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                         + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+1242,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+1243,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+1244,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+1252,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+1253,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+1261,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+1262,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+1278,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+1286,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+1287,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+1288,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+1289,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+1290,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+1291,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+1292,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+1293,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+1294,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+1295,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+1296,((0x7fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+1297,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+1298,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+1299,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+1300,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+1301,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+1302,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+1303,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+1304,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+1305,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+1306,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+1307,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+1308,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+1309,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+1310,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+1311,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+1312,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+1313,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+1314,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+1315,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+1316,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+1317,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+1318,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+1319,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+1320,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+1321,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+1322,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+1323,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+1324,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+1325,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+1326,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+1327,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+1328,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+1329,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+1330,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+1331,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+1332,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                   ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+1333,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+1334,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U))))),32);
        bufp->chgIData(oldp+1335,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 6U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 0x15U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        >> 0xbU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0x19U))))),32);
        bufp->chgIData(oldp+1336,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                  >> 7U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 0x12U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+1337,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+1338,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+1339,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 2U)) 
                                    ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         << 0x13U) 
                                        | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           >> 0xdU)) 
                                       ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           << 0xaU) 
                                          | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                             >> 0x16U)))) 
                                   + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                      ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                          & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                         ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                            & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+1340,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                    ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         << 0xdU) | 
                                        (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         >> 0x13U)) 
                                       ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                   + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                      + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                            << 0x19U) 
                                           | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                                          ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                             ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                         + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+1341,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+1342,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+1343,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+1351,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+1352,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+1360,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+1361,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+1377,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+1385,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+1386,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+1387,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+1388,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+1389,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+1390,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+1391,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+1392,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+1393,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+1394,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+1395,((0x7fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+1396,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+1397,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+1398,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+1399,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+1400,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+1401,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+1402,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+1403,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+1404,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+1405,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+1406,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+1407,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+1408,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+1409,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+1410,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+1411,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+1412,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+1413,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+1414,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+1415,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+1416,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+1417,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+1418,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+1419,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+1420,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+1421,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+1422,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+1423,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+1424,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+1425,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+1426,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+1427,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+1428,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+1429,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+1430,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+1431,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                   ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+1432,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+1433,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U))))),32);
        bufp->chgIData(oldp+1434,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 6U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 0x15U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        >> 0xbU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0x19U))))),32);
        bufp->chgIData(oldp+1435,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                  >> 7U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 0x12U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+1436,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+1437,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+1438,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 2U)) 
                                    ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         << 0x13U) 
                                        | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           >> 0xdU)) 
                                       ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           << 0xaU) 
                                          | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                             >> 0x16U)))) 
                                   + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                      ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                          & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                         ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                            & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+1439,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                    ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         << 0xdU) | 
                                        (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         >> 0x13U)) 
                                       ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                   + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                      + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                            << 0x19U) 
                                           | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                                          ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                             ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                         + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+1440,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+1441,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+1442,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    }
    bufp->chgBit(oldp+1450,(vlSelf->top_tb__DOT__TOP__DOT__second_tick));
    bufp->chgIData(oldp+1451,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk1__DOT__j),32);
    bufp->chgIData(oldp+1452,(vlSelf->top_tb__DOT__TOP__DOT__TIMER__DOT__cycles),27);
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
