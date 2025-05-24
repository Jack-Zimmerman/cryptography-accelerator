// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhashcore_tb.h for the primary calling header

#include "Vhashcore_tb__pch.h"
#include "Vhashcore_tb___024root.h"

VL_ATTR_COLD void Vhashcore_tb___024root___eval_initial__TOP(Vhashcore_tb___024root* vlSelf);
VlCoroutine Vhashcore_tb___024root___eval_initial__TOP__Vtiming__0(Vhashcore_tb___024root* vlSelf);

void Vhashcore_tb___024root___eval_initial(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___eval_initial\n"); );
    // Body
    Vhashcore_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vhashcore_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__hashcore_tb__DOT__clk__0 
        = vlSelf->hashcore_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vhashcore_tb___024root___eval_initial__TOP__Vtiming__0(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->hashcore_tb__DOT__enable = 1U;
    vlSelf->hashcore_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0xf4240U, vlSelf->hashcore_tb__DOT__unnamedblk1__DOT__i)) {
        vlSelf->hashcore_tb__DOT__clk = 1U;
        co_await vlSelf->__VdlySched.delay(0x1f4ULL, 
                                           nullptr, 
                                           "testbench/hashcore_tb.sv", 
                                           26);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->hashcore_tb__DOT__clk = 0U;
        co_await vlSelf->__VdlySched.delay(0x1f4ULL, 
                                           nullptr, 
                                           "testbench/hashcore_tb.sv", 
                                           28);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->hashcore_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->hashcore_tb__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF("Best hash after 10000 cycles: %x\nResetting!!\n",
              256,vlSelf->hashcore_tb__DOT__best_hash.data());
    vlSelf->hashcore_tb__DOT__rst_i = 1U;
    vlSelf->hashcore_tb__DOT__clk = 1U;
    co_await vlSelf->__VdlySched.delay(0x1f4ULL, nullptr, 
                                       "testbench/hashcore_tb.sv", 
                                       26);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->hashcore_tb__DOT__clk = 0U;
    co_await vlSelf->__VdlySched.delay(0x1f4ULL, nullptr, 
                                       "testbench/hashcore_tb.sv", 
                                       28);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->hashcore_tb__DOT__rst_i = 0U;
    vlSelf->hashcore_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0xf4240U, vlSelf->hashcore_tb__DOT__unnamedblk2__DOT__i)) {
        vlSelf->hashcore_tb__DOT__clk = 1U;
        co_await vlSelf->__VdlySched.delay(0x1f4ULL, 
                                           nullptr, 
                                           "testbench/hashcore_tb.sv", 
                                           26);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->hashcore_tb__DOT__clk = 0U;
        co_await vlSelf->__VdlySched.delay(0x1f4ULL, 
                                           nullptr, 
                                           "testbench/hashcore_tb.sv", 
                                           28);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->hashcore_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelf->hashcore_tb__DOT__unnamedblk2__DOT__i);
    }
    VL_WRITEF("Best hash after 10000 cycles: %x\n",
              256,vlSelf->hashcore_tb__DOT__best_hash.data());
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vhashcore_tb___024root___eval_act(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___eval_act\n"); );
}

void Vhashcore_tb___024root___timing_resume(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vhashcore_tb___024root___eval_triggers__act(Vhashcore_tb___024root* vlSelf);

bool Vhashcore_tb___024root___eval_phase__act(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vhashcore_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vhashcore_tb___024root___timing_resume(vlSelf);
        Vhashcore_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vhashcore_tb___024root___eval_nba(Vhashcore_tb___024root* vlSelf);

bool Vhashcore_tb___024root___eval_phase__nba(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vhashcore_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhashcore_tb___024root___dump_triggers__nba(Vhashcore_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhashcore_tb___024root___dump_triggers__act(Vhashcore_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhashcore_tb___024root___eval(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vhashcore_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench/hashcore_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vhashcore_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench/hashcore_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vhashcore_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vhashcore_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vhashcore_tb___024root___eval_debug_assertions(Vhashcore_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
