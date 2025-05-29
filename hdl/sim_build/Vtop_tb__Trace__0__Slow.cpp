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
    tracep->declBit(c+230,0,"UART_TXD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"LED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"read_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+1454,0,"hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1462,0,"bits_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1463,0,"hashing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("TOP", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"CLK_100MHZ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"UART_TXD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"UART_RXD",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+231,0,"LED",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1464,0,"rst_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"finished_recieving",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"finished_sending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"finished_read_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"finished_write_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"read_bytes_passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+237,0,"write_bytes_passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+238,0,"repeat_bytes_sent",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+239,0,"tx_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+240,0,"rx_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+241,0,"sending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1451,0,"second_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"hash_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+242,0,"block_info",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 607,0);
    tracep->declArray(c+261,0,"best_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declArray(c+269,0,"copy_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+277,0,"best_hash_nonce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1465,0,"best_hash_nonce_copy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FSM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"finished_recieving",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"finished_sending",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1451,0,"second_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1464,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"hash_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"read_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("HASHCORE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1464,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+242,0,"block_without_nonce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 607,0);
    tracep->declArray(c+261,0,"best_hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+277,0,"best_hash_nonce",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("nonces", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+12+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declArray(c+22,0,"best_hash_reverse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->pushPrefix("output_hashes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declArray(c+278+i*8,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 255,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("reverse_output_hashes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declArray(c+358+i*8,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 255,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("completes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBit(c+438+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+448,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBus(c+1452,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+449,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+450,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("TIMER", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1466,0,"FREQUENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1464,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1451,0,"second_tick",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1453,0,"cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->popPrefix();
    tracep->pushPrefix("UART_RX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1467,0,"CLKS_PER_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"i_Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i_Rx_Serial",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"o_Rx_DV",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+240,0,"o_Rx_Byte",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1468,0,"s_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1469,0,"s_RX_START_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1470,0,"s_RX_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1471,0,"s_RX_STOP_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1472,0,"s_CLEANUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+452,0,"r_Rx_Data_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+453,0,"r_Rx_Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+454,0,"r_Clock_Count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+455,0,"r_Bit_Index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+240,0,"r_Rx_Byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+234,0,"r_Rx_DV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+456,0,"r_SM_Main",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("UART_TX", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1467,0,"CLKS_PER_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"i_Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"i_Tx_DV",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+239,0,"i_Tx_Byte",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+241,0,"o_Tx_Active",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"o_Tx_Serial",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"o_Tx_Done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1468,0,"s_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1469,0,"s_TX_START_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1470,0,"s_TX_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1471,0,"s_TX_STOP_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1472,0,"s_CLEANUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+457,0,"r_SM_Main",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+458,0,"r_Clock_Count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+459,0,"r_Bit_Index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+460,0,"r_Tx_Data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+235,0,"r_Tx_Done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"r_Tx_Active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
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
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+30,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+461,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+462,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+470,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+471,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1473,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+487,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+495,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+496,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+497,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+498,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+499,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+500,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1474,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+502,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+503,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+470,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+498,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+495,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+496,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+499,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+499,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+504,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+505,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+506,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+507,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+509,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+510,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+511,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+512,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+513,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+514,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+515,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+516,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+517,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+518,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+519,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+520,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+521,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+522,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+523,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+524,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+525,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+526,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+527,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+528,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+529,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+530,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+531,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+532,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+533,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+534,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+535,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+536,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+537,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+538,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+539,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+540,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+541,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+542,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+543,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+544,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+545,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+546,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+547,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+548,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+549,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+550,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+551,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+552,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
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
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+50,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+560,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+561,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+569,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+570,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1475,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+586,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+594,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+595,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+596,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+597,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+598,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+599,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+600,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1474,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+601,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+602,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+569,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+597,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+595,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+598,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+598,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+603,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+604,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+605,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+606,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+607,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+609,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+610,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+611,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+612,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+613,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+614,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+615,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+616,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+617,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+618,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+619,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+620,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+621,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+622,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+623,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+624,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+625,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+626,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+627,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+628,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+629,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+630,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+631,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+632,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+633,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+634,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+635,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+636,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+637,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+638,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+639,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+640,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+641,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+642,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+643,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+644,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+645,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+646,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+647,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+648,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+649,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+650,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+651,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
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
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+70,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+659,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+660,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+668,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+669,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1476,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+685,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+693,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+694,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+695,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+696,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+697,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+698,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+699,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1474,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+700,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+701,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+668,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+696,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+693,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+694,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+697,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+697,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+702,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+703,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+704,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+705,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+706,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+707,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+708,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+709,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+710,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+711,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+712,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+713,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+714,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+715,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+716,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+717,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+718,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+719,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+720,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+721,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+722,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+723,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+724,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+725,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+726,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+727,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+728,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+729,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+730,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+731,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+732,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+733,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+734,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+735,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+736,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+738,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+739,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+740,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+741,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+742,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+743,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+744,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+745,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+746,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+747,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+748,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+749,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+750,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
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
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+90,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+758,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+759,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+767,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+768,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1477,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+784,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+792,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+793,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+794,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+795,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+796,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+797,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+798,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1474,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+799,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+800,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+767,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+795,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+792,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+793,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+796,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+796,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+801,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+802,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+803,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+804,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+805,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+806,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+807,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+808,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+809,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+810,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+811,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+812,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+813,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+814,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+815,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+816,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+817,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+818,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+819,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+820,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+821,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+822,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+823,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+824,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+825,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+826,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+827,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+828,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+829,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+830,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+831,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+832,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+833,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+834,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+835,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+836,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+837,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+838,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+839,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+840,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+841,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+842,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+843,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+844,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+845,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+846,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+847,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+848,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+849,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
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
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+110,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+857,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+858,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+866,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+867,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1478,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+883,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+891,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+892,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+893,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+894,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+895,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+896,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+897,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1474,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+898,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+899,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+866,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+894,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+891,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+892,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+895,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+895,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+900,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+901,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+902,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+903,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+904,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+905,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+906,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+907,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+908,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+909,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+910,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+911,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+912,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+913,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+914,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+915,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+916,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+917,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+918,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+919,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+920,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+921,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+922,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+923,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+924,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+925,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+926,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+927,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+928,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+929,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+930,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+931,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+932,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+933,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+934,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+935,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+936,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+937,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+938,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+939,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+940,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+941,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+942,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+943,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+944,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+945,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+946,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+947,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+948,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
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
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+130,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+956,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+957,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+965,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+966,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1479,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+982,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+990,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+991,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+992,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+993,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+994,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+995,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+996,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1474,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+997,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+998,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+965,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+993,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+990,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+991,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+994,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+994,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+999,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1000,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1001,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1002,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1003,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1005,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1006,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1007,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1008,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1009,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1010,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1011,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1013,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1014,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1015,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1016,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1017,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1018,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1019,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1020,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1021,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1022,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1023,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1024,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1025,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1026,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1027,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1028,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1029,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1030,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1031,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1032,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1033,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1034,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1035,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1036,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1037,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1038,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1039,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1040,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1041,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1042,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1043,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1044,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1045,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1046,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1047,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
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
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+150,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+1055,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1056,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1064,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1065,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1480,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1081,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1089,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1090,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1091,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1092,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1093,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1094,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1095,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1474,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1096,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1097,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1064,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1090,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1093,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1093,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1098,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1099,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1100,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1101,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1103,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1104,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1107,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1109,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1110,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1111,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1112,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1113,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1114,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1115,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1116,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1117,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1118,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1119,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1120,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1121,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1122,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1123,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1124,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1125,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1126,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1127,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1128,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1129,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1130,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1131,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1132,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1133,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1134,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1135,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1136,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1137,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1138,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1139,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1140,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1141,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1142,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1143,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1144,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1145,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1146,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
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
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+170,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+1154,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1155,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1163,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1164,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1481,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1180,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1188,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1189,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1190,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1191,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1192,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1193,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1194,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1474,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1195,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1196,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1163,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1191,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1188,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1189,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1192,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1192,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1197,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1198,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1199,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1200,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1201,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1202,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1203,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1204,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1205,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1206,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1207,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1208,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1209,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1210,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1211,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1212,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1213,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1215,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1216,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1217,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1218,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1219,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1220,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1221,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1222,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1223,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1224,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1225,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1226,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1227,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1228,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1229,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1230,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1231,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1232,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1233,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1234,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1235,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1236,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1237,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1238,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1239,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1240,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1241,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1242,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1243,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1244,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1245,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
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
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+190,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+1253,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1254,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1262,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1263,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1482,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1279,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1287,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1288,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1289,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1290,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1291,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1292,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1293,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1474,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1294,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1295,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1262,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1290,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1287,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1288,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1291,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1291,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1296,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1297,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1298,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1299,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1300,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1301,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1302,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1303,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1304,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1305,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1306,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1307,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1308,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1309,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1310,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1311,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1312,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1313,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1314,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1315,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1316,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1317,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1318,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1319,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1320,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1321,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1322,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1323,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1324,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1325,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1326,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1327,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1328,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1329,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1330,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1331,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1332,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1333,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1334,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1335,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1336,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1337,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1338,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1339,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1340,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1341,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1342,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1343,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1344,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
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
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+210,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+1352,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1353,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1361,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1362,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+1483,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1378,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+1386,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1387,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1388,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1389,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1390,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1391,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1392,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1474,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1393,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1394,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+448,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1361,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1389,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1386,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1387,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1390,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1390,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1395,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1396,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1397,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1398,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1399,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1400,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1401,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1402,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1403,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1404,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1405,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1406,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1407,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1408,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1409,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1410,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1411,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1412,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1413,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1414,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1415,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1416,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1417,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1418,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1419,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1420,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1421,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1422,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1423,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1424,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1425,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1426,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1427,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1428,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1429,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1430,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1431,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1432,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1433,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1434,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1435,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1436,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1437,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1438,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1439,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1440,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1441,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1442,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+1443,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
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
    bufp->fullWData(oldp+1454,(vlSelf->top_tb__DOT__hash),256);
    bufp->fullCData(oldp+1462,(vlSelf->top_tb__DOT__bits_read),4);
    bufp->fullBit(oldp+1463,(vlSelf->top_tb__DOT__hashing));
    bufp->fullBit(oldp+1464,(vlSelf->top_tb__DOT__TOP__DOT__rst_i));
    bufp->fullIData(oldp+1465,(vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce_copy),32);
    bufp->fullIData(oldp+1466,(0x186a0U),32);
    bufp->fullIData(oldp+1467,(0xc8U),32);
    bufp->fullCData(oldp+1468,(0U),3);
    bufp->fullCData(oldp+1469,(1U),3);
    bufp->fullCData(oldp+1470,(2U),3);
    bufp->fullCData(oldp+1471,(3U),3);
    bufp->fullCData(oldp+1472,(4U),3);
    bufp->fullIData(oldp+1473,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullCData(oldp+1474,(0U),4);
    bufp->fullIData(oldp+1475,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1476,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1477,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1478,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1479,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1480,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1481,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1482,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__tmp),32);
    bufp->fullIData(oldp+1483,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__tmp),32);
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
    bufp->fullIData(oldp+4,(vlSelf->top_tb__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+5,(vlSelf->top_tb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b),32);
    bufp->fullIData(oldp+6,(vlSelf->top_tb__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+7,(vlSelf->top_tb__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b),32);
    bufp->fullBit(oldp+8,((2U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))));
    bufp->fullBit(oldp+9,((0U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))));
    bufp->fullBit(oldp+10,((1U == (IData)(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state))));
    bufp->fullCData(oldp+11,(vlSelf->top_tb__DOT__TOP__DOT__FSM__DOT__state),3);
    bufp->fullIData(oldp+12,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[0]),32);
    bufp->fullIData(oldp+13,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[1]),32);
    bufp->fullIData(oldp+14,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[2]),32);
    bufp->fullIData(oldp+15,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[3]),32);
    bufp->fullIData(oldp+16,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[4]),32);
    bufp->fullIData(oldp+17,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[5]),32);
    bufp->fullIData(oldp+18,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[6]),32);
    bufp->fullIData(oldp+19,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[7]),32);
    bufp->fullIData(oldp+20,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[8]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__nonces[9]),32);
    bufp->fullWData(oldp+22,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__best_hash_reverse),256);
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
    bufp->fullWData(oldp+30,(__Vtemp_1),640);
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
    bufp->fullWData(oldp+50,(__Vtemp_2),640);
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
    bufp->fullWData(oldp+70,(__Vtemp_3),640);
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
    bufp->fullWData(oldp+90,(__Vtemp_4),640);
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
    bufp->fullWData(oldp+110,(__Vtemp_5),640);
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
    bufp->fullWData(oldp+130,(__Vtemp_6),640);
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
    bufp->fullWData(oldp+150,(__Vtemp_7),640);
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
    bufp->fullWData(oldp+170,(__Vtemp_8),640);
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
    bufp->fullWData(oldp+190,(__Vtemp_9),640);
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
    bufp->fullWData(oldp+210,(__Vtemp_10),640);
    bufp->fullBit(oldp+230,(vlSelf->top_tb__DOT__UART_TXD));
    bufp->fullSData(oldp+231,(vlSelf->top_tb__DOT__LED),16);
    bufp->fullBit(oldp+232,(vlSelf->top_tb__DOT__TOP__DOT__finished_recieving));
    bufp->fullBit(oldp+233,(vlSelf->top_tb__DOT__TOP__DOT__finished_sending));
    bufp->fullBit(oldp+234,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_DV));
    bufp->fullBit(oldp+235,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Done));
    bufp->fullCData(oldp+236,(vlSelf->top_tb__DOT__TOP__DOT__read_bytes_passed),8);
    bufp->fullCData(oldp+237,(vlSelf->top_tb__DOT__TOP__DOT__write_bytes_passed),8);
    bufp->fullCData(oldp+238,(vlSelf->top_tb__DOT__TOP__DOT__repeat_bytes_sent),3);
    bufp->fullCData(oldp+239,(vlSelf->top_tb__DOT__TOP__DOT__tx_byte),8);
    bufp->fullCData(oldp+240,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Byte),8);
    bufp->fullBit(oldp+241,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Active));
    bufp->fullWData(oldp+242,(vlSelf->top_tb__DOT__TOP__DOT__block_info),608);
    bufp->fullWData(oldp+261,(vlSelf->top_tb__DOT__TOP__DOT__best_hash),256);
    bufp->fullWData(oldp+269,(vlSelf->top_tb__DOT__TOP__DOT__copy_hash),256);
    bufp->fullIData(oldp+277,(vlSelf->top_tb__DOT__TOP__DOT__best_hash_nonce),32);
    bufp->fullWData(oldp+278,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[0]),256);
    bufp->fullWData(oldp+286,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[1]),256);
    bufp->fullWData(oldp+294,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[2]),256);
    bufp->fullWData(oldp+302,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[3]),256);
    bufp->fullWData(oldp+310,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[4]),256);
    bufp->fullWData(oldp+318,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[5]),256);
    bufp->fullWData(oldp+326,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[6]),256);
    bufp->fullWData(oldp+334,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[7]),256);
    bufp->fullWData(oldp+342,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[8]),256);
    bufp->fullWData(oldp+350,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__output_hashes[9]),256);
    bufp->fullWData(oldp+358,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[0]),256);
    bufp->fullWData(oldp+366,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[1]),256);
    bufp->fullWData(oldp+374,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[2]),256);
    bufp->fullWData(oldp+382,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[3]),256);
    bufp->fullWData(oldp+390,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[4]),256);
    bufp->fullWData(oldp+398,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[5]),256);
    bufp->fullWData(oldp+406,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[6]),256);
    bufp->fullWData(oldp+414,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[7]),256);
    bufp->fullWData(oldp+422,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[8]),256);
    bufp->fullWData(oldp+430,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__reverse_output_hashes[9]),256);
    bufp->fullBit(oldp+438,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[0]));
    bufp->fullBit(oldp+439,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[1]));
    bufp->fullBit(oldp+440,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[2]));
    bufp->fullBit(oldp+441,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[3]));
    bufp->fullBit(oldp+442,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[4]));
    bufp->fullBit(oldp+443,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[5]));
    bufp->fullBit(oldp+444,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[6]));
    bufp->fullBit(oldp+445,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[7]));
    bufp->fullBit(oldp+446,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[8]));
    bufp->fullBit(oldp+447,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__completes[9]));
    bufp->fullBit(oldp+448,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__rst));
    bufp->fullIData(oldp+449,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+450,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+451,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk4__DOT__k),32);
    bufp->fullBit(oldp+452,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data_R));
    bufp->fullBit(oldp+453,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Rx_Data));
    bufp->fullCData(oldp+454,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Clock_Count),8);
    bufp->fullCData(oldp+455,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_Bit_Index),3);
    bufp->fullCData(oldp+456,(vlSelf->top_tb__DOT__TOP__DOT__UART_RX__DOT__r_SM_Main),3);
    bufp->fullCData(oldp+457,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_SM_Main),3);
    bufp->fullCData(oldp+458,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Clock_Count),8);
    bufp->fullCData(oldp+459,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Bit_Index),3);
    bufp->fullCData(oldp+460,(vlSelf->top_tb__DOT__TOP__DOT__UART_TX__DOT__r_Tx_Data),8);
    bufp->fullBit(oldp+461,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+462,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+470,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+471,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+487,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+495,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+496,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+497,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+498,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+499,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+500,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+501,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+502,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+503,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+504,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+505,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+506,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+507,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+508,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+509,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+510,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+511,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+512,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+513,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+514,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+515,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+516,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+517,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+518,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+519,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+520,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+521,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+522,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+523,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+524,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+525,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+526,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+527,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+528,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+529,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+530,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+531,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+532,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+533,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+534,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+535,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+536,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+537,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+538,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+539,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+540,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+541,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+542,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+543,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+544,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+545,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+546,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+547,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+548,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
    bufp->fullIData(oldp+549,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
    bufp->fullIData(oldp+550,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+551,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+552,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__0__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+560,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+561,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+569,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+570,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+586,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+594,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+595,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+596,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+597,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+598,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+599,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+600,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+601,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+602,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+603,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+604,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+605,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+606,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+607,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+608,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+609,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+610,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+611,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+612,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+613,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+614,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+615,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+616,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+617,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+618,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+619,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+620,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+621,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+622,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+623,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+624,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+625,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+626,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+627,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+628,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+629,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+630,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+631,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+632,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+633,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+634,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+635,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+636,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+637,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+638,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+639,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+640,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+641,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+642,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+643,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+644,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+645,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+646,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+647,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
    bufp->fullIData(oldp+648,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
    bufp->fullIData(oldp+649,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+650,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+651,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__1__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+659,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+660,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+668,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+669,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+685,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+693,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+694,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+695,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+696,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+697,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+698,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+699,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+700,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+701,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+702,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+703,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+704,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+705,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+706,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+707,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+708,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+709,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+710,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+711,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+712,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+713,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+714,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+715,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+716,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+717,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+718,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+719,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+720,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+721,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+722,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+723,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+724,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+725,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+726,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+727,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+728,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+729,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+730,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+731,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+732,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+733,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+734,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+735,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+736,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+737,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+738,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+739,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+740,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+741,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+742,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+743,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+744,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+745,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+746,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
    bufp->fullIData(oldp+747,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
    bufp->fullIData(oldp+748,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+749,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+750,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__2__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+758,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+759,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+767,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+768,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+784,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+792,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+793,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+794,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+795,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+796,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+797,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+798,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+799,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+800,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+801,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+802,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+803,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+804,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+805,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+806,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+807,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+808,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+809,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+810,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+811,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+812,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+813,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+814,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+815,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+816,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+817,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+818,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+819,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+820,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+821,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+822,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+823,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+824,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+825,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+826,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+827,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+828,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+829,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+830,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+831,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+832,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+833,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+834,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+835,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+836,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+837,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+838,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+839,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+840,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+841,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+842,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+843,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+844,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+845,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
    bufp->fullIData(oldp+846,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
    bufp->fullIData(oldp+847,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+848,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+849,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__3__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+857,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+858,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+866,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+867,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+883,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+891,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+892,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+893,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+894,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+895,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+896,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+897,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+898,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+899,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+900,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+901,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+902,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+903,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+904,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+905,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+906,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+907,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+908,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+909,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+910,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+911,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+912,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+913,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+914,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+915,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+916,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+917,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+918,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+919,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+920,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+921,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+922,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+923,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+924,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+925,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+926,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+927,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+928,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+929,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+930,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+931,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+932,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+933,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+934,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+935,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+936,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+937,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                               ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                  & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+938,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                               ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                  ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+939,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                    << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0x16U))))),32);
    bufp->fullIData(oldp+940,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                              >> 6U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                    << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0xbU)) 
                                  ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                      << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                >> 0x19U))))),32);
    bufp->fullIData(oldp+941,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                 << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                              >> 7U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                    << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                >> 0x12U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+942,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+943,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+944,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
    bufp->fullIData(oldp+945,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
    bufp->fullIData(oldp+946,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+947,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+948,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__4__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+956,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+957,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+965,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+966,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+982,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+990,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+991,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+992,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+993,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+994,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+995,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+996,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+997,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+998,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+999,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+1000,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+1001,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+1002,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+1003,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+1004,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+1005,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+1006,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+1007,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+1008,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+1009,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+1010,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+1011,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+1012,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+1013,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+1014,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+1015,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+1016,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+1017,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+1018,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+1019,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+1020,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+1021,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+1022,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+1023,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+1024,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+1025,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+1026,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+1027,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+1028,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+1029,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+1030,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+1031,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+1032,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+1033,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+1034,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+1035,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+1036,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+1037,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                   ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+1038,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
    bufp->fullIData(oldp+1039,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                  << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                               >> 6U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0xbU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
    bufp->fullIData(oldp+1040,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                  << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               >> 7U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+1041,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+1042,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+1043,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
    bufp->fullIData(oldp+1044,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
    bufp->fullIData(oldp+1045,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+1046,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+1047,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__5__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+1055,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+1056,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+1064,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+1065,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+1081,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+1089,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+1090,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+1091,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+1092,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+1093,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+1094,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+1095,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+1096,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+1097,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+1098,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+1099,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+1100,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+1101,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+1102,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+1103,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+1104,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+1105,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+1106,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+1107,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+1108,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+1109,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+1110,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+1111,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+1112,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+1113,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+1114,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+1115,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+1116,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+1117,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+1118,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+1119,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+1120,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+1121,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+1122,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+1123,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+1124,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+1125,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+1126,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+1127,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+1128,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+1129,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+1130,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+1131,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+1132,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+1133,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+1134,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+1135,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+1136,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                   ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+1137,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
    bufp->fullIData(oldp+1138,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                  << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                               >> 6U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0xbU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
    bufp->fullIData(oldp+1139,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                  << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               >> 7U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+1140,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+1141,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+1142,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
    bufp->fullIData(oldp+1143,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
    bufp->fullIData(oldp+1144,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+1145,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+1146,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__6__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+1154,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+1155,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+1163,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+1164,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+1180,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+1188,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+1189,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+1190,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+1191,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+1192,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+1193,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+1194,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+1195,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+1196,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+1197,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+1198,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+1199,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+1200,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+1201,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+1202,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+1203,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+1204,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+1205,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+1206,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+1207,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+1208,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+1209,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+1210,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+1211,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+1212,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+1213,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+1214,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+1215,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+1216,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+1217,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+1218,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+1219,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+1220,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+1221,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+1222,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+1223,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+1224,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+1225,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+1226,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+1227,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+1228,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+1229,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+1230,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+1231,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+1232,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+1233,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+1234,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+1235,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                   ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+1236,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
    bufp->fullIData(oldp+1237,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                  << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                               >> 6U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0xbU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
    bufp->fullIData(oldp+1238,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                  << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               >> 7U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+1239,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+1240,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+1241,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
    bufp->fullIData(oldp+1242,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
    bufp->fullIData(oldp+1243,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+1244,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+1245,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__7__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+1253,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+1254,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+1262,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+1263,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+1279,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+1287,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+1288,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+1289,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+1290,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+1291,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+1292,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+1293,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+1294,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+1295,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+1296,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+1297,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+1298,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+1299,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+1300,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+1301,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+1302,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+1303,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+1304,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+1305,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+1306,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+1307,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+1308,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+1309,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+1310,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+1311,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+1312,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+1313,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+1314,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+1315,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+1316,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+1317,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+1318,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+1319,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+1320,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+1321,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+1322,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+1323,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+1324,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+1325,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+1326,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+1327,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+1328,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+1329,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+1330,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+1331,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+1332,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+1333,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+1334,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                   ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+1335,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
    bufp->fullIData(oldp+1336,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                  << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                               >> 6U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0xbU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
    bufp->fullIData(oldp+1337,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                  << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               >> 7U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+1338,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+1339,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+1340,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
    bufp->fullIData(oldp+1341,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
    bufp->fullIData(oldp+1342,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+1343,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+1344,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__8__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+1352,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.complete));
    bufp->fullWData(oldp+1353,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.hash),256);
    bufp->fullIData(oldp+1361,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__text_i),32);
    bufp->fullWData(oldp+1362,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__tmp_i),512);
    bufp->fullWData(oldp+1378,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__first_hash),256);
    bufp->fullCData(oldp+1386,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__cmd_i),3);
    bufp->fullBit(oldp+1387,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__cmd_w_i));
    bufp->fullCData(oldp+1388,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__hash_index),5);
    bufp->fullIData(oldp+1389,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__text_o),32);
    bufp->fullCData(oldp+1390,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+1391,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__second_cycle));
    bufp->fullCData(oldp+1392,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__delay_left),4);
    bufp->fullCData(oldp+1393,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__internal_index),5);
    bufp->fullCData(oldp+1394,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__state),4);
    bufp->fullCData(oldp+1395,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+1396,((0x7fU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+1397,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+1398,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+1399,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+1400,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+1401,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+1402,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+1403,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+1404,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+1405,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+1406,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+1407,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+1408,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+1409,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+1410,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+1411,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+1412,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+1413,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+1414,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+1415,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+1416,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+1417,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+1418,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+1419,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+1420,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+1421,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+1422,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+1423,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+1424,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+1425,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+1426,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+1427,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+1428,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+1429,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+1430,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+1431,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__busy));
    bufp->fullIData(oldp+1432,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__F) 
                                ^ ((~ vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E) 
                                   & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+1433,(((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                 & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B) 
                                ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__B 
                                    & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C) 
                                   ^ (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                      & vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+1434,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                  << 0x1eU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                               >> 2U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                     << 0x13U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                  >> 0xdU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                       << 0xaU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
                                                   >> 0x16U))))),32);
    bufp->fullIData(oldp+1435,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                  << 0x1aU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                               >> 6U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                     << 0x15U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                  >> 0xbU)) 
                                   ^ ((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                       << 7U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__E 
                                                 >> 0x19U))))),32);
    bufp->fullIData(oldp+1436,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                  << 0x19U) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                               >> 7U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                     << 0xeU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1 
                                                 >> 0x12U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+1437,((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                  << 0xfU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                              >> 0x11U)) 
                                ^ (((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                     << 0xdU) | (vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
                                                 >> 0x13U)) 
                                   ^ VL_SHIFTR_III(32,32,32, vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+1438,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+1439,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__A 
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
    bufp->fullIData(oldp+1440,(((((vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__W14 
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
    bufp->fullIData(oldp+1441,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+1442,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+1443,(vlSymsp->TOP__top_tb__DOT__TOP__DOT__HASHCORE__DOT__genblk1__BRA__9__KET____DOT__HASHCORE.__PVT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+1451,(vlSelf->top_tb__DOT__TOP__DOT__second_tick));
    bufp->fullIData(oldp+1452,(vlSelf->top_tb__DOT__TOP__DOT__HASHCORE__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+1453,(vlSelf->top_tb__DOT__TOP__DOT__TIMER__DOT__cycles),27);
}
