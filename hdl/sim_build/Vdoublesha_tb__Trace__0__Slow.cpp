// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdoublesha_tb__Syms.h"


VL_ATTR_COLD void Vdoublesha_tb___024root__trace_init_sub__TOP__0(Vdoublesha_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("doublesha_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+99,0,"clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"rst_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"start_tick",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+102,0,"block_info",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+1,0,"complete",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2,0,"hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+99,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"start_tick",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+102,0,"block_info",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBit(c+1,0,"complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+2,0,"hash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+10,0,"text_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+11,0,"tmp_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+122,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+123,0,"message",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declArray(c+27,0,"first_hash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBus(c+35,0,"cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+36,0,"cmd_w_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"hash_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"text_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"cmd_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+39,0,"second_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"delay_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+156,0,"output_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"internal_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+99,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"text_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"text_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+36,0,"cmd_w_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+38,0,"cmd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+43,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+44,0,"round_plus_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+45,0,"read_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+46,0,"H0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"H1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"H2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"H3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"H4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"H5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"H6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"H7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"W0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"W1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"W2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"W3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"W4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"W5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"W6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"W7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"W8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"W9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,0,"W10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"W11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"W12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"W13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"W14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"Kt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"G",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"f1_EFG_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"f2_ABC_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"f3_A_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"f4_E_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"f5_W1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"f6_W14_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"T1_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"T2_32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"next_Wt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"next_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"next_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+91,0,"SHA256_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdoublesha_tb___024root__trace_init_top(Vdoublesha_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root__trace_init_top\n"); );
    // Body
    Vdoublesha_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdoublesha_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdoublesha_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdoublesha_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdoublesha_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdoublesha_tb___024root__trace_register(Vdoublesha_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vdoublesha_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdoublesha_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdoublesha_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdoublesha_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdoublesha_tb___024root__trace_const_0_sub_0(Vdoublesha_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdoublesha_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root__trace_const_0\n"); );
    // Init
    Vdoublesha_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdoublesha_tb___024root*>(voidSelf);
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdoublesha_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<20>/*639:0*/ Vdoublesha_tb__ConstPool__CONST_hb75c0e9d_0;

VL_ATTR_COLD void Vdoublesha_tb___024root__trace_const_0_sub_0(Vdoublesha_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+100,(vlSelf->doublesha_tb__DOT__rst_i));
    bufp->fullBit(oldp+101,(1U));
    bufp->fullWData(oldp+102,(Vdoublesha_tb__ConstPool__CONST_hb75c0e9d_0),640);
    bufp->fullIData(oldp+122,(vlSelf->doublesha_tb__DOT__DUT__DOT__tmp),32);
    bufp->fullWData(oldp+123,(vlSelf->doublesha_tb__DOT__DUT__DOT__message),1024);
    bufp->fullCData(oldp+155,(0U),5);
    bufp->fullCData(oldp+156,(0U),4);
}

VL_ATTR_COLD void Vdoublesha_tb___024root__trace_full_0_sub_0(Vdoublesha_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdoublesha_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root__trace_full_0\n"); );
    // Init
    Vdoublesha_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdoublesha_tb___024root*>(voidSelf);
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdoublesha_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdoublesha_tb___024root__trace_full_0_sub_0(Vdoublesha_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdoublesha_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdoublesha_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->doublesha_tb__DOT__complete));
    bufp->fullWData(oldp+2,(vlSelf->doublesha_tb__DOT__hash),256);
    bufp->fullIData(oldp+10,(vlSelf->doublesha_tb__DOT__DUT__DOT__text_i),32);
    bufp->fullWData(oldp+11,(vlSelf->doublesha_tb__DOT__DUT__DOT__tmp_i),512);
    bufp->fullWData(oldp+27,(vlSelf->doublesha_tb__DOT__DUT__DOT__first_hash),256);
    bufp->fullCData(oldp+35,(vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_i),3);
    bufp->fullBit(oldp+36,(vlSelf->doublesha_tb__DOT__DUT__DOT__cmd_w_i));
    bufp->fullIData(oldp+37,(vlSelf->doublesha_tb__DOT__DUT__DOT__text_o),32);
    bufp->fullCData(oldp+38,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__cmd),4);
    bufp->fullBit(oldp+39,(vlSelf->doublesha_tb__DOT__DUT__DOT__second_cycle));
    bufp->fullCData(oldp+40,(vlSelf->doublesha_tb__DOT__DUT__DOT__delay_left),4);
    bufp->fullCData(oldp+41,(vlSelf->doublesha_tb__DOT__DUT__DOT__internal_index),5);
    bufp->fullCData(oldp+42,(vlSelf->doublesha_tb__DOT__DUT__DOT__state),4);
    bufp->fullCData(oldp+43,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round),7);
    bufp->fullCData(oldp+44,((0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__round)))),7);
    bufp->fullCData(oldp+45,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__read_counter),3);
    bufp->fullIData(oldp+46,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H0),32);
    bufp->fullIData(oldp+47,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H1),32);
    bufp->fullIData(oldp+48,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H2),32);
    bufp->fullIData(oldp+49,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H3),32);
    bufp->fullIData(oldp+50,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H4),32);
    bufp->fullIData(oldp+51,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H5),32);
    bufp->fullIData(oldp+52,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H6),32);
    bufp->fullIData(oldp+53,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H7),32);
    bufp->fullIData(oldp+54,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W0),32);
    bufp->fullIData(oldp+55,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1),32);
    bufp->fullIData(oldp+56,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W2),32);
    bufp->fullIData(oldp+57,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W3),32);
    bufp->fullIData(oldp+58,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W4),32);
    bufp->fullIData(oldp+59,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W5),32);
    bufp->fullIData(oldp+60,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W6),32);
    bufp->fullIData(oldp+61,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W7),32);
    bufp->fullIData(oldp+62,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W8),32);
    bufp->fullIData(oldp+63,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9),32);
    bufp->fullIData(oldp+64,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W10),32);
    bufp->fullIData(oldp+65,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W11),32);
    bufp->fullIData(oldp+66,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W12),32);
    bufp->fullIData(oldp+67,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W13),32);
    bufp->fullIData(oldp+68,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14),32);
    bufp->fullIData(oldp+69,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Wt),32);
    bufp->fullIData(oldp+70,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__Kt),32);
    bufp->fullIData(oldp+71,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A),32);
    bufp->fullIData(oldp+72,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B),32);
    bufp->fullIData(oldp+73,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C),32);
    bufp->fullIData(oldp+74,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__D),32);
    bufp->fullIData(oldp+75,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E),32);
    bufp->fullIData(oldp+76,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F),32);
    bufp->fullIData(oldp+77,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G),32);
    bufp->fullIData(oldp+78,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__H),32);
    bufp->fullBit(oldp+79,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__busy));
    bufp->fullIData(oldp+80,(((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                               & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__F) 
                              ^ ((~ vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E) 
                                 & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__G))),32);
    bufp->fullIData(oldp+81,(((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                               & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B) 
                              ^ ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                                  & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C) 
                                 ^ (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                    & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C)))),32);
    bufp->fullIData(oldp+82,((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                << 0x1eU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                             >> 2U)) 
                              ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                   << 0x13U) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                                >> 0xdU)) 
                                 ^ ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                     << 0xaU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                                 >> 0x16U))))),32);
    bufp->fullIData(oldp+83,((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                << 0x1aU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                             >> 6U)) 
                              ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                   << 0x15U) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                                >> 0xbU)) 
                                 ^ ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                     << 7U) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__E 
                                               >> 0x19U))))),32);
    bufp->fullIData(oldp+84,((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                << 0x19U) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                             >> 7U)) 
                              ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                   << 0xeU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                               >> 0x12U)) 
                                 ^ VL_SHIFTR_III(32,32,32, vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1, 3U)))),32);
    bufp->fullIData(oldp+85,((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                << 0xfU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                            >> 0x11U)) 
                              ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                   << 0xdU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                               >> 0x13U)) 
                                 ^ VL_SHIFTR_III(32,32,32, vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14, 0xaU)))),32);
    bufp->fullIData(oldp+86,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__T1_32),32);
    bufp->fullIData(oldp+87,(((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                 << 0x1eU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                              >> 2U)) 
                               ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                    << 0x13U) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                                 >> 0xdU)) 
                                  ^ ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                      << 0xaU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                                  >> 0x16U)))) 
                              + ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                  & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B) 
                                 ^ ((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__B 
                                     & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C) 
                                    ^ (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__A 
                                       & vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__C))))),32);
    bufp->fullIData(oldp+88,(((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                 << 0xfU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                             >> 0x11U)) 
                               ^ (((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                    << 0xdU) | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14 
                                                >> 0x13U)) 
                                  ^ VL_SHIFTR_III(32,32,32, vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W14, 0xaU))) 
                              + (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W9 
                                 + ((((vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                       << 0x19U) | 
                                      (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                       >> 7U)) ^ ((
                                                   (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                                    << 0xeU) 
                                                   | (vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1 
                                                      >> 0x12U)) 
                                                  ^ 
                                                  VL_SHIFTR_III(32,32,32, vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W1, 3U))) 
                                    + vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__W0)))),32);
    bufp->fullIData(oldp+89,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_E),32);
    bufp->fullIData(oldp+90,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__next_A),32);
    bufp->fullWData(oldp+91,(vlSelf->doublesha_tb__DOT__DUT__DOT__sha_core__DOT__SHA256_result),256);
    bufp->fullBit(oldp+99,(vlSelf->doublesha_tb__DOT__clk_i));
}
