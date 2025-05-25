// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtimer_tb.h for the primary calling header

#include "Vtimer_tb__pch.h"
#include "Vtimer_tb__Syms.h"
#include "Vtimer_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtimer_tb___024root___dump_triggers__act(Vtimer_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtimer_tb___024root___eval_triggers__act(Vtimer_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtimer_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtimer_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->timer_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__timer_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->timer_tb__DOT__rst_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__timer_tb__DOT__rst_i__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__timer_tb__DOT__clk__0 
        = vlSelf->timer_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__timer_tb__DOT__rst_i__0 
        = vlSelf->timer_tb__DOT__rst_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtimer_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
