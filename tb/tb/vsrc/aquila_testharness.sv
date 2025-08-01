
`timescale 1 ns / 1 ps
// =============================================================================
//  Program : aquila.v
//  Author  : Hon-Chou Dai (Daichou)
//  Date    : FEB/12/2020
// -----------------------------------------------------------------------------
//  Revision information:
//
//  NONE.
// -----------------------------------------------------------------------------
//  Description:
//  This is the top-level Aquila SoC testharness module.
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

module aquila_testharness #(
    // Parameters of Axi Master Bus Interface M_ICACHE_PORT
    parameter integer C_M_IMEM_PORT_ID_WIDTH = 1,
    parameter integer C_M_IMEM_PORT_ADDR_WIDTH = 32,
    parameter integer C_M_IMEM_PORT_DATA_WIDTH = 32,
    parameter integer C_M_IMEM_PORT_AWUSER_WIDTH = 0,
    parameter integer C_M_IMEM_PORT_ARUSER_WIDTH = 0,
    parameter integer C_M_IMEM_PORT_WUSER_WIDTH = 0,
    parameter integer C_M_IMEM_PORT_RUSER_WIDTH = 0,
    parameter integer C_M_IMEM_PORT_BUSER_WIDTH = 0,

    // Parameters of Axi Master Bus Interface M_DMEM_PORT
    parameter integer C_M_DMEM_PORT_ID_WIDTH = 1,
    parameter integer C_M_DMEM_PORT_ADDR_WIDTH = 32,
    parameter integer C_M_DMEM_PORT_DATA_WIDTH = 32,
    parameter integer C_M_DMEM_PORT_AWUSER_WIDTH = 0,
    parameter integer C_M_DMEM_PORT_ARUSER_WIDTH = 0,
    parameter integer C_M_DMEM_PORT_WUSER_WIDTH = 0,
    parameter integer C_M_DMEM_PORT_RUSER_WIDTH = 0,
    parameter integer C_M_DMEM_PORT_BUSER_WIDTH = 0,

    // Parameters of Axi Master Bus Interface M_DEVICE_PORT
    parameter integer C_M_DEVICE_PORT_ADDR_WIDTH = 32,
    parameter integer C_M_DEVICE_PORT_DATA_WIDTH = 32
) (
    input  logic clk,
    input  logic rst_n,
    input  logic [31 : 0] main_memory_addr,
    output logic [31:0] cur_instr_addr,

    output logic spi_ss,
    output logic spi_sck,
    output logic spi_mosi,
    input  logic spi_miso,

    output logic uart_tx,
    input  logic uart_rx
);

    // Declaration of local signals.
    wire RISCV_rst;
    wire M_IMEM_strobe, M_IMEM_done;
    wire M_DMEM_strobe, M_DMEM_done;
    wire                                    M_DMEM_rw;
    wire [C_M_IMEM_PORT_DATA_WIDTH - 1 : 0] M_IMEM_addr;
    wire [C_M_DMEM_PORT_DATA_WIDTH - 1 : 0] M_DMEM_addr;
    wire [255 : 0] M_IMEM_datain, M_DMEM_datain, M_DMEM_dataout;

    wire                                      M_DEVICE_strobe /* verilator public*/ ;
    wire [C_M_DEVICE_PORT_DATA_WIDTH - 1 : 0] M_DEVICE_addr;
    wire                                      M_DEVICE_rw;
    wire [C_M_DEVICE_PORT_DATA_WIDTH/8-1 : 0] M_DEVICE_byte_enable;
    wire [C_M_DEVICE_PORT_DATA_WIDTH - 1 : 0] M_DEVICE_core2dev_data;
    wire                                      M_DEVICE_data_ready;
    wire [C_M_DEVICE_PORT_DATA_WIDTH - 1 : 0] M_DEVICE_dev2core_data;


    // Debug pc
    wire [                              31:0] debug_pc  /*verilator public_flat*/;
    assign debug_pc = aquila_core.p_i_addr;
    assign cur_instr_addr = aquila_core.p_i_addr;

    //wire [31:0] debug_rf [0:31]/*verilator public_flat*/;
    //genvar idx;
    //generate
    //for (idx = 0 ; idx < 32 ; idx = idx + 1)
    //  assign debug_rf[i] = aquila_core.RISCV_CORE0.Register_File.rf[i];
    //endgenerate

    wire is_dev_req /* verilator public */;
    wire dev_sel /* verilator public */;

    assign is_dev_req = (M_DEVICE_addr[31:30] == 2'b11);
    assign dev_sel    = (M_DEVICE_addr[27:24] == 4'h0) ? 0 :
                        (M_DEVICE_addr[27:24] == 4'h4) ? 1 : 0;

    wire uart_data_ready;
    wire uart_strobe;
    wire uart_rw;
    wire [C_M_DEVICE_PORT_DATA_WIDTH - 1 : 0] uart_data;
    wire intc_data_ready;
    wire intc_strobe;
    wire intc_rw;
    wire [C_M_DEVICE_PORT_DATA_WIDTH - 1 : 0] intc_data;

    wire                                        wishbone_cyc;
    wire                                        wishbone_stb;
    wire                                        wishbone_we;
    wire  [2-1:0]  	                            wishbone_addr;
    wire  [C_M_DEVICE_PORT_DATA_WIDTH-1:0]	    wishbone_data2sdcard;
    wire  [C_M_DEVICE_PORT_DATA_WIDTH/8 - 1:0]  wishbone_sel;
    wire  		                                wishbone_stall;
    wire  		                                wishbone_ack;
    wire  [C_M_DEVICE_PORT_DATA_WIDTH-1:0]      wishbone_data2core;
    wire                                        spi_sel;
    wire                                        spi_ready;
    wire [C_M_DEVICE_PORT_DATA_WIDTH-1:0]       spi_dout;

    assign M_DEVICE_data_ready = (is_dev_req)? (M_DEVICE_addr[27:24] == 4'h2 ? spi_ready : (dev_sel == 0)? uart_data_ready : intc_data_ready) : 0;
    assign M_DEVICE_dev2core_data = (is_dev_req)? (M_DEVICE_addr[27:24] == 4'h2 ?  spi_dout : (dev_sel == 0)? uart_data : intc_data) : 0;
    assign uart_strobe = (is_dev_req && (dev_sel == 0))? M_DEVICE_strobe : 0;
    assign uart_rw = (is_dev_req && (dev_sel == 0))? M_DEVICE_rw : 0;
    assign intc_strobe = (is_dev_req && (dev_sel == 1))? M_DEVICE_strobe : 0;
    assign intc_rw = (is_dev_req && (dev_sel == 1))? M_DEVICE_rw : 0;

    assign spi_sel = is_dev_req && M_DEVICE_addr[27:24] == 4'h2;

    // Instiantiation of the top-level Aquila core module.
    aquila_top aquila_core (
        .clk_i(clk),
        .rst_i(~rst_n),
        .base_addr_i(main_memory_addr),

        .M_IMEM_strobe_o(M_IMEM_strobe),
        .M_IMEM_addr_o  (M_IMEM_addr),
        .M_IMEM_done_i  (M_IMEM_done),
        .M_IMEM_data_i  (M_IMEM_datain),

        .M_DMEM_strobe_o(M_DMEM_strobe),
        .M_DMEM_addr_o(M_DMEM_addr),
        .M_DMEM_rw_o(M_DMEM_rw),
        .M_DMEM_data_o(M_DMEM_dataout),
        .M_DMEM_done_i(M_DMEM_done),
        .M_DMEM_data_i(M_DMEM_datain),

        .M_DEVICE_strobe_o(M_DEVICE_strobe),
        .M_DEVICE_addr_o(M_DEVICE_addr),
        .M_DEVICE_rw_o(M_DEVICE_rw),
        .M_DEVICE_byte_enable_o(M_DEVICE_byte_enable),
        .M_DEVICE_data_o(M_DEVICE_core2dev_data),
        .M_DEVICE_data_ready_i(M_DEVICE_data_ready),
        .M_DEVICE_data_i(M_DEVICE_dev2core_data),
        .ext_irq_i(intc_irq)
    );

    dp_ram mock_ram (
        .clk(clk),
        .rst_n(rst_n),
        .strobe_imem(M_IMEM_strobe),
        .addr_imem_i(M_IMEM_addr),
        .rdata_imem_o(M_IMEM_datain),
        .done_imem_o(M_IMEM_done),

        .strobe_dmem(M_DMEM_strobe),
        .addr_dmem_i(M_DMEM_addr),
        .wdata_dmem_i(M_DMEM_dataout),
        .rdata_dmem_o(M_DMEM_datain),
        .rw_dmem_i(M_DMEM_rw),
        .done_dmem_o(M_DMEM_done)
    );

    wire                   wishbone_uart_cyc;
    wire                   wishbone_uart_stb;
    wire                   wishbone_uart_we;
    wire  [2-1:0]  	       wishbone_uart_addr;
    wire  [32-1:0]	   wishbone_uart_data2sdcard;
    wire  [32/8 - 1:0]   wishbone_uart_sel;
    wire  		           wishbone_uart_stall;
    wire  		           wishbone_uart_ack;
    wire  [32-1:0]       wishbone_uart_data2core;

    core2wishboneuart_if #(.XLEN(32), .AXI_ADDR_LEN(7))
    Core2Wishboneuart_0 (
        .clk_i(clk),
        .rst_i(rst),

        // Aquila M_DEVICE master interface signals.
        .S_DEVICE_strobe_i(uart_strobe),
        .S_DEVICE_addr_i(M_DEVICE_addr),
        .S_DEVICE_rw_i(uart_rw),
        .S_DEVICE_byte_enable_i(M_DEVICE_byte_enable),
        .S_DEVICE_data_i(M_DEVICE_core2dev_data),
        .S_DEVICE_data_ready_o(uart_data_ready),
        .S_DEVICE_data_o(uart_data),

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

    // mock_uart mock_uart_0 (
    //     .clk  (clk),
    //     .rst_n(rst_n),

    //     .M_DEVICE_strobe       (uart_strobe),
    //     .M_DEVICE_addr         (M_DEVICE_addr),
    //     .M_DEVICE_rw           (uart_rw),
    //     .M_DEVICE_byte_enable  (M_DEVICE_byte_enable),
    //     .M_DEVICE_core2dev_data(M_DEVICE_core2dev_data),
    //     .M_DEVICE_data_ready   (uart_data_ready),
    //     .M_DEVICE_dev2core_data(uart_data),
    //     .intr_o                (uart_intr)

    // );

    wbuart	#(31'd25)
    UART_Controller(

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

    

    intc intc_0 (
        .clk                   (clk),
        .rst_n                 (rst_n),
        .M_DEVICE_strobe       (intc_strobe),
        .M_DEVICE_addr         (M_DEVICE_addr),
        .M_DEVICE_rw           (intc_rw),
        .M_DEVICE_byte_enable  (M_DEVICE_byte_enable),
        .M_DEVICE_core2dev_data(M_DEVICE_core2dev_data),
        .M_DEVICE_data_ready   (intc_data_ready),
        .M_DEVICE_dev2core_data(intc_data),
        .intr                  (uart_intr),
        .irq                   (intc_irq)
    );

    core2wishbone_if #(.XLEN(32), .AXI_ADDR_LEN(7))
    Core2Wishbone_0 (
        .clk_i(clk),
        .rst_i(~rst_n),

        // Aquila M_DEVICE master interface signals.
        .S_DEVICE_strobe_i(M_DEVICE_strobe & spi_sel),
        .S_DEVICE_addr_i(M_DEVICE_addr),
        .S_DEVICE_rw_i(M_DEVICE_rw),
        .S_DEVICE_byte_enable_i(M_DEVICE_byte_enable),
        .S_DEVICE_data_i(M_DEVICE_core2dev_data),
        .S_DEVICE_data_ready_o(spi_ready),
        .S_DEVICE_data_o(spi_dout),

        // Converted Wishbone master interface signals.
        .wb_cyc_o(wishbone_cyc),
        .wb_stb_o(wishbone_stb),
        .wb_we_o(wishbone_we),
        .wb_addr_o(wishbone_addr),
        .wb_data_o(wishbone_data2sdcard),
        .wb_sel_o(wishbone_sel),
        .wb_stall_i(wishbone_stall),
        .wb_ack_i(wishbone_ack),
        .wb_data_i(wishbone_data2core)
    );
    // ----------------------------------
    //  SPI controller
    // ----------------------------------
    sdspi SD_Card_Controller(

        .i_clk(clk),
        .i_sd_reset(~rst_n),
        // Wishbone interface
        .i_wb_cyc(wishbone_cyc),
        .i_wb_stb(wishbone_stb),
        .i_wb_we(wishbone_we),
        .i_wb_addr(wishbone_addr),
        .i_wb_data(wishbone_data2sdcard),
        .i_wb_sel(wishbone_sel),
        .o_wb_stall(wishbone_stall),
        .o_wb_ack(wishbone_ack),
        .o_wb_data(wishbone_data2core),
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
endmodule