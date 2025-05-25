// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("top_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"CLK_100MHZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"UART_RXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"UART_TXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"read_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"bits_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("TOP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1446,0,"CLK_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1447,0,"CLKS_PER_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"CLK_100MHZ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"UART_RXD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"UART_TXD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1448,0,"rst_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"finished_recieving",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"finished_sending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"finished_read_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"finished_write_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"read_bytes_passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+237,0,"write_bytes_passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+238,0,"tx_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+239,0,"rx_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+240,0,"sending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1443,0,"second_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"hash_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+241,0,"block_info",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 607,0);
    tracep->declArray(c+260,0,"best_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+268,0,"best_hash_nonce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FSM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"finished_recieving",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"finished_sending",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1443,0,"second_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"hash_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"read_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+241,0,"block_without_nonce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 607,0);
    tracep->declArray(c+260,0,"best_hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+268,0,"best_hash_nonce",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("nonces", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+13+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declArray(c+23,0,"best_hash_reverse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->pushPrefix("output_hashes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declArray(c+269+i*8,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 255,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("reverse_output_hashes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declArray(c+349+i*8,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 255,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("completes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBit(c+429+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+439,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1444,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1449,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+440,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+441,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+443,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("TIMER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1446,0,"FREQUENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1443,0,"second_tick",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1445,0,"cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->popPrefix();
    tracep->pushPrefix("UART_RX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1447,0,"CLKS_PER_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"i_Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_Rx_Serial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"o_Rx_DV",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+239,0,"o_Rx_Byte",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1450,0,"s_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1451,0,"s_RX_START_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1452,0,"s_RX_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1453,0,"s_RX_STOP_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1454,0,"s_CLEANUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+444,0,"r_Rx_Data_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+445,0,"r_Rx_Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+446,0,"r_Clock_Count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+447,0,"r_Bit_Index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+239,0,"r_Rx_Byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+234,0,"r_Rx_DV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+448,0,"r_SM_Main",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("UART_TX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1447,0,"CLKS_PER_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"i_Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"i_Tx_DV",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+238,0,"i_Tx_Byte",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+240,0,"o_Tx_Active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"o_Tx_Serial",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"o_Tx_Done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1450,0,"s_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1451,0,"s_TX_START_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1452,0,"s_TX_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1453,0,"s_TX_STOP_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1454,0,"s_CLEANUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+449,0,"r_SM_Main",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+450,0,"r_Clock_Count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+451,0,"r_Bit_Index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+452,0,"r_Tx_Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+235,0,"r_Tx_Done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"r_Tx_Active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+31,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+453,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+454,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+462,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+463,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1455,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+479,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+487,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+488,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+489,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+490,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+491,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+492,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+493,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1456,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+494,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+495,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+462,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+490,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+487,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+488,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+491,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+496,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+497,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+498,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+499,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+500,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+501,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+502,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+503,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+504,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+505,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+507,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+509,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+510,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+511,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+512,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+513,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+514,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+515,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+516,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+517,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+518,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+519,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+520,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+521,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+522,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+523,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+524,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+525,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+526,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+527,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+528,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+529,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+530,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+531,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+532,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+533,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+534,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+535,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+536,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+538,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+539,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+540,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+541,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+542,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+544,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+51,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+552,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+553,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+561,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+562,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1457,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+578,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+586,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+587,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+588,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+589,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+590,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+591,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+592,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1456,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+593,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+594,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+561,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+589,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+587,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+590,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+590,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+595,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+596,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+597,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+598,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+599,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+600,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+601,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+602,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+603,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+604,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+605,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+606,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+607,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+609,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+610,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+611,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+612,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+613,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+614,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+615,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+616,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+617,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+618,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+619,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+620,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+621,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+622,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+623,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+624,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+625,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+626,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+627,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+628,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+629,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+630,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+631,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+632,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+633,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+635,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+636,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+637,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+638,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+639,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+640,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+641,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+642,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+643,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+71,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+651,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+652,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+660,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+661,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1458,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+677,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+685,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+686,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+687,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+688,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+689,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+690,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+691,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1456,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+692,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+693,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+660,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+688,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+685,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+686,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+689,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+689,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+694,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+695,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+696,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+697,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+698,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+699,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+700,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+701,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+702,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+703,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+704,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+705,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+706,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+707,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+708,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+709,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+710,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+711,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+712,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+713,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+714,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+715,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+716,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+717,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+718,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+719,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+720,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+721,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+722,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+723,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+724,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+725,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+726,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+727,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+728,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+729,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+730,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+731,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+732,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+733,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+734,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+735,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+736,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+738,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+739,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+740,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+741,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+742,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+91,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+750,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+751,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+759,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+760,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1459,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+776,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+784,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+785,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+786,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+787,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+788,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+789,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+790,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1456,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+791,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+792,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+759,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+787,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+784,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+785,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+788,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+788,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+793,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+794,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+795,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+796,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+797,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+798,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+799,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+800,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+801,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+802,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+803,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+804,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+805,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+806,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+807,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+808,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+809,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+810,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+811,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+812,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+813,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+814,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+815,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+816,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+817,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+818,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+819,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+820,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+821,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+822,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+823,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+824,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+825,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+826,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+827,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+828,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+829,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+830,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+831,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+832,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+834,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+835,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+836,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+837,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+838,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+839,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+840,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+841,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+111,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+849,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+850,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+858,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+859,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1460,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+875,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+883,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+884,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+885,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+886,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+887,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+888,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+889,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1456,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+890,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+891,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+858,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+886,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+883,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+884,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+887,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+887,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+892,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+893,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+894,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+895,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+896,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+897,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+898,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+899,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+900,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+901,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+902,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+903,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+904,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+905,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+906,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+907,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+908,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+909,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+910,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+911,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+912,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+913,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+914,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+915,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+916,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+917,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+918,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+919,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+920,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+921,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+922,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+923,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+924,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+925,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+926,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+927,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+928,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+929,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+930,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+931,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+932,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+933,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+934,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+935,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+936,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+937,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+938,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+939,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+940,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+131,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+948,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+949,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+957,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+958,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1461,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+974,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+982,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+983,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+984,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+985,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+987,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+988,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1456,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+989,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+990,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+957,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+985,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+983,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+986,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+986,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+991,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+992,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+993,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+994,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+995,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+996,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+997,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+998,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+999,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1000,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1001,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1002,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1003,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1005,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1006,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1007,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1008,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1009,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1010,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1011,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1013,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1014,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1015,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1016,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1017,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1018,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1019,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1020,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1021,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1022,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1023,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1024,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1025,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1026,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1027,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1028,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1029,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1030,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1031,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1032,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1033,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1034,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1035,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1036,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1037,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1038,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1039,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+151,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+1047,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1048,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1056,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1057,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1462,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1073,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1081,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1082,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1083,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1084,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1086,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1087,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1456,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1088,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1089,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1056,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1084,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1081,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1082,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1085,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1085,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1090,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1091,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1092,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1093,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1094,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1095,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1096,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1097,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1098,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1099,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1100,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1101,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1103,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1104,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1107,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1109,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1110,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1111,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1112,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1113,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1114,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1115,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1116,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1117,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1118,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1119,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1120,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1121,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1122,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1123,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1124,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1125,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1126,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1127,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1128,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1129,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1130,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1131,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1132,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1133,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1134,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1135,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1136,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1137,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1138,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+171,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+1146,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1147,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1155,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1156,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1463,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1172,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1180,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1181,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1182,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1183,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1184,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1185,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1186,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1456,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1187,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1188,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1155,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1183,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1180,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1181,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1184,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1184,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1189,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1190,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1191,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1192,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1193,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1194,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1195,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1196,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1197,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1198,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1199,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1200,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1201,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1202,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1203,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1204,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1205,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1206,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1207,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1208,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1209,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1211,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1212,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1213,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1215,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1216,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1217,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1218,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1219,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1220,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1221,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1222,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1223,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1224,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1225,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1226,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1227,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1228,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1229,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1230,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1231,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1232,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1233,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1234,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1235,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1236,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1237,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+191,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+1245,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1246,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1254,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1255,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1464,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1271,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1279,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1280,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1281,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1282,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1283,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1284,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1285,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1456,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1286,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1287,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1254,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1282,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1279,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1280,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1283,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1283,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1288,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1289,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1290,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1291,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1292,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1293,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1294,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1295,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1296,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1297,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1298,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1299,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1300,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1301,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1302,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1303,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1304,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1305,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1306,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1307,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1308,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1309,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1310,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1311,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1312,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1313,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1314,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1315,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1316,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1317,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1318,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1319,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1320,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1321,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1322,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1323,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1324,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1325,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1326,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1327,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1328,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1329,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1330,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1331,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1332,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1333,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1334,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1335,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1336,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE__0(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_sub__TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+211,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+1344,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1345,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1353,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1354,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1465,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1370,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1378,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1379,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1380,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1381,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1382,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1383,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1384,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1456,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1385,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1386,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1353,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1381,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1378,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1379,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1382,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1382,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1387,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1388,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1389,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1390,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1391,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1392,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1393,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1394,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1395,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1396,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1397,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1398,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1399,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1400,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1401,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1402,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1403,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1404,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1405,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1406,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1407,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1408,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1409,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1411,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1412,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1413,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1414,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1415,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1416,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1417,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1418,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1419,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1420,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1421,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1422,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1423,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1424,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1425,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1426,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1427,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1428,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1429,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1430,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1431,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1432,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1433,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1434,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1435,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop_tb___024root__trace_init_top(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_init_top\n"); );
    // Body
    Vtop_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_tb___024root__trace_register(Vtop_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_const_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1446,(0x186a0U),32);
    bufp->fullIData(oldp+1447,(0x14U),32);
    bufp->fullBit(oldp+1448,(vlSelf->top_tb__DOT__TOP__DOT__rst_i));
    bufp->fullIData(oldp+1449,(0xaU),32);
    bufp->fullCData(oldp+1450,(0U),3);
    bufp->fullCData(oldp+1451,(1U),3);
    bufp->fullCData(oldp+1452,(2U),3);
    bufp->fullCData(oldp+1453,(3U),3);
    bufp->fullCData(oldp+1454,(4U),3);
    bufp->fullIData(oldp+1455,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullCData(oldp+1456,(0U),4);
    bufp->fullIData(oldp+1457,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1458,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1459,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1460,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1461,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1462,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1463,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1464,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1465,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__tmp),32);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_0(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0_sub_0\n"); );
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
    bufp->fullBit(oldp+1,(vlSelf->top_tb__DOT__CLK_100MHZ));
    bufp->fullBit(oldp+2,(vlSelf->top_tb__DOT__UART_RXD));
    bufp->fullCData(oldp+3,(vlSelf->top_tb__DOT__read_byte),8);
    bufp->fullCData(oldp+4,(vlSelf->top_tb__DOT__bits_read),4);
    bufp->fullIData(oldp+5,(vlSelf->top_tb__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelf->top_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b),32);
    bufp->fullIData(oldp+7,(vlSelf->top_tb__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+8,(vlSelf->top_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__d),32);
    bufp->fullBit(oldp+9,((2U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))));
    bufp->fullBit(oldp+10,((0U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))));
    bufp->fullBit(oldp+11,((1U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))));
    bufp->fullCData(oldp+12,(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state),3);
    bufp->fullIData(oldp+13,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[0]),32);
    bufp->fullIData(oldp+14,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[1]),32);
    bufp->fullIData(oldp+15,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[2]),32);
    bufp->fullIData(oldp+16,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[3]),32);
    bufp->fullIData(oldp+17,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[4]),32);
    bufp->fullIData(oldp+18,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[5]),32);
    bufp->fullIData(oldp+19,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[6]),32);
    bufp->fullIData(oldp+20,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[7]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[8]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[9]),32);
    bufp->fullWData(oldp+23,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse),256);
    __Vtemp_1[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
        [0U];
    __Vtemp_1[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
    __Vtemp_1[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
    __Vtemp_1[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
    __Vtemp_1[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
    __Vtemp_1[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
    __Vtemp_1[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
    __Vtemp_1[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
    __Vtemp_1[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
    __Vtemp_1[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
    __Vtemp_1[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
    __Vtemp_1[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
    __Vtemp_1[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
    __Vtemp_1[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
    __Vtemp_1[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
    __Vtemp_1[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
    __Vtemp_1[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
    __Vtemp_1[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
    __Vtemp_1[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
    __Vtemp_1[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
    bufp->fullWData(oldp+31,(__Vtemp_1),640);
    __Vtemp_2[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
        [1U];
    __Vtemp_2[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
    __Vtemp_2[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
    __Vtemp_2[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
    __Vtemp_2[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
    __Vtemp_2[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
    __Vtemp_2[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
    __Vtemp_2[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
    __Vtemp_2[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
    __Vtemp_2[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
    __Vtemp_2[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
    __Vtemp_2[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
    __Vtemp_2[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
    __Vtemp_2[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
    __Vtemp_2[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
    __Vtemp_2[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
    __Vtemp_2[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
    __Vtemp_2[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
    __Vtemp_2[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
    __Vtemp_2[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
    bufp->fullWData(oldp+51,(__Vtemp_2),640);
    __Vtemp_3[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
        [2U];
    __Vtemp_3[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
    __Vtemp_3[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
    __Vtemp_3[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
    __Vtemp_3[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
    __Vtemp_3[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
    __Vtemp_3[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
    __Vtemp_3[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
    __Vtemp_3[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
    __Vtemp_3[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
    __Vtemp_3[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
    __Vtemp_3[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
    __Vtemp_3[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
    __Vtemp_3[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
    __Vtemp_3[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
    __Vtemp_3[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
    __Vtemp_3[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
    __Vtemp_3[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
    __Vtemp_3[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
    __Vtemp_3[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
    bufp->fullWData(oldp+71,(__Vtemp_3),640);
    __Vtemp_4[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
        [3U];
    __Vtemp_4[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
    __Vtemp_4[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
    __Vtemp_4[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
    __Vtemp_4[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
    __Vtemp_4[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
    __Vtemp_4[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
    __Vtemp_4[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
    __Vtemp_4[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
    __Vtemp_4[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
    __Vtemp_4[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
    __Vtemp_4[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
    __Vtemp_4[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
    __Vtemp_4[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
    __Vtemp_4[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
    __Vtemp_4[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
    __Vtemp_4[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
    __Vtemp_4[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
    __Vtemp_4[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
    __Vtemp_4[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
    bufp->fullWData(oldp+91,(__Vtemp_4),640);
    __Vtemp_5[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
        [4U];
    __Vtemp_5[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
    __Vtemp_5[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
    __Vtemp_5[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
    __Vtemp_5[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
    __Vtemp_5[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
    __Vtemp_5[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
    __Vtemp_5[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
    __Vtemp_5[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
    __Vtemp_5[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
    __Vtemp_5[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
    __Vtemp_5[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
    __Vtemp_5[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
    __Vtemp_5[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
    __Vtemp_5[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
    __Vtemp_5[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
    __Vtemp_5[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
    __Vtemp_5[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
    __Vtemp_5[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
    __Vtemp_5[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
    bufp->fullWData(oldp+111,(__Vtemp_5),640);
    __Vtemp_6[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
        [5U];
    __Vtemp_6[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
    __Vtemp_6[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
    __Vtemp_6[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
    __Vtemp_6[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
    __Vtemp_6[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
    __Vtemp_6[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
    __Vtemp_6[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
    __Vtemp_6[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
    __Vtemp_6[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
    __Vtemp_6[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
    __Vtemp_6[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
    __Vtemp_6[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
    __Vtemp_6[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
    __Vtemp_6[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
    __Vtemp_6[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
    __Vtemp_6[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
    __Vtemp_6[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
    __Vtemp_6[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
    __Vtemp_6[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
    bufp->fullWData(oldp+131,(__Vtemp_6),640);
    __Vtemp_7[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
        [6U];
    __Vtemp_7[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
    __Vtemp_7[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
    __Vtemp_7[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
    __Vtemp_7[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
    __Vtemp_7[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
    __Vtemp_7[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
    __Vtemp_7[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
    __Vtemp_7[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
    __Vtemp_7[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
    __Vtemp_7[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
    __Vtemp_7[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
    __Vtemp_7[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
    __Vtemp_7[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
    __Vtemp_7[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
    __Vtemp_7[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
    __Vtemp_7[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
    __Vtemp_7[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
    __Vtemp_7[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
    __Vtemp_7[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
    bufp->fullWData(oldp+151,(__Vtemp_7),640);
    __Vtemp_8[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
        [7U];
    __Vtemp_8[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
    __Vtemp_8[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
    __Vtemp_8[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
    __Vtemp_8[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
    __Vtemp_8[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
    __Vtemp_8[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
    __Vtemp_8[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
    __Vtemp_8[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
    __Vtemp_8[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
    __Vtemp_8[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
    __Vtemp_8[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
    __Vtemp_8[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
    __Vtemp_8[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
    __Vtemp_8[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
    __Vtemp_8[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
    __Vtemp_8[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
    __Vtemp_8[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
    __Vtemp_8[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
    __Vtemp_8[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
    bufp->fullWData(oldp+171,(__Vtemp_8),640);
    __Vtemp_9[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
        [8U];
    __Vtemp_9[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
    __Vtemp_9[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
    __Vtemp_9[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
    __Vtemp_9[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
    __Vtemp_9[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
    __Vtemp_9[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
    __Vtemp_9[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
    __Vtemp_9[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
    __Vtemp_9[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
    __Vtemp_9[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
    __Vtemp_9[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
    __Vtemp_9[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
    __Vtemp_9[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
    __Vtemp_9[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
    __Vtemp_9[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
    __Vtemp_9[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
    __Vtemp_9[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
    __Vtemp_9[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
    __Vtemp_9[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
    bufp->fullWData(oldp+191,(__Vtemp_9),640);
    __Vtemp_10[0U] = vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces
        [9U];
    __Vtemp_10[1U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0U];
    __Vtemp_10[2U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[1U];
    __Vtemp_10[3U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[2U];
    __Vtemp_10[4U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[3U];
    __Vtemp_10[5U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[4U];
    __Vtemp_10[6U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[5U];
    __Vtemp_10[7U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[6U];
    __Vtemp_10[8U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[7U];
    __Vtemp_10[9U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[8U];
    __Vtemp_10[0xaU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[9U];
    __Vtemp_10[0xbU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xaU];
    __Vtemp_10[0xcU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xbU];
    __Vtemp_10[0xdU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xcU];
    __Vtemp_10[0xeU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xdU];
    __Vtemp_10[0xfU] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xeU];
    __Vtemp_10[0x10U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0xfU];
    __Vtemp_10[0x11U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x10U];
    __Vtemp_10[0x12U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x11U];
    __Vtemp_10[0x13U] = vlSelf->top_tb__DOT__TOP__DOT__block_info[0x12U];
    bufp->fullWData(oldp+211,(__Vtemp_10),640);
    bufp->fullBit(oldp+231,(vlSelf->top_tb__DOT__UART_TXD));
    bufp->fullBit(oldp+232,(vlSelf->top_tb__DOT__TOP__DOT__finished_recieving));
    bufp->fullBit(oldp+233,(vlSelf->top_tb__DOT__TOP__DOT__finished_sending));
    bufp->fullBit(oldp+234,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_DV));
    bufp->fullBit(oldp+235,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Done));
    bufp->fullCData(oldp+236,(vlSelf->top_tb__DOT__TOP__DOT__read_bytes_passed),8);
    bufp->fullCData(oldp+237,(vlSelf->top_tb__DOT__TOP__DOT__write_bytes_passed),3);
    bufp->fullCData(oldp+238,(vlSelf->top_tb__DOT__TOP__DOT__tx_byte),8);
    bufp->fullCData(oldp+239,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Byte),8);
    bufp->fullBit(oldp+240,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Active));
    bufp->fullWData(oldp+241,(vlSelf->top_tb__DOT__TOP__DOT__block_info),608);
    bufp->fullWData(oldp+260,(vlSelf->top_tb__DOT__TOP__DOT__best_hash),256);
    bufp->fullIData(oldp+268,(vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce),32);
    bufp->fullWData(oldp+269,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[0]),256);
    bufp->fullWData(oldp+277,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[1]),256);
    bufp->fullWData(oldp+285,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[2]),256);
    bufp->fullWData(oldp+293,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[3]),256);
    bufp->fullWData(oldp+301,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[4]),256);
    bufp->fullWData(oldp+309,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[5]),256);
    bufp->fullWData(oldp+317,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[6]),256);
    bufp->fullWData(oldp+325,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[7]),256);
    bufp->fullWData(oldp+333,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[8]),256);
    bufp->fullWData(oldp+341,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[9]),256);
    bufp->fullWData(oldp+349,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[0]),256);
    bufp->fullWData(oldp+357,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[1]),256);
    bufp->fullWData(oldp+365,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[2]),256);
    bufp->fullWData(oldp+373,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[3]),256);
    bufp->fullWData(oldp+381,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[4]),256);
    bufp->fullWData(oldp+389,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[5]),256);
    bufp->fullWData(oldp+397,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[6]),256);
    bufp->fullWData(oldp+405,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[7]),256);
    bufp->fullWData(oldp+413,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[8]),256);
    bufp->fullWData(oldp+421,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[9]),256);
    bufp->fullBit(oldp+429,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[0]));
    bufp->fullBit(oldp+430,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[1]));
    bufp->fullBit(oldp+431,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[2]));
    bufp->fullBit(oldp+432,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[3]));
    bufp->fullBit(oldp+433,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[4]));
    bufp->fullBit(oldp+434,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[5]));
    bufp->fullBit(oldp+435,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[6]));
    bufp->fullBit(oldp+436,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[7]));
    bufp->fullBit(oldp+437,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[8]));
    bufp->fullBit(oldp+438,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[9]));
    bufp->fullBit(oldp+439,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst));
    bufp->fullIData(oldp+440,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk2__DOT__unnamedblk3__DOT__b),32);
    bufp->fullIData(oldp+441,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+442,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+443,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk6__DOT__k),32);
    bufp->fullBit(oldp+444,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data_R));
    bufp->fullBit(oldp+445,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data));
    bufp->fullCData(oldp+446,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count),8);
    bufp->fullCData(oldp+447,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Bit_Index),3);
    bufp->fullCData(oldp+448,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main),3);
    bufp->fullCData(oldp+449,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main),3);
    bufp->fullCData(oldp+450,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count),8);
    bufp->fullCData(oldp+451,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Bit_Index),3);
    bufp->fullCData(oldp+452,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Data),8);
    bufp->fullBit(oldp+453,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+454,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+462,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+463,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+479,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+487,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+488,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+489,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+490,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+491,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+492,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+493,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+494,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+495,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+496,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+497,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+498,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+499,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+500,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+501,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+502,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+503,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+504,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+505,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+506,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+507,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+508,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+509,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+510,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+511,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+512,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+513,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+514,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+515,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+516,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+517,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+518,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+519,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+520,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+521,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+522,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+523,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+524,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+525,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+526,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+527,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+528,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+529,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+530,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+531,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+532,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+533,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+534,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+535,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+536,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+537,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+538,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+539,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+540,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U)))) 
                               + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+541,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                               + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                  + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0x19U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 7U)) ^ (
                                                   ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                     << 0xeU) 
                                                    | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                       >> 0x12U)) 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                     + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+542,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+543,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+544,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+552,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+553,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+561,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+562,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+578,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+586,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+587,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+588,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+589,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+590,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+591,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+592,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+593,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+594,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+595,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+596,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+597,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+598,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+599,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+600,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+601,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+602,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+603,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+604,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+605,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+606,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+607,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+608,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+609,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+610,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+611,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+612,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+613,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+614,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+615,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+616,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+617,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+618,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+619,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+620,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+621,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+622,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+623,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+624,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+625,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+626,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+627,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+628,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+629,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+630,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+631,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+632,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+633,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+634,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+635,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+636,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+637,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+638,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+639,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U)))) 
                               + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+640,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                               + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                  + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0x19U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 7U)) ^ (
                                                   ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                     << 0xeU) 
                                                    | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                       >> 0x12U)) 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                     + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+641,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+642,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+643,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+651,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+652,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+660,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+661,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+677,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+685,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+686,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+687,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+688,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+689,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+690,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+691,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+692,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+693,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+694,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+695,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+696,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+697,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+698,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+699,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+700,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+701,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+702,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+703,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+704,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+705,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+706,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+707,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+708,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+709,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+710,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+711,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+712,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+713,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+714,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+715,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+716,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+717,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+718,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+719,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+720,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+721,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+722,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+723,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+724,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+725,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+726,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+727,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+728,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+729,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+730,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+731,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+732,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+733,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+734,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+735,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+736,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+737,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+738,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U)))) 
                               + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+739,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                               + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                  + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0x19U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 7U)) ^ (
                                                   ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                     << 0xeU) 
                                                    | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                       >> 0x12U)) 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                     + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+740,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+741,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+742,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+750,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+751,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+759,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+760,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+776,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+784,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+785,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+786,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+787,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+788,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+789,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+790,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+791,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+792,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+793,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+794,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+795,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+796,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+797,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+798,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+799,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+800,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+801,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+802,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+803,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+804,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+805,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+806,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+807,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+808,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+809,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+810,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+811,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+812,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+813,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+814,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+815,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+816,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+817,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+818,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+819,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+820,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+821,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+822,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+823,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+824,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+825,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+826,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+827,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+828,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+829,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+830,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+831,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+832,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+833,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+834,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+835,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+836,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+837,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U)))) 
                               + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+838,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                               + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                  + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0x19U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 7U)) ^ (
                                                   ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                     << 0xeU) 
                                                    | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                       >> 0x12U)) 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                     + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+839,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+840,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+841,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+849,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+850,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+858,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+859,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+875,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+883,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+884,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+885,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+886,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+887,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+888,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+889,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+890,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+891,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+892,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+893,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+894,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+895,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+896,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+897,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+898,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+899,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+900,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+901,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+902,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+903,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+904,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+905,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+906,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+907,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+908,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+909,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+910,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+911,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+912,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+913,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+914,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+915,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+916,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+917,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+918,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+919,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+920,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+921,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+922,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+923,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+924,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+925,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+926,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+927,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+928,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+929,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+930,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+931,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+932,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+933,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+934,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+935,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+936,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U)))) 
                               + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                     ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+937,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                               + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                  + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        << 0x19U) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                        >> 7U)) ^ (
                                                   ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                     << 0xeU) 
                                                    | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                       >> 0x12U)) 
                                                   ^ 
                                                   VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                     + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+938,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+939,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+940,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+948,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+949,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+957,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+958,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+974,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+982,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+983,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+984,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+985,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+986,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+987,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+988,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+989,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+990,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+991,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+992,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+993,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+994,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+995,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+996,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+997,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+998,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+999,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+1000,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+1001,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+1002,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+1003,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+1004,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+1005,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+1006,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+1007,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+1008,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+1009,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+1010,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+1011,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+1012,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+1013,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+1014,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+1015,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+1016,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+1017,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+1018,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+1019,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+1020,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+1021,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+1022,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+1023,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+1024,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+1025,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+1026,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+1027,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+1028,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+1029,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                   ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+1030,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
    bufp->fullIData(oldp+1031,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                  << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                               >> 6U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0xbU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
    bufp->fullIData(oldp+1032,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                  << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               >> 7U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+1033,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+1034,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+1035,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                >> 2U)) 
                                 ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0xdU)) 
                                    ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+1036,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                   << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                               >> 0x11U)) 
                                 ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                  >> 0x13U)) 
                                    ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                   + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                         << 0x19U) 
                                        | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           >> 7U)) 
                                       ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                            << 0xeU) 
                                           | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 0x12U)) 
                                          ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                      + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+1037,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+1038,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+1039,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+1047,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+1048,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+1056,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+1057,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+1073,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+1081,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+1082,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+1083,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+1084,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+1085,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+1086,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+1087,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+1088,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+1089,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+1090,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+1091,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+1092,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+1093,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+1094,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+1095,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+1096,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+1097,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+1098,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+1099,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+1100,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+1101,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+1102,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+1103,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+1104,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+1105,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+1106,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+1107,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+1108,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+1109,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+1110,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+1111,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+1112,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+1113,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+1114,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+1115,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+1116,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+1117,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+1118,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+1119,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+1120,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+1121,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+1122,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+1123,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+1124,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+1125,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+1126,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+1127,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+1128,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                   ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+1129,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
    bufp->fullIData(oldp+1130,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                  << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                               >> 6U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0xbU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
    bufp->fullIData(oldp+1131,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                  << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               >> 7U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+1132,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+1133,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+1134,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                >> 2U)) 
                                 ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0xdU)) 
                                    ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+1135,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                   << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                               >> 0x11U)) 
                                 ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                  >> 0x13U)) 
                                    ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                   + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                         << 0x19U) 
                                        | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           >> 7U)) 
                                       ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                            << 0xeU) 
                                           | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 0x12U)) 
                                          ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                      + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+1136,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+1137,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+1138,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+1146,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+1147,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+1155,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+1156,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+1172,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+1180,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+1181,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+1182,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+1183,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+1184,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+1185,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+1186,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+1187,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+1188,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+1189,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+1190,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+1191,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+1192,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+1193,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+1194,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+1195,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+1196,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+1197,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+1198,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+1199,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+1200,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+1201,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+1202,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+1203,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+1204,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+1205,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+1206,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+1207,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+1208,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+1209,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+1210,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+1211,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+1212,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+1213,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+1214,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+1215,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+1216,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+1217,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+1218,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+1219,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+1220,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+1221,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+1222,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+1223,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+1224,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+1225,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+1226,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+1227,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                   ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+1228,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
    bufp->fullIData(oldp+1229,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                  << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                               >> 6U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0xbU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
    bufp->fullIData(oldp+1230,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                  << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               >> 7U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+1231,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+1232,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+1233,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                >> 2U)) 
                                 ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0xdU)) 
                                    ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+1234,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                   << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                               >> 0x11U)) 
                                 ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                  >> 0x13U)) 
                                    ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                   + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                         << 0x19U) 
                                        | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           >> 7U)) 
                                       ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                            << 0xeU) 
                                           | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 0x12U)) 
                                          ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                      + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+1235,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+1236,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+1237,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+1245,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+1246,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+1254,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+1255,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+1271,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+1279,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+1280,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+1281,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+1282,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+1283,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+1284,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+1285,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+1286,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+1287,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+1288,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+1289,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+1290,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+1291,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+1292,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+1293,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+1294,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+1295,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+1296,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+1297,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+1298,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+1299,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+1300,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+1301,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+1302,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+1303,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+1304,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+1305,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+1306,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+1307,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+1308,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+1309,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+1310,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+1311,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+1312,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+1313,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+1314,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+1315,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+1316,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+1317,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+1318,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+1319,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+1320,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+1321,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+1322,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+1323,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+1324,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+1325,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+1326,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                   ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+1327,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
    bufp->fullIData(oldp+1328,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                  << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                               >> 6U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0xbU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
    bufp->fullIData(oldp+1329,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                  << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               >> 7U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+1330,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+1331,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+1332,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                >> 2U)) 
                                 ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0xdU)) 
                                    ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+1333,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                   << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                               >> 0x11U)) 
                                 ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                  >> 0x13U)) 
                                    ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                   + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                         << 0x19U) 
                                        | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           >> 7U)) 
                                       ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                            << 0xeU) 
                                           | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 0x12U)) 
                                          ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                      + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+1334,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+1335,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+1336,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+1344,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+1345,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+1353,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+1354,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+1370,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+1378,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+1379,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+1380,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+1381,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+1382,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+1383,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+1384,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+1385,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+1386,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+1387,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+1388,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+1389,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+1390,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+1391,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+1392,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+1393,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+1394,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+1395,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+1396,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+1397,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+1398,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+1399,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+1400,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+1401,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+1402,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+1403,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+1404,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+1405,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+1406,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+1407,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+1408,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+1409,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+1410,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+1411,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+1412,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+1413,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+1414,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+1415,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+1416,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+1417,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+1418,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+1419,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+1420,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+1421,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+1422,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+1423,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+1424,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+1425,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                   ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+1426,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
    bufp->fullIData(oldp+1427,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                  << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                               >> 6U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0xbU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
    bufp->fullIData(oldp+1428,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                  << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               >> 7U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+1429,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+1430,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+1431,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                   << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                >> 2U)) 
                                 ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0xdU)) 
                                    ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        << 0xaU) | 
                                       (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                        >> 0x16U)))) 
                                + ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                       & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                      ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                         & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+1432,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                   << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                               >> 0x11U)) 
                                 ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                      << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                  >> 0x13U)) 
                                    ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU))) 
                                + (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9 
                                   + ((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                         << 0x19U) 
                                        | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                           >> 7U)) 
                                       ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                            << 0xeU) 
                                           | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 0x12U)) 
                                          ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U))) 
                                      + vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+1433,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+1434,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+1435,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+1443,(vlSelf->top_tb__DOT__TOP__DOT__second_tick));
    bufp->fullIData(oldp+1444,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+1445,(vlSelf->top_tb__DOT__TOP__DOT__TIMER__DOT__cycles),27);
}
