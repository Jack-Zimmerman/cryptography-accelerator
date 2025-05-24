// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VHASHCORE_TB__SYMS_H_
#define VERILATED_VHASHCORE_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vhashcore_tb.h"

// INCLUDE MODULE CLASSES
#include "Vhashcore_tb___024root.h"
#include "Vhashcore_tb_doublesha.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vhashcore_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vhashcore_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vhashcore_tb___024root         TOP;
    Vhashcore_tb_doublesha         TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha         TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha         TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha         TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha         TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha         TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha         TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha         TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha         TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE;
    Vhashcore_tb_doublesha         TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE;

    // CONSTRUCTORS
    Vhashcore_tb__Syms(VerilatedContext* contextp, const char* namep, Vhashcore_tb* modelp);
    ~Vhashcore_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
