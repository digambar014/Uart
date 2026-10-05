// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_uart_top.h for the primary calling header

#include "verilated.h"

#include "Vtb_uart_top__Syms.h"
#include "Vtb_uart_top___024root.h"

VL_ATTR_COLD void Vtb_uart_top___024root___eval_initial__TOP(Vtb_uart_top___024root* vlSelf);
VlCoroutine Vtb_uart_top___024root___eval_initial__TOP__0(Vtb_uart_top___024root* vlSelf);
VlCoroutine Vtb_uart_top___024root___eval_initial__TOP__1(Vtb_uart_top___024root* vlSelf);

void Vtb_uart_top___024root___eval_initial(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___eval_initial\n"); );
    // Body
    Vtb_uart_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_uart_top___024root___eval_initial__TOP__0(vlSelf);
    Vtb_uart_top___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_uart_top__DOT__clk__0 
        = vlSelf->tb_uart_top__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_uart_top__DOT__reset__0 
        = vlSelf->tb_uart_top__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vtb_uart_top___024root___eval_initial__TOP__1(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x2710ULL, 
                                           nullptr, 
                                           "tb_uart_top.v", 
                                           51);
        vlSelf->__Vdlyvval__tb_uart_top__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->tb_uart_top__DOT__clk)));
        vlSelf->__Vdlyvset__tb_uart_top__DOT__clk__v0 = 1U;
    }
}

void Vtb_uart_top___024root___eval_act(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_uart_top___024root___nba_sequent__TOP__0(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__state;
    __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__state = 0;
    SData/*8:0*/ __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt;
    __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt = 0;
    CData/*2:0*/ __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__bit_cnt;
    __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__bit_cnt = 0;
    CData/*7:0*/ __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__shift_reg;
    __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__shift_reg = 0;
    CData/*1:0*/ __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__state;
    __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__state = 0;
    SData/*8:0*/ __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt;
    __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt = 0;
    CData/*2:0*/ __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt;
    __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt = 0;
    CData/*7:0*/ __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__shift_reg;
    __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__shift_reg = 0;
    // Body
    __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__shift_reg 
        = vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__shift_reg;
    __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__bit_cnt 
        = vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__bit_cnt;
    __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt 
        = vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt;
    __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__state 
        = vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state;
    __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__shift_reg 
        = vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__shift_reg;
    __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt 
        = vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt;
    __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt 
        = vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt;
    __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__state 
        = vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__state;
    if (vlSelf->tb_uart_top__DOT__reset) {
        __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__state = 0U;
        __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt = 0U;
        __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt = 0U;
        __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__shift_reg = 0U;
        vlSelf->tb_uart_top__DOT__rx_data = 0U;
        vlSelf->tb_uart_top__DOT__rx_valid = 0U;
    } else {
        vlSelf->tb_uart_top__DOT__rx_valid = 0U;
        if ((2U & (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__state))) {
                if ((0x1b1U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt))) {
                    __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt = 0U;
                    __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__state = 0U;
                    if (vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__rx_sync1) {
                        vlSelf->tb_uart_top__DOT__rx_data 
                            = vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__shift_reg;
                        vlSelf->tb_uart_top__DOT__rx_valid = 1U;
                    }
                } else {
                    __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt)));
                }
            } else if ((0x1b1U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt))) {
                __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__shift_reg 
                    = (((IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__rx_sync1) 
                        << 7U) | (0x7fU & ((IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__shift_reg) 
                                           >> 1U)));
                __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt = 0U;
                if ((7U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt))) {
                    __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt = 0U;
                    __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__state = 3U;
                } else {
                    __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt)));
                }
            } else {
                __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt)));
            }
        } else if ((1U & (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__state))) {
            if ((0xd8U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt))) {
                __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt = 0U;
                __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__state 
                    = ((IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__rx_sync1)
                        ? 0U : 2U);
            } else {
                __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt)));
            }
        } else {
            __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt = 0U;
            __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt = 0U;
            if ((1U & (~ (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__rx_sync1)))) {
                __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__state = 1U;
            }
        }
    }
    vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__state 
        = __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__state;
    vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt 
        = __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt;
    vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt 
        = __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt;
    vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__shift_reg 
        = __Vdly__tb_uart_top__DOT__dut__DOT__u_rx__DOT__shift_reg;
    vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__rx_sync1 
        = ((IData)(vlSelf->tb_uart_top__DOT__reset) 
           | (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__rx_sync0));
    vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__rx_sync0 
        = ((IData)(vlSelf->tb_uart_top__DOT__reset) 
           | (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__serial_line));
    if (vlSelf->tb_uart_top__DOT__reset) {
        __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__state = 0U;
        __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt = 0U;
        __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__bit_cnt = 0U;
        __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__shift_reg = 0U;
        vlSelf->tb_uart_top__DOT__dut__DOT__serial_line = 1U;
    } else if ((2U & (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state))) {
        if ((1U & (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state))) {
            vlSelf->tb_uart_top__DOT__dut__DOT__serial_line = 1U;
            if ((0x1b1U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt))) {
                __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt = 0U;
                __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__state = 0U;
            } else {
                __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt)));
            }
        } else {
            vlSelf->tb_uart_top__DOT__dut__DOT__serial_line 
                = (1U & (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__shift_reg));
            if ((0x1b1U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt))) {
                __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__shift_reg 
                    = (0x7fU & ((IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__shift_reg) 
                                >> 1U));
                __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt = 0U;
                if ((7U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__bit_cnt))) {
                    __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__state = 3U;
                } else {
                    __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__bit_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__bit_cnt)));
                }
            } else {
                __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt 
                    = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt)));
            }
        }
    } else if ((1U & (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state))) {
        vlSelf->tb_uart_top__DOT__dut__DOT__serial_line = 0U;
        if ((0x1b1U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt))) {
            __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt = 0U;
            __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__bit_cnt = 0U;
            __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__state = 2U;
        } else {
            __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt)));
        }
    } else {
        vlSelf->tb_uart_top__DOT__dut__DOT__serial_line = 1U;
        if (((IData)(vlSelf->tb_uart_top__DOT__tx_valid) 
             & (IData)(vlSelf->tb_uart_top__DOT__tx_ready))) {
            __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__shift_reg 
                = vlSelf->tb_uart_top__DOT__tx_data;
            __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt = 0U;
            __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__state = 1U;
        }
    }
    vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt 
        = __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt;
    vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__bit_cnt 
        = __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__bit_cnt;
    vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__shift_reg 
        = __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__shift_reg;
    vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state 
        = __Vdly__tb_uart_top__DOT__dut__DOT__u_tx__DOT__state;
    vlSelf->tb_uart_top__DOT__tx_ready = (0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state));
}

