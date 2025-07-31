// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness_aquila_testharness.h"

extern const VlUnpacked<CData/*1:0*/, 1024> Vaquila_testharness__ConstPool__TABLE_h72fe481b_0;
extern const VlUnpacked<CData/*4:0*/, 1024> Vaquila_testharness__ConstPool__TABLE_h73bd92b3_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vaquila_testharness__ConstPool__TABLE_h91926796_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vaquila_testharness__ConstPool__TABLE_h93e51d3e_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vaquila_testharness__ConstPool__TABLE_h9ff0f68e_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vaquila_testharness__ConstPool__TABLE_h5715aa33_0;

VL_INLINE_OPT void Vaquila_testharness_aquila_testharness___sequent__TOP__aquila_testharness__0(Vaquila_testharness_aquila_testharness* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_testharness_aquila_testharness___sequent__TOP__aquila_testharness__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    SData/*9:0*/ __Vtableidx2;
    CData/*0:0*/ __Vdly__wishbone_uart_cyc;
    CData/*0:0*/ __Vdly__wishbone_uart_we;
    CData/*1:0*/ __Vdly__wishbone_uart_addr;
    CData/*0:0*/ __Vdly__UART_Controller__DOT__r_rx_perr;
    CData/*0:0*/ __Vdly__UART_Controller__DOT__r_rx_ferr;
    IData/*27:0*/ __Vdly__UART_Controller__DOT__rx__DOT__chg_counter;
    CData/*3:0*/ __Vdly__UART_Controller__DOT__rx__DOT__state;
    CData/*7:0*/ __Vdly__UART_Controller__DOT__rx__DOT__data_reg;
    CData/*0:0*/ __Vdly__UART_Controller__DOT__rx__DOT__calc_parity;
    CData/*0:0*/ __Vdly__UART_Controller__DOT__rx_ferr;
    IData/*23:0*/ __Vdly__UART_Controller__DOT__rx__DOT__baud_counter;
    CData/*0:0*/ __Vdly__UART_Controller__DOT__rxfifo__DOT__will_overflow;
    CData/*3:0*/ __Vdlyvdim0__UART_Controller__DOT__rxfifo__DOT__fifo__v0;
    CData/*7:0*/ __Vdlyvval__UART_Controller__DOT__rxfifo__DOT__fifo__v0;
    CData/*0:0*/ __Vdlyvset__UART_Controller__DOT__rxfifo__DOT__fifo__v0;
    CData/*0:0*/ __Vdly__UART_Controller__DOT__rxfifo__DOT__will_underflow;
    CData/*3:0*/ __Vdly__UART_Controller__DOT__rxfifo__DOT__rd_addr;
    CData/*3:0*/ __Vdly__UART_Controller__DOT__rxfifo__DOT__r_fill;
    CData/*0:0*/ __Vdly__UART_Controller__DOT__txfifo__DOT__will_overflow;
    CData/*3:0*/ __Vdlyvdim0__UART_Controller__DOT__txfifo__DOT__fifo__v0;
    CData/*7:0*/ __Vdlyvval__UART_Controller__DOT__txfifo__DOT__fifo__v0;
    CData/*0:0*/ __Vdlyvset__UART_Controller__DOT__txfifo__DOT__fifo__v0;
    CData/*0:0*/ __Vdly__UART_Controller__DOT__txfifo__DOT__will_underflow;
    CData/*3:0*/ __Vdly__UART_Controller__DOT__txfifo__DOT__rd_addr;
    CData/*3:0*/ __Vdly__UART_Controller__DOT__txfifo__DOT__r_fill;
    CData/*3:0*/ __Vdly__UART_Controller__DOT__tx__DOT__state;
    CData/*0:0*/ __Vdly__UART_Controller__DOT__tx__DOT__r_busy;
    CData/*7:0*/ __Vdly__UART_Controller__DOT__tx__DOT__lcl_data;
    CData/*0:0*/ __Vdly__UART_Controller__DOT__tx__DOT__calc_parity;
    IData/*27:0*/ __Vdly__UART_Controller__DOT__tx__DOT__baud_counter;
    CData/*0:0*/ __Vdly__UART_Controller__DOT__tx__DOT__zero_baud_counter;
    CData/*0:0*/ __Vdly__wishbone_cyc;
    CData/*0:0*/ __Vdly__wishbone_we;
    CData/*1:0*/ __Vdly__wishbone_addr;
    CData/*6:0*/ __Vdly__SD_Card_Controller__DOT__fifo_wb_addr;
    CData/*6:0*/ __Vdlyvdim0__SD_Card_Controller__DOT__fifo_a__v0;
    IData/*31:0*/ __Vdlyvval__SD_Card_Controller__DOT__fifo_a__v0;
    CData/*0:0*/ __Vdlyvset__SD_Card_Controller__DOT__fifo_a__v0;
    CData/*6:0*/ __Vdlyvdim0__SD_Card_Controller__DOT__fifo_b__v0;
    IData/*31:0*/ __Vdlyvval__SD_Card_Controller__DOT__fifo_b__v0;
    CData/*0:0*/ __Vdlyvset__SD_Card_Controller__DOT__fifo_b__v0;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__r_cmd_busy;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__r_cmd_err;
    IData/*31:0*/ __Vdly__SD_Card_Controller__DOT__r_data_reg;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__ll_cmd_stb;
    CData/*2:0*/ __Vdly__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__raw_card_present;
    SData/*9:0*/ __Vdly__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__card_detect_counter;
    IData/*25:0*/ __Vdly__SD_Card_Controller__DOT__r_watchdog;
    SData/*9:0*/ __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__powerup_counter;
    CData/*6:0*/ __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__startup_counter;
    CData/*7:0*/ __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_clk_counter;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter;
    CData/*3:0*/ __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_state;
    CData/*7:0*/ __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_ireg;
    CData/*0:0*/ __Vdly__spi_sck;
    CData/*7:0*/ __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_byte;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__cmd_busy;
    QData/*39:0*/ __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__shift_data;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__cmd_sent;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__almost_sent;
    CData/*4:0*/ __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__crc_valid_sreg;
    CData/*4:0*/ __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__crc_bit_counter;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__crc_busy;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__rx_r1_byte;
    CData/*2:0*/ __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__rx_counter;
    QData/*39:0*/ __Vdly__SD_Card_Controller__DOT__cmd_response;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__rx_busy;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__spi_write_to_fifo;
    CData/*7:0*/ __Vdly__SD_Card_Controller__DOT__spi_write_addr;
    IData/*23:0*/ __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__gearbox;
    CData/*2:0*/ __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__fill;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__lastdata;
    CData/*1:0*/ __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__crc_byte;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__lastaddr;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__crc_active;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__tx_busy;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__received_token;
    CData/*1:0*/ __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__rdvalid;
    QData/*39:0*/ __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox;
    CData/*4:0*/ __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__fill;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__crc_stb;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__spi_read_from_fifo;
    CData/*7:0*/ __Vdly__SD_Card_Controller__DOT__spi_read_addr;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__lastaddr;
    CData/*0:0*/ __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__crc_active;
    // Body
    __Vdly__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__raw_card_present 
        = vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__raw_card_present;
    __Vdly__UART_Controller__DOT__txfifo__DOT__rd_addr 
        = vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__rd_addr;
    __Vdly__UART_Controller__DOT__rxfifo__DOT__rd_addr 
        = vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__rd_addr;
    __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__lastdata 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__lastdata;
    __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__received_token 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__received_token;
    __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__rdvalid 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__rdvalid;
    __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__crc_active 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_active;
    __Vdly__SD_Card_Controller__DOT__r_watchdog = vlSelf->__PVT__SD_Card_Controller__DOT__r_watchdog;
    __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__crc_byte 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_byte;
    __Vdlyvset__UART_Controller__DOT__txfifo__DOT__fifo__v0 = 0U;
    __Vdly__UART_Controller__DOT__txfifo__DOT__r_fill 
        = vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__r_fill;
    __Vdly__UART_Controller__DOT__rxfifo__DOT__r_fill 
        = vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__r_fill;
    __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__crc_busy 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_busy;
    __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__crc_bit_counter 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_bit_counter;
    __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__crc_valid_sreg 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_valid_sreg;
    __Vdly__UART_Controller__DOT__rx__DOT__data_reg 
        = vlSelf->__PVT__UART_Controller__DOT__rx__DOT__data_reg;
    __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_ireg 
        = vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_ireg;
    __Vdly__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__card_detect_counter 
        = vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__card_detect_counter;
    __Vdly__UART_Controller__DOT__rx__DOT__calc_parity 
        = vlSelf->__PVT__UART_Controller__DOT__rx__DOT__calc_parity;
    __Vdly__SD_Card_Controller__DOT__spi_read_addr 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_addr;
    __Vdly__UART_Controller__DOT__rx_ferr = vlSelf->__PVT__UART_Controller__DOT__rx_ferr;
    __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__fill 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__fill;
    __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__almost_sent 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__almost_sent;
    __Vdly__SD_Card_Controller__DOT__spi_write_addr 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_addr;
    __Vdly__SD_Card_Controller__DOT__cmd_sent = vlSelf->__PVT__SD_Card_Controller__DOT__cmd_sent;
    __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__powerup_counter 
        = vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__powerup_counter;
    __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__lastaddr 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__lastaddr;
    __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__lastaddr 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__lastaddr;
    __Vdly__SD_Card_Controller__DOT__spi_write_to_fifo 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_to_fifo;
    __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__crc_active 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_active;
    __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__gearbox 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__gearbox;
    __Vdly__SD_Card_Controller__DOT__spi_read_from_fifo 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_from_fifo;
    __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__crc_stb 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_stb;
    __Vdly__UART_Controller__DOT__rx__DOT__baud_counter 
        = vlSelf->__PVT__UART_Controller__DOT__rx__DOT__baud_counter;
    __Vdly__UART_Controller__DOT__rxfifo__DOT__will_underflow 
        = vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__will_underflow;
    __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__shift_data 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__shift_data;
    __Vdly__UART_Controller__DOT__txfifo__DOT__will_overflow 
        = vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__will_overflow;
    __Vdly__UART_Controller__DOT__rxfifo__DOT__will_overflow 
        = vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__will_overflow;
    __Vdlyvset__UART_Controller__DOT__rxfifo__DOT__fifo__v0 = 0U;
    __Vdly__SD_Card_Controller__DOT__fifo_wb_addr = vlSelf->__PVT__SD_Card_Controller__DOT__fifo_wb_addr;
    __Vdly__UART_Controller__DOT__rx__DOT__chg_counter 
        = vlSelf->__PVT__UART_Controller__DOT__rx__DOT__chg_counter;
    __Vdly__UART_Controller__DOT__txfifo__DOT__will_underflow 
        = vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__will_underflow;
    __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_clk_counter 
        = vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_clk_counter;
    __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__startup_counter 
        = vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__startup_counter;
    __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter 
        = vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter;
    __Vdly__UART_Controller__DOT__tx__DOT__calc_parity 
        = vlSelf->__PVT__UART_Controller__DOT__tx__DOT__calc_parity;
    __Vdly__SD_Card_Controller__DOT__ll_cmd_stb = vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_stb;
    __Vdly__SD_Card_Controller__DOT__r_cmd_busy = vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy;
    __Vdly__SD_Card_Controller__DOT__rx_busy = vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy;
    __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__fill 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__fill;
    __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_state 
        = vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state;
    __Vdly__UART_Controller__DOT__tx__DOT__lcl_data 
        = vlSelf->__PVT__UART_Controller__DOT__tx__DOT__lcl_data;
    __Vdly__UART_Controller__DOT__r_rx_ferr = vlSelf->__PVT__UART_Controller__DOT__r_rx_ferr;
    __Vdly__UART_Controller__DOT__tx__DOT__zero_baud_counter 
        = vlSelf->__PVT__UART_Controller__DOT__tx__DOT__zero_baud_counter;
    __Vdly__UART_Controller__DOT__tx__DOT__baud_counter 
        = vlSelf->__PVT__UART_Controller__DOT__tx__DOT__baud_counter;
    __Vdly__UART_Controller__DOT__tx__DOT__state = vlSelf->__PVT__UART_Controller__DOT__tx__DOT__state;
    __Vdly__UART_Controller__DOT__tx__DOT__r_busy = vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_busy;
    __Vdly__SD_Card_Controller__DOT__tx_busy = vlSelf->__PVT__SD_Card_Controller__DOT__tx_busy;
    __Vdly__SD_Card_Controller__DOT__cmd_response = vlSelf->__PVT__SD_Card_Controller__DOT__cmd_response;
    __Vdly__UART_Controller__DOT__r_rx_perr = vlSelf->__PVT__UART_Controller__DOT__r_rx_perr;
    __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__rx_r1_byte 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_r1_byte;
    __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__rx_counter 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_counter;
    __Vdly__UART_Controller__DOT__rx__DOT__state = vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state;
    __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_byte 
        = vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_byte;
    __Vdly__SD_Card_Controller__DOT__cmd_busy = vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy;
    __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox 
        = vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox;
    __Vdly__spi_sck = vlSelf->spi_sck;
    __Vdly__wishbone_uart_cyc = vlSelf->__PVT__wishbone_uart_cyc;
    __Vdly__wishbone_cyc = vlSelf->__PVT__wishbone_cyc;
    __Vdly__wishbone_we = vlSelf->__PVT__wishbone_we;
    __Vdly__SD_Card_Controller__DOT__r_cmd_err = vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_err;
    __Vdlyvset__SD_Card_Controller__DOT__fifo_b__v0 = 0U;
    __Vdlyvset__SD_Card_Controller__DOT__fifo_a__v0 = 0U;
    __Vdly__SD_Card_Controller__DOT__r_data_reg = vlSelf->__PVT__SD_Card_Controller__DOT__r_data_reg;
    __Vdly__wishbone_uart_we = vlSelf->__PVT__wishbone_uart_we;
    __Vdly__wishbone_uart_addr = vlSelf->__PVT__wishbone_uart_addr;
    __Vdly__wishbone_addr = vlSelf->__PVT__wishbone_addr;
    __Vdly__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__raw_card_present 
        = (1U | (6U & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__raw_card_present) 
                       << 1U)));
    __Vtableidx2 = (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_fill) 
                     << 5U) | (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__rdvalid) 
                                << 3U) | (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_active) 
                                           << 2U) | 
                                          (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_busy) 
                                            << 1U) 
                                           | (IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber2)))));
    if ((1U & Vaquila_testharness__ConstPool__TABLE_h72fe481b_0
         [__Vtableidx2])) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_fill 
            = Vaquila_testharness__ConstPool__TABLE_h73bd92b3_0
            [__Vtableidx2];
    }
    if ((2U & Vaquila_testharness__ConstPool__TABLE_h72fe481b_0
         [__Vtableidx2])) {
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__crc_active 
            = Vaquila_testharness__ConstPool__TABLE_h91926796_0
            [__Vtableidx2];
    }
    if (vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_write) {
        __Vdlyvval__UART_Controller__DOT__txfifo__DOT__fifo__v0 
            = vlSelf->__PVT__UART_Controller__DOT__txf_wb_data;
        __Vdlyvset__UART_Controller__DOT__txfifo__DOT__fifo__v0 = 1U;
        __Vdlyvdim0__UART_Controller__DOT__txfifo__DOT__fifo__v0 
            = vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__wr_addr;
    }
    if (((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__zero_baud_counter) 
         & (8U != (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state)))) {
        __Vdly__UART_Controller__DOT__rx__DOT__data_reg 
            = (((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart) 
                << 7U) | (0x7fU & ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__data_reg) 
                                   >> 1U)));
    }
    if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter) 
         & (~ (IData)(vlSelf->spi_sck)))) {
        __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_ireg 
            = ((0xfeU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_ireg) 
                         << 1U)) | (IData)(vlSymsp->TOP.spi_miso));
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy)) 
               | (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__received_token))))) {
        __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__fill = 0U;
    } else if (((7U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__fill)) 
                & (IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7))) {
        __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__fill = 0U;
    } else if (vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7) {
        __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__fill 
            = (1U | (6U & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__fill) 
                           << 1U)));
    }
    vlSelf->__PVT__UART_Controller__DOT__tx_uart_reset 
        = (((IData)(vlSelf->__PVT__rst) | (((IData)(vlSelf->__PVT__wishbone_uart_stb) 
                                            & (0U == (IData)(vlSelf->__PVT__wishbone_uart_addr))) 
                                           & (IData)(vlSelf->__PVT__wishbone_uart_we))) 
           | (((((IData)(vlSelf->__PVT__wishbone_uart_stb) 
                 & (3U == (IData)(vlSelf->__PVT__wishbone_uart_addr))) 
                & (IData)(vlSelf->__PVT__wishbone_uart_we)) 
               & ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel) 
                  >> 1U)) & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                             >> 0xcU)));
    vlSelf->__PVT__UART_Controller__DOT__o_rts_n = 
        ((~ (vlSelf->__PVT__UART_Controller__DOT__uart_setup 
             >> 0x1eU)) & (0xdU < (0xfU & ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxf_status) 
                                           >> 2U))));
    __Vdly__SD_Card_Controller__DOT__spi_write_to_fifo 
        = ((~ ((IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber2) 
               | (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy)))) 
           & (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__received_token) 
               & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__all_mem_written))) 
              & ((7U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__fill)) 
                 & (IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7))));
    __Vtableidx1 = (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_fill) 
                     << 5U) | ((((IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7) 
                                 & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__all_mem_written))) 
                                << 4U) | (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_active) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__received_token) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy) 
                                               << 1U) 
                                              | (IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber2))))));
    if ((1U & Vaquila_testharness__ConstPool__TABLE_h93e51d3e_0
         [__Vtableidx1])) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_fill 
            = Vaquila_testharness__ConstPool__TABLE_h9ff0f68e_0
            [__Vtableidx1];
    }
    if ((2U & Vaquila_testharness__ConstPool__TABLE_h93e51d3e_0
         [__Vtableidx1])) {
        __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__crc_active 
            = Vaquila_testharness__ConstPool__TABLE_h5715aa33_0
            [__Vtableidx1];
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_gearbox 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_active)
            ? (0xfcU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_gearbox) 
                        << 2U)) : (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat));
    if (vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7) {
        __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__gearbox 
            = ((0xffff00U & (vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__gearbox 
                             << 8U)) | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat));
    }
    if (((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy)) 
         & (IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spicmdi____pinNumber3))) {
        __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__shift_data 
            = (0x4000000000ULL | (((QData)((IData)(
                                                   (0x3fU 
                                                    & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_data_reg))));
    } else if (vlSelf->__PVT__SD_Card_Controller__DOT__ll_advance) {
        __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__shift_data 
            = (0xffULL | ((QData)((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__shift_data)) 
                          << 8U));
        if ((1U & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_valid_sreg))) {
            __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__shift_data 
                = ((0xffffffffULL & __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__shift_data) 
                   | ((QData)((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_byte)) 
                      << 0x20U));
        }
    }
    if (vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_write) {
        __Vdlyvval__UART_Controller__DOT__rxfifo__DOT__fifo__v0 
            = vlSelf->__PVT__UART_Controller__DOT__rx_uart_data;
        __Vdlyvset__UART_Controller__DOT__rxfifo__DOT__fifo__v0 = 1U;
        __Vdlyvdim0__UART_Controller__DOT__rxfifo__DOT__fifo__v0 
            = vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__wr_addr;
    }
    if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__write_stb) 
         & (0U == (IData)(vlSelf->__PVT__wishbone_addr)))) {
        __Vdly__SD_Card_Controller__DOT__fifo_wb_addr = 0U;
    } else if (((IData)(vlSelf->__PVT__wishbone_stb) 
                & (((IData)(vlSelf->__PVT__wishbone_addr) 
                    >> 1U) & (0U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel))))) {
        __Vdly__SD_Card_Controller__DOT__fifo_wb_addr 
            = (0x7fU & ((IData)(1U) + (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__fifo_wb_addr)));
    }
    if (vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter) {
        if (vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__restart_counter) {
            __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_clk_counter 
                = vlSelf->__PVT__SD_Card_Controller__DOT__r_sdspi_clk;
            __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter 
                = (0U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_sdspi_clk));
        }
    } else {
        __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_clk_counter 
            = (0xffU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_clk_counter) 
                        - (IData)(1U)));
        __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter 
            = (1U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_clk_counter));
    }
    if (vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_busy) {
        if ((0x2000000U & vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_setup)) {
            __Vdly__UART_Controller__DOT__tx__DOT__calc_parity 
                = (1U & (vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_setup 
                         >> 0x18U));
        } else if (vlSelf->__PVT__UART_Controller__DOT__tx__DOT__zero_baud_counter) {
            if ((8U & (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__state))) {
                if ((0xfU == (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__state))) {
                    __Vdly__UART_Controller__DOT__tx__DOT__calc_parity 
                        = (1U & (vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_setup 
                                 >> 0x18U));
                }
            } else {
                __Vdly__UART_Controller__DOT__tx__DOT__calc_parity 
                    = (1U & ((IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__calc_parity) 
                             ^ (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__lcl_data)));
            }
        } else if ((1U & (~ (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_busy)))) {
            __Vdly__UART_Controller__DOT__tx__DOT__calc_parity 
                = (1U & (vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_setup 
                         >> 0x18U));
        }
        if (vlSelf->__PVT__UART_Controller__DOT__tx__DOT__zero_baud_counter) {
            __Vdly__UART_Controller__DOT__tx__DOT__lcl_data 
                = (0x7fU & ((IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__lcl_data) 
                            >> 1U));
        }
    } else {
        __Vdly__UART_Controller__DOT__tx__DOT__calc_parity 
            = (1U & (vlSelf->__PVT__UART_Controller__DOT__uart_setup 
                     >> 0x18U));
        __Vdly__UART_Controller__DOT__tx__DOT__lcl_data 
            = ((IData)(vlSelf->UART_Controller__DOT____Vcellinp__txfifo__i_rd)
                ? (0xffU & ((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__osrc)
                             ? (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__last_write)
                             : (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__r_data)))
                : 0U);
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__o_int = 
        (1U & (((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy)) 
                & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__last_busy)) 
               | ((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_removed)) 
                  & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_present)))));
    if (vlSelf->__PVT__SD_Card_Controller__DOT__ll_advance) {
        __Vdly__SD_Card_Controller__DOT__ll_cmd_stb 
            = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy)
                ? ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_stb) 
                   | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy))
                : ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_stb) 
                   | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_stb)));
    }
    if (((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_idle) 
           & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy))) 
          & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy))) 
         & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_busy)))) {
        __Vdly__SD_Card_Controller__DOT__ll_cmd_stb = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy)) 
               | (~ (IData)(vlSymsp->TOP.rst_n))))) {
        __Vdly__SD_Card_Controller__DOT__ll_cmd_stb = 0U;
    }
    if (vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber2) {
        __Vdly__SD_Card_Controller__DOT__rx_busy = 0U;
    } else if (vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy) {
        if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__error_token) 
             | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__done))) {
            __Vdly__SD_Card_Controller__DOT__rx_busy = 0U;
        }
    } else {
        __Vdly__SD_Card_Controller__DOT__rx_busy = vlSelf->__PVT__SD_Card_Controller__DOT__rx_start;
    }
    if (((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_stb)) 
         & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__rdvalid) 
            >> 1U))) {
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__fill = 0x1fU;
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox 
            = (0xfe00000000ULL | (QData)((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_data)));
    } else if ((2U & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__rdvalid))) {
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__fill = 0x1fU;
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox 
            = (((QData)((IData)((0xffU & (IData)((vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox 
                                                  >> 0x20U))))) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_data)));
    } else if (vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_stb) {
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__fill 
            = (0xcU | (0x10U & (IData)(__Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__fill)));
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox 
            = (((QData)((IData)((0xffU & (IData)((vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox 
                                                  >> 0x20U))))) 
                << 0x20U) | (QData)((IData)((0xffU 
                                             | ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_data) 
                                                << 0x10U)))));
    } else if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_stb) 
                & (~ (IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber10)))) {
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__fill 
            = (0x1fU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__fill) 
                        << 1U));
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox 
            = (0xffULL | ((QData)((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox)) 
                          << 8U));
    }
    if (vlSelf->__PVT__SD_Card_Controller__DOT__tx_busy) {
        if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_from_fifo) 
             & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__lastaddr)))) {
            __Vdly__SD_Card_Controller__DOT__spi_read_addr 
                = ((0x80U & (IData)(__Vdly__SD_Card_Controller__DOT__spi_read_addr)) 
                   | (0x7fU & ((IData)(1U) + (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_addr))));
            if ((0U != (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__r_lgblksz_m3))) {
                __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__lastaddr 
                    = (1U & ((1U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__r_lgblksz_m3))
                              ? ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_addr) 
                                 >> 1U) : ((2U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__r_lgblksz_m3))
                                            ? (3U == 
                                               (3U 
                                                & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_addr) 
                                                   >> 1U)))
                                            : ((3U 
                                                == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__r_lgblksz_m3))
                                                ? (7U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_addr) 
                                                       >> 1U)))
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__r_lgblksz_m3))
                                                    ? 
                                                   (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_addr) 
                                                        >> 1U)))
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__r_lgblksz_m3))
                                                     ? 
                                                    (0x1fU 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_addr) 
                                                         >> 1U)))
                                                     : 
                                                    (0x3fU 
                                                     == 
                                                     (0x3fU 
                                                      & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_addr) 
                                                         >> 1U)))))))));
            }
        }
        if (vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_active) {
            vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_data 
                = vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data;
        }
    } else {
        __Vdly__SD_Card_Controller__DOT__spi_read_addr 
            = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_fifo_id) 
               << 7U);
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__lastaddr 
            = (4U > (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_lgblklen));
        vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_data = 0U;
    }
    if (vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber2) {
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__fill = 0U;
        __Vdly__SD_Card_Controller__DOT__tx_busy = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_busy)))) {
            __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__fill 
                = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_start)
                    ? 0x10U : 0U);
        }
        if (vlSelf->__PVT__SD_Card_Controller__DOT__tx_busy) {
            if ((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__all_idle) 
                  & (IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber13)) 
                 & (0xffU == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat)))) {
                __Vdly__SD_Card_Controller__DOT__tx_busy = 0U;
            }
        } else {
            __Vdly__SD_Card_Controller__DOT__tx_busy 
                = vlSelf->__PVT__SD_Card_Controller__DOT__tx_start;
        }
    }
    if (((IData)(vlSelf->__PVT__UART_Controller__DOT__rx_uart_reset) 
         | (IData)(vlSelf->__PVT__UART_Controller__DOT__rx_break))) {
        __Vdly__UART_Controller__DOT__r_rx_ferr = 0U;
        __Vdly__UART_Controller__DOT__r_rx_perr = 0U;
    } else if ((((IData)(vlSelf->__PVT__wishbone_uart_stb) 
                 & (2U == (IData)(vlSelf->__PVT__wishbone_uart_addr))) 
                & (IData)(vlSelf->__PVT__wishbone_uart_we))) {
        if ((2U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel))) {
            __Vdly__UART_Controller__DOT__r_rx_ferr 
                = ((IData)(vlSelf->__PVT__UART_Controller__DOT__r_rx_ferr) 
                   & (~ (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                         >> 0xaU)));
            __Vdly__UART_Controller__DOT__r_rx_perr 
                = ((IData)(vlSelf->__PVT__UART_Controller__DOT__r_rx_perr) 
                   & (~ (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                         >> 9U)));
        }
    } else if (vlSelf->__PVT__UART_Controller__DOT__rx_stb) {
        __Vdly__UART_Controller__DOT__r_rx_ferr = ((IData)(vlSelf->__PVT__UART_Controller__DOT__r_rx_ferr) 
                                                   | (IData)(vlSelf->__PVT__UART_Controller__DOT__rx_ferr));
        __Vdly__UART_Controller__DOT__r_rx_perr = ((IData)(vlSelf->__PVT__UART_Controller__DOT__r_rx_perr) 
                                                   | (IData)(vlSelf->__PVT__UART_Controller__DOT__rx_perr));
    }
    if ((1U & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__r_startup_hold) 
               | (~ (IData)(vlSymsp->TOP.rst_n))))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_idle = 0U;
    } else if (vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter) {
        vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_idle 
            = ((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__byte_accepted)) 
               & (((0xbU == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state)) 
                   | (1U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state))) 
                  | (0U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state))));
    }
    if (vlSelf->__PVT__UART_Controller__DOT__r_tx_break) {
        __Vdly__UART_Controller__DOT__tx__DOT__baud_counter 
            = (0xffffff0U & (vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_setup 
                             << 4U));
        __Vdly__UART_Controller__DOT__tx__DOT__zero_baud_counter = 0U;
        __Vdly__UART_Controller__DOT__tx__DOT__state = 0xeU;
        __Vdly__UART_Controller__DOT__tx__DOT__r_busy = 1U;
    } else {
        __Vdly__UART_Controller__DOT__tx__DOT__zero_baud_counter 
            = (1U == vlSelf->__PVT__UART_Controller__DOT__tx__DOT__baud_counter);
        if (vlSelf->__PVT__UART_Controller__DOT__tx__DOT__zero_baud_counter) {
            if ((0xeU == (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__state))) {
                __Vdly__UART_Controller__DOT__tx__DOT__baud_counter = 0U;
                __Vdly__UART_Controller__DOT__tx__DOT__zero_baud_counter = 1U;
                __Vdly__UART_Controller__DOT__tx__DOT__state = 0xfU;
                __Vdly__UART_Controller__DOT__tx__DOT__r_busy 
                    = (1U & (~ (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__ck_cts)));
            } else if ((0xfU == (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__state))) {
                __Vdly__UART_Controller__DOT__tx__DOT__baud_counter = 0U;
                __Vdly__UART_Controller__DOT__tx__DOT__zero_baud_counter = 1U;
                if ((1U & ((~ (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__will_underflow)) 
                           & (~ (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_busy))))) {
                    __Vdly__UART_Controller__DOT__tx__DOT__baud_counter 
                        = (0xfffffffU & ((0xffffffU 
                                          & vlSelf->__PVT__UART_Controller__DOT__uart_setup) 
                                         - (IData)(1U)));
                    __Vdly__UART_Controller__DOT__tx__DOT__zero_baud_counter = 0U;
                    __Vdly__UART_Controller__DOT__tx__DOT__r_busy = 1U;
                    __Vdly__UART_Controller__DOT__tx__DOT__state 
                        = ((0x20000000U & vlSelf->__PVT__UART_Controller__DOT__uart_setup)
                            ? ((0x10000000U & vlSelf->__PVT__UART_Controller__DOT__uart_setup)
                                ? 3U : 2U) : ((0x10000000U 
                                               & vlSelf->__PVT__UART_Controller__DOT__uart_setup)
                                               ? 1U
                                               : 0U));
                } else {
                    __Vdly__UART_Controller__DOT__tx__DOT__r_busy 
                        = (1U & (~ (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__ck_cts)));
                }
            } else {
                __Vdly__UART_Controller__DOT__tx__DOT__baud_counter 
                    = (0xfffffffU & ((IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__last_state)
                                      ? ((0xffffffU 
                                          & vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_setup) 
                                         - (IData)(2U))
                                      : ((0xffffffU 
                                          & vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_setup) 
                                         - (IData)(1U))));
                __Vdly__UART_Controller__DOT__tx__DOT__state 
                    = (0xfU & ((8U & (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__state))
                                ? ((8U == (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__state))
                                    ? 9U : ((9U == (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__state))
                                             ? ((0x8000000U 
                                                 & vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_setup)
                                                 ? 0xaU
                                                 : 0xfU)
                                             : 0xfU))
                                : ((7U == (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__state))
                                    ? ((0x4000000U 
                                        & vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_setup)
                                        ? 8U : 9U) : 
                                   ((IData)(1U) + (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__state)))));
                __Vdly__UART_Controller__DOT__tx__DOT__r_busy = 1U;
            }
        } else {
            __Vdly__UART_Controller__DOT__tx__DOT__baud_counter 
                = (0xfffffffU & (vlSelf->__PVT__UART_Controller__DOT__tx__DOT__baud_counter 
                                 - (IData)(1U)));
            __Vdly__UART_Controller__DOT__tx__DOT__r_busy = 1U;
        }
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_gearbox 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_active)
            ? (vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_gearbox 
               << 2U) : vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_data);
    if (vlSelf->__PVT__SD_Card_Controller__DOT__w_reset) {
        __Vdly__SD_Card_Controller__DOT__cmd_busy = 0U;
    } else if (((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy)) 
                & (IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spicmdi____pinNumber3))) {
        __Vdly__SD_Card_Controller__DOT__cmd_busy = 1U;
    } else if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rxvalid) 
                & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_check_busy)))) {
        __Vdly__SD_Card_Controller__DOT__cmd_busy = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_busy)))) {
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox 
            = (0xfe00000000ULL | (0xffffffffULL & __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox));
        vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__r_lgblksz_m3 
            = (7U & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_lgblklen) 
                     - (IData)(3U)));
    }
    __Vdly__wishbone_uart_cyc = ((~ (IData)(vlSelf->__PVT__rst)) 
                                 & ((IData)(vlSelf->__PVT__uart_strobe) 
                                    | ((~ (IData)(vlSelf->__PVT__wishbone_uart_ack)) 
                                       & (IData)(vlSelf->__PVT__wishbone_uart_cyc))));
    __Vdly__wishbone_cyc = ((IData)(vlSymsp->TOP.rst_n) 
                            & ((IData)(vlSelf->__Vcellinp__Core2Wishbone_0__S_DEVICE_strobe_i) 
                               | ((~ (IData)(vlSelf->__PVT__wishbone_ack)) 
                                  & (IData)(vlSelf->__PVT__wishbone_cyc))));
    __Vdly__wishbone_we = ((IData)(vlSymsp->TOP.rst_n) 
                           & (((IData)(vlSelf->__Vcellinp__Core2Wishbone_0__S_DEVICE_strobe_i) 
                               & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_rw_o)) 
                              | ((~ (IData)(vlSelf->__PVT__wishbone_ack)) 
                                 & (IData)(vlSelf->__PVT__wishbone_we))));
    if (vlSelf->__PVT__SD_Card_Controller__DOT__r_watchdog_err) {
        __Vdly__SD_Card_Controller__DOT__r_cmd_err = 1U;
    } else if (vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy) {
        if (vlSelf->__PVT__SD_Card_Controller__DOT__cmd_valid) {
            __Vdly__SD_Card_Controller__DOT__r_cmd_err 
                = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_err) 
                   | (0ULL != (0x7e00000000ULL & vlSelf->__PVT__SD_Card_Controller__DOT__cmd_response)));
        }
        if (vlSelf->__PVT__SD_Card_Controller__DOT__rx_valid) {
            __Vdly__SD_Card_Controller__DOT__r_cmd_err 
                = (1U & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_err) 
                         | ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__rx_response) 
                            >> 3U)));
        }
    } else if (vlSelf->__PVT__SD_Card_Controller__DOT__wb_cmd_stb) {
        __Vdly__SD_Card_Controller__DOT__r_cmd_err 
            = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_err) 
               & (~ (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                     >> 0xfU)));
    }
    if (vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_b) {
        __Vdlyvval__SD_Card_Controller__DOT__fifo_b__v0 
            = vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_b_data;
        __Vdlyvset__SD_Card_Controller__DOT__fifo_b__v0 = 1U;
        __Vdlyvdim0__SD_Card_Controller__DOT__fifo_b__v0 
            = vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_b_addr;
    }
    if (vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_a) {
        __Vdlyvval__SD_Card_Controller__DOT__fifo_a__v0 
            = vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_a_data;
        __Vdlyvset__SD_Card_Controller__DOT__fifo_a__v0 = 1U;
        __Vdlyvdim0__SD_Card_Controller__DOT__fifo_a__v0 
            = vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_a_addr;
    }
    vlSelf->__PVT__wishbone_uart_data2core = ((2U & (IData)(vlSelf->__PVT__UART_Controller__DOT__r_wb_addr))
                                               ? ((1U 
                                                   & (IData)(vlSelf->__PVT__UART_Controller__DOT__r_wb_addr))
                                                   ? 
                                                  ((0x6000U 
                                                    & ((IData)(vlSelf->__PVT__UART_Controller__DOT__txf_status) 
                                                       << 0xdU)) 
                                                   | ((((IData)(vlSelf->__PVT__UART_Controller__DOT__txf_wb_write) 
                                                        & (~ (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_write))) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->uart_tx) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->__PVT__UART_Controller__DOT__r_tx_break) 
                                                                << 9U) 
                                                               | ((0x100U 
                                                                   & (((IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_busy) 
                                                                       | (IData)(vlSelf->__PVT__UART_Controller__DOT__txf_status)) 
                                                                      << 8U)) 
                                                                  | ((1U 
                                                                      & ((IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_busy) 
                                                                         | (IData)(vlSelf->__PVT__UART_Controller__DOT__txf_status)))
                                                                      ? (IData)(vlSelf->__PVT__UART_Controller__DOT__txf_wb_data)
                                                                      : 0U)))))))
                                                   : 
                                                  ((((IData)(vlSelf->__PVT__UART_Controller__DOT__rx_stb) 
                                                     & (~ (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_write))) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->__PVT__UART_Controller__DOT__rx_break) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__UART_Controller__DOT__rx_ferr) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__UART_Controller__DOT__r_rx_perr) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__will_underflow) 
                                                                << 8U) 
                                                               | ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxf_wb_read)
                                                                   ? 
                                                                  (0xffU 
                                                                   & ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__osrc)
                                                                       ? (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__last_write)
                                                                       : (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__r_data)))
                                                                   : 0U)))))))
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__UART_Controller__DOT__r_wb_addr))
                                                   ? 
                                                  (((IData)(vlSelf->__PVT__UART_Controller__DOT__txf_status) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->__PVT__UART_Controller__DOT__rxf_status))
                                                   : vlSelf->__PVT__UART_Controller__DOT__uart_setup));
    __Vdly__wishbone_uart_we = ((~ (IData)(vlSelf->__PVT__rst)) 
                                & (((IData)(vlSelf->__PVT__uart_strobe) 
                                    & (((IData)(vlSelf->is_dev_req) 
                                        & (~ (IData)(vlSelf->dev_sel)))
                                        ? (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_rw_o)
                                        : 0U)) | ((~ (IData)(vlSelf->__PVT__wishbone_uart_ack)) 
                                                  & (IData)(vlSelf->__PVT__wishbone_uart_we))));
    vlSelf->__PVT__wishbone_data2core = ((2U & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__pipe_addr))
                                          ? ((1U & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__pipe_addr))
                                              ? vlSelf->__PVT__SD_Card_Controller__DOT__fifo_b_word
                                              : vlSelf->__PVT__SD_Card_Controller__DOT__fifo_a_word)
                                          : ((1U & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__pipe_addr))
                                              ? vlSelf->__PVT__SD_Card_Controller__DOT__r_data_reg
                                              : (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_watchdog_err) 
                                                  << 0x15U) 
                                                 | ((0x100000U 
                                                     & ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                                        << 0x14U)) 
                                                    | ((0x80000U 
                                                        & ((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_present)) 
                                                           << 0x13U)) 
                                                       | (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_removed) 
                                                           << 0x12U) 
                                                          | (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_err) 
                                                              << 0xfU) 
                                                             | (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy) 
                                                                 << 0xeU) 
                                                                | (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_fifo_id) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_use_fifo) 
                                                                       << 0xbU) 
                                                                      | (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__write_to_card) 
                                                                          << 0xaU) 
                                                                         | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_last_r_one))))))))))));
    vlSelf->__PVT__SD_Card_Controller__DOT__o_debug 
        = (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__dbg_trigger) 
            << 0x1fU) | (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_stb) 
                          << 0x1eU) | ((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_stb) 
                                         & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_idle)) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_stb) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->spi_ss) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->spi_sck) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->spi_mosi) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSymsp->TOP.spi_miso) 
                                                     << 0x18U) 
                                                    | ((0x100000U 
                                                        & ((~ (IData)(vlSymsp->TOP.rst_n)) 
                                                           << 0x14U)) 
                                                       | (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy) 
                                                           << 0x10U) 
                                                          | (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_dat) 
                                                              << 8U) 
                                                             | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat))))))))))));
    if (vlSymsp->TOP.rst_n) {
        if (vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter) {
            if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__restart_counter) 
                 & (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__r_startup_hold) 
                     | ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy) 
                        & (~ (IData)(vlSelf->spi_ss)))) 
                    | (~ (IData)(vlSelf->spi_sck))))) {
                __Vdly__spi_sck = (1U & ((2U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state)) 
                                         | (~ (IData)(vlSelf->spi_sck))));
            }
            if (vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__byte_accepted) {
                vlSelf->spi_mosi = 1U;
                if (vlSelf->spi_ss) {
                    __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_byte 
                        = vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_dat;
                } else {
                    __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_byte 
                        = (1U | (0xfeU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_dat) 
                                          << 1U)));
                    vlSelf->spi_mosi = (1U & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_dat) 
                                              >> 7U));
                }
            } else if (vlSelf->spi_sck) {
                __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_byte 
                    = (1U | (0xfeU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_byte) 
                                      << 1U)));
                if (((3U <= (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state)) 
                     & (0xbU > (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state)))) {
                    vlSelf->spi_mosi = (1U & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_byte) 
                                              >> 7U));
                } else if ((1U & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy)))) {
                    vlSelf->spi_mosi = 1U;
                }
            }
        }
        if (vlSelf->__Vcellinp__Core2Wishbone_0__S_DEVICE_strobe_i) {
            __Vdly__wishbone_addr = ((0xcU == (0xfU 
                                               & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o))
                                      ? 3U : ((8U == 
                                               (0xfU 
                                                & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o))
                                               ? 2U
                                               : ((4U 
                                                   == 
                                                   (0xfU 
                                                    & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o))
                                                   ? 1U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0xfU 
                                                     & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o))
                                                    ? 0U
                                                    : (IData)(vlSelf->__PVT__wishbone_addr)))));
        }
        if (vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_present) {
            if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__wb_cmd_stb) 
                 & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                    >> 0x12U))) {
                vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_removed = 0U;
            }
        } else {
            vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_removed = 1U;
        }
    } else {
        __Vdly__spi_sck = 1U;
        __Vdly__wishbone_addr = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_removed = 1U;
        __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_byte = 0xffU;
        vlSelf->spi_mosi = 1U;
    }
    if (vlSelf->__PVT__SD_Card_Controller__DOT__ll_advance) {
        vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_dat 
            = (0xffU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy)
                         ? ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy)
                             ? (IData)((vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__shift_data 
                                        >> 0x20U)) : 0xffU)
                         : ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_stb)
                             ? (IData)((vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox 
                                        >> 0x20U)) : 0xffU)));
    }
    if ((1U & ((IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber2) 
               | (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_busy))))) {
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__rdvalid = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__data_sent = 0U;
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__crc_stb = 0U;
        __Vdly__SD_Card_Controller__DOT__spi_read_from_fifo = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__all_mem_read = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__all_idle = 0U;
    } else {
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__rdvalid 
            = ((2U & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__rdvalid) 
                      << 1U)) | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_from_fifo));
        if (((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_flag) 
               & (~ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__fill) 
                     >> 3U))) & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_stb)) 
             & (~ (IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber10)))) {
            vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__data_sent = 1U;
        }
        if ((1U & ((~ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__fill) 
                       >> 3U)) | ((~ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__fill) 
                                      >> 2U)) & ((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_stb)) 
                                                 | (~ (IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber10))))))) {
            __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__crc_stb = 0U;
            __Vdly__SD_Card_Controller__DOT__spi_read_from_fifo = 0U;
            if ((((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_from_fifo)) 
                  & (0U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__rdvalid))) 
                 & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_flag)))) {
                if (vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__all_mem_read) {
                    __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__crc_stb 
                        = (1U & ((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_flag)) 
                                 & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_stb))));
                } else {
                    __Vdly__SD_Card_Controller__DOT__spi_read_from_fifo = 1U;
                }
            }
        } else {
            __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__crc_stb = 0U;
            __Vdly__SD_Card_Controller__DOT__spi_read_from_fifo = 0U;
        }
        if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_from_fifo) 
             & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__lastaddr))) {
            vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__all_mem_read = 1U;
        }
        if ((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__received_token) 
              & (IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber13)) 
             & (0xffU == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat)))) {
            vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__all_idle = 1U;
        }
    }
    if (vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy) {
        if ((0U != vlSelf->__PVT__SD_Card_Controller__DOT__r_watchdog)) {
            __Vdly__SD_Card_Controller__DOT__r_watchdog 
                = (0x3ffffffU & (vlSelf->__PVT__SD_Card_Controller__DOT__r_watchdog 
                                 - (IData)(1U)));
        }
        if (vlSelf->__PVT__SD_Card_Controller__DOT__cmd_valid) {
            __Vdly__SD_Card_Controller__DOT__r_data_reg 
                = (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_response);
        } else if (vlSelf->__PVT__SD_Card_Controller__DOT__tx_valid) {
            __Vdly__SD_Card_Controller__DOT__r_data_reg 
                = vlSelf->__PVT__SD_Card_Controller__DOT__tx_response;
        } else if (vlSelf->__PVT__SD_Card_Controller__DOT__rx_valid) {
            __Vdly__SD_Card_Controller__DOT__r_data_reg 
                = vlSelf->__PVT__SD_Card_Controller__DOT__rx_response;
        }
    } else {
        __Vdly__SD_Card_Controller__DOT__r_watchdog = 0x3fffffU;
        if ((((IData)(vlSelf->__PVT__wishbone_stb) 
              & ((IData)(vlSelf->__PVT__wishbone_we) 
                 & (0U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel)))) 
             & (1U == (IData)(vlSelf->__PVT__wishbone_addr)))) {
            __Vdly__SD_Card_Controller__DOT__r_data_reg 
                = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o;
        } else if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__wb_cmd_stb) 
                    & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                       >> 7U))) {
            __Vdly__SD_Card_Controller__DOT__r_data_reg 
                = (0x9000000U | (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_lgblklen) 
                                  << 0x10U) | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_sdspi_clk)));
        }
    }
    if ((1U & ((IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber2) 
               | (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_busy))))) {
        __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__received_token = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__tx_valid = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__tx_stb = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_flag = 0U;
    } else {
        if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__token) 
             & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__received_token)))) {
            __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__received_token = 1U;
            vlSelf->__PVT__SD_Card_Controller__DOT__tx_valid = 1U;
        } else {
            vlSelf->__PVT__SD_Card_Controller__DOT__tx_valid = 0U;
        }
        if ((2U & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__rdvalid))) {
            vlSelf->__PVT__SD_Card_Controller__DOT__tx_stb = 1U;
        } else if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_flag) 
                    & (~ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__fill) 
                          >> 4U)))) {
            vlSelf->__PVT__SD_Card_Controller__DOT__tx_stb = 0U;
        }
        if (vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_stb) {
            vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_flag = 1U;
        }
    }
    if ((1U & ((IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber2) 
               | (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy))))) {
        __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__crc_byte = 0U;
    } else if ((((IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7) 
                 & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__lastaddr)) 
                & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__lastdata))) {
        __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__crc_byte 
            = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_byte)));
    }
    if (vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy) {
        if ((1U & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__lastdata)))) {
            __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__lastdata 
                = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__lastaddr) 
                   & (7U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__fill)));
        }
    } else {
        __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__lastdata = 0U;
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__lastdata 
        = __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__lastdata;
    if (vlSelf->UART_Controller__DOT____Vcellinp__txfifo__i_reset) {
        __Vdly__UART_Controller__DOT__txfifo__DOT__r_fill = 0xfU;
    } else if ((1U == (((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_write) 
                        << 1U) | (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_read)))) {
        __Vdly__UART_Controller__DOT__txfifo__DOT__r_fill 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__r_fill)));
    } else if ((2U == (((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_write) 
                        << 1U) | (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_read)))) {
        __Vdly__UART_Controller__DOT__txfifo__DOT__r_fill 
            = (0xfU & ((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__r_fill) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__r_fill 
        = __Vdly__UART_Controller__DOT__txfifo__DOT__r_fill;
    if (vlSelf->UART_Controller__DOT____Vcellinp__rxfifo__i_reset) {
        __Vdly__UART_Controller__DOT__rxfifo__DOT__r_fill = 0U;
    } else if ((1U == (((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_write) 
                        << 1U) | (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_read)))) {
        __Vdly__UART_Controller__DOT__rxfifo__DOT__r_fill 
            = (0xfU & ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__r_fill) 
                       - (IData)(1U)));
    } else if ((2U == (((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_write) 
                        << 1U) | (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_read)))) {
        __Vdly__UART_Controller__DOT__rxfifo__DOT__r_fill 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__r_fill)));
    }
    vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__r_fill 
        = __Vdly__UART_Controller__DOT__rxfifo__DOT__r_fill;
    if (vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy) {
        if (vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_busy) {
            __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__crc_bit_counter 
                = (0x1fU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_bit_counter) 
                            - (IData)(1U)));
            __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__crc_busy 
                = (1U < (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_bit_counter));
        }
    } else {
        __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__crc_bit_counter = 0x14U;
        __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__crc_busy 
            = vlSelf->SD_Card_Controller__DOT____Vcellinp__spicmdi____pinNumber3;
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_bit_counter 
        = __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__crc_bit_counter;
    if ((1U & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__w_reset) 
               | (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy))))) {
        __Vdly__SD_Card_Controller__DOT__cmd_sent = 0U;
        __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__almost_sent = 0U;
    } else if (((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_sent)) 
                & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_advance))) {
        __Vdly__SD_Card_Controller__DOT__cmd_sent = vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__almost_sent;
        __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__almost_sent 
            = (1U & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_valid_sreg));
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__almost_sent 
        = __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__almost_sent;
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__fill 
        = __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__fill;
    if (vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy) {
        if (vlSelf->__PVT__SD_Card_Controller__DOT__ll_advance) {
            __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__crc_valid_sreg 
                = (0x1fU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_valid_sreg) 
                            >> 1U));
        }
    } else {
        __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__crc_valid_sreg = 0x10U;
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_valid_sreg 
        = __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__crc_valid_sreg;
    if (vlSelf->UART_Controller__DOT____Vcellinp__txfifo__i_reset) {
        __Vdly__UART_Controller__DOT__txfifo__DOT__will_overflow = 0U;
    } else if (vlSelf->UART_Controller__DOT____Vcellinp__txfifo__i_rd) {
        __Vdly__UART_Controller__DOT__txfifo__DOT__will_overflow 
            = ((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__will_overflow) 
               & (IData)(vlSelf->__PVT__UART_Controller__DOT__txf_wb_write));
    } else if (vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_write) {
        __Vdly__UART_Controller__DOT__txfifo__DOT__will_overflow 
            = ((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__will_overflow) 
               | ((0xfU & ((IData)(2U) + (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__wr_addr))) 
                  == (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__rd_addr)));
    } else if (((0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__wr_addr))) 
                == (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__rd_addr))) {
        __Vdly__UART_Controller__DOT__txfifo__DOT__will_overflow = 1U;
    }
    vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__will_overflow 
        = __Vdly__UART_Controller__DOT__txfifo__DOT__will_overflow;
    if (vlSelf->UART_Controller__DOT____Vcellinp__rxfifo__i_reset) {
        __Vdly__UART_Controller__DOT__rxfifo__DOT__will_underflow = 1U;
        __Vdly__UART_Controller__DOT__rxfifo__DOT__will_overflow = 0U;
    } else {
        if (vlSelf->__PVT__UART_Controller__DOT__rx_stb) {
            __Vdly__UART_Controller__DOT__rxfifo__DOT__will_underflow = 0U;
        } else if (vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_read) {
            __Vdly__UART_Controller__DOT__rxfifo__DOT__will_underflow 
                = ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__will_underflow) 
                   | ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__r_next) 
                      == (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__wr_addr)));
        }
        if (vlSelf->__PVT__UART_Controller__DOT__rxf_wb_read) {
            __Vdly__UART_Controller__DOT__rxfifo__DOT__will_overflow 
                = ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__will_overflow) 
                   & (IData)(vlSelf->__PVT__UART_Controller__DOT__rx_stb));
        } else if (vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_write) {
            __Vdly__UART_Controller__DOT__rxfifo__DOT__will_overflow 
                = ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__will_overflow) 
                   | ((0xfU & ((IData)(2U) + (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__wr_addr))) 
                      == (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__rd_addr)));
        } else if (((0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__wr_addr))) 
                    == (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__rd_addr))) {
            __Vdly__UART_Controller__DOT__rxfifo__DOT__will_overflow = 1U;
        }
    }
    vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__will_overflow 
        = __Vdly__UART_Controller__DOT__rxfifo__DOT__will_overflow;
    vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_clk_counter 
        = __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_clk_counter;
    vlSelf->__PVT__UART_Controller__DOT__r_rx_ferr 
        = __Vdly__UART_Controller__DOT__r_rx_ferr;
    vlSelf->__PVT__UART_Controller__DOT__tx__DOT__baud_counter 
        = __Vdly__UART_Controller__DOT__tx__DOT__baud_counter;
    vlSelf->__PVT__UART_Controller__DOT__r_rx_perr 
        = __Vdly__UART_Controller__DOT__r_rx_perr;
    if (vlSelf->UART_Controller__DOT____Vcellinp__rx____pinNumber2) {
        __Vdly__UART_Controller__DOT__rx__DOT__calc_parity = 0U;
        __Vdly__UART_Controller__DOT__rx_ferr = 0U;
    } else {
        if ((0xfU == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))) {
            __Vdly__UART_Controller__DOT__rx__DOT__calc_parity = 0U;
        } else if (vlSelf->__PVT__UART_Controller__DOT__rx__DOT__zero_baud_counter) {
            __Vdly__UART_Controller__DOT__rx__DOT__calc_parity 
                = ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__calc_parity) 
                   ^ (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart));
        }
        if (((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__zero_baud_counter) 
             & ((9U == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state)) 
                | (0xaU == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))))) {
            __Vdly__UART_Controller__DOT__rx_ferr = 
                (1U & ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx_ferr) 
                       | (~ (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart))));
        } else if (((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__zero_baud_counter) 
                    | (0xdU <= (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state)))) {
            __Vdly__UART_Controller__DOT__rx_ferr = 0U;
        }
    }
    vlSelf->__PVT__UART_Controller__DOT__rx_ferr = __Vdly__UART_Controller__DOT__rx_ferr;
    vlSelf->__PVT__wishbone_we = __Vdly__wishbone_we;
    vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_fill = 0U;
    vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_fill 
        = ((0x3f0U & (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_fill)) 
           | (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__r_fill));
    vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_fill = 0U;
    vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_fill 
        = ((0x3f0U & (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_fill)) 
           | (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__r_fill));
    if (vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy) {
        if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_to_fifo) 
             & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__lastaddr)))) {
            __Vdly__SD_Card_Controller__DOT__spi_write_addr 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_addr)));
            __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__lastaddr 
                = (1U & ((0U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__r_lgblksz_m3)) 
                         | ((1U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__r_lgblksz_m3))
                             ? ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_addr) 
                                >> 1U) : ((2U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__r_lgblksz_m3))
                                           ? (3U == 
                                              (3U & 
                                               ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_addr) 
                                                >> 1U)))
                                           : ((3U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__r_lgblksz_m3))
                                               ? (7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_addr) 
                                                      >> 1U)))
                                               : ((4U 
                                                   == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__r_lgblksz_m3))
                                                   ? 
                                                  (0xfU 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_addr) 
                                                       >> 1U)))
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__r_lgblksz_m3))
                                                    ? 
                                                   (0x1fU 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_addr) 
                                                        >> 1U)))
                                                    : 
                                                   (0x3fU 
                                                    == 
                                                    (0x3fU 
                                                     & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_addr) 
                                                        >> 1U))))))))));
        }
    } else {
        __Vdly__SD_Card_Controller__DOT__spi_write_addr 
            = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_fifo_id) 
               << 7U);
        __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__lastaddr 
            = (4U > (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_lgblklen));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__r_lgblksz_m3 
            = (7U & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_lgblklen) 
                     - (IData)(3U)));
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__last_busy 
        = vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy;
    if (vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_read) {
        vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__r_data 
            = vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__fifo
            [vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__r_next];
    }
    if (((IData)(vlSelf->__PVT__UART_Controller__DOT__txf_wb_write) 
         & ((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__will_underflow) 
            | ((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_read) 
               & ((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__r_next) 
                  == (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__wr_addr)))))) {
        vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__last_write 
            = vlSelf->__PVT__UART_Controller__DOT__txf_wb_data;
    }
    if (vlSelf->UART_Controller__DOT____Vcellinp__txfifo__i_reset) {
        __Vdly__UART_Controller__DOT__txfifo__DOT__will_underflow = 1U;
        vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__osrc = 0U;
        __Vdly__UART_Controller__DOT__txfifo__DOT__rd_addr = 0U;
        vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__r_next = 1U;
        vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__wr_addr = 0U;
    } else {
        if (vlSelf->__PVT__UART_Controller__DOT__txf_wb_write) {
            __Vdly__UART_Controller__DOT__txfifo__DOT__will_underflow = 0U;
        } else if (vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_read) {
            __Vdly__UART_Controller__DOT__txfifo__DOT__will_underflow 
                = ((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__will_underflow) 
                   | ((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__r_next) 
                      == (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__wr_addr)));
        }
        if (((IData)(vlSelf->__PVT__UART_Controller__DOT__txf_wb_write) 
             & ((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__will_underflow) 
                | ((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_read) 
                   & ((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__r_next) 
                      == (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__wr_addr)))))) {
            vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__osrc = 1U;
        } else if (vlSelf->UART_Controller__DOT____Vcellinp__txfifo__i_rd) {
            vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__osrc = 0U;
        }
        if (vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_read) {
            __Vdly__UART_Controller__DOT__txfifo__DOT__rd_addr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__rd_addr)));
            vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__r_next 
                = (0xfU & ((IData)(2U) + (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__rd_addr)));
        }
        if (vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_write) {
            vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__wr_addr 
                = vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_waddr_plus_one;
        }
    }
    vlSelf->__PVT__UART_Controller__DOT__tx__DOT__last_state 
        = ((0x8000000U & vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_setup)
            ? (0xaU == (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__state))
            : (9U == (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__state)));
    vlSelf->__PVT__UART_Controller__DOT__tx__DOT__ck_cts 
        = (1U & ((~ (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__qq_cts_n)) 
                 | (vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_setup 
                    >> 0x1eU)));
    vlSelf->__PVT__UART_Controller__DOT__rx_uart_reset 
        = (((IData)(vlSelf->__PVT__rst) | (((IData)(vlSelf->__PVT__wishbone_uart_stb) 
                                            & (0U == (IData)(vlSelf->__PVT__wishbone_uart_addr))) 
                                           & (IData)(vlSelf->__PVT__wishbone_uart_we))) 
           | (((((IData)(vlSelf->__PVT__wishbone_uart_stb) 
                 & (2U == (IData)(vlSelf->__PVT__wishbone_uart_addr))) 
                & (IData)(vlSelf->__PVT__wishbone_uart_we)) 
               & ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel) 
                  >> 1U)) & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                             >> 0xcU)));
    if (vlSelf->UART_Controller__DOT____Vcellinp__rx____pinNumber2) {
        __Vdly__UART_Controller__DOT__rx__DOT__baud_counter = 0x18U;
        __Vdly__UART_Controller__DOT__rx__DOT__chg_counter = 0U;
        __Vdly__UART_Controller__DOT__rx__DOT__state = 0xeU;
    } else {
        __Vdly__UART_Controller__DOT__rx__DOT__baud_counter 
            = (0xffffffU & ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__zero_baud_counter)
                             ? (vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                                - (IData)(1U)) : ((0xeU 
                                                   == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))
                                                   ? 
                                                  (vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                                                   - (IData)(1U))
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))
                                                    ? 
                                                   (vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                                                    - (IData)(1U))
                                                    : 
                                                   ((0xfU 
                                                     == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))
                                                     ? 
                                                    (vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                                                     - (IData)(1U))
                                                     : 
                                                    (vlSelf->__PVT__UART_Controller__DOT__rx__DOT__baud_counter 
                                                     - (IData)(1U)))))));
        if (((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__qq_uart) 
             != (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart))) {
            __Vdly__UART_Controller__DOT__rx__DOT__chg_counter = 0U;
        } else if ((vlSelf->__PVT__UART_Controller__DOT__rx__DOT__chg_counter 
                    < (0xffffff0U & (vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                                     << 4U)))) {
            __Vdly__UART_Controller__DOT__rx__DOT__chg_counter 
                = (0xfffffffU & ((IData)(1U) + vlSelf->__PVT__UART_Controller__DOT__rx__DOT__chg_counter));
        }
        if ((0xeU == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))) {
            __Vdly__UART_Controller__DOT__rx__DOT__state 
                = ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__line_synch)
                    ? 0xfU : 0xeU);
        } else if (vlSelf->__PVT__UART_Controller__DOT__rx_break) {
            __Vdly__UART_Controller__DOT__rx__DOT__state = 0xdU;
        } else if ((0xdU == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))) {
            __Vdly__UART_Controller__DOT__rx__DOT__state 
                = ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart)
                    ? 0xfU : 0xdU);
        } else if ((0xfU == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))) {
            __Vdly__UART_Controller__DOT__rx__DOT__state 
                = (((~ (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart)) 
                    & (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__half_baud_time))
                    ? ((0x20000000U & vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup)
                        ? ((0x10000000U & vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup)
                            ? 3U : 2U) : ((0x10000000U 
                                           & vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup)
                                           ? 1U : 0U))
                    : 0xfU);
        } else if (vlSelf->__PVT__UART_Controller__DOT__rx__DOT__zero_baud_counter) {
            __Vdly__UART_Controller__DOT__rx__DOT__state 
                = (0xfU & ((7U > (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))
                            ? ((IData)(1U) + (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))
                            : ((7U == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))
                                ? ((0x4000000U & vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup)
                                    ? 8U : 9U) : ((8U 
                                                   == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))
                                                   ? 9U
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart)
                                                     ? 
                                                    ((0x8000000U 
                                                      & vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup)
                                                      ? 0xaU
                                                      : 0xfU)
                                                     : 0xeU)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart)
                                                     ? 0xfU
                                                     : 0xeU))))));
        }
    }
    vlSelf->__PVT__UART_Controller__DOT__rx__DOT__line_synch 
        = ((~ (IData)(vlSelf->UART_Controller__DOT____Vcellinp__rx____pinNumber2)) 
           & ((vlSelf->__PVT__UART_Controller__DOT__rx__DOT__chg_counter 
               >= (0xffffff0U & (vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                                 << 4U))) & (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart)));
    vlSelf->__PVT__UART_Controller__DOT__rx__DOT__half_baud_time 
        = ((~ (IData)(vlSelf->UART_Controller__DOT____Vcellinp__rx____pinNumber2)) 
           & ((~ (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart)) 
              & (vlSelf->__PVT__UART_Controller__DOT__rx__DOT__chg_counter 
                 >= (0xffffffU & ((0x7fffffU & (vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                                                >> 1U)) 
                                  - (IData)(1U))))));
    vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_data 
        = ((0x80U & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_addr))
            ? vlSelf->__PVT__SD_Card_Controller__DOT__fifo_b_word
            : vlSelf->__PVT__SD_Card_Controller__DOT__fifo_a_word);
    vlSelf->__PVT__wishbone_ack = ((IData)(vlSelf->__PVT__wishbone_cyc) 
                                   & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__dly_stb));
    if ((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_use_fifo) 
          & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy)) 
         & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_addr) 
            >> 7U))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_b_addr 
            = (0x7fU & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_addr));
        vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_b 
            = vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_to_fifo;
        vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_b_data 
            = vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_data;
    } else {
        vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_b_addr 
            = (0x7fU & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__fifo_wb_addr));
        vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_b 
            = (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__write_stb) 
                & (3U == (IData)(vlSelf->__PVT__wishbone_addr))) 
               & (0xfU == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel)));
        vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_b_data 
            = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o;
    }
    if ((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_use_fifo) 
          & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy)) 
         & (~ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_addr) 
               >> 7U)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_a_addr 
            = (0x7fU & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_addr));
        vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_a 
            = vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_to_fifo;
        vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_a_data 
            = vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_data;
    } else {
        vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_a_addr 
            = (0x7fU & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__fifo_wb_addr));
        vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_a 
            = (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__write_stb) 
                & (2U == (IData)(vlSelf->__PVT__wishbone_addr))) 
               & (0xfU == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel)));
        vlSelf->__PVT__SD_Card_Controller__DOT__write_fifo_a_data 
            = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o;
    }
    vlSelf->__PVT__UART_Controller__DOT__r_wb_addr 
        = vlSelf->__PVT__wishbone_uart_addr;
    if (vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_read) {
        vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__r_data 
            = vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__fifo
            [vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__r_next];
    }
    if ((1U & ((IData)(vlSelf->__PVT__UART_Controller__DOT__r_tx_break) 
               | ((~ (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__will_underflow)) 
                  & (~ (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_busy)))))) {
        vlSelf->uart_tx = 0U;
    } else if (vlSelf->__PVT__UART_Controller__DOT__tx__DOT__zero_baud_counter) {
        vlSelf->uart_tx = (1U & ((0U == (8U & (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__state)))
                                  ? (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__lcl_data)
                                  : ((8U != (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__state)) 
                                     | (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__calc_parity))));
    }
    if (vlSelf->__PVT__rst) {
        __Vdly__wishbone_uart_addr = 0U;
        vlSelf->__PVT__UART_Controller__DOT__r_tx_break = 0U;
    } else {
        if (vlSelf->__PVT__uart_strobe) {
            __Vdly__wishbone_uart_addr = ((0xcU == 
                                           (0xfU & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o))
                                           ? 3U : (
                                                   (8U 
                                                    == 
                                                    (0xfU 
                                                     & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o))
                                                    ? 2U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0xfU 
                                                      & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o))
                                                     ? 1U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0xfU 
                                                       & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o))
                                                      ? 0U
                                                      : (IData)(vlSelf->__PVT__wishbone_uart_addr)))));
        }
        if (((((IData)(vlSelf->__PVT__wishbone_uart_stb) 
               & (3U == (IData)(vlSelf->__PVT__wishbone_uart_addr))) 
              & (IData)(vlSelf->__PVT__wishbone_uart_we)) 
             & ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel) 
                >> 1U))) {
            vlSelf->__PVT__UART_Controller__DOT__r_tx_break 
                = (1U & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                         >> 9U));
        }
    }
    vlSelf->__PVT__UART_Controller__DOT__rx_break = 
        ((~ (IData)(vlSelf->UART_Controller__DOT____Vcellinp__rx____pinNumber2)) 
         & ((vlSelf->__PVT__UART_Controller__DOT__rx__DOT__chg_counter 
             >= (0xffffff0U & (vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                               << 4U))) & (~ (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart))));
    if (((IData)(vlSelf->__PVT__UART_Controller__DOT__rx_stb) 
         & ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__will_underflow) 
            | ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_read) 
               & ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__r_next) 
                  == (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__wr_addr)))))) {
        vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__last_write 
            = vlSelf->__PVT__UART_Controller__DOT__rx_uart_data;
    }
    if (vlSelf->UART_Controller__DOT____Vcellinp__rxfifo__i_reset) {
        vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__osrc = 0U;
        __Vdly__UART_Controller__DOT__rxfifo__DOT__rd_addr = 0U;
        vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__r_next = 1U;
        vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__wr_addr = 0U;
    } else {
        if (((IData)(vlSelf->__PVT__UART_Controller__DOT__rx_stb) 
             & ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__will_underflow) 
                | ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_read) 
                   & ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__r_next) 
                      == (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__wr_addr)))))) {
            vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__osrc = 1U;
        } else if (vlSelf->__PVT__UART_Controller__DOT__rxf_wb_read) {
            vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__osrc = 0U;
        }
        if (vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_read) {
            __Vdly__UART_Controller__DOT__rxfifo__DOT__rd_addr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__rd_addr)));
            vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__r_next 
                = (0xfU & ((IData)(2U) + (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__rd_addr)));
        }
        if (vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_write) {
            vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__wr_addr 
                = vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_waddr_plus_one;
        }
    }
    if (vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__token) {
        vlSelf->__PVT__SD_Card_Controller__DOT__tx_response 
            = vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat;
    }
    if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__wb_cmd_stb) 
         & (0xc0U == (0xc0U & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o)))) {
        if ((0U != (0xffU & vlSelf->__PVT__SD_Card_Controller__DOT__r_data_reg))) {
            vlSelf->__PVT__SD_Card_Controller__DOT__r_sdspi_clk 
                = (0xffU & vlSelf->__PVT__SD_Card_Controller__DOT__r_data_reg);
        }
        if (((3U <= (0xfU & (vlSelf->__PVT__SD_Card_Controller__DOT__r_data_reg 
                             >> 0x10U))) & (9U >= (0xfU 
                                                   & (vlSelf->__PVT__SD_Card_Controller__DOT__r_data_reg 
                                                      >> 0x10U))))) {
            vlSelf->__PVT__SD_Card_Controller__DOT__r_lgblklen 
                = (0xfU & (vlSelf->__PVT__SD_Card_Controller__DOT__r_data_reg 
                           >> 0x10U));
        }
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_present)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__r_sdspi_clk = 0x7cU;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (~ 
                                                  ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__raw_card_present) 
                                                   >> 2U))))) {
        __Vdly__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__card_detect_counter = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_present = 0U;
    } else {
        if ((1U & (~ (IData)((0x3ffU == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__card_detect_counter)))))) {
            __Vdly__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__card_detect_counter 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__card_detect_counter)));
        }
        if ((0x3ffU == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__card_detect_counter))) {
            vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_present = 1U;
        }
    }
    vlSelf->__PVT__wishbone_uart_ack = (((~ (IData)(vlSelf->__PVT__rst)) 
                                         & (IData)(vlSelf->__PVT__UART_Controller__DOT__r_wb_ack)) 
                                        & (IData)(vlSelf->__PVT__wishbone_uart_cyc));
    vlSelf->__PVT__SD_Card_Controller__DOT__pipe_addr 
        = vlSelf->__PVT__wishbone_addr;
    if (((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy)) 
         & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__wb_cmd_stb))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__r_fifo_id 
            = (1U & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                     >> 0xcU));
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__dbg_trigger 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_valid) 
           & (0U != (0x3fU & (IData)((vlSelf->__PVT__SD_Card_Controller__DOT__cmd_response 
                                      >> 0x21U)))));
    if (vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy) {
        if (vlSelf->__PVT__SD_Card_Controller__DOT__cmd_valid) {
            vlSelf->__PVT__SD_Card_Controller__DOT__r_last_r_one 
                = (0xffU & (IData)((vlSelf->__PVT__SD_Card_Controller__DOT__cmd_response 
                                    >> 0x20U)));
        }
    }
    if ((1U & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__w_reset) 
               | (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy))))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__cmd_valid = 0U;
    } else if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rxvalid) 
                & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_check_busy)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__cmd_valid = 1U;
    }
    if (vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy) {
        if (vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_busy) {
            vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_shift_reg 
                = (0xffffffffffULL & (vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_shift_reg 
                                      << 2U));
            vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_byte 
                = (1U | ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte) 
                         << 1U));
        }
        if (vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_stb) {
            __Vdly__SD_Card_Controller__DOT__cmd_response 
                = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_r1_byte)
                    ? ((0xff00000000ULL & __Vdly__SD_Card_Controller__DOT__cmd_response) 
                       | (IData)((IData)((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_response) 
                                           << 8U) | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat)))))
                    : ((0xffffffffULL & __Vdly__SD_Card_Controller__DOT__cmd_response) 
                       | ((QData)((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat)) 
                          << 0x20U)));
        }
        if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_sent) 
             & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_stb))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_r1_byte)))) {
                __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__rx_r1_byte 
                    = (1U & (~ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat) 
                                >> 7U)));
            }
            if ((1U & (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_r1_byte) 
                        | (~ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat) 
                              >> 7U))) & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rxvalid))))) {
                __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__rx_counter 
                    = (7U & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_counter) 
                             - (IData)(1U)));
                vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rxvalid 
                    = (1U >= (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_counter));
            }
            if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_r1_byte) 
                 & (0U != (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat)))) {
                vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_check_busy = 0U;
            }
        }
    } else {
        vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_shift_reg 
            = (0x4000000000ULL | (((QData)((IData)(
                                                   (0x3fU 
                                                    & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_data_reg))));
        __Vdly__SD_Card_Controller__DOT__cmd_response = 0xffffffffffULL;
        vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_byte = 1U;
        __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__rx_r1_byte = 0U;
        __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__rx_counter 
            = ((0x200U & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o)
                ? 5U : 1U);
        vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_check_busy 
            = (1U == (3U & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                            >> 8U)));
        vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rxvalid = 0U;
    }
    vlSelf->__PVT__UART_Controller__DOT__txf_status 
        = (0x4000U | (((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_fill) 
                       << 2U) | ((2U & ((IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__r_fill) 
                                        >> 2U)) | (1U 
                                                   & (~ (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__will_overflow))))));
    vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__lastaddr 
        = __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__lastaddr;
    vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_from_fifo 
        = __Vdly__SD_Card_Controller__DOT__spi_read_from_fifo;
    vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_busy 
        = __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__crc_busy;
    if (__Vdlyvset__UART_Controller__DOT__txfifo__DOT__fifo__v0) {
        vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__fifo[__Vdlyvdim0__UART_Controller__DOT__txfifo__DOT__fifo__v0] 
            = __Vdlyvval__UART_Controller__DOT__txfifo__DOT__fifo__v0;
    }
    if (vlSelf->UART_Controller__DOT____Vcellinp__rx____pinNumber2) {
        vlSelf->__PVT__UART_Controller__DOT__rx_perr = 0U;
    } else if (((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__zero_baud_counter) 
                & (8U == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state)))) {
        vlSelf->__PVT__UART_Controller__DOT__rx_perr 
            = (1U & ((0x2000000U & vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup)
                      ? ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart) 
                         ^ (vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                            >> 0x18U)) : ((0x1000000U 
                                           & vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup)
                                           ? ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__calc_parity) 
                                              != (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart))
                                           : ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__calc_parity) 
                                              == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart)))));
    } else if ((0xdU <= (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))) {
        vlSelf->__PVT__UART_Controller__DOT__rx_perr = 0U;
    }
    vlSelf->__PVT__UART_Controller__DOT__rx__DOT__calc_parity 
        = __Vdly__UART_Controller__DOT__rx__DOT__calc_parity;
    vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_active 
        = __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__crc_active;
    vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_addr 
        = __Vdly__SD_Card_Controller__DOT__spi_write_addr;
    if (__Vdlyvset__UART_Controller__DOT__rxfifo__DOT__fifo__v0) {
        vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[__Vdlyvdim0__UART_Controller__DOT__rxfifo__DOT__fifo__v0] 
            = __Vdlyvval__UART_Controller__DOT__rxfifo__DOT__fifo__v0;
    }
    vlSelf->__PVT__UART_Controller__DOT__tx__DOT__calc_parity 
        = __Vdly__UART_Controller__DOT__tx__DOT__calc_parity;
    vlSelf->__PVT__UART_Controller__DOT__tx__DOT__lcl_data 
        = __Vdly__UART_Controller__DOT__tx__DOT__lcl_data;
    vlSelf->__PVT__UART_Controller__DOT__tx__DOT__zero_baud_counter 
        = __Vdly__UART_Controller__DOT__tx__DOT__zero_baud_counter;
    vlSelf->__PVT__UART_Controller__DOT__tx__DOT__state 
        = __Vdly__UART_Controller__DOT__tx__DOT__state;
    vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__will_underflow 
        = __Vdly__UART_Controller__DOT__txfifo__DOT__will_underflow;
    vlSelf->__PVT__UART_Controller__DOT__rx__DOT__chg_counter 
        = __Vdly__UART_Controller__DOT__rx__DOT__chg_counter;
    vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__will_underflow 
        = __Vdly__UART_Controller__DOT__rxfifo__DOT__will_underflow;
    vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__received_token 
        = __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__received_token;
    vlSelf->__PVT__wishbone_uart_cyc = __Vdly__wishbone_uart_cyc;
    vlSelf->__PVT__wishbone_addr = __Vdly__wishbone_addr;
    vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_byte 
        = __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_byte;
    vlSelf->__PVT__SD_Card_Controller__DOT__cmd_response 
        = __Vdly__SD_Card_Controller__DOT__cmd_response;
    vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte 
        = (0x7eU & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_byte));
    if ((IData)((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_byte) 
                  >> 7U) ^ (vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_shift_reg 
                            >> 0x27U)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte 
            = (9U ^ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte));
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte 
        = (0x7fU & ((1U & (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte) 
                            >> 6U) ^ (IData)((vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_shift_reg 
                                              >> 0x26U))))
                     ? (9U ^ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte) 
                              << 1U)) : ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte) 
                                         << 1U)));
    vlSelf->__PVT__UART_Controller__DOT__txf_wb_data 
        = (0xffU & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o);
    vlSelf->__PVT__UART_Controller__DOT__txf_wb_write 
        = ((((IData)(vlSelf->__PVT__wishbone_uart_stb) 
             & (3U == (IData)(vlSelf->__PVT__wishbone_uart_addr))) 
            & (IData)(vlSelf->__PVT__wishbone_uart_we)) 
           & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel));
    vlSelf->__PVT__UART_Controller__DOT__tx__DOT__qq_cts_n 
        = vlSelf->__PVT__UART_Controller__DOT__tx__DOT__q_cts_n;
    if ((1U & (~ (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_busy)))) {
        vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_setup 
            = vlSelf->__PVT__UART_Controller__DOT__uart_setup;
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data 
        = (0xffffU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_data) 
                      << 1U));
    if ((IData)((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_data) 
                  >> 0xfU) ^ (vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_gearbox 
                              >> 0x1fU)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data 
            = (0x1021U ^ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data));
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data 
        = (0xffffU & ((1U & (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data) 
                              >> 0xfU) ^ (vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_gearbox 
                                          >> 0x1eU)))
                       ? (0x1021U ^ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data) 
                                     << 1U)) : ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data) 
                                                << 1U)));
    vlSelf->__PVT__SD_Card_Controller__DOT__fifo_b_word 
        = vlSelf->__PVT__SD_Card_Controller__DOT__fifo_b
        [(0x7fU & ((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_use_fifo) 
                     & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_busy)) 
                    & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_addr) 
                       >> 7U)) ? (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_addr)
                    : (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__fifo_wb_addr)))];
    vlSelf->__PVT__SD_Card_Controller__DOT__fifo_a_word 
        = vlSelf->__PVT__SD_Card_Controller__DOT__fifo_a
        [(0x7fU & ((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_use_fifo) 
                     & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_busy)) 
                    & (~ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_addr) 
                          >> 7U))) ? (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_addr)
                    : (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__fifo_wb_addr)))];
    if (vlSymsp->TOP.rst_n) {
        if (vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter) {
            if (vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy) {
                if ((0U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state))) {
                    if (vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__byte_accepted) {
                        vlSelf->spi_ss = 0U;
                        __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_state = 3U;
                    }
                } else if ((2U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state))) {
                    __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_state = 3U;
                } else if (vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__byte_accepted) {
                    __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_state = 4U;
                } else if (((IData)(vlSelf->spi_sck) 
                            & (3U <= (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state)))) {
                    __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_state 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state)));
                    if ((0xbU <= (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state))) {
                        __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_state = 1U;
                    }
                }
            } else {
                __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_state = 0U;
                vlSelf->spi_ss = 1U;
            }
            if (vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__r_startup_hold) {
                vlSelf->spi_ss = 1U;
            }
        }
        if (vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy) {
            if ((((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_idle) 
                    & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_stb))) 
                   & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy))) 
                  & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy))) 
                 & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_busy)))) {
                __Vdly__SD_Card_Controller__DOT__r_cmd_busy = 0U;
                vlSelf->__PVT__SD_Card_Controller__DOT__r_use_fifo = 0U;
            }
            if ((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_err) 
                  | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__tx_busy)) 
                 | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy))) {
                vlSelf->__PVT__SD_Card_Controller__DOT__tx_start = 0U;
                vlSelf->__PVT__SD_Card_Controller__DOT__rx_start = 0U;
            }
            if (vlSelf->__PVT__SD_Card_Controller__DOT__r_watchdog_err) {
                vlSelf->__PVT__SD_Card_Controller__DOT__r_use_fifo = 0U;
                vlSelf->__PVT__SD_Card_Controller__DOT__tx_start = 0U;
                vlSelf->__PVT__SD_Card_Controller__DOT__rx_start = 0U;
            }
        } else {
            if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__wb_cmd_stb) 
                 & (0x40U == (0xc0U & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o)))) {
                __Vdly__SD_Card_Controller__DOT__r_cmd_busy = 1U;
                vlSelf->__PVT__SD_Card_Controller__DOT__tx_start = 0U;
                vlSelf->__PVT__SD_Card_Controller__DOT__rx_start = 0U;
                vlSelf->__PVT__SD_Card_Controller__DOT__write_to_card 
                    = (1U & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                             >> 0xaU));
                vlSelf->__PVT__SD_Card_Controller__DOT__r_use_fifo 
                    = (1U & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                             >> 0xbU));
                if ((0x800U & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o)) {
                    vlSelf->__PVT__SD_Card_Controller__DOT__tx_start 
                        = (1U & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                                 >> 0xaU));
                    vlSelf->__PVT__SD_Card_Controller__DOT__rx_start 
                        = (1U & (~ (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                                    >> 0xaU)));
                }
            } else {
                __Vdly__SD_Card_Controller__DOT__r_cmd_busy = 0U;
                vlSelf->__PVT__SD_Card_Controller__DOT__tx_start = 0U;
                vlSelf->__PVT__SD_Card_Controller__DOT__rx_start = 0U;
            }
            if (vlSelf->__PVT__SD_Card_Controller__DOT__r_watchdog_err) {
                vlSelf->__PVT__SD_Card_Controller__DOT__r_use_fifo = 0U;
                vlSelf->__PVT__SD_Card_Controller__DOT__tx_start = 0U;
                vlSelf->__PVT__SD_Card_Controller__DOT__rx_start = 0U;
            }
        }
    } else {
        __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_state = 0U;
        vlSelf->spi_ss = 1U;
        __Vdly__SD_Card_Controller__DOT__r_cmd_busy = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__r_use_fifo = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__tx_start = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__rx_start = 0U;
    }
    if (vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy) {
        if ((0U == vlSelf->__PVT__SD_Card_Controller__DOT__r_watchdog)) {
            vlSelf->__PVT__SD_Card_Controller__DOT__r_watchdog_err = 1U;
        }
    } else {
        vlSelf->__PVT__SD_Card_Controller__DOT__r_watchdog_err = 0U;
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__dly_stb 
        = ((IData)(vlSelf->__PVT__wishbone_cyc) & (IData)(vlSelf->__PVT__wishbone_stb));
    if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__received_token) 
         & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__all_mem_written)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_data 
            = ((vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__gearbox 
                << 8U) | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat));
    }
    if ((1U & ((IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber2) 
               | (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy))))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__rx_valid = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__rx_response = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_err = 0U;
    } else {
        if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__error_token) 
             | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__done))) {
            vlSelf->__PVT__SD_Card_Controller__DOT__rx_valid = 1U;
        }
        if (vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__error_token) {
            vlSelf->__PVT__SD_Card_Controller__DOT__rx_response 
                = vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat;
        } else if (vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__done) {
            vlSelf->__PVT__SD_Card_Controller__DOT__rx_response 
                = (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_err) 
                    | ((0xffU & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_data)) 
                       != (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat)))
                    ? 0x10U : 0U);
        }
        if (((IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7) 
             & (1U == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_byte)))) {
            vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_err 
                = ((0xffU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_data) 
                             >> 8U)) != (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat));
        }
    }
    if (vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy) {
        if (vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_active) {
            vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_data 
                = vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__next_crc_data;
        }
    } else {
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_data = 0U;
    }
    if ((1U & ((IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber2) 
               | (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy))))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__all_mem_written = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__received_token = 0U;
    } else {
        if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_to_fifo) 
             & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__lastaddr))) {
            vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__all_mem_written = 1U;
        }
        if (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__start_token) 
             | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__error_token))) {
            vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__received_token = 1U;
        }
    }
    vlSelf->__PVT__UART_Controller__DOT__rx__DOT__ck_uart 
        = ((~ (IData)(vlSelf->UART_Controller__DOT____Vcellinp__rx____pinNumber2)) 
           & (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__qq_uart));
    vlSelf->__PVT__UART_Controller__DOT__rxf_wb_read 
        = (((IData)(vlSelf->__PVT__wishbone_uart_stb) 
            & (2U == (IData)(vlSelf->__PVT__wishbone_uart_addr))) 
           & (~ (IData)(vlSelf->__PVT__wishbone_uart_we)));
    vlSelf->__PVT__UART_Controller__DOT__rxf_status 
        = (0x4000U | (((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_fill) 
                       << 2U) | ((2U & ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__r_fill) 
                                        >> 2U)) | (1U 
                                                   & (~ (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__will_underflow))))));
    vlSelf->__PVT__UART_Controller__DOT__rx_stb = (
                                                   ((~ (IData)(vlSelf->UART_Controller__DOT____Vcellinp__rx____pinNumber2)) 
                                                    & (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__pre_wr)) 
                                                   & ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__zero_baud_counter) 
                                                      | (0xfU 
                                                         == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))));
    if (vlSelf->UART_Controller__DOT____Vcellinp__rx____pinNumber2) {
        vlSelf->__PVT__UART_Controller__DOT__rx_uart_data = 0U;
        vlSelf->__PVT__UART_Controller__DOT__rx__DOT__pre_wr = 0U;
        vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup = 0x19U;
    } else {
        if (((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__zero_baud_counter) 
             & (9U == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state)))) {
            vlSelf->__PVT__UART_Controller__DOT__rx_uart_data 
                = ((0x20000000U & vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup)
                    ? ((0x10000000U & vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup)
                        ? (0x1fU & ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__data_reg) 
                                    >> 3U)) : (0x3fU 
                                               & ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__data_reg) 
                                                  >> 2U)))
                    : ((0x10000000U & vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup)
                        ? (0x7fU & ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__data_reg) 
                                    >> 1U)) : (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__data_reg)));
            vlSelf->__PVT__UART_Controller__DOT__rx__DOT__pre_wr = 1U;
        } else if (((IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__zero_baud_counter) 
                    | (0xfU == (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state)))) {
            vlSelf->__PVT__UART_Controller__DOT__rx__DOT__pre_wr = 0U;
        }
        if ((0xeU <= (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state))) {
            vlSelf->__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                = (0x3fffffffU & vlSelf->__PVT__UART_Controller__DOT__uart_setup);
        }
    }
    vlSelf->__PVT__UART_Controller__DOT__r_wb_ack = 
        ((~ (IData)(vlSelf->__PVT__rst)) & (IData)(vlSelf->__PVT__wishbone_uart_stb));
    vlSelf->__PVT__SD_Card_Controller__DOT__r_data_reg 
        = __Vdly__SD_Card_Controller__DOT__r_data_reg;
    vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__rd_addr 
        = __Vdly__UART_Controller__DOT__txfifo__DOT__rd_addr;
    vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_busy 
        = __Vdly__UART_Controller__DOT__tx__DOT__r_busy;
    if (__Vdlyvset__SD_Card_Controller__DOT__fifo_b__v0) {
        vlSelf->__PVT__SD_Card_Controller__DOT__fifo_b[__Vdlyvdim0__SD_Card_Controller__DOT__fifo_b__v0] 
            = __Vdlyvval__SD_Card_Controller__DOT__fifo_b__v0;
    }
    if (__Vdlyvset__SD_Card_Controller__DOT__fifo_a__v0) {
        vlSelf->__PVT__SD_Card_Controller__DOT__fifo_a[__Vdlyvdim0__SD_Card_Controller__DOT__fifo_a__v0] 
            = __Vdlyvval__SD_Card_Controller__DOT__fifo_a__v0;
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spi_read_addr 
        = __Vdly__SD_Card_Controller__DOT__spi_read_addr;
    vlSelf->__PVT__SD_Card_Controller__DOT__fifo_wb_addr 
        = __Vdly__SD_Card_Controller__DOT__fifo_wb_addr;
    vlSelf->__PVT__wishbone_cyc = __Vdly__wishbone_cyc;
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__gearbox 
        = __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__gearbox;
    vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__rd_addr 
        = __Vdly__UART_Controller__DOT__rxfifo__DOT__rd_addr;
    vlSelf->UART_Controller__DOT____Vcellinp__rxfifo__i_reset 
        = (((IData)(vlSelf->__PVT__rst) | (IData)(vlSelf->__PVT__UART_Controller__DOT__rx_break)) 
           | (IData)(vlSelf->__PVT__UART_Controller__DOT__rx_uart_reset));
    vlSelf->__PVT__UART_Controller__DOT__rx__DOT__data_reg 
        = __Vdly__UART_Controller__DOT__rx__DOT__data_reg;
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_byte 
        = __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__crc_byte;
    vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__card_detect_counter 
        = __Vdly__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__card_detect_counter;
    vlSelf->__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__raw_card_present 
        = __Vdly__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__raw_card_present;
    vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox 
        = __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox;
    vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__shift_data 
        = __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__shift_data;
    vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_waddr_plus_one 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__wr_addr)));
    vlSelf->__PVT__UART_Controller__DOT__tx__DOT__q_cts_n = 0U;
    vlSelf->UART_Controller__DOT____Vcellinp__txfifo__i_rd 
        = (1U & ((~ (IData)(vlSelf->__PVT__UART_Controller__DOT__tx__DOT__r_busy)) 
                 & (~ (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__will_underflow))));
    vlSelf->__PVT__wishbone_stb = ((IData)(vlSymsp->TOP.rst_n) 
                                   & ((IData)(vlSelf->__PVT__Core2Wishbone_0__DOT__wb_stb) 
                                      & (~ (IData)(vlSelf->__PVT__Core2Wishbone_0__DOT__wb_stb_r))));
    vlSelf->UART_Controller__DOT____Vcellinp__txfifo__i_reset 
        = ((IData)(vlSelf->__PVT__UART_Controller__DOT__r_tx_break) 
           | (IData)(vlSelf->__PVT__UART_Controller__DOT__tx_uart_reset));
    vlSelf->__PVT__UART_Controller__DOT__rx__DOT__qq_uart 
        = ((~ (IData)(vlSelf->UART_Controller__DOT____Vcellinp__rx____pinNumber2)) 
           & (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__q_uart));
    vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_read 
        = ((IData)(vlSelf->__PVT__UART_Controller__DOT__rxf_wb_read) 
           & (~ (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__will_underflow)));
    vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_waddr_plus_one 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__wr_addr)));
    vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__w_write 
        = ((IData)(vlSelf->__PVT__UART_Controller__DOT__rx_stb) 
           & ((~ (IData)(vlSelf->__PVT__UART_Controller__DOT__rxfifo__DOT__will_overflow)) 
              | (IData)(vlSelf->__PVT__UART_Controller__DOT__rxf_wb_read)));
    vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_read 
        = ((IData)(vlSelf->UART_Controller__DOT____Vcellinp__txfifo__i_rd) 
           & (~ (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__will_underflow)));
    vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__w_write 
        = ((IData)(vlSelf->__PVT__UART_Controller__DOT__txf_wb_write) 
           & ((~ (IData)(vlSelf->__PVT__UART_Controller__DOT__txfifo__DOT__will_overflow)) 
              | (IData)(vlSelf->UART_Controller__DOT____Vcellinp__txfifo__i_rd)));
    vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_err 
        = __Vdly__SD_Card_Controller__DOT__r_cmd_err;
    vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_stb 
        = __Vdly__SD_Card_Controller__DOT__ll_cmd_stb;
    vlSelf->__PVT__SD_Card_Controller__DOT__spi_write_to_fifo 
        = __Vdly__SD_Card_Controller__DOT__spi_write_to_fifo;
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__lastaddr 
        = __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__lastaddr;
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_active 
        = __Vdly__SD_Card_Controller__DOT__spirxdatai__DOT__crc_active;
    vlSelf->__PVT__SD_Card_Controller__DOT__rx_busy 
        = __Vdly__SD_Card_Controller__DOT__rx_busy;
    vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__fill 
        = __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__fill;
    vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__rdvalid 
        = __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__rdvalid;
    vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_r1_byte 
        = __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__rx_r1_byte;
    vlSelf->__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_counter 
        = __Vdly__SD_Card_Controller__DOT__spicmdi__DOT__rx_counter;
    vlSelf->__PVT__SD_Card_Controller__DOT__cmd_sent 
        = __Vdly__SD_Card_Controller__DOT__cmd_sent;
    vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy 
        = __Vdly__SD_Card_Controller__DOT__cmd_busy;
    vlSelf->__PVT__Core2Wishbone_0__DOT__wb_stb_r = vlSelf->__PVT__Core2Wishbone_0__DOT__wb_stb;
    vlSelf->__PVT__UART_Controller__DOT__rx__DOT__q_uart 
        = ((~ (IData)(vlSelf->UART_Controller__DOT____Vcellinp__rx____pinNumber2)) 
           & (IData)(vlSymsp->TOP.uart_rx));
    vlSelf->__PVT__UART_Controller__DOT__rx__DOT__zero_baud_counter 
        = ((0xfU != (IData)(vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state)) 
           & (1U == vlSelf->__PVT__UART_Controller__DOT__rx__DOT__baud_counter));
    if ((((IData)(vlSelf->__PVT__wishbone_uart_stb) 
          & (0U == (IData)(vlSelf->__PVT__wishbone_uart_addr))) 
         & (IData)(vlSelf->__PVT__wishbone_uart_we))) {
        if ((1U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel))) {
            vlSelf->__PVT__UART_Controller__DOT__uart_setup 
                = ((0x7fffff00U & vlSelf->__PVT__UART_Controller__DOT__uart_setup) 
                   | (0xffU & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o));
        }
        if ((2U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel))) {
            vlSelf->__PVT__UART_Controller__DOT__uart_setup 
                = ((0x7fff00ffU & vlSelf->__PVT__UART_Controller__DOT__uart_setup) 
                   | (0xff00U & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o));
        }
        if ((4U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel))) {
            vlSelf->__PVT__UART_Controller__DOT__uart_setup 
                = ((0x7f00ffffU & vlSelf->__PVT__UART_Controller__DOT__uart_setup) 
                   | (0xff0000U & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o));
        }
        if ((8U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel))) {
            vlSelf->__PVT__UART_Controller__DOT__uart_setup 
                = ((0xffffffU & vlSelf->__PVT__UART_Controller__DOT__uart_setup) 
                   | (0x7f000000U & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o));
        }
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__first_crc_data 
        = (0xffffU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_data) 
                      << 1U));
    if ((IData)((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_data) 
                  >> 0xfU) ^ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_gearbox) 
                              >> 7U)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__first_crc_data 
            = (0x1021U ^ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__first_crc_data));
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__next_crc_data 
        = (0xffffU & ((1U & (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__first_crc_data) 
                              >> 0xfU) ^ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_gearbox) 
                                          >> 6U))) ? 
                      (0x1021U ^ ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__first_crc_data) 
                                  << 1U)) : ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__first_crc_data) 
                                             << 1U)));
    if ((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter) 
          & (IData)(vlSelf->spi_sck)) & (0xbU == (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat 
            = vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_ireg;
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_stb 
        = ((~ (((((~ (IData)(vlSymsp->TOP.rst_n)) | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__r_startup_hold)) 
                 | (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy))) 
                | (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter))) 
               | (~ (IData)(vlSelf->spi_sck)))) & (0xbU 
                                                   <= (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state)));
    vlSelf->__PVT__SD_Card_Controller__DOT__r_watchdog 
        = __Vdly__SD_Card_Controller__DOT__r_watchdog;
    vlSelf->UART_Controller__DOT____Vcellinp__rx____pinNumber2 
        = ((IData)(vlSelf->__PVT__rst) | (IData)(vlSelf->__PVT__UART_Controller__DOT__rx_uart_reset));
    vlSelf->__PVT__UART_Controller__DOT__rx__DOT__baud_counter 
        = __Vdly__UART_Controller__DOT__rx__DOT__baud_counter;
    vlSelf->__PVT__UART_Controller__DOT__rx__DOT__state 
        = __Vdly__UART_Controller__DOT__rx__DOT__state;
    vlSelf->__PVT__wishbone_uart_we = __Vdly__wishbone_uart_we;
    vlSelf->__PVT__wishbone_uart_addr = __Vdly__wishbone_uart_addr;
    vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_stb 
        = __Vdly__SD_Card_Controller__DOT__spitxdatai__DOT__crc_stb;
    vlSelf->__PVT__SD_Card_Controller__DOT__tx_busy 
        = __Vdly__SD_Card_Controller__DOT__tx_busy;
    vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_ireg 
        = __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_ireg;
    vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state 
        = __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_state;
    vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy 
        = __Vdly__SD_Card_Controller__DOT__r_cmd_busy;
    vlSelf->__PVT__wishbone_uart_stb = ((~ (IData)(vlSelf->__PVT__rst)) 
                                        & ((IData)(vlSelf->__PVT__Core2Wishboneuart_0__DOT__wb_stb) 
                                           & (~ (IData)(vlSelf->__PVT__Core2Wishboneuart_0__DOT__wb_stb_r))));
    vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber13 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_stb) 
           & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy)));
    vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_stb) 
           & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy)));
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__r_powerup_hold)))) {
        __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__startup_counter = 0x4bU;
        vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__r_startup_hold = 1U;
    } else if ((((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__startup_hold) 
                 & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter)) 
                & (~ (IData)(vlSelf->spi_sck)))) {
        if ((0U != (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__startup_counter))) {
            __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__startup_counter 
                = (0x7fU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__startup_counter) 
                            - (IData)(1U)));
        }
        vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__r_startup_hold 
            = (0U < (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__startup_counter));
    }
    if (vlSymsp->TOP.rst_n) {
        if (vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__powerup_hold) {
            if ((0U != (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__powerup_counter))) {
                __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__powerup_counter 
                    = (0x3ffU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__powerup_counter) 
                                 - (IData)(1U)));
            }
            vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__r_powerup_hold 
                = (0U < (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__powerup_counter));
        }
    } else {
        __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__powerup_counter = 0x3e8U;
        vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__r_powerup_hold = 1U;
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__token 
        = (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__data_sent) 
            & (IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber13)) 
           & (1U == (0x11U & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat))));
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__done 
        = ((IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7) 
           & (1U < (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_byte)));
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__error_token = 0U;
    if ((0U == (0xfU & ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat) 
                        >> 4U)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__error_token = 1U;
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__start_token = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_out_dat)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__start_token = 1U;
    }
    if ((1U & ((~ (IData)(vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7)) 
               | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__received_token)))) {
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__error_token = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__start_token = 0U;
    }
    vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__startup_counter 
        = __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__startup_counter;
    vlSelf->spi_sck = __Vdly__spi_sck;
    vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter 
        = __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter;
    vlSelf->__PVT__Core2Wishboneuart_0__DOT__wb_stb_r 
        = vlSelf->__PVT__Core2Wishboneuart_0__DOT__wb_stb;
    vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__startup_hold 
        = vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__r_startup_hold;
    vlSelf->__PVT__SD_Card_Controller__DOT__ll_idle 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_idle) 
           & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter));
    vlSelf->__PVT__SD_Card_Controller__DOT__ll_advance 
        = (1U & ((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_stb)) 
                 | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_idle)));
    vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__byte_accepted 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_cmd_stb) 
           & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_idle));
    vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__powerup_counter 
        = __Vdly__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__powerup_counter;
    vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber10 
        = (1U & ((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__ll_advance)) 
                 | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__cmd_busy)));
    if (vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__r_powerup_hold) {
        vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__powerup_hold = 1U;
        vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__restart_counter 
            = (1U & (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__r_powerup_hold)));
    } else {
        vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__powerup_hold = 0U;
        vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__restart_counter 
            = (1U & (((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__r_startup_hold) 
                      | (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy))) 
                     | ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__byte_accepted) 
                        | (~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_idle)))));
    }
}

