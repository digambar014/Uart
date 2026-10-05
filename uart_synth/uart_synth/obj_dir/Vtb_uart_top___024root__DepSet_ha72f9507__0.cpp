// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_uart_top.h for the primary calling header

#include "verilated.h"

#include "Vtb_uart_top__Syms.h"
#include "Vtb_uart_top__Syms.h"
#include "Vtb_uart_top___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_uart_top___024root___eval_initial__TOP__0(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___eval_initial__TOP__0\n"); );
    // Init
    IData/*31:0*/ tb_uart_top__DOT___tx_cnt;
    tb_uart_top__DOT___tx_cnt = 0;
    // Body
    vlSelf->tb_uart_top__DOT__reset = 1U;
    vlSelf->tb_uart_top__DOT__tx_data = 0U;
    vlSelf->tb_uart_top__DOT__tx_valid = 0U;
    vlSelf->tb_uart_top__DOT__bytes_passed = 0U;
    vlSelf->tb_uart_top__DOT__bytes_failed = 0U;
    vlSelf->tb_uart_top__DOT__any_timeout = 0U;
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("\342\225\224\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\227\n\342\225\221   uart_top Standalone Loopback Testbench                 \342\225\221\n\342\225\221   Icarus + Verilator --timing compatible                 \342\225\221\n\342\225\232\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\235\n");
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       75);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_uart_top__DOT__reset = 0U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       77);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("[TB] Reset released. Starting transmission...\n");
    vlSelf->tb_uart_top__DOT__current_tx_char = 0x68U;
    tb_uart_top__DOT___tx_cnt = 0U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while (((0U != (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)) 
            & VL_GTS_III(32, 0x4e20U, tb_uart_top__DOT___tx_cnt))) {
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           93);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tb_uart_top__DOT___tx_cnt = ((IData)(1U) + tb_uart_top__DOT___tx_cnt);
    }
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)))) {
        vlSelf->tb_uart_top__DOT__tx_data = vlSelf->tb_uart_top__DOT__current_tx_char;
        vlSelf->tb_uart_top__DOT__tx_valid = 1U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           107);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_uart_top__DOT__tx_valid = 0U;
        vlSelf->tb_uart_top__DOT__tx_data = 0U;
        vlSelf->tb_uart_top__DOT___rx_cnt = 0U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while (((~ (IData)(vlSelf->tb_uart_top__DOT__rx_valid)) 
                & VL_GTS_III(32, 0x4e20U, vlSelf->tb_uart_top__DOT___rx_cnt))) {
            co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_uart_top.clk)", 
                                                               "tb_uart_top.v", 
                                                               117);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_uart_top__DOT___rx_cnt = ((IData)(1U) 
                                                 + vlSelf->tb_uart_top__DOT___rx_cnt);
        }
        if (VL_LIKELY(vlSelf->tb_uart_top__DOT__rx_valid)) {
            vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0 
                = vlSelf->tb_uart_top__DOT__rx_data;
            vlSelf->tb_uart_top__DOT__rx_string[0U] 
                = vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0;
            if ((vlSelf->tb_uart_top__DOT__rx_string
                 [0U] == (IData)(vlSelf->tb_uart_top__DOT__current_tx_char))) {
                VL_WRITEF("  [ 0] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\223\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_passed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_passed);
            } else {
                VL_WRITEF("  [ 0] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\227 FAIL\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_failed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
            }
        } else {
            VL_WRITEF("  [ 0] '%c' Sent: 0x%02x  Recv: TIMEOUT\n",
                      8,vlSelf->tb_uart_top__DOT__current_tx_char,
                      8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char));
            vlSelf->tb_uart_top__DOT__any_timeout = 1U;
            vlSelf->tb_uart_top__DOT__bytes_failed 
                = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
        }
    } else {
        VL_WRITEF("[ERROR] TX ready timeout (byte 0)\n");
        vlSelf->tb_uart_top__DOT__any_timeout = 1U;
        vlSelf->tb_uart_top__DOT__bytes_failed = ((IData)(1U) 
                                                  + vlSelf->tb_uart_top__DOT__bytes_failed);
    }
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_uart_top__DOT__i = 1U;
    vlSelf->tb_uart_top__DOT__current_tx_char = 0x65U;
    tb_uart_top__DOT___tx_cnt = 0U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while (((0U != (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)) 
            & VL_GTS_III(32, 0x4e20U, tb_uart_top__DOT___tx_cnt))) {
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           93);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tb_uart_top__DOT___tx_cnt = ((IData)(1U) + tb_uart_top__DOT___tx_cnt);
    }
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)))) {
        vlSelf->tb_uart_top__DOT__tx_data = vlSelf->tb_uart_top__DOT__current_tx_char;
        vlSelf->tb_uart_top__DOT__tx_valid = 1U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           107);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_uart_top__DOT__tx_valid = 0U;
        vlSelf->tb_uart_top__DOT__tx_data = 0U;
        vlSelf->tb_uart_top__DOT___rx_cnt = 0U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while (((~ (IData)(vlSelf->tb_uart_top__DOT__rx_valid)) 
                & VL_GTS_III(32, 0x4e20U, vlSelf->tb_uart_top__DOT___rx_cnt))) {
            co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_uart_top.clk)", 
                                                               "tb_uart_top.v", 
                                                               117);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_uart_top__DOT___rx_cnt = ((IData)(1U) 
                                                 + vlSelf->tb_uart_top__DOT___rx_cnt);
        }
        if (VL_LIKELY(vlSelf->tb_uart_top__DOT__rx_valid)) {
            vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0 
                = vlSelf->tb_uart_top__DOT__rx_data;
            vlSelf->tb_uart_top__DOT__rx_string[1U] 
                = vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0;
            if ((vlSelf->tb_uart_top__DOT__rx_string
                 [1U] == (IData)(vlSelf->tb_uart_top__DOT__current_tx_char))) {
                VL_WRITEF("  [ 1] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\223\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_passed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_passed);
            } else {
                VL_WRITEF("  [ 1] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\227 FAIL\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_failed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
            }
        } else {
            VL_WRITEF("  [ 1] '%c' Sent: 0x%02x  Recv: TIMEOUT\n",
                      8,vlSelf->tb_uart_top__DOT__current_tx_char,
                      8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char));
            vlSelf->tb_uart_top__DOT__any_timeout = 1U;
            vlSelf->tb_uart_top__DOT__bytes_failed 
                = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
        }
    } else {
        VL_WRITEF("[ERROR] TX ready timeout (byte 1)\n");
        vlSelf->tb_uart_top__DOT__any_timeout = 1U;
        vlSelf->tb_uart_top__DOT__bytes_failed = ((IData)(1U) 
                                                  + vlSelf->tb_uart_top__DOT__bytes_failed);
    }
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_uart_top__DOT__i = 2U;
    vlSelf->tb_uart_top__DOT__current_tx_char = 0x6cU;
    tb_uart_top__DOT___tx_cnt = 0U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while (((0U != (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)) 
            & VL_GTS_III(32, 0x4e20U, tb_uart_top__DOT___tx_cnt))) {
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           93);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tb_uart_top__DOT___tx_cnt = ((IData)(1U) + tb_uart_top__DOT___tx_cnt);
    }
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)))) {
        vlSelf->tb_uart_top__DOT__tx_data = vlSelf->tb_uart_top__DOT__current_tx_char;
        vlSelf->tb_uart_top__DOT__tx_valid = 1U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           107);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_uart_top__DOT__tx_valid = 0U;
        vlSelf->tb_uart_top__DOT__tx_data = 0U;
        vlSelf->tb_uart_top__DOT___rx_cnt = 0U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while (((~ (IData)(vlSelf->tb_uart_top__DOT__rx_valid)) 
                & VL_GTS_III(32, 0x4e20U, vlSelf->tb_uart_top__DOT___rx_cnt))) {
            co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_uart_top.clk)", 
                                                               "tb_uart_top.v", 
                                                               117);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_uart_top__DOT___rx_cnt = ((IData)(1U) 
                                                 + vlSelf->tb_uart_top__DOT___rx_cnt);
        }
        if (VL_LIKELY(vlSelf->tb_uart_top__DOT__rx_valid)) {
            vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0 
                = vlSelf->tb_uart_top__DOT__rx_data;
            vlSelf->tb_uart_top__DOT__rx_string[2U] 
                = vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0;
            if ((vlSelf->tb_uart_top__DOT__rx_string
                 [2U] == (IData)(vlSelf->tb_uart_top__DOT__current_tx_char))) {
                VL_WRITEF("  [ 2] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\223\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_passed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_passed);
            } else {
                VL_WRITEF("  [ 2] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\227 FAIL\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_failed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
            }
        } else {
            VL_WRITEF("  [ 2] '%c' Sent: 0x%02x  Recv: TIMEOUT\n",
                      8,vlSelf->tb_uart_top__DOT__current_tx_char,
                      8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char));
            vlSelf->tb_uart_top__DOT__any_timeout = 1U;
            vlSelf->tb_uart_top__DOT__bytes_failed 
                = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
        }
    } else {
        VL_WRITEF("[ERROR] TX ready timeout (byte 2)\n");
        vlSelf->tb_uart_top__DOT__any_timeout = 1U;
        vlSelf->tb_uart_top__DOT__bytes_failed = ((IData)(1U) 
                                                  + vlSelf->tb_uart_top__DOT__bytes_failed);
    }
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_uart_top__DOT__i = 3U;
    vlSelf->tb_uart_top__DOT__current_tx_char = 0x6cU;
    tb_uart_top__DOT___tx_cnt = 0U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while (((0U != (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)) 
            & VL_GTS_III(32, 0x4e20U, tb_uart_top__DOT___tx_cnt))) {
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           93);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tb_uart_top__DOT___tx_cnt = ((IData)(1U) + tb_uart_top__DOT___tx_cnt);
    }
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)))) {
        vlSelf->tb_uart_top__DOT__tx_data = vlSelf->tb_uart_top__DOT__current_tx_char;
        vlSelf->tb_uart_top__DOT__tx_valid = 1U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           107);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_uart_top__DOT__tx_valid = 0U;
        vlSelf->tb_uart_top__DOT__tx_data = 0U;
        vlSelf->tb_uart_top__DOT___rx_cnt = 0U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while (((~ (IData)(vlSelf->tb_uart_top__DOT__rx_valid)) 
                & VL_GTS_III(32, 0x4e20U, vlSelf->tb_uart_top__DOT___rx_cnt))) {
            co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_uart_top.clk)", 
                                                               "tb_uart_top.v", 
                                                               117);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_uart_top__DOT___rx_cnt = ((IData)(1U) 
                                                 + vlSelf->tb_uart_top__DOT___rx_cnt);
        }
        if (VL_LIKELY(vlSelf->tb_uart_top__DOT__rx_valid)) {
            vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0 
                = vlSelf->tb_uart_top__DOT__rx_data;
            vlSelf->tb_uart_top__DOT__rx_string[3U] 
                = vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0;
            if ((vlSelf->tb_uart_top__DOT__rx_string
                 [3U] == (IData)(vlSelf->tb_uart_top__DOT__current_tx_char))) {
                VL_WRITEF("  [ 3] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\223\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_passed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_passed);
            } else {
                VL_WRITEF("  [ 3] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\227 FAIL\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_failed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
            }
        } else {
            VL_WRITEF("  [ 3] '%c' Sent: 0x%02x  Recv: TIMEOUT\n",
                      8,vlSelf->tb_uart_top__DOT__current_tx_char,
                      8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char));
            vlSelf->tb_uart_top__DOT__any_timeout = 1U;
            vlSelf->tb_uart_top__DOT__bytes_failed 
                = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
        }
    } else {
        VL_WRITEF("[ERROR] TX ready timeout (byte 3)\n");
        vlSelf->tb_uart_top__DOT__any_timeout = 1U;
        vlSelf->tb_uart_top__DOT__bytes_failed = ((IData)(1U) 
                                                  + vlSelf->tb_uart_top__DOT__bytes_failed);
    }
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_uart_top__DOT__i = 4U;
    vlSelf->tb_uart_top__DOT__current_tx_char = 0x6fU;
    tb_uart_top__DOT___tx_cnt = 0U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while (((0U != (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)) 
            & VL_GTS_III(32, 0x4e20U, tb_uart_top__DOT___tx_cnt))) {
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           93);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tb_uart_top__DOT___tx_cnt = ((IData)(1U) + tb_uart_top__DOT___tx_cnt);
    }
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)))) {
        vlSelf->tb_uart_top__DOT__tx_data = vlSelf->tb_uart_top__DOT__current_tx_char;
        vlSelf->tb_uart_top__DOT__tx_valid = 1U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           107);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_uart_top__DOT__tx_valid = 0U;
        vlSelf->tb_uart_top__DOT__tx_data = 0U;
        vlSelf->tb_uart_top__DOT___rx_cnt = 0U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while (((~ (IData)(vlSelf->tb_uart_top__DOT__rx_valid)) 
                & VL_GTS_III(32, 0x4e20U, vlSelf->tb_uart_top__DOT___rx_cnt))) {
            co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_uart_top.clk)", 
                                                               "tb_uart_top.v", 
                                                               117);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_uart_top__DOT___rx_cnt = ((IData)(1U) 
                                                 + vlSelf->tb_uart_top__DOT___rx_cnt);
        }
        if (VL_LIKELY(vlSelf->tb_uart_top__DOT__rx_valid)) {
            vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0 
                = vlSelf->tb_uart_top__DOT__rx_data;
            vlSelf->tb_uart_top__DOT__rx_string[4U] 
                = vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0;
            if ((vlSelf->tb_uart_top__DOT__rx_string
                 [4U] == (IData)(vlSelf->tb_uart_top__DOT__current_tx_char))) {
                VL_WRITEF("  [ 4] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\223\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_passed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_passed);
            } else {
                VL_WRITEF("  [ 4] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\227 FAIL\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_failed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
            }
        } else {
            VL_WRITEF("  [ 4] '%c' Sent: 0x%02x  Recv: TIMEOUT\n",
                      8,vlSelf->tb_uart_top__DOT__current_tx_char,
                      8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char));
            vlSelf->tb_uart_top__DOT__any_timeout = 1U;
            vlSelf->tb_uart_top__DOT__bytes_failed 
                = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
        }
    } else {
        VL_WRITEF("[ERROR] TX ready timeout (byte 4)\n");
        vlSelf->tb_uart_top__DOT__any_timeout = 1U;
        vlSelf->tb_uart_top__DOT__bytes_failed = ((IData)(1U) 
                                                  + vlSelf->tb_uart_top__DOT__bytes_failed);
    }
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_uart_top__DOT__i = 5U;
    vlSelf->tb_uart_top__DOT__current_tx_char = 0x20U;
    tb_uart_top__DOT___tx_cnt = 0U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while (((0U != (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)) 
            & VL_GTS_III(32, 0x4e20U, tb_uart_top__DOT___tx_cnt))) {
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           93);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tb_uart_top__DOT___tx_cnt = ((IData)(1U) + tb_uart_top__DOT___tx_cnt);
    }
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)))) {
        vlSelf->tb_uart_top__DOT__tx_data = vlSelf->tb_uart_top__DOT__current_tx_char;
        vlSelf->tb_uart_top__DOT__tx_valid = 1U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           107);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_uart_top__DOT__tx_valid = 0U;
        vlSelf->tb_uart_top__DOT__tx_data = 0U;
        vlSelf->tb_uart_top__DOT___rx_cnt = 0U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while (((~ (IData)(vlSelf->tb_uart_top__DOT__rx_valid)) 
                & VL_GTS_III(32, 0x4e20U, vlSelf->tb_uart_top__DOT___rx_cnt))) {
            co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_uart_top.clk)", 
                                                               "tb_uart_top.v", 
                                                               117);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_uart_top__DOT___rx_cnt = ((IData)(1U) 
                                                 + vlSelf->tb_uart_top__DOT___rx_cnt);
        }
        if (VL_LIKELY(vlSelf->tb_uart_top__DOT__rx_valid)) {
            vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0 
                = vlSelf->tb_uart_top__DOT__rx_data;
            vlSelf->tb_uart_top__DOT__rx_string[5U] 
                = vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0;
            if ((vlSelf->tb_uart_top__DOT__rx_string
                 [5U] == (IData)(vlSelf->tb_uart_top__DOT__current_tx_char))) {
                VL_WRITEF("  [ 5] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\223\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_passed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_passed);
            } else {
                VL_WRITEF("  [ 5] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\227 FAIL\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_failed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
            }
        } else {
            VL_WRITEF("  [ 5] '%c' Sent: 0x%02x  Recv: TIMEOUT\n",
                      8,vlSelf->tb_uart_top__DOT__current_tx_char,
                      8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char));
            vlSelf->tb_uart_top__DOT__any_timeout = 1U;
            vlSelf->tb_uart_top__DOT__bytes_failed 
                = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
        }
    } else {
        VL_WRITEF("[ERROR] TX ready timeout (byte 5)\n");
        vlSelf->tb_uart_top__DOT__any_timeout = 1U;
        vlSelf->tb_uart_top__DOT__bytes_failed = ((IData)(1U) 
                                                  + vlSelf->tb_uart_top__DOT__bytes_failed);
    }
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_uart_top__DOT__i = 6U;
    vlSelf->tb_uart_top__DOT__current_tx_char = 0x64U;
    tb_uart_top__DOT___tx_cnt = 0U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while (((0U != (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)) 
            & VL_GTS_III(32, 0x4e20U, tb_uart_top__DOT___tx_cnt))) {
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           93);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tb_uart_top__DOT___tx_cnt = ((IData)(1U) + tb_uart_top__DOT___tx_cnt);
    }
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)))) {
        vlSelf->tb_uart_top__DOT__tx_data = vlSelf->tb_uart_top__DOT__current_tx_char;
        vlSelf->tb_uart_top__DOT__tx_valid = 1U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           107);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_uart_top__DOT__tx_valid = 0U;
        vlSelf->tb_uart_top__DOT__tx_data = 0U;
        vlSelf->tb_uart_top__DOT___rx_cnt = 0U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while (((~ (IData)(vlSelf->tb_uart_top__DOT__rx_valid)) 
                & VL_GTS_III(32, 0x4e20U, vlSelf->tb_uart_top__DOT___rx_cnt))) {
            co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_uart_top.clk)", 
                                                               "tb_uart_top.v", 
                                                               117);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_uart_top__DOT___rx_cnt = ((IData)(1U) 
                                                 + vlSelf->tb_uart_top__DOT___rx_cnt);
        }
        if (VL_LIKELY(vlSelf->tb_uart_top__DOT__rx_valid)) {
            vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0 
                = vlSelf->tb_uart_top__DOT__rx_data;
            vlSelf->tb_uart_top__DOT__rx_string[6U] 
                = vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0;
            if ((vlSelf->tb_uart_top__DOT__rx_string
                 [6U] == (IData)(vlSelf->tb_uart_top__DOT__current_tx_char))) {
                VL_WRITEF("  [ 6] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\223\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_passed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_passed);
            } else {
                VL_WRITEF("  [ 6] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\227 FAIL\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_failed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
            }
        } else {
            VL_WRITEF("  [ 6] '%c' Sent: 0x%02x  Recv: TIMEOUT\n",
                      8,vlSelf->tb_uart_top__DOT__current_tx_char,
                      8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char));
            vlSelf->tb_uart_top__DOT__any_timeout = 1U;
            vlSelf->tb_uart_top__DOT__bytes_failed 
                = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
        }
    } else {
        VL_WRITEF("[ERROR] TX ready timeout (byte 6)\n");
        vlSelf->tb_uart_top__DOT__any_timeout = 1U;
        vlSelf->tb_uart_top__DOT__bytes_failed = ((IData)(1U) 
                                                  + vlSelf->tb_uart_top__DOT__bytes_failed);
    }
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_uart_top__DOT__i = 7U;
    vlSelf->tb_uart_top__DOT__current_tx_char = 0x69U;
    tb_uart_top__DOT___tx_cnt = 0U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while (((0U != (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)) 
            & VL_GTS_III(32, 0x4e20U, tb_uart_top__DOT___tx_cnt))) {
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           93);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tb_uart_top__DOT___tx_cnt = ((IData)(1U) + tb_uart_top__DOT___tx_cnt);
    }
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)))) {
        vlSelf->tb_uart_top__DOT__tx_data = vlSelf->tb_uart_top__DOT__current_tx_char;
        vlSelf->tb_uart_top__DOT__tx_valid = 1U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           107);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_uart_top__DOT__tx_valid = 0U;
        vlSelf->tb_uart_top__DOT__tx_data = 0U;
        vlSelf->tb_uart_top__DOT___rx_cnt = 0U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while (((~ (IData)(vlSelf->tb_uart_top__DOT__rx_valid)) 
                & VL_GTS_III(32, 0x4e20U, vlSelf->tb_uart_top__DOT___rx_cnt))) {
            co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_uart_top.clk)", 
                                                               "tb_uart_top.v", 
                                                               117);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_uart_top__DOT___rx_cnt = ((IData)(1U) 
                                                 + vlSelf->tb_uart_top__DOT___rx_cnt);
        }
        if (VL_LIKELY(vlSelf->tb_uart_top__DOT__rx_valid)) {
            vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0 
                = vlSelf->tb_uart_top__DOT__rx_data;
            vlSelf->tb_uart_top__DOT__rx_string[7U] 
                = vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0;
            if ((vlSelf->tb_uart_top__DOT__rx_string
                 [7U] == (IData)(vlSelf->tb_uart_top__DOT__current_tx_char))) {
                VL_WRITEF("  [ 7] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\223\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_passed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_passed);
            } else {
                VL_WRITEF("  [ 7] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\227 FAIL\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_failed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
            }
        } else {
            VL_WRITEF("  [ 7] '%c' Sent: 0x%02x  Recv: TIMEOUT\n",
                      8,vlSelf->tb_uart_top__DOT__current_tx_char,
                      8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char));
            vlSelf->tb_uart_top__DOT__any_timeout = 1U;
            vlSelf->tb_uart_top__DOT__bytes_failed 
                = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
        }
    } else {
        VL_WRITEF("[ERROR] TX ready timeout (byte 7)\n");
        vlSelf->tb_uart_top__DOT__any_timeout = 1U;
        vlSelf->tb_uart_top__DOT__bytes_failed = ((IData)(1U) 
                                                  + vlSelf->tb_uart_top__DOT__bytes_failed);
    }
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_uart_top__DOT__i = 8U;
    vlSelf->tb_uart_top__DOT__current_tx_char = 0x67U;
    tb_uart_top__DOT___tx_cnt = 0U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while (((0U != (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)) 
            & VL_GTS_III(32, 0x4e20U, tb_uart_top__DOT___tx_cnt))) {
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           93);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tb_uart_top__DOT___tx_cnt = ((IData)(1U) + tb_uart_top__DOT___tx_cnt);
    }
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)))) {
        vlSelf->tb_uart_top__DOT__tx_data = vlSelf->tb_uart_top__DOT__current_tx_char;
        vlSelf->tb_uart_top__DOT__tx_valid = 1U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           107);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_uart_top__DOT__tx_valid = 0U;
        vlSelf->tb_uart_top__DOT__tx_data = 0U;
        vlSelf->tb_uart_top__DOT___rx_cnt = 0U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while (((~ (IData)(vlSelf->tb_uart_top__DOT__rx_valid)) 
                & VL_GTS_III(32, 0x4e20U, vlSelf->tb_uart_top__DOT___rx_cnt))) {
            co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_uart_top.clk)", 
                                                               "tb_uart_top.v", 
                                                               117);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_uart_top__DOT___rx_cnt = ((IData)(1U) 
                                                 + vlSelf->tb_uart_top__DOT___rx_cnt);
        }
        if (VL_LIKELY(vlSelf->tb_uart_top__DOT__rx_valid)) {
            vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0 
                = vlSelf->tb_uart_top__DOT__rx_data;
            vlSelf->tb_uart_top__DOT__rx_string[8U] 
                = vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0;
            if ((vlSelf->tb_uart_top__DOT__rx_string
                 [8U] == (IData)(vlSelf->tb_uart_top__DOT__current_tx_char))) {
                VL_WRITEF("  [ 8] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\223\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_passed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_passed);
            } else {
                VL_WRITEF("  [ 8] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\227 FAIL\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_failed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
            }
        } else {
            VL_WRITEF("  [ 8] '%c' Sent: 0x%02x  Recv: TIMEOUT\n",
                      8,vlSelf->tb_uart_top__DOT__current_tx_char,
                      8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char));
            vlSelf->tb_uart_top__DOT__any_timeout = 1U;
            vlSelf->tb_uart_top__DOT__bytes_failed 
                = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
        }
    } else {
        VL_WRITEF("[ERROR] TX ready timeout (byte 8)\n");
        vlSelf->tb_uart_top__DOT__any_timeout = 1U;
        vlSelf->tb_uart_top__DOT__bytes_failed = ((IData)(1U) 
                                                  + vlSelf->tb_uart_top__DOT__bytes_failed);
    }
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_uart_top__DOT__i = 9U;
    vlSelf->tb_uart_top__DOT__current_tx_char = 0x61U;
    tb_uart_top__DOT___tx_cnt = 0U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while (((0U != (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)) 
            & VL_GTS_III(32, 0x4e20U, tb_uart_top__DOT___tx_cnt))) {
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           93);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tb_uart_top__DOT___tx_cnt = ((IData)(1U) + tb_uart_top__DOT___tx_cnt);
    }
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)))) {
        vlSelf->tb_uart_top__DOT__tx_data = vlSelf->tb_uart_top__DOT__current_tx_char;
        vlSelf->tb_uart_top__DOT__tx_valid = 1U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           107);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_uart_top__DOT__tx_valid = 0U;
        vlSelf->tb_uart_top__DOT__tx_data = 0U;
        vlSelf->tb_uart_top__DOT___rx_cnt = 0U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while (((~ (IData)(vlSelf->tb_uart_top__DOT__rx_valid)) 
                & VL_GTS_III(32, 0x4e20U, vlSelf->tb_uart_top__DOT___rx_cnt))) {
            co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_uart_top.clk)", 
                                                               "tb_uart_top.v", 
                                                               117);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_uart_top__DOT___rx_cnt = ((IData)(1U) 
                                                 + vlSelf->tb_uart_top__DOT___rx_cnt);
        }
        if (VL_LIKELY(vlSelf->tb_uart_top__DOT__rx_valid)) {
            vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0 
                = vlSelf->tb_uart_top__DOT__rx_data;
            vlSelf->tb_uart_top__DOT__rx_string[9U] 
                = vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0;
            if ((vlSelf->tb_uart_top__DOT__rx_string
                 [9U] == (IData)(vlSelf->tb_uart_top__DOT__current_tx_char))) {
                VL_WRITEF("  [ 9] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\223\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_passed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_passed);
            } else {
                VL_WRITEF("  [ 9] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\227 FAIL\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_failed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
            }
        } else {
            VL_WRITEF("  [ 9] '%c' Sent: 0x%02x  Recv: TIMEOUT\n",
                      8,vlSelf->tb_uart_top__DOT__current_tx_char,
                      8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char));
            vlSelf->tb_uart_top__DOT__any_timeout = 1U;
            vlSelf->tb_uart_top__DOT__bytes_failed 
                = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
        }
    } else {
        VL_WRITEF("[ERROR] TX ready timeout (byte 9)\n");
        vlSelf->tb_uart_top__DOT__any_timeout = 1U;
        vlSelf->tb_uart_top__DOT__bytes_failed = ((IData)(1U) 
                                                  + vlSelf->tb_uart_top__DOT__bytes_failed);
    }
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_uart_top__DOT__i = 0xaU;
    vlSelf->tb_uart_top__DOT__current_tx_char = 0x6dU;
    tb_uart_top__DOT___tx_cnt = 0U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while (((0U != (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)) 
            & VL_GTS_III(32, 0x4e20U, tb_uart_top__DOT___tx_cnt))) {
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           93);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tb_uart_top__DOT___tx_cnt = ((IData)(1U) + tb_uart_top__DOT___tx_cnt);
    }
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)))) {
        vlSelf->tb_uart_top__DOT__tx_data = vlSelf->tb_uart_top__DOT__current_tx_char;
        vlSelf->tb_uart_top__DOT__tx_valid = 1U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           107);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_uart_top__DOT__tx_valid = 0U;
        vlSelf->tb_uart_top__DOT__tx_data = 0U;
        vlSelf->tb_uart_top__DOT___rx_cnt = 0U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while (((~ (IData)(vlSelf->tb_uart_top__DOT__rx_valid)) 
                & VL_GTS_III(32, 0x4e20U, vlSelf->tb_uart_top__DOT___rx_cnt))) {
            co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_uart_top.clk)", 
                                                               "tb_uart_top.v", 
                                                               117);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_uart_top__DOT___rx_cnt = ((IData)(1U) 
                                                 + vlSelf->tb_uart_top__DOT___rx_cnt);
        }
        if (VL_LIKELY(vlSelf->tb_uart_top__DOT__rx_valid)) {
            vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0 
                = vlSelf->tb_uart_top__DOT__rx_data;
            vlSelf->tb_uart_top__DOT__rx_string[0xaU] 
                = vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0;
            if ((vlSelf->tb_uart_top__DOT__rx_string
                 [0xaU] == (IData)(vlSelf->tb_uart_top__DOT__current_tx_char))) {
                VL_WRITEF("  [10] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\223\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_passed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_passed);
            } else {
                VL_WRITEF("  [10] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\227 FAIL\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_failed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
            }
        } else {
            VL_WRITEF("  [10] '%c' Sent: 0x%02x  Recv: TIMEOUT\n",
                      8,vlSelf->tb_uart_top__DOT__current_tx_char,
                      8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char));
            vlSelf->tb_uart_top__DOT__any_timeout = 1U;
            vlSelf->tb_uart_top__DOT__bytes_failed 
                = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
        }
    } else {
        VL_WRITEF("[ERROR] TX ready timeout (byte 10)\n");
        vlSelf->tb_uart_top__DOT__any_timeout = 1U;
        vlSelf->tb_uart_top__DOT__bytes_failed = ((IData)(1U) 
                                                  + vlSelf->tb_uart_top__DOT__bytes_failed);
    }
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_uart_top__DOT__i = 0xbU;
    vlSelf->tb_uart_top__DOT__current_tx_char = 0x62U;
    tb_uart_top__DOT___tx_cnt = 0U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while (((0U != (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)) 
            & VL_GTS_III(32, 0x4e20U, tb_uart_top__DOT___tx_cnt))) {
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           93);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tb_uart_top__DOT___tx_cnt = ((IData)(1U) + tb_uart_top__DOT___tx_cnt);
    }
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)))) {
        vlSelf->tb_uart_top__DOT__tx_data = vlSelf->tb_uart_top__DOT__current_tx_char;
        vlSelf->tb_uart_top__DOT__tx_valid = 1U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           107);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_uart_top__DOT__tx_valid = 0U;
        vlSelf->tb_uart_top__DOT__tx_data = 0U;
        vlSelf->tb_uart_top__DOT___rx_cnt = 0U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while (((~ (IData)(vlSelf->tb_uart_top__DOT__rx_valid)) 
                & VL_GTS_III(32, 0x4e20U, vlSelf->tb_uart_top__DOT___rx_cnt))) {
            co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_uart_top.clk)", 
                                                               "tb_uart_top.v", 
                                                               117);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_uart_top__DOT___rx_cnt = ((IData)(1U) 
                                                 + vlSelf->tb_uart_top__DOT___rx_cnt);
        }
        if (VL_LIKELY(vlSelf->tb_uart_top__DOT__rx_valid)) {
            vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0 
                = vlSelf->tb_uart_top__DOT__rx_data;
            vlSelf->tb_uart_top__DOT__rx_string[0xbU] 
                = vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0;
            if ((vlSelf->tb_uart_top__DOT__rx_string
                 [0xbU] == (IData)(vlSelf->tb_uart_top__DOT__current_tx_char))) {
                VL_WRITEF("  [11] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\223\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_passed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_passed);
            } else {
                VL_WRITEF("  [11] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\227 FAIL\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_failed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
            }
        } else {
            VL_WRITEF("  [11] '%c' Sent: 0x%02x  Recv: TIMEOUT\n",
                      8,vlSelf->tb_uart_top__DOT__current_tx_char,
                      8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char));
            vlSelf->tb_uart_top__DOT__any_timeout = 1U;
            vlSelf->tb_uart_top__DOT__bytes_failed 
                = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
        }
    } else {
        VL_WRITEF("[ERROR] TX ready timeout (byte 11)\n");
        vlSelf->tb_uart_top__DOT__any_timeout = 1U;
        vlSelf->tb_uart_top__DOT__bytes_failed = ((IData)(1U) 
                                                  + vlSelf->tb_uart_top__DOT__bytes_failed);
    }
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_uart_top__DOT__i = 0xcU;
    vlSelf->tb_uart_top__DOT__current_tx_char = 0x61U;
    tb_uart_top__DOT___tx_cnt = 0U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while (((0U != (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)) 
            & VL_GTS_III(32, 0x4e20U, tb_uart_top__DOT___tx_cnt))) {
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           93);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tb_uart_top__DOT___tx_cnt = ((IData)(1U) + tb_uart_top__DOT___tx_cnt);
    }
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)))) {
        vlSelf->tb_uart_top__DOT__tx_data = vlSelf->tb_uart_top__DOT__current_tx_char;
        vlSelf->tb_uart_top__DOT__tx_valid = 1U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           107);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_uart_top__DOT__tx_valid = 0U;
        vlSelf->tb_uart_top__DOT__tx_data = 0U;
        vlSelf->tb_uart_top__DOT___rx_cnt = 0U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while (((~ (IData)(vlSelf->tb_uart_top__DOT__rx_valid)) 
                & VL_GTS_III(32, 0x4e20U, vlSelf->tb_uart_top__DOT___rx_cnt))) {
            co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_uart_top.clk)", 
                                                               "tb_uart_top.v", 
                                                               117);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_uart_top__DOT___rx_cnt = ((IData)(1U) 
                                                 + vlSelf->tb_uart_top__DOT___rx_cnt);
        }
        if (VL_LIKELY(vlSelf->tb_uart_top__DOT__rx_valid)) {
            vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0 
                = vlSelf->tb_uart_top__DOT__rx_data;
            vlSelf->tb_uart_top__DOT__rx_string[0xcU] 
                = vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0;
            if ((vlSelf->tb_uart_top__DOT__rx_string
                 [0xcU] == (IData)(vlSelf->tb_uart_top__DOT__current_tx_char))) {
                VL_WRITEF("  [12] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\223\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_passed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_passed);
            } else {
                VL_WRITEF("  [12] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\227 FAIL\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_failed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
            }
        } else {
            VL_WRITEF("  [12] '%c' Sent: 0x%02x  Recv: TIMEOUT\n",
                      8,vlSelf->tb_uart_top__DOT__current_tx_char,
                      8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char));
            vlSelf->tb_uart_top__DOT__any_timeout = 1U;
            vlSelf->tb_uart_top__DOT__bytes_failed 
                = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
        }
    } else {
        VL_WRITEF("[ERROR] TX ready timeout (byte 12)\n");
        vlSelf->tb_uart_top__DOT__any_timeout = 1U;
        vlSelf->tb_uart_top__DOT__bytes_failed = ((IData)(1U) 
                                                  + vlSelf->tb_uart_top__DOT__bytes_failed);
    }
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_uart_top__DOT__i = 0xdU;
    vlSelf->tb_uart_top__DOT__current_tx_char = 0x72U;
    tb_uart_top__DOT___tx_cnt = 0U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       91);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while (((0U != (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)) 
            & VL_GTS_III(32, 0x4e20U, tb_uart_top__DOT___tx_cnt))) {
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           93);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tb_uart_top__DOT___tx_cnt = ((IData)(1U) + tb_uart_top__DOT___tx_cnt);
    }
    if (VL_LIKELY((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state)))) {
        vlSelf->tb_uart_top__DOT__tx_data = vlSelf->tb_uart_top__DOT__current_tx_char;
        vlSelf->tb_uart_top__DOT__tx_valid = 1U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           107);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->tb_uart_top__DOT__tx_valid = 0U;
        vlSelf->tb_uart_top__DOT__tx_data = 0U;
        vlSelf->tb_uart_top__DOT___rx_cnt = 0U;
        co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_uart_top.clk)", 
                                                           "tb_uart_top.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        while (((~ (IData)(vlSelf->tb_uart_top__DOT__rx_valid)) 
                & VL_GTS_III(32, 0x4e20U, vlSelf->tb_uart_top__DOT___rx_cnt))) {
            co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tb_uart_top.clk)", 
                                                               "tb_uart_top.v", 
                                                               117);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tb_uart_top__DOT___rx_cnt = ((IData)(1U) 
                                                 + vlSelf->tb_uart_top__DOT___rx_cnt);
        }
        if (VL_LIKELY(vlSelf->tb_uart_top__DOT__rx_valid)) {
            vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0 
                = vlSelf->tb_uart_top__DOT__rx_data;
            vlSelf->tb_uart_top__DOT__rx_string[0xdU] 
                = vlSelf->tb_uart_top__DOT____Vlvbound_h102aded1__0;
            if ((vlSelf->tb_uart_top__DOT__rx_string
                 [0xdU] == (IData)(vlSelf->tb_uart_top__DOT__current_tx_char))) {
                VL_WRITEF("  [13] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\223\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_passed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_passed);
            } else {
                VL_WRITEF("  [13] '%c' Sent: 0x%02x  Recv: 0x%02x  Match: \342\234\227 FAIL\n",
                          8,vlSelf->tb_uart_top__DOT__current_tx_char,
                          8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char),
                          8,vlSelf->tb_uart_top__DOT__rx_data);
                vlSelf->tb_uart_top__DOT__bytes_failed 
                    = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
            }
        } else {
            VL_WRITEF("  [13] '%c' Sent: 0x%02x  Recv: TIMEOUT\n",
                      8,vlSelf->tb_uart_top__DOT__current_tx_char,
                      8,(IData)(vlSelf->tb_uart_top__DOT__current_tx_char));
            vlSelf->tb_uart_top__DOT__any_timeout = 1U;
            vlSelf->tb_uart_top__DOT__bytes_failed 
                = ((IData)(1U) + vlSelf->tb_uart_top__DOT__bytes_failed);
        }
    } else {
        VL_WRITEF("[ERROR] TX ready timeout (byte 13)\n");
        vlSelf->tb_uart_top__DOT__any_timeout = 1U;
        vlSelf->tb_uart_top__DOT__bytes_failed = ((IData)(1U) 
                                                  + vlSelf->tb_uart_top__DOT__bytes_failed);
    }
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h2c4f64ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_uart_top.clk)", 
                                                       "tb_uart_top.v", 
                                                       142);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_uart_top__DOT__i = 0xeU;
    VL_WRITEF("\n\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\n");
    if (((0xeU == vlSelf->tb_uart_top__DOT__bytes_passed) 
         & (~ (IData)(vlSelf->tb_uart_top__DOT__any_timeout)))) {
        VL_WRITEF(" *** TEST PASSED \342\234\223  TX == RX == \"hello digambar\" ***\n");
    } else {
        VL_WRITEF(" *** TEST FAILED \342\234\227  Passed: %0d/12  Failed: %0d ***\n",
                  32,vlSelf->tb_uart_top__DOT__bytes_passed,
                  32,vlSelf->tb_uart_top__DOT__bytes_failed);
    }
    VL_WRITEF("\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\342\224\200\n");
    VL_FINISH_MT("tb_uart_top.v", 154, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_uart_top___024root___dump_triggers__act(Vtb_uart_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_uart_top___024root___eval_triggers__act(Vtb_uart_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_uart_top__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_uart_top__DOT__clk__0))) 
                                     | ((IData)(vlSelf->tb_uart_top__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_uart_top__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_uart_top__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_uart_top__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_uart_top__DOT__clk__0 
        = vlSelf->tb_uart_top__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_uart_top__DOT__reset__0 
        = vlSelf->tb_uart_top__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_uart_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
