// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhashcore_tb.h for the primary calling header

#include "Vhashcore_tb__pch.h"
#include "Vhashcore_tb__Syms.h"
#include "Vhashcore_tb___024root.h"

void Vhashcore_tb___024root___ctor_var_reset(Vhashcore_tb___024root* vlSelf);

Vhashcore_tb___024root::Vhashcore_tb___024root(Vhashcore_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vhashcore_tb___024root___ctor_var_reset(this);
}

void Vhashcore_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vhashcore_tb___024root::~Vhashcore_tb___024root() {
}
