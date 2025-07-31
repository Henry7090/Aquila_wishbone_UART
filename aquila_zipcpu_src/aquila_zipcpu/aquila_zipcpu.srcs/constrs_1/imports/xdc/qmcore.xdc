################################################################################
# Constraint file for the QMTech Core Board development board
################################################################################

# Compress bitstream and configure for fast Flash programming
set_property BITSTREAM.GENERAL.COMPRESS TRUE [current_design]
set_property CONFIG_VOLTAGE 3.3 [current_design]
set_property CFGBVS VCCO [current_design]
set_property BITSTREAM.CONFIG.SPI_BUSWIDTH 4 [current_design]
set_property BITSTREAM.CONFIG.CONFIGRATE 50 [current_design]
set_property BITSTREAM.CONFIG.SPI_FALL_EDGE YES [current_design]

## Clock Signal
set_property -dict {PACKAGE_PIN F22 IOSTANDARD LVCMOS33} [get_ports sys_clk_i]
#create_clock -name sys_clk -period 20 [get_ports sys_clk_i]

################################################################################
## Buttons
set_property -dict {PACKAGE_PIN AF9 IOSTANDARD LVCMOS18} [get_ports {usr_btn[0]}]
set_property -dict {PACKAGE_PIN AF10 IOSTANDARD LVCMOS18} [get_ports {usr_btn[1]}]
#set_property -dict {PACKAGE_PIN AF13 IOSTANDARD LVCMOS18} [get_ports {usr_btn[2]}]; # dummy
#set_property -dict {PACKAGE_PIN AE13 IOSTANDARD LVCMOS18} [get_ports {usr_btn[3]}]; # dummy

## UART
set_property -dict {PACKAGE_PIN N26 IOSTANDARD LVCMOS33} [get_ports uart_rx]
set_property -dict {PACKAGE_PIN P23 IOSTANDARD LVCMOS33} [get_ports uart_tx]

## LEDs
set_property -dict {PACKAGE_PIN J26 IOSTANDARD LVCMOS33} [get_ports {usr_led[0]}]
set_property -dict {PACKAGE_PIN H26 IOSTANDARD LVCMOS33} [get_ports {usr_led[1]}]
#set_property -dict {PACKAGE_PIN H21 IOSTANDARD LVCMOS33} [get_ports {usr_led[2]}]; # dummy
#set_property -dict {PACKAGE_PIN G21 IOSTANDARD LVCMOS33} [get_ports {usr_led[3]}]; # dummy

## SD Card (SPI)
#set_property -dict { PACKAGE_PIN W21 IOSTANDARD LVCMOS33 } [get_ports { sdio_d01 }];
set_property -dict {PACKAGE_PIN V21 IOSTANDARD LVCMOS33} [get_ports spi_miso]
set_property -dict {PACKAGE_PIN AE23 IOSTANDARD LVCMOS33} [get_ports spi_sck]
set_property -dict {PACKAGE_PIN AE22 IOSTANDARD LVCMOS33} [get_ports spi_mosi]
set_property -dict {PACKAGE_PIN AD21 IOSTANDARD LVCMOS33} [get_ports spi_ss]
#set_property -dict { PACKAGE_PIN AF23 IOSTANDARD LVCMOS33 } [get_ports { sdio_d02 }];

## I2C
#set_property -dict { PACKAGE_PIN AD21 IOSTANDARD LVCMOS33 } [get_ports { i2c_scl }];
#set_property -dict { PACKAGE_PIN AE22 IOSTANDARD LVCMOS33 } [get_ports { i2c_sda }];

## Differential PMOD-HDMI w/o capacitors in the signal traces
#set_property -dict { PACKAGE_PIN E10 IOSTANDARD TMDS_33 } [get_ports { tmds_data_p[2] }];
#set_property -dict { PACKAGE_PIN B10 IOSTANDARD TMDS_33 } [get_ports { tmds_data_p[1] }];
#set_property -dict { PACKAGE_PIN C9  IOSTANDARD TMDS_33 } [get_ports { tmds_data_p[0] }];
#set_property -dict { PACKAGE_PIN A9  IOSTANDARD TMDS_33 } [get_ports { tmds_clk_p     }];
#set_property -dict { PACKAGE_PIN D10 IOSTANDARD TMDS_33 } [get_ports { tmds_data_n[2] }];
#set_property -dict { PACKAGE_PIN A10 IOSTANDARD TMDS_33 } [get_ports { tmds_data_n[1] }];
#set_property -dict { PACKAGE_PIN A9  IOSTANDARD TMDS_33 } [get_ports { tmds_data_n[0] }];
#set_property -dict { PACKAGE_PIN A8  IOSTANDARD TMDS_33 } [get_ports { tmds_clk_n     }];

