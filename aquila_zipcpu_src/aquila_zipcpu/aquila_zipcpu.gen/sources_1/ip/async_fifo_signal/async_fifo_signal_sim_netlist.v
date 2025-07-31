// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2024.2 (lin64) Build 5239630 Fri Nov 08 22:34:34 MST 2024
// Date        : Fri Jul 25 22:49:22 2025
// Host        : henry7090-ROG-Zephyrus-G16 running 64-bit Ubuntu 24.04.1 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/henry7090/Desktop/Aquila_wishbone/hw/aquila_zipcpu_src/aquila_zipcpu/aquila_zipcpu.gen/sources_1/ip/async_fifo_signal/async_fifo_signal_sim_netlist.v
// Design      : async_fifo_signal
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7k325tffg676-2
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "async_fifo_signal,fifo_generator_v13_2_11,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "fifo_generator_v13_2_11,Vivado 2024.2" *) 
(* NotValidForBitStream *)
module async_fifo_signal
   (wr_clk,
    rd_clk,
    din,
    wr_en,
    rd_en,
    dout,
    full,
    empty);
  (* x_interface_info = "xilinx.com:signal:clock:1.0 write_clk CLK" *) (* x_interface_mode = "slave write_clk" *) (* x_interface_parameter = "XIL_INTERFACENAME write_clk, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, INSERT_VIP 0" *) input wr_clk;
  (* x_interface_info = "xilinx.com:signal:clock:1.0 read_clk CLK" *) (* x_interface_mode = "slave read_clk" *) (* x_interface_parameter = "XIL_INTERFACENAME read_clk, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, INSERT_VIP 0" *) input rd_clk;
  (* x_interface_info = "xilinx.com:interface:fifo_write:1.0 FIFO_WRITE WR_DATA" *) (* x_interface_mode = "slave FIFO_WRITE" *) input [0:0]din;
  (* x_interface_info = "xilinx.com:interface:fifo_write:1.0 FIFO_WRITE WR_EN" *) input wr_en;
  (* x_interface_info = "xilinx.com:interface:fifo_read:1.0 FIFO_READ RD_EN" *) (* x_interface_mode = "slave FIFO_READ" *) input rd_en;
  (* x_interface_info = "xilinx.com:interface:fifo_read:1.0 FIFO_READ RD_DATA" *) output [0:0]dout;
  (* x_interface_info = "xilinx.com:interface:fifo_write:1.0 FIFO_WRITE FULL" *) output full;
  (* x_interface_info = "xilinx.com:interface:fifo_read:1.0 FIFO_READ EMPTY" *) output empty;

  wire [0:0]din;
  wire [0:0]dout;
  wire empty;
  wire full;
  wire rd_clk;
  wire rd_en;
  wire wr_clk;
  wire wr_en;
  wire NLW_U0_almost_empty_UNCONNECTED;
  wire NLW_U0_almost_full_UNCONNECTED;
  wire NLW_U0_axi_ar_dbiterr_UNCONNECTED;
  wire NLW_U0_axi_ar_overflow_UNCONNECTED;
  wire NLW_U0_axi_ar_prog_empty_UNCONNECTED;
  wire NLW_U0_axi_ar_prog_full_UNCONNECTED;
  wire NLW_U0_axi_ar_sbiterr_UNCONNECTED;
  wire NLW_U0_axi_ar_underflow_UNCONNECTED;
  wire NLW_U0_axi_aw_dbiterr_UNCONNECTED;
  wire NLW_U0_axi_aw_overflow_UNCONNECTED;
  wire NLW_U0_axi_aw_prog_empty_UNCONNECTED;
  wire NLW_U0_axi_aw_prog_full_UNCONNECTED;
  wire NLW_U0_axi_aw_sbiterr_UNCONNECTED;
  wire NLW_U0_axi_aw_underflow_UNCONNECTED;
  wire NLW_U0_axi_b_dbiterr_UNCONNECTED;
  wire NLW_U0_axi_b_overflow_UNCONNECTED;
  wire NLW_U0_axi_b_prog_empty_UNCONNECTED;
  wire NLW_U0_axi_b_prog_full_UNCONNECTED;
  wire NLW_U0_axi_b_sbiterr_UNCONNECTED;
  wire NLW_U0_axi_b_underflow_UNCONNECTED;
  wire NLW_U0_axi_r_dbiterr_UNCONNECTED;
  wire NLW_U0_axi_r_overflow_UNCONNECTED;
  wire NLW_U0_axi_r_prog_empty_UNCONNECTED;
  wire NLW_U0_axi_r_prog_full_UNCONNECTED;
  wire NLW_U0_axi_r_sbiterr_UNCONNECTED;
  wire NLW_U0_axi_r_underflow_UNCONNECTED;
  wire NLW_U0_axi_w_dbiterr_UNCONNECTED;
  wire NLW_U0_axi_w_overflow_UNCONNECTED;
  wire NLW_U0_axi_w_prog_empty_UNCONNECTED;
  wire NLW_U0_axi_w_prog_full_UNCONNECTED;
  wire NLW_U0_axi_w_sbiterr_UNCONNECTED;
  wire NLW_U0_axi_w_underflow_UNCONNECTED;
  wire NLW_U0_axis_dbiterr_UNCONNECTED;
  wire NLW_U0_axis_overflow_UNCONNECTED;
  wire NLW_U0_axis_prog_empty_UNCONNECTED;
  wire NLW_U0_axis_prog_full_UNCONNECTED;
  wire NLW_U0_axis_sbiterr_UNCONNECTED;
  wire NLW_U0_axis_underflow_UNCONNECTED;
  wire NLW_U0_dbiterr_UNCONNECTED;
  wire NLW_U0_m_axi_arvalid_UNCONNECTED;
  wire NLW_U0_m_axi_awvalid_UNCONNECTED;
  wire NLW_U0_m_axi_bready_UNCONNECTED;
  wire NLW_U0_m_axi_rready_UNCONNECTED;
  wire NLW_U0_m_axi_wlast_UNCONNECTED;
  wire NLW_U0_m_axi_wvalid_UNCONNECTED;
  wire NLW_U0_m_axis_tlast_UNCONNECTED;
  wire NLW_U0_m_axis_tvalid_UNCONNECTED;
  wire NLW_U0_overflow_UNCONNECTED;
  wire NLW_U0_prog_empty_UNCONNECTED;
  wire NLW_U0_prog_full_UNCONNECTED;
  wire NLW_U0_rd_rst_busy_UNCONNECTED;
  wire NLW_U0_s_axi_arready_UNCONNECTED;
  wire NLW_U0_s_axi_awready_UNCONNECTED;
  wire NLW_U0_s_axi_bvalid_UNCONNECTED;
  wire NLW_U0_s_axi_rlast_UNCONNECTED;
  wire NLW_U0_s_axi_rvalid_UNCONNECTED;
  wire NLW_U0_s_axi_wready_UNCONNECTED;
  wire NLW_U0_s_axis_tready_UNCONNECTED;
  wire NLW_U0_sbiterr_UNCONNECTED;
  wire NLW_U0_underflow_UNCONNECTED;
  wire NLW_U0_valid_UNCONNECTED;
  wire NLW_U0_wr_ack_UNCONNECTED;
  wire NLW_U0_wr_rst_busy_UNCONNECTED;
  wire [4:0]NLW_U0_axi_ar_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_ar_rd_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_ar_wr_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_aw_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_aw_rd_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_aw_wr_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_b_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_b_rd_data_count_UNCONNECTED;
  wire [4:0]NLW_U0_axi_b_wr_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axi_r_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axi_r_rd_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axi_r_wr_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axi_w_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axi_w_rd_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axi_w_wr_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axis_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axis_rd_data_count_UNCONNECTED;
  wire [10:0]NLW_U0_axis_wr_data_count_UNCONNECTED;
  wire [3:0]NLW_U0_data_count_UNCONNECTED;
  wire [31:0]NLW_U0_m_axi_araddr_UNCONNECTED;
  wire [1:0]NLW_U0_m_axi_arburst_UNCONNECTED;
  wire [3:0]NLW_U0_m_axi_arcache_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_arid_UNCONNECTED;
  wire [7:0]NLW_U0_m_axi_arlen_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_arlock_UNCONNECTED;
  wire [2:0]NLW_U0_m_axi_arprot_UNCONNECTED;
  wire [3:0]NLW_U0_m_axi_arqos_UNCONNECTED;
  wire [3:0]NLW_U0_m_axi_arregion_UNCONNECTED;
  wire [2:0]NLW_U0_m_axi_arsize_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_aruser_UNCONNECTED;
  wire [31:0]NLW_U0_m_axi_awaddr_UNCONNECTED;
  wire [1:0]NLW_U0_m_axi_awburst_UNCONNECTED;
  wire [3:0]NLW_U0_m_axi_awcache_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_awid_UNCONNECTED;
  wire [7:0]NLW_U0_m_axi_awlen_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_awlock_UNCONNECTED;
  wire [2:0]NLW_U0_m_axi_awprot_UNCONNECTED;
  wire [3:0]NLW_U0_m_axi_awqos_UNCONNECTED;
  wire [3:0]NLW_U0_m_axi_awregion_UNCONNECTED;
  wire [2:0]NLW_U0_m_axi_awsize_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_awuser_UNCONNECTED;
  wire [63:0]NLW_U0_m_axi_wdata_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_wid_UNCONNECTED;
  wire [7:0]NLW_U0_m_axi_wstrb_UNCONNECTED;
  wire [0:0]NLW_U0_m_axi_wuser_UNCONNECTED;
  wire [7:0]NLW_U0_m_axis_tdata_UNCONNECTED;
  wire [0:0]NLW_U0_m_axis_tdest_UNCONNECTED;
  wire [0:0]NLW_U0_m_axis_tid_UNCONNECTED;
  wire [0:0]NLW_U0_m_axis_tkeep_UNCONNECTED;
  wire [0:0]NLW_U0_m_axis_tstrb_UNCONNECTED;
  wire [3:0]NLW_U0_m_axis_tuser_UNCONNECTED;
  wire [3:0]NLW_U0_rd_data_count_UNCONNECTED;
  wire [0:0]NLW_U0_s_axi_bid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_bresp_UNCONNECTED;
  wire [0:0]NLW_U0_s_axi_buser_UNCONNECTED;
  wire [63:0]NLW_U0_s_axi_rdata_UNCONNECTED;
  wire [0:0]NLW_U0_s_axi_rid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_rresp_UNCONNECTED;
  wire [0:0]NLW_U0_s_axi_ruser_UNCONNECTED;
  wire [3:0]NLW_U0_wr_data_count_UNCONNECTED;

  (* C_ADD_NGC_CONSTRAINT = "0" *) 
  (* C_APPLICATION_TYPE_AXIS = "0" *) 
  (* C_APPLICATION_TYPE_RACH = "0" *) 
  (* C_APPLICATION_TYPE_RDCH = "0" *) 
  (* C_APPLICATION_TYPE_WACH = "0" *) 
  (* C_APPLICATION_TYPE_WDCH = "0" *) 
  (* C_APPLICATION_TYPE_WRCH = "0" *) 
  (* C_AXIS_TDATA_WIDTH = "8" *) 
  (* C_AXIS_TDEST_WIDTH = "1" *) 
  (* C_AXIS_TID_WIDTH = "1" *) 
  (* C_AXIS_TKEEP_WIDTH = "1" *) 
  (* C_AXIS_TSTRB_WIDTH = "1" *) 
  (* C_AXIS_TUSER_WIDTH = "4" *) 
  (* C_AXIS_TYPE = "0" *) 
  (* C_AXI_ADDR_WIDTH = "32" *) 
  (* C_AXI_ARUSER_WIDTH = "1" *) 
  (* C_AXI_AWUSER_WIDTH = "1" *) 
  (* C_AXI_BUSER_WIDTH = "1" *) 
  (* C_AXI_DATA_WIDTH = "64" *) 
  (* C_AXI_ID_WIDTH = "1" *) 
  (* C_AXI_LEN_WIDTH = "8" *) 
  (* C_AXI_LOCK_WIDTH = "1" *) 
  (* C_AXI_RUSER_WIDTH = "1" *) 
  (* C_AXI_TYPE = "1" *) 
  (* C_AXI_WUSER_WIDTH = "1" *) 
  (* C_COMMON_CLOCK = "0" *) 
  (* C_COUNT_TYPE = "0" *) 
  (* C_DATA_COUNT_WIDTH = "4" *) 
  (* C_DEFAULT_VALUE = "BlankString" *) 
  (* C_DIN_WIDTH = "1" *) 
  (* C_DIN_WIDTH_AXIS = "1" *) 
  (* C_DIN_WIDTH_RACH = "32" *) 
  (* C_DIN_WIDTH_RDCH = "64" *) 
  (* C_DIN_WIDTH_WACH = "1" *) 
  (* C_DIN_WIDTH_WDCH = "64" *) 
  (* C_DIN_WIDTH_WRCH = "2" *) 
  (* C_DOUT_RST_VAL = "0" *) 
  (* C_DOUT_WIDTH = "1" *) 
  (* C_ENABLE_RLOCS = "0" *) 
  (* C_ENABLE_RST_SYNC = "1" *) 
  (* C_EN_SAFETY_CKT = "0" *) 
  (* C_ERROR_INJECTION_TYPE = "0" *) 
  (* C_ERROR_INJECTION_TYPE_AXIS = "0" *) 
  (* C_ERROR_INJECTION_TYPE_RACH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_RDCH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_WACH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_WDCH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_WRCH = "0" *) 
  (* C_FAMILY = "kintex7" *) 
  (* C_FULL_FLAGS_RST_VAL = "0" *) 
  (* C_HAS_ALMOST_EMPTY = "0" *) 
  (* C_HAS_ALMOST_FULL = "0" *) 
  (* C_HAS_AXIS_TDATA = "1" *) 
  (* C_HAS_AXIS_TDEST = "0" *) 
  (* C_HAS_AXIS_TID = "0" *) 
  (* C_HAS_AXIS_TKEEP = "0" *) 
  (* C_HAS_AXIS_TLAST = "0" *) 
  (* C_HAS_AXIS_TREADY = "1" *) 
  (* C_HAS_AXIS_TSTRB = "0" *) 
  (* C_HAS_AXIS_TUSER = "1" *) 
  (* C_HAS_AXI_ARUSER = "0" *) 
  (* C_HAS_AXI_AWUSER = "0" *) 
  (* C_HAS_AXI_BUSER = "0" *) 
  (* C_HAS_AXI_ID = "0" *) 
  (* C_HAS_AXI_RD_CHANNEL = "1" *) 
  (* C_HAS_AXI_RUSER = "0" *) 
  (* C_HAS_AXI_WR_CHANNEL = "1" *) 
  (* C_HAS_AXI_WUSER = "0" *) 
  (* C_HAS_BACKUP = "0" *) 
  (* C_HAS_DATA_COUNT = "0" *) 
  (* C_HAS_DATA_COUNTS_AXIS = "0" *) 
  (* C_HAS_DATA_COUNTS_RACH = "0" *) 
  (* C_HAS_DATA_COUNTS_RDCH = "0" *) 
  (* C_HAS_DATA_COUNTS_WACH = "0" *) 
  (* C_HAS_DATA_COUNTS_WDCH = "0" *) 
  (* C_HAS_DATA_COUNTS_WRCH = "0" *) 
  (* C_HAS_INT_CLK = "0" *) 
  (* C_HAS_MASTER_CE = "0" *) 
  (* C_HAS_MEMINIT_FILE = "0" *) 
  (* C_HAS_OVERFLOW = "0" *) 
  (* C_HAS_PROG_FLAGS_AXIS = "0" *) 
  (* C_HAS_PROG_FLAGS_RACH = "0" *) 
  (* C_HAS_PROG_FLAGS_RDCH = "0" *) 
  (* C_HAS_PROG_FLAGS_WACH = "0" *) 
  (* C_HAS_PROG_FLAGS_WDCH = "0" *) 
  (* C_HAS_PROG_FLAGS_WRCH = "0" *) 
  (* C_HAS_RD_DATA_COUNT = "0" *) 
  (* C_HAS_RD_RST = "0" *) 
  (* C_HAS_RST = "0" *) 
  (* C_HAS_SLAVE_CE = "0" *) 
  (* C_HAS_SRST = "0" *) 
  (* C_HAS_UNDERFLOW = "0" *) 
  (* C_HAS_VALID = "0" *) 
  (* C_HAS_WR_ACK = "0" *) 
  (* C_HAS_WR_DATA_COUNT = "0" *) 
  (* C_HAS_WR_RST = "0" *) 
  (* C_IMPLEMENTATION_TYPE = "2" *) 
  (* C_IMPLEMENTATION_TYPE_AXIS = "1" *) 
  (* C_IMPLEMENTATION_TYPE_RACH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_RDCH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_WACH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_WDCH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_WRCH = "1" *) 
  (* C_INIT_WR_PNTR_VAL = "0" *) 
  (* C_INTERFACE_TYPE = "0" *) 
  (* C_MEMORY_TYPE = "2" *) 
  (* C_MIF_FILE_NAME = "BlankString" *) 
  (* C_MSGON_VAL = "1" *) 
  (* C_OPTIMIZATION_MODE = "0" *) 
  (* C_OVERFLOW_LOW = "0" *) 
  (* C_POWER_SAVING_MODE = "0" *) 
  (* C_PRELOAD_LATENCY = "0" *) 
  (* C_PRELOAD_REGS = "1" *) 
  (* C_PRIM_FIFO_TYPE = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_AXIS = "1kx18" *) 
  (* C_PRIM_FIFO_TYPE_RACH = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_RDCH = "1kx36" *) 
  (* C_PRIM_FIFO_TYPE_WACH = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_WDCH = "1kx36" *) 
  (* C_PRIM_FIFO_TYPE_WRCH = "512x36" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL = "4" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_AXIS = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_RACH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_RDCH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WACH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WDCH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WRCH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_NEGATE_VAL = "5" *) 
  (* C_PROG_EMPTY_TYPE = "0" *) 
  (* C_PROG_EMPTY_TYPE_AXIS = "0" *) 
  (* C_PROG_EMPTY_TYPE_RACH = "0" *) 
  (* C_PROG_EMPTY_TYPE_RDCH = "0" *) 
  (* C_PROG_EMPTY_TYPE_WACH = "0" *) 
  (* C_PROG_EMPTY_TYPE_WDCH = "0" *) 
  (* C_PROG_EMPTY_TYPE_WRCH = "0" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL = "15" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_AXIS = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_RACH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_RDCH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_WACH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_WDCH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_WRCH = "1023" *) 
  (* C_PROG_FULL_THRESH_NEGATE_VAL = "14" *) 
  (* C_PROG_FULL_TYPE = "0" *) 
  (* C_PROG_FULL_TYPE_AXIS = "0" *) 
  (* C_PROG_FULL_TYPE_RACH = "0" *) 
  (* C_PROG_FULL_TYPE_RDCH = "0" *) 
  (* C_PROG_FULL_TYPE_WACH = "0" *) 
  (* C_PROG_FULL_TYPE_WDCH = "0" *) 
  (* C_PROG_FULL_TYPE_WRCH = "0" *) 
  (* C_RACH_TYPE = "0" *) 
  (* C_RDCH_TYPE = "0" *) 
  (* C_RD_DATA_COUNT_WIDTH = "4" *) 
  (* C_RD_DEPTH = "16" *) 
  (* C_RD_FREQ = "1" *) 
  (* C_RD_PNTR_WIDTH = "4" *) 
  (* C_REG_SLICE_MODE_AXIS = "0" *) 
  (* C_REG_SLICE_MODE_RACH = "0" *) 
  (* C_REG_SLICE_MODE_RDCH = "0" *) 
  (* C_REG_SLICE_MODE_WACH = "0" *) 
  (* C_REG_SLICE_MODE_WDCH = "0" *) 
  (* C_REG_SLICE_MODE_WRCH = "0" *) 
  (* C_SELECT_XPM = "0" *) 
  (* C_SYNCHRONIZER_STAGE = "3" *) 
  (* C_UNDERFLOW_LOW = "0" *) 
  (* C_USE_COMMON_OVERFLOW = "0" *) 
  (* C_USE_COMMON_UNDERFLOW = "0" *) 
  (* C_USE_DEFAULT_SETTINGS = "0" *) 
  (* C_USE_DOUT_RST = "0" *) 
  (* C_USE_ECC = "0" *) 
  (* C_USE_ECC_AXIS = "0" *) 
  (* C_USE_ECC_RACH = "0" *) 
  (* C_USE_ECC_RDCH = "0" *) 
  (* C_USE_ECC_WACH = "0" *) 
  (* C_USE_ECC_WDCH = "0" *) 
  (* C_USE_ECC_WRCH = "0" *) 
  (* C_USE_EMBEDDED_REG = "0" *) 
  (* C_USE_FIFO16_FLAGS = "0" *) 
  (* C_USE_FWFT_DATA_COUNT = "0" *) 
  (* C_USE_PIPELINE_REG = "0" *) 
  (* C_VALID_LOW = "0" *) 
  (* C_WACH_TYPE = "0" *) 
  (* C_WDCH_TYPE = "0" *) 
  (* C_WRCH_TYPE = "0" *) 
  (* C_WR_ACK_LOW = "0" *) 
  (* C_WR_DATA_COUNT_WIDTH = "4" *) 
  (* C_WR_DEPTH = "16" *) 
  (* C_WR_DEPTH_AXIS = "1024" *) 
  (* C_WR_DEPTH_RACH = "16" *) 
  (* C_WR_DEPTH_RDCH = "1024" *) 
  (* C_WR_DEPTH_WACH = "16" *) 
  (* C_WR_DEPTH_WDCH = "1024" *) 
  (* C_WR_DEPTH_WRCH = "16" *) 
  (* C_WR_FREQ = "1" *) 
  (* C_WR_PNTR_WIDTH = "4" *) 
  (* C_WR_PNTR_WIDTH_AXIS = "10" *) 
  (* C_WR_PNTR_WIDTH_RACH = "4" *) 
  (* C_WR_PNTR_WIDTH_RDCH = "10" *) 
  (* C_WR_PNTR_WIDTH_WACH = "4" *) 
  (* C_WR_PNTR_WIDTH_WDCH = "10" *) 
  (* C_WR_PNTR_WIDTH_WRCH = "4" *) 
  (* C_WR_RESPONSE_LATENCY = "1" *) 
  (* is_du_within_envelope = "true" *) 
  async_fifo_signal_fifo_generator_v13_2_11 U0
       (.almost_empty(NLW_U0_almost_empty_UNCONNECTED),
        .almost_full(NLW_U0_almost_full_UNCONNECTED),
        .axi_ar_data_count(NLW_U0_axi_ar_data_count_UNCONNECTED[4:0]),
        .axi_ar_dbiterr(NLW_U0_axi_ar_dbiterr_UNCONNECTED),
        .axi_ar_injectdbiterr(1'b0),
        .axi_ar_injectsbiterr(1'b0),
        .axi_ar_overflow(NLW_U0_axi_ar_overflow_UNCONNECTED),
        .axi_ar_prog_empty(NLW_U0_axi_ar_prog_empty_UNCONNECTED),
        .axi_ar_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_ar_prog_full(NLW_U0_axi_ar_prog_full_UNCONNECTED),
        .axi_ar_prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_ar_rd_data_count(NLW_U0_axi_ar_rd_data_count_UNCONNECTED[4:0]),
        .axi_ar_sbiterr(NLW_U0_axi_ar_sbiterr_UNCONNECTED),
        .axi_ar_underflow(NLW_U0_axi_ar_underflow_UNCONNECTED),
        .axi_ar_wr_data_count(NLW_U0_axi_ar_wr_data_count_UNCONNECTED[4:0]),
        .axi_aw_data_count(NLW_U0_axi_aw_data_count_UNCONNECTED[4:0]),
        .axi_aw_dbiterr(NLW_U0_axi_aw_dbiterr_UNCONNECTED),
        .axi_aw_injectdbiterr(1'b0),
        .axi_aw_injectsbiterr(1'b0),
        .axi_aw_overflow(NLW_U0_axi_aw_overflow_UNCONNECTED),
        .axi_aw_prog_empty(NLW_U0_axi_aw_prog_empty_UNCONNECTED),
        .axi_aw_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_aw_prog_full(NLW_U0_axi_aw_prog_full_UNCONNECTED),
        .axi_aw_prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_aw_rd_data_count(NLW_U0_axi_aw_rd_data_count_UNCONNECTED[4:0]),
        .axi_aw_sbiterr(NLW_U0_axi_aw_sbiterr_UNCONNECTED),
        .axi_aw_underflow(NLW_U0_axi_aw_underflow_UNCONNECTED),
        .axi_aw_wr_data_count(NLW_U0_axi_aw_wr_data_count_UNCONNECTED[4:0]),
        .axi_b_data_count(NLW_U0_axi_b_data_count_UNCONNECTED[4:0]),
        .axi_b_dbiterr(NLW_U0_axi_b_dbiterr_UNCONNECTED),
        .axi_b_injectdbiterr(1'b0),
        .axi_b_injectsbiterr(1'b0),
        .axi_b_overflow(NLW_U0_axi_b_overflow_UNCONNECTED),
        .axi_b_prog_empty(NLW_U0_axi_b_prog_empty_UNCONNECTED),
        .axi_b_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_b_prog_full(NLW_U0_axi_b_prog_full_UNCONNECTED),
        .axi_b_prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_b_rd_data_count(NLW_U0_axi_b_rd_data_count_UNCONNECTED[4:0]),
        .axi_b_sbiterr(NLW_U0_axi_b_sbiterr_UNCONNECTED),
        .axi_b_underflow(NLW_U0_axi_b_underflow_UNCONNECTED),
        .axi_b_wr_data_count(NLW_U0_axi_b_wr_data_count_UNCONNECTED[4:0]),
        .axi_r_data_count(NLW_U0_axi_r_data_count_UNCONNECTED[10:0]),
        .axi_r_dbiterr(NLW_U0_axi_r_dbiterr_UNCONNECTED),
        .axi_r_injectdbiterr(1'b0),
        .axi_r_injectsbiterr(1'b0),
        .axi_r_overflow(NLW_U0_axi_r_overflow_UNCONNECTED),
        .axi_r_prog_empty(NLW_U0_axi_r_prog_empty_UNCONNECTED),
        .axi_r_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_r_prog_full(NLW_U0_axi_r_prog_full_UNCONNECTED),
        .axi_r_prog_full_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_r_rd_data_count(NLW_U0_axi_r_rd_data_count_UNCONNECTED[10:0]),
        .axi_r_sbiterr(NLW_U0_axi_r_sbiterr_UNCONNECTED),
        .axi_r_underflow(NLW_U0_axi_r_underflow_UNCONNECTED),
        .axi_r_wr_data_count(NLW_U0_axi_r_wr_data_count_UNCONNECTED[10:0]),
        .axi_w_data_count(NLW_U0_axi_w_data_count_UNCONNECTED[10:0]),
        .axi_w_dbiterr(NLW_U0_axi_w_dbiterr_UNCONNECTED),
        .axi_w_injectdbiterr(1'b0),
        .axi_w_injectsbiterr(1'b0),
        .axi_w_overflow(NLW_U0_axi_w_overflow_UNCONNECTED),
        .axi_w_prog_empty(NLW_U0_axi_w_prog_empty_UNCONNECTED),
        .axi_w_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_w_prog_full(NLW_U0_axi_w_prog_full_UNCONNECTED),
        .axi_w_prog_full_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_w_rd_data_count(NLW_U0_axi_w_rd_data_count_UNCONNECTED[10:0]),
        .axi_w_sbiterr(NLW_U0_axi_w_sbiterr_UNCONNECTED),
        .axi_w_underflow(NLW_U0_axi_w_underflow_UNCONNECTED),
        .axi_w_wr_data_count(NLW_U0_axi_w_wr_data_count_UNCONNECTED[10:0]),
        .axis_data_count(NLW_U0_axis_data_count_UNCONNECTED[10:0]),
        .axis_dbiterr(NLW_U0_axis_dbiterr_UNCONNECTED),
        .axis_injectdbiterr(1'b0),
        .axis_injectsbiterr(1'b0),
        .axis_overflow(NLW_U0_axis_overflow_UNCONNECTED),
        .axis_prog_empty(NLW_U0_axis_prog_empty_UNCONNECTED),
        .axis_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axis_prog_full(NLW_U0_axis_prog_full_UNCONNECTED),
        .axis_prog_full_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axis_rd_data_count(NLW_U0_axis_rd_data_count_UNCONNECTED[10:0]),
        .axis_sbiterr(NLW_U0_axis_sbiterr_UNCONNECTED),
        .axis_underflow(NLW_U0_axis_underflow_UNCONNECTED),
        .axis_wr_data_count(NLW_U0_axis_wr_data_count_UNCONNECTED[10:0]),
        .backup(1'b0),
        .backup_marker(1'b0),
        .clk(1'b0),
        .data_count(NLW_U0_data_count_UNCONNECTED[3:0]),
        .dbiterr(NLW_U0_dbiterr_UNCONNECTED),
        .din(din),
        .dout(dout),
        .empty(empty),
        .full(full),
        .injectdbiterr(1'b0),
        .injectsbiterr(1'b0),
        .int_clk(1'b0),
        .m_aclk(1'b0),
        .m_aclk_en(1'b0),
        .m_axi_araddr(NLW_U0_m_axi_araddr_UNCONNECTED[31:0]),
        .m_axi_arburst(NLW_U0_m_axi_arburst_UNCONNECTED[1:0]),
        .m_axi_arcache(NLW_U0_m_axi_arcache_UNCONNECTED[3:0]),
        .m_axi_arid(NLW_U0_m_axi_arid_UNCONNECTED[0]),
        .m_axi_arlen(NLW_U0_m_axi_arlen_UNCONNECTED[7:0]),
        .m_axi_arlock(NLW_U0_m_axi_arlock_UNCONNECTED[0]),
        .m_axi_arprot(NLW_U0_m_axi_arprot_UNCONNECTED[2:0]),
        .m_axi_arqos(NLW_U0_m_axi_arqos_UNCONNECTED[3:0]),
        .m_axi_arready(1'b0),
        .m_axi_arregion(NLW_U0_m_axi_arregion_UNCONNECTED[3:0]),
        .m_axi_arsize(NLW_U0_m_axi_arsize_UNCONNECTED[2:0]),
        .m_axi_aruser(NLW_U0_m_axi_aruser_UNCONNECTED[0]),
        .m_axi_arvalid(NLW_U0_m_axi_arvalid_UNCONNECTED),
        .m_axi_awaddr(NLW_U0_m_axi_awaddr_UNCONNECTED[31:0]),
        .m_axi_awburst(NLW_U0_m_axi_awburst_UNCONNECTED[1:0]),
        .m_axi_awcache(NLW_U0_m_axi_awcache_UNCONNECTED[3:0]),
        .m_axi_awid(NLW_U0_m_axi_awid_UNCONNECTED[0]),
        .m_axi_awlen(NLW_U0_m_axi_awlen_UNCONNECTED[7:0]),
        .m_axi_awlock(NLW_U0_m_axi_awlock_UNCONNECTED[0]),
        .m_axi_awprot(NLW_U0_m_axi_awprot_UNCONNECTED[2:0]),
        .m_axi_awqos(NLW_U0_m_axi_awqos_UNCONNECTED[3:0]),
        .m_axi_awready(1'b0),
        .m_axi_awregion(NLW_U0_m_axi_awregion_UNCONNECTED[3:0]),
        .m_axi_awsize(NLW_U0_m_axi_awsize_UNCONNECTED[2:0]),
        .m_axi_awuser(NLW_U0_m_axi_awuser_UNCONNECTED[0]),
        .m_axi_awvalid(NLW_U0_m_axi_awvalid_UNCONNECTED),
        .m_axi_bid(1'b0),
        .m_axi_bready(NLW_U0_m_axi_bready_UNCONNECTED),
        .m_axi_bresp({1'b0,1'b0}),
        .m_axi_buser(1'b0),
        .m_axi_bvalid(1'b0),
        .m_axi_rdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .m_axi_rid(1'b0),
        .m_axi_rlast(1'b0),
        .m_axi_rready(NLW_U0_m_axi_rready_UNCONNECTED),
        .m_axi_rresp({1'b0,1'b0}),
        .m_axi_ruser(1'b0),
        .m_axi_rvalid(1'b0),
        .m_axi_wdata(NLW_U0_m_axi_wdata_UNCONNECTED[63:0]),
        .m_axi_wid(NLW_U0_m_axi_wid_UNCONNECTED[0]),
        .m_axi_wlast(NLW_U0_m_axi_wlast_UNCONNECTED),
        .m_axi_wready(1'b0),
        .m_axi_wstrb(NLW_U0_m_axi_wstrb_UNCONNECTED[7:0]),
        .m_axi_wuser(NLW_U0_m_axi_wuser_UNCONNECTED[0]),
        .m_axi_wvalid(NLW_U0_m_axi_wvalid_UNCONNECTED),
        .m_axis_tdata(NLW_U0_m_axis_tdata_UNCONNECTED[7:0]),
        .m_axis_tdest(NLW_U0_m_axis_tdest_UNCONNECTED[0]),
        .m_axis_tid(NLW_U0_m_axis_tid_UNCONNECTED[0]),
        .m_axis_tkeep(NLW_U0_m_axis_tkeep_UNCONNECTED[0]),
        .m_axis_tlast(NLW_U0_m_axis_tlast_UNCONNECTED),
        .m_axis_tready(1'b0),
        .m_axis_tstrb(NLW_U0_m_axis_tstrb_UNCONNECTED[0]),
        .m_axis_tuser(NLW_U0_m_axis_tuser_UNCONNECTED[3:0]),
        .m_axis_tvalid(NLW_U0_m_axis_tvalid_UNCONNECTED),
        .overflow(NLW_U0_overflow_UNCONNECTED),
        .prog_empty(NLW_U0_prog_empty_UNCONNECTED),
        .prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .prog_empty_thresh_assert({1'b0,1'b0,1'b0,1'b0}),
        .prog_empty_thresh_negate({1'b0,1'b0,1'b0,1'b0}),
        .prog_full(NLW_U0_prog_full_UNCONNECTED),
        .prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .prog_full_thresh_assert({1'b0,1'b0,1'b0,1'b0}),
        .prog_full_thresh_negate({1'b0,1'b0,1'b0,1'b0}),
        .rd_clk(rd_clk),
        .rd_data_count(NLW_U0_rd_data_count_UNCONNECTED[3:0]),
        .rd_en(rd_en),
        .rd_rst(1'b0),
        .rd_rst_busy(NLW_U0_rd_rst_busy_UNCONNECTED),
        .rst(1'b0),
        .s_aclk(1'b0),
        .s_aclk_en(1'b0),
        .s_aresetn(1'b0),
        .s_axi_araddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arburst({1'b0,1'b0}),
        .s_axi_arcache({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arid(1'b0),
        .s_axi_arlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arlock(1'b0),
        .s_axi_arprot({1'b0,1'b0,1'b0}),
        .s_axi_arqos({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arready(NLW_U0_s_axi_arready_UNCONNECTED),
        .s_axi_arregion({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arsize({1'b0,1'b0,1'b0}),
        .s_axi_aruser(1'b0),
        .s_axi_arvalid(1'b0),
        .s_axi_awaddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awburst({1'b0,1'b0}),
        .s_axi_awcache({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awid(1'b0),
        .s_axi_awlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awlock(1'b0),
        .s_axi_awprot({1'b0,1'b0,1'b0}),
        .s_axi_awqos({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awready(NLW_U0_s_axi_awready_UNCONNECTED),
        .s_axi_awregion({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awsize({1'b0,1'b0,1'b0}),
        .s_axi_awuser(1'b0),
        .s_axi_awvalid(1'b0),
        .s_axi_bid(NLW_U0_s_axi_bid_UNCONNECTED[0]),
        .s_axi_bready(1'b0),
        .s_axi_bresp(NLW_U0_s_axi_bresp_UNCONNECTED[1:0]),
        .s_axi_buser(NLW_U0_s_axi_buser_UNCONNECTED[0]),
        .s_axi_bvalid(NLW_U0_s_axi_bvalid_UNCONNECTED),
        .s_axi_rdata(NLW_U0_s_axi_rdata_UNCONNECTED[63:0]),
        .s_axi_rid(NLW_U0_s_axi_rid_UNCONNECTED[0]),
        .s_axi_rlast(NLW_U0_s_axi_rlast_UNCONNECTED),
        .s_axi_rready(1'b0),
        .s_axi_rresp(NLW_U0_s_axi_rresp_UNCONNECTED[1:0]),
        .s_axi_ruser(NLW_U0_s_axi_ruser_UNCONNECTED[0]),
        .s_axi_rvalid(NLW_U0_s_axi_rvalid_UNCONNECTED),
        .s_axi_wdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wid(1'b0),
        .s_axi_wlast(1'b0),
        .s_axi_wready(NLW_U0_s_axi_wready_UNCONNECTED),
        .s_axi_wstrb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wuser(1'b0),
        .s_axi_wvalid(1'b0),
        .s_axis_tdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tdest(1'b0),
        .s_axis_tid(1'b0),
        .s_axis_tkeep(1'b0),
        .s_axis_tlast(1'b0),
        .s_axis_tready(NLW_U0_s_axis_tready_UNCONNECTED),
        .s_axis_tstrb(1'b0),
        .s_axis_tuser({1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tvalid(1'b0),
        .sbiterr(NLW_U0_sbiterr_UNCONNECTED),
        .sleep(1'b0),
        .srst(1'b0),
        .underflow(NLW_U0_underflow_UNCONNECTED),
        .valid(NLW_U0_valid_UNCONNECTED),
        .wr_ack(NLW_U0_wr_ack_UNCONNECTED),
        .wr_clk(wr_clk),
        .wr_data_count(NLW_U0_wr_data_count_UNCONNECTED[3:0]),
        .wr_en(wr_en),
        .wr_rst(1'b0),
        .wr_rst_busy(NLW_U0_wr_rst_busy_UNCONNECTED));
endmodule

(* DEST_SYNC_FF = "3" *) (* INIT_SYNC_FF = "0" *) (* ORIG_REF_NAME = "xpm_cdc_gray" *) 
(* REG_OUTPUT = "1" *) (* SIM_ASSERT_CHK = "0" *) (* SIM_LOSSLESS_GRAY_CHK = "0" *) 
(* VERSION = "0" *) (* WIDTH = "4" *) (* XPM_MODULE = "TRUE" *) 
(* is_du_within_envelope = "true" *) (* keep_hierarchy = "true" *) (* xpm_cdc = "GRAY" *) 
module async_fifo_signal_xpm_cdc_gray
   (src_clk,
    src_in_bin,
    dest_clk,
    dest_out_bin);
  input src_clk;
  input [3:0]src_in_bin;
  input dest_clk;
  output [3:0]dest_out_bin;

  wire [3:0]async_path;
  wire [2:0]binval;
  wire dest_clk;
  (* RTL_KEEP = "true" *) (* async_reg = "true" *) (* xpm_cdc = "GRAY" *) wire [3:0]\dest_graysync_ff[0] ;
  (* RTL_KEEP = "true" *) (* async_reg = "true" *) (* xpm_cdc = "GRAY" *) wire [3:0]\dest_graysync_ff[1] ;
  (* RTL_KEEP = "true" *) (* async_reg = "true" *) (* xpm_cdc = "GRAY" *) wire [3:0]\dest_graysync_ff[2] ;
  wire [3:0]dest_out_bin;
  wire [2:0]gray_enc;
  wire src_clk;
  wire [3:0]src_in_bin;

  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[0]),
        .Q(\dest_graysync_ff[0] [0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[1]),
        .Q(\dest_graysync_ff[0] [1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[2]),
        .Q(\dest_graysync_ff[0] [2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[3]),
        .Q(\dest_graysync_ff[0] [3]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [0]),
        .Q(\dest_graysync_ff[1] [0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [1]),
        .Q(\dest_graysync_ff[1] [1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [2]),
        .Q(\dest_graysync_ff[1] [2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [3]),
        .Q(\dest_graysync_ff[1] [3]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [0]),
        .Q(\dest_graysync_ff[2] [0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [1]),
        .Q(\dest_graysync_ff[2] [1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [2]),
        .Q(\dest_graysync_ff[2] [2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [3]),
        .Q(\dest_graysync_ff[2] [3]),
        .R(1'b0));
  LUT4 #(
    .INIT(16'h6996)) 
    \dest_out_bin_ff[0]_i_1 
       (.I0(\dest_graysync_ff[2] [0]),
        .I1(\dest_graysync_ff[2] [2]),
        .I2(\dest_graysync_ff[2] [3]),
        .I3(\dest_graysync_ff[2] [1]),
        .O(binval[0]));
  LUT3 #(
    .INIT(8'h96)) 
    \dest_out_bin_ff[1]_i_1 
       (.I0(\dest_graysync_ff[2] [1]),
        .I1(\dest_graysync_ff[2] [3]),
        .I2(\dest_graysync_ff[2] [2]),
        .O(binval[1]));
  LUT2 #(
    .INIT(4'h6)) 
    \dest_out_bin_ff[2]_i_1 
       (.I0(\dest_graysync_ff[2] [2]),
        .I1(\dest_graysync_ff[2] [3]),
        .O(binval[2]));
  FDRE \dest_out_bin_ff_reg[0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(binval[0]),
        .Q(dest_out_bin[0]),
        .R(1'b0));
  FDRE \dest_out_bin_ff_reg[1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(binval[1]),
        .Q(dest_out_bin[1]),
        .R(1'b0));
  FDRE \dest_out_bin_ff_reg[2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(binval[2]),
        .Q(dest_out_bin[2]),
        .R(1'b0));
  FDRE \dest_out_bin_ff_reg[3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[2] [3]),
        .Q(dest_out_bin[3]),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \src_gray_ff[0]_i_1 
       (.I0(src_in_bin[1]),
        .I1(src_in_bin[0]),
        .O(gray_enc[0]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \src_gray_ff[1]_i_1 
       (.I0(src_in_bin[2]),
        .I1(src_in_bin[1]),
        .O(gray_enc[1]));
  LUT2 #(
    .INIT(4'h6)) 
    \src_gray_ff[2]_i_1 
       (.I0(src_in_bin[3]),
        .I1(src_in_bin[2]),
        .O(gray_enc[2]));
  FDRE \src_gray_ff_reg[0] 
       (.C(src_clk),
        .CE(1'b1),
        .D(gray_enc[0]),
        .Q(async_path[0]),
        .R(1'b0));
  FDRE \src_gray_ff_reg[1] 
       (.C(src_clk),
        .CE(1'b1),
        .D(gray_enc[1]),
        .Q(async_path[1]),
        .R(1'b0));
  FDRE \src_gray_ff_reg[2] 
       (.C(src_clk),
        .CE(1'b1),
        .D(gray_enc[2]),
        .Q(async_path[2]),
        .R(1'b0));
  FDRE \src_gray_ff_reg[3] 
       (.C(src_clk),
        .CE(1'b1),
        .D(src_in_bin[3]),
        .Q(async_path[3]),
        .R(1'b0));
endmodule

(* DEST_SYNC_FF = "3" *) (* INIT_SYNC_FF = "0" *) (* ORIG_REF_NAME = "xpm_cdc_gray" *) 
(* REG_OUTPUT = "1" *) (* SIM_ASSERT_CHK = "0" *) (* SIM_LOSSLESS_GRAY_CHK = "0" *) 
(* VERSION = "0" *) (* WIDTH = "4" *) (* XPM_MODULE = "TRUE" *) 
(* is_du_within_envelope = "true" *) (* keep_hierarchy = "true" *) (* xpm_cdc = "GRAY" *) 
module async_fifo_signal_xpm_cdc_gray__2
   (src_clk,
    src_in_bin,
    dest_clk,
    dest_out_bin);
  input src_clk;
  input [3:0]src_in_bin;
  input dest_clk;
  output [3:0]dest_out_bin;

  wire [3:0]async_path;
  wire [2:0]binval;
  wire dest_clk;
  (* RTL_KEEP = "true" *) (* async_reg = "true" *) (* xpm_cdc = "GRAY" *) wire [3:0]\dest_graysync_ff[0] ;
  (* RTL_KEEP = "true" *) (* async_reg = "true" *) (* xpm_cdc = "GRAY" *) wire [3:0]\dest_graysync_ff[1] ;
  (* RTL_KEEP = "true" *) (* async_reg = "true" *) (* xpm_cdc = "GRAY" *) wire [3:0]\dest_graysync_ff[2] ;
  wire [3:0]dest_out_bin;
  wire [2:0]gray_enc;
  wire src_clk;
  wire [3:0]src_in_bin;

  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[0]),
        .Q(\dest_graysync_ff[0] [0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[1]),
        .Q(\dest_graysync_ff[0] [1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[2]),
        .Q(\dest_graysync_ff[0] [2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[0][3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(async_path[3]),
        .Q(\dest_graysync_ff[0] [3]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [0]),
        .Q(\dest_graysync_ff[1] [0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [1]),
        .Q(\dest_graysync_ff[1] [1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [2]),
        .Q(\dest_graysync_ff[1] [2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[1][3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[0] [3]),
        .Q(\dest_graysync_ff[1] [3]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [0]),
        .Q(\dest_graysync_ff[2] [0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [1]),
        .Q(\dest_graysync_ff[2] [1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [2]),
        .Q(\dest_graysync_ff[2] [2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "true" *) 
  (* XPM_CDC = "GRAY" *) 
  FDRE \dest_graysync_ff_reg[2][3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[1] [3]),
        .Q(\dest_graysync_ff[2] [3]),
        .R(1'b0));
  LUT4 #(
    .INIT(16'h6996)) 
    \dest_out_bin_ff[0]_i_1 
       (.I0(\dest_graysync_ff[2] [0]),
        .I1(\dest_graysync_ff[2] [2]),
        .I2(\dest_graysync_ff[2] [3]),
        .I3(\dest_graysync_ff[2] [1]),
        .O(binval[0]));
  LUT3 #(
    .INIT(8'h96)) 
    \dest_out_bin_ff[1]_i_1 
       (.I0(\dest_graysync_ff[2] [1]),
        .I1(\dest_graysync_ff[2] [3]),
        .I2(\dest_graysync_ff[2] [2]),
        .O(binval[1]));
  LUT2 #(
    .INIT(4'h6)) 
    \dest_out_bin_ff[2]_i_1 
       (.I0(\dest_graysync_ff[2] [2]),
        .I1(\dest_graysync_ff[2] [3]),
        .O(binval[2]));
  FDRE \dest_out_bin_ff_reg[0] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(binval[0]),
        .Q(dest_out_bin[0]),
        .R(1'b0));
  FDRE \dest_out_bin_ff_reg[1] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(binval[1]),
        .Q(dest_out_bin[1]),
        .R(1'b0));
  FDRE \dest_out_bin_ff_reg[2] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(binval[2]),
        .Q(dest_out_bin[2]),
        .R(1'b0));
  FDRE \dest_out_bin_ff_reg[3] 
       (.C(dest_clk),
        .CE(1'b1),
        .D(\dest_graysync_ff[2] [3]),
        .Q(dest_out_bin[3]),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \src_gray_ff[0]_i_1 
       (.I0(src_in_bin[1]),
        .I1(src_in_bin[0]),
        .O(gray_enc[0]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \src_gray_ff[1]_i_1 
       (.I0(src_in_bin[2]),
        .I1(src_in_bin[1]),
        .O(gray_enc[1]));
  LUT2 #(
    .INIT(4'h6)) 
    \src_gray_ff[2]_i_1 
       (.I0(src_in_bin[3]),
        .I1(src_in_bin[2]),
        .O(gray_enc[2]));
  FDRE \src_gray_ff_reg[0] 
       (.C(src_clk),
        .CE(1'b1),
        .D(gray_enc[0]),
        .Q(async_path[0]),
        .R(1'b0));
  FDRE \src_gray_ff_reg[1] 
       (.C(src_clk),
        .CE(1'b1),
        .D(gray_enc[1]),
        .Q(async_path[1]),
        .R(1'b0));
  FDRE \src_gray_ff_reg[2] 
       (.C(src_clk),
        .CE(1'b1),
        .D(gray_enc[2]),
        .Q(async_path[2]),
        .R(1'b0));
  FDRE \src_gray_ff_reg[3] 
       (.C(src_clk),
        .CE(1'b1),
        .D(src_in_bin[3]),
        .Q(async_path[3]),
        .R(1'b0));
endmodule
`pragma protect begin_protected
`pragma protect version = 1
`pragma protect encrypt_agent = "XILINX"
`pragma protect encrypt_agent_info = "Xilinx Encryption Tool 2024.2"
`pragma protect key_keyowner="Synopsys", key_keyname="SNPS-VCS-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
md0AksSCeI3fOZtF7nrw91OgSzGoACBon4GH9ENTzaI4jlg22H1uTtXayX2Kz+g4ZH2j52rtMH8H
Xc49HVcThMzO1cRXu+SkL59MRQ87klGca4XtjrTtunJoQ+jyOKRwRBeIMHUdntbk2T1kbXHf9KkB
bNYGEMqSrbiDt7IJUx8=

`pragma protect key_keyowner="Aldec", key_keyname="ALDEC15_001", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
r6CzxR0T3O2wvZRQe25aX3/CWOx/3d/3vJvvS/XsrKr7v852GNQNqCBn+PKsunj0Ncep8DqHtVie
BE6tKIqZW+3txAUjrhSri5liuFWSnzAk+Drsb4RnvIy7BeOdAK6NhVhn8ZyplkJSHVwaGjN8gtPE
LeWEHPHf5qLnzqGKV7B6oIC7POGV6Vamos1p2z1xv2cEw4udvmtZ5EjzeyCMf+omtxEPxhPi6Z2h
ENlGOmuPMkWGMjP6HQCZ1Mi0uiST/zDo29UDIMmOGcsDMe97imU/z2ekKTPXXwjcV+9q+4zHRgJV
6JWWgjU9cztV5OMaEfpBgRBWae/ijWpPZaGuFA==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VELOCE-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
glFrHilvyO7nq7/OYhnyb9uU9d8UNGJruNnkmJWuTpgvyCDmtx7iVKPBPe1Bj9jUDT/HM9AGxvu0
g7b4TuMdVkegkVPeHhw31IW0HoTL8wPnrLEpzDVK+B7xl953hPKPe0vn+0EQh2UKeL5K8VLxmsSv
gbpEeToeR90yzlSUzDE=

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VERIF-SIM-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
D4uBhES8Mkd0GCwY2aQOmEzTqz6hO5B9Wa2oyfVBEODkWyt+AHkIXn4tuBN05FcP2FVmgtVbvZX5
K6iog51IoPw5tv+pM5x8+bQBX/aZpf0c4to3qiX6RZuITpuSUWq/7sqQDqtMqDWOFMMnUBpTX+qI
t61NvyIZcfqRWo4yvIUV2Zh1etqYKDlhqRnMoBZKMeHFpVsp19nU4sf5Km7sSlPQ08vYD8qtJqgJ
ZDYC2KWFTHsnT+5anHvc80FgHt4zBHpPrGprgpltQmVmMZxUD6NRC9EvvXf+pBhgfwPHHePWIKUn
elLld/HEVeFw76SlVV8i4LsS4KWWOM+KmMprEg==

`pragma protect key_keyowner="Real Intent", key_keyname="RI-RSA-KEY-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
EW9gHDqS12MVhy+y/xQVscLd4qOim+cNTepYzlas7WzqDJogZthddOuGjpm3a3fS/cMbF/h0O1Hb
Wjow664GIga0y96lkbkcJ3W8x/IGAsvgyrYT6ScsFhyq7tSd1HjvRG81BhhGM1mmpxfzh0Uqbfso
q+uVKPUmPnbQ/Gdu9YRoxmYVJdmUTpXJ5waYOdib8WNMPLdDfIo/FGrYrx2zYQBtpU5DwwVUTMrB
ZasEyxOj++icI5k5lR3Tx+3gdCFTy4XYQfcj2COm4gnVZ8FN/X1/+0ywsVGAc/OKL+mjMYH3NNH3
zfDO/TpYft+HaVl+CfF/U6IgJJeJs4qI4gB4FA==

`pragma protect key_keyowner="Xilinx", key_keyname="xilinxt_2023_11", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
Myfv5Skg7QCxlNBoFiSTLAeIRYS0J0ArRihYk7dGAHZWAFlxJLgqo51W9P9zTVBurMJjZLtonoDJ
19RfxQj5GqhqN1A20s8xOFfLq6+uDG/V39xQFY32O626Kh4MMlH07hNJL5u1NjJWg1yze0XdFEe9
oLwKQz5lSKGMIh+VPXDuCGhShS+KhHwGEdS0lmA/IHPFNlRG1LsK0zQmUiNkG4kQ5OEVkQgvknNC
B6++ZDIYlT9WbZPs5giRY0zAhUepLPaO+N9F3fIBKVGw4ejbZOt0kXKixF86DDfLmF2+dov+PrTX
1MXJaea3YoQdR2c2MSHAk/TTkzg9ayjvxKaXpg==

`pragma protect key_keyowner="Metrics Technologies Inc.", key_keyname="DSim", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
ks9l+EPHXfDNnWd0exs1j0Q9iSNYaIExwQnpsi8TFJimjPtOkX050wFklsLBM83WyfuD+F2KLNnZ
Jg/aiIiGe9o424jOiEFdnAJuzrD0QL9WmhQ3W9iRJ7uPhha6NfR2WGTCCM4TpN8rTKLQDKxenVfv
6x83rnL5NQxvpp9cQh3zMma73qoEJjhTR9MD9cwA4VeKq2u/R0iTWBplX81vYFd9TW2qW5/Qyzzj
A0+pXzczcJKdggV8h8bYcO+PRC3t2XrufhnjvhjMLG2tPHSMW/soDH/v8KorXyWe5N/q12fo5auN
SXr3olNuB5kpiVS3mJAPV0z4UsFfu2A4hLH7MQ==

`pragma protect key_keyowner="Atrenta", key_keyname="ATR-SG-RSA-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=384)
`pragma protect key_block
e3AJKDEM9byJqwpkFZqMIMKMQPOR1VrLFkshor7HR0C+ol7Uv3XTGyvQrINdBEArX0eazF0cHWjC
9B4BhDnysAhT6SENcNHIYHUGQE7uiF7zgL7WhCxClwEnIAVj+PU9FmqlvbreEikHQfbeIDPyCLii
NAS97RDxWki/MfR33zvZX4eEolA/oTyRzr1MagBs7LN1UXyGPvnze8JzHxA3zHVedIIrBrZxkfoj
Loqe6tLYRlC45h1Yr3Wa2gh3LJGtOSji+m7E9Xua/pPh8A/CAD+TNBa5d/X7C3a4AWl2bYTi7HBY
Y8vaIjHiSosru5F2UOEQG9xekCbNRK1Apew1UIvntzCmDMMhlAgB78AUOE2YEWKd9GOl+aTZjMS3
GxAYzrtv/bDRkPOYbcG0SNT9xf+izRM3lX1E2vN3i3uU2Qrh73fjU1lk3PIe/A/H56UrNPDnGT9W
TvlJR47bLDtGyX2+dLvfTaZGRP8aepePOXXLIlvqwCJSMVhCB/hIbz7E

`pragma protect key_keyowner="Cadence Design Systems.", key_keyname="CDS_RSA_KEY_VER_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
TfuXOFQtE7YhtTL4354NvKETmBCLSVnb+pbrT8gtzjU7pERE1Hu2ZVzHgVQXwt5RvwG1R/z2je+U
PzszCBhPNqUaXEhuJ0A/q0S/vvOOa6h6tW9MhiB3gnuqEFVWz5pbHZNfgrwh2gT8XyqLI8f1CoJM
xpcB2TbREV/kAAFMxIfH1Dg0KSO2dCeVV1na6N0AiMOQPvXZOB7QpXwNDbYfarWLtF0/l0hi4Fxu
Kgho2ggrUhajP0aKlrCQ9mLsqOyqJELeJldeD+vuUUqhYq4K4RrwtQF+B67lYc4AjznwQ92tUvYJ
ZspFoHJEScNvdFoHFTA2TQ2KToepsqXRiOCL1A==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
tmfbBpNtCYJ7zsgNxUzw7Dvn+hNn2PPUBeRfXSci/q2/OcQeF/eAAML8YIN1V+AEoAqZTE2/xRQz
+6zwVOLyAOLynMIBQ7EG7xReDJ9kEEiBjnMGO6NWdAsa/VcreVHrLD1PFtA1+WoVe6yOvNGK+Nbh
HjPkXyycyP6RQ4Rx/PtTxw31LOFVezddSgRlaKHTprKTP4LbjPG//onRBg3fAl8zwU1wYYNLzYCX
jwY7xfMkQyhUSpV2Tx3seqy2IYVl8jjxynFxfyxulvrJiqmc6aaKKBdkoOVbJ5eO2sCXFJB1mKEU
WR2Ee2ozisABzk9IcGILewCW7ghdLP82CRZv4A==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-PREC-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
GfDCxx9db4ripD5mvQy16BVlwPYfeC7ZobZXaX1my6WUDiKwd69J5SreUXKYD9lvZfI7djLgHkYm
5G247T4NX7zoBwc88bUD+tNvGNmzWFfSVVZqu8hjgd31lZXjy9uYdXA/gsE+T+JqEfRYdV8YoGgm
sREyiJjWRPDbx6kc8um8vlAK/Rjwz0EGVkGUoi/+UvxcnjG1PqCl7GSMOQ3gFMEOaxIflShnF2/c
//ioADxl3WjUGyTstMK54XlP8G1Hk95sSe/7Y+SbaIyoG8t6gGDimDJNuGs4JjDUi1V7Gxfzxk9+
O2J++9clyLkMZ3rRyxSvR+Xyrmn3YxjVC68GXw==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 64832)
`pragma protect data_block
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
CkSGSsde5KslmjiaXVpHExZGC7RUojo=
`pragma protect end_protected
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
