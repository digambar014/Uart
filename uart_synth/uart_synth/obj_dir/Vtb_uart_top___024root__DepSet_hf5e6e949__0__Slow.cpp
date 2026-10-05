// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_uart_top.h for the primary calling header

#include "verilated.h"

#include "Vtb_uart_top__Syms.h"
#include "Vtb_uart_top___024root.h"

VL_ATTR_COLD void Vtb_uart_top___024root___eval_static(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_uart_top___024root___eval_initial__TOP(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb_uart_top__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtb_uart_top___024root___eval_final(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_uart_top___024root___eval_triggers__stl(Vtb_uart_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_top___024root___dump_triggers__stl(Vtb_uart_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_uart_top___024root___eval_stl(Vtb_uart_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_uart_top___024root___eval_settle(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb_uart_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb_uart_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb_uart_top.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb_uart_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_top___024root___dump_triggers__stl(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_uart_top___024root___stl_sequent__TOP__0(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_uart_top__DOT__tx_ready = (0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state));
}

VL_ATTR_COLD void Vtb_uart_top___024root___eval_stl(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_uart_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_top___024root___dump_triggers__act(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_uart_top.clk or posedge tb_uart_top.reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_uart_top.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_top___024root___dump_triggers__nba(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_uart_top.clk or posedge tb_uart_top.reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_uart_top.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_uart_top___024root___ctor_var_reset(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_uart_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_uart_top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_uart_top__DOT__tx_data = VL_RAND_RESET_I(8);
    vlSelf->tb_uart_top__DOT__tx_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_uart_top__DOT__tx_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_uart_top__DOT__rx_data = VL_RAND_RESET_I(8);
    vlSelf->tb_uart_top__DOT__rx_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 14; ++__Vi0) {
        vlSelf->tb_uart_top__DOT__rx_string[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_uart_top__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_uart_top__DOT__bytes_passed = VL_RAND_RESET_I(32);
    vlSelf->tb_uart_top__DOT__bytes_failed = VL_RAND_RESET_I(32);
    vlSelf->tb_uart_top__DOT___rx_cnt = VL_RAND_RESET_I(32);
    vlSelf->tb_uart_top__DOT__any_timeout = VL_RAND_RESET_I(1);
    vlSelf->tb_uart_top__DOT__current_tx_char = VL_RAND_RESET_I(8);
    vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_uart_top__DOT__dut__DOT__serial_line = VL_RAND_RESET_I(1);
    vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__shift_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__bit_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt = VL_RAND_RESET_I(9);
    vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__rx_sync0 = VL_RAND_RESET_I(1);
    vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__rx_sync1 = VL_RAND_RESET_I(1);
    vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt = VL_RAND_RESET_I(9);
    vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__shift_reg = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tb_uart_top__DOT__clk__v0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__tb_uart_top__DOT__clk__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_uart_top__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_uart_top__DOT__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
