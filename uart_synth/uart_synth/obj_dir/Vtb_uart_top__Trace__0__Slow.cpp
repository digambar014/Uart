// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_uart_top__Syms.h"


VL_ATTR_COLD void Vtb_uart_top___024root__trace_init_sub__TOP__0(Vtb_uart_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_uart_top ");
    tracep->declBus(c+38,"CLK_PERIOD", false,-1, 31,0);
    tracep->declBus(c+39,"TX_TIMEOUT", false,-1, 31,0);
    tracep->declBus(c+39,"RX_TIMEOUT", false,-1, 31,0);
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBus(c+2,"tx_data", false,-1, 7,0);
    tracep->declBit(c+3,"tx_valid", false,-1);
    tracep->declBit(c+23,"tx_ready", false,-1);
    tracep->declBus(c+24,"rx_data", false,-1, 7,0);
    tracep->declBit(c+25,"rx_valid", false,-1);
    tracep->declArray(c+40,"tx_string", false,-1, 111,0);
    for (int i = 0; i < 14; ++i) {
        tracep->declBus(c+4+i*1,"rx_string", true,(i+0), 7,0);
    }
    tracep->declBus(c+18,"i", false,-1, 31,0);
    tracep->declBus(c+19,"bytes_passed", false,-1, 31,0);
    tracep->declBus(c+20,"bytes_failed", false,-1, 31,0);
    tracep->declBit(c+21,"any_timeout", false,-1);
    tracep->declBus(c+22,"current_tx_char", false,-1, 7,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+44,"CLK_FREQ", false,-1, 31,0);
    tracep->declBus(c+45,"BAUD_RATE", false,-1, 31,0);
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBus(c+2,"tx_data", false,-1, 7,0);
    tracep->declBit(c+3,"tx_valid", false,-1);
    tracep->declBit(c+23,"tx_ready", false,-1);
    tracep->declBus(c+24,"rx_data", false,-1, 7,0);
    tracep->declBit(c+25,"rx_valid", false,-1);
    tracep->declBit(c+26,"serial_line", false,-1);
    tracep->pushNamePrefix("u_rx ");
    tracep->declBus(c+44,"CLK_FREQ", false,-1, 31,0);
    tracep->declBus(c+45,"BAUD_RATE", false,-1, 31,0);
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+26,"rx", false,-1);
    tracep->declBus(c+24,"data_out", false,-1, 7,0);
    tracep->declBit(c+25,"data_valid", false,-1);
    tracep->declBus(c+46,"CLKS_PER_BIT", false,-1, 31,0);
    tracep->declBus(c+47,"CLKS_HALF_BIT", false,-1, 31,0);
    tracep->declBus(c+48,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+49,"IDLE", false,-1, 1,0);
    tracep->declBus(c+50,"START", false,-1, 1,0);
    tracep->declBus(c+51,"DATA", false,-1, 1,0);
    tracep->declBus(c+52,"STOP", false,-1, 1,0);
    tracep->declBit(c+27,"rx_sync0", false,-1);
    tracep->declBit(c+28,"rx_sync1", false,-1);
    tracep->declBit(c+28,"rx_s", false,-1);
    tracep->declBus(c+29,"state", false,-1, 1,0);
    tracep->declBus(c+30,"clk_cnt", false,-1, 8,0);
    tracep->declBus(c+31,"bit_cnt", false,-1, 2,0);
    tracep->declBus(c+32,"shift_reg", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_tx ");
    tracep->declBus(c+44,"CLK_FREQ", false,-1, 31,0);
    tracep->declBus(c+45,"BAUD_RATE", false,-1, 31,0);
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBus(c+2,"data", false,-1, 7,0);
    tracep->declBit(c+3,"valid", false,-1);
    tracep->declBit(c+23,"ready", false,-1);
    tracep->declBit(c+26,"tx", false,-1);
    tracep->declBus(c+46,"CLKS_PER_BIT", false,-1, 31,0);
    tracep->declBus(c+48,"CNT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+49,"IDLE", false,-1, 1,0);
    tracep->declBus(c+50,"START", false,-1, 1,0);
    tracep->declBus(c+51,"DATA", false,-1, 1,0);
    tracep->declBus(c+52,"STOP", false,-1, 1,0);
    tracep->declBus(c+33,"state", false,-1, 1,0);
    tracep->declBus(c+34,"shift_reg", false,-1, 7,0);
    tracep->declBus(c+35,"bit_cnt", false,-1, 2,0);
    tracep->declBus(c+36,"clk_cnt", false,-1, 8,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtb_uart_top___024root__trace_init_top(Vtb_uart_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root__trace_init_top\n"); );
    // Body
    Vtb_uart_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_uart_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_uart_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_uart_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_uart_top___024root__trace_register(Vtb_uart_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_uart_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_uart_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_uart_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_uart_top___024root__trace_full_sub_0(Vtb_uart_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_uart_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root__trace_full_top_0\n"); );
    // Init
    Vtb_uart_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_uart_top___024root*>(voidSelf);
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_uart_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_uart_top___024root__trace_full_sub_0(Vtb_uart_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_uart_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_uart_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_uart_top__DOT__reset));
    bufp->fullCData(oldp+2,(vlSelf->tb_uart_top__DOT__tx_data),8);
    bufp->fullBit(oldp+3,(vlSelf->tb_uart_top__DOT__tx_valid));
    bufp->fullCData(oldp+4,(vlSelf->tb_uart_top__DOT__rx_string[0]),8);
    bufp->fullCData(oldp+5,(vlSelf->tb_uart_top__DOT__rx_string[1]),8);
    bufp->fullCData(oldp+6,(vlSelf->tb_uart_top__DOT__rx_string[2]),8);
    bufp->fullCData(oldp+7,(vlSelf->tb_uart_top__DOT__rx_string[3]),8);
    bufp->fullCData(oldp+8,(vlSelf->tb_uart_top__DOT__rx_string[4]),8);
    bufp->fullCData(oldp+9,(vlSelf->tb_uart_top__DOT__rx_string[5]),8);
    bufp->fullCData(oldp+10,(vlSelf->tb_uart_top__DOT__rx_string[6]),8);
    bufp->fullCData(oldp+11,(vlSelf->tb_uart_top__DOT__rx_string[7]),8);
    bufp->fullCData(oldp+12,(vlSelf->tb_uart_top__DOT__rx_string[8]),8);
    bufp->fullCData(oldp+13,(vlSelf->tb_uart_top__DOT__rx_string[9]),8);
    bufp->fullCData(oldp+14,(vlSelf->tb_uart_top__DOT__rx_string[10]),8);
    bufp->fullCData(oldp+15,(vlSelf->tb_uart_top__DOT__rx_string[11]),8);
    bufp->fullCData(oldp+16,(vlSelf->tb_uart_top__DOT__rx_string[12]),8);
    bufp->fullCData(oldp+17,(vlSelf->tb_uart_top__DOT__rx_string[13]),8);
    bufp->fullIData(oldp+18,(vlSelf->tb_uart_top__DOT__i),32);
    bufp->fullIData(oldp+19,(vlSelf->tb_uart_top__DOT__bytes_passed),32);
    bufp->fullIData(oldp+20,(vlSelf->tb_uart_top__DOT__bytes_failed),32);
    bufp->fullBit(oldp+21,(vlSelf->tb_uart_top__DOT__any_timeout));
    bufp->fullCData(oldp+22,(vlSelf->tb_uart_top__DOT__current_tx_char),8);
    bufp->fullBit(oldp+23,((0U == (IData)(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state))));
    bufp->fullCData(oldp+24,(vlSelf->tb_uart_top__DOT__rx_data),8);
    bufp->fullBit(oldp+25,(vlSelf->tb_uart_top__DOT__rx_valid));
    bufp->fullBit(oldp+26,(vlSelf->tb_uart_top__DOT__dut__DOT__serial_line));
    bufp->fullBit(oldp+27,(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__rx_sync0));
    bufp->fullBit(oldp+28,(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__rx_sync1));
    bufp->fullCData(oldp+29,(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__state),2);
    bufp->fullSData(oldp+30,(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt),9);
    bufp->fullCData(oldp+31,(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt),3);
    bufp->fullCData(oldp+32,(vlSelf->tb_uart_top__DOT__dut__DOT__u_rx__DOT__shift_reg),8);
    bufp->fullCData(oldp+33,(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__state),2);
    bufp->fullCData(oldp+34,(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__shift_reg),8);
    bufp->fullCData(oldp+35,(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__bit_cnt),3);
    bufp->fullSData(oldp+36,(vlSelf->tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt),9);
    bufp->fullBit(oldp+37,(vlSelf->tb_uart_top__DOT__clk));
    bufp->fullIData(oldp+38,(0x14U),32);
    bufp->fullIData(oldp+39,(0x4e20U),32);
    __Vtemp_1[0U] = 0x6d626172U;
    __Vtemp_1[1U] = 0x64696761U;
    __Vtemp_1[2U] = 0x6c6c6f20U;
    __Vtemp_1[3U] = 0x6865U;
    bufp->fullWData(oldp+40,(__Vtemp_1),112);
    bufp->fullIData(oldp+44,(0x2faf080U),32);
    bufp->fullIData(oldp+45,(0x1c200U),32);
    bufp->fullIData(oldp+46,(0x1b2U),32);
    bufp->fullIData(oldp+47,(0xd9U),32);
    bufp->fullIData(oldp+48,(9U),32);
    bufp->fullCData(oldp+49,(0U),2);
    bufp->fullCData(oldp+50,(1U),2);
    bufp->fullCData(oldp+51,(2U),2);
    bufp->fullCData(oldp+52,(3U),2);
}
