// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2024 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2024.2 (lin64) Build 5239630 Fri Nov 08 22:34:34 MST 2024
// Date        : Fri Jul 25 22:49:22 2025
// Host        : henry7090-ROG-Zephyrus-G16 running 64-bit Ubuntu 24.04.1 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/henry7090/Desktop/Aquila_wishbone/hw/aquila_zipcpu_src/aquila_zipcpu/aquila_zipcpu.gen/sources_1/ip/async_fifo_addr/async_fifo_addr_sim_netlist.v
// Design      : async_fifo_addr
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7k325tffg676-2
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "async_fifo_addr,fifo_generator_v13_2_11,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "fifo_generator_v13_2_11,Vivado 2024.2" *) 
(* NotValidForBitStream *)
module async_fifo_addr
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
  (* x_interface_info = "xilinx.com:interface:fifo_write:1.0 FIFO_WRITE WR_DATA" *) (* x_interface_mode = "slave FIFO_WRITE" *) input [31:0]din;
  (* x_interface_info = "xilinx.com:interface:fifo_write:1.0 FIFO_WRITE WR_EN" *) input wr_en;
  (* x_interface_info = "xilinx.com:interface:fifo_read:1.0 FIFO_READ RD_EN" *) (* x_interface_mode = "slave FIFO_READ" *) input rd_en;
  (* x_interface_info = "xilinx.com:interface:fifo_read:1.0 FIFO_READ RD_DATA" *) output [31:0]dout;
  (* x_interface_info = "xilinx.com:interface:fifo_write:1.0 FIFO_WRITE FULL" *) output full;
  (* x_interface_info = "xilinx.com:interface:fifo_read:1.0 FIFO_READ EMPTY" *) output empty;

  wire [31:0]din;
  wire [31:0]dout;
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
  (* C_DIN_WIDTH = "32" *) 
  (* C_DIN_WIDTH_AXIS = "1" *) 
  (* C_DIN_WIDTH_RACH = "32" *) 
  (* C_DIN_WIDTH_RDCH = "64" *) 
  (* C_DIN_WIDTH_WACH = "1" *) 
  (* C_DIN_WIDTH_WDCH = "64" *) 
  (* C_DIN_WIDTH_WRCH = "2" *) 
  (* C_DOUT_RST_VAL = "0" *) 
  (* C_DOUT_WIDTH = "32" *) 
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
  async_fifo_addr_fifo_generator_v13_2_11 U0
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
module async_fifo_addr_xpm_cdc_gray
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
module async_fifo_addr_xpm_cdc_gray__2
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 82288)
`pragma protect data_block
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
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