## 90-degree PMOD-HDMI w/o capacitors in the signal traces
#set_property -dict { PACKAGE_PIN E25 IOSTANDARD LVCMOS33 } [get_ports { tmds_data_p[1] }];
#set_property -dict { PACKAGE_PIN F25 IOSTANDARD LVCMOS33 } [get_ports { tmds_data_n[1] }];
#set_property -dict { PACKAGE_PIN B25 IOSTANDARD LVCMOS33 } [get_ports { tmds_clk_p     }];
#set_property -dict { PACKAGE_PIN D26 IOSTANDARD LVCMOS33 } [get_ports { tmds_clk_n     }];
#set_property -dict { PACKAGE_PIN D25 IOSTANDARD LVCMOS33 } [get_ports { tmds_data_p[2] }];
#set_property -dict { PACKAGE_PIN E26 IOSTANDARD LVCMOS33 } [get_ports { tmds_data_n[2] }];
#set_property -dict { PACKAGE_PIN B26 IOSTANDARD LVCMOS33 } [get_ports { tmds_data_p[0] }];
#set_property -dict { PACKAGE_PIN C26 IOSTANDARD LVCMOS33 } [get_ports { tmds_data_n[0] }];

## Qmcore HDMI
#set_property -dict { PACKAGE_PIN C26 IOSTANDARD LVCMOS33 } [get_ports { tmds_data_p[1] }];
#set_property -dict { PACKAGE_PIN D26 IOSTANDARD LVCMOS33 } [get_ports { tmds_data_n[1] }];
#set_property -dict { PACKAGE_PIN B26 IOSTANDARD LVCMOS33 } [get_ports { tmds_clk_p     }];
#set_property -dict { PACKAGE_PIN B25 IOSTANDARD LVCMOS33 } [get_ports { tmds_clk_n     }];
#set_property -dict { PACKAGE_PIN E26 IOSTANDARD LVCMOS33 } [get_ports { tmds_data_p[2] }];
#set_property -dict { PACKAGE_PIN F25 IOSTANDARD LVCMOS33 } [get_ports { tmds_data_n[2] }];
#set_property -dict { PACKAGE_PIN D25 IOSTANDARD LVCMOS33 } [get_ports { tmds_data_p[0] }];
#set_property -dict { PACKAGE_PIN E25 IOSTANDARD LVCMOS33 } [get_ports { tmds_data_n[0] }];





connect_debug_port u_ila_0/probe35 [get_nets [list UART_Controller/tx/n_0_0]]

connect_debug_port u_ila_0/probe43 [get_nets [list UART_Controller/tx/r_busy]]