VL_INLINE_OPT void Vtb_uart_top___024root___nba_sequent__TOP__1(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_uart_top__DOT__clk__v0) {
        vlSelf->tb_uart_top__DOT__clk = vlSelf->__Vdlyvval__tb_uart_top__DOT__clk__v0;
        vlSelf->__Vdlyvset__tb_uart_top__DOT__clk__v0 = 0U;
    }
}

void Vtb_uart_top___024root___eval_nba(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_uart_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_uart_top___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vtb_uart_top___024root___eval_triggers__act(Vtb_uart_top___024root* vlSelf);
void Vtb_uart_top___024root___timing_commit(Vtb_uart_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_top___024root___dump_triggers__act(Vtb_uart_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_uart_top___024root___timing_resume(Vtb_uart_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_top___024root___dump_triggers__nba(Vtb_uart_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_uart_top___024root___eval(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb_uart_top___024root___eval_triggers__act(vlSelf);
            Vtb_uart_top___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_uart_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_uart_top.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtb_uart_top___024root___timing_resume(vlSelf);
                Vtb_uart_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_uart_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_uart_top.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_uart_top___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_uart_top___024root___timing_commit(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h2c4f64ab__0.commit("@(posedge tb_uart_top.clk)");
    }
}

void Vtb_uart_top___024root___timing_resume(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h2c4f64ab__0.resume("@(posedge tb_uart_top.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vtb_uart_top___024root___eval_debug_assertions(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