VL_INLINE_OPT void Vaquila_testharness_aquila_testharness___sequent__TOP__aquila_testharness__1(Vaquila_testharness_aquila_testharness* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_testharness_aquila_testharness___sequent__TOP__aquila_testharness__1\n"); );
    // Body
    vlSelf->debug_pc = vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r;
    vlSelf->__PVT__SD_Card_Controller__DOT__write_stb 
        = (((IData)(vlSelf->__PVT__wishbone_stb) & (IData)(vlSelf->__PVT__wishbone_we)) 
           & (0U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel)));
    vlSelf->__PVT__SD_Card_Controller__DOT__wb_cmd_stb 
        = ((((~ (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_busy)) 
             & (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__write_stb)) 
            & (0xfU == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel))) 
           & (0U == (IData)(vlSelf->__PVT__wishbone_addr)));
}

VL_INLINE_OPT void Vaquila_testharness_aquila_testharness___sequent__TOP__aquila_testharness__2(Vaquila_testharness_aquila_testharness* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_testharness_aquila_testharness___sequent__TOP__aquila_testharness__2\n"); );
    // Body
    vlSelf->M_DEVICE_strobe = ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__data_req_o) 
                               & (2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__data_sel)));
    vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_addr 
        = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o;
    vlSelf->dev_sel = ((0U == (0xfU & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o 
                                       >> 0x18U))) ? 0U
                        : ((4U == (0xfU & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o 
                                           >> 0x18U)))
                            ? 1U : 0U));
    vlSelf->is_dev_req = (3U == (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o 
                                 >> 0x1eU));
    vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_core2dev_data 
        = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o;
    vlSelf->SD_Card_Controller__DOT____Vcellinp__spicmdi____pinNumber3 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__wb_cmd_stb) 
           & (0x40U == (0xc0U & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o)));
}

