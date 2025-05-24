// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhashcore_tb.h for the primary calling header

#include "Vhashcore_tb__pch.h"
#include "Vhashcore_tb__Syms.h"
#include "Vhashcore_tb_doublesha.h"

void Vhashcore_tb_doublesha___ctor_var_reset(Vhashcore_tb_doublesha* vlSelf);

Vhashcore_tb_doublesha::Vhashcore_tb_doublesha(Vhashcore_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vhashcore_tb_doublesha___ctor_var_reset(this);
}

void Vhashcore_tb_doublesha::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vhashcore_tb_doublesha::~Vhashcore_tb_doublesha() {
}
