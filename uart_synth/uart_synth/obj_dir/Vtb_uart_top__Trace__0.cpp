// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_uart_top__Syms.h"


void Vtb_uart_top___024root__trace_chg_sub_0(Vtb_uart_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_uart_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_uart_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_uart_top___024root*>(voidSelf);
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_uart_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_uart_top___024root__trace_chg_sub_0(Vtb_uart_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_uart_top__DOT__reset));
        bufp->chgCData(oldp+1,(vlSelf->tb_uart_top__DOT__tx_data),8);
        bufp->chgBit(oldp+2,(vlSelf->tb_uart_top__DOT__tx_valid));
        bufp->chgCData(oldp+3,(vlSelf->tb_uart_top__DOT__rx_string[0]),8);
        bufp->chgCData(oldp+4,(vlSelf->tb_uart_top__DOT__rx_string[1]),8);
        bufp->chgCData(oldp+5,(vlSelf->tb_uart_top__DOT__rx_string[2]),8);
        bufp->chgCData(oldp+6,(vlSelf->tb_uart_top__DOT__rx_string[3]),8);
        bufp->chgCData(oldp+7,(vlSelf->tb_uart_top__DOT__rx_string[4]),8);
        bufp->chgCData(oldp+8,(vlSelf->tb_uart_top__DOT__rx_string[5]),8);
        bufp->chgCData(oldp+9,(vlSelf->tb_uart_top__DOT__rx_string[6]),8);
        bufp->chgCData(oldp+10,(vlSelf->tb_uart_top__DOT__rx_string[7]),8);
        bufp->chgCData(oldp+11,(vlSelf->tb_uart_top__DOT__rx_string[8]),8);
        bufp->chgCData(oldp+12,(vlSelf->tb_uart_top__DOT__rx_string[9]),8);
        bufp->chgCData(oldp+13,(vlSelf->tb_uart_top__DOT__rx_string[10]),8);
        bufp->chgCData(oldp+14,(vlSelf->tb_uart_top__DOT__rx_string[11]),8);
        bufp->chgCData(oldp+15,(vlSelf->tb_uart_top__DOT__rx_string[12]),8);
        bufp->chgCData(oldp+16,(vlSelf->tb_uart_top__DOT__rx_string[13]),8);
        bufp->chgIData(oldp+17,(vlSelf->tb_uart_top__DOT__i),32);
        bufp->chgIData(oldp+18,(vlSelf->tb_uart_top__DOT__bytes_passed),32);
        bufp->chgIData(oldp+19,(vlSelf->tb_uart_top__DOT__bytes_failed),32);
        bufp->chgBit(oldp+20,(vlSelf->tb_uart_top__DOT__any_timeout));
        bufp->chgCData(oldp+21,(vlSelf->tb_uart_top__DOT__current_tx_char),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+22,((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state))));
        bufp->chgCData(oldp+23,(vlSelf->tb_uart_top__DOT__rx_data),8);
        bufp->chgBit(oldp+24,(vlSelf->tb_uart_top__DOT__rx_valid));
        bufp->chgBit(oldp+25,(vlSelf->tb_uart_top__DOT__dut__DOT__serial_line));
        bufp->chgBit(oldp+26,(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__rx_sync0));
        bufp->chgBit(oldp+27,(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__rx_sync1));
        bufp->chgCData(oldp+28,(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__state),2);
        bufp->chgSData(oldp+29,(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt),9);
        bufp->chgCData(oldp+30,(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt),3);
        bufp->chgCData(oldp+31,(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__shift_reg),8);
        bufp->chgCData(oldp+32,(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state),2);
        bufp->chgCData(oldp+33,(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__shift_reg),8);
        bufp->chgCData(oldp+34,(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__bit_cnt),3);
        bufp->chgSData(oldp+35,(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt),9);
    }
    bufp->chgBit(oldp+36,(vlSelf->tb_uart_top__DOT__clk));
}

void Vtb_uart_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root__trace_cleanup\n"); );
    // Init
    Vtb_uart_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_uart_top___024root*>(voidSelf);
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
