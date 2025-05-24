// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhashcore_tb__Syms.h"


VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("hashcore_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1399,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+224,0,"best_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+232,0,"best_hash_nonce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1400,0,"block_without_nonce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 607,0);
    tracep->declArray(c+224,0,"best_hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+232,0,"best_hash_nonce",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("nonces", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+6+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declArray(c+16,0,"best_hash_reverse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->pushPrefix("output_hashes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declArray(c+233+i*8,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 255,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("reverse_output_hashes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declArray(c+313+i*8,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 255,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("completes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBit(c+393+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+403,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1398,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1419,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+404,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+405,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+406,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+407,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+24,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+408,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+409,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+417,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+418,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1420,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+434,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+442,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+443,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+444,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+445,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+446,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+447,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+448,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1421,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+449,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+450,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+417,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+445,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+443,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+446,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+446,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+451,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+452,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+453,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+454,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+455,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+456,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+457,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+458,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+460,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+462,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+463,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+464,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+465,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+466,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+467,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+471,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+472,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+473,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+474,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+475,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+476,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+477,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+478,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+479,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+480,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+481,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+482,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+483,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+484,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+485,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+486,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+487,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+488,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+489,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+490,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+491,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+492,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+493,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+494,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+495,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+496,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+497,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+498,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+499,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+44,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+507,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+508,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+516,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+517,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1422,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+533,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+541,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+542,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+543,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+544,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+546,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+547,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1421,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+548,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+549,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+516,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+541,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+542,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+545,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+545,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+550,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+551,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+552,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+553,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+554,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+555,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+556,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+557,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+558,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+559,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+560,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+561,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+562,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+564,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+565,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+566,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+567,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+568,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+569,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+570,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+571,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+572,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+573,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+575,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+576,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+577,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+579,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+581,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+582,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+583,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+584,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+585,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+586,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+587,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+588,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+589,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+590,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+591,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+593,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+595,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+596,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+597,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+598,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+64,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+606,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+607,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+615,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+616,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1423,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+632,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+640,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+641,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+642,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+643,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+644,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+645,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+646,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1421,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+647,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+648,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+615,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+643,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+640,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+641,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+644,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+644,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+649,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+650,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+651,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+652,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+653,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+654,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+655,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+656,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+657,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+658,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+659,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+660,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+661,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+663,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+664,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+667,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+668,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+669,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+670,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+671,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+672,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+673,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+674,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+675,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+676,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+677,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+678,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+679,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+680,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+681,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+682,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+683,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+684,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+685,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+686,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+687,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+688,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+689,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+690,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+691,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+692,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+693,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+694,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+695,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+696,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+697,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+84,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+705,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+706,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+714,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+715,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1424,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+731,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+739,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+740,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+741,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+742,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+743,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+744,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+745,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1421,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+746,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+747,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+714,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+742,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+739,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+740,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+743,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+743,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+748,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+749,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+750,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+751,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+752,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+753,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+754,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+755,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+756,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+757,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+758,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+759,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+760,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+761,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+762,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+763,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+764,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+765,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+766,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+767,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+768,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+769,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+770,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+771,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+772,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+773,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+774,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+775,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+776,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+777,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+778,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+779,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+780,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+781,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+782,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+783,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+784,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+785,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+787,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+788,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+789,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+790,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+791,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+792,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+793,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+794,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+795,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+796,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+104,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+804,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+805,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+813,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+814,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1425,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+830,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+838,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+839,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+840,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+841,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+842,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+843,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+844,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1421,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+845,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+846,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+813,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+841,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+838,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+839,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+842,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+842,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+847,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+848,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+849,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+850,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+851,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+852,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+853,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+854,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+855,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+856,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+857,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+858,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+859,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+860,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+861,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+862,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+863,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+864,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+865,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+866,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+867,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+868,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+869,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+870,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+871,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+872,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+873,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+874,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+875,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+876,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+877,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+878,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+879,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+880,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+881,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+882,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+883,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+884,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+885,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+886,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+887,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+888,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+889,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+890,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+891,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+892,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+893,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+894,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+895,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+124,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+903,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+904,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+912,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+913,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1426,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+929,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+937,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+938,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+939,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+940,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+941,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+942,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+943,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1421,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+944,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+945,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+912,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+940,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+937,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+938,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+941,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+941,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+946,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+947,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+948,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+949,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+950,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+951,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+952,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+953,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+954,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+955,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+956,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+957,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+958,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+959,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+960,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+961,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+962,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+963,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+964,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+965,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+966,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+967,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+968,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+969,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+970,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+971,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+972,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+973,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+974,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+975,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+976,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+977,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+978,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+979,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+980,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+981,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+982,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+983,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+984,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+985,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+987,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+988,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+989,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+990,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+991,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+992,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+993,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+994,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+144,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+1002,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1003,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1011,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1012,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1427,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1028,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1036,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1037,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1038,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1039,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1040,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1041,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1042,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1421,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1043,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1044,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1011,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1039,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1036,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1037,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1040,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1040,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1045,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1046,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1047,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1048,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1049,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1050,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1051,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1052,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1053,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1054,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1055,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1056,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1057,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1058,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1059,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1060,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1061,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1062,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1063,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1064,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1068,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1070,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1071,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1072,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1073,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1074,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1075,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1076,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1077,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1078,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1079,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1080,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1081,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1082,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1083,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1084,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1086,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1088,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1090,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1091,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1093,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+164,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+1101,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1102,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1110,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1111,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1428,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1127,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1135,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1136,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1137,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1138,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1139,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1140,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1141,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1421,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1142,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1143,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1110,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1138,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1135,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1136,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1139,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1139,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1144,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1145,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1146,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1147,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1148,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1149,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1150,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1151,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1152,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1153,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1154,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1155,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1156,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1157,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1158,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1159,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1160,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1161,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1162,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1163,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1164,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1165,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1166,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1167,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1168,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1169,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1170,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1171,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1172,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1173,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1176,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1177,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1178,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1179,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1180,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1181,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1182,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1183,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1184,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1185,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1187,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1188,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1189,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1190,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1191,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1192,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+184,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+1200,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1201,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1209,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1210,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1429,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1226,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1234,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1235,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1236,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1237,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1238,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1239,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1240,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1421,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1241,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1242,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1209,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1237,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1234,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1235,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1238,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1238,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1243,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1244,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1245,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1246,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1247,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1248,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1249,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1250,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1251,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1252,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1253,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1254,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1255,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1256,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1257,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1258,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1259,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1260,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1261,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1262,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1263,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1264,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1265,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1266,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1267,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1268,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1269,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1270,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1271,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1272,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1273,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1274,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1275,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1276,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1277,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1278,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1279,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1280,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1281,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1282,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1283,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1284,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1286,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1287,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1288,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1289,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1290,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1291,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE__0(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_init_sub__TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+204,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+1299,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1300,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1308,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1309,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1430,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1325,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1333,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1334,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1335,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1336,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1337,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1338,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1339,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1421,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1340,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1341,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1308,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1336,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1333,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1334,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1337,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1337,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1342,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1343,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1344,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1345,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1346,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1347,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1348,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1349,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1350,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1351,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1352,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1353,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1354,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1355,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1356,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1357,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1358,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1359,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1360,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1361,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1362,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1363,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1364,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1365,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1366,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1367,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1368,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1369,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1370,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1371,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1372,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1373,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1374,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1375,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1376,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1377,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1378,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1379,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1380,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1381,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1382,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1383,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1384,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1385,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1386,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1387,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1388,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1389,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1390,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_init_top(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_init_top\n"); );
    // Body
    Vhashcore_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vhashcore_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhashcore_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vhashcore_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhashcore_tb___024root__trace_register(Vhashcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vhashcore_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vhashcore_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vhashcore_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vhashcore_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_const_0_sub_0(Vhashcore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhashcore_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_const_0\n"); );
    // Init
    Vhashcore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhashcore_tb___024root*>(voidSelf);
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhashcore_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<19>/*607:0*/ Vhashcore_tb__ConstPool__CONST_h49516a1d_0;

VL_ATTR_COLD void Vhashcore_tb___024root__trace_const_0_sub_0(Vhashcore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1399,(vlSelf->hashcore_tb__DOT__start));
    bufp->fullWData(oldp+1400,(Vhashcore_tb__ConstPool__CONST_h49516a1d_0),608);
    bufp->fullIData(oldp+1419,(0xaU),32);
    bufp->fullIData(oldp+1420,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullCData(oldp+1421,(0U),4);
    bufp->fullIData(oldp+1422,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1423,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1424,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1425,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1426,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1427,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1428,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1429,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1430,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__tmp),32);
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_full_0_sub_0(Vhashcore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vhashcore_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_full_0\n"); );
    // Init
    Vhashcore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhashcore_tb___024root*>(voidSelf);
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhashcore_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vhashcore_tb___024root__trace_full_0_sub_0(Vhashcore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vhashcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhashcore_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    bufp->fullBit(oldp+1,(vlSelf->hashcore_tb__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelf->hashcore_tb__DOT__enable));
    bufp->fullBit(oldp+3,(vlSelf->hashcore_tb__DOT__rst_i));
    bufp->fullIData(oldp+4,(vlSelf->hashcore_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+5,(vlSelf->hashcore_tb__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[0]),32);
    bufp->fullIData(oldp+7,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[1]),32);
    bufp->fullIData(oldp+8,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[2]),32);
    bufp->fullIData(oldp+9,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[3]),32);
    bufp->fullIData(oldp+10,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[4]),32);
    bufp->fullIData(oldp+11,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[5]),32);
    bufp->fullIData(oldp+12,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[6]),32);
    bufp->fullIData(oldp+13,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[7]),32);
    bufp->fullIData(oldp+14,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[8]),32);
    bufp->fullIData(oldp+15,(vlSelf->hashcore_tb__DOT__DUT__DOT__nonces[9]),32);
    bufp->fullWData(oldp+16,(vlSelf->hashcore_tb__DOT__DUT__DOT__best_hash_reverse),256);
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
    bufp->fullWData(oldp+24,(__Vtemp_1),640);
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
    bufp->fullWData(oldp+44,(__Vtemp_2),640);
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
    bufp->fullWData(oldp+64,(__Vtemp_3),640);
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
    bufp->fullWData(oldp+84,(__Vtemp_4),640);
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
    bufp->fullWData(oldp+104,(__Vtemp_5),640);
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
    bufp->fullWData(oldp+124,(__Vtemp_6),640);
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
    bufp->fullWData(oldp+144,(__Vtemp_7),640);
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
    bufp->fullWData(oldp+164,(__Vtemp_8),640);
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
    bufp->fullWData(oldp+184,(__Vtemp_9),640);
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
    bufp->fullWData(oldp+204,(__Vtemp_10),640);
    bufp->fullWData(oldp+224,(vlSelf->hashcore_tb__DOT__best_hash),256);
    bufp->fullIData(oldp+232,(vlSelf->hashcore_tb__DOT__best_hash_nonce),32);
    bufp->fullWData(oldp+233,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[0]),256);
    bufp->fullWData(oldp+241,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[1]),256);
    bufp->fullWData(oldp+249,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[2]),256);
    bufp->fullWData(oldp+257,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[3]),256);
    bufp->fullWData(oldp+265,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[4]),256);
    bufp->fullWData(oldp+273,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[5]),256);
    bufp->fullWData(oldp+281,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[6]),256);
    bufp->fullWData(oldp+289,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[7]),256);
    bufp->fullWData(oldp+297,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[8]),256);
    bufp->fullWData(oldp+305,(vlSelf->hashcore_tb__DOT__DUT__DOT__output_hashes[9]),256);
    bufp->fullWData(oldp+313,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[0]),256);
    bufp->fullWData(oldp+321,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[1]),256);
    bufp->fullWData(oldp+329,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[2]),256);
    bufp->fullWData(oldp+337,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[3]),256);
    bufp->fullWData(oldp+345,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[4]),256);
    bufp->fullWData(oldp+353,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[5]),256);
    bufp->fullWData(oldp+361,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[6]),256);
    bufp->fullWData(oldp+369,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[7]),256);
    bufp->fullWData(oldp+377,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[8]),256);
    bufp->fullWData(oldp+385,(vlSelf->hashcore_tb__DOT__DUT__DOT__reverse_output_hashes[9]),256);
    bufp->fullBit(oldp+393,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[0]));
    bufp->fullBit(oldp+394,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[1]));
    bufp->fullBit(oldp+395,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[2]));
    bufp->fullBit(oldp+396,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[3]));
    bufp->fullBit(oldp+397,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[4]));
    bufp->fullBit(oldp+398,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[5]));
    bufp->fullBit(oldp+399,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[6]));
    bufp->fullBit(oldp+400,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[7]));
    bufp->fullBit(oldp+401,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[8]));
    bufp->fullBit(oldp+402,(vlSelf->hashcore_tb__DOT__DUT__DOT__completes[9]));
    bufp->fullBit(oldp+403,(vlSelf->hashcore_tb__DOT__DUT__DOT__rst));
    bufp->fullIData(oldp+404,(vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b),32);
    bufp->fullIData(oldp+405,(vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+406,(vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+407,(vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk6__DOT__k),32);
    bufp->fullBit(oldp+408,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+409,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+417,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+418,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+434,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+442,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+443,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+444,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+445,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+446,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+447,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+448,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+449,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+450,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+451,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+452,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+453,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+454,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+455,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+456,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+457,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+458,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+459,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+460,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+461,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+462,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+463,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+464,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+465,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+466,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+467,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+468,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+469,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+470,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+471,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+472,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+473,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+474,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+475,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+476,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+477,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+478,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+479,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+480,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+481,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+482,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+483,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+484,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+485,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+486,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+487,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+488,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+489,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+490,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+491,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+492,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+493,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+494,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+495,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U)))) 
                               + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+496,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                               + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                  + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0x19U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 7U)) ^ (
                                                   ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                     << 0xeU) 
                                                    | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                       >> 0x12U)) 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                     + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+497,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+498,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+499,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+507,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+508,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+516,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+517,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+533,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+541,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+542,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+543,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+544,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+545,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+546,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+547,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+548,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+549,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+550,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+551,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+552,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+553,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+554,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+555,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+556,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+557,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+558,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+559,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+560,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+561,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+562,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+563,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+564,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+565,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+566,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+567,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+568,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+569,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+570,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+571,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+572,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+573,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+574,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+575,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+576,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+577,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+578,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+579,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+580,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+581,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+582,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+583,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+584,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+585,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+586,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+587,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+588,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+589,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+590,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+591,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+592,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+593,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+594,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U)))) 
                               + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+595,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                               + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                  + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0x19U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 7U)) ^ (
                                                   ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                     << 0xeU) 
                                                    | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                       >> 0x12U)) 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                     + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+596,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+597,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+598,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+606,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+607,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+615,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+616,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+632,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+640,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+641,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+642,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+643,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+644,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+645,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+646,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+647,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+648,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+649,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+650,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+651,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+652,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+653,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+654,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+655,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+656,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+657,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+658,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+659,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+660,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+661,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+662,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+663,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+664,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+665,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+666,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+667,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+668,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+669,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+670,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+671,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+672,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+673,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+674,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+675,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+676,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+677,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+678,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+679,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+680,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+681,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+682,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+683,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+684,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+685,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+686,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+687,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+688,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+689,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+690,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+691,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+692,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+693,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U)))) 
                               + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+694,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                               + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                  + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0x19U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 7U)) ^ (
                                                   ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                     << 0xeU) 
                                                    | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                       >> 0x12U)) 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                     + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+695,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+696,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+697,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+705,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+706,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+714,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+715,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+731,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+739,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+740,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+741,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+742,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+743,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+744,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+745,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+746,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+747,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+748,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+749,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+750,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+751,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+752,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+753,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+754,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+755,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+756,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+757,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+758,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+759,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+760,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+761,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+762,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+763,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+764,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+765,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+766,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+767,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+768,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+769,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+770,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+771,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+772,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+773,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+774,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+775,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+776,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+777,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+778,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+779,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+780,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+781,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+782,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+783,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+784,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+785,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+786,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+787,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+788,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+789,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+790,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+791,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+792,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U)))) 
                               + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+793,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                               + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                  + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0x19U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 7U)) ^ (
                                                   ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                     << 0xeU) 
                                                    | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                       >> 0x12U)) 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                     + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+794,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+795,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+796,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+804,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+805,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+813,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+814,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+830,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+838,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+839,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+840,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+841,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+842,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+843,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+844,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+845,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+846,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+847,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+848,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+849,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+850,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+851,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+852,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+853,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+854,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+855,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+856,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+857,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+858,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+859,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+860,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+861,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+862,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+863,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+864,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+865,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+866,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+867,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+868,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+869,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+870,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+871,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+872,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+873,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+874,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+875,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+876,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+877,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+878,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+879,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+880,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+881,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+882,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+883,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+884,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+885,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+886,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+887,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+888,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+889,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+890,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+891,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U)))) 
                               + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+892,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                               + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                  + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0x19U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 7U)) ^ (
                                                   ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                     << 0xeU) 
                                                    | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                       >> 0x12U)) 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                     + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+893,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+894,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+895,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+903,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+904,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+912,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+913,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+929,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+937,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+938,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+939,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+940,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+941,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+942,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+943,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+944,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+945,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+946,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+947,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+948,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+949,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+950,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+951,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+952,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+953,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+954,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+955,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+956,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+957,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+958,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+959,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+960,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+961,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+962,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+963,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+964,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+965,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+966,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+967,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+968,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+969,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+970,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+971,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+972,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+973,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+974,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+975,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+976,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+977,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+978,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+979,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+980,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+981,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+982,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+983,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+984,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+985,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+986,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+987,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+988,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+989,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+990,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U)))) 
                               + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+991,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                               + (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                  + ((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0x19U) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 7U)) ^ (
                                                   ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                     << 0xeU) 
                                                    | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                       >> 0x12U)) 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                     + vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+992,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+993,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+994,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+1002,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+1003,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+1011,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+1012,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+1028,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+1036,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+1037,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+1038,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+1039,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+1040,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+1041,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+1042,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+1043,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+1044,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+1045,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+1046,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+1047,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+1048,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+1049,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+1050,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+1051,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+1052,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+1053,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+1054,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+1055,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+1056,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+1057,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+1058,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+1059,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+1060,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+1061,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+1062,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+1063,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+1064,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+1065,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+1066,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+1067,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+1068,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+1069,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+1070,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+1071,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+1072,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+1073,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+1074,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+1075,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+1076,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+1077,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+1078,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+1079,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+1080,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+1081,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+1082,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+1083,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                   ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+1084,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
    bufp->fullIData(oldp+1085,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                  << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                               >> 6U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x15U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0xbU)) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
    bufp->fullIData(oldp+1086,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                  << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               >> 7U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+1087,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+1088,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+1089,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                >> 2U)) 
                                 ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0xdU)) 
                                    ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+1090,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                   << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                               >> 0x11U)) 
                                 ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
    bufp->fullIData(oldp+1091,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+1092,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+1093,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+1101,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+1102,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+1110,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+1111,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+1127,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+1135,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+1136,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+1137,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+1138,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+1139,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+1140,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+1141,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+1142,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+1143,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+1144,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+1145,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+1146,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+1147,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+1148,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+1149,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+1150,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+1151,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+1152,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+1153,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+1154,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+1155,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+1156,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+1157,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+1158,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+1159,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+1160,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+1161,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+1162,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+1163,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+1164,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+1165,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+1166,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+1167,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+1168,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+1169,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+1170,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+1171,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+1172,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+1173,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+1174,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+1175,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+1176,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+1177,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+1178,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+1179,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+1180,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+1181,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+1182,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                   ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+1183,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
    bufp->fullIData(oldp+1184,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                  << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                               >> 6U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x15U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0xbU)) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
    bufp->fullIData(oldp+1185,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                  << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               >> 7U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+1186,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+1187,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+1188,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                >> 2U)) 
                                 ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0xdU)) 
                                    ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+1189,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                   << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                               >> 0x11U)) 
                                 ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
    bufp->fullIData(oldp+1190,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+1191,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+1192,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+1200,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+1201,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+1209,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+1210,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+1226,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+1234,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+1235,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+1236,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+1237,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+1238,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+1239,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+1240,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+1241,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+1242,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+1243,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+1244,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+1245,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+1246,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+1247,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+1248,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+1249,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+1250,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+1251,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+1252,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+1253,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+1254,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+1255,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+1256,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+1257,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+1258,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+1259,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+1260,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+1261,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+1262,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+1263,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+1264,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+1265,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+1266,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+1267,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+1268,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+1269,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+1270,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+1271,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+1272,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+1273,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+1274,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+1275,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+1276,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+1277,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+1278,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+1279,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+1280,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+1281,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                   ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+1282,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
    bufp->fullIData(oldp+1283,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                  << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                               >> 6U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x15U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0xbU)) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
    bufp->fullIData(oldp+1284,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                  << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               >> 7U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+1285,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+1286,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+1287,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                >> 2U)) 
                                 ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0xdU)) 
                                    ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+1288,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                   << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                               >> 0x11U)) 
                                 ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
    bufp->fullIData(oldp+1289,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+1290,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+1291,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+1299,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+1300,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+1308,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+1309,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+1325,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+1333,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+1334,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+1335,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+1336,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+1337,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+1338,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+1339,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+1340,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+1341,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+1342,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+1343,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+1344,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+1345,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+1346,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+1347,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+1348,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+1349,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+1350,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+1351,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+1352,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+1353,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+1354,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+1355,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+1356,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+1357,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+1358,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+1359,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+1360,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+1361,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+1362,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+1363,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+1364,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+1365,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+1366,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+1367,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+1368,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+1369,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+1370,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+1371,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+1372,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+1373,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+1374,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+1375,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+1376,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+1377,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+1378,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+1379,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                ^ ((~ vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                   & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+1380,(((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                   ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+1381,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
    bufp->fullIData(oldp+1382,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                  << 0x1aU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                               >> 6U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x15U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0xbU)) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
    bufp->fullIData(oldp+1383,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                  << 0x19U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               >> 7U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0xeU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+1384,((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+1385,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+1386,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   << 0x1eU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                >> 2U)) 
                                 ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x13U) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0xdU)) 
                                    ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                + ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+1387,(((((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                   << 0xfU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                               >> 0x11U)) 
                                 ^ (((vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xdU) | (vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
    bufp->fullIData(oldp+1388,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+1389,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+1390,(vlSymsp->TOP__hashcore_tb__DOT__DUT__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullIData(oldp+1398,(vlSelf->hashcore_tb__DOT__DUT__DOT__unnamedblk1__DOT__j),32);
}
