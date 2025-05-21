// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdoublesha_tb.h for the primary calling header

#include "Vdoublesha_tb__pch.h"
#include "Vdoublesha_tb__Syms.h"
#include "Vdoublesha_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdoublesha_tb___024root___dump_triggers__act(Vdoublesha_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vdoublesha_tb___024root___eval_triggers__act(Vdoublesha_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->doublesha_tb__DOT__clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__doublesha_tb__DOT__clk_i__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__doublesha_tb__DOT__clk_i__0 
        = vlSelf->doublesha_tb__DOT__clk_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdoublesha_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