VL_INLINE_OPT void Vaquila_testharness_aquila_testharness___combo__TOP__aquila_testharness__0(Vaquila_testharness_aquila_testharness* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vaquila_testharness_aquila_testharness___combo__TOP__aquila_testharness__0\n"); );
    // Body
    vlSelf->__PVT__SD_Card_Controller__DOT__w_reset 
        = (1U & ((~ (IData)(vlSymsp->TOP.rst_n)) | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_watchdog_err)));
    vlSelf->__PVT__uart_strobe = (((IData)(vlSelf->is_dev_req) 
                                   & (~ (IData)(vlSelf->dev_sel)))
                                   ? (1U & (IData)(vlSelf->M_DEVICE_strobe))
                                   : 0U);
    vlSelf->__Vcellinp__Core2Wishbone_0__S_DEVICE_strobe_i 
        = ((IData)(vlSelf->M_DEVICE_strobe) & ((IData)(vlSelf->is_dev_req) 
                                               & (0x2000000U 
                                                  == 
                                                  (0xf000000U 
                                                   & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o))));
    if (((IData)(vlSelf->is_dev_req) & (IData)(vlSelf->dev_sel))) {
        vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_rw 
            = (1U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_rw_o));
        vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_strobe 
            = (1U & (IData)(vlSelf->M_DEVICE_strobe));
    } else {
        vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_rw = 0U;
        vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_strobe = 0U;
    }
    vlSelf->SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber2 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__w_reset) 
           | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_err));
    vlSelf->SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber2 
        = ((IData)(vlSelf->__PVT__SD_Card_Controller__DOT__w_reset) 
           | (IData)(vlSelf->__PVT__SD_Card_Controller__DOT__r_cmd_err));
    vlSelf->__PVT__Core2Wishboneuart_0__DOT__wb_stb 
        = ((IData)(vlSelf->__PVT__uart_strobe) & (~ (IData)(vlSelf->__PVT__wishbone_uart_ack)));
    vlSelf->__PVT__Core2Wishbone_0__DOT__wb_stb = ((IData)(vlSelf->__Vcellinp__Core2Wishbone_0__S_DEVICE_strobe_i) 
                                                   & (~ (IData)(vlSelf->__PVT__wishbone_ack)));
}