connect_debug_port u_ila_0/probe0 [get_nets [list {UART_Controller/txfifo/fifo4[0]} {UART_Controller/txfifo/fifo4[1]} {UART_Controller/txfifo/fifo4[2]} {UART_Controller/txfifo/fifo4[3]} {UART_Controller/txfifo/fifo4[4]} {UART_Controller/txfifo/fifo4[5]} {UART_Controller/txfifo/fifo4[6]} {UART_Controller/txfifo/fifo4[7]}]]
connect_debug_port u_ila_0/probe1 [get_nets [list {UART_Controller/txfifo/fifo0[0]} {UART_Controller/txfifo/fifo0[1]} {UART_Controller/txfifo/fifo0[2]} {UART_Controller/txfifo/fifo0[3]} {UART_Controller/txfifo/fifo0[4]} {UART_Controller/txfifo/fifo0[5]} {UART_Controller/txfifo/fifo0[6]} {UART_Controller/txfifo/fifo0[7]}]]
connect_debug_port u_ila_0/probe2 [get_nets [list {UART_Controller/txfifo/fifo1[0]} {UART_Controller/txfifo/fifo1[1]} {UART_Controller/txfifo/fifo1[2]} {UART_Controller/txfifo/fifo1[3]} {UART_Controller/txfifo/fifo1[4]} {UART_Controller/txfifo/fifo1[5]} {UART_Controller/txfifo/fifo1[6]} {UART_Controller/txfifo/fifo1[7]}]]
connect_debug_port u_ila_0/probe3 [get_nets [list {UART_Controller/txfifo/fifo2[0]} {UART_Controller/txfifo/fifo2[1]} {UART_Controller/txfifo/fifo2[2]} {UART_Controller/txfifo/fifo2[3]} {UART_Controller/txfifo/fifo2[4]} {UART_Controller/txfifo/fifo2[5]} {UART_Controller/txfifo/fifo2[6]} {UART_Controller/txfifo/fifo2[7]}]]
connect_debug_port u_ila_0/probe4 [get_nets [list {UART_Controller/txfifo/fifo3[0]} {UART_Controller/txfifo/fifo3[1]} {UART_Controller/txfifo/fifo3[2]} {UART_Controller/txfifo/fifo3[3]} {UART_Controller/txfifo/fifo3[4]} {UART_Controller/txfifo/fifo3[5]} {UART_Controller/txfifo/fifo3[6]} {UART_Controller/txfifo/fifo3[7]}]]
connect_debug_port u_ila_0/probe5 [get_nets [list {UART_Controller/txfifo/fifo6[0]} {UART_Controller/txfifo/fifo6[1]} {UART_Controller/txfifo/fifo6[2]} {UART_Controller/txfifo/fifo6[3]} {UART_Controller/txfifo/fifo6[4]} {UART_Controller/txfifo/fifo6[5]} {UART_Controller/txfifo/fifo6[6]} {UART_Controller/txfifo/fifo6[7]}]]
connect_debug_port u_ila_0/probe6 [get_nets [list {UART_Controller/txfifo/fifo5[0]} {UART_Controller/txfifo/fifo5[1]} {UART_Controller/txfifo/fifo5[2]} {UART_Controller/txfifo/fifo5[3]} {UART_Controller/txfifo/fifo5[4]} {UART_Controller/txfifo/fifo5[5]} {UART_Controller/txfifo/fifo5[6]} {UART_Controller/txfifo/fifo5[7]}]]
connect_debug_port u_ila_0/probe7 [get_nets [list {UART_Controller/rxfifo/fifo1[0]} {UART_Controller/rxfifo/fifo1[1]} {UART_Controller/rxfifo/fifo1[2]} {UART_Controller/rxfifo/fifo1[3]} {UART_Controller/rxfifo/fifo1[4]} {UART_Controller/rxfifo/fifo1[5]} {UART_Controller/rxfifo/fifo1[6]} {UART_Controller/rxfifo/fifo1[7]}]]
connect_debug_port u_ila_0/probe8 [get_nets [list {UART_Controller/rxfifo/i_data[0]} {UART_Controller/rxfifo/i_data[1]} {UART_Controller/rxfifo/i_data[2]} {UART_Controller/rxfifo/i_data[3]} {UART_Controller/rxfifo/i_data[4]} {UART_Controller/rxfifo/i_data[5]} {UART_Controller/rxfifo/i_data[6]} {UART_Controller/rxfifo/i_data[7]}]]
connect_debug_port u_ila_0/probe9 [get_nets [list {UART_Controller/rxfifo/o_data[0]} {UART_Controller/rxfifo/o_data[1]} {UART_Controller/rxfifo/o_data[2]} {UART_Controller/rxfifo/o_data[3]} {UART_Controller/rxfifo/o_data[4]} {UART_Controller/rxfifo/o_data[5]} {UART_Controller/rxfifo/o_data[6]} {UART_Controller/rxfifo/o_data[7]}]]
connect_debug_port u_ila_0/probe10 [get_nets [list {UART_Controller/rxfifo/o_status[0]} {UART_Controller/rxfifo/o_status[1]} {UART_Controller/rxfifo/o_status[2]} {UART_Controller/rxfifo/o_status[3]} {UART_Controller/rxfifo/o_status[4]} {UART_Controller/rxfifo/o_status[5]} {UART_Controller/rxfifo/o_status[6]} {UART_Controller/rxfifo/o_status[7]} {UART_Controller/rxfifo/o_status[8]} {UART_Controller/rxfifo/o_status[9]} {UART_Controller/rxfifo/o_status[10]} {UART_Controller/rxfifo/o_status[11]} {UART_Controller/rxfifo/o_status[12]} {UART_Controller/rxfifo/o_status[13]} {UART_Controller/rxfifo/o_status[14]} {UART_Controller/rxfifo/o_status[15]}]]
connect_debug_port u_ila_0/probe12 [get_nets [list {UART_Controller/rxfifo/fifo2[0]} {UART_Controller/rxfifo/fifo2[1]} {UART_Controller/rxfifo/fifo2[2]} {UART_Controller/rxfifo/fifo2[3]} {UART_Controller/rxfifo/fifo2[4]} {UART_Controller/rxfifo/fifo2[5]} {UART_Controller/rxfifo/fifo2[6]} {UART_Controller/rxfifo/fifo2[7]}]]
connect_debug_port u_ila_0/probe13 [get_nets [list {UART_Controller/rxfifo/fifo3[0]} {UART_Controller/rxfifo/fifo3[1]} {UART_Controller/rxfifo/fifo3[2]} {UART_Controller/rxfifo/fifo3[3]} {UART_Controller/rxfifo/fifo3[4]} {UART_Controller/rxfifo/fifo3[5]} {UART_Controller/rxfifo/fifo3[6]} {UART_Controller/rxfifo/fifo3[7]}]]
connect_debug_port u_ila_0/probe15 [get_nets [list {UART_Controller/txfifo/o_status[0]} {UART_Controller/txfifo/o_status[1]} {UART_Controller/txfifo/o_status[2]} {UART_Controller/txfifo/o_status[3]} {UART_Controller/txfifo/o_status[4]} {UART_Controller/txfifo/o_status[5]} {UART_Controller/txfifo/o_status[6]} {UART_Controller/txfifo/o_status[7]} {UART_Controller/txfifo/o_status[8]} {UART_Controller/txfifo/o_status[9]} {UART_Controller/txfifo/o_status[10]} {UART_Controller/txfifo/o_status[11]} {UART_Controller/txfifo/o_status[12]} {UART_Controller/txfifo/o_status[13]} {UART_Controller/txfifo/o_status[14]} {UART_Controller/txfifo/o_status[15]}]]
connect_debug_port u_ila_0/probe16 [get_nets [list {UART_Controller/txfifo/fifo7[0]} {UART_Controller/txfifo/fifo7[1]} {UART_Controller/txfifo/fifo7[2]} {UART_Controller/txfifo/fifo7[3]} {UART_Controller/txfifo/fifo7[4]} {UART_Controller/txfifo/fifo7[5]} {UART_Controller/txfifo/fifo7[6]} {UART_Controller/txfifo/fifo7[7]}]]
connect_debug_port u_ila_0/probe18 [get_nets [list {UART_Controller/txfifo/o_data[0]} {UART_Controller/txfifo/o_data[1]} {UART_Controller/txfifo/o_data[2]} {UART_Controller/txfifo/o_data[3]} {UART_Controller/txfifo/o_data[4]} {UART_Controller/txfifo/o_data[5]} {UART_Controller/txfifo/o_data[6]} {UART_Controller/txfifo/o_data[7]}]]
connect_debug_port u_ila_0/probe20 [get_nets [list {UART_Controller/rxfifo/fifo6[0]} {UART_Controller/rxfifo/fifo6[1]} {UART_Controller/rxfifo/fifo6[2]} {UART_Controller/rxfifo/fifo6[3]} {UART_Controller/rxfifo/fifo6[4]} {UART_Controller/rxfifo/fifo6[5]} {UART_Controller/rxfifo/fifo6[6]} {UART_Controller/rxfifo/fifo6[7]}]]
connect_debug_port u_ila_0/probe21 [get_nets [list {UART_Controller/rxfifo/fifo4[0]} {UART_Controller/rxfifo/fifo4[1]} {UART_Controller/rxfifo/fifo4[2]} {UART_Controller/rxfifo/fifo4[3]} {UART_Controller/rxfifo/fifo4[4]} {UART_Controller/rxfifo/fifo4[5]} {UART_Controller/rxfifo/fifo4[6]} {UART_Controller/rxfifo/fifo4[7]}]]
connect_debug_port u_ila_0/probe22 [get_nets [list {UART_Controller/rxfifo/fifo5[0]} {UART_Controller/rxfifo/fifo5[1]} {UART_Controller/rxfifo/fifo5[2]} {UART_Controller/rxfifo/fifo5[3]} {UART_Controller/rxfifo/fifo5[4]} {UART_Controller/rxfifo/fifo5[5]} {UART_Controller/rxfifo/fifo5[6]} {UART_Controller/rxfifo/fifo5[7]}]]
connect_debug_port u_ila_0/probe26 [get_nets [list {UART_Controller/rxfifo/fifo7[0]} {UART_Controller/rxfifo/fifo7[1]} {UART_Controller/rxfifo/fifo7[2]} {UART_Controller/rxfifo/fifo7[3]} {UART_Controller/rxfifo/fifo7[4]} {UART_Controller/rxfifo/fifo7[5]} {UART_Controller/rxfifo/fifo7[6]} {UART_Controller/rxfifo/fifo7[7]}]]
connect_debug_port u_ila_0/probe27 [get_nets [list {UART_Controller/rxfifo/fifo0[0]} {UART_Controller/rxfifo/fifo0[1]} {UART_Controller/rxfifo/fifo0[2]} {UART_Controller/rxfifo/fifo0[3]} {UART_Controller/rxfifo/fifo0[4]} {UART_Controller/rxfifo/fifo0[5]} {UART_Controller/rxfifo/fifo0[6]} {UART_Controller/rxfifo/fifo0[7]}]]
connect_debug_port u_ila_0/probe31 [get_nets [list UART_Controller/rxfifo/i_rd]]
connect_debug_port u_ila_0/probe32 [get_nets [list UART_Controller/txfifo/i_rd]]
connect_debug_port u_ila_0/probe38 [get_nets [list UART_Controller/rxfifo/i_wr]]
connect_debug_port u_ila_0/probe41 [get_nets [list UART_Controller/rxfifo/o_empty_n]]
connect_debug_port u_ila_0/probe42 [get_nets [list UART_Controller/txfifo/o_empty_n]]
connect_debug_port u_ila_0/probe43 [get_nets [list UART_Controller/txfifo/o_err]]
connect_debug_port u_ila_0/probe44 [get_nets [list UART_Controller/rxfifo/o_err]]

