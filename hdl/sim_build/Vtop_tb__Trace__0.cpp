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
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+0,((1U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))));
        bufp->chgBit(oldp+1,((2U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))));
        bufp->chgBit(oldp+2,((0U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))));
        bufp->chgCData(oldp+3,(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state),3);
        bufp->chgIData(oldp+4,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[0]),32);
        bufp->chgIData(oldp+5,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[1]),32);
        bufp->chgIData(oldp+6,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[2]),32);
        bufp->chgIData(oldp+7,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[3]),32);
        bufp->chgIData(oldp+8,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[4]),32);
        bufp->chgIData(oldp+9,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[5]),32);
        bufp->chgIData(oldp+10,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[6]),32);
        bufp->chgIData(oldp+11,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[7]),32);
        bufp->chgIData(oldp+12,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[8]),32);
        bufp->chgIData(oldp+13,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[9]),32);
        bufp->chgWData(oldp+14,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse),256);
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
        bufp->chgWData(oldp+22,(__Vtemp_1),640);
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
        bufp->chgWData(oldp+42,(__Vtemp_2),640);
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
        bufp->chgWData(oldp+62,(__Vtemp_3),640);
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
        bufp->chgWData(oldp+82,(__Vtemp_4),640);
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
        bufp->chgWData(oldp+102,(__Vtemp_5),640);
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
        bufp->chgWData(oldp+122,(__Vtemp_6),640);
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
        bufp->chgWData(oldp+142,(__Vtemp_7),640);
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
        bufp->chgWData(oldp+162,(__Vtemp_8),640);
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
        bufp->chgWData(oldp+182,(__Vtemp_9),640);
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
        bufp->chgWData(oldp+202,(__Vtemp_10),640);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+222,(vlSelf->top_tb__DOT__CLK_100MHZ));
        bufp->chgBit(oldp+223,(vlSelf->top_tb__DOT__UART_RXD));
        bufp->chgIData(oldp+224,(vlSelf->top_tb__DOT__nonce),32);
        bufp->chgIData(oldp+225,(vlSelf->top_tb__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+226,(vlSelf->top_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+227,(vlSelf->top_tb__DOT__UART_TXD));
        bufp->chgBit(oldp+228,(vlSelf->top_tb__DOT__TOP__DOT__finished_recieving));
        bufp->chgBit(oldp+229,(vlSelf->top_tb__DOT__TOP__DOT__finished_sending));
        bufp->chgBit(oldp+230,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_DV));
        bufp->chgBit(oldp+231,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Done));
        bufp->chgCData(oldp+232,(vlSelf->top_tb__DOT__TOP__DOT__read_bytes_passed),8);
        bufp->chgCData(oldp+233,(vlSelf->top_tb__DOT__TOP__DOT__write_bytes_passed),3);
        bufp->chgCData(oldp+234,(vlSelf->top_tb__DOT__TOP__DOT__tx_byte),8);
        bufp->chgCData(oldp+235,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Byte),8);
        bufp->chgBit(oldp+236,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Active));
        bufp->chgWData(oldp+237,(vlSelf->top_tb__DOT__TOP__DOT__block_info),608);
        bufp->chgWData(oldp+256,(vlSelf->top_tb__DOT__TOP__DOT__best_hash),256);
        bufp->chgIData(oldp+264,(vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce),32);
        bufp->chgWData(oldp+265,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[0]),256);
        bufp->chgWData(oldp+273,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[1]),256);
        bufp->chgWData(oldp+281,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[2]),256);
        bufp->chgWData(oldp+289,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[3]),256);
        bufp->chgWData(oldp+297,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[4]),256);
        bufp->chgWData(oldp+305,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[5]),256);
        bufp->chgWData(oldp+313,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[6]),256);
        bufp->chgWData(oldp+321,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[7]),256);
        bufp->chgWData(oldp+329,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[8]),256);
        bufp->chgWData(oldp+337,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[9]),256);
        bufp->chgWData(oldp+345,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[0]),256);
        bufp->chgWData(oldp+353,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[1]),256);
        bufp->chgWData(oldp+361,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[2]),256);
        bufp->chgWData(oldp+369,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[3]),256);
        bufp->chgWData(oldp+377,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[4]),256);
        bufp->chgWData(oldp+385,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[5]),256);
        bufp->chgWData(oldp+393,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[6]),256);
        bufp->chgWData(oldp+401,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[7]),256);
        bufp->chgWData(oldp+409,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[8]),256);
        bufp->chgWData(oldp+417,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[9]),256);
        bufp->chgBit(oldp+425,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[0]));
        bufp->chgBit(oldp+426,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[1]));
        bufp->chgBit(oldp+427,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[2]));
        bufp->chgBit(oldp+428,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[3]));
        bufp->chgBit(oldp+429,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[4]));
        bufp->chgBit(oldp+430,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[5]));
        bufp->chgBit(oldp+431,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[6]));
        bufp->chgBit(oldp+432,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[7]));
        bufp->chgBit(oldp+433,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[8]));
        bufp->chgBit(oldp+434,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[9]));
        bufp->chgBit(oldp+435,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst));
        bufp->chgIData(oldp+436,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b),32);
        bufp->chgIData(oldp+437,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+438,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+439,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk6__DOT__k),32);
        bufp->chgBit(oldp+440,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data_R));
        bufp->chgBit(oldp+441,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data));
        bufp->chgCData(oldp+442,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count),8);
        bufp->chgCData(oldp+443,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Bit_Index),3);
        bufp->chgCData(oldp+444,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main),3);
        bufp->chgCData(oldp+445,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main),3);
        bufp->chgCData(oldp+446,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count),8);
        bufp->chgCData(oldp+447,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Bit_Index),3);
        bufp->chgCData(oldp+448,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Data),8);
        bufp->chgBit(oldp+449,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+450,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+458,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+459,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+475,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+483,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+484,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+485,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+486,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+487,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+488,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+489,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+490,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+491,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+492,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+493,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+494,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+495,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+496,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+497,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+498,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+499,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+500,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+501,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+502,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+503,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+504,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+505,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+506,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+507,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+508,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+509,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+510,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+511,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+512,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+513,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+514,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+515,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+516,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+517,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+518,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+519,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+520,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+521,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+522,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+523,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+524,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+525,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+526,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+527,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+528,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+529,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+530,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+531,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+532,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+533,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+534,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+535,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+536,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
        bufp->chgIData(oldp+537,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
        bufp->chgIData(oldp+538,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+539,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+540,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+548,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+549,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+557,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+558,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+574,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+582,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+583,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+584,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+585,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+586,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+587,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+588,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+589,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+590,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+591,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+592,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+593,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+594,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+595,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+596,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+597,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+598,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+599,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+600,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+601,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+602,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+603,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+604,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+605,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+606,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+607,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+608,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+609,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+610,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+611,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+612,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+613,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+614,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+615,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+616,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+617,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+618,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+619,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+620,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+621,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+622,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+623,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+624,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+625,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+626,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+627,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+628,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+629,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+630,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+631,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+632,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+633,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+634,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+635,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
        bufp->chgIData(oldp+636,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
        bufp->chgIData(oldp+637,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+638,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+639,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+647,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+648,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+656,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+657,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+673,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+681,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+682,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+683,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+684,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+685,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+686,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+687,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+688,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+689,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+690,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+691,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+692,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+693,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+694,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+695,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+696,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+697,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+698,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+699,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+700,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+701,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+702,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+703,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+704,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+705,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+706,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+707,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+708,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+709,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+710,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+711,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+712,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+713,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+714,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+715,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+716,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+717,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+718,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+719,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+720,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+721,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+722,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+723,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+724,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+725,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+726,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+727,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+728,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+729,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+730,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+731,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+732,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+733,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+734,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
        bufp->chgIData(oldp+735,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
        bufp->chgIData(oldp+736,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+737,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+738,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+746,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+747,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+755,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+756,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+772,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+780,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+781,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+782,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+783,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+784,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+785,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+786,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+787,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+788,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+789,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+790,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+791,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+792,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+793,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+794,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+795,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+796,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+797,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+798,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+799,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+800,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+801,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+802,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+803,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+804,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+805,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+806,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+807,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+808,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+809,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+810,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+811,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+812,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+813,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+814,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+815,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+816,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+817,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+818,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+819,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+820,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+821,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+822,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+823,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+824,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+825,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+826,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+827,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+828,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+829,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+830,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+831,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+832,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+833,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
        bufp->chgIData(oldp+834,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
        bufp->chgIData(oldp+835,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+836,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+837,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+845,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+846,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+854,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+855,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+871,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+879,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+880,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+881,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+882,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+883,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+884,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+885,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+886,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+887,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+888,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+889,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+890,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+891,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+892,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+893,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+894,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+895,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+896,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+897,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+898,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+899,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+900,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+901,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+902,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+903,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+904,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+905,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+906,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+907,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+908,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+909,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+910,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+911,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+912,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+913,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+914,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+915,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+916,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+917,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+918,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+919,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+920,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+921,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+922,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+923,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+924,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+925,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+926,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+927,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+928,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+929,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+930,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+931,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+932,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
        bufp->chgIData(oldp+933,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
        bufp->chgIData(oldp+934,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+935,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+936,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+944,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+945,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+953,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+954,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+970,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+978,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+979,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+980,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+981,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+982,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+983,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+984,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+985,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+986,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+987,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+988,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+989,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+990,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+991,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+992,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+993,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+994,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+995,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+996,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+997,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+998,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+999,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+1000,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+1001,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+1002,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+1003,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+1004,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+1005,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+1006,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+1007,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+1008,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+1009,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+1010,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+1011,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+1012,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+1013,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+1014,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+1015,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+1016,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+1017,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+1018,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+1019,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+1020,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+1021,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+1022,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+1023,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+1024,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                   ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+1025,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+1026,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
        bufp->chgIData(oldp+1027,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 6U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 0x15U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        >> 0xbU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0x19U))))),32);
        bufp->chgIData(oldp+1028,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                  >> 7U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 0x12U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+1029,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+1030,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+1031,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
        bufp->chgIData(oldp+1032,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
        bufp->chgIData(oldp+1033,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+1034,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+1035,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+1043,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+1044,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+1052,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+1053,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+1069,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+1077,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+1078,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+1079,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+1080,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+1081,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+1082,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+1083,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+1084,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+1085,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+1086,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+1087,((0x7fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+1088,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+1089,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+1090,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+1091,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+1092,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+1093,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+1094,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+1095,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+1096,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+1097,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+1098,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+1099,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+1100,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+1101,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+1102,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+1103,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+1104,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+1105,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+1106,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+1107,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+1108,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+1109,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+1110,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+1111,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+1112,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+1113,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+1114,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+1115,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+1116,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+1117,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+1118,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+1119,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+1120,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+1121,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+1122,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+1123,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                   ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+1124,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+1125,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
        bufp->chgIData(oldp+1126,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 6U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 0x15U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        >> 0xbU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0x19U))))),32);
        bufp->chgIData(oldp+1127,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                  >> 7U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 0x12U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+1128,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+1129,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+1130,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
        bufp->chgIData(oldp+1131,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
        bufp->chgIData(oldp+1132,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+1133,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+1134,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+1142,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+1143,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+1151,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+1152,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+1168,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+1176,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+1177,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+1178,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+1179,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+1180,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+1181,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+1182,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+1183,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+1184,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+1185,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+1186,((0x7fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+1187,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+1188,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+1189,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+1190,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+1191,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+1192,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+1193,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+1194,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+1195,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+1196,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+1197,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+1198,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+1199,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+1200,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+1201,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+1202,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+1203,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+1204,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+1205,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+1206,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+1207,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+1208,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+1209,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+1210,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+1211,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+1212,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+1213,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+1214,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+1215,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+1216,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+1217,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+1218,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+1219,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+1220,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+1221,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+1222,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                   ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+1223,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+1224,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
        bufp->chgIData(oldp+1225,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 6U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 0x15U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        >> 0xbU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0x19U))))),32);
        bufp->chgIData(oldp+1226,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                  >> 7U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 0x12U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+1227,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+1228,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+1229,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
        bufp->chgIData(oldp+1230,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
        bufp->chgIData(oldp+1231,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+1232,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+1233,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+1241,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+1242,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+1250,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+1251,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+1267,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+1275,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+1276,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+1277,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+1278,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+1279,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+1280,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+1281,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+1282,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+1283,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+1284,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+1285,((0x7fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+1286,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+1287,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+1288,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+1289,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+1290,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+1291,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+1292,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+1293,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+1294,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+1295,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+1296,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+1297,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+1298,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+1299,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+1300,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+1301,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+1302,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+1303,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+1304,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+1305,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+1306,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+1307,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+1308,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+1309,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+1310,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+1311,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+1312,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+1313,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+1314,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+1315,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+1316,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+1317,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+1318,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+1319,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+1320,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+1321,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                   ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+1322,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+1323,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
        bufp->chgIData(oldp+1324,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 6U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 0x15U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        >> 0xbU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0x19U))))),32);
        bufp->chgIData(oldp+1325,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                  >> 7U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 0x12U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+1326,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+1327,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+1328,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
        bufp->chgIData(oldp+1329,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
        bufp->chgIData(oldp+1330,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+1331,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+1332,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+1340,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+1341,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+1349,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+1350,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+1366,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+1374,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+1375,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+1376,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+1377,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+1378,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+1379,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+1380,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+1381,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+1382,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+1383,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+1384,((0x7fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+1385,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+1386,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+1387,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+1388,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+1389,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+1390,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+1391,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+1392,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+1393,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+1394,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+1395,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+1396,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+1397,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+1398,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+1399,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+1400,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+1401,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+1402,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+1403,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+1404,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+1405,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+1406,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+1407,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+1408,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+1409,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+1410,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+1411,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+1412,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+1413,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+1414,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+1415,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+1416,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+1417,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+1418,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+1419,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+1420,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                   ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+1421,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+1422,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
        bufp->chgIData(oldp+1423,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 6U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 0x15U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        >> 0xbU)) ^ 
                                      ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0x19U))))),32);
        bufp->chgIData(oldp+1424,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                  >> 7U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 0x12U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+1425,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+1426,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+1427,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
        bufp->chgIData(oldp+1428,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
        bufp->chgIData(oldp+1429,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+1430,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+1431,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    }
    bufp->chgBit(oldp+1439,(vlSelf->top_tb__DOT__TOP__DOT__second_tick));
    bufp->chgIData(oldp+1440,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk1__DOT__j),32);
    bufp->chgIData(oldp+1441,(vlSelf->top_tb__DOT__TOP__DOT__TIMER__DOT__cycles),27);
    bufp->chgIData(oldp+1442,(vlSelf->top_tb__DOT__unnamedblk3__DOT__i),32);
    bufp->chgIData(oldp+1443,(vlSelf->top_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b),32);
    bufp->chgIData(oldp+1444,(vlSelf->top_tb__DOT__unnamedblk7__DOT__i),32);
    bufp->chgIData(oldp+1445,(vlSelf->top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b),32);
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
