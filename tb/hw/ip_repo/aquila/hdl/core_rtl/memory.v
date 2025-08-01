`timescale 1ns / 1ps
// =============================================================================
//  Program : memory.v
//  Author  : Jin-you Wu
//  Date    : Dec/19/2018
// -----------------------------------------------------------------------------
//  Description:
//  This is the Memory Access Unit of the Aquila core (A RISC-V core).
// -----------------------------------------------------------------------------
//  Revision information:
//
//  Aug/17/2020, by Chun-Jen Tsai:
//    Rename the old module 'memory_alignment' to 'memory' and rename the
//    port signals.
//
//  Aug/20/2024, by Chun-Jen Tsai:
//    Modify the Memory stage's I/O ports and sequential blocks so that
//    it matches the coding style of the other stages.
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

module memory #( parameter XLEN = 32 )
(
    //  Processor clock and reset signals.
    input                   clk_i,
    input                   rst_i,

    // Pipeline stall signal.
    input                   stall_i,

    // Pipeline flush signal.
    input                   flush_i,

    // From Execute stage
    input  [XLEN-1 : 0]     mem_addr_i,
    input  [1 : 0]          dsize_sel_i,      // data size (8, 16, or 32-bit)
    input  [XLEN-1 : 0]     unaligned_data_i, // from rs2
    input                   we_i,
    input                   re_i,

    input  [ 2 : 0]         rd_input_sel_i,
    input  [ 4 : 0]         rd_addr_i,
    input                   rd_we_i,
    input                   signex_sel_i,
    input  [XLEN-1 : 0]     p_data_i,

    input                   csr_we_i,
    input  [11: 0]          csr_we_addr_i,
    input  [XLEN-1 : 0]     csr_we_data_i,

    // From D-memory
    input  [XLEN-1 : 0]     m_data_i,

    // To D-memory
    output reg [XLEN-1 : 0] data_o,           // data to write
    output reg [ 3 : 0]     byte_sel_o,

    // Indicating memory mis-alignment exception
    output reg              mem_align_exception_o,

    // To Writeback stage
    output reg [ 2 : 0]     rd_input_sel_o,
    output reg [ 4 : 0]     rd_addr_o,
    output reg              rd_we_o,
    output reg              signex_sel_o,

    output reg [XLEN-1 : 0] aligned_data_o,
    output reg [XLEN-1 : 0] p_data_o,

    output reg              csr_we_o,
    output reg [11 : 0]     csr_we_addr_o,
    output reg [XLEN-1 : 0] csr_we_data_o,

    // PC of the current instruction.
    input  [XLEN-1 : 0]     pc_i,
    output reg [XLEN-1 : 0] pc_o,

    // System Jump operation
    input                   sys_jump_i,
    input  [ 1 : 0]         sys_jump_csr_addr_i,
    output                  sys_jump_o,
    output [ 1 : 0]         sys_jump_csr_addr_o,

    // Has instruction fetch being successiful?
    input                   fetch_valid_i,
    output reg              fetch_valid_o,

    // Exception info passed from Execute to Writeback.
    input                   xcpt_valid_i,
    input  [ 3 : 0]         xcpt_cause_i,
    input  [XLEN-1 : 0]     xcpt_tval_i,
    output reg              xcpt_valid_o,
    output reg [ 3 : 0]     xcpt_cause_o,
    output reg [XLEN-1 : 0] xcpt_tval_o
);

assign sys_jump_o = sys_jump_i;
assign sys_jump_csr_addr_o = sys_jump_csr_addr_i;

always@(*)
begin
    if (mem_align_exception_o && (we_i || re_i))
    begin
        xcpt_valid_o = 1'b1;
        xcpt_cause_o = (we_i)?'d6:'d4;
        xcpt_tval_o  = mem_addr_i;
    end
    else
    begin
        xcpt_valid_o = xcpt_valid_i;
        xcpt_cause_o = xcpt_cause_i;
        xcpt_tval_o  = xcpt_tval_i;
    end
end

// store
always @(*)
begin
    case (mem_addr_i[1:0])
        2'b00:
        begin
            case (dsize_sel_i)
                2'b00:
                begin   // byte
                    data_o = {24'b0, unaligned_data_i[7: 0]};
                    byte_sel_o = 4'b0001;
                    mem_align_exception_o = 0;
                end
                2'b01:
                begin   // half-word
                    data_o = {16'b0, unaligned_data_i[15: 0]};
                    byte_sel_o = 4'b0011;
                    mem_align_exception_o = 0;
                end
                2'b10:
                begin   // word
                    data_o = unaligned_data_i;
                    byte_sel_o = 4'b1111;
                    mem_align_exception_o = 0;
                end
                default:
                begin
                    data_o = 0;
                    byte_sel_o = 4'b0000;
                    mem_align_exception_o = 1;
                end
            endcase
        end
        2'b01:
        begin
            case (dsize_sel_i)
                2'b00:
                begin   // byte
                    data_o = {16'b0, unaligned_data_i[7: 0], 8'b0};
                    byte_sel_o = 4'b0010;
                    mem_align_exception_o = 0;
                end
                default:
                begin
                    data_o = 0;
                    byte_sel_o = 4'b0000;
                    mem_align_exception_o = 1;
                end
            endcase
        end
        2'b10:
        begin
            case (dsize_sel_i)
                2'b00:
                begin
                    data_o = {8'b0, unaligned_data_i[7: 0], 16'b0};
                    byte_sel_o = 4'b0100;
                    mem_align_exception_o = 0;
                end
                2'b01:
                begin
                    data_o = {unaligned_data_i[15: 0], 16'b0};
                    byte_sel_o = 4'b1100;
                    mem_align_exception_o = 0;
                end
                default:
                begin
                    data_o = 0;
                    byte_sel_o = 4'b0000;
                    mem_align_exception_o = 1;
                end
            endcase
        end
        2'b11:
        begin
            case (dsize_sel_i)
                2'b00:
                begin
                    data_o = {unaligned_data_i[7: 0], 24'b0};
                    byte_sel_o = 4'b1000;
                    mem_align_exception_o = 0;
                end
                default:
                begin
                    data_o = 0;
                    byte_sel_o = 4'b0000;
                    mem_align_exception_o = 1;
                end
            endcase
        end
    endcase
end

// ===============================================================================
//  Output registers to the Writeback stage
//
always @(posedge clk_i)
begin
    if (rst_i || (flush_i && !stall_i)) // stall has higher priority than flush.
    begin
        pc_o <= (flush_i)? pc_i : 0;
        fetch_valid_o <= 0;
        rd_input_sel_o <= 4;
        rd_addr_o <= 0;
        rd_we_o <= 0;
        signex_sel_o <= 0;

        aligned_data_o <= 0;
        p_data_o <= 0;

        csr_we_o <= 0;
        csr_we_addr_o <= 0;
        csr_we_data_o <= 0;
    end
    else if (stall_i)
    begin
        pc_o <= pc_o;
        fetch_valid_o <= fetch_valid_o;
        rd_input_sel_o <= rd_input_sel_o;
        rd_addr_o <= rd_addr_o;
        rd_we_o <= rd_we_o;
        signex_sel_o <= signex_sel_o;

        aligned_data_o <= aligned_data_o;
        p_data_o <= p_data_o;

        csr_we_o <= csr_we_o;
        csr_we_addr_o <= csr_we_addr_o;
        csr_we_data_o <= csr_we_data_o;
    end
    else if (xcpt_valid_i)
    begin
        pc_o <= pc_i;
        fetch_valid_o <= 1;
        rd_input_sel_o <= 4;
        rd_addr_o <= 0;
        rd_we_o <= 0;
        signex_sel_o <= 0;

        aligned_data_o <= 0;
        p_data_o <= 0;

        csr_we_o <= 0;
        csr_we_addr_o <= 0;
        csr_we_data_o <= 0;
    end
    else
    begin
        pc_o <= pc_i;
        fetch_valid_o <= fetch_valid_i;
        rd_input_sel_o <= rd_input_sel_i;
        rd_addr_o <= rd_addr_i;
        rd_we_o <= rd_we_i;
        signex_sel_o <= signex_sel_i;

        case (mem_addr_i[1 : 0])
            2'b00: aligned_data_o <= m_data_i;
            2'b01: aligned_data_o <= {m_data_i[ 7: 0], m_data_i[31: 8]};
            2'b10: aligned_data_o <= {m_data_i[15: 0], m_data_i[31: 16]};
            2'b11: aligned_data_o <= {m_data_i[23: 0], m_data_i[31: 24]};
        endcase
        p_data_o <= p_data_i;

        csr_we_o <= csr_we_i;
        csr_we_addr_o <= csr_we_addr_i;
        csr_we_data_o <= csr_we_data_i;
    end
end

endmodule
