`timescale 1ns / 1ps
// =============================================================================
//  Program : soc_top.v
//  Author  : Chun-Jen Tsai
//  Date    : Feb/16/2020
// -----------------------------------------------------------------------------
//  Description:
//  This is the top-level Aquila IP wrapper for an AXI-based processor SoC.
// -----------------------------------------------------------------------------
//  Revision information:
//
//  This module is based on the soc_top.v module written by Jin-you Wu
//  on Feb/28/2019. The original module was a stand-alone top-level module
//  for an SoC. This rework makes it a module embedded inside an AXI IP.
//
//  Jan/12/2020, by Chun-Jen Tsai:
//    Added a on-chip Tightly-Coupled Memory (TCM) to the aquila SoC.
//
//  Sep/12/2022, by Chun-Jen Tsai:
//    Fix an issue of missing reset signal across clock domains.
//    Use the clock wizard to generate the Aquila clock on Arty.
// -----------------------------------------------------------------------------
//  License information:
//
//  This software is released under the BSD-3-Clause Licence,
//  see https://opensource.org/licenses/BSD-3-Clause for details.
//  In the following license statements, "software" refers to the
//  "source code" of the complete hardware/software system.
//
//  Copyright 2019,
//                    Embedded Intelligent Systems Lab (EISL)
//                    Deparment of Computer Science
//                    National Chiao Tung Uniersity
//                    Hsinchu, Taiwan.
//
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//  2. Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//  3. Neither the name of the copyright holder nor the names of its contributors
//     may be used to endorse or promote products derived from this software
//     without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
//  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.
// =============================================================================
`include "aquila_config.vh"

