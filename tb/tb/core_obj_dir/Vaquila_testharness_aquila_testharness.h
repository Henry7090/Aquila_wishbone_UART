// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaquila_testharness.h for the primary calling header

#ifndef VERILATED_VAQUILA_TESTHARNESS_AQUILA_TESTHARNESS_H_
#define VERILATED_VAQUILA_TESTHARNESS_AQUILA_TESTHARNESS_H_  // guard

#include "verilated.h"

class Vaquila_testharness__Syms;
class Vaquila_testharness_aquila_top;
class Vaquila_testharness_dp_ram;
class Vaquila_testharness_intc;


class Vaquila_testharness_aquila_testharness final : public VerilatedModule {
  public:
    // CELLS
    Vaquila_testharness_aquila_top* aquila_core;
    Vaquila_testharness_dp_ram* mock_ram;
    Vaquila_testharness_intc* intc_0;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_OUT8(spi_ss,0,0);
        VL_OUT8(spi_sck,0,0);
        VL_OUT8(spi_mosi,0,0);
        VL_IN8(spi_miso,0,0);
        VL_OUT8(uart_tx,0,0);
        VL_IN8(uart_rx,0,0);
        CData/*0:0*/ __PVT__RISCV_rst;
        CData/*0:0*/ M_DEVICE_strobe;
        CData/*0:0*/ is_dev_req;
        CData/*0:0*/ dev_sel;
        CData/*0:0*/ __PVT__uart_strobe;
        CData/*0:0*/ __PVT__wishbone_cyc;
        CData/*0:0*/ __PVT__wishbone_stb;
        CData/*0:0*/ __PVT__wishbone_we;
        CData/*1:0*/ __PVT__wishbone_addr;
        CData/*0:0*/ __PVT__wishbone_ack;
        CData/*0:0*/ __PVT__wishbone_uart_cyc;
        CData/*0:0*/ __PVT__wishbone_uart_stb;
        CData/*0:0*/ __PVT__wishbone_uart_we;
        CData/*1:0*/ __PVT__wishbone_uart_addr;
        CData/*0:0*/ __PVT__wishbone_uart_ack;
        CData/*0:0*/ __Vcellinp__Core2Wishbone_0__S_DEVICE_strobe_i;
        CData/*0:0*/ __PVT__rst;
        CData/*0:0*/ __PVT__uart_intr;
        CData/*0:0*/ __PVT__Core2Wishboneuart_0__DOT__wb_stb_r;
        CData/*0:0*/ __PVT__Core2Wishboneuart_0__DOT__wb_stb;
        CData/*0:0*/ __PVT__UART_Controller__DOT__o_rts_n;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rx_stb;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rx_break;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rx_perr;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rx_ferr;
        CData/*7:0*/ __PVT__UART_Controller__DOT__rx_uart_data;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rx_uart_reset;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rxf_wb_read;
        CData/*0:0*/ __PVT__UART_Controller__DOT__r_rx_perr;
        CData/*0:0*/ __PVT__UART_Controller__DOT__r_rx_ferr;
        CData/*0:0*/ __PVT__UART_Controller__DOT__txf_wb_write;
        CData/*0:0*/ __PVT__UART_Controller__DOT__tx_uart_reset;
        CData/*7:0*/ __PVT__UART_Controller__DOT__txf_wb_data;
        CData/*1:0*/ __PVT__UART_Controller__DOT__r_wb_addr;
        CData/*0:0*/ __PVT__UART_Controller__DOT__r_wb_ack;
        CData/*0:0*/ UART_Controller__DOT____Vcellinp__rx____pinNumber2;
        CData/*0:0*/ UART_Controller__DOT____Vcellinp__rxfifo__i_reset;
        CData/*0:0*/ UART_Controller__DOT____Vcellinp__txfifo__i_rd;
        CData/*0:0*/ UART_Controller__DOT____Vcellinp__txfifo__i_reset;
        CData/*0:0*/ __PVT__UART_Controller__DOT__r_tx_break;
        CData/*3:0*/ __PVT__UART_Controller__DOT__rx__DOT__state;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rx__DOT__zero_baud_counter;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rx__DOT__q_uart;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rx__DOT__qq_uart;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rx__DOT__ck_uart;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rx__DOT__line_synch;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rx__DOT__half_baud_time;
        CData/*7:0*/ __PVT__UART_Controller__DOT__rx__DOT__data_reg;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rx__DOT__calc_parity;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rx__DOT__pre_wr;
        CData/*7:0*/ __PVT__UART_Controller__DOT__rxfifo__DOT__r_data;
        CData/*7:0*/ __PVT__UART_Controller__DOT__rxfifo__DOT__last_write;
        CData/*3:0*/ __PVT__UART_Controller__DOT__rxfifo__DOT__wr_addr;
        CData/*3:0*/ __PVT__UART_Controller__DOT__rxfifo__DOT__rd_addr;
        CData/*3:0*/ __PVT__UART_Controller__DOT__rxfifo__DOT__r_next;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rxfifo__DOT__will_overflow;
    };
    struct {
        CData/*0:0*/ __PVT__UART_Controller__DOT__rxfifo__DOT__will_underflow;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rxfifo__DOT__osrc;
        CData/*3:0*/ __PVT__UART_Controller__DOT__rxfifo__DOT__w_waddr_plus_one;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rxfifo__DOT__w_write;
        CData/*0:0*/ __PVT__UART_Controller__DOT__rxfifo__DOT__w_read;
        CData/*3:0*/ __PVT__UART_Controller__DOT__rxfifo__DOT__r_fill;
        CData/*7:0*/ __PVT__UART_Controller__DOT__txfifo__DOT__r_data;
        CData/*7:0*/ __PVT__UART_Controller__DOT__txfifo__DOT__last_write;
        CData/*3:0*/ __PVT__UART_Controller__DOT__txfifo__DOT__wr_addr;
        CData/*3:0*/ __PVT__UART_Controller__DOT__txfifo__DOT__rd_addr;
        CData/*3:0*/ __PVT__UART_Controller__DOT__txfifo__DOT__r_next;
        CData/*0:0*/ __PVT__UART_Controller__DOT__txfifo__DOT__will_overflow;
        CData/*0:0*/ __PVT__UART_Controller__DOT__txfifo__DOT__will_underflow;
        CData/*0:0*/ __PVT__UART_Controller__DOT__txfifo__DOT__osrc;
        CData/*3:0*/ __PVT__UART_Controller__DOT__txfifo__DOT__w_waddr_plus_one;
        CData/*0:0*/ __PVT__UART_Controller__DOT__txfifo__DOT__w_write;
        CData/*0:0*/ __PVT__UART_Controller__DOT__txfifo__DOT__w_read;
        CData/*3:0*/ __PVT__UART_Controller__DOT__txfifo__DOT__r_fill;
        CData/*3:0*/ __PVT__UART_Controller__DOT__tx__DOT__state;
        CData/*7:0*/ __PVT__UART_Controller__DOT__tx__DOT__lcl_data;
        CData/*0:0*/ __PVT__UART_Controller__DOT__tx__DOT__calc_parity;
        CData/*0:0*/ __PVT__UART_Controller__DOT__tx__DOT__r_busy;
        CData/*0:0*/ __PVT__UART_Controller__DOT__tx__DOT__zero_baud_counter;
        CData/*0:0*/ __PVT__UART_Controller__DOT__tx__DOT__last_state;
        CData/*0:0*/ __PVT__UART_Controller__DOT__tx__DOT__q_cts_n;
        CData/*0:0*/ __PVT__UART_Controller__DOT__tx__DOT__qq_cts_n;
        CData/*0:0*/ __PVT__UART_Controller__DOT__tx__DOT__ck_cts;
        CData/*0:0*/ __PVT__Core2Wishbone_0__DOT__wb_stb_r;
        CData/*0:0*/ __PVT__Core2Wishbone_0__DOT__wb_stb;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__o_int;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__r_cmd_busy;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__dbg_trigger;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__write_stb;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__wb_cmd_stb;
        CData/*1:0*/ __PVT__SD_Card_Controller__DOT__pipe_addr;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__dly_stb;
        CData/*6:0*/ __PVT__SD_Card_Controller__DOT__fifo_wb_addr;
        CData/*6:0*/ __PVT__SD_Card_Controller__DOT__write_fifo_a_addr;
        CData/*6:0*/ __PVT__SD_Card_Controller__DOT__write_fifo_b_addr;
        CData/*7:0*/ __PVT__SD_Card_Controller__DOT__spi_read_addr;
        CData/*7:0*/ __PVT__SD_Card_Controller__DOT__spi_write_addr;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__write_fifo_a;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__write_fifo_b;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__r_cmd_err;
        CData/*7:0*/ __PVT__SD_Card_Controller__DOT__r_last_r_one;
        CData/*3:0*/ __PVT__SD_Card_Controller__DOT__r_lgblklen;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__r_watchdog_err;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__ll_advance;
        CData/*7:0*/ __PVT__SD_Card_Controller__DOT__r_sdspi_clk;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__ll_cmd_stb;
        CData/*7:0*/ __PVT__SD_Card_Controller__DOT__ll_cmd_dat;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__ll_out_stb;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__ll_idle;
        CData/*7:0*/ __PVT__SD_Card_Controller__DOT__ll_out_dat;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__r_fifo_id;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__r_use_fifo;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__write_to_card;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__w_reset;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__cmd_sent;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__cmd_valid;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__cmd_busy;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__rx_start;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spi_write_to_fifo;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__rx_valid;
    };
    struct {
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__rx_busy;
        CData/*7:0*/ __PVT__SD_Card_Controller__DOT__rx_response;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__tx_start;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spi_read_from_fifo;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__tx_stb;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__tx_valid;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__tx_busy;
        CData/*7:0*/ __PVT__SD_Card_Controller__DOT__tx_response;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__last_busy;
        CData/*0:0*/ SD_Card_Controller__DOT____Vcellinp__spicmdi____pinNumber3;
        CData/*0:0*/ SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7;
        CData/*0:0*/ SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber2;
        CData/*0:0*/ SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber13;
        CData/*0:0*/ SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber10;
        CData/*0:0*/ SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber2;
        CData/*2:0*/ __PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__raw_card_present;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_removed;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_present;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter;
        CData/*7:0*/ __PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_clk_counter;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_idle;
        CData/*3:0*/ __PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state;
        CData/*7:0*/ __PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_byte;
        CData/*7:0*/ __PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_ireg;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__lowlevel__DOT__byte_accepted;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__lowlevel__DOT__restart_counter;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__lowlevel__DOT__startup_hold;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__lowlevel__DOT__powerup_hold;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__r_powerup_hold;
        CData/*6:0*/ __PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__startup_counter;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__r_startup_hold;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spicmdi__DOT__almost_sent;
        CData/*4:0*/ __PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_valid_sreg;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_busy;
        CData/*4:0*/ __PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_bit_counter;
        CData/*7:0*/ __PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_byte;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_r1_byte;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_check_busy;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spicmdi__DOT__rxvalid;
        CData/*2:0*/ __PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_counter;
        CData/*6:0*/ __PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__error_token;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__start_token;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__received_token;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__done;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__lastaddr;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__all_mem_written;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__lastdata;
        CData/*1:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_byte;
        CData/*2:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__r_lgblksz_m3;
        CData/*3:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_fill;
        CData/*7:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_gearbox;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_err;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_active;
        CData/*2:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__fill;
        CData/*1:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__rdvalid;
        CData/*4:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__fill;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_flag;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_stb;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__all_mem_read;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__lastaddr;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__data_sent;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__received_token;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__all_idle;
    };
    struct {
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_active;
        CData/*4:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_fill;
        CData/*0:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__token;
        CData/*2:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__r_lgblksz_m3;
        SData/*15:0*/ __PVT__UART_Controller__DOT__rxf_status;
        SData/*15:0*/ __PVT__UART_Controller__DOT__txf_status;
        SData/*9:0*/ __PVT__UART_Controller__DOT__rxfifo__DOT__w_fill;
        SData/*9:0*/ __PVT__UART_Controller__DOT__txfifo__DOT__w_fill;
        SData/*9:0*/ __PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__card_detect_counter;
        SData/*9:0*/ __PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__powerup_counter;
        SData/*15:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__next_crc_data;
        SData/*15:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_data;
        SData/*15:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__first_crc_data;
        SData/*15:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_data;
        SData/*15:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data;
        VL_IN(main_memory_addr,31,0);
        VL_OUT(cur_instr_addr,31,0);
        IData/*31:0*/ debug_pc;
        IData/*31:0*/ __PVT__wishbone_data2core;
        IData/*31:0*/ __PVT__wishbone_uart_data2core;
        IData/*30:0*/ __PVT__UART_Controller__DOT__uart_setup;
        IData/*29:0*/ __PVT__UART_Controller__DOT__rx__DOT__r_setup;
        IData/*23:0*/ __PVT__UART_Controller__DOT__rx__DOT__baud_counter;
        IData/*27:0*/ __PVT__UART_Controller__DOT__rx__DOT__chg_counter;
        IData/*30:0*/ __PVT__UART_Controller__DOT__tx__DOT__r_setup;
        IData/*27:0*/ __PVT__UART_Controller__DOT__tx__DOT__baud_counter;
        IData/*31:0*/ __PVT__SD_Card_Controller__DOT__o_debug;
        IData/*31:0*/ __PVT__SD_Card_Controller__DOT__write_fifo_a_data;
        IData/*31:0*/ __PVT__SD_Card_Controller__DOT__write_fifo_b_data;
        IData/*31:0*/ __PVT__SD_Card_Controller__DOT__fifo_a_word;
        IData/*31:0*/ __PVT__SD_Card_Controller__DOT__fifo_b_word;
        IData/*31:0*/ __PVT__SD_Card_Controller__DOT__spi_read_data;
        IData/*31:0*/ __PVT__SD_Card_Controller__DOT__spi_write_data;
        IData/*31:0*/ __PVT__SD_Card_Controller__DOT__r_data_reg;
        IData/*25:0*/ __PVT__SD_Card_Controller__DOT__r_watchdog;
        IData/*23:0*/ __PVT__SD_Card_Controller__DOT__spirxdatai__DOT__gearbox;
        IData/*31:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_gearbox;
        QData/*39:0*/ __PVT__SD_Card_Controller__DOT__cmd_response;
        QData/*39:0*/ __PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_shift_reg;
        QData/*39:0*/ __PVT__SD_Card_Controller__DOT__spicmdi__DOT__shift_data;
        QData/*39:0*/ __PVT__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox;
        VlUnpacked<CData/*7:0*/, 16> __PVT__UART_Controller__DOT__rxfifo__DOT__fifo;
        VlUnpacked<CData/*7:0*/, 16> __PVT__UART_Controller__DOT__txfifo__DOT__fifo;
        VlUnpacked<IData/*31:0*/, 128> __PVT__SD_Card_Controller__DOT__fifo_a;
        VlUnpacked<IData/*31:0*/, 128> __PVT__SD_Card_Controller__DOT__fifo_b;
    };

    // INTERNAL VARIABLES
    Vaquila_testharness__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaquila_testharness_aquila_testharness(Vaquila_testharness__Syms* symsp, const char* name);
    ~Vaquila_testharness_aquila_testharness();
    VL_UNCOPYABLE(Vaquila_testharness_aquila_testharness);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
