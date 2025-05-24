// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhashcore_tb__Syms.h"


void Vhashcore_tb___024root__trace_chg_0_sub_0(Vhashcore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhashcore_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_chg_0\n"); );
    // Init
    Vhashcore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhashcore_tb___024root*>(voidSelf);
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vhashcore_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<19>/*607:0*/ Vhashcore_tb__ConstPool__CONST_h49516a1d_0;

void Vhashcore_tb___024root__trace_chg_0_sub_0(Vhashcore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_chg_0_sub_0\n"); );
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
        bufp->chgBit(oldp+0,(vlSelf->hashcore_tb__DOT__clk));
        bufp->chgBit(oldp+1,(vlSelf->hashcore_tb__DOT__enable));
        bufp->chgBit(oldp+2,(vlSelf->hashcore_tb__DOT__rst_i));
        bufp->chgIData(oldp+3,(vlSelf->hashcore_tb__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+4,(vlSelf->hashcore_tb__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+5,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[0]),32);
        bufp->chgIData(oldp+6,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[1]),32);
        bufp->chgIData(oldp+7,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[2]),32);
        bufp->chgIData(oldp+8,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[3]),32);
        bufp->chgIData(oldp+9,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[4]),32);
        bufp->chgIData(oldp+10,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[5]),32);
        bufp->chgIData(oldp+11,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[6]),32);
        bufp->chgIData(oldp+12,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[7]),32);
        bufp->chgIData(oldp+13,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[8]),32);
        bufp->chgIData(oldp+14,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[9]),32);
        bufp->chgWData(oldp+15,(vlSelf->hashcore_tb__DOT__DUT__DOT__best_hash_reverse),256);
        __Vtemp_1[0U] = vlSelf->hashcore_tb__DOT__DUT__DOT__nonces
            [0U];
        __Vtemp_1[1U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0U];
        __Vtemp_1[2U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[1U];
        __Vtemp_1[3U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[2U];
        __Vtemp_1[4U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[3U];
        __Vtemp_1[5U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[4U];
        __Vtemp_1[6U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[5U];
        __Vtemp_1[7U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[6U];
        __Vtemp_1[8U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[7U];
        __Vtemp_1[9U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[8U];
        __Vtemp_1[0xaU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[9U];
        __Vtemp_1[0xbU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xaU];
        __Vtemp_1[0xcU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xbU];
        __Vtemp_1[0xdU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xcU];
        __Vtemp_1[0xeU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xdU];
        __Vtemp_1[0xfU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xeU];
        __Vtemp_1[0x10U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xfU];
        __Vtemp_1[0x11U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x10U];
        __Vtemp_1[0x12U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x11U];
        __Vtemp_1[0x13U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x12U];
        bufp->chgWData(oldp+23,(__Vtemp_1),640);
        __Vtemp_2[0U] = vlSelf->hashcore_tb__DOT__DUT__DOT__nonces
            [1U];
        __Vtemp_2[1U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0U];
        __Vtemp_2[2U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[1U];
        __Vtemp_2[3U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[2U];
        __Vtemp_2[4U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[3U];
        __Vtemp_2[5U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[4U];
        __Vtemp_2[6U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[5U];
        __Vtemp_2[7U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[6U];
        __Vtemp_2[8U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[7U];
        __Vtemp_2[9U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[8U];
        __Vtemp_2[0xaU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[9U];
        __Vtemp_2[0xbU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xaU];
        __Vtemp_2[0xcU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xbU];
        __Vtemp_2[0xdU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xcU];
        __Vtemp_2[0xeU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xdU];
        __Vtemp_2[0xfU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xeU];
        __Vtemp_2[0x10U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xfU];
        __Vtemp_2[0x11U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x10U];
        __Vtemp_2[0x12U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x11U];
        __Vtemp_2[0x13U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x12U];
        bufp->chgWData(oldp+43,(__Vtemp_2),640);
        __Vtemp_3[0U] = vlSelf->hashcore_tb__DOT__DUT__DOT__nonces
            [2U];
        __Vtemp_3[1U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0U];
        __Vtemp_3[2U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[1U];
        __Vtemp_3[3U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[2U];
        __Vtemp_3[4U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[3U];
        __Vtemp_3[5U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[4U];
        __Vtemp_3[6U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[5U];
        __Vtemp_3[7U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[6U];
        __Vtemp_3[8U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[7U];
        __Vtemp_3[9U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[8U];
        __Vtemp_3[0xaU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[9U];
        __Vtemp_3[0xbU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xaU];
        __Vtemp_3[0xcU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xbU];
        __Vtemp_3[0xdU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xcU];
        __Vtemp_3[0xeU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xdU];
        __Vtemp_3[0xfU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xeU];
        __Vtemp_3[0x10U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xfU];
        __Vtemp_3[0x11U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x10U];
        __Vtemp_3[0x12U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x11U];
        __Vtemp_3[0x13U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x12U];
        bufp->chgWData(oldp+63,(__Vtemp_3),640);
        __Vtemp_4[0U] = vlSelf->hashcore_tb__DOT__DUT__DOT__nonces
            [3U];
        __Vtemp_4[1U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0U];
        __Vtemp_4[2U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[1U];
        __Vtemp_4[3U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[2U];
        __Vtemp_4[4U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[3U];
        __Vtemp_4[5U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[4U];
        __Vtemp_4[6U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[5U];
        __Vtemp_4[7U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[6U];
        __Vtemp_4[8U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[7U];
        __Vtemp_4[9U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[8U];
        __Vtemp_4[0xaU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[9U];
        __Vtemp_4[0xbU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xaU];
        __Vtemp_4[0xcU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xbU];
        __Vtemp_4[0xdU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xcU];
        __Vtemp_4[0xeU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xdU];
        __Vtemp_4[0xfU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xeU];
        __Vtemp_4[0x10U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xfU];
        __Vtemp_4[0x11U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x10U];
        __Vtemp_4[0x12U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x11U];
        __Vtemp_4[0x13U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x12U];
        bufp->chgWData(oldp+83,(__Vtemp_4),640);
        __Vtemp_5[0U] = vlSelf->hashcore_tb__DOT__DUT__DOT__nonces
            [4U];
        __Vtemp_5[1U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0U];
        __Vtemp_5[2U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[1U];
        __Vtemp_5[3U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[2U];
        __Vtemp_5[4U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[3U];
        __Vtemp_5[5U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[4U];
        __Vtemp_5[6U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[5U];
        __Vtemp_5[7U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[6U];
        __Vtemp_5[8U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[7U];
        __Vtemp_5[9U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[8U];
        __Vtemp_5[0xaU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[9U];
        __Vtemp_5[0xbU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xaU];
        __Vtemp_5[0xcU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xbU];
        __Vtemp_5[0xdU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xcU];
        __Vtemp_5[0xeU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xdU];
        __Vtemp_5[0xfU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xeU];
        __Vtemp_5[0x10U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xfU];
        __Vtemp_5[0x11U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x10U];
        __Vtemp_5[0x12U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x11U];
        __Vtemp_5[0x13U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x12U];
        bufp->chgWData(oldp+103,(__Vtemp_5),640);
        __Vtemp_6[0U] = vlSelf->hashcore_tb__DOT__DUT__DOT__nonces
            [5U];
        __Vtemp_6[1U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0U];
        __Vtemp_6[2U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[1U];
        __Vtemp_6[3U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[2U];
        __Vtemp_6[4U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[3U];
        __Vtemp_6[5U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[4U];
        __Vtemp_6[6U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[5U];
        __Vtemp_6[7U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[6U];
        __Vtemp_6[8U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[7U];
        __Vtemp_6[9U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[8U];
        __Vtemp_6[0xaU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[9U];
        __Vtemp_6[0xbU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xaU];
        __Vtemp_6[0xcU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xbU];
        __Vtemp_6[0xdU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xcU];
        __Vtemp_6[0xeU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xdU];
        __Vtemp_6[0xfU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xeU];
        __Vtemp_6[0x10U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xfU];
        __Vtemp_6[0x11U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x10U];
        __Vtemp_6[0x12U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x11U];
        __Vtemp_6[0x13U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x12U];
        bufp->chgWData(oldp+123,(__Vtemp_6),640);
        __Vtemp_7[0U] = vlSelf->hashcore_tb__DOT__DUT__DOT__nonces
            [6U];
        __Vtemp_7[1U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0U];
        __Vtemp_7[2U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[1U];
        __Vtemp_7[3U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[2U];
        __Vtemp_7[4U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[3U];
        __Vtemp_7[5U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[4U];
        __Vtemp_7[6U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[5U];
        __Vtemp_7[7U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[6U];
        __Vtemp_7[8U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[7U];
        __Vtemp_7[9U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[8U];
        __Vtemp_7[0xaU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[9U];
        __Vtemp_7[0xbU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xaU];
        __Vtemp_7[0xcU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xbU];
        __Vtemp_7[0xdU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xcU];
        __Vtemp_7[0xeU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xdU];
        __Vtemp_7[0xfU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xeU];
        __Vtemp_7[0x10U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xfU];
        __Vtemp_7[0x11U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x10U];
        __Vtemp_7[0x12U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x11U];
        __Vtemp_7[0x13U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x12U];
        bufp->chgWData(oldp+143,(__Vtemp_7),640);
        __Vtemp_8[0U] = vlSelf->hashcore_tb__DOT__DUT__DOT__nonces
            [7U];
        __Vtemp_8[1U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0U];
        __Vtemp_8[2U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[1U];
        __Vtemp_8[3U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[2U];
        __Vtemp_8[4U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[3U];
        __Vtemp_8[5U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[4U];
        __Vtemp_8[6U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[5U];
        __Vtemp_8[7U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[6U];
        __Vtemp_8[8U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[7U];
        __Vtemp_8[9U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[8U];
        __Vtemp_8[0xaU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[9U];
        __Vtemp_8[0xbU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xaU];
        __Vtemp_8[0xcU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xbU];
        __Vtemp_8[0xdU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xcU];
        __Vtemp_8[0xeU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xdU];
        __Vtemp_8[0xfU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xeU];
        __Vtemp_8[0x10U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xfU];
        __Vtemp_8[0x11U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x10U];
        __Vtemp_8[0x12U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x11U];
        __Vtemp_8[0x13U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x12U];
        bufp->chgWData(oldp+163,(__Vtemp_8),640);
        __Vtemp_9[0U] = vlSelf->hashcore_tb__DOT__DUT__DOT__nonces
            [8U];
        __Vtemp_9[1U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0U];
        __Vtemp_9[2U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[1U];
        __Vtemp_9[3U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[2U];
        __Vtemp_9[4U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[3U];
        __Vtemp_9[5U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[4U];
        __Vtemp_9[6U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[5U];
        __Vtemp_9[7U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[6U];
        __Vtemp_9[8U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[7U];
        __Vtemp_9[9U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[8U];
        __Vtemp_9[0xaU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[9U];
        __Vtemp_9[0xbU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xaU];
        __Vtemp_9[0xcU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xbU];
        __Vtemp_9[0xdU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xcU];
        __Vtemp_9[0xeU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xdU];
        __Vtemp_9[0xfU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xeU];
        __Vtemp_9[0x10U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xfU];
        __Vtemp_9[0x11U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x10U];
        __Vtemp_9[0x12U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x11U];
        __Vtemp_9[0x13U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x12U];
        bufp->chgWData(oldp+183,(__Vtemp_9),640);
        __Vtemp_10[0U] = vlSelf->hashcore_tb__DOT__DUT__DOT__nonces
            [9U];
        __Vtemp_10[1U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0U];
        __Vtemp_10[2U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[1U];
        __Vtemp_10[3U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[2U];
        __Vtemp_10[4U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[3U];
        __Vtemp_10[5U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[4U];
        __Vtemp_10[6U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[5U];
        __Vtemp_10[7U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[6U];
        __Vtemp_10[8U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[7U];
        __Vtemp_10[9U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[8U];
        __Vtemp_10[0xaU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[9U];
        __Vtemp_10[0xbU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xaU];
        __Vtemp_10[0xcU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xbU];
        __Vtemp_10[0xdU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xcU];
        __Vtemp_10[0xeU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xdU];
        __Vtemp_10[0xfU] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xeU];
        __Vtemp_10[0x10U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0xfU];
        __Vtemp_10[0x11U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x10U];
        __Vtemp_10[0x12U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x11U];
        __Vtemp_10[0x13U] = Vhashcore_tb__ConstPool__CONST_h49516a1d_0[0x12U];
        bufp->chgWData(oldp+203,(__Vtemp_10),640);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgWData(oldp+223,(vlSelf->hashcore_tb__DOT__best_hash),256);
        bufp->chgIData(oldp+231,(vlSelf->hashcore_tb__DOT__best_hash_nonce),32);
        bufp->chgWData(oldp+232,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[0]),256);
        bufp->chgWData(oldp+240,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[1]),256);
        bufp->chgWData(oldp+248,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[2]),256);
        bufp->chgWData(oldp+256,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[3]),256);
        bufp->chgWData(oldp+264,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[4]),256);
        bufp->chgWData(oldp+272,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[5]),256);
        bufp->chgWData(oldp+280,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[6]),256);
        bufp->chgWData(oldp+288,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[7]),256);
        bufp->chgWData(oldp+296,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[8]),256);
        bufp->chgWData(oldp+304,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[9]),256);
        bufp->chgWData(oldp+312,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[0]),256);
        bufp->chgWData(oldp+320,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[1]),256);
        bufp->chgWData(oldp+328,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[2]),256);
        bufp->chgWData(oldp+336,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[3]),256);
        bufp->chgWData(oldp+344,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[4]),256);
        bufp->chgWData(oldp+352,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[5]),256);
        bufp->chgWData(oldp+360,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[6]),256);
        bufp->chgWData(oldp+368,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[7]),256);
        bufp->chgWData(oldp+376,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[8]),256);
        bufp->chgWData(oldp+384,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[9]),256);
        bufp->chgBit(oldp+392,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[0]));
        bufp->chgBit(oldp+393,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[1]));
        bufp->chgBit(oldp+394,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[2]));
        bufp->chgBit(oldp+395,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[3]));
        bufp->chgBit(oldp+396,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[4]));
        bufp->chgBit(oldp+397,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[5]));
        bufp->chgBit(oldp+398,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[6]));
        bufp->chgBit(oldp+399,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[7]));
        bufp->chgBit(oldp+400,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[8]));
        bufp->chgBit(oldp+401,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[9]));
        bufp->chgBit(oldp+402,(vlSelf->hashcore_tb__DOT__DUT__DOT__rst));
        bufp->chgIData(oldp+403,(vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b),32);
        bufp->chgIData(oldp+404,(vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+405,(vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+406,(vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk6__DOT__k),32);
        bufp->chgBit(oldp+407,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+408,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+416,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+417,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+433,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+441,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+442,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+443,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+444,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+445,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+446,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+447,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+448,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+449,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+450,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+451,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+452,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+453,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+454,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+455,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+456,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+457,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+458,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+459,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+460,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+461,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+462,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+463,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+464,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+465,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+466,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+467,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+468,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+469,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+470,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+471,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+472,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+473,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+474,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+475,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+476,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+477,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+478,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+479,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+480,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+481,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+482,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+483,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+484,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+485,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+486,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+487,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+488,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+489,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+490,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+491,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+492,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+493,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+494,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                  + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                     ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                         & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                        ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+495,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                  + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                     + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           << 0x19U) 
                                          | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                             >> 7U)) 
                                         ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              << 0xeU) 
                                             | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                            ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                        + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+496,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+497,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+498,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+506,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+507,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+515,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+516,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+532,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+540,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+541,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+542,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+543,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+544,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+545,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+546,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+547,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+548,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+549,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+550,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+551,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+552,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+553,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+554,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+555,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+556,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+557,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+558,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+559,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+560,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+561,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+562,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+563,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+564,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+565,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+566,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+567,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+568,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+569,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+570,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+571,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+572,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+573,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+574,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+575,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+576,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+577,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+578,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+579,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+580,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+581,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+582,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+583,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+584,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+585,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+586,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+587,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+588,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+589,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+590,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+591,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+592,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+593,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                  + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                     ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                         & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                        ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+594,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                  + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                     + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           << 0x19U) 
                                          | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                             >> 7U)) 
                                         ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              << 0xeU) 
                                             | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                            ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                        + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+595,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+596,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+597,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+605,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+606,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+614,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+615,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+631,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+639,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+640,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+641,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+642,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+643,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+644,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+645,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+646,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+647,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+648,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+649,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+650,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+651,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+652,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+653,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+654,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+655,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+656,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+657,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+658,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+659,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+660,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+661,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+662,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+663,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+664,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+665,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+666,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+667,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+668,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+669,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+670,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+671,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+672,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+673,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+674,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+675,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+676,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+677,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+678,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+679,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+680,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+681,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+682,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+683,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+684,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+685,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+686,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+687,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+688,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+689,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+690,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+691,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+692,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                  + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                     ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                         & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                        ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+693,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                  + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                     + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           << 0x19U) 
                                          | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                             >> 7U)) 
                                         ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              << 0xeU) 
                                             | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                            ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                        + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+694,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+695,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+696,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+704,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+705,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+713,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+714,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+730,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+738,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+739,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+740,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+741,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+742,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+743,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+744,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+745,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+746,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+747,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+748,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+749,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+750,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+751,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+752,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+753,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+754,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+755,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+756,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+757,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+758,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+759,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+760,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+761,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+762,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+763,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+764,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+765,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+766,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+767,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+768,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+769,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+770,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+771,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+772,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+773,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+774,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+775,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+776,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+777,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+778,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+779,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+780,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+781,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+782,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+783,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+784,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+785,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+786,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+787,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+788,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+789,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+790,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+791,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                  + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                     ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                         & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                        ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+792,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                  + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                     + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           << 0x19U) 
                                          | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                             >> 7U)) 
                                         ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              << 0xeU) 
                                             | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                            ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                        + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+793,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+794,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+795,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+803,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+804,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+812,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+813,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+829,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+837,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+838,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+839,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+840,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+841,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+842,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+843,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+844,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+845,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+846,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+847,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+848,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+849,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+850,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+851,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+852,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+853,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+854,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+855,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+856,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+857,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+858,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+859,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+860,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+861,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+862,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+863,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+864,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+865,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+866,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+867,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+868,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+869,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+870,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+871,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+872,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+873,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+874,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+875,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+876,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+877,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+878,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+879,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+880,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+881,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+882,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+883,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+884,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+885,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+886,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+887,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+888,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+889,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+890,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                  + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                     ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                         & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                        ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+891,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                  + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                     + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           << 0x19U) 
                                          | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                             >> 7U)) 
                                         ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              << 0xeU) 
                                             | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                            ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                        + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+892,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+893,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+894,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+902,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+903,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+911,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+912,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+928,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+936,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+937,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+938,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+939,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+940,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+941,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+942,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+943,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+944,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+945,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+946,((0x7fU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+947,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+948,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+949,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+950,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+951,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+952,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+953,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+954,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+955,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+956,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+957,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+958,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+959,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+960,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+961,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+962,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+963,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+964,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+965,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+966,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+967,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+968,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+969,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+970,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+971,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+972,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+973,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+974,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+975,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+976,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+977,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+978,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+979,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+980,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+981,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+982,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                  ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                     & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+983,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+984,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 2U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0x13U) | 
                                      (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       >> 0xdU)) ^ 
                                     ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
        bufp->chgIData(oldp+985,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 6U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 0x15U) | 
                                      (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       >> 0xbU)) ^ 
                                     ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
        bufp->chgIData(oldp+986,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 7U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                       << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                   >> 0x12U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+987,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x11U)) 
                                  ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                       << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                   >> 0x13U)) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+988,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+989,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                  + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                     ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                         & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                        ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+990,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                  + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                     + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           << 0x19U) 
                                          | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                             >> 7U)) 
                                         ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              << 0xeU) 
                                             | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                            ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                        + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+991,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+992,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+993,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+1001,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+1002,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+1010,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+1011,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+1027,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+1035,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+1036,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+1037,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+1038,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+1039,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+1040,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+1041,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+1042,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+1043,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+1044,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+1045,((0x7fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+1046,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+1047,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+1048,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+1049,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+1050,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+1051,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+1052,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+1053,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+1054,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+1055,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+1056,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+1057,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+1058,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+1059,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+1060,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+1061,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+1062,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+1063,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+1064,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+1065,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+1066,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+1067,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+1068,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+1069,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+1070,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+1071,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+1072,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+1073,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+1074,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+1075,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+1076,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+1077,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+1078,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+1079,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+1080,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+1081,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                   ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+1082,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+1083,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U))))),32);
        bufp->chgIData(oldp+1084,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 6U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 0x15U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        >> 0xbU)) ^ 
                                      ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0x19U))))),32);
        bufp->chgIData(oldp+1085,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                  >> 7U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 0x12U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+1086,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+1087,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+1088,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 2U)) 
                                    ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         << 0x13U) 
                                        | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           >> 0xdU)) 
                                       ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           << 0xaU) 
                                          | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                             >> 0x16U)))) 
                                   + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                      ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                          & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                         ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                            & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+1089,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                    ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         << 0xdU) | 
                                        (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         >> 0x13U)) 
                                       ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                   + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                      + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                            << 0x19U) 
                                           | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                                          ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                             ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                         + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+1090,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+1091,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+1092,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+1100,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+1101,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+1109,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+1110,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+1126,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+1134,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+1135,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+1136,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+1137,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+1138,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+1139,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+1140,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+1141,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+1142,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+1143,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+1144,((0x7fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+1145,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+1146,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+1147,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+1148,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+1149,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+1150,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+1151,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+1152,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+1153,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+1154,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+1155,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+1156,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+1157,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+1158,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+1159,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+1160,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+1161,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+1162,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+1163,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+1164,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+1165,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+1166,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+1167,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+1168,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+1169,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+1170,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+1171,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+1172,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+1173,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+1174,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+1175,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+1176,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+1177,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+1178,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+1179,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+1180,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                   ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+1181,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+1182,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U))))),32);
        bufp->chgIData(oldp+1183,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 6U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 0x15U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        >> 0xbU)) ^ 
                                      ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0x19U))))),32);
        bufp->chgIData(oldp+1184,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                  >> 7U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 0x12U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+1185,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+1186,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+1187,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 2U)) 
                                    ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         << 0x13U) 
                                        | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           >> 0xdU)) 
                                       ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           << 0xaU) 
                                          | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                             >> 0x16U)))) 
                                   + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                      ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                          & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                         ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                            & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+1188,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                    ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         << 0xdU) | 
                                        (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         >> 0x13U)) 
                                       ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                   + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                      + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                            << 0x19U) 
                                           | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                                          ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                             ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                         + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+1189,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+1190,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+1191,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+1199,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+1200,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+1208,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+1209,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+1225,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+1233,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+1234,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+1235,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+1236,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+1237,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+1238,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+1239,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+1240,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+1241,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+1242,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+1243,((0x7fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+1244,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+1245,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+1246,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+1247,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+1248,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+1249,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+1250,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+1251,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+1252,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+1253,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+1254,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+1255,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+1256,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+1257,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+1258,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+1259,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+1260,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+1261,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+1262,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+1263,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+1264,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+1265,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+1266,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+1267,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+1268,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+1269,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+1270,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+1271,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+1272,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+1273,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+1274,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+1275,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+1276,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+1277,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+1278,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+1279,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                   ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+1280,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+1281,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U))))),32);
        bufp->chgIData(oldp+1282,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 6U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 0x15U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        >> 0xbU)) ^ 
                                      ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0x19U))))),32);
        bufp->chgIData(oldp+1283,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                  >> 7U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 0x12U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+1284,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+1285,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+1286,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 2U)) 
                                    ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         << 0x13U) 
                                        | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           >> 0xdU)) 
                                       ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           << 0xaU) 
                                          | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                             >> 0x16U)))) 
                                   + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                      ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                          & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                         ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                            & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+1287,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                    ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         << 0xdU) | 
                                        (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         >> 0x13U)) 
                                       ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                   + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                      + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                            << 0x19U) 
                                           | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                                          ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                             ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                         + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+1288,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+1289,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+1290,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
        bufp->chgBit(oldp+1298,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.complete));
        bufp->chgWData(oldp+1299,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.hash),256);
        bufp->chgIData(oldp+1307,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__text_i),32);
        bufp->chgWData(oldp+1308,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__tmp_i),512);
        bufp->chgWData(oldp+1324,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__first_hash),256);
        bufp->chgCData(oldp+1332,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__cmd_i),3);
        bufp->chgBit(oldp+1333,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__cmd_w_i));
        bufp->chgCData(oldp+1334,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__hash_index),5);
        bufp->chgIData(oldp+1335,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__text_o),32);
        bufp->chgCData(oldp+1336,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
        bufp->chgBit(oldp+1337,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__second_cycle));
        bufp->chgCData(oldp+1338,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__delay_left),4);
        bufp->chgCData(oldp+1339,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__internal_index),5);
        bufp->chgCData(oldp+1340,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__state),4);
        bufp->chgCData(oldp+1341,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
        bufp->chgCData(oldp+1342,((0x7fU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
        bufp->chgCData(oldp+1343,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
        bufp->chgIData(oldp+1344,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
        bufp->chgIData(oldp+1345,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
        bufp->chgIData(oldp+1346,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
        bufp->chgIData(oldp+1347,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
        bufp->chgIData(oldp+1348,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
        bufp->chgIData(oldp+1349,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
        bufp->chgIData(oldp+1350,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
        bufp->chgIData(oldp+1351,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
        bufp->chgIData(oldp+1352,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
        bufp->chgIData(oldp+1353,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
        bufp->chgIData(oldp+1354,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
        bufp->chgIData(oldp+1355,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
        bufp->chgIData(oldp+1356,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
        bufp->chgIData(oldp+1357,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
        bufp->chgIData(oldp+1358,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
        bufp->chgIData(oldp+1359,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
        bufp->chgIData(oldp+1360,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
        bufp->chgIData(oldp+1361,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
        bufp->chgIData(oldp+1362,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
        bufp->chgIData(oldp+1363,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
        bufp->chgIData(oldp+1364,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
        bufp->chgIData(oldp+1365,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
        bufp->chgIData(oldp+1366,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
        bufp->chgIData(oldp+1367,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
        bufp->chgIData(oldp+1368,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
        bufp->chgIData(oldp+1369,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
        bufp->chgIData(oldp+1370,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
        bufp->chgIData(oldp+1371,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
        bufp->chgIData(oldp+1372,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
        bufp->chgIData(oldp+1373,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
        bufp->chgIData(oldp+1374,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
        bufp->chgIData(oldp+1375,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
        bufp->chgIData(oldp+1376,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
        bufp->chgBit(oldp+1377,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
        bufp->chgIData(oldp+1378,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                   ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
        bufp->chgIData(oldp+1379,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
        bufp->chgIData(oldp+1380,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 2U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0x13U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0xdU)) ^ 
                                      ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U))))),32);
        bufp->chgIData(oldp+1381,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 6U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 0x15U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        >> 0xbU)) ^ 
                                      ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                        << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0x19U))))),32);
        bufp->chgIData(oldp+1382,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                  >> 7U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0xeU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 0x12U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
        bufp->chgIData(oldp+1383,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x11U)) 
                                   ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        << 0xdU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                        >> 0x13U)) 
                                      ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
        bufp->chgIData(oldp+1384,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
        bufp->chgIData(oldp+1385,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 2U)) 
                                    ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         << 0x13U) 
                                        | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           >> 0xdU)) 
                                       ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                           << 0xaU) 
                                          | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                             >> 0x16U)))) 
                                   + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                      ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                          & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                         ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                            & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
        bufp->chgIData(oldp+1386,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                  >> 0x11U)) 
                                    ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         << 0xdU) | 
                                        (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                         >> 0x13U)) 
                                       ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                   + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                      + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                            << 0x19U) 
                                           | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                                          ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                             ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                         + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
        bufp->chgIData(oldp+1387,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
        bufp->chgIData(oldp+1388,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
        bufp->chgWData(oldp+1389,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    }
    bufp->chgIData(oldp+1397,(vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk1__DOT__j),32);
}

void Vhashcore_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_cleanup\n"); );
    // Init
    Vhashcore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhashcore_tb___024root*>(voidSelf);
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