module soc_top #( parameter XLEN = 32, parameter CLSIZE = `CLP )
(
`ifdef ARTY
    input                 sys_clk_i,
    input                 resetn_i,
`elsif KC705
    input                 sys_clk_p,
    input                 sys_clk_n,
    input                 reset_i,
`elsif Genesys2
    input                 sys_clk_p,
    input                 sys_clk_n,
    input                 resetn_i,
`elsif QMCore
    input                 sys_clk_i,
`elsif K7BaseC
    input                 sys_clk_i,
    input                 resetn_i,
`else
    input                 clk_i,
    input                 reset_i,
`endif

`ifdef ENABLE_DDRx_MEMORY
    // DDR3 PHY signals
    output [`DRAMA-1 : 0] ddr3_addr,
    output [`BA-1 : 0]    ddr3_ba,
    output                ddr3_cas_n,
    output [0 : 0]        ddr3_ck_n,
    output [0 : 0]        ddr3_ck_p,
    output [0 : 0]        ddr3_cke,
    output                ddr3_ras_n,
    output                ddr3_reset_n,
    output                ddr3_we_n,
    inout  [`DRAMD-1 : 0] ddr3_dq,
    inout  [`DQSP-1 : 0]  ddr3_dqs_n,
    inout  [`DQSP-1 : 0]  ddr3_dqs_p,
`ifndef QMCore
    output [0 : 0]        ddr3_cs_n,
`endif
    output [`DQSP-1 : 0]  ddr3_dm,
    output [0 : 0]        ddr3_odt,
`endif

    // sdcard
    output                spi_mosi,
    input                 spi_miso,
    output                spi_sck,
    output [0 : 0]        spi_ss,

    // uart
    input                 uart_rx,
    output                uart_tx,

    // buttons & leds
    input  [0 : `USRP-1]  usr_btn,
    output [0 : `USRP-1]  usr_led
);

// System clock, reset, and LEDs.
`ifdef ARTY
wire clk_166M, clk_200M;
`elsif QMCore
wire clk_200M;
`elsif K7BaseC
wire clk_200M;
`endif

wire usr_reset;
wire ui_clk, ui_rst;
wire clk, rst;

// --------- External memory interface -----------------------------------------
// Instruction memory ports
wire                IMEM_strobe;
wire [XLEN-1 : 0]   IMEM_addr;
wire                IMEM_done;
wire [CLSIZE-1 : 0] IMEM_data;

// Data memory ports
wire                DMEM_strobe;
wire [XLEN-1 : 0]   DMEM_addr;
wire                DMEM_rw;
wire [CLSIZE-1 : 0] DMEM_wt_data;
wire                DMEM_done;
wire [CLSIZE-1 : 0] DMEM_rd_data;

// --------- I/O device interface ----------------------------------------------
// Device bus signals
wire                dev_strobe;
(* mark_debug = "true" *) wire [XLEN-1 : 0]   dev_addr;
wire                dev_we;
wire [XLEN/8-1 : 0] dev_be;
wire [XLEN-1 : 0]   dev_din;
wire [XLEN-1 : 0]   dev_dout;
wire                dev_ready;

`ifdef ENABLE_DDRx_MEMORY
// --------- cdc_sync ----------------------------------------------------------
// Instruction Memory
wire                IMEM_strobe_ui_clk;
wire [XLEN-1 : 0]   IMEM_addr_ui_clk;
wire                IMEM_done_ui_clk;
wire [CLSIZE-1 : 0] IMEM_data_ui_clk;

// Data Memory
wire                DMEM_strobe_ui_clk;
wire [XLEN-1 : 0]   DMEM_addr_ui_clk;
wire                DMEM_rw_ui_clk;
wire [CLSIZE-1 : 0] DMEM_wt_data_ui_clk;
wire                DMEM_done_ui_clk;
wire [CLSIZE-1 : 0] DMEM_rd_data_ui_clk;

// --------- Memory Controller Interface ---------------------------------------
// Xilinx MIG memory controller user-logic interface signals
wire                MEM_calib;
wire                MEM_en;
wire [`UIADR-1 : 0] MEM_addr;
wire [  2 : 0]      MEM_cmd;

wire [`WDFP-1 : 0]  MEM_wdf_data;
wire                MEM_wdf_end;
wire [`WDFP/8-1:0]  MEM_wdf_mask;
wire                MEM_wdf_wren;
wire                MEM_wdf_rdy;

wire [`WDFP-1 : 0]  MEM_rd_data;
wire                MEM_rd_data_end;
wire                MEM_rd_data_valid;
wire                MEM_rdy;

// Only for DDR3
wire                MEM_sr_req;
wire                MEM_ref_req;
wire                MEM_zq_req;
wire                MEM_sr_active;
wire                MEM_ref_ack;
wire                MEM_zq_ack;
`endif

// Uart
wire                uart_sel;
wire [XLEN-1 : 0]   uart_dout;
wire                uart_ready;

// SPI for SD Card
wire                spi_sel;
wire [XLEN-1 : 0]   spi_dout;
wire                spi_ready;

// DSA device signals (Not used for HW#0 ~ HW#4)
wire                dsa_sel;
wire [XLEN-1 : 0]   dsa_dout;
wire                dsa_ready;

// --------- System Clock Generator --------------------------------------------
// Generates a 50.0000 MHz system clock.
`ifdef ARTY // ARTY A7, reset button adopts negative logic
assign usr_reset = ~resetn_i;

clk_wiz_0 Clock_Generator(
    .clk_in1(sys_clk_i),  // On-board oscillator clock input
    .clk_out1(clk),      // System clock for the Aquila SoC
    .clk_out2(clk_166M), // Clock input to the MIG Memory controller
    .clk_out3(clk_200M)  // DRAM Reference clock for MIG
);
`elsif KC705 // KC705, reset button adopts positive logic
assign usr_reset = reset_i;

clk_wiz_0 Clock_Generator(
    .clk_in1(ui_clk),  // Clock input from the MIG Memory controller
    .clk_out1(clk)     // System clock for the Aquila SoC
);
`elsif Genesys2 // Genesys2, reset button adopts negative logic
assign usr_reset = ~resetn_i;

clk_wiz_0 Clock_Generator(
    .clk_in1(ui_clk),  // Clock input from the MIG Memory controller
    .clk_out1(clk)     // System clock for the Aquila SoC
);
`elsif QMCore
assign usr_reset = ~(&usr_btn);
wire resetn_i = &usr_btn;

clk_wiz_0 Clock_Generator(
    .clk_in1(sys_clk_i), // On-board oscillator clock input
    .clk_out1(clk),      // System clock for the Aquila SoC
    .clk_out2(clk_200M)  // DRAM Reference clock for MIG
);
`elsif K7BaseC
assign usr_reset = ~resetn_i;

clk_wiz_0 Clock_Generator(
    .clk_in1(sys_clk_i), // On-board oscillator clock input
    .clk_out1(clk),      // System clock for the Aquila SoC
    .clk_out2(clk_200M)  // DRAM Reference clock for MIG
);
`else
clk_wiz_0 Clock_Generator(
    .clk_in1(sys_clk_i),  // On-board oscillator clock input
    .clk_out1(clk)       // System clock for the Aquila SoC
);
`endif

// -----------------------------------------------------------------------------
// Generate a system reset signal in the Aquila Core clock domain.
// The reset (rst) should lasts for at least 5 cycles to initialize all the
// all the pipeline registers. The reset signal can also be sent to the clock
// domains with clock rates less than five times of 'clk'.
//
localparam SR_N = 5;
reg [SR_N-1:0] rst_sr = {SR_N{1'b1}};
assign rst = rst_sr[SR_N-1];

always @(posedge clk) begin
    if (usr_reset)
        rst_sr <= {SR_N{1'b1}};
    else
        rst_sr <= {rst_sr[SR_N-2 : 0], 1'b0};
end

// -----------------------------------------------------------------------------
//  Aquila processor core.
//
aquila_top Aquila_SoC
(
    .clk_i(clk),
    .rst_i(rst),          // level-sensitive reset signal.
    .base_addr_i(32'b0),  // initial program counter.

    // External instruction memory ports.
    .M_IMEM_strobe_o(IMEM_strobe),
    .M_IMEM_addr_o(IMEM_addr),
    .M_IMEM_done_i(IMEM_done),
    .M_IMEM_data_i(IMEM_data),

    // External data memory ports.
    .M_DMEM_strobe_o(DMEM_strobe),
    .M_DMEM_addr_o(DMEM_addr),
    .M_DMEM_rw_o(DMEM_rw),
    .M_DMEM_data_o(DMEM_wt_data),
    .M_DMEM_done_i(DMEM_done),
    .M_DMEM_data_i(DMEM_rd_data),

    // I/O device ports.
    .M_DEVICE_strobe_o(dev_strobe),
    .M_DEVICE_addr_o(dev_addr),
    .M_DEVICE_rw_o(dev_we),
    .M_DEVICE_byte_enable_o(dev_be),
    .M_DEVICE_data_o(dev_din),
    .M_DEVICE_data_ready_i(dev_ready),
    .M_DEVICE_data_i(dev_dout)
);

// -----------------------------------------------------------------------------
//  Device address decoder.
//
//       [0] 0xC000_0000 - 0xC0FF_FFFF : UART device
//       [1] 0xC200_0000 - 0xC2FF_FFFF : SPI device
//       [2] 0xC400_0000 - 0xC4FF_FFFF : DSA device
assign uart_sel  = (dev_addr[XLEN-1:XLEN-8] == 8'hC0);
assign spi_sel   = (dev_addr[XLEN-1:XLEN-8] == 8'hC2);
assign dev_dout  = (uart_sel)? uart_dout :
                   (spi_sel)?   spi_dout :
                              {XLEN{1'b0}};
assign dev_ready = (uart_sel)? uart_ready :
                   (spi_sel)?   spi_ready :
                                      1'b0;

// ----------------------------------------------------------------------------
//  UART Controller with a simple memory-mapped I/O interface.
//
`define BAUD_RATE	115200

/* thr darkriscv uart module, original use in lab5 and qmcore
uart #(.BAUD(`SOC_CLK/`BAUD_RATE))
UART(
    .clk(clk),
    .rst(rst),

    .EN(dev_strobe & uart_sel),
    .ADDR(dev_addr[3:2]),
    .WR(dev_we),
    .BE(dev_be),
    .DATAI(dev_din),
    .DATAO(uart_dout),
    .READY(uart_ready),

    .RXD(uart_rx),
    .TXD(uart_tx)
);
*/

// -----------------------------------------------------------------------------
// Uart controoler with wishbone bus interface 
// 
wire                   wishbone_uart_cyc;
wire                   wishbone_uart_stb;
wire                   wishbone_uart_we;
wire  [2-1:0]  	       wishbone_uart_addr;
wire  [XLEN-1:0]	   wishbone_uart_data2sdcard;
wire  [XLEN/8 - 1:0]   wishbone_uart_sel;
wire  		           wishbone_uart_stall;
wire  		           wishbone_uart_ack;
wire  [XLEN-1:0]       wishbone_uart_data2core;

core2wishboneuart_if #(.XLEN(32), .AXI_ADDR_LEN(7))
Core2Wishboneuart_0 (
    .clk_i(clk),
    .rst_i(rst),

    // Aquila M_DEVICE master interface signals.
    .S_DEVICE_strobe_i(dev_strobe & uart_sel),
    .S_DEVICE_addr_i(dev_addr),
    .S_DEVICE_rw_i(dev_we),
    .S_DEVICE_byte_enable_i(dev_be),
    .S_DEVICE_data_i(dev_din),
    .S_DEVICE_data_ready_o(uart_ready),
    .S_DEVICE_data_o(uart_dout),

    // Converted Wishbone master interface signals.
    .wb_cyc_o(wishbone_uart_cyc),
    .wb_stb_o(wishbone_uart_stb),
    .wb_we_o(wishbone_uart_we),
    .wb_addr_o(wishbone_uart_addr),
    .wb_data_o(wishbone_uart_data2sdcard),
    .wb_sel_o(wishbone_uart_sel),
    .wb_stall_i(wishbone_uart_stall),
    .wb_ack_i(wishbone_uart_ack),
    .wb_data_i(wishbone_uart_data2core)
);

wbuart UART_Controller(

    .i_clk(clk),
    .i_reset(rst),
	// Wishbone interface
	.i_wb_cyc(wishbone_uart_cyc),
    .i_wb_stb(wishbone_uart_stb),
    .i_wb_we(wishbone_uart_we),
	.i_wb_addr(wishbone_uart_addr),
	.i_wb_data(wishbone_uart_data2sdcard),
	.i_wb_sel(wishbone_uart_sel),
	.o_wb_stall(wishbone_uart_stall),
	.o_wb_ack(wishbone_uart_ack),
	.o_wb_data(wishbone_uart_data2core),
	// Uart interface
	.i_uart_rx(uart_rx),
    .o_uart_tx(uart_tx),
    .i_cts_n(1'b0),
	.o_rts_n(), 
    // interrupt interface
    .o_uart_rx_int(),
	.o_uart_tx_int(),
	.o_uart_rxfifo_int(),
	.o_uart_txfifo_int()
);

// -----------------------------------------------------------------------------
//  SD Card SPI Controller with wishbone bus interface.
//

wire                   wishbone_spi_cyc;
wire                   wishbone_spi_stb;
wire                   wishbone_spi_we;
wire  [2-1:0]  	       wishbone_spi_addr;
wire  [XLEN-1:0]	   wishbone_spi_data2sdcard;
wire  [XLEN/8 - 1:0]   wishbone_spi_sel;
wire  		           wishbone_spi_stall;
wire  		           wishbone_spi_ack;
wire  [XLEN-1:0]       wishbone_spi_data2core;


// ---------------------------------------
//  Aquila local bus to AXI bus interface
// ---------------------------------------
core2wishbonespi_if #(.XLEN(32), .AXI_ADDR_LEN(7))
Core2Wishbonespi_0 (
    .clk_i(clk),
    .rst_i(rst),

    // Aquila M_DEVICE master interface signals.
    .S_DEVICE_strobe_i(dev_strobe & spi_sel),
    .S_DEVICE_addr_i(dev_addr),
    .S_DEVICE_rw_i(dev_we),
    .S_DEVICE_byte_enable_i(dev_be),
    .S_DEVICE_data_i(dev_din),
    .S_DEVICE_data_ready_o(spi_ready),
    .S_DEVICE_data_o(spi_dout),

    // Converted Wishbone master interface signals.
    .wb_cyc_o(wishbone_spi_cyc),
    .wb_stb_o(wishbone_spi_stb),
    .wb_we_o(wishbone_spi_we),
    .wb_addr_o(wishbone_spi_addr),
    .wb_data_o(wishbone_spi_data2sdcard),
    .wb_sel_o(wishbone_spi_sel),
    .wb_stall_i(wishbone_spi_stall),
    .wb_ack_i(wishbone_spi_ack),
    .wb_data_i(wishbone_spi_data2core)
);


// ----------------------------------
//  SPI controller
// ----------------------------------
sdspi SD_Card_Controller(

    .i_clk(clk),
    .i_sd_reset(rst),
	// Wishbone interface
	.i_wb_cyc(wishbone_spi_cyc),
    .i_wb_stb(wishbone_spi_stb),
    .i_wb_we(wishbone_spi_we),
	.i_wb_addr(wishbone_spi_addr),
	.i_wb_data(wishbone_spi_data2sdcard),
	.i_wb_sel(wishbone_spi_sel),
	.o_wb_stall(wishbone_spi_stall),
	.o_wb_ack(wishbone_spi_ack),
	.o_wb_data(wishbone_spi_data2core),
	// SDCard interface
	.o_cs_n(spi_ss),
    .o_sck(spi_sck),
    .o_mosi(spi_mosi),
	.i_miso(spi_miso), 
    .i_card_detect(1'b1),
	// Our interrupt
	.o_int(),
	// .. and whether or not we can use the SPI port
	.i_bus_grant(1'b1),
	// And some wires for debugging it all
	.o_debug()
);


`ifdef ENABLE_DDRx_MEMORY
// ----------------------------------------------------------------------------
//  cdc_sync.
//
cdc_sync synchronizer
(
    .clk_core(clk),
    .clk_memc(ui_clk),
    .rst_core_i(rst),
    .rst_memc_i(ui_rst),

    .IMEM_strobe_i(IMEM_strobe),
    .IMEM_addr_i(IMEM_addr),
    .IMEM_done_o(IMEM_done),
    .IMEM_data_o(IMEM_data),

    .DMEM_strobe_i(DMEM_strobe),
    .DMEM_addr_i(DMEM_addr),
    .DMEM_rw_i(DMEM_rw),
    .DMEM_wt_data_i(DMEM_wt_data),
    .DMEM_done_o(DMEM_done),
    .DMEM_rd_data_o(DMEM_rd_data),

    .IMEM_strobe_o(IMEM_strobe_ui_clk),
    .IMEM_addr_o(IMEM_addr_ui_clk),
    .IMEM_done_i(IMEM_done_ui_clk),
    .IMEM_data_i(IMEM_data_ui_clk),

    .DMEM_strobe_o(DMEM_strobe_ui_clk),
    .DMEM_addr_o(DMEM_addr_ui_clk),
    .DMEM_rw_o(DMEM_rw_ui_clk),
    .DMEM_wt_data_o(DMEM_wt_data_ui_clk),
    .DMEM_done_i(DMEM_done_ui_clk),
    .DMEM_rd_data_i(DMEM_rd_data_ui_clk)
);

// ----------------------------------------------------------------------------
//  mem_arbiter.
//
mem_arbiter Memory_Arbiter
(
    // System signals
    .clk_i(ui_clk),
    .rst_i(ui_rst),

    // Aquila M_ICACHE master port interface signals
    .S_IMEM_strobe_i(IMEM_strobe_ui_clk),
    .S_IMEM_addr_i(IMEM_addr_ui_clk),
    .S_IMEM_done_o(IMEM_done_ui_clk),
    .S_IMEM_data_o(IMEM_data_ui_clk),

    // Aquila M_DCACHE master port interface signals
    .S_DMEM_strobe_i(DMEM_strobe_ui_clk),
    .S_DMEM_addr_i(DMEM_addr_ui_clk),
    .S_DMEM_rw_i(DMEM_rw_ui_clk),
    .S_DMEM_data_i(DMEM_wt_data_ui_clk),
    .S_DMEM_done_o(DMEM_done_ui_clk),
    .S_DMEM_data_o(DMEM_rd_data_ui_clk),
    
    // Memory user interface signals
    .M_MEM_addr_o(MEM_addr),
    .M_MEM_cmd_o(MEM_cmd),
    .M_MEM_en_o(MEM_en),
    .M_MEM_wdf_data_o(MEM_wdf_data),
    .M_MEM_wdf_end_o(MEM_wdf_end),
    .M_MEM_wdf_mask_o(MEM_wdf_mask),
    .M_MEM_wdf_wren_o(MEM_wdf_wren),
    .M_MEM_rd_data_i(MEM_rd_data),
    .M_MEM_rd_data_valid_i(MEM_rd_data_valid),
    .M_MEM_rdy_i(MEM_rdy),
    .M_MEM_wdf_rdy_i(MEM_wdf_rdy),

    // Only for DDR3, not really used.
    .M_MEM_sr_req_o(MEM_sr_req),
    .M_MEM_ref_req_o(MEM_ref_req),
    .M_MEM_zq_req_o(MEM_zq_req)
);

// ----------------------------------------------------------------------------
//  DDR Memory Controller.
//
mig_7series_0 MIG(
    // Memory interface ports
    .ddr3_addr(ddr3_addr),                  // output [13:0]  ddr3_addr
    .ddr3_ba(ddr3_ba),                      // output [2:0]   ddr3_ba
    .ddr3_cas_n(ddr3_cas_n),                // output         ddr3_cas_n
    .ddr3_ck_n(ddr3_ck_n),                  // output [0:0]   ddr3_ck_n
    .ddr3_ck_p(ddr3_ck_p),                  // output [0:0]   ddr3_ck_p
    .ddr3_cke(ddr3_cke),                    // output [0:0]   ddr3_cke
    .ddr3_ras_n(ddr3_ras_n),                // output         ddr3_ras_n
    .ddr3_reset_n(ddr3_reset_n),            // output         ddr3_reset_n
    .ddr3_we_n(ddr3_we_n),                  // output         ddr3_we_n
    .ddr3_dq(ddr3_dq),                      // inout [15:0]   ddr3_dq
    .ddr3_dqs_n(ddr3_dqs_n),                // inout [1:0]    ddr3_dqs_n
    .ddr3_dqs_p(ddr3_dqs_p),                // inout [1:0]    ddr3_dqs_p
    .init_calib_complete(MEM_calib),        // output         init_calib_complete

`ifndef QMCore
    .ddr3_cs_n(ddr3_cs_n),                  // output [0:0]   ddr3_cs_n
`endif
    .ddr3_dm(ddr3_dm),                      // output [1:0]   ddr3_dm
    .ddr3_odt(ddr3_odt),                    // output [0:0]   ddr3_odt

    // Application interface ports
    .app_addr(MEM_addr),                    // input [27:0]   app_addr
    .app_cmd(MEM_cmd),                      // input [2:0]    app_cmd
    .app_en(MEM_en),                        // input          app_en
    .app_wdf_data(MEM_wdf_data),            // input [127:0]  app_wdf_data
    .app_wdf_end(MEM_wdf_end),              // input          app_wdf_end
    .app_wdf_mask(MEM_wdf_mask),            // input [15:0]   app_wdf_mask
    .app_wdf_wren(MEM_wdf_wren),            // input          app_wdf_wren
    .app_rd_data(MEM_rd_data),              // output [127:0] app_rd_data
    .app_rd_data_end(MEM_rd_data_end),      // output         app_rd_data_end
    .app_rd_data_valid(MEM_rd_data_valid),  // output         app_rd_data_valid
    .app_rdy(MEM_rdy),                      // output         app_rdy
    .app_wdf_rdy(MEM_wdf_rdy),              // output         app_wdf_rdy

    .app_sr_req(MEM_sr_req),                // input          app_sr_req
    .app_ref_req(MEM_ref_req),              // input          app_ref_req
    .app_zq_req(MEM_zq_req),                // input          app_zq_req
    .app_sr_active(MEM_sr_active),          // output         app_sr_active
    .app_ref_ack(MEM_ref_ack),              // output         app_ref_ack
    .app_zq_ack(MEM_zq_ack),                // output         app_zq_ack

    // System Clock & Reset Ports
`ifdef ARTY
    .sys_clk_i(clk_166M),                   // input          memory controller ref. clock
    .sys_rst(resetn_i),                     // input          sys_rst

    // 200MHz Reference Clock Ports (only needed when the ui_clk is not 200MHz)
    .clk_ref_i(clk_200M),
`elsif KC705
    .sys_clk_n(sys_clk_n),                  // input          memory controller ref. clock
    .sys_clk_p(sys_clk_p),
    .sys_rst(reset_i),                      // input          sys_rst

    // 200MHz Reference Clock Ports (only needed when the ui_clk is not 200MHz)
    // .clk_ref_i(clk_200M),
`elsif Genesys2
    .sys_clk_n(sys_clk_n),                  // input          memory controller ref. clock
    .sys_clk_p(sys_clk_p),
    .sys_rst(resetn_i),                     // input          sys_rst

`elsif K7BaseC
    .sys_clk_i(clk_200M),                   // input          memory controller ref. clock
    .sys_rst(resetn_i),                     // input          sys_rst

    // 200MHz Reference Clock Ports (only needed when the ui_clk is not 200MHz)
    .clk_ref_i(clk_200M),
`else // QMCore
    .sys_clk_i(clk_200M),                   // input          memory controller ref. clock
    .sys_rst(resetn_i),                     // input          sys_rst

    // 200MHz Reference Clock Ports (only needed when the ui_clk is not 200MHz)
    //.clk_ref_i(clk_200M),
`endif

    // User-logic Interface (UI) clock & reset signals.
    .ui_clk(ui_clk),                        // output         ui_clk
    .ui_clk_sync_rst(ui_rst)                // output         ui_clk_sync_rst
);
`endif // ifdef ENABLE_DDRx_MEMORY
endmodule