create_debug_core u_ila_0 ila
set_property ALL_PROBE_SAME_MU true [get_debug_cores u_ila_0]
set_property ALL_PROBE_SAME_MU_CNT 1 [get_debug_cores u_ila_0]
set_property C_ADV_TRIGGER false [get_debug_cores u_ila_0]
set_property C_DATA_DEPTH 1024 [get_debug_cores u_ila_0]
set_property C_EN_STRG_QUAL false [get_debug_cores u_ila_0]
set_property C_INPUT_PIPE_STAGES 0 [get_debug_cores u_ila_0]
set_property C_TRIGIN_EN false [get_debug_cores u_ila_0]
set_property C_TRIGOUT_EN false [get_debug_cores u_ila_0]
set_property port_width 1 [get_debug_ports u_ila_0/clk]
connect_debug_port u_ila_0/clk [get_nets [list Clock_Generator/inst/clk_out1]]
set_property PROBE_TYPE DATA_AND_TRIGGER [get_debug_ports u_ila_0/probe0]
set_property port_width 1 [get_debug_ports u_ila_0/probe0]
connect_debug_port u_ila_0/probe0 [get_nets [list uart_sel]]
set_property C_CLK_INPUT_FREQ_HZ 300000000 [get_debug_cores dbg_hub]
set_property C_ENABLE_CLK_DIVIDER false [get_debug_cores dbg_hub]
set_property C_USER_SCAN_CHAIN 1 [get_debug_cores dbg_hub]
connect_debug_port dbg_hub/clk [get_nets clk]
