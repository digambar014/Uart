// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_uart_top.h for the primary calling header

#ifndef VERILATED_VTB_UART_TOP___024ROOT_H_
#define VERILATED_VTB_UART_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_uart_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_uart_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_uart_top__DOT__clk;
    CData/*0:0*/ tb_uart_top__DOT__reset;
    CData/*7:0*/ tb_uart_top__DOT__tx_data;
    CData/*0:0*/ tb_uart_top__DOT__tx_valid;
    CData/*0:0*/ tb_uart_top__DOT__tx_ready;
    CData/*7:0*/ tb_uart_top__DOT__rx_data;
    CData/*0:0*/ tb_uart_top__DOT__rx_valid;
    CData/*0:0*/ tb_uart_top__DOT__any_timeout;
    CData/*7:0*/ tb_uart_top__DOT__current_tx_char;
    CData/*7:0*/ tb_uart_top__DOT____Vlvbound_h102aded1__0;
    CData/*0:0*/ tb_uart_top__DOT__dut__DOT__serial_line;
    CData/*1:0*/ tb_uart_top__DOT__dut__DOT__u_tx__DOT__state;
    CData/*7:0*/ tb_uart_top__DOT__dut__DOT__u_tx__DOT__shift_reg;
    CData/*2:0*/ tb_uart_top__DOT__dut__DOT__u_tx__DOT__bit_cnt;
    CData/*0:0*/ tb_uart_top__DOT__dut__DOT__u_rx__DOT__rx_sync0;
    CData/*0:0*/ tb_uart_top__DOT__dut__DOT__u_rx__DOT__rx_sync1;
    CData/*1:0*/ tb_uart_top__DOT__dut__DOT__u_rx__DOT__state;
    CData/*2:0*/ tb_uart_top__DOT__dut__DOT__u_rx__DOT__bit_cnt;
    CData/*7:0*/ tb_uart_top__DOT__dut__DOT__u_rx__DOT__shift_reg;
    CData/*0:0*/ __Vdlyvval__tb_uart_top__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__tb_uart_top__DOT__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_uart_top__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_uart_top__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ tb_uart_top__DOT__dut__DOT__u_tx__DOT__clk_cnt;
    SData/*8:0*/ tb_uart_top__DOT__dut__DOT__u_rx__DOT__clk_cnt;
    IData/*31:0*/ tb_uart_top__DOT__i;
    IData/*31:0*/ tb_uart_top__DOT__bytes_passed;
    IData/*31:0*/ tb_uart_top__DOT__bytes_failed;
    IData/*31:0*/ tb_uart_top__DOT___rx_cnt;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 14> tb_uart_top__DOT__rx_string;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2c4f64ab__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_uart_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_uart_top___024root(Vtb_uart_top__Syms* symsp, const char* v__name);
    ~Vtb_uart_top___024root();
    VL_UNCOPYABLE(Vtb_uart_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
