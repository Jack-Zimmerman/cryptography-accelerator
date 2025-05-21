// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdoublesha_tb.h for the primary calling header

#include "Vdoublesha_tb__pch.h"
#include "Vdoublesha_tb__Syms.h"
#include "Vdoublesha_tb___024root.h"

void Vdoublesha_tb___024root___ctor_var_reset(Vdoublesha_tb___024root* vlSelf);

Vdoublesha_tb___024root::Vdoublesha_tb___024root(Vdoublesha_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdoublesha_tb___024root___ctor_var_reset(this);
}

void Vdoublesha_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdoublesha_tb___024root::~Vdoublesha_tb___024root() {
}
