// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtimer_tb__Syms.h"


void Vtimer_tb___024root__trace_chg_0_sub_0(Vtimer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtimer_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root__trace_chg_0\n"); );
    // Init
    Vtimer_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtimer_tb___024root*>(voidSelf);
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtimer_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtimer_tb___024root__trace_chg_0_sub_0(Vtimer_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->timer_tb__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelf->timer_tb__DOT__rst_i));
    bufp->chgBit(oldp+2,(vlSelf->timer_tb__DOT__second_tick));
    bufp->chgIData(oldp+3,(vlSelf->timer_tb__DOT__DUT__DOT__cycles),27);
    bufp->chgIData(oldp+4,(vlSelf->timer_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+5,(vlSelf->timer_tb__DOT__unnamedblk2__DOT__i),32);
}

void Vtimer_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root__trace_cleanup\n"); );
    // Init
    Vtimer_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtimer_tb___024root*>(voidSelf);
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
