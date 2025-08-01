// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_TB__SYMS_H_
#define VERILATED_VTOP_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop_tb.h"

// INCLUDE MODULE CLASSES
#include "Vtop_tb___024root.h"
#include "Vtop_tb_doublesha.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_tb___024root              TOP;
    Vtop_tb_doublesha              TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE;
    Vtop_tb_doublesha              TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE;
    Vtop_tb_doublesha              TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE;
    Vtop_tb_doublesha              TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE;
    Vtop_tb_doublesha              TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE;
    Vtop_tb_doublesha              TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE;
    Vtop_tb_doublesha              TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE;
    Vtop_tb_doublesha              TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE;
    Vtop_tb_doublesha              TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE;
    Vtop_tb_doublesha              TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE;

    // CONSTRUCTORS
    Vtop_tb__Syms(VerilatedContext* contextp, const char* namep, Vtop_tb* modelp);
    ~Vtop_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
