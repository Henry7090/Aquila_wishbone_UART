// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vaquila_testharness__Syms.h"


void Vaquila_testharness___024root__trace_chg_sub_0(Vaquila_testharness___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vaquila_testharness___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness___024root__trace_chg_top_0\n"); );
    // Init
    Vaquila_testharness___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaquila_testharness___024root*>(voidSelf);
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vaquila_testharness___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vaquila_testharness___024root__trace_chg_sub_0(Vaquila_testharness___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<8>/*255:0*/ __Vtemp_h04554a07__0;
    VlWide<8>/*255:0*/ __Vtemp_h82ca627a__0;
    VlWide<8>/*255:0*/ __Vtemp_haab477d0__0;
    VlWide<8>/*255:0*/ __Vtemp_he4d016ab__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__i),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__i),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__i),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__i),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__i),32);
        bufp->chgIData(oldp+6,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__i),32);
        bufp->chgIData(oldp+7,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__i),32);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__i),32);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__i),32);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__i),32);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__i),32);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__i),32);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__i),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__i),32);
        bufp->chgIData(oldp+15,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__i),32);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+17,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r),32);
        bufp->chgBit(oldp+18,(vlSymsp->TOP__aquila_testharness.spi_ss));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__aquila_testharness.spi_sck));
        bufp->chgBit(oldp+20,(vlSymsp->TOP__aquila_testharness.spi_mosi));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__aquila_testharness.uart_tx));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_strobe));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_imem_o));
        bufp->chgBit(oldp+24,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_is_amo)
                                ? ((1U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__state)) 
                                   | (2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__state)))
                                : (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_strobe))));
        bufp->chgBit(oldp+25,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_dmem_o));
        bufp->chgBit(oldp+26,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_is_amo)
                                ? (2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__state))
                                : (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_rw))));
        bufp->chgIData(oldp+27,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_addr),32);
        bufp->chgIData(oldp+28,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr),32);
        bufp->chgWData(oldp+29,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_imem_o),256);
        bufp->chgWData(oldp+37,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_dmem_o),256);
        if (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_is_amo) {
            __Vtemp_h04554a07__0[0U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[0U];
            __Vtemp_h04554a07__0[1U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[1U];
            __Vtemp_h04554a07__0[2U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[2U];
            __Vtemp_h04554a07__0[3U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[3U];
            __Vtemp_h04554a07__0[4U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[4U];
            __Vtemp_h04554a07__0[5U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[5U];
            __Vtemp_h04554a07__0[6U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[6U];
            __Vtemp_h04554a07__0[7U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__result;
        } else {
            __Vtemp_h04554a07__0[0U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[0U];
            __Vtemp_h04554a07__0[1U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[1U];
            __Vtemp_h04554a07__0[2U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[2U];
            __Vtemp_h04554a07__0[3U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[3U];
            __Vtemp_h04554a07__0[4U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[4U];
            __Vtemp_h04554a07__0[5U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[5U];
            __Vtemp_h04554a07__0[6U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[6U];
            __Vtemp_h04554a07__0[7U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[7U];
        }
        bufp->chgWData(oldp+45,(__Vtemp_h04554a07__0),256);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o),32);
        bufp->chgBit(oldp+54,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_rw_o));
        bufp->chgCData(oldp+55,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel),4);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o),32);
        bufp->chgBit(oldp+57,(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_uart_ack));
        bufp->chgIData(oldp+58,(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_uart_data2core),32);
        bufp->chgBit(oldp+59,(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_cyc));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_stb));
        bufp->chgBit(oldp+61,(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_we));
        bufp->chgCData(oldp+62,(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_addr),2);
        bufp->chgBit(oldp+63,(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_ack));
        bufp->chgIData(oldp+64,(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_data2core),32);
        bufp->chgBit(oldp+65,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__irq));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_uart_cyc));
        bufp->chgBit(oldp+67,(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_uart_stb));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_uart_we));
        bufp->chgCData(oldp+69,(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_uart_addr),2);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__aquila_testharness.__PVT__Core2Wishbone_0__DOT__wb_stb_r));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__aquila_testharness.__PVT__Core2Wishboneuart_0__DOT__wb_stb_r));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__o_int));
        bufp->chgIData(oldp+73,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__o_debug),32);
        bufp->chgBit(oldp+74,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_cmd_busy));
        bufp->chgBit(oldp+75,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__dbg_trigger));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__write_stb));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__wb_cmd_stb));
        bufp->chgBit(oldp+78,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_stb) 
                                & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_we) 
                                   & (0U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_byte_sel)))) 
                               & (1U == (IData)(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_addr)))));
        bufp->chgCData(oldp+79,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__pipe_addr),2);
        bufp->chgBit(oldp+80,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__dly_stb));
        bufp->chgIData(oldp+81,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[0]),32);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[1]),32);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[2]),32);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[3]),32);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[4]),32);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[5]),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[6]),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[7]),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[8]),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[9]),32);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[10]),32);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[11]),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[12]),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[13]),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[14]),32);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[15]),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[16]),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[17]),32);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[18]),32);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[19]),32);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[20]),32);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[21]),32);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[22]),32);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[23]),32);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[24]),32);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[25]),32);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[26]),32);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[27]),32);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[28]),32);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[29]),32);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[30]),32);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[31]),32);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[32]),32);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[33]),32);
        bufp->chgIData(oldp+115,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[34]),32);
        bufp->chgIData(oldp+116,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[35]),32);
        bufp->chgIData(oldp+117,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[36]),32);
        bufp->chgIData(oldp+118,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[37]),32);
        bufp->chgIData(oldp+119,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[38]),32);
        bufp->chgIData(oldp+120,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[39]),32);
        bufp->chgIData(oldp+121,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[40]),32);
        bufp->chgIData(oldp+122,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[41]),32);
        bufp->chgIData(oldp+123,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[42]),32);
        bufp->chgIData(oldp+124,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[43]),32);
        bufp->chgIData(oldp+125,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[44]),32);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[45]),32);
        bufp->chgIData(oldp+127,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[46]),32);
        bufp->chgIData(oldp+128,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[47]),32);
        bufp->chgIData(oldp+129,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[48]),32);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[49]),32);
        bufp->chgIData(oldp+131,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[50]),32);
        bufp->chgIData(oldp+132,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[51]),32);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[52]),32);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[53]),32);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[54]),32);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[55]),32);
        bufp->chgIData(oldp+137,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[56]),32);
        bufp->chgIData(oldp+138,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[57]),32);
        bufp->chgIData(oldp+139,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[58]),32);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[59]),32);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[60]),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[61]),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[62]),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[63]),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[64]),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[65]),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[66]),32);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[67]),32);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[68]),32);
        bufp->chgIData(oldp+150,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[69]),32);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[70]),32);
        bufp->chgIData(oldp+152,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[71]),32);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[72]),32);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[73]),32);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[74]),32);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[75]),32);
        bufp->chgIData(oldp+157,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[76]),32);
        bufp->chgIData(oldp+158,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[77]),32);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[78]),32);
        bufp->chgIData(oldp+160,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[79]),32);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[80]),32);
        bufp->chgIData(oldp+162,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[81]),32);
        bufp->chgIData(oldp+163,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[82]),32);
        bufp->chgIData(oldp+164,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[83]),32);
        bufp->chgIData(oldp+165,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[84]),32);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[85]),32);
        bufp->chgIData(oldp+167,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[86]),32);
        bufp->chgIData(oldp+168,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[87]),32);
        bufp->chgIData(oldp+169,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[88]),32);
        bufp->chgIData(oldp+170,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[89]),32);
        bufp->chgIData(oldp+171,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[90]),32);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[91]),32);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[92]),32);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[93]),32);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[94]),32);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[95]),32);
        bufp->chgIData(oldp+177,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[96]),32);
        bufp->chgIData(oldp+178,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[97]),32);
        bufp->chgIData(oldp+179,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[98]),32);
        bufp->chgIData(oldp+180,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[99]),32);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[100]),32);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[101]),32);
        bufp->chgIData(oldp+183,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[102]),32);
        bufp->chgIData(oldp+184,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[103]),32);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[104]),32);
        bufp->chgIData(oldp+186,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[105]),32);
        bufp->chgIData(oldp+187,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[106]),32);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[107]),32);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[108]),32);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[109]),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[110]),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[111]),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[112]),32);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[113]),32);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[114]),32);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[115]),32);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[116]),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[117]),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[118]),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[119]),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[120]),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[121]),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[122]),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[123]),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[124]),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[125]),32);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[126]),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a[127]),32);
        bufp->chgIData(oldp+209,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[0]),32);
        bufp->chgIData(oldp+210,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[1]),32);
        bufp->chgIData(oldp+211,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[2]),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[3]),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[4]),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[5]),32);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[6]),32);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[7]),32);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[8]),32);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[9]),32);
        bufp->chgIData(oldp+219,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[10]),32);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[11]),32);
        bufp->chgIData(oldp+221,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[12]),32);
        bufp->chgIData(oldp+222,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[13]),32);
        bufp->chgIData(oldp+223,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[14]),32);
        bufp->chgIData(oldp+224,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[15]),32);
        bufp->chgIData(oldp+225,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[16]),32);
        bufp->chgIData(oldp+226,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[17]),32);
        bufp->chgIData(oldp+227,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[18]),32);
        bufp->chgIData(oldp+228,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[19]),32);
        bufp->chgIData(oldp+229,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[20]),32);
        bufp->chgIData(oldp+230,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[21]),32);
        bufp->chgIData(oldp+231,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[22]),32);
        bufp->chgIData(oldp+232,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[23]),32);
        bufp->chgIData(oldp+233,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[24]),32);
        bufp->chgIData(oldp+234,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[25]),32);
        bufp->chgIData(oldp+235,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[26]),32);
        bufp->chgIData(oldp+236,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[27]),32);
        bufp->chgIData(oldp+237,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[28]),32);
        bufp->chgIData(oldp+238,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[29]),32);
        bufp->chgIData(oldp+239,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[30]),32);
        bufp->chgIData(oldp+240,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[31]),32);
        bufp->chgIData(oldp+241,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[32]),32);
        bufp->chgIData(oldp+242,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[33]),32);
        bufp->chgIData(oldp+243,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[34]),32);
        bufp->chgIData(oldp+244,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[35]),32);
        bufp->chgIData(oldp+245,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[36]),32);
        bufp->chgIData(oldp+246,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[37]),32);
        bufp->chgIData(oldp+247,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[38]),32);
        bufp->chgIData(oldp+248,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[39]),32);
        bufp->chgIData(oldp+249,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[40]),32);
        bufp->chgIData(oldp+250,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[41]),32);
        bufp->chgIData(oldp+251,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[42]),32);
        bufp->chgIData(oldp+252,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[43]),32);
        bufp->chgIData(oldp+253,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[44]),32);
        bufp->chgIData(oldp+254,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[45]),32);
        bufp->chgIData(oldp+255,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[46]),32);
        bufp->chgIData(oldp+256,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[47]),32);
        bufp->chgIData(oldp+257,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[48]),32);
        bufp->chgIData(oldp+258,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[49]),32);
        bufp->chgIData(oldp+259,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[50]),32);
        bufp->chgIData(oldp+260,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[51]),32);
        bufp->chgIData(oldp+261,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[52]),32);
        bufp->chgIData(oldp+262,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[53]),32);
        bufp->chgIData(oldp+263,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[54]),32);
        bufp->chgIData(oldp+264,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[55]),32);
        bufp->chgIData(oldp+265,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[56]),32);
        bufp->chgIData(oldp+266,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[57]),32);
        bufp->chgIData(oldp+267,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[58]),32);
        bufp->chgIData(oldp+268,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[59]),32);
        bufp->chgIData(oldp+269,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[60]),32);
        bufp->chgIData(oldp+270,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[61]),32);
        bufp->chgIData(oldp+271,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[62]),32);
        bufp->chgIData(oldp+272,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[63]),32);
        bufp->chgIData(oldp+273,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[64]),32);
        bufp->chgIData(oldp+274,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[65]),32);
        bufp->chgIData(oldp+275,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[66]),32);
        bufp->chgIData(oldp+276,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[67]),32);
        bufp->chgIData(oldp+277,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[68]),32);
        bufp->chgIData(oldp+278,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[69]),32);
        bufp->chgIData(oldp+279,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[70]),32);
        bufp->chgIData(oldp+280,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[71]),32);
        bufp->chgIData(oldp+281,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[72]),32);
        bufp->chgIData(oldp+282,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[73]),32);
        bufp->chgIData(oldp+283,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[74]),32);
        bufp->chgIData(oldp+284,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[75]),32);
        bufp->chgIData(oldp+285,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[76]),32);
        bufp->chgIData(oldp+286,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[77]),32);
        bufp->chgIData(oldp+287,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[78]),32);
        bufp->chgIData(oldp+288,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[79]),32);
        bufp->chgIData(oldp+289,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[80]),32);
        bufp->chgIData(oldp+290,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[81]),32);
        bufp->chgIData(oldp+291,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[82]),32);
        bufp->chgIData(oldp+292,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[83]),32);
        bufp->chgIData(oldp+293,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[84]),32);
        bufp->chgIData(oldp+294,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[85]),32);
        bufp->chgIData(oldp+295,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[86]),32);
        bufp->chgIData(oldp+296,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[87]),32);
        bufp->chgIData(oldp+297,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[88]),32);
        bufp->chgIData(oldp+298,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[89]),32);
        bufp->chgIData(oldp+299,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[90]),32);
        bufp->chgIData(oldp+300,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[91]),32);
        bufp->chgIData(oldp+301,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[92]),32);
        bufp->chgIData(oldp+302,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[93]),32);
        bufp->chgIData(oldp+303,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[94]),32);
        bufp->chgIData(oldp+304,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[95]),32);
        bufp->chgIData(oldp+305,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[96]),32);
        bufp->chgIData(oldp+306,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[97]),32);
        bufp->chgIData(oldp+307,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[98]),32);
        bufp->chgIData(oldp+308,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[99]),32);
        bufp->chgIData(oldp+309,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[100]),32);
        bufp->chgIData(oldp+310,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[101]),32);
        bufp->chgIData(oldp+311,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[102]),32);
        bufp->chgIData(oldp+312,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[103]),32);
        bufp->chgIData(oldp+313,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[104]),32);
        bufp->chgIData(oldp+314,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[105]),32);
        bufp->chgIData(oldp+315,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[106]),32);
        bufp->chgIData(oldp+316,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[107]),32);
        bufp->chgIData(oldp+317,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[108]),32);
        bufp->chgIData(oldp+318,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[109]),32);
        bufp->chgIData(oldp+319,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[110]),32);
        bufp->chgIData(oldp+320,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[111]),32);
        bufp->chgIData(oldp+321,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[112]),32);
        bufp->chgIData(oldp+322,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[113]),32);
        bufp->chgIData(oldp+323,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[114]),32);
        bufp->chgIData(oldp+324,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[115]),32);
        bufp->chgIData(oldp+325,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[116]),32);
        bufp->chgIData(oldp+326,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[117]),32);
        bufp->chgIData(oldp+327,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[118]),32);
        bufp->chgIData(oldp+328,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[119]),32);
        bufp->chgIData(oldp+329,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[120]),32);
        bufp->chgIData(oldp+330,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[121]),32);
        bufp->chgIData(oldp+331,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[122]),32);
        bufp->chgIData(oldp+332,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[123]),32);
        bufp->chgIData(oldp+333,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[124]),32);
        bufp->chgIData(oldp+334,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[125]),32);
        bufp->chgIData(oldp+335,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[126]),32);
        bufp->chgIData(oldp+336,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b[127]),32);
        bufp->chgCData(oldp+337,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_wb_addr),7);
        bufp->chgCData(oldp+338,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__write_fifo_a_addr),7);
        bufp->chgCData(oldp+339,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__write_fifo_b_addr),7);
        bufp->chgCData(oldp+340,((0x7fU & ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_use_fifo) 
                                             & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__tx_busy)) 
                                            & (~ ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spi_read_addr) 
                                                  >> 7U)))
                                            ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spi_read_addr)
                                            : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_wb_addr)))),7);
        bufp->chgCData(oldp+341,((0x7fU & ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_use_fifo) 
                                             & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__tx_busy)) 
                                            & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spi_read_addr) 
                                               >> 7U))
                                            ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spi_read_addr)
                                            : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_wb_addr)))),7);
        bufp->chgCData(oldp+342,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spi_read_addr),8);
        bufp->chgCData(oldp+343,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spi_write_addr),8);
        bufp->chgIData(oldp+344,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__write_fifo_a_data),32);
        bufp->chgIData(oldp+345,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__write_fifo_b_data),32);
        bufp->chgIData(oldp+346,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_a_word),32);
        bufp->chgIData(oldp+347,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__fifo_b_word),32);
        bufp->chgIData(oldp+348,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spi_read_data),32);
        bufp->chgIData(oldp+349,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spi_write_data),32);
        bufp->chgBit(oldp+350,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__write_fifo_a));
        bufp->chgBit(oldp+351,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__write_fifo_b));
        bufp->chgIData(oldp+352,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_data_reg),32);
        bufp->chgBit(oldp+353,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_cmd_err));
        bufp->chgCData(oldp+354,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_last_r_one),8);
        bufp->chgBit(oldp+355,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_removed));
        bufp->chgBit(oldp+356,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_present));
        bufp->chgCData(oldp+357,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_lgblklen),4);
        bufp->chgIData(oldp+358,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_watchdog),26);
        bufp->chgBit(oldp+359,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_watchdog_err));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__ll_advance));
        bufp->chgCData(oldp+361,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_sdspi_clk),8);
        bufp->chgBit(oldp+362,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__ll_cmd_stb));
        bufp->chgCData(oldp+363,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__ll_cmd_dat),8);
        bufp->chgBit(oldp+364,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__ll_out_stb));
        bufp->chgBit(oldp+365,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__ll_idle));
        bufp->chgCData(oldp+366,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__ll_out_dat),8);
        bufp->chgBit(oldp+367,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_fifo_id));
        bufp->chgBit(oldp+368,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_use_fifo));
        bufp->chgBit(oldp+369,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__write_to_card));
        bufp->chgBit(oldp+370,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__cmd_busy));
        bufp->chgCData(oldp+371,((0xffU & (IData)((vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spicmdi__DOT__shift_data 
                                                   >> 0x20U)))),8);
        bufp->chgBit(oldp+372,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__cmd_sent));
        bufp->chgBit(oldp+373,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__cmd_valid));
        bufp->chgQData(oldp+374,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__cmd_response),40);
        bufp->chgBit(oldp+376,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__rx_start));
        bufp->chgBit(oldp+377,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spi_write_to_fifo));
        bufp->chgBit(oldp+378,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__rx_valid));
        bufp->chgBit(oldp+379,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__rx_busy));
        bufp->chgCData(oldp+380,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__rx_response),8);
        bufp->chgBit(oldp+381,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__tx_start));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spi_read_from_fifo));
        bufp->chgBit(oldp+383,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__tx_stb));
        bufp->chgCData(oldp+384,((0xffU & (IData)((vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox 
                                                   >> 0x20U)))),8);
        bufp->chgBit(oldp+385,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__tx_valid));
        bufp->chgBit(oldp+386,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__tx_busy));
        bufp->chgCData(oldp+387,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__tx_response),8);
        bufp->chgBit(oldp+388,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__last_busy));
        bufp->chgCData(oldp+389,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__raw_card_present),3);
        bufp->chgSData(oldp+390,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__card_detect_counter),10);
        bufp->chgBit(oldp+391,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_z_counter));
        bufp->chgCData(oldp+392,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_clk_counter),8);
        bufp->chgBit(oldp+393,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_idle));
        bufp->chgCData(oldp+394,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_state),4);
        bufp->chgCData(oldp+395,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_byte),8);
        bufp->chgCData(oldp+396,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__lowlevel__DOT__r_ireg),8);
        bufp->chgBit(oldp+397,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__lowlevel__DOT__byte_accepted));
        bufp->chgBit(oldp+398,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__lowlevel__DOT__restart_counter));
        bufp->chgBit(oldp+399,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__r_startup_hold));
        bufp->chgBit(oldp+400,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__r_powerup_hold));
        bufp->chgSData(oldp+401,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_POWERUP__DOT__powerup_counter),10);
        bufp->chgCData(oldp+402,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__lowlevel__DOT__WAIT_FOR_STARTUP__DOT__startup_counter),7);
        bufp->chgBit(oldp+403,(vlSymsp->TOP__aquila_testharness.SD_Card_Controller__DOT____Vcellinp__spicmdi____pinNumber3));
        bufp->chgCData(oldp+404,((3U & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o 
                                        >> 8U))),2);
        bufp->chgCData(oldp+405,((0x3fU & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_data_o)),6);
        bufp->chgBit(oldp+406,((1U & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__ll_advance)))));
        bufp->chgBit(oldp+407,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spicmdi__DOT__almost_sent));
        bufp->chgCData(oldp+408,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_valid_sreg),5);
        bufp->chgBit(oldp+409,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_busy));
        bufp->chgCData(oldp+410,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_bit_counter),5);
        bufp->chgQData(oldp+411,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_shift_reg),40);
        bufp->chgQData(oldp+413,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spicmdi__DOT__shift_data),40);
        bufp->chgCData(oldp+415,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spicmdi__DOT__crc_byte),8);
        bufp->chgBit(oldp+416,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_r1_byte));
        bufp->chgBit(oldp+417,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_check_busy));
        bufp->chgBit(oldp+418,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rxvalid));
        bufp->chgCData(oldp+419,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spicmdi__DOT__rx_counter),3);
        bufp->chgCData(oldp+420,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spicmdi__DOT__next_crc_byte),7);
        bufp->chgBit(oldp+421,(vlSymsp->TOP__aquila_testharness.SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7));
        bufp->chgBit(oldp+422,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__error_token));
        bufp->chgBit(oldp+423,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__start_token));
        bufp->chgBit(oldp+424,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__start_token) 
                                | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__error_token))));
        bufp->chgBit(oldp+425,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__received_token));
        bufp->chgBit(oldp+426,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__done));
        bufp->chgBit(oldp+427,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__lastaddr));
        bufp->chgBit(oldp+428,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__all_mem_written));
        bufp->chgBit(oldp+429,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__lastdata));
        bufp->chgCData(oldp+430,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_byte),2);
        bufp->chgCData(oldp+431,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__r_lgblksz_m3),3);
        bufp->chgBit(oldp+432,(((IData)(vlSymsp->TOP__aquila_testharness.SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber7) 
                                & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__all_mem_written)))));
        bufp->chgCData(oldp+433,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_fill),4);
        bufp->chgCData(oldp+434,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_gearbox),8);
        bufp->chgSData(oldp+435,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__next_crc_data),16);
        bufp->chgSData(oldp+436,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_data),16);
        bufp->chgBit(oldp+437,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_err));
        bufp->chgBit(oldp+438,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__crc_active));
        bufp->chgCData(oldp+439,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__fill),3);
        bufp->chgIData(oldp+440,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__gearbox),24);
        bufp->chgSData(oldp+441,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spirxdatai__DOT__first_crc_data),16);
        bufp->chgBit(oldp+442,(vlSymsp->TOP__aquila_testharness.SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber10));
        bufp->chgBit(oldp+443,(vlSymsp->TOP__aquila_testharness.SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber13));
        bufp->chgCData(oldp+444,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__rdvalid),2);
        bufp->chgQData(oldp+445,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__gearbox),40);
        bufp->chgCData(oldp+447,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__fill),5);
        bufp->chgBit(oldp+448,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_flag));
        bufp->chgBit(oldp+449,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_stb));
        bufp->chgBit(oldp+450,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__all_mem_read));
        bufp->chgBit(oldp+451,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__lastaddr));
        bufp->chgBit(oldp+452,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__data_sent));
        bufp->chgBit(oldp+453,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__received_token));
        bufp->chgBit(oldp+454,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__all_idle));
        bufp->chgBit(oldp+455,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_active));
        bufp->chgCData(oldp+456,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_fill),5);
        bufp->chgIData(oldp+457,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_gearbox),32);
        bufp->chgSData(oldp+458,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__crc_data),16);
        bufp->chgBit(oldp+459,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__token));
        bufp->chgCData(oldp+460,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__r_lgblksz_m3),3);
        bufp->chgSData(oldp+461,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__spitxdatai__DOT__next_crc_data),16);
        bufp->chgBit(oldp+462,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__o_rts_n));
        bufp->chgBit(oldp+463,((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxf_status))));
        bufp->chgBit(oldp+464,((1U & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txf_status))));
        bufp->chgBit(oldp+465,((1U & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxf_status) 
                                      >> 1U))));
        bufp->chgBit(oldp+466,((1U & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txf_status) 
                                      >> 1U))));
        bufp->chgBit(oldp+467,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__r_busy));
        bufp->chgIData(oldp+468,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__uart_setup),31);
        bufp->chgBit(oldp+469,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx_stb));
        bufp->chgBit(oldp+470,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx_break));
        bufp->chgBit(oldp+471,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx_perr));
        bufp->chgBit(oldp+472,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx_ferr));
        bufp->chgBit(oldp+473,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__ck_uart));
        bufp->chgCData(oldp+474,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx_uart_data),8);
        bufp->chgBit(oldp+475,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx_uart_reset));
        bufp->chgBit(oldp+476,((1U & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__will_underflow)))));
        bufp->chgBit(oldp+477,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx_stb) 
                                & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__w_write)))));
        bufp->chgCData(oldp+478,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxf_wb_read)
                                   ? (0xffU & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__osrc)
                                                ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__last_write)
                                                : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__r_data)))
                                   : 0U)),8);
        bufp->chgSData(oldp+479,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxf_status),16);
        bufp->chgBit(oldp+480,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxf_wb_read));
        bufp->chgBit(oldp+481,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__r_rx_perr));
        bufp->chgBit(oldp+482,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__r_rx_ferr));
        bufp->chgIData(oldp+483,(((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx_stb) 
                                    & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__w_write))) 
                                   << 0xcU) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx_break) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx_ferr) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__r_rx_perr) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__will_underflow) 
                                                         << 8U) 
                                                        | ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxf_wb_read)
                                                            ? 
                                                           (0xffU 
                                                            & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__osrc)
                                                                ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__last_write)
                                                                : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__r_data)))
                                                            : 0U))))))),32);
        bufp->chgBit(oldp+484,((1U & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__will_underflow)))));
        bufp->chgBit(oldp+485,(((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txf_wb_write) 
                                & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__w_write)))));
        bufp->chgBit(oldp+486,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__r_tx_break));
        bufp->chgCData(oldp+487,(((IData)(vlSymsp->TOP__aquila_testharness.UART_Controller__DOT____Vcellinp__txfifo__i_rd)
                                   ? (0xffU & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__osrc)
                                                ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__last_write)
                                                : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__r_data)))
                                   : 0U)),8);
        bufp->chgSData(oldp+488,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txf_status),16);
        bufp->chgBit(oldp+489,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txf_wb_write));
        bufp->chgBit(oldp+490,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx_uart_reset));
        bufp->chgCData(oldp+491,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txf_wb_data),8);
        bufp->chgIData(oldp+492,(((0x6000U & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txf_status) 
                                              << 0xdU)) 
                                  | ((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txf_wb_write) 
                                       & (~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__w_write))) 
                                      << 0xcU) | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__ck_uart) 
                                                   << 0xbU) 
                                                  | (((IData)(vlSymsp->TOP__aquila_testharness.uart_tx) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__r_tx_break) 
                                                         << 9U) 
                                                        | ((0x100U 
                                                            & (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__r_busy) 
                                                                | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txf_status)) 
                                                               << 8U)) 
                                                           | ((1U 
                                                               & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__r_busy) 
                                                                  | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txf_status)))
                                                               ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txf_wb_data)
                                                               : 0U)))))))),32);
        bufp->chgIData(oldp+493,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txf_status) 
                                   << 0x10U) | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxf_status))),32);
        bufp->chgCData(oldp+494,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__r_wb_addr),2);
        bufp->chgBit(oldp+495,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__r_wb_ack));
        bufp->chgBit(oldp+496,(vlSymsp->TOP__aquila_testharness.UART_Controller__DOT____Vcellinp__rx____pinNumber2));
        bufp->chgIData(oldp+497,((0xffffffU & vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__r_setup)),24);
        bufp->chgIData(oldp+498,((0xffffffU & ((0x7fffffU 
                                                & (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                                                   >> 1U)) 
                                               - (IData)(1U)))),24);
        bufp->chgCData(oldp+499,((3U & (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                                        >> 0x1cU))),2);
        bufp->chgBit(oldp+500,((1U & (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+501,((1U & (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                                      >> 0x18U))));
        bufp->chgBit(oldp+502,((1U & (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+503,((1U & (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                                      >> 0x19U))));
        bufp->chgIData(oldp+504,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__r_setup),30);
        bufp->chgCData(oldp+505,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__state),4);
        bufp->chgIData(oldp+506,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__baud_counter),24);
        bufp->chgBit(oldp+507,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__zero_baud_counter));
        bufp->chgBit(oldp+508,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__q_uart));
        bufp->chgBit(oldp+509,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__qq_uart));
        bufp->chgIData(oldp+510,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__chg_counter),28);
        bufp->chgIData(oldp+511,((0xffffff0U & (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__r_setup 
                                                << 4U))),28);
        bufp->chgBit(oldp+512,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__line_synch));
        bufp->chgBit(oldp+513,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__half_baud_time));
        bufp->chgCData(oldp+514,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__data_reg),8);
        bufp->chgBit(oldp+515,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__calc_parity));
        bufp->chgBit(oldp+516,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rx__DOT__pre_wr));
        bufp->chgBit(oldp+517,(vlSymsp->TOP__aquila_testharness.UART_Controller__DOT____Vcellinp__rxfifo__i_reset));
        bufp->chgCData(oldp+518,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[0]),8);
        bufp->chgCData(oldp+519,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[1]),8);
        bufp->chgCData(oldp+520,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[2]),8);
        bufp->chgCData(oldp+521,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[3]),8);
        bufp->chgCData(oldp+522,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[4]),8);
        bufp->chgCData(oldp+523,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[5]),8);
        bufp->chgCData(oldp+524,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[6]),8);
        bufp->chgCData(oldp+525,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[7]),8);
        bufp->chgCData(oldp+526,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[8]),8);
        bufp->chgCData(oldp+527,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[9]),8);
        bufp->chgCData(oldp+528,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[10]),8);
        bufp->chgCData(oldp+529,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[11]),8);
        bufp->chgCData(oldp+530,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[12]),8);
        bufp->chgCData(oldp+531,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[13]),8);
        bufp->chgCData(oldp+532,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[14]),8);
        bufp->chgCData(oldp+533,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__fifo[15]),8);
        bufp->chgCData(oldp+534,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__r_data),8);
        bufp->chgCData(oldp+535,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__last_write),8);
        bufp->chgCData(oldp+536,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__wr_addr),4);
        bufp->chgCData(oldp+537,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__rd_addr),4);
        bufp->chgCData(oldp+538,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__r_next),4);
        bufp->chgBit(oldp+539,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__will_overflow));
        bufp->chgBit(oldp+540,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__will_underflow));
        bufp->chgBit(oldp+541,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__osrc));
        bufp->chgCData(oldp+542,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__wr_addr)))),4);
        bufp->chgCData(oldp+543,((0xfU & ((IData)(2U) 
                                          + (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__wr_addr)))),4);
        bufp->chgBit(oldp+544,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__w_write));
        bufp->chgBit(oldp+545,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__w_read));
        bufp->chgCData(oldp+546,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__r_fill),4);
        bufp->chgBit(oldp+547,((1U & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__r_fill) 
                                      >> 3U))));
        bufp->chgSData(oldp+548,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__rxfifo__DOT__w_fill),10);
        bufp->chgIData(oldp+549,((0xffffffU & vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__r_setup)),28);
        bufp->chgIData(oldp+550,((0xffffff0U & (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__r_setup 
                                                << 4U))),28);
        bufp->chgCData(oldp+551,((3U & (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__uart_setup 
                                        >> 0x1cU))),2);
        bufp->chgCData(oldp+552,((3U & (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__r_setup 
                                        >> 0x1cU))),2);
        bufp->chgBit(oldp+553,((1U & (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__r_setup 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+554,((1U & (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__r_setup 
                                      >> 0x18U))));
        bufp->chgBit(oldp+555,((1U & (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__r_setup 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+556,((1U & (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__r_setup 
                                      >> 0x19U))));
        bufp->chgBit(oldp+557,((1U & (~ (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__r_setup 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+558,((1U & (vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__uart_setup 
                                      >> 0x18U))));
        bufp->chgIData(oldp+559,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__r_setup),31);
        bufp->chgIData(oldp+560,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__baud_counter),28);
        bufp->chgCData(oldp+561,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__state),4);
        bufp->chgCData(oldp+562,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__lcl_data),8);
        bufp->chgBit(oldp+563,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__calc_parity));
        bufp->chgBit(oldp+564,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__zero_baud_counter));
        bufp->chgBit(oldp+565,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__last_state));
        bufp->chgBit(oldp+566,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__q_cts_n));
        bufp->chgBit(oldp+567,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__qq_cts_n));
        bufp->chgBit(oldp+568,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__tx__DOT__ck_cts));
        bufp->chgBit(oldp+569,(vlSymsp->TOP__aquila_testharness.UART_Controller__DOT____Vcellinp__txfifo__i_reset));
        bufp->chgBit(oldp+570,(vlSymsp->TOP__aquila_testharness.UART_Controller__DOT____Vcellinp__txfifo__i_rd));
        bufp->chgCData(oldp+571,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[0]),8);
        bufp->chgCData(oldp+572,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[1]),8);
        bufp->chgCData(oldp+573,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[2]),8);
        bufp->chgCData(oldp+574,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[3]),8);
        bufp->chgCData(oldp+575,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[4]),8);
        bufp->chgCData(oldp+576,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[5]),8);
        bufp->chgCData(oldp+577,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[6]),8);
        bufp->chgCData(oldp+578,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[7]),8);
        bufp->chgCData(oldp+579,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[8]),8);
        bufp->chgCData(oldp+580,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[9]),8);
        bufp->chgCData(oldp+581,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[10]),8);
        bufp->chgCData(oldp+582,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[11]),8);
        bufp->chgCData(oldp+583,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[12]),8);
        bufp->chgCData(oldp+584,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[13]),8);
        bufp->chgCData(oldp+585,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[14]),8);
        bufp->chgCData(oldp+586,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__fifo[15]),8);
        bufp->chgCData(oldp+587,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__r_data),8);
        bufp->chgCData(oldp+588,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__last_write),8);
        bufp->chgCData(oldp+589,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__wr_addr),4);
        bufp->chgCData(oldp+590,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__rd_addr),4);
        bufp->chgCData(oldp+591,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__r_next),4);
        bufp->chgBit(oldp+592,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__will_overflow));
        bufp->chgBit(oldp+593,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__will_underflow));
        bufp->chgBit(oldp+594,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__osrc));
        bufp->chgCData(oldp+595,((0xfU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__wr_addr)))),4);
        bufp->chgCData(oldp+596,((0xfU & ((IData)(2U) 
                                          + (IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__wr_addr)))),4);
        bufp->chgBit(oldp+597,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__w_write));
        bufp->chgBit(oldp+598,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__w_read));
        bufp->chgCData(oldp+599,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__r_fill),4);
        bufp->chgBit(oldp+600,((1U & ((IData)(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__r_fill) 
                                      >> 3U))));
        bufp->chgSData(oldp+601,(vlSymsp->TOP__aquila_testharness.__PVT__UART_Controller__DOT__txfifo__DOT__w_fill),10);
        bufp->chgBit(oldp+602,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__data_req_o) 
                                & (2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__data_sel)))));
        bufp->chgBit(oldp+603,(((0U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                        >> 0x1cU)) ? 0U
                                 : 1U)));
        bufp->chgCData(oldp+604,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__data_sel),2);
        bufp->chgBit(oldp+605,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe_is_fencei));
        bufp->chgBit(oldp+606,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__dcache_flushing));
        bufp->chgBit(oldp+607,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_ready));
        bufp->chgIData(oldp+608,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_code),32);
        bufp->chgIData(oldp+609,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__code_from_tcm),32);
        bufp->chgIData(oldp+610,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__is_diff_index_reg)
                                   ? ((4U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__line_offset_reg))
                                       ? ((2U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__line_offset_reg))
                                           ? ((1U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__line_offset_reg))
                                               ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[0U]
                                               : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[1U])
                                           : ((1U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__line_offset_reg))
                                               ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[2U]
                                               : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[3U]))
                                       : ((2U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__line_offset_reg))
                                           ? ((1U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__line_offset_reg))
                                               ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[4U]
                                               : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[5U])
                                           : ((1U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__line_offset_reg))
                                               ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[6U]
                                               : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[7U])))
                                   : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__p_data_reg)),32);
        bufp->chgBit(oldp+611,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__tcm_i_ready));
        bufp->chgBit(oldp+612,(((((2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__S)) 
                                  & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__cache_hit)) 
                                 | (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_imem_o))
                                 ? 1U : 0U)));
        bufp->chgBit(oldp+613,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__data_req_o));
        bufp->chgIData(oldp+614,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr),32);
        bufp->chgBit(oldp+615,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe_we));
        bufp->chgIData(oldp+616,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_dataout),32);
        bufp->chgBit(oldp+617,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_is_amo));
        bufp->chgCData(oldp+618,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_amo_type),5);
        bufp->chgIData(oldp+619,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__data_from_tcm),32);
        bufp->chgIData(oldp+620,(((0xaU == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__S))
                                   ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__m_data[7U]
                                   : ((((2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__S)) 
                                        & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__cache_hit)) 
                                       & (~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__rw)))
                                       ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__fromCache
                                       : (((6U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__S)) 
                                           & (~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__rw)))
                                           ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__fromMem
                                           : 0U)))),32);
        bufp->chgBit(oldp+621,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__tcm_d_ready));
        bufp->chgBit(oldp+622,((((((((2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__S)) 
                                     & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__cache_hit)) 
                                    & (~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_is_amo))) 
                                   & (~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe_is_fencei))) 
                                  | (6U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__S))) 
                                 | (0xaU == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__S))) 
                                | ((8U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__S)) 
                                   & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__WbAllFinish_r)))));
        bufp->chgBit(oldp+623,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_strobe));
        bufp->chgBit(oldp+624,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_rw));
        bufp->chgBit(oldp+625,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__atomic_unit_done));
        bufp->chgWData(oldp+626,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram),256);
        if (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_is_amo) {
            __Vtemp_h82ca627a__0[0U] = 0U;
            __Vtemp_h82ca627a__0[1U] = 0U;
            __Vtemp_h82ca627a__0[2U] = 0U;
            __Vtemp_h82ca627a__0[3U] = 0U;
            __Vtemp_h82ca627a__0[4U] = 0U;
            __Vtemp_h82ca627a__0[5U] = 0U;
            __Vtemp_h82ca627a__0[6U] = 0U;
            __Vtemp_h82ca627a__0[7U] = ((3U == (3U 
                                                & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_amo_type)))
                                         ? (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__sc_fail)
                                         : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[7U]);
        } else {
            __Vtemp_h82ca627a__0[0U] = vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_dmem_o[0U];
            __Vtemp_h82ca627a__0[1U] = vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_dmem_o[1U];
            __Vtemp_h82ca627a__0[2U] = vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_dmem_o[2U];
            __Vtemp_h82ca627a__0[3U] = vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_dmem_o[3U];
            __Vtemp_h82ca627a__0[4U] = vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_dmem_o[4U];
            __Vtemp_h82ca627a__0[5U] = vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_dmem_o[5U];
            __Vtemp_h82ca627a__0[6U] = vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_dmem_o[6U];
            __Vtemp_h82ca627a__0[7U] = vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_dmem_o[7U];
        }
        bufp->chgWData(oldp+634,(__Vtemp_h82ca627a__0),256);
        bufp->chgBit(oldp+642,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_is_amo));
        bufp->chgCData(oldp+643,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_amo_type),5);
        bufp->chgBit(oldp+644,((((((QData)((IData)(
                                                   vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem
                                                   [1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem
                                                               [0U]))) 
                                 >= vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__mtimecmp) 
                                & (0U != vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__mtimecmp))));
        bufp->chgBit(oldp+645,((0U != vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem
                                [4U])));
        bufp->chgBit(oldp+646,((0U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__data_sel))));
        bufp->chgIData(oldp+647,(((0U != (0xfU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr 
                                                  >> 0x10U)))
                                   ? 0U : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__clint_dout)),32);
        bufp->chgBit(oldp+648,(((0U == (0xfU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr 
                                                >> 0x10U)))
                                 ? (1U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__clint_d_ready))
                                 : 1U)));
        bufp->chgCData(oldp+649,((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+650,((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+651,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__data_sel_r),2);
        bufp->chgCData(oldp+652,((0xfU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr 
                                          >> 0x10U))),4);
        bufp->chgIData(oldp+653,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__clint_dout),32);
        bufp->chgBit(oldp+654,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__clint_d_ready));
        bufp->chgWData(oldp+655,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data),256);
        bufp->chgCData(oldp+663,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__state),3);
        bufp->chgCData(oldp+664,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__state_next),3);
        bufp->chgIData(oldp+665,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__reservation_addr[0]),30);
        bufp->chgBit(oldp+666,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__reservation));
        bufp->chgBit(oldp+667,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__addr_h_match));
        bufp->chgBit(oldp+668,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__addr_l_match));
        bufp->chgBit(oldp+669,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__rm_reservation));
        bufp->chgBit(oldp+670,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__sc_fail));
        bufp->chgBit(oldp+671,((2U == (3U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_amo_type)))));
        bufp->chgBit(oldp+672,((3U == (3U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_amo_type)))));
        bufp->chgBit(oldp+673,(((1U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__state)) 
                                | (2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__state)))));
        bufp->chgBit(oldp+674,((2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__state))));
        bufp->chgBit(oldp+675,((3U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__state))));
        __Vtemp_haab477d0__0[0U] = 0U;
        __Vtemp_haab477d0__0[1U] = 0U;
        __Vtemp_haab477d0__0[2U] = 0U;
        __Vtemp_haab477d0__0[3U] = 0U;
        __Vtemp_haab477d0__0[4U] = 0U;
        __Vtemp_haab477d0__0[5U] = 0U;
        __Vtemp_haab477d0__0[6U] = 0U;
        __Vtemp_haab477d0__0[7U] = ((3U == (3U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_amo_type)))
                                     ? (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__sc_fail)
                                     : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[7U]);
        bufp->chgWData(oldp+676,(__Vtemp_haab477d0__0),256);
        __Vtemp_he4d016ab__0[0U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[0U];
        __Vtemp_he4d016ab__0[1U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[1U];
        __Vtemp_he4d016ab__0[2U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[2U];
        __Vtemp_he4d016ab__0[3U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[3U];
        __Vtemp_he4d016ab__0[4U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[4U];
        __Vtemp_he4d016ab__0[5U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[5U];
        __Vtemp_he4d016ab__0[6U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[6U];
        __Vtemp_he4d016ab__0[7U] = vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__result;
        bufp->chgWData(oldp+684,(__Vtemp_he4d016ab__0),256);
        bufp->chgIData(oldp+692,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[7U]),32);
        bufp->chgIData(oldp+693,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[7U]),32);
        bufp->chgIData(oldp+694,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__result),32);
        bufp->chgIData(oldp+695,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__i),32);
        bufp->chgBit(oldp+696,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__rs1_SLT_rs2));
        bufp->chgQData(oldp+697,((((QData)((IData)(
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_amo_type) 
                                                      >> 3U)) 
                                                    & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[7U] 
                                                       >> 0x1fU)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__ATOM_U__DOT__m_data[7U])))),33);
        bufp->chgQData(oldp+699,((((QData)((IData)(
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_amo_type) 
                                                      >> 3U)) 
                                                    & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[7U] 
                                                       >> 0x1fU)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_cache2dram[7U])))),33);
        bufp->chgBit(oldp+701,(vlSymsp->TOP__aquila_testharness__aquila_core.__Vcellinp__CLINT__en_i));
        bufp->chgBit(oldp+702,((((3U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__data_sel)) 
                                 & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe_we)) 
                                & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__data_req_o))));
        bufp->chgCData(oldp+703,((7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr 
                                        >> 2U))),3);
        bufp->chgIData(oldp+704,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem[0]),32);
        bufp->chgIData(oldp+705,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem[1]),32);
        bufp->chgIData(oldp+706,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem[2]),32);
        bufp->chgIData(oldp+707,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem[3]),32);
        bufp->chgIData(oldp+708,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem[4]),32);
        bufp->chgQData(oldp+709,((((QData)((IData)(
                                                   vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem
                                                   [1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem
                                                               [0U])))),64);
        bufp->chgQData(oldp+711,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__mtimecmp),64);
        bufp->chgIData(oldp+713,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem
                                 [4U]),32);
        bufp->chgBit(oldp+714,((0xffffffffU == vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__CLINT__DOT__clint_mem
                                [0U])));
        bufp->chgBit(oldp+715,(vlSymsp->TOP__aquila_testharness__aquila_core.__Vcellinp__D_Cache__p_strobe_i));
        bufp->chgBit(oldp+716,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe_we) 
                                & (1U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__data_sel)))));
        bufp->chgBit(oldp+717,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__way_hit[0]));
        bufp->chgBit(oldp+718,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__way_hit[1]));
        bufp->chgBit(oldp+719,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__way_hit[2]));
        bufp->chgBit(oldp+720,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__way_hit[3]));
        bufp->chgCData(oldp+721,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__hit_index),2);
        bufp->chgBit(oldp+722,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__cache_hit));
        bufp->chgWData(oldp+723,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_data_i),256);
        bufp->chgWData(oldp+731,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_data_update),256);
        bufp->chgWData(oldp+739,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__m_data_update),256);
        bufp->chgWData(oldp+747,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_block[0]),256);
        bufp->chgWData(oldp+755,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_block[1]),256);
        bufp->chgWData(oldp+763,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_block[2]),256);
        bufp->chgWData(oldp+771,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_block[3]),256);
        bufp->chgWData(oldp+779,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_data_hit),256);
        bufp->chgBit(oldp+787,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__cache_write[0]));
        bufp->chgBit(oldp+788,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__cache_write[1]));
        bufp->chgBit(oldp+789,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__cache_write[2]));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__cache_write[3]));
        bufp->chgBit(oldp+791,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__valid_write[0]));
        bufp->chgBit(oldp+792,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__valid_write[1]));
        bufp->chgBit(oldp+793,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__valid_write[2]));
        bufp->chgBit(oldp+794,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__valid_write[3]));
        bufp->chgBit(oldp+795,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__dirty_write[0]));
        bufp->chgBit(oldp+796,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__dirty_write[1]));
        bufp->chgBit(oldp+797,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__dirty_write[2]));
        bufp->chgBit(oldp+798,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__dirty_write[3]));
        bufp->chgIData(oldp+799,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_tag_o[0]),20);
        bufp->chgIData(oldp+800,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_tag_o[1]),20);
        bufp->chgIData(oldp+801,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_tag_o[2]),20);
        bufp->chgIData(oldp+802,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_tag_o[3]),20);
        bufp->chgBit(oldp+803,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_valid_o[0]));
        bufp->chgBit(oldp+804,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_valid_o[1]));
        bufp->chgBit(oldp+805,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_valid_o[2]));
        bufp->chgBit(oldp+806,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_valid_o[3]));
        bufp->chgBit(oldp+807,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_dirty_o[0]));
        bufp->chgBit(oldp+808,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_dirty_o[1]));
        bufp->chgBit(oldp+809,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_dirty_o[2]));
        bufp->chgBit(oldp+810,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__c_dirty_o[3]));
        bufp->chgCData(oldp+811,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__init_count),7);
        bufp->chgIData(oldp+812,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__idx),32);
        bufp->chgCData(oldp+813,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[0]),2);
        bufp->chgCData(oldp+814,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[1]),2);
        bufp->chgCData(oldp+815,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[2]),2);
        bufp->chgCData(oldp+816,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[3]),2);
        bufp->chgCData(oldp+817,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[4]),2);
        bufp->chgCData(oldp+818,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[5]),2);
        bufp->chgCData(oldp+819,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[6]),2);
        bufp->chgCData(oldp+820,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[7]),2);
        bufp->chgCData(oldp+821,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[8]),2);
        bufp->chgCData(oldp+822,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[9]),2);
        bufp->chgCData(oldp+823,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[10]),2);
        bufp->chgCData(oldp+824,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[11]),2);
        bufp->chgCData(oldp+825,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[12]),2);
        bufp->chgCData(oldp+826,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[13]),2);
        bufp->chgCData(oldp+827,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[14]),2);
        bufp->chgCData(oldp+828,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[15]),2);
        bufp->chgCData(oldp+829,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[16]),2);
        bufp->chgCData(oldp+830,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[17]),2);
        bufp->chgCData(oldp+831,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[18]),2);
        bufp->chgCData(oldp+832,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[19]),2);
        bufp->chgCData(oldp+833,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[20]),2);
        bufp->chgCData(oldp+834,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[21]),2);
        bufp->chgCData(oldp+835,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[22]),2);
        bufp->chgCData(oldp+836,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[23]),2);
        bufp->chgCData(oldp+837,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[24]),2);
        bufp->chgCData(oldp+838,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[25]),2);
        bufp->chgCData(oldp+839,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[26]),2);
        bufp->chgCData(oldp+840,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[27]),2);
        bufp->chgCData(oldp+841,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[28]),2);
        bufp->chgCData(oldp+842,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[29]),2);
        bufp->chgCData(oldp+843,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[30]),2);
        bufp->chgCData(oldp+844,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[31]),2);
        bufp->chgCData(oldp+845,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[32]),2);
        bufp->chgCData(oldp+846,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[33]),2);
        bufp->chgCData(oldp+847,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[34]),2);
        bufp->chgCData(oldp+848,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[35]),2);
        bufp->chgCData(oldp+849,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[36]),2);
        bufp->chgCData(oldp+850,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[37]),2);
        bufp->chgCData(oldp+851,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[38]),2);
        bufp->chgCData(oldp+852,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[39]),2);
        bufp->chgCData(oldp+853,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[40]),2);
        bufp->chgCData(oldp+854,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[41]),2);
        bufp->chgCData(oldp+855,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[42]),2);
        bufp->chgCData(oldp+856,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[43]),2);
        bufp->chgCData(oldp+857,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[44]),2);
        bufp->chgCData(oldp+858,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[45]),2);
        bufp->chgCData(oldp+859,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[46]),2);
        bufp->chgCData(oldp+860,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[47]),2);
        bufp->chgCData(oldp+861,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[48]),2);
        bufp->chgCData(oldp+862,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[49]),2);
        bufp->chgCData(oldp+863,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[50]),2);
        bufp->chgCData(oldp+864,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[51]),2);
        bufp->chgCData(oldp+865,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[52]),2);
        bufp->chgCData(oldp+866,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[53]),2);
        bufp->chgCData(oldp+867,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[54]),2);
        bufp->chgCData(oldp+868,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[55]),2);
        bufp->chgCData(oldp+869,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[56]),2);
        bufp->chgCData(oldp+870,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[57]),2);
        bufp->chgCData(oldp+871,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[58]),2);
        bufp->chgCData(oldp+872,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[59]),2);
        bufp->chgCData(oldp+873,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[60]),2);
        bufp->chgCData(oldp+874,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[61]),2);
        bufp->chgCData(oldp+875,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[62]),2);
        bufp->chgCData(oldp+876,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[63]),2);
        bufp->chgCData(oldp+877,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[64]),2);
        bufp->chgCData(oldp+878,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[65]),2);
        bufp->chgCData(oldp+879,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[66]),2);
        bufp->chgCData(oldp+880,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[67]),2);
        bufp->chgCData(oldp+881,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[68]),2);
        bufp->chgCData(oldp+882,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[69]),2);
        bufp->chgCData(oldp+883,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[70]),2);
        bufp->chgCData(oldp+884,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[71]),2);
        bufp->chgCData(oldp+885,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[72]),2);
        bufp->chgCData(oldp+886,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[73]),2);
        bufp->chgCData(oldp+887,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[74]),2);
        bufp->chgCData(oldp+888,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[75]),2);
        bufp->chgCData(oldp+889,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[76]),2);
        bufp->chgCData(oldp+890,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[77]),2);
        bufp->chgCData(oldp+891,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[78]),2);
        bufp->chgCData(oldp+892,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[79]),2);
        bufp->chgCData(oldp+893,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[80]),2);
        bufp->chgCData(oldp+894,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[81]),2);
        bufp->chgCData(oldp+895,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[82]),2);
        bufp->chgCData(oldp+896,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[83]),2);
        bufp->chgCData(oldp+897,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[84]),2);
        bufp->chgCData(oldp+898,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[85]),2);
        bufp->chgCData(oldp+899,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[86]),2);
        bufp->chgCData(oldp+900,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[87]),2);
        bufp->chgCData(oldp+901,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[88]),2);
        bufp->chgCData(oldp+902,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[89]),2);
        bufp->chgCData(oldp+903,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[90]),2);
        bufp->chgCData(oldp+904,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[91]),2);
        bufp->chgCData(oldp+905,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[92]),2);
        bufp->chgCData(oldp+906,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[93]),2);
        bufp->chgCData(oldp+907,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[94]),2);
        bufp->chgCData(oldp+908,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[95]),2);
        bufp->chgCData(oldp+909,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[96]),2);
        bufp->chgCData(oldp+910,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[97]),2);
        bufp->chgCData(oldp+911,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[98]),2);
        bufp->chgCData(oldp+912,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[99]),2);
        bufp->chgCData(oldp+913,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[100]),2);
        bufp->chgCData(oldp+914,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[101]),2);
        bufp->chgCData(oldp+915,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[102]),2);
        bufp->chgCData(oldp+916,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[103]),2);
        bufp->chgCData(oldp+917,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[104]),2);
        bufp->chgCData(oldp+918,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[105]),2);
        bufp->chgCData(oldp+919,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[106]),2);
        bufp->chgCData(oldp+920,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[107]),2);
        bufp->chgCData(oldp+921,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[108]),2);
        bufp->chgCData(oldp+922,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[109]),2);
        bufp->chgCData(oldp+923,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[110]),2);
        bufp->chgCData(oldp+924,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[111]),2);
        bufp->chgCData(oldp+925,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[112]),2);
        bufp->chgCData(oldp+926,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[113]),2);
        bufp->chgCData(oldp+927,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[114]),2);
        bufp->chgCData(oldp+928,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[115]),2);
        bufp->chgCData(oldp+929,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[116]),2);
        bufp->chgCData(oldp+930,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[117]),2);
        bufp->chgCData(oldp+931,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[118]),2);
        bufp->chgCData(oldp+932,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[119]),2);
        bufp->chgCData(oldp+933,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[120]),2);
        bufp->chgCData(oldp+934,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[121]),2);
        bufp->chgCData(oldp+935,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[122]),2);
        bufp->chgCData(oldp+936,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[123]),2);
        bufp->chgCData(oldp+937,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[124]),2);
        bufp->chgCData(oldp+938,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[125]),2);
        bufp->chgCData(oldp+939,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[126]),2);
        bufp->chgCData(oldp+940,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__FIFO_cnt[127]),2);
        bufp->chgCData(oldp+941,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__victim_sel),2);
        bufp->chgCData(oldp+942,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__line_offset),3);
        bufp->chgCData(oldp+943,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__line_index),7);
        bufp->chgIData(oldp+944,((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__p_addr_r 
                                  >> 0xcU)),20);
        bufp->chgCData(oldp+945,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__addr_sram),7);
        bufp->chgIData(oldp+946,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__p_addr_r),32);
        bufp->chgIData(oldp+947,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__datain_from_p),32);
        bufp->chgBit(oldp+948,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__rw));
        bufp->chgCData(oldp+949,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__byte_enable_from_p),4);
        bufp->chgBit(oldp+950,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__is_amo_reg));
        bufp->chgWData(oldp+951,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__m_data),256);
        bufp->chgCData(oldp+959,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__N_LINES_cnt),7);
        bufp->chgCData(oldp+960,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__N_WAYS_cnt),2);
        bufp->chgBit(oldp+961,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__NeedtoWb));
        bufp->chgBit(oldp+962,(((0x7fU == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__N_LINES_cnt)) 
                                & (3U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__N_WAYS_cnt)))));
        bufp->chgBit(oldp+963,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__WbAllFinish_r));
        bufp->chgCData(oldp+964,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__S),4);
        bufp->chgCData(oldp+965,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__S_nxt),4);
        bufp->chgIData(oldp+966,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__fromCache),32);
        bufp->chgIData(oldp+967,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__fromMem),32);
        bufp->chgBit(oldp+968,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__m_strobe));
        bufp->chgBit(oldp+969,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__m_strobe_r));
        bufp->chgIData(oldp+970,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__update_data),32);
        bufp->chgCData(oldp+971,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__dirty_raddr),7);
        bufp->chgCData(oldp+972,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__dirty_waddr),7);
        bufp->chgBit(oldp+973,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__dirty_datai));
        bufp->chgBit(oldp+974,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__cache_write
                               [0U]));
        bufp->chgWData(oldp+975,(vlSymsp->TOP__aquila_testharness__aquila_core.D_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o),256);
        bufp->chgWData(oldp+983,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
        bufp->chgWData(oldp+991,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
        bufp->chgWData(oldp+999,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
        bufp->chgWData(oldp+1007,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
        bufp->chgWData(oldp+1015,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
        bufp->chgWData(oldp+1023,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
        bufp->chgWData(oldp+1031,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
        bufp->chgWData(oldp+1039,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
        bufp->chgWData(oldp+1047,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
        bufp->chgWData(oldp+1055,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
        bufp->chgWData(oldp+1063,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
        bufp->chgWData(oldp+1071,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
        bufp->chgWData(oldp+1079,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
        bufp->chgWData(oldp+1087,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
        bufp->chgWData(oldp+1095,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
        bufp->chgWData(oldp+1103,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
        bufp->chgWData(oldp+1111,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
        bufp->chgWData(oldp+1119,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
        bufp->chgWData(oldp+1127,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
        bufp->chgWData(oldp+1135,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
        bufp->chgWData(oldp+1143,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
        bufp->chgWData(oldp+1151,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
        bufp->chgWData(oldp+1159,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
        bufp->chgWData(oldp+1167,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
        bufp->chgWData(oldp+1175,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
        bufp->chgWData(oldp+1183,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
        bufp->chgWData(oldp+1191,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
        bufp->chgWData(oldp+1199,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
        bufp->chgWData(oldp+1207,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
        bufp->chgWData(oldp+1215,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
        bufp->chgWData(oldp+1223,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
        bufp->chgWData(oldp+1231,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
        bufp->chgWData(oldp+1239,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[32]),256);
        bufp->chgWData(oldp+1247,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[33]),256);
        bufp->chgWData(oldp+1255,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[34]),256);
        bufp->chgWData(oldp+1263,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[35]),256);
        bufp->chgWData(oldp+1271,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[36]),256);
        bufp->chgWData(oldp+1279,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[37]),256);
        bufp->chgWData(oldp+1287,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[38]),256);
        bufp->chgWData(oldp+1295,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[39]),256);
        bufp->chgWData(oldp+1303,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[40]),256);
        bufp->chgWData(oldp+1311,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[41]),256);
        bufp->chgWData(oldp+1319,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[42]),256);
        bufp->chgWData(oldp+1327,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[43]),256);
        bufp->chgWData(oldp+1335,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[44]),256);
        bufp->chgWData(oldp+1343,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[45]),256);
        bufp->chgWData(oldp+1351,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[46]),256);
        bufp->chgWData(oldp+1359,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[47]),256);
        bufp->chgWData(oldp+1367,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[48]),256);
        bufp->chgWData(oldp+1375,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[49]),256);
        bufp->chgWData(oldp+1383,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[50]),256);
        bufp->chgWData(oldp+1391,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[51]),256);
        bufp->chgWData(oldp+1399,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[52]),256);
        bufp->chgWData(oldp+1407,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[53]),256);
        bufp->chgWData(oldp+1415,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[54]),256);
        bufp->chgWData(oldp+1423,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[55]),256);
        bufp->chgWData(oldp+1431,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[56]),256);
        bufp->chgWData(oldp+1439,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[57]),256);
        bufp->chgWData(oldp+1447,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[58]),256);
        bufp->chgWData(oldp+1455,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[59]),256);
        bufp->chgWData(oldp+1463,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[60]),256);
        bufp->chgWData(oldp+1471,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[61]),256);
        bufp->chgWData(oldp+1479,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[62]),256);
        bufp->chgWData(oldp+1487,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[63]),256);
        bufp->chgWData(oldp+1495,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[64]),256);
        bufp->chgWData(oldp+1503,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[65]),256);
        bufp->chgWData(oldp+1511,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[66]),256);
        bufp->chgWData(oldp+1519,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[67]),256);
        bufp->chgWData(oldp+1527,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[68]),256);
        bufp->chgWData(oldp+1535,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[69]),256);
        bufp->chgWData(oldp+1543,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[70]),256);
        bufp->chgWData(oldp+1551,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[71]),256);
        bufp->chgWData(oldp+1559,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[72]),256);
        bufp->chgWData(oldp+1567,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[73]),256);
        bufp->chgWData(oldp+1575,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[74]),256);
        bufp->chgWData(oldp+1583,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[75]),256);
        bufp->chgWData(oldp+1591,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[76]),256);
        bufp->chgWData(oldp+1599,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[77]),256);
        bufp->chgWData(oldp+1607,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[78]),256);
        bufp->chgWData(oldp+1615,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[79]),256);
        bufp->chgWData(oldp+1623,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[80]),256);
        bufp->chgWData(oldp+1631,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[81]),256);
        bufp->chgWData(oldp+1639,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[82]),256);
        bufp->chgWData(oldp+1647,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[83]),256);
        bufp->chgWData(oldp+1655,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[84]),256);
        bufp->chgWData(oldp+1663,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[85]),256);
        bufp->chgWData(oldp+1671,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[86]),256);
        bufp->chgWData(oldp+1679,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[87]),256);
        bufp->chgWData(oldp+1687,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[88]),256);
        bufp->chgWData(oldp+1695,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[89]),256);
        bufp->chgWData(oldp+1703,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[90]),256);
        bufp->chgWData(oldp+1711,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[91]),256);
        bufp->chgWData(oldp+1719,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[92]),256);
        bufp->chgWData(oldp+1727,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[93]),256);
        bufp->chgWData(oldp+1735,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[94]),256);
        bufp->chgWData(oldp+1743,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[95]),256);
        bufp->chgWData(oldp+1751,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[96]),256);
        bufp->chgWData(oldp+1759,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[97]),256);
        bufp->chgWData(oldp+1767,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[98]),256);
        bufp->chgWData(oldp+1775,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[99]),256);
        bufp->chgWData(oldp+1783,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[100]),256);
        bufp->chgWData(oldp+1791,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[101]),256);
        bufp->chgWData(oldp+1799,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[102]),256);
        bufp->chgWData(oldp+1807,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[103]),256);
        bufp->chgWData(oldp+1815,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[104]),256);
        bufp->chgWData(oldp+1823,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[105]),256);
        bufp->chgWData(oldp+1831,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[106]),256);
        bufp->chgWData(oldp+1839,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[107]),256);
        bufp->chgWData(oldp+1847,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[108]),256);
        bufp->chgWData(oldp+1855,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[109]),256);
        bufp->chgWData(oldp+1863,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[110]),256);
        bufp->chgWData(oldp+1871,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[111]),256);
        bufp->chgWData(oldp+1879,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[112]),256);
        bufp->chgWData(oldp+1887,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[113]),256);
        bufp->chgWData(oldp+1895,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[114]),256);
        bufp->chgWData(oldp+1903,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[115]),256);
        bufp->chgWData(oldp+1911,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[116]),256);
        bufp->chgWData(oldp+1919,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[117]),256);
        bufp->chgWData(oldp+1927,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[118]),256);
        bufp->chgWData(oldp+1935,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[119]),256);
        bufp->chgWData(oldp+1943,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[120]),256);
        bufp->chgWData(oldp+1951,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[121]),256);
        bufp->chgWData(oldp+1959,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[122]),256);
        bufp->chgWData(oldp+1967,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[123]),256);
        bufp->chgWData(oldp+1975,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[124]),256);
        bufp->chgWData(oldp+1983,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[125]),256);
        bufp->chgWData(oldp+1991,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[126]),256);
        bufp->chgWData(oldp+1999,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[127]),256);
        bufp->chgBit(oldp+2007,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__cache_write
                                [1U]));
        bufp->chgWData(oldp+2008,(vlSymsp->TOP__aquila_testharness__aquila_core.D_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o),256);
        bufp->chgWData(oldp+2016,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
        bufp->chgWData(oldp+2024,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
        bufp->chgWData(oldp+2032,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
        bufp->chgWData(oldp+2040,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
        bufp->chgWData(oldp+2048,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
        bufp->chgWData(oldp+2056,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
        bufp->chgWData(oldp+2064,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
        bufp->chgWData(oldp+2072,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
        bufp->chgWData(oldp+2080,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
        bufp->chgWData(oldp+2088,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
        bufp->chgWData(oldp+2096,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
        bufp->chgWData(oldp+2104,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
        bufp->chgWData(oldp+2112,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
        bufp->chgWData(oldp+2120,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
        bufp->chgWData(oldp+2128,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
        bufp->chgWData(oldp+2136,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
        bufp->chgWData(oldp+2144,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
        bufp->chgWData(oldp+2152,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
        bufp->chgWData(oldp+2160,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
        bufp->chgWData(oldp+2168,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
        bufp->chgWData(oldp+2176,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
        bufp->chgWData(oldp+2184,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
        bufp->chgWData(oldp+2192,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
        bufp->chgWData(oldp+2200,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
        bufp->chgWData(oldp+2208,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
        bufp->chgWData(oldp+2216,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
        bufp->chgWData(oldp+2224,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
        bufp->chgWData(oldp+2232,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
        bufp->chgWData(oldp+2240,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
        bufp->chgWData(oldp+2248,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
        bufp->chgWData(oldp+2256,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
        bufp->chgWData(oldp+2264,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
        bufp->chgWData(oldp+2272,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[32]),256);
        bufp->chgWData(oldp+2280,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[33]),256);
        bufp->chgWData(oldp+2288,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[34]),256);
        bufp->chgWData(oldp+2296,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[35]),256);
        bufp->chgWData(oldp+2304,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[36]),256);
        bufp->chgWData(oldp+2312,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[37]),256);
        bufp->chgWData(oldp+2320,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[38]),256);
        bufp->chgWData(oldp+2328,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[39]),256);
        bufp->chgWData(oldp+2336,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[40]),256);
        bufp->chgWData(oldp+2344,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[41]),256);
        bufp->chgWData(oldp+2352,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[42]),256);
        bufp->chgWData(oldp+2360,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[43]),256);
        bufp->chgWData(oldp+2368,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[44]),256);
        bufp->chgWData(oldp+2376,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[45]),256);
        bufp->chgWData(oldp+2384,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[46]),256);
        bufp->chgWData(oldp+2392,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[47]),256);
        bufp->chgWData(oldp+2400,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[48]),256);
        bufp->chgWData(oldp+2408,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[49]),256);
        bufp->chgWData(oldp+2416,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[50]),256);
        bufp->chgWData(oldp+2424,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[51]),256);
        bufp->chgWData(oldp+2432,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[52]),256);
        bufp->chgWData(oldp+2440,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[53]),256);
        bufp->chgWData(oldp+2448,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[54]),256);
        bufp->chgWData(oldp+2456,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[55]),256);
        bufp->chgWData(oldp+2464,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[56]),256);
        bufp->chgWData(oldp+2472,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[57]),256);
        bufp->chgWData(oldp+2480,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[58]),256);
        bufp->chgWData(oldp+2488,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[59]),256);
        bufp->chgWData(oldp+2496,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[60]),256);
        bufp->chgWData(oldp+2504,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[61]),256);
        bufp->chgWData(oldp+2512,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[62]),256);
        bufp->chgWData(oldp+2520,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[63]),256);
        bufp->chgWData(oldp+2528,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[64]),256);
        bufp->chgWData(oldp+2536,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[65]),256);
        bufp->chgWData(oldp+2544,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[66]),256);
        bufp->chgWData(oldp+2552,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[67]),256);
        bufp->chgWData(oldp+2560,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[68]),256);
        bufp->chgWData(oldp+2568,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[69]),256);
        bufp->chgWData(oldp+2576,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[70]),256);
        bufp->chgWData(oldp+2584,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[71]),256);
        bufp->chgWData(oldp+2592,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[72]),256);
        bufp->chgWData(oldp+2600,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[73]),256);
        bufp->chgWData(oldp+2608,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[74]),256);
        bufp->chgWData(oldp+2616,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[75]),256);
        bufp->chgWData(oldp+2624,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[76]),256);
        bufp->chgWData(oldp+2632,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[77]),256);
        bufp->chgWData(oldp+2640,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[78]),256);
        bufp->chgWData(oldp+2648,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[79]),256);
        bufp->chgWData(oldp+2656,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[80]),256);
        bufp->chgWData(oldp+2664,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[81]),256);
        bufp->chgWData(oldp+2672,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[82]),256);
        bufp->chgWData(oldp+2680,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[83]),256);
        bufp->chgWData(oldp+2688,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[84]),256);
        bufp->chgWData(oldp+2696,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[85]),256);
        bufp->chgWData(oldp+2704,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[86]),256);
        bufp->chgWData(oldp+2712,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[87]),256);
        bufp->chgWData(oldp+2720,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[88]),256);
        bufp->chgWData(oldp+2728,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[89]),256);
        bufp->chgWData(oldp+2736,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[90]),256);
        bufp->chgWData(oldp+2744,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[91]),256);
        bufp->chgWData(oldp+2752,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[92]),256);
        bufp->chgWData(oldp+2760,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[93]),256);
        bufp->chgWData(oldp+2768,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[94]),256);
        bufp->chgWData(oldp+2776,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[95]),256);
        bufp->chgWData(oldp+2784,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[96]),256);
        bufp->chgWData(oldp+2792,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[97]),256);
        bufp->chgWData(oldp+2800,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[98]),256);
        bufp->chgWData(oldp+2808,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[99]),256);
        bufp->chgWData(oldp+2816,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[100]),256);
        bufp->chgWData(oldp+2824,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[101]),256);
        bufp->chgWData(oldp+2832,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[102]),256);
        bufp->chgWData(oldp+2840,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[103]),256);
        bufp->chgWData(oldp+2848,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[104]),256);
        bufp->chgWData(oldp+2856,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[105]),256);
        bufp->chgWData(oldp+2864,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[106]),256);
        bufp->chgWData(oldp+2872,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[107]),256);
        bufp->chgWData(oldp+2880,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[108]),256);
        bufp->chgWData(oldp+2888,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[109]),256);
        bufp->chgWData(oldp+2896,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[110]),256);
        bufp->chgWData(oldp+2904,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[111]),256);
        bufp->chgWData(oldp+2912,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[112]),256);
        bufp->chgWData(oldp+2920,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[113]),256);
        bufp->chgWData(oldp+2928,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[114]),256);
        bufp->chgWData(oldp+2936,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[115]),256);
        bufp->chgWData(oldp+2944,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[116]),256);
        bufp->chgWData(oldp+2952,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[117]),256);
        bufp->chgWData(oldp+2960,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[118]),256);
        bufp->chgWData(oldp+2968,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[119]),256);
        bufp->chgWData(oldp+2976,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[120]),256);
        bufp->chgWData(oldp+2984,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[121]),256);
        bufp->chgWData(oldp+2992,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[122]),256);
        bufp->chgWData(oldp+3000,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[123]),256);
        bufp->chgWData(oldp+3008,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[124]),256);
        bufp->chgWData(oldp+3016,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[125]),256);
        bufp->chgWData(oldp+3024,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[126]),256);
        bufp->chgWData(oldp+3032,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[127]),256);
        bufp->chgBit(oldp+3040,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__cache_write
                                [2U]));
        bufp->chgWData(oldp+3041,(vlSymsp->TOP__aquila_testharness__aquila_core.D_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o),256);
        bufp->chgWData(oldp+3049,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
        bufp->chgWData(oldp+3057,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
        bufp->chgWData(oldp+3065,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
        bufp->chgWData(oldp+3073,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
        bufp->chgWData(oldp+3081,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
        bufp->chgWData(oldp+3089,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
        bufp->chgWData(oldp+3097,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
        bufp->chgWData(oldp+3105,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
        bufp->chgWData(oldp+3113,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
        bufp->chgWData(oldp+3121,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
        bufp->chgWData(oldp+3129,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
        bufp->chgWData(oldp+3137,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
        bufp->chgWData(oldp+3145,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
        bufp->chgWData(oldp+3153,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
        bufp->chgWData(oldp+3161,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
        bufp->chgWData(oldp+3169,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
        bufp->chgWData(oldp+3177,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
        bufp->chgWData(oldp+3185,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
        bufp->chgWData(oldp+3193,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
        bufp->chgWData(oldp+3201,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
        bufp->chgWData(oldp+3209,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
        bufp->chgWData(oldp+3217,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
        bufp->chgWData(oldp+3225,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
        bufp->chgWData(oldp+3233,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
        bufp->chgWData(oldp+3241,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
        bufp->chgWData(oldp+3249,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
        bufp->chgWData(oldp+3257,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
        bufp->chgWData(oldp+3265,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
        bufp->chgWData(oldp+3273,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
        bufp->chgWData(oldp+3281,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
        bufp->chgWData(oldp+3289,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
        bufp->chgWData(oldp+3297,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
        bufp->chgWData(oldp+3305,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[32]),256);
        bufp->chgWData(oldp+3313,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[33]),256);
        bufp->chgWData(oldp+3321,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[34]),256);
        bufp->chgWData(oldp+3329,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[35]),256);
        bufp->chgWData(oldp+3337,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[36]),256);
        bufp->chgWData(oldp+3345,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[37]),256);
        bufp->chgWData(oldp+3353,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[38]),256);
        bufp->chgWData(oldp+3361,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[39]),256);
        bufp->chgWData(oldp+3369,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[40]),256);
        bufp->chgWData(oldp+3377,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[41]),256);
        bufp->chgWData(oldp+3385,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[42]),256);
        bufp->chgWData(oldp+3393,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[43]),256);
        bufp->chgWData(oldp+3401,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[44]),256);
        bufp->chgWData(oldp+3409,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[45]),256);
        bufp->chgWData(oldp+3417,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[46]),256);
        bufp->chgWData(oldp+3425,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[47]),256);
        bufp->chgWData(oldp+3433,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[48]),256);
        bufp->chgWData(oldp+3441,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[49]),256);
        bufp->chgWData(oldp+3449,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[50]),256);
        bufp->chgWData(oldp+3457,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[51]),256);
        bufp->chgWData(oldp+3465,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[52]),256);
        bufp->chgWData(oldp+3473,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[53]),256);
        bufp->chgWData(oldp+3481,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[54]),256);
        bufp->chgWData(oldp+3489,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[55]),256);
        bufp->chgWData(oldp+3497,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[56]),256);
        bufp->chgWData(oldp+3505,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[57]),256);
        bufp->chgWData(oldp+3513,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[58]),256);
        bufp->chgWData(oldp+3521,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[59]),256);
        bufp->chgWData(oldp+3529,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[60]),256);
        bufp->chgWData(oldp+3537,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[61]),256);
        bufp->chgWData(oldp+3545,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[62]),256);
        bufp->chgWData(oldp+3553,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[63]),256);
        bufp->chgWData(oldp+3561,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[64]),256);
        bufp->chgWData(oldp+3569,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[65]),256);
        bufp->chgWData(oldp+3577,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[66]),256);
        bufp->chgWData(oldp+3585,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[67]),256);
        bufp->chgWData(oldp+3593,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[68]),256);
        bufp->chgWData(oldp+3601,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[69]),256);
        bufp->chgWData(oldp+3609,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[70]),256);
        bufp->chgWData(oldp+3617,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[71]),256);
        bufp->chgWData(oldp+3625,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[72]),256);
        bufp->chgWData(oldp+3633,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[73]),256);
        bufp->chgWData(oldp+3641,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[74]),256);
        bufp->chgWData(oldp+3649,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[75]),256);
        bufp->chgWData(oldp+3657,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[76]),256);
        bufp->chgWData(oldp+3665,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[77]),256);
        bufp->chgWData(oldp+3673,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[78]),256);
        bufp->chgWData(oldp+3681,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[79]),256);
        bufp->chgWData(oldp+3689,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[80]),256);
        bufp->chgWData(oldp+3697,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[81]),256);
        bufp->chgWData(oldp+3705,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[82]),256);
        bufp->chgWData(oldp+3713,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[83]),256);
        bufp->chgWData(oldp+3721,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[84]),256);
        bufp->chgWData(oldp+3729,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[85]),256);
        bufp->chgWData(oldp+3737,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[86]),256);
        bufp->chgWData(oldp+3745,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[87]),256);
        bufp->chgWData(oldp+3753,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[88]),256);
        bufp->chgWData(oldp+3761,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[89]),256);
        bufp->chgWData(oldp+3769,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[90]),256);
        bufp->chgWData(oldp+3777,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[91]),256);
        bufp->chgWData(oldp+3785,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[92]),256);
        bufp->chgWData(oldp+3793,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[93]),256);
        bufp->chgWData(oldp+3801,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[94]),256);
        bufp->chgWData(oldp+3809,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[95]),256);
        bufp->chgWData(oldp+3817,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[96]),256);
        bufp->chgWData(oldp+3825,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[97]),256);
        bufp->chgWData(oldp+3833,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[98]),256);
        bufp->chgWData(oldp+3841,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[99]),256);
        bufp->chgWData(oldp+3849,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[100]),256);
        bufp->chgWData(oldp+3857,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[101]),256);
        bufp->chgWData(oldp+3865,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[102]),256);
        bufp->chgWData(oldp+3873,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[103]),256);
        bufp->chgWData(oldp+3881,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[104]),256);
        bufp->chgWData(oldp+3889,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[105]),256);
        bufp->chgWData(oldp+3897,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[106]),256);
        bufp->chgWData(oldp+3905,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[107]),256);
        bufp->chgWData(oldp+3913,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[108]),256);
        bufp->chgWData(oldp+3921,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[109]),256);
        bufp->chgWData(oldp+3929,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[110]),256);
        bufp->chgWData(oldp+3937,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[111]),256);
        bufp->chgWData(oldp+3945,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[112]),256);
        bufp->chgWData(oldp+3953,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[113]),256);
        bufp->chgWData(oldp+3961,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[114]),256);
        bufp->chgWData(oldp+3969,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[115]),256);
        bufp->chgWData(oldp+3977,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[116]),256);
        bufp->chgWData(oldp+3985,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[117]),256);
        bufp->chgWData(oldp+3993,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[118]),256);
        bufp->chgWData(oldp+4001,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[119]),256);
        bufp->chgWData(oldp+4009,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[120]),256);
        bufp->chgWData(oldp+4017,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[121]),256);
        bufp->chgWData(oldp+4025,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[122]),256);
        bufp->chgWData(oldp+4033,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[123]),256);
        bufp->chgWData(oldp+4041,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[124]),256);
        bufp->chgWData(oldp+4049,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[125]),256);
        bufp->chgWData(oldp+4057,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[126]),256);
        bufp->chgWData(oldp+4065,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[127]),256);
        bufp->chgBit(oldp+4073,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__cache_write
                                [3U]));
        bufp->chgWData(oldp+4074,(vlSymsp->TOP__aquila_testharness__aquila_core.D_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o),256);
        bufp->chgWData(oldp+4082,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
        bufp->chgWData(oldp+4090,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
        bufp->chgWData(oldp+4098,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
        bufp->chgWData(oldp+4106,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
        bufp->chgWData(oldp+4114,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
        bufp->chgWData(oldp+4122,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
        bufp->chgWData(oldp+4130,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
        bufp->chgWData(oldp+4138,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
        bufp->chgWData(oldp+4146,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
        bufp->chgWData(oldp+4154,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
        bufp->chgWData(oldp+4162,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
        bufp->chgWData(oldp+4170,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
        bufp->chgWData(oldp+4178,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
        bufp->chgWData(oldp+4186,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
        bufp->chgWData(oldp+4194,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
        bufp->chgWData(oldp+4202,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
        bufp->chgWData(oldp+4210,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
        bufp->chgWData(oldp+4218,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
        bufp->chgWData(oldp+4226,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
        bufp->chgWData(oldp+4234,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
        bufp->chgWData(oldp+4242,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
        bufp->chgWData(oldp+4250,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
        bufp->chgWData(oldp+4258,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
        bufp->chgWData(oldp+4266,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
        bufp->chgWData(oldp+4274,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
        bufp->chgWData(oldp+4282,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
        bufp->chgWData(oldp+4290,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
        bufp->chgWData(oldp+4298,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
        bufp->chgWData(oldp+4306,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
        bufp->chgWData(oldp+4314,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
        bufp->chgWData(oldp+4322,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
        bufp->chgWData(oldp+4330,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
        bufp->chgWData(oldp+4338,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[32]),256);
        bufp->chgWData(oldp+4346,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[33]),256);
        bufp->chgWData(oldp+4354,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[34]),256);
        bufp->chgWData(oldp+4362,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[35]),256);
        bufp->chgWData(oldp+4370,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[36]),256);
        bufp->chgWData(oldp+4378,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[37]),256);
        bufp->chgWData(oldp+4386,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[38]),256);
        bufp->chgWData(oldp+4394,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[39]),256);
        bufp->chgWData(oldp+4402,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[40]),256);
        bufp->chgWData(oldp+4410,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[41]),256);
        bufp->chgWData(oldp+4418,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[42]),256);
        bufp->chgWData(oldp+4426,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[43]),256);
        bufp->chgWData(oldp+4434,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[44]),256);
        bufp->chgWData(oldp+4442,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[45]),256);
        bufp->chgWData(oldp+4450,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[46]),256);
        bufp->chgWData(oldp+4458,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[47]),256);
        bufp->chgWData(oldp+4466,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[48]),256);
        bufp->chgWData(oldp+4474,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[49]),256);
        bufp->chgWData(oldp+4482,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[50]),256);
        bufp->chgWData(oldp+4490,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[51]),256);
        bufp->chgWData(oldp+4498,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[52]),256);
        bufp->chgWData(oldp+4506,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[53]),256);
        bufp->chgWData(oldp+4514,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[54]),256);
        bufp->chgWData(oldp+4522,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[55]),256);
        bufp->chgWData(oldp+4530,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[56]),256);
        bufp->chgWData(oldp+4538,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[57]),256);
        bufp->chgWData(oldp+4546,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[58]),256);
        bufp->chgWData(oldp+4554,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[59]),256);
        bufp->chgWData(oldp+4562,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[60]),256);
        bufp->chgWData(oldp+4570,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[61]),256);
        bufp->chgWData(oldp+4578,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[62]),256);
        bufp->chgWData(oldp+4586,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[63]),256);
        bufp->chgWData(oldp+4594,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[64]),256);
        bufp->chgWData(oldp+4602,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[65]),256);
        bufp->chgWData(oldp+4610,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[66]),256);
        bufp->chgWData(oldp+4618,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[67]),256);
        bufp->chgWData(oldp+4626,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[68]),256);
        bufp->chgWData(oldp+4634,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[69]),256);
        bufp->chgWData(oldp+4642,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[70]),256);
        bufp->chgWData(oldp+4650,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[71]),256);
        bufp->chgWData(oldp+4658,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[72]),256);
        bufp->chgWData(oldp+4666,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[73]),256);
        bufp->chgWData(oldp+4674,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[74]),256);
        bufp->chgWData(oldp+4682,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[75]),256);
        bufp->chgWData(oldp+4690,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[76]),256);
        bufp->chgWData(oldp+4698,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[77]),256);
        bufp->chgWData(oldp+4706,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[78]),256);
        bufp->chgWData(oldp+4714,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[79]),256);
        bufp->chgWData(oldp+4722,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[80]),256);
        bufp->chgWData(oldp+4730,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[81]),256);
        bufp->chgWData(oldp+4738,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[82]),256);
        bufp->chgWData(oldp+4746,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[83]),256);
        bufp->chgWData(oldp+4754,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[84]),256);
        bufp->chgWData(oldp+4762,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[85]),256);
        bufp->chgWData(oldp+4770,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[86]),256);
        bufp->chgWData(oldp+4778,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[87]),256);
        bufp->chgWData(oldp+4786,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[88]),256);
        bufp->chgWData(oldp+4794,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[89]),256);
        bufp->chgWData(oldp+4802,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[90]),256);
        bufp->chgWData(oldp+4810,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[91]),256);
        bufp->chgWData(oldp+4818,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[92]),256);
        bufp->chgWData(oldp+4826,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[93]),256);
        bufp->chgWData(oldp+4834,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[94]),256);
        bufp->chgWData(oldp+4842,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[95]),256);
        bufp->chgWData(oldp+4850,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[96]),256);
        bufp->chgWData(oldp+4858,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[97]),256);
        bufp->chgWData(oldp+4866,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[98]),256);
        bufp->chgWData(oldp+4874,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[99]),256);
        bufp->chgWData(oldp+4882,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[100]),256);
        bufp->chgWData(oldp+4890,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[101]),256);
        bufp->chgWData(oldp+4898,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[102]),256);
        bufp->chgWData(oldp+4906,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[103]),256);
        bufp->chgWData(oldp+4914,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[104]),256);
        bufp->chgWData(oldp+4922,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[105]),256);
        bufp->chgWData(oldp+4930,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[106]),256);
        bufp->chgWData(oldp+4938,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[107]),256);
        bufp->chgWData(oldp+4946,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[108]),256);
        bufp->chgWData(oldp+4954,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[109]),256);
        bufp->chgWData(oldp+4962,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[110]),256);
        bufp->chgWData(oldp+4970,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[111]),256);
        bufp->chgWData(oldp+4978,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[112]),256);
        bufp->chgWData(oldp+4986,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[113]),256);
        bufp->chgWData(oldp+4994,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[114]),256);
        bufp->chgWData(oldp+5002,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[115]),256);
        bufp->chgWData(oldp+5010,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[116]),256);
        bufp->chgWData(oldp+5018,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[117]),256);
        bufp->chgWData(oldp+5026,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[118]),256);
        bufp->chgWData(oldp+5034,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[119]),256);
        bufp->chgWData(oldp+5042,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[120]),256);
        bufp->chgWData(oldp+5050,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[121]),256);
        bufp->chgWData(oldp+5058,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[122]),256);
        bufp->chgWData(oldp+5066,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[123]),256);
        bufp->chgWData(oldp+5074,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[124]),256);
        bufp->chgWData(oldp+5082,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[125]),256);
        bufp->chgWData(oldp+5090,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[126]),256);
        bufp->chgWData(oldp+5098,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[127]),256);
        bufp->chgIData(oldp+5106,(vlSymsp->TOP__aquila_testharness__aquila_core.D_Cache__DOT____Vcellout__genblk2__BRA__0__KET____DOT__TAG_BRAM__data_o),20);
        bufp->chgIData(oldp+5107,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[0]),20);
        bufp->chgIData(oldp+5108,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[1]),20);
        bufp->chgIData(oldp+5109,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[2]),20);
        bufp->chgIData(oldp+5110,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[3]),20);
        bufp->chgIData(oldp+5111,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[4]),20);
        bufp->chgIData(oldp+5112,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[5]),20);
        bufp->chgIData(oldp+5113,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[6]),20);
        bufp->chgIData(oldp+5114,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[7]),20);
        bufp->chgIData(oldp+5115,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[8]),20);
        bufp->chgIData(oldp+5116,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[9]),20);
        bufp->chgIData(oldp+5117,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[10]),20);
        bufp->chgIData(oldp+5118,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[11]),20);
        bufp->chgIData(oldp+5119,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[12]),20);
        bufp->chgIData(oldp+5120,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[13]),20);
        bufp->chgIData(oldp+5121,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[14]),20);
        bufp->chgIData(oldp+5122,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[15]),20);
        bufp->chgIData(oldp+5123,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[16]),20);
        bufp->chgIData(oldp+5124,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[17]),20);
        bufp->chgIData(oldp+5125,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[18]),20);
        bufp->chgIData(oldp+5126,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[19]),20);
        bufp->chgIData(oldp+5127,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[20]),20);
        bufp->chgIData(oldp+5128,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[21]),20);
        bufp->chgIData(oldp+5129,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[22]),20);
        bufp->chgIData(oldp+5130,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[23]),20);
        bufp->chgIData(oldp+5131,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[24]),20);
        bufp->chgIData(oldp+5132,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[25]),20);
        bufp->chgIData(oldp+5133,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[26]),20);
        bufp->chgIData(oldp+5134,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[27]),20);
        bufp->chgIData(oldp+5135,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[28]),20);
        bufp->chgIData(oldp+5136,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[29]),20);
        bufp->chgIData(oldp+5137,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[30]),20);
        bufp->chgIData(oldp+5138,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[31]),20);
        bufp->chgIData(oldp+5139,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[32]),20);
        bufp->chgIData(oldp+5140,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[33]),20);
        bufp->chgIData(oldp+5141,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[34]),20);
        bufp->chgIData(oldp+5142,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[35]),20);
        bufp->chgIData(oldp+5143,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[36]),20);
        bufp->chgIData(oldp+5144,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[37]),20);
        bufp->chgIData(oldp+5145,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[38]),20);
        bufp->chgIData(oldp+5146,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[39]),20);
        bufp->chgIData(oldp+5147,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[40]),20);
        bufp->chgIData(oldp+5148,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[41]),20);
        bufp->chgIData(oldp+5149,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[42]),20);
        bufp->chgIData(oldp+5150,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[43]),20);
        bufp->chgIData(oldp+5151,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[44]),20);
        bufp->chgIData(oldp+5152,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[45]),20);
        bufp->chgIData(oldp+5153,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[46]),20);
        bufp->chgIData(oldp+5154,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[47]),20);
        bufp->chgIData(oldp+5155,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[48]),20);
        bufp->chgIData(oldp+5156,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[49]),20);
        bufp->chgIData(oldp+5157,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[50]),20);
        bufp->chgIData(oldp+5158,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[51]),20);
        bufp->chgIData(oldp+5159,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[52]),20);
        bufp->chgIData(oldp+5160,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[53]),20);
        bufp->chgIData(oldp+5161,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[54]),20);
        bufp->chgIData(oldp+5162,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[55]),20);
        bufp->chgIData(oldp+5163,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[56]),20);
        bufp->chgIData(oldp+5164,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[57]),20);
        bufp->chgIData(oldp+5165,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[58]),20);
        bufp->chgIData(oldp+5166,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[59]),20);
        bufp->chgIData(oldp+5167,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[60]),20);
        bufp->chgIData(oldp+5168,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[61]),20);
        bufp->chgIData(oldp+5169,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[62]),20);
        bufp->chgIData(oldp+5170,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[63]),20);
        bufp->chgIData(oldp+5171,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[64]),20);
        bufp->chgIData(oldp+5172,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[65]),20);
        bufp->chgIData(oldp+5173,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[66]),20);
        bufp->chgIData(oldp+5174,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[67]),20);
        bufp->chgIData(oldp+5175,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[68]),20);
        bufp->chgIData(oldp+5176,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[69]),20);
        bufp->chgIData(oldp+5177,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[70]),20);
        bufp->chgIData(oldp+5178,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[71]),20);
        bufp->chgIData(oldp+5179,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[72]),20);
        bufp->chgIData(oldp+5180,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[73]),20);
        bufp->chgIData(oldp+5181,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[74]),20);
        bufp->chgIData(oldp+5182,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[75]),20);
        bufp->chgIData(oldp+5183,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[76]),20);
        bufp->chgIData(oldp+5184,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[77]),20);
        bufp->chgIData(oldp+5185,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[78]),20);
        bufp->chgIData(oldp+5186,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[79]),20);
        bufp->chgIData(oldp+5187,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[80]),20);
        bufp->chgIData(oldp+5188,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[81]),20);
        bufp->chgIData(oldp+5189,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[82]),20);
        bufp->chgIData(oldp+5190,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[83]),20);
        bufp->chgIData(oldp+5191,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[84]),20);
        bufp->chgIData(oldp+5192,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[85]),20);
        bufp->chgIData(oldp+5193,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[86]),20);
        bufp->chgIData(oldp+5194,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[87]),20);
        bufp->chgIData(oldp+5195,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[88]),20);
        bufp->chgIData(oldp+5196,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[89]),20);
        bufp->chgIData(oldp+5197,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[90]),20);
        bufp->chgIData(oldp+5198,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[91]),20);
        bufp->chgIData(oldp+5199,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[92]),20);
        bufp->chgIData(oldp+5200,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[93]),20);
        bufp->chgIData(oldp+5201,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[94]),20);
        bufp->chgIData(oldp+5202,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[95]),20);
        bufp->chgIData(oldp+5203,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[96]),20);
        bufp->chgIData(oldp+5204,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[97]),20);
        bufp->chgIData(oldp+5205,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[98]),20);
        bufp->chgIData(oldp+5206,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[99]),20);
        bufp->chgIData(oldp+5207,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[100]),20);
        bufp->chgIData(oldp+5208,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[101]),20);
        bufp->chgIData(oldp+5209,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[102]),20);
        bufp->chgIData(oldp+5210,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[103]),20);
        bufp->chgIData(oldp+5211,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[104]),20);
        bufp->chgIData(oldp+5212,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[105]),20);
        bufp->chgIData(oldp+5213,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[106]),20);
        bufp->chgIData(oldp+5214,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[107]),20);
        bufp->chgIData(oldp+5215,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[108]),20);
        bufp->chgIData(oldp+5216,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[109]),20);
        bufp->chgIData(oldp+5217,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[110]),20);
        bufp->chgIData(oldp+5218,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[111]),20);
        bufp->chgIData(oldp+5219,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[112]),20);
        bufp->chgIData(oldp+5220,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[113]),20);
        bufp->chgIData(oldp+5221,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[114]),20);
        bufp->chgIData(oldp+5222,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[115]),20);
        bufp->chgIData(oldp+5223,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[116]),20);
        bufp->chgIData(oldp+5224,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[117]),20);
        bufp->chgIData(oldp+5225,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[118]),20);
        bufp->chgIData(oldp+5226,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[119]),20);
        bufp->chgIData(oldp+5227,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[120]),20);
        bufp->chgIData(oldp+5228,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[121]),20);
        bufp->chgIData(oldp+5229,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[122]),20);
        bufp->chgIData(oldp+5230,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[123]),20);
        bufp->chgIData(oldp+5231,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[124]),20);
        bufp->chgIData(oldp+5232,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[125]),20);
        bufp->chgIData(oldp+5233,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[126]),20);
        bufp->chgIData(oldp+5234,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_BRAM__DOT__RAM[127]),20);
        bufp->chgIData(oldp+5235,(vlSymsp->TOP__aquila_testharness__aquila_core.D_Cache__DOT____Vcellout__genblk2__BRA__1__KET____DOT__TAG_BRAM__data_o),20);
        bufp->chgIData(oldp+5236,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[0]),20);
        bufp->chgIData(oldp+5237,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[1]),20);
        bufp->chgIData(oldp+5238,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[2]),20);
        bufp->chgIData(oldp+5239,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[3]),20);
        bufp->chgIData(oldp+5240,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[4]),20);
        bufp->chgIData(oldp+5241,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[5]),20);
        bufp->chgIData(oldp+5242,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[6]),20);
        bufp->chgIData(oldp+5243,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[7]),20);
        bufp->chgIData(oldp+5244,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[8]),20);
        bufp->chgIData(oldp+5245,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[9]),20);
        bufp->chgIData(oldp+5246,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[10]),20);
        bufp->chgIData(oldp+5247,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[11]),20);
        bufp->chgIData(oldp+5248,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[12]),20);
        bufp->chgIData(oldp+5249,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[13]),20);
        bufp->chgIData(oldp+5250,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[14]),20);
        bufp->chgIData(oldp+5251,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[15]),20);
        bufp->chgIData(oldp+5252,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[16]),20);
        bufp->chgIData(oldp+5253,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[17]),20);
        bufp->chgIData(oldp+5254,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[18]),20);
        bufp->chgIData(oldp+5255,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[19]),20);
        bufp->chgIData(oldp+5256,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[20]),20);
        bufp->chgIData(oldp+5257,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[21]),20);
        bufp->chgIData(oldp+5258,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[22]),20);
        bufp->chgIData(oldp+5259,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[23]),20);
        bufp->chgIData(oldp+5260,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[24]),20);
        bufp->chgIData(oldp+5261,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[25]),20);
        bufp->chgIData(oldp+5262,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[26]),20);
        bufp->chgIData(oldp+5263,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[27]),20);
        bufp->chgIData(oldp+5264,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[28]),20);
        bufp->chgIData(oldp+5265,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[29]),20);
        bufp->chgIData(oldp+5266,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[30]),20);
        bufp->chgIData(oldp+5267,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[31]),20);
        bufp->chgIData(oldp+5268,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[32]),20);
        bufp->chgIData(oldp+5269,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[33]),20);
        bufp->chgIData(oldp+5270,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[34]),20);
        bufp->chgIData(oldp+5271,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[35]),20);
        bufp->chgIData(oldp+5272,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[36]),20);
        bufp->chgIData(oldp+5273,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[37]),20);
        bufp->chgIData(oldp+5274,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[38]),20);
        bufp->chgIData(oldp+5275,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[39]),20);
        bufp->chgIData(oldp+5276,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[40]),20);
        bufp->chgIData(oldp+5277,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[41]),20);
        bufp->chgIData(oldp+5278,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[42]),20);
        bufp->chgIData(oldp+5279,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[43]),20);
        bufp->chgIData(oldp+5280,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[44]),20);
        bufp->chgIData(oldp+5281,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[45]),20);
        bufp->chgIData(oldp+5282,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[46]),20);
        bufp->chgIData(oldp+5283,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[47]),20);
        bufp->chgIData(oldp+5284,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[48]),20);
        bufp->chgIData(oldp+5285,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[49]),20);
        bufp->chgIData(oldp+5286,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[50]),20);
        bufp->chgIData(oldp+5287,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[51]),20);
        bufp->chgIData(oldp+5288,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[52]),20);
        bufp->chgIData(oldp+5289,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[53]),20);
        bufp->chgIData(oldp+5290,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[54]),20);
        bufp->chgIData(oldp+5291,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[55]),20);
        bufp->chgIData(oldp+5292,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[56]),20);
        bufp->chgIData(oldp+5293,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[57]),20);
        bufp->chgIData(oldp+5294,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[58]),20);
        bufp->chgIData(oldp+5295,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[59]),20);
        bufp->chgIData(oldp+5296,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[60]),20);
        bufp->chgIData(oldp+5297,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[61]),20);
        bufp->chgIData(oldp+5298,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[62]),20);
        bufp->chgIData(oldp+5299,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[63]),20);
        bufp->chgIData(oldp+5300,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[64]),20);
        bufp->chgIData(oldp+5301,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[65]),20);
        bufp->chgIData(oldp+5302,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[66]),20);
        bufp->chgIData(oldp+5303,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[67]),20);
        bufp->chgIData(oldp+5304,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[68]),20);
        bufp->chgIData(oldp+5305,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[69]),20);
        bufp->chgIData(oldp+5306,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[70]),20);
        bufp->chgIData(oldp+5307,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[71]),20);
        bufp->chgIData(oldp+5308,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[72]),20);
        bufp->chgIData(oldp+5309,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[73]),20);
        bufp->chgIData(oldp+5310,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[74]),20);
        bufp->chgIData(oldp+5311,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[75]),20);
        bufp->chgIData(oldp+5312,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[76]),20);
        bufp->chgIData(oldp+5313,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[77]),20);
        bufp->chgIData(oldp+5314,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[78]),20);
        bufp->chgIData(oldp+5315,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[79]),20);
        bufp->chgIData(oldp+5316,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[80]),20);
        bufp->chgIData(oldp+5317,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[81]),20);
        bufp->chgIData(oldp+5318,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[82]),20);
        bufp->chgIData(oldp+5319,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[83]),20);
        bufp->chgIData(oldp+5320,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[84]),20);
        bufp->chgIData(oldp+5321,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[85]),20);
        bufp->chgIData(oldp+5322,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[86]),20);
        bufp->chgIData(oldp+5323,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[87]),20);
        bufp->chgIData(oldp+5324,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[88]),20);
        bufp->chgIData(oldp+5325,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[89]),20);
        bufp->chgIData(oldp+5326,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[90]),20);
        bufp->chgIData(oldp+5327,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[91]),20);
        bufp->chgIData(oldp+5328,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[92]),20);
        bufp->chgIData(oldp+5329,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[93]),20);
        bufp->chgIData(oldp+5330,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[94]),20);
        bufp->chgIData(oldp+5331,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[95]),20);
        bufp->chgIData(oldp+5332,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[96]),20);
        bufp->chgIData(oldp+5333,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[97]),20);
        bufp->chgIData(oldp+5334,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[98]),20);
        bufp->chgIData(oldp+5335,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[99]),20);
        bufp->chgIData(oldp+5336,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[100]),20);
        bufp->chgIData(oldp+5337,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[101]),20);
        bufp->chgIData(oldp+5338,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[102]),20);
        bufp->chgIData(oldp+5339,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[103]),20);
        bufp->chgIData(oldp+5340,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[104]),20);
        bufp->chgIData(oldp+5341,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[105]),20);
        bufp->chgIData(oldp+5342,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[106]),20);
        bufp->chgIData(oldp+5343,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[107]),20);
        bufp->chgIData(oldp+5344,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[108]),20);
        bufp->chgIData(oldp+5345,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[109]),20);
        bufp->chgIData(oldp+5346,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[110]),20);
        bufp->chgIData(oldp+5347,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[111]),20);
        bufp->chgIData(oldp+5348,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[112]),20);
        bufp->chgIData(oldp+5349,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[113]),20);
        bufp->chgIData(oldp+5350,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[114]),20);
        bufp->chgIData(oldp+5351,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[115]),20);
        bufp->chgIData(oldp+5352,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[116]),20);
        bufp->chgIData(oldp+5353,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[117]),20);
        bufp->chgIData(oldp+5354,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[118]),20);
        bufp->chgIData(oldp+5355,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[119]),20);
        bufp->chgIData(oldp+5356,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[120]),20);
        bufp->chgIData(oldp+5357,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[121]),20);
        bufp->chgIData(oldp+5358,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[122]),20);
        bufp->chgIData(oldp+5359,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[123]),20);
        bufp->chgIData(oldp+5360,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[124]),20);
        bufp->chgIData(oldp+5361,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[125]),20);
        bufp->chgIData(oldp+5362,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[126]),20);
        bufp->chgIData(oldp+5363,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_BRAM__DOT__RAM[127]),20);
        bufp->chgIData(oldp+5364,(vlSymsp->TOP__aquila_testharness__aquila_core.D_Cache__DOT____Vcellout__genblk2__BRA__2__KET____DOT__TAG_BRAM__data_o),20);
        bufp->chgIData(oldp+5365,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[0]),20);
        bufp->chgIData(oldp+5366,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[1]),20);
        bufp->chgIData(oldp+5367,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[2]),20);
        bufp->chgIData(oldp+5368,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[3]),20);
        bufp->chgIData(oldp+5369,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[4]),20);
        bufp->chgIData(oldp+5370,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[5]),20);
        bufp->chgIData(oldp+5371,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[6]),20);
        bufp->chgIData(oldp+5372,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[7]),20);
        bufp->chgIData(oldp+5373,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[8]),20);
        bufp->chgIData(oldp+5374,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[9]),20);
        bufp->chgIData(oldp+5375,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[10]),20);
        bufp->chgIData(oldp+5376,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[11]),20);
        bufp->chgIData(oldp+5377,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[12]),20);
        bufp->chgIData(oldp+5378,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[13]),20);
        bufp->chgIData(oldp+5379,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[14]),20);
        bufp->chgIData(oldp+5380,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[15]),20);
        bufp->chgIData(oldp+5381,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[16]),20);
        bufp->chgIData(oldp+5382,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[17]),20);
        bufp->chgIData(oldp+5383,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[18]),20);
        bufp->chgIData(oldp+5384,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[19]),20);
        bufp->chgIData(oldp+5385,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[20]),20);
        bufp->chgIData(oldp+5386,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[21]),20);
        bufp->chgIData(oldp+5387,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[22]),20);
        bufp->chgIData(oldp+5388,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[23]),20);
        bufp->chgIData(oldp+5389,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[24]),20);
        bufp->chgIData(oldp+5390,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[25]),20);
        bufp->chgIData(oldp+5391,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[26]),20);
        bufp->chgIData(oldp+5392,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[27]),20);
        bufp->chgIData(oldp+5393,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[28]),20);
        bufp->chgIData(oldp+5394,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[29]),20);
        bufp->chgIData(oldp+5395,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[30]),20);
        bufp->chgIData(oldp+5396,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[31]),20);
        bufp->chgIData(oldp+5397,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[32]),20);
        bufp->chgIData(oldp+5398,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[33]),20);
        bufp->chgIData(oldp+5399,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[34]),20);
        bufp->chgIData(oldp+5400,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[35]),20);
        bufp->chgIData(oldp+5401,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[36]),20);
        bufp->chgIData(oldp+5402,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[37]),20);
        bufp->chgIData(oldp+5403,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[38]),20);
        bufp->chgIData(oldp+5404,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[39]),20);
        bufp->chgIData(oldp+5405,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[40]),20);
        bufp->chgIData(oldp+5406,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[41]),20);
        bufp->chgIData(oldp+5407,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[42]),20);
        bufp->chgIData(oldp+5408,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[43]),20);
        bufp->chgIData(oldp+5409,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[44]),20);
        bufp->chgIData(oldp+5410,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[45]),20);
        bufp->chgIData(oldp+5411,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[46]),20);
        bufp->chgIData(oldp+5412,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[47]),20);
        bufp->chgIData(oldp+5413,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[48]),20);
        bufp->chgIData(oldp+5414,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[49]),20);
        bufp->chgIData(oldp+5415,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[50]),20);
        bufp->chgIData(oldp+5416,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[51]),20);
        bufp->chgIData(oldp+5417,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[52]),20);
        bufp->chgIData(oldp+5418,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[53]),20);
        bufp->chgIData(oldp+5419,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[54]),20);
        bufp->chgIData(oldp+5420,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[55]),20);
        bufp->chgIData(oldp+5421,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[56]),20);
        bufp->chgIData(oldp+5422,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[57]),20);
        bufp->chgIData(oldp+5423,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[58]),20);
        bufp->chgIData(oldp+5424,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[59]),20);
        bufp->chgIData(oldp+5425,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[60]),20);
        bufp->chgIData(oldp+5426,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[61]),20);
        bufp->chgIData(oldp+5427,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[62]),20);
        bufp->chgIData(oldp+5428,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[63]),20);
        bufp->chgIData(oldp+5429,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[64]),20);
        bufp->chgIData(oldp+5430,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[65]),20);
        bufp->chgIData(oldp+5431,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[66]),20);
        bufp->chgIData(oldp+5432,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[67]),20);
        bufp->chgIData(oldp+5433,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[68]),20);
        bufp->chgIData(oldp+5434,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[69]),20);
        bufp->chgIData(oldp+5435,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[70]),20);
        bufp->chgIData(oldp+5436,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[71]),20);
        bufp->chgIData(oldp+5437,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[72]),20);
        bufp->chgIData(oldp+5438,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[73]),20);
        bufp->chgIData(oldp+5439,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[74]),20);
        bufp->chgIData(oldp+5440,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[75]),20);
        bufp->chgIData(oldp+5441,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[76]),20);
        bufp->chgIData(oldp+5442,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[77]),20);
        bufp->chgIData(oldp+5443,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[78]),20);
        bufp->chgIData(oldp+5444,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[79]),20);
        bufp->chgIData(oldp+5445,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[80]),20);
        bufp->chgIData(oldp+5446,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[81]),20);
        bufp->chgIData(oldp+5447,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[82]),20);
        bufp->chgIData(oldp+5448,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[83]),20);
        bufp->chgIData(oldp+5449,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[84]),20);
        bufp->chgIData(oldp+5450,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[85]),20);
        bufp->chgIData(oldp+5451,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[86]),20);
        bufp->chgIData(oldp+5452,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[87]),20);
        bufp->chgIData(oldp+5453,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[88]),20);
        bufp->chgIData(oldp+5454,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[89]),20);
        bufp->chgIData(oldp+5455,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[90]),20);
        bufp->chgIData(oldp+5456,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[91]),20);
        bufp->chgIData(oldp+5457,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[92]),20);
        bufp->chgIData(oldp+5458,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[93]),20);
        bufp->chgIData(oldp+5459,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[94]),20);
        bufp->chgIData(oldp+5460,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[95]),20);
        bufp->chgIData(oldp+5461,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[96]),20);
        bufp->chgIData(oldp+5462,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[97]),20);
        bufp->chgIData(oldp+5463,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[98]),20);
        bufp->chgIData(oldp+5464,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[99]),20);
        bufp->chgIData(oldp+5465,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[100]),20);
        bufp->chgIData(oldp+5466,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[101]),20);
        bufp->chgIData(oldp+5467,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[102]),20);
        bufp->chgIData(oldp+5468,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[103]),20);
        bufp->chgIData(oldp+5469,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[104]),20);
        bufp->chgIData(oldp+5470,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[105]),20);
        bufp->chgIData(oldp+5471,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[106]),20);
        bufp->chgIData(oldp+5472,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[107]),20);
        bufp->chgIData(oldp+5473,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[108]),20);
        bufp->chgIData(oldp+5474,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[109]),20);
        bufp->chgIData(oldp+5475,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[110]),20);
        bufp->chgIData(oldp+5476,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[111]),20);
        bufp->chgIData(oldp+5477,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[112]),20);
        bufp->chgIData(oldp+5478,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[113]),20);
        bufp->chgIData(oldp+5479,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[114]),20);
        bufp->chgIData(oldp+5480,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[115]),20);
        bufp->chgIData(oldp+5481,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[116]),20);
        bufp->chgIData(oldp+5482,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[117]),20);
        bufp->chgIData(oldp+5483,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[118]),20);
        bufp->chgIData(oldp+5484,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[119]),20);
        bufp->chgIData(oldp+5485,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[120]),20);
        bufp->chgIData(oldp+5486,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[121]),20);
        bufp->chgIData(oldp+5487,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[122]),20);
        bufp->chgIData(oldp+5488,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[123]),20);
        bufp->chgIData(oldp+5489,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[124]),20);
        bufp->chgIData(oldp+5490,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[125]),20);
        bufp->chgIData(oldp+5491,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[126]),20);
        bufp->chgIData(oldp+5492,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_BRAM__DOT__RAM[127]),20);
        bufp->chgIData(oldp+5493,(vlSymsp->TOP__aquila_testharness__aquila_core.D_Cache__DOT____Vcellout__genblk2__BRA__3__KET____DOT__TAG_BRAM__data_o),20);
        bufp->chgIData(oldp+5494,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[0]),20);
        bufp->chgIData(oldp+5495,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[1]),20);
        bufp->chgIData(oldp+5496,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[2]),20);
        bufp->chgIData(oldp+5497,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[3]),20);
        bufp->chgIData(oldp+5498,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[4]),20);
        bufp->chgIData(oldp+5499,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[5]),20);
        bufp->chgIData(oldp+5500,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[6]),20);
        bufp->chgIData(oldp+5501,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[7]),20);
        bufp->chgIData(oldp+5502,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[8]),20);
        bufp->chgIData(oldp+5503,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[9]),20);
        bufp->chgIData(oldp+5504,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[10]),20);
        bufp->chgIData(oldp+5505,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[11]),20);
        bufp->chgIData(oldp+5506,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[12]),20);
        bufp->chgIData(oldp+5507,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[13]),20);
        bufp->chgIData(oldp+5508,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[14]),20);
        bufp->chgIData(oldp+5509,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[15]),20);
        bufp->chgIData(oldp+5510,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[16]),20);
        bufp->chgIData(oldp+5511,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[17]),20);
        bufp->chgIData(oldp+5512,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[18]),20);
        bufp->chgIData(oldp+5513,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[19]),20);
        bufp->chgIData(oldp+5514,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[20]),20);
        bufp->chgIData(oldp+5515,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[21]),20);
        bufp->chgIData(oldp+5516,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[22]),20);
        bufp->chgIData(oldp+5517,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[23]),20);
        bufp->chgIData(oldp+5518,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[24]),20);
        bufp->chgIData(oldp+5519,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[25]),20);
        bufp->chgIData(oldp+5520,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[26]),20);
        bufp->chgIData(oldp+5521,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[27]),20);
        bufp->chgIData(oldp+5522,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[28]),20);
        bufp->chgIData(oldp+5523,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[29]),20);
        bufp->chgIData(oldp+5524,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[30]),20);
        bufp->chgIData(oldp+5525,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[31]),20);
        bufp->chgIData(oldp+5526,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[32]),20);
        bufp->chgIData(oldp+5527,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[33]),20);
        bufp->chgIData(oldp+5528,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[34]),20);
        bufp->chgIData(oldp+5529,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[35]),20);
        bufp->chgIData(oldp+5530,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[36]),20);
        bufp->chgIData(oldp+5531,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[37]),20);
        bufp->chgIData(oldp+5532,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[38]),20);
        bufp->chgIData(oldp+5533,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[39]),20);
        bufp->chgIData(oldp+5534,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[40]),20);
        bufp->chgIData(oldp+5535,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[41]),20);
        bufp->chgIData(oldp+5536,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[42]),20);
        bufp->chgIData(oldp+5537,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[43]),20);
        bufp->chgIData(oldp+5538,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[44]),20);
        bufp->chgIData(oldp+5539,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[45]),20);
        bufp->chgIData(oldp+5540,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[46]),20);
        bufp->chgIData(oldp+5541,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[47]),20);
        bufp->chgIData(oldp+5542,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[48]),20);
        bufp->chgIData(oldp+5543,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[49]),20);
        bufp->chgIData(oldp+5544,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[50]),20);
        bufp->chgIData(oldp+5545,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[51]),20);
        bufp->chgIData(oldp+5546,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[52]),20);
        bufp->chgIData(oldp+5547,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[53]),20);
        bufp->chgIData(oldp+5548,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[54]),20);
        bufp->chgIData(oldp+5549,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[55]),20);
        bufp->chgIData(oldp+5550,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[56]),20);
        bufp->chgIData(oldp+5551,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[57]),20);
        bufp->chgIData(oldp+5552,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[58]),20);
        bufp->chgIData(oldp+5553,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[59]),20);
        bufp->chgIData(oldp+5554,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[60]),20);
        bufp->chgIData(oldp+5555,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[61]),20);
        bufp->chgIData(oldp+5556,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[62]),20);
        bufp->chgIData(oldp+5557,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[63]),20);
        bufp->chgIData(oldp+5558,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[64]),20);
        bufp->chgIData(oldp+5559,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[65]),20);
        bufp->chgIData(oldp+5560,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[66]),20);
        bufp->chgIData(oldp+5561,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[67]),20);
        bufp->chgIData(oldp+5562,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[68]),20);
        bufp->chgIData(oldp+5563,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[69]),20);
        bufp->chgIData(oldp+5564,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[70]),20);
        bufp->chgIData(oldp+5565,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[71]),20);
        bufp->chgIData(oldp+5566,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[72]),20);
        bufp->chgIData(oldp+5567,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[73]),20);
        bufp->chgIData(oldp+5568,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[74]),20);
        bufp->chgIData(oldp+5569,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[75]),20);
        bufp->chgIData(oldp+5570,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[76]),20);
        bufp->chgIData(oldp+5571,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[77]),20);
        bufp->chgIData(oldp+5572,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[78]),20);
        bufp->chgIData(oldp+5573,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[79]),20);
        bufp->chgIData(oldp+5574,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[80]),20);
        bufp->chgIData(oldp+5575,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[81]),20);
        bufp->chgIData(oldp+5576,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[82]),20);
        bufp->chgIData(oldp+5577,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[83]),20);
        bufp->chgIData(oldp+5578,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[84]),20);
        bufp->chgIData(oldp+5579,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[85]),20);
        bufp->chgIData(oldp+5580,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[86]),20);
        bufp->chgIData(oldp+5581,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[87]),20);
        bufp->chgIData(oldp+5582,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[88]),20);
        bufp->chgIData(oldp+5583,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[89]),20);
        bufp->chgIData(oldp+5584,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[90]),20);
        bufp->chgIData(oldp+5585,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[91]),20);
        bufp->chgIData(oldp+5586,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[92]),20);
        bufp->chgIData(oldp+5587,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[93]),20);
        bufp->chgIData(oldp+5588,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[94]),20);
        bufp->chgIData(oldp+5589,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[95]),20);
        bufp->chgIData(oldp+5590,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[96]),20);
        bufp->chgIData(oldp+5591,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[97]),20);
        bufp->chgIData(oldp+5592,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[98]),20);
        bufp->chgIData(oldp+5593,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[99]),20);
        bufp->chgIData(oldp+5594,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[100]),20);
        bufp->chgIData(oldp+5595,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[101]),20);
        bufp->chgIData(oldp+5596,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[102]),20);
        bufp->chgIData(oldp+5597,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[103]),20);
        bufp->chgIData(oldp+5598,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[104]),20);
        bufp->chgIData(oldp+5599,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[105]),20);
        bufp->chgIData(oldp+5600,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[106]),20);
        bufp->chgIData(oldp+5601,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[107]),20);
        bufp->chgIData(oldp+5602,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[108]),20);
        bufp->chgIData(oldp+5603,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[109]),20);
        bufp->chgIData(oldp+5604,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[110]),20);
        bufp->chgIData(oldp+5605,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[111]),20);
        bufp->chgIData(oldp+5606,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[112]),20);
        bufp->chgIData(oldp+5607,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[113]),20);
        bufp->chgIData(oldp+5608,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[114]),20);
        bufp->chgIData(oldp+5609,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[115]),20);
        bufp->chgIData(oldp+5610,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[116]),20);
        bufp->chgIData(oldp+5611,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[117]),20);
        bufp->chgIData(oldp+5612,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[118]),20);
        bufp->chgIData(oldp+5613,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[119]),20);
        bufp->chgIData(oldp+5614,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[120]),20);
        bufp->chgIData(oldp+5615,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[121]),20);
        bufp->chgIData(oldp+5616,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[122]),20);
        bufp->chgIData(oldp+5617,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[123]),20);
        bufp->chgIData(oldp+5618,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[124]),20);
        bufp->chgIData(oldp+5619,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[125]),20);
        bufp->chgIData(oldp+5620,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[126]),20);
        bufp->chgIData(oldp+5621,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_BRAM__DOT__RAM[127]),20);
        bufp->chgBit(oldp+5622,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__valid_write
                                [0U]));
        bufp->chgCData(oldp+5623,(((0U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__S))
                                    ? (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__init_count)
                                    : (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__line_index))),7);
        bufp->chgBit(oldp+5624,(((5U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__S)) 
                                 & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__atomic_unit_done))));
        bufp->chgBit(oldp+5625,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM
                                [vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__line_index]));
        bufp->chgBit(oldp+5626,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[0]));
        bufp->chgBit(oldp+5627,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[1]));
        bufp->chgBit(oldp+5628,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[2]));
        bufp->chgBit(oldp+5629,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[3]));
        bufp->chgBit(oldp+5630,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[4]));
        bufp->chgBit(oldp+5631,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[5]));
        bufp->chgBit(oldp+5632,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[6]));
        bufp->chgBit(oldp+5633,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[7]));
        bufp->chgBit(oldp+5634,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[8]));
        bufp->chgBit(oldp+5635,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[9]));
        bufp->chgBit(oldp+5636,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[10]));
        bufp->chgBit(oldp+5637,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[11]));
        bufp->chgBit(oldp+5638,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[12]));
        bufp->chgBit(oldp+5639,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[13]));
        bufp->chgBit(oldp+5640,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[14]));
        bufp->chgBit(oldp+5641,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[15]));
        bufp->chgBit(oldp+5642,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[16]));
        bufp->chgBit(oldp+5643,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[17]));
        bufp->chgBit(oldp+5644,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[18]));
        bufp->chgBit(oldp+5645,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[19]));
        bufp->chgBit(oldp+5646,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[20]));
        bufp->chgBit(oldp+5647,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[21]));
        bufp->chgBit(oldp+5648,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[22]));
        bufp->chgBit(oldp+5649,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[23]));
        bufp->chgBit(oldp+5650,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[24]));
        bufp->chgBit(oldp+5651,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[25]));
        bufp->chgBit(oldp+5652,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[26]));
        bufp->chgBit(oldp+5653,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[27]));
        bufp->chgBit(oldp+5654,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[28]));
        bufp->chgBit(oldp+5655,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[29]));
        bufp->chgBit(oldp+5656,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[30]));
        bufp->chgBit(oldp+5657,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[31]));
        bufp->chgBit(oldp+5658,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[32]));
        bufp->chgBit(oldp+5659,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[33]));
        bufp->chgBit(oldp+5660,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[34]));
        bufp->chgBit(oldp+5661,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[35]));
        bufp->chgBit(oldp+5662,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[36]));
        bufp->chgBit(oldp+5663,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[37]));
        bufp->chgBit(oldp+5664,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[38]));
        bufp->chgBit(oldp+5665,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[39]));
        bufp->chgBit(oldp+5666,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[40]));
        bufp->chgBit(oldp+5667,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[41]));
        bufp->chgBit(oldp+5668,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[42]));
        bufp->chgBit(oldp+5669,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[43]));
        bufp->chgBit(oldp+5670,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[44]));
        bufp->chgBit(oldp+5671,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[45]));
        bufp->chgBit(oldp+5672,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[46]));
        bufp->chgBit(oldp+5673,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[47]));
        bufp->chgBit(oldp+5674,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[48]));
        bufp->chgBit(oldp+5675,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[49]));
        bufp->chgBit(oldp+5676,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[50]));
        bufp->chgBit(oldp+5677,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[51]));
        bufp->chgBit(oldp+5678,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[52]));
        bufp->chgBit(oldp+5679,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[53]));
        bufp->chgBit(oldp+5680,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[54]));
        bufp->chgBit(oldp+5681,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[55]));
        bufp->chgBit(oldp+5682,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[56]));
        bufp->chgBit(oldp+5683,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[57]));
        bufp->chgBit(oldp+5684,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[58]));
        bufp->chgBit(oldp+5685,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[59]));
        bufp->chgBit(oldp+5686,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[60]));
        bufp->chgBit(oldp+5687,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[61]));
        bufp->chgBit(oldp+5688,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[62]));
        bufp->chgBit(oldp+5689,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[63]));
        bufp->chgBit(oldp+5690,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[64]));
        bufp->chgBit(oldp+5691,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[65]));
        bufp->chgBit(oldp+5692,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[66]));
        bufp->chgBit(oldp+5693,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[67]));
        bufp->chgBit(oldp+5694,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[68]));
        bufp->chgBit(oldp+5695,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[69]));
        bufp->chgBit(oldp+5696,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[70]));
        bufp->chgBit(oldp+5697,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[71]));
        bufp->chgBit(oldp+5698,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[72]));
        bufp->chgBit(oldp+5699,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[73]));
        bufp->chgBit(oldp+5700,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[74]));
        bufp->chgBit(oldp+5701,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[75]));
        bufp->chgBit(oldp+5702,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[76]));
        bufp->chgBit(oldp+5703,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[77]));
        bufp->chgBit(oldp+5704,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[78]));
        bufp->chgBit(oldp+5705,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[79]));
        bufp->chgBit(oldp+5706,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[80]));
        bufp->chgBit(oldp+5707,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[81]));
        bufp->chgBit(oldp+5708,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[82]));
        bufp->chgBit(oldp+5709,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[83]));
        bufp->chgBit(oldp+5710,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[84]));
        bufp->chgBit(oldp+5711,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[85]));
        bufp->chgBit(oldp+5712,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[86]));
        bufp->chgBit(oldp+5713,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[87]));
        bufp->chgBit(oldp+5714,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[88]));
        bufp->chgBit(oldp+5715,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[89]));
        bufp->chgBit(oldp+5716,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[90]));
        bufp->chgBit(oldp+5717,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[91]));
        bufp->chgBit(oldp+5718,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[92]));
        bufp->chgBit(oldp+5719,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[93]));
        bufp->chgBit(oldp+5720,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[94]));
        bufp->chgBit(oldp+5721,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[95]));
        bufp->chgBit(oldp+5722,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[96]));
        bufp->chgBit(oldp+5723,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[97]));
        bufp->chgBit(oldp+5724,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[98]));
        bufp->chgBit(oldp+5725,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[99]));
        bufp->chgBit(oldp+5726,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[100]));
        bufp->chgBit(oldp+5727,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[101]));
        bufp->chgBit(oldp+5728,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[102]));
        bufp->chgBit(oldp+5729,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[103]));
        bufp->chgBit(oldp+5730,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[104]));
        bufp->chgBit(oldp+5731,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[105]));
        bufp->chgBit(oldp+5732,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[106]));
        bufp->chgBit(oldp+5733,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[107]));
        bufp->chgBit(oldp+5734,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[108]));
        bufp->chgBit(oldp+5735,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[109]));
        bufp->chgBit(oldp+5736,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[110]));
        bufp->chgBit(oldp+5737,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[111]));
        bufp->chgBit(oldp+5738,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[112]));
        bufp->chgBit(oldp+5739,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[113]));
        bufp->chgBit(oldp+5740,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[114]));
        bufp->chgBit(oldp+5741,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[115]));
        bufp->chgBit(oldp+5742,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[116]));
        bufp->chgBit(oldp+5743,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[117]));
        bufp->chgBit(oldp+5744,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[118]));
        bufp->chgBit(oldp+5745,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[119]));
        bufp->chgBit(oldp+5746,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[120]));
        bufp->chgBit(oldp+5747,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[121]));
        bufp->chgBit(oldp+5748,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[122]));
        bufp->chgBit(oldp+5749,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[123]));
        bufp->chgBit(oldp+5750,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[124]));
        bufp->chgBit(oldp+5751,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[125]));
        bufp->chgBit(oldp+5752,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[126]));
        bufp->chgBit(oldp+5753,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[127]));
        bufp->chgBit(oldp+5754,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__valid_write
                                [1U]));
        bufp->chgBit(oldp+5755,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM
                                [vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__line_index]));
        bufp->chgBit(oldp+5756,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[0]));
        bufp->chgBit(oldp+5757,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[1]));
        bufp->chgBit(oldp+5758,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[2]));
        bufp->chgBit(oldp+5759,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[3]));
        bufp->chgBit(oldp+5760,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[4]));
        bufp->chgBit(oldp+5761,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[5]));
        bufp->chgBit(oldp+5762,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[6]));
        bufp->chgBit(oldp+5763,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[7]));
        bufp->chgBit(oldp+5764,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[8]));
        bufp->chgBit(oldp+5765,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[9]));
        bufp->chgBit(oldp+5766,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[10]));
        bufp->chgBit(oldp+5767,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[11]));
        bufp->chgBit(oldp+5768,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[12]));
        bufp->chgBit(oldp+5769,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[13]));
        bufp->chgBit(oldp+5770,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[14]));
        bufp->chgBit(oldp+5771,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[15]));
        bufp->chgBit(oldp+5772,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[16]));
        bufp->chgBit(oldp+5773,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[17]));
        bufp->chgBit(oldp+5774,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[18]));
        bufp->chgBit(oldp+5775,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[19]));
        bufp->chgBit(oldp+5776,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[20]));
        bufp->chgBit(oldp+5777,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[21]));
        bufp->chgBit(oldp+5778,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[22]));
        bufp->chgBit(oldp+5779,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[23]));
        bufp->chgBit(oldp+5780,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[24]));
        bufp->chgBit(oldp+5781,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[25]));
        bufp->chgBit(oldp+5782,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[26]));
        bufp->chgBit(oldp+5783,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[27]));
        bufp->chgBit(oldp+5784,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[28]));
        bufp->chgBit(oldp+5785,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[29]));
        bufp->chgBit(oldp+5786,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[30]));
        bufp->chgBit(oldp+5787,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[31]));
        bufp->chgBit(oldp+5788,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[32]));
        bufp->chgBit(oldp+5789,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[33]));
        bufp->chgBit(oldp+5790,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[34]));
        bufp->chgBit(oldp+5791,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[35]));
        bufp->chgBit(oldp+5792,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[36]));
        bufp->chgBit(oldp+5793,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[37]));
        bufp->chgBit(oldp+5794,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[38]));
        bufp->chgBit(oldp+5795,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[39]));
        bufp->chgBit(oldp+5796,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[40]));
        bufp->chgBit(oldp+5797,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[41]));
        bufp->chgBit(oldp+5798,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[42]));
        bufp->chgBit(oldp+5799,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[43]));
        bufp->chgBit(oldp+5800,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[44]));
        bufp->chgBit(oldp+5801,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[45]));
        bufp->chgBit(oldp+5802,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[46]));
        bufp->chgBit(oldp+5803,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[47]));
        bufp->chgBit(oldp+5804,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[48]));
        bufp->chgBit(oldp+5805,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[49]));
        bufp->chgBit(oldp+5806,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[50]));
        bufp->chgBit(oldp+5807,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[51]));
        bufp->chgBit(oldp+5808,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[52]));
        bufp->chgBit(oldp+5809,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[53]));
        bufp->chgBit(oldp+5810,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[54]));
        bufp->chgBit(oldp+5811,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[55]));
        bufp->chgBit(oldp+5812,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[56]));
        bufp->chgBit(oldp+5813,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[57]));
        bufp->chgBit(oldp+5814,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[58]));
        bufp->chgBit(oldp+5815,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[59]));
        bufp->chgBit(oldp+5816,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[60]));
        bufp->chgBit(oldp+5817,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[61]));
        bufp->chgBit(oldp+5818,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[62]));
        bufp->chgBit(oldp+5819,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[63]));
        bufp->chgBit(oldp+5820,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[64]));
        bufp->chgBit(oldp+5821,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[65]));
        bufp->chgBit(oldp+5822,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[66]));
        bufp->chgBit(oldp+5823,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[67]));
        bufp->chgBit(oldp+5824,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[68]));
        bufp->chgBit(oldp+5825,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[69]));
        bufp->chgBit(oldp+5826,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[70]));
        bufp->chgBit(oldp+5827,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[71]));
        bufp->chgBit(oldp+5828,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[72]));
        bufp->chgBit(oldp+5829,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[73]));
        bufp->chgBit(oldp+5830,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[74]));
        bufp->chgBit(oldp+5831,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[75]));
        bufp->chgBit(oldp+5832,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[76]));
        bufp->chgBit(oldp+5833,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[77]));
        bufp->chgBit(oldp+5834,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[78]));
        bufp->chgBit(oldp+5835,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[79]));
        bufp->chgBit(oldp+5836,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[80]));
        bufp->chgBit(oldp+5837,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[81]));
        bufp->chgBit(oldp+5838,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[82]));
        bufp->chgBit(oldp+5839,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[83]));
        bufp->chgBit(oldp+5840,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[84]));
        bufp->chgBit(oldp+5841,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[85]));
        bufp->chgBit(oldp+5842,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[86]));
        bufp->chgBit(oldp+5843,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[87]));
        bufp->chgBit(oldp+5844,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[88]));
        bufp->chgBit(oldp+5845,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[89]));
        bufp->chgBit(oldp+5846,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[90]));
        bufp->chgBit(oldp+5847,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[91]));
        bufp->chgBit(oldp+5848,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[92]));
        bufp->chgBit(oldp+5849,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[93]));
        bufp->chgBit(oldp+5850,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[94]));
        bufp->chgBit(oldp+5851,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[95]));
        bufp->chgBit(oldp+5852,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[96]));
        bufp->chgBit(oldp+5853,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[97]));
        bufp->chgBit(oldp+5854,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[98]));
        bufp->chgBit(oldp+5855,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[99]));
        bufp->chgBit(oldp+5856,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[100]));
        bufp->chgBit(oldp+5857,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[101]));
        bufp->chgBit(oldp+5858,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[102]));
        bufp->chgBit(oldp+5859,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[103]));
        bufp->chgBit(oldp+5860,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[104]));
        bufp->chgBit(oldp+5861,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[105]));
        bufp->chgBit(oldp+5862,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[106]));
        bufp->chgBit(oldp+5863,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[107]));
        bufp->chgBit(oldp+5864,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[108]));
        bufp->chgBit(oldp+5865,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[109]));
        bufp->chgBit(oldp+5866,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[110]));
        bufp->chgBit(oldp+5867,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[111]));
        bufp->chgBit(oldp+5868,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[112]));
        bufp->chgBit(oldp+5869,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[113]));
        bufp->chgBit(oldp+5870,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[114]));
        bufp->chgBit(oldp+5871,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[115]));
        bufp->chgBit(oldp+5872,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[116]));
        bufp->chgBit(oldp+5873,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[117]));
        bufp->chgBit(oldp+5874,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[118]));
        bufp->chgBit(oldp+5875,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[119]));
        bufp->chgBit(oldp+5876,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[120]));
        bufp->chgBit(oldp+5877,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[121]));
        bufp->chgBit(oldp+5878,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[122]));
        bufp->chgBit(oldp+5879,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[123]));
        bufp->chgBit(oldp+5880,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[124]));
        bufp->chgBit(oldp+5881,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[125]));
        bufp->chgBit(oldp+5882,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[126]));
        bufp->chgBit(oldp+5883,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[127]));
        bufp->chgBit(oldp+5884,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__valid_write
                                [2U]));
        bufp->chgBit(oldp+5885,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM
                                [vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__line_index]));
        bufp->chgBit(oldp+5886,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[0]));
        bufp->chgBit(oldp+5887,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[1]));
        bufp->chgBit(oldp+5888,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[2]));
        bufp->chgBit(oldp+5889,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[3]));
        bufp->chgBit(oldp+5890,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[4]));
        bufp->chgBit(oldp+5891,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[5]));
        bufp->chgBit(oldp+5892,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[6]));
        bufp->chgBit(oldp+5893,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[7]));
        bufp->chgBit(oldp+5894,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[8]));
        bufp->chgBit(oldp+5895,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[9]));
        bufp->chgBit(oldp+5896,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[10]));
        bufp->chgBit(oldp+5897,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[11]));
        bufp->chgBit(oldp+5898,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[12]));
        bufp->chgBit(oldp+5899,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[13]));
        bufp->chgBit(oldp+5900,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[14]));
        bufp->chgBit(oldp+5901,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[15]));
        bufp->chgBit(oldp+5902,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[16]));
        bufp->chgBit(oldp+5903,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[17]));
        bufp->chgBit(oldp+5904,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[18]));
        bufp->chgBit(oldp+5905,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[19]));
        bufp->chgBit(oldp+5906,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[20]));
        bufp->chgBit(oldp+5907,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[21]));
        bufp->chgBit(oldp+5908,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[22]));
        bufp->chgBit(oldp+5909,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[23]));
        bufp->chgBit(oldp+5910,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[24]));
        bufp->chgBit(oldp+5911,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[25]));
        bufp->chgBit(oldp+5912,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[26]));
        bufp->chgBit(oldp+5913,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[27]));
        bufp->chgBit(oldp+5914,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[28]));
        bufp->chgBit(oldp+5915,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[29]));
        bufp->chgBit(oldp+5916,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[30]));
        bufp->chgBit(oldp+5917,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[31]));
        bufp->chgBit(oldp+5918,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[32]));
        bufp->chgBit(oldp+5919,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[33]));
        bufp->chgBit(oldp+5920,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[34]));
        bufp->chgBit(oldp+5921,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[35]));
        bufp->chgBit(oldp+5922,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[36]));
        bufp->chgBit(oldp+5923,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[37]));
        bufp->chgBit(oldp+5924,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[38]));
        bufp->chgBit(oldp+5925,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[39]));
        bufp->chgBit(oldp+5926,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[40]));
        bufp->chgBit(oldp+5927,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[41]));
        bufp->chgBit(oldp+5928,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[42]));
        bufp->chgBit(oldp+5929,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[43]));
        bufp->chgBit(oldp+5930,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[44]));
        bufp->chgBit(oldp+5931,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[45]));
        bufp->chgBit(oldp+5932,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[46]));
        bufp->chgBit(oldp+5933,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[47]));
        bufp->chgBit(oldp+5934,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[48]));
        bufp->chgBit(oldp+5935,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[49]));
        bufp->chgBit(oldp+5936,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[50]));
        bufp->chgBit(oldp+5937,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[51]));
        bufp->chgBit(oldp+5938,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[52]));
        bufp->chgBit(oldp+5939,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[53]));
        bufp->chgBit(oldp+5940,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[54]));
        bufp->chgBit(oldp+5941,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[55]));
        bufp->chgBit(oldp+5942,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[56]));
        bufp->chgBit(oldp+5943,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[57]));
        bufp->chgBit(oldp+5944,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[58]));
        bufp->chgBit(oldp+5945,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[59]));
        bufp->chgBit(oldp+5946,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[60]));
        bufp->chgBit(oldp+5947,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[61]));
        bufp->chgBit(oldp+5948,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[62]));
        bufp->chgBit(oldp+5949,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[63]));
        bufp->chgBit(oldp+5950,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[64]));
        bufp->chgBit(oldp+5951,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[65]));
        bufp->chgBit(oldp+5952,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[66]));
        bufp->chgBit(oldp+5953,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[67]));
        bufp->chgBit(oldp+5954,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[68]));
        bufp->chgBit(oldp+5955,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[69]));
        bufp->chgBit(oldp+5956,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[70]));
        bufp->chgBit(oldp+5957,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[71]));
        bufp->chgBit(oldp+5958,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[72]));
        bufp->chgBit(oldp+5959,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[73]));
        bufp->chgBit(oldp+5960,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[74]));
        bufp->chgBit(oldp+5961,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[75]));
        bufp->chgBit(oldp+5962,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[76]));
        bufp->chgBit(oldp+5963,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[77]));
        bufp->chgBit(oldp+5964,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[78]));
        bufp->chgBit(oldp+5965,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[79]));
        bufp->chgBit(oldp+5966,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[80]));
        bufp->chgBit(oldp+5967,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[81]));
        bufp->chgBit(oldp+5968,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[82]));
        bufp->chgBit(oldp+5969,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[83]));
        bufp->chgBit(oldp+5970,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[84]));
        bufp->chgBit(oldp+5971,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[85]));
        bufp->chgBit(oldp+5972,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[86]));
        bufp->chgBit(oldp+5973,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[87]));
        bufp->chgBit(oldp+5974,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[88]));
        bufp->chgBit(oldp+5975,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[89]));
        bufp->chgBit(oldp+5976,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[90]));
        bufp->chgBit(oldp+5977,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[91]));
        bufp->chgBit(oldp+5978,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[92]));
        bufp->chgBit(oldp+5979,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[93]));
        bufp->chgBit(oldp+5980,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[94]));
        bufp->chgBit(oldp+5981,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[95]));
        bufp->chgBit(oldp+5982,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[96]));
        bufp->chgBit(oldp+5983,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[97]));
        bufp->chgBit(oldp+5984,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[98]));
        bufp->chgBit(oldp+5985,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[99]));
        bufp->chgBit(oldp+5986,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[100]));
        bufp->chgBit(oldp+5987,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[101]));
        bufp->chgBit(oldp+5988,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[102]));
        bufp->chgBit(oldp+5989,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[103]));
        bufp->chgBit(oldp+5990,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[104]));
        bufp->chgBit(oldp+5991,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[105]));
        bufp->chgBit(oldp+5992,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[106]));
        bufp->chgBit(oldp+5993,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[107]));
        bufp->chgBit(oldp+5994,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[108]));
        bufp->chgBit(oldp+5995,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[109]));
        bufp->chgBit(oldp+5996,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[110]));
        bufp->chgBit(oldp+5997,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[111]));
        bufp->chgBit(oldp+5998,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[112]));
        bufp->chgBit(oldp+5999,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[113]));
        bufp->chgBit(oldp+6000,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[114]));
        bufp->chgBit(oldp+6001,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[115]));
        bufp->chgBit(oldp+6002,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[116]));
        bufp->chgBit(oldp+6003,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[117]));
        bufp->chgBit(oldp+6004,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[118]));
        bufp->chgBit(oldp+6005,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[119]));
        bufp->chgBit(oldp+6006,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[120]));
        bufp->chgBit(oldp+6007,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[121]));
        bufp->chgBit(oldp+6008,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[122]));
        bufp->chgBit(oldp+6009,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[123]));
        bufp->chgBit(oldp+6010,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[124]));
        bufp->chgBit(oldp+6011,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[125]));
        bufp->chgBit(oldp+6012,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[126]));
        bufp->chgBit(oldp+6013,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[127]));
        bufp->chgBit(oldp+6014,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__valid_write
                                [3U]));
        bufp->chgBit(oldp+6015,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM
                                [vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__line_index]));
        bufp->chgBit(oldp+6016,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[0]));
        bufp->chgBit(oldp+6017,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[1]));
        bufp->chgBit(oldp+6018,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[2]));
        bufp->chgBit(oldp+6019,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[3]));
        bufp->chgBit(oldp+6020,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[4]));
        bufp->chgBit(oldp+6021,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[5]));
        bufp->chgBit(oldp+6022,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[6]));
        bufp->chgBit(oldp+6023,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[7]));
        bufp->chgBit(oldp+6024,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[8]));
        bufp->chgBit(oldp+6025,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[9]));
        bufp->chgBit(oldp+6026,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[10]));
        bufp->chgBit(oldp+6027,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[11]));
        bufp->chgBit(oldp+6028,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[12]));
        bufp->chgBit(oldp+6029,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[13]));
        bufp->chgBit(oldp+6030,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[14]));
        bufp->chgBit(oldp+6031,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[15]));
        bufp->chgBit(oldp+6032,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[16]));
        bufp->chgBit(oldp+6033,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[17]));
        bufp->chgBit(oldp+6034,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[18]));
        bufp->chgBit(oldp+6035,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[19]));
        bufp->chgBit(oldp+6036,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[20]));
        bufp->chgBit(oldp+6037,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[21]));
        bufp->chgBit(oldp+6038,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[22]));
        bufp->chgBit(oldp+6039,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[23]));
        bufp->chgBit(oldp+6040,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[24]));
        bufp->chgBit(oldp+6041,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[25]));
        bufp->chgBit(oldp+6042,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[26]));
        bufp->chgBit(oldp+6043,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[27]));
        bufp->chgBit(oldp+6044,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[28]));
        bufp->chgBit(oldp+6045,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[29]));
        bufp->chgBit(oldp+6046,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[30]));
        bufp->chgBit(oldp+6047,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[31]));
        bufp->chgBit(oldp+6048,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[32]));
        bufp->chgBit(oldp+6049,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[33]));
        bufp->chgBit(oldp+6050,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[34]));
        bufp->chgBit(oldp+6051,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[35]));
        bufp->chgBit(oldp+6052,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[36]));
        bufp->chgBit(oldp+6053,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[37]));
        bufp->chgBit(oldp+6054,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[38]));
        bufp->chgBit(oldp+6055,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[39]));
        bufp->chgBit(oldp+6056,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[40]));
        bufp->chgBit(oldp+6057,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[41]));
        bufp->chgBit(oldp+6058,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[42]));
        bufp->chgBit(oldp+6059,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[43]));
        bufp->chgBit(oldp+6060,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[44]));
        bufp->chgBit(oldp+6061,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[45]));
        bufp->chgBit(oldp+6062,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[46]));
        bufp->chgBit(oldp+6063,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[47]));
        bufp->chgBit(oldp+6064,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[48]));
        bufp->chgBit(oldp+6065,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[49]));
        bufp->chgBit(oldp+6066,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[50]));
        bufp->chgBit(oldp+6067,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[51]));
        bufp->chgBit(oldp+6068,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[52]));
        bufp->chgBit(oldp+6069,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[53]));
        bufp->chgBit(oldp+6070,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[54]));
        bufp->chgBit(oldp+6071,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[55]));
        bufp->chgBit(oldp+6072,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[56]));
        bufp->chgBit(oldp+6073,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[57]));
        bufp->chgBit(oldp+6074,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[58]));
        bufp->chgBit(oldp+6075,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[59]));
        bufp->chgBit(oldp+6076,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[60]));
        bufp->chgBit(oldp+6077,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[61]));
        bufp->chgBit(oldp+6078,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[62]));
        bufp->chgBit(oldp+6079,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[63]));
        bufp->chgBit(oldp+6080,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[64]));
        bufp->chgBit(oldp+6081,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[65]));
        bufp->chgBit(oldp+6082,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[66]));
        bufp->chgBit(oldp+6083,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[67]));
        bufp->chgBit(oldp+6084,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[68]));
        bufp->chgBit(oldp+6085,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[69]));
        bufp->chgBit(oldp+6086,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[70]));
        bufp->chgBit(oldp+6087,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[71]));
        bufp->chgBit(oldp+6088,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[72]));
        bufp->chgBit(oldp+6089,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[73]));
        bufp->chgBit(oldp+6090,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[74]));
        bufp->chgBit(oldp+6091,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[75]));
        bufp->chgBit(oldp+6092,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[76]));
        bufp->chgBit(oldp+6093,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[77]));
        bufp->chgBit(oldp+6094,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[78]));
        bufp->chgBit(oldp+6095,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[79]));
        bufp->chgBit(oldp+6096,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[80]));
        bufp->chgBit(oldp+6097,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[81]));
        bufp->chgBit(oldp+6098,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[82]));
        bufp->chgBit(oldp+6099,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[83]));
        bufp->chgBit(oldp+6100,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[84]));
        bufp->chgBit(oldp+6101,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[85]));
        bufp->chgBit(oldp+6102,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[86]));
        bufp->chgBit(oldp+6103,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[87]));
        bufp->chgBit(oldp+6104,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[88]));
        bufp->chgBit(oldp+6105,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[89]));
        bufp->chgBit(oldp+6106,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[90]));
        bufp->chgBit(oldp+6107,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[91]));
        bufp->chgBit(oldp+6108,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[92]));
        bufp->chgBit(oldp+6109,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[93]));
        bufp->chgBit(oldp+6110,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[94]));
        bufp->chgBit(oldp+6111,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[95]));
        bufp->chgBit(oldp+6112,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[96]));
        bufp->chgBit(oldp+6113,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[97]));
        bufp->chgBit(oldp+6114,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[98]));
        bufp->chgBit(oldp+6115,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[99]));
        bufp->chgBit(oldp+6116,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[100]));
        bufp->chgBit(oldp+6117,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[101]));
        bufp->chgBit(oldp+6118,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[102]));
        bufp->chgBit(oldp+6119,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[103]));
        bufp->chgBit(oldp+6120,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[104]));
        bufp->chgBit(oldp+6121,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[105]));
        bufp->chgBit(oldp+6122,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[106]));
        bufp->chgBit(oldp+6123,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[107]));
        bufp->chgBit(oldp+6124,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[108]));
        bufp->chgBit(oldp+6125,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[109]));
        bufp->chgBit(oldp+6126,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[110]));
        bufp->chgBit(oldp+6127,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[111]));
        bufp->chgBit(oldp+6128,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[112]));
        bufp->chgBit(oldp+6129,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[113]));
        bufp->chgBit(oldp+6130,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[114]));
        bufp->chgBit(oldp+6131,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[115]));
        bufp->chgBit(oldp+6132,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[116]));
        bufp->chgBit(oldp+6133,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[117]));
        bufp->chgBit(oldp+6134,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[118]));
        bufp->chgBit(oldp+6135,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[119]));
        bufp->chgBit(oldp+6136,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[120]));
        bufp->chgBit(oldp+6137,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[121]));
        bufp->chgBit(oldp+6138,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[122]));
        bufp->chgBit(oldp+6139,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[123]));
        bufp->chgBit(oldp+6140,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[124]));
        bufp->chgBit(oldp+6141,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[125]));
        bufp->chgBit(oldp+6142,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[126]));
        bufp->chgBit(oldp+6143,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[127]));
        bufp->chgBit(oldp+6144,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__dirty_write
                                [0U]));
        bufp->chgBit(oldp+6145,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM
                                [vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__dirty_raddr]));
        bufp->chgBit(oldp+6146,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[0]));
        bufp->chgBit(oldp+6147,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[1]));
        bufp->chgBit(oldp+6148,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[2]));
        bufp->chgBit(oldp+6149,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[3]));
        bufp->chgBit(oldp+6150,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[4]));
        bufp->chgBit(oldp+6151,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[5]));
        bufp->chgBit(oldp+6152,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[6]));
        bufp->chgBit(oldp+6153,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[7]));
        bufp->chgBit(oldp+6154,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[8]));
        bufp->chgBit(oldp+6155,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[9]));
        bufp->chgBit(oldp+6156,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[10]));
        bufp->chgBit(oldp+6157,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[11]));
        bufp->chgBit(oldp+6158,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[12]));
        bufp->chgBit(oldp+6159,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[13]));
        bufp->chgBit(oldp+6160,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[14]));
        bufp->chgBit(oldp+6161,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[15]));
        bufp->chgBit(oldp+6162,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[16]));
        bufp->chgBit(oldp+6163,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[17]));
        bufp->chgBit(oldp+6164,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[18]));
        bufp->chgBit(oldp+6165,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[19]));
        bufp->chgBit(oldp+6166,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[20]));
        bufp->chgBit(oldp+6167,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[21]));
        bufp->chgBit(oldp+6168,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[22]));
        bufp->chgBit(oldp+6169,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[23]));
        bufp->chgBit(oldp+6170,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[24]));
        bufp->chgBit(oldp+6171,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[25]));
        bufp->chgBit(oldp+6172,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[26]));
        bufp->chgBit(oldp+6173,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[27]));
        bufp->chgBit(oldp+6174,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[28]));
        bufp->chgBit(oldp+6175,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[29]));
        bufp->chgBit(oldp+6176,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[30]));
        bufp->chgBit(oldp+6177,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[31]));
        bufp->chgBit(oldp+6178,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[32]));
        bufp->chgBit(oldp+6179,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[33]));
        bufp->chgBit(oldp+6180,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[34]));
        bufp->chgBit(oldp+6181,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[35]));
        bufp->chgBit(oldp+6182,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[36]));
        bufp->chgBit(oldp+6183,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[37]));
        bufp->chgBit(oldp+6184,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[38]));
        bufp->chgBit(oldp+6185,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[39]));
        bufp->chgBit(oldp+6186,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[40]));
        bufp->chgBit(oldp+6187,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[41]));
        bufp->chgBit(oldp+6188,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[42]));
        bufp->chgBit(oldp+6189,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[43]));
        bufp->chgBit(oldp+6190,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[44]));
        bufp->chgBit(oldp+6191,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[45]));
        bufp->chgBit(oldp+6192,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[46]));
        bufp->chgBit(oldp+6193,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[47]));
        bufp->chgBit(oldp+6194,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[48]));
        bufp->chgBit(oldp+6195,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[49]));
        bufp->chgBit(oldp+6196,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[50]));
        bufp->chgBit(oldp+6197,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[51]));
        bufp->chgBit(oldp+6198,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[52]));
        bufp->chgBit(oldp+6199,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[53]));
        bufp->chgBit(oldp+6200,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[54]));
        bufp->chgBit(oldp+6201,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[55]));
        bufp->chgBit(oldp+6202,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[56]));
        bufp->chgBit(oldp+6203,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[57]));
        bufp->chgBit(oldp+6204,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[58]));
        bufp->chgBit(oldp+6205,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[59]));
        bufp->chgBit(oldp+6206,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[60]));
        bufp->chgBit(oldp+6207,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[61]));
        bufp->chgBit(oldp+6208,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[62]));
        bufp->chgBit(oldp+6209,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[63]));
        bufp->chgBit(oldp+6210,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[64]));
        bufp->chgBit(oldp+6211,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[65]));
        bufp->chgBit(oldp+6212,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[66]));
        bufp->chgBit(oldp+6213,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[67]));
        bufp->chgBit(oldp+6214,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[68]));
        bufp->chgBit(oldp+6215,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[69]));
        bufp->chgBit(oldp+6216,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[70]));
        bufp->chgBit(oldp+6217,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[71]));
        bufp->chgBit(oldp+6218,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[72]));
        bufp->chgBit(oldp+6219,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[73]));
        bufp->chgBit(oldp+6220,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[74]));
        bufp->chgBit(oldp+6221,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[75]));
        bufp->chgBit(oldp+6222,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[76]));
        bufp->chgBit(oldp+6223,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[77]));
        bufp->chgBit(oldp+6224,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[78]));
        bufp->chgBit(oldp+6225,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[79]));
        bufp->chgBit(oldp+6226,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[80]));
        bufp->chgBit(oldp+6227,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[81]));
        bufp->chgBit(oldp+6228,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[82]));
        bufp->chgBit(oldp+6229,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[83]));
        bufp->chgBit(oldp+6230,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[84]));
        bufp->chgBit(oldp+6231,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[85]));
        bufp->chgBit(oldp+6232,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[86]));
        bufp->chgBit(oldp+6233,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[87]));
        bufp->chgBit(oldp+6234,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[88]));
        bufp->chgBit(oldp+6235,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[89]));
        bufp->chgBit(oldp+6236,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[90]));
        bufp->chgBit(oldp+6237,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[91]));
        bufp->chgBit(oldp+6238,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[92]));
        bufp->chgBit(oldp+6239,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[93]));
        bufp->chgBit(oldp+6240,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[94]));
        bufp->chgBit(oldp+6241,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[95]));
        bufp->chgBit(oldp+6242,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[96]));
        bufp->chgBit(oldp+6243,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[97]));
        bufp->chgBit(oldp+6244,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[98]));
        bufp->chgBit(oldp+6245,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[99]));
        bufp->chgBit(oldp+6246,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[100]));
        bufp->chgBit(oldp+6247,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[101]));
        bufp->chgBit(oldp+6248,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[102]));
        bufp->chgBit(oldp+6249,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[103]));
        bufp->chgBit(oldp+6250,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[104]));
        bufp->chgBit(oldp+6251,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[105]));
        bufp->chgBit(oldp+6252,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[106]));
        bufp->chgBit(oldp+6253,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[107]));
        bufp->chgBit(oldp+6254,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[108]));
        bufp->chgBit(oldp+6255,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[109]));
        bufp->chgBit(oldp+6256,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[110]));
        bufp->chgBit(oldp+6257,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[111]));
        bufp->chgBit(oldp+6258,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[112]));
        bufp->chgBit(oldp+6259,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[113]));
        bufp->chgBit(oldp+6260,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[114]));
        bufp->chgBit(oldp+6261,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[115]));
        bufp->chgBit(oldp+6262,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[116]));
        bufp->chgBit(oldp+6263,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[117]));
        bufp->chgBit(oldp+6264,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[118]));
        bufp->chgBit(oldp+6265,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[119]));
        bufp->chgBit(oldp+6266,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[120]));
        bufp->chgBit(oldp+6267,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[121]));
        bufp->chgBit(oldp+6268,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[122]));
        bufp->chgBit(oldp+6269,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[123]));
        bufp->chgBit(oldp+6270,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[124]));
        bufp->chgBit(oldp+6271,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[125]));
        bufp->chgBit(oldp+6272,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[126]));
        bufp->chgBit(oldp+6273,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__0__KET____DOT__DIRTY_RAM__DOT__RAM[127]));
        bufp->chgBit(oldp+6274,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__dirty_write
                                [1U]));
        bufp->chgBit(oldp+6275,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM
                                [vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__dirty_raddr]));
        bufp->chgBit(oldp+6276,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[0]));
        bufp->chgBit(oldp+6277,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[1]));
        bufp->chgBit(oldp+6278,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[2]));
        bufp->chgBit(oldp+6279,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[3]));
        bufp->chgBit(oldp+6280,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[4]));
        bufp->chgBit(oldp+6281,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[5]));
        bufp->chgBit(oldp+6282,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[6]));
        bufp->chgBit(oldp+6283,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[7]));
        bufp->chgBit(oldp+6284,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[8]));
        bufp->chgBit(oldp+6285,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[9]));
        bufp->chgBit(oldp+6286,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[10]));
        bufp->chgBit(oldp+6287,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[11]));
        bufp->chgBit(oldp+6288,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[12]));
        bufp->chgBit(oldp+6289,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[13]));
        bufp->chgBit(oldp+6290,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[14]));
        bufp->chgBit(oldp+6291,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[15]));
        bufp->chgBit(oldp+6292,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[16]));
        bufp->chgBit(oldp+6293,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[17]));
        bufp->chgBit(oldp+6294,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[18]));
        bufp->chgBit(oldp+6295,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[19]));
        bufp->chgBit(oldp+6296,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[20]));
        bufp->chgBit(oldp+6297,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[21]));
        bufp->chgBit(oldp+6298,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[22]));
        bufp->chgBit(oldp+6299,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[23]));
        bufp->chgBit(oldp+6300,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[24]));
        bufp->chgBit(oldp+6301,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[25]));
        bufp->chgBit(oldp+6302,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[26]));
        bufp->chgBit(oldp+6303,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[27]));
        bufp->chgBit(oldp+6304,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[28]));
        bufp->chgBit(oldp+6305,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[29]));
        bufp->chgBit(oldp+6306,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[30]));
        bufp->chgBit(oldp+6307,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[31]));
        bufp->chgBit(oldp+6308,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[32]));
        bufp->chgBit(oldp+6309,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[33]));
        bufp->chgBit(oldp+6310,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[34]));
        bufp->chgBit(oldp+6311,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[35]));
        bufp->chgBit(oldp+6312,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[36]));
        bufp->chgBit(oldp+6313,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[37]));
        bufp->chgBit(oldp+6314,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[38]));
        bufp->chgBit(oldp+6315,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[39]));
        bufp->chgBit(oldp+6316,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[40]));
        bufp->chgBit(oldp+6317,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[41]));
        bufp->chgBit(oldp+6318,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[42]));
        bufp->chgBit(oldp+6319,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[43]));
        bufp->chgBit(oldp+6320,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[44]));
        bufp->chgBit(oldp+6321,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[45]));
        bufp->chgBit(oldp+6322,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[46]));
        bufp->chgBit(oldp+6323,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[47]));
        bufp->chgBit(oldp+6324,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[48]));
        bufp->chgBit(oldp+6325,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[49]));
        bufp->chgBit(oldp+6326,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[50]));
        bufp->chgBit(oldp+6327,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[51]));
        bufp->chgBit(oldp+6328,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[52]));
        bufp->chgBit(oldp+6329,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[53]));
        bufp->chgBit(oldp+6330,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[54]));
        bufp->chgBit(oldp+6331,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[55]));
        bufp->chgBit(oldp+6332,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[56]));
        bufp->chgBit(oldp+6333,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[57]));
        bufp->chgBit(oldp+6334,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[58]));
        bufp->chgBit(oldp+6335,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[59]));
        bufp->chgBit(oldp+6336,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[60]));
        bufp->chgBit(oldp+6337,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[61]));
        bufp->chgBit(oldp+6338,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[62]));
        bufp->chgBit(oldp+6339,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[63]));
        bufp->chgBit(oldp+6340,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[64]));
        bufp->chgBit(oldp+6341,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[65]));
        bufp->chgBit(oldp+6342,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[66]));
        bufp->chgBit(oldp+6343,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[67]));
        bufp->chgBit(oldp+6344,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[68]));
        bufp->chgBit(oldp+6345,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[69]));
        bufp->chgBit(oldp+6346,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[70]));
        bufp->chgBit(oldp+6347,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[71]));
        bufp->chgBit(oldp+6348,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[72]));
        bufp->chgBit(oldp+6349,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[73]));
        bufp->chgBit(oldp+6350,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[74]));
        bufp->chgBit(oldp+6351,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[75]));
        bufp->chgBit(oldp+6352,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[76]));
        bufp->chgBit(oldp+6353,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[77]));
        bufp->chgBit(oldp+6354,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[78]));
        bufp->chgBit(oldp+6355,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[79]));
        bufp->chgBit(oldp+6356,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[80]));
        bufp->chgBit(oldp+6357,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[81]));
        bufp->chgBit(oldp+6358,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[82]));
        bufp->chgBit(oldp+6359,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[83]));
        bufp->chgBit(oldp+6360,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[84]));
        bufp->chgBit(oldp+6361,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[85]));
        bufp->chgBit(oldp+6362,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[86]));
        bufp->chgBit(oldp+6363,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[87]));
        bufp->chgBit(oldp+6364,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[88]));
        bufp->chgBit(oldp+6365,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[89]));
        bufp->chgBit(oldp+6366,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[90]));
        bufp->chgBit(oldp+6367,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[91]));
        bufp->chgBit(oldp+6368,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[92]));
        bufp->chgBit(oldp+6369,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[93]));
        bufp->chgBit(oldp+6370,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[94]));
        bufp->chgBit(oldp+6371,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[95]));
        bufp->chgBit(oldp+6372,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[96]));
        bufp->chgBit(oldp+6373,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[97]));
        bufp->chgBit(oldp+6374,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[98]));
        bufp->chgBit(oldp+6375,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[99]));
        bufp->chgBit(oldp+6376,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[100]));
        bufp->chgBit(oldp+6377,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[101]));
        bufp->chgBit(oldp+6378,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[102]));
        bufp->chgBit(oldp+6379,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[103]));
        bufp->chgBit(oldp+6380,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[104]));
        bufp->chgBit(oldp+6381,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[105]));
        bufp->chgBit(oldp+6382,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[106]));
        bufp->chgBit(oldp+6383,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[107]));
        bufp->chgBit(oldp+6384,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[108]));
        bufp->chgBit(oldp+6385,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[109]));
        bufp->chgBit(oldp+6386,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[110]));
        bufp->chgBit(oldp+6387,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[111]));
        bufp->chgBit(oldp+6388,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[112]));
        bufp->chgBit(oldp+6389,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[113]));
        bufp->chgBit(oldp+6390,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[114]));
        bufp->chgBit(oldp+6391,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[115]));
        bufp->chgBit(oldp+6392,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[116]));
        bufp->chgBit(oldp+6393,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[117]));
        bufp->chgBit(oldp+6394,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[118]));
        bufp->chgBit(oldp+6395,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[119]));
        bufp->chgBit(oldp+6396,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[120]));
        bufp->chgBit(oldp+6397,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[121]));
        bufp->chgBit(oldp+6398,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[122]));
        bufp->chgBit(oldp+6399,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[123]));
        bufp->chgBit(oldp+6400,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[124]));
        bufp->chgBit(oldp+6401,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[125]));
        bufp->chgBit(oldp+6402,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[126]));
        bufp->chgBit(oldp+6403,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__1__KET____DOT__DIRTY_RAM__DOT__RAM[127]));
        bufp->chgBit(oldp+6404,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__dirty_write
                                [2U]));
        bufp->chgBit(oldp+6405,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM
                                [vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__dirty_raddr]));
        bufp->chgBit(oldp+6406,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[0]));
        bufp->chgBit(oldp+6407,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[1]));
        bufp->chgBit(oldp+6408,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[2]));
        bufp->chgBit(oldp+6409,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[3]));
        bufp->chgBit(oldp+6410,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[4]));
        bufp->chgBit(oldp+6411,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[5]));
        bufp->chgBit(oldp+6412,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[6]));
        bufp->chgBit(oldp+6413,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[7]));
        bufp->chgBit(oldp+6414,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[8]));
        bufp->chgBit(oldp+6415,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[9]));
        bufp->chgBit(oldp+6416,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[10]));
        bufp->chgBit(oldp+6417,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[11]));
        bufp->chgBit(oldp+6418,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[12]));
        bufp->chgBit(oldp+6419,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[13]));
        bufp->chgBit(oldp+6420,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[14]));
        bufp->chgBit(oldp+6421,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[15]));
        bufp->chgBit(oldp+6422,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[16]));
        bufp->chgBit(oldp+6423,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[17]));
        bufp->chgBit(oldp+6424,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[18]));
        bufp->chgBit(oldp+6425,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[19]));
        bufp->chgBit(oldp+6426,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[20]));
        bufp->chgBit(oldp+6427,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[21]));
        bufp->chgBit(oldp+6428,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[22]));
        bufp->chgBit(oldp+6429,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[23]));
        bufp->chgBit(oldp+6430,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[24]));
        bufp->chgBit(oldp+6431,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[25]));
        bufp->chgBit(oldp+6432,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[26]));
        bufp->chgBit(oldp+6433,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[27]));
        bufp->chgBit(oldp+6434,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[28]));
        bufp->chgBit(oldp+6435,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[29]));
        bufp->chgBit(oldp+6436,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[30]));
        bufp->chgBit(oldp+6437,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[31]));
        bufp->chgBit(oldp+6438,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[32]));
        bufp->chgBit(oldp+6439,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[33]));
        bufp->chgBit(oldp+6440,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[34]));
        bufp->chgBit(oldp+6441,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[35]));
        bufp->chgBit(oldp+6442,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[36]));
        bufp->chgBit(oldp+6443,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[37]));
        bufp->chgBit(oldp+6444,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[38]));
        bufp->chgBit(oldp+6445,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[39]));
        bufp->chgBit(oldp+6446,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[40]));
        bufp->chgBit(oldp+6447,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[41]));
        bufp->chgBit(oldp+6448,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[42]));
        bufp->chgBit(oldp+6449,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[43]));
        bufp->chgBit(oldp+6450,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[44]));
        bufp->chgBit(oldp+6451,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[45]));
        bufp->chgBit(oldp+6452,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[46]));
        bufp->chgBit(oldp+6453,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[47]));
        bufp->chgBit(oldp+6454,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[48]));
        bufp->chgBit(oldp+6455,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[49]));
        bufp->chgBit(oldp+6456,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[50]));
        bufp->chgBit(oldp+6457,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[51]));
        bufp->chgBit(oldp+6458,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[52]));
        bufp->chgBit(oldp+6459,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[53]));
        bufp->chgBit(oldp+6460,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[54]));
        bufp->chgBit(oldp+6461,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[55]));
        bufp->chgBit(oldp+6462,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[56]));
        bufp->chgBit(oldp+6463,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[57]));
        bufp->chgBit(oldp+6464,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[58]));
        bufp->chgBit(oldp+6465,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[59]));
        bufp->chgBit(oldp+6466,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[60]));
        bufp->chgBit(oldp+6467,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[61]));
        bufp->chgBit(oldp+6468,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[62]));
        bufp->chgBit(oldp+6469,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[63]));
        bufp->chgBit(oldp+6470,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[64]));
        bufp->chgBit(oldp+6471,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[65]));
        bufp->chgBit(oldp+6472,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[66]));
        bufp->chgBit(oldp+6473,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[67]));
        bufp->chgBit(oldp+6474,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[68]));
        bufp->chgBit(oldp+6475,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[69]));
        bufp->chgBit(oldp+6476,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[70]));
        bufp->chgBit(oldp+6477,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[71]));
        bufp->chgBit(oldp+6478,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[72]));
        bufp->chgBit(oldp+6479,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[73]));
        bufp->chgBit(oldp+6480,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[74]));
        bufp->chgBit(oldp+6481,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[75]));
        bufp->chgBit(oldp+6482,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[76]));
        bufp->chgBit(oldp+6483,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[77]));
        bufp->chgBit(oldp+6484,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[78]));
        bufp->chgBit(oldp+6485,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[79]));
        bufp->chgBit(oldp+6486,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[80]));
        bufp->chgBit(oldp+6487,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[81]));
        bufp->chgBit(oldp+6488,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[82]));
        bufp->chgBit(oldp+6489,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[83]));
        bufp->chgBit(oldp+6490,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[84]));
        bufp->chgBit(oldp+6491,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[85]));
        bufp->chgBit(oldp+6492,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[86]));
        bufp->chgBit(oldp+6493,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[87]));
        bufp->chgBit(oldp+6494,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[88]));
        bufp->chgBit(oldp+6495,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[89]));
        bufp->chgBit(oldp+6496,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[90]));
        bufp->chgBit(oldp+6497,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[91]));
        bufp->chgBit(oldp+6498,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[92]));
        bufp->chgBit(oldp+6499,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[93]));
        bufp->chgBit(oldp+6500,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[94]));
        bufp->chgBit(oldp+6501,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[95]));
        bufp->chgBit(oldp+6502,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[96]));
        bufp->chgBit(oldp+6503,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[97]));
        bufp->chgBit(oldp+6504,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[98]));
        bufp->chgBit(oldp+6505,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[99]));
        bufp->chgBit(oldp+6506,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[100]));
        bufp->chgBit(oldp+6507,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[101]));
        bufp->chgBit(oldp+6508,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[102]));
        bufp->chgBit(oldp+6509,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[103]));
        bufp->chgBit(oldp+6510,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[104]));
        bufp->chgBit(oldp+6511,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[105]));
        bufp->chgBit(oldp+6512,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[106]));
        bufp->chgBit(oldp+6513,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[107]));
        bufp->chgBit(oldp+6514,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[108]));
        bufp->chgBit(oldp+6515,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[109]));
        bufp->chgBit(oldp+6516,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[110]));
        bufp->chgBit(oldp+6517,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[111]));
        bufp->chgBit(oldp+6518,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[112]));
        bufp->chgBit(oldp+6519,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[113]));
        bufp->chgBit(oldp+6520,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[114]));
        bufp->chgBit(oldp+6521,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[115]));
        bufp->chgBit(oldp+6522,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[116]));
        bufp->chgBit(oldp+6523,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[117]));
        bufp->chgBit(oldp+6524,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[118]));
        bufp->chgBit(oldp+6525,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[119]));
        bufp->chgBit(oldp+6526,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[120]));
        bufp->chgBit(oldp+6527,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[121]));
        bufp->chgBit(oldp+6528,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[122]));
        bufp->chgBit(oldp+6529,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[123]));
        bufp->chgBit(oldp+6530,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[124]));
        bufp->chgBit(oldp+6531,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[125]));
        bufp->chgBit(oldp+6532,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[126]));
        bufp->chgBit(oldp+6533,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__2__KET____DOT__DIRTY_RAM__DOT__RAM[127]));
        bufp->chgBit(oldp+6534,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__dirty_write
                                [3U]));
        bufp->chgBit(oldp+6535,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM
                                [vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__dirty_raddr]));
        bufp->chgBit(oldp+6536,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[0]));
        bufp->chgBit(oldp+6537,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[1]));
        bufp->chgBit(oldp+6538,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[2]));
        bufp->chgBit(oldp+6539,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[3]));
        bufp->chgBit(oldp+6540,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[4]));
        bufp->chgBit(oldp+6541,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[5]));
        bufp->chgBit(oldp+6542,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[6]));
        bufp->chgBit(oldp+6543,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[7]));
        bufp->chgBit(oldp+6544,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[8]));
        bufp->chgBit(oldp+6545,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[9]));
        bufp->chgBit(oldp+6546,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[10]));
        bufp->chgBit(oldp+6547,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[11]));
        bufp->chgBit(oldp+6548,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[12]));
        bufp->chgBit(oldp+6549,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[13]));
        bufp->chgBit(oldp+6550,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[14]));
        bufp->chgBit(oldp+6551,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[15]));
        bufp->chgBit(oldp+6552,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[16]));
        bufp->chgBit(oldp+6553,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[17]));
        bufp->chgBit(oldp+6554,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[18]));
        bufp->chgBit(oldp+6555,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[19]));
        bufp->chgBit(oldp+6556,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[20]));
        bufp->chgBit(oldp+6557,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[21]));
        bufp->chgBit(oldp+6558,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[22]));
        bufp->chgBit(oldp+6559,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[23]));
        bufp->chgBit(oldp+6560,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[24]));
        bufp->chgBit(oldp+6561,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[25]));
        bufp->chgBit(oldp+6562,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[26]));
        bufp->chgBit(oldp+6563,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[27]));
        bufp->chgBit(oldp+6564,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[28]));
        bufp->chgBit(oldp+6565,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[29]));
        bufp->chgBit(oldp+6566,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[30]));
        bufp->chgBit(oldp+6567,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[31]));
        bufp->chgBit(oldp+6568,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[32]));
        bufp->chgBit(oldp+6569,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[33]));
        bufp->chgBit(oldp+6570,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[34]));
        bufp->chgBit(oldp+6571,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[35]));
        bufp->chgBit(oldp+6572,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[36]));
        bufp->chgBit(oldp+6573,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[37]));
        bufp->chgBit(oldp+6574,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[38]));
        bufp->chgBit(oldp+6575,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[39]));
        bufp->chgBit(oldp+6576,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[40]));
        bufp->chgBit(oldp+6577,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[41]));
        bufp->chgBit(oldp+6578,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[42]));
        bufp->chgBit(oldp+6579,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[43]));
        bufp->chgBit(oldp+6580,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[44]));
        bufp->chgBit(oldp+6581,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[45]));
        bufp->chgBit(oldp+6582,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[46]));
        bufp->chgBit(oldp+6583,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[47]));
        bufp->chgBit(oldp+6584,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[48]));
        bufp->chgBit(oldp+6585,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[49]));
        bufp->chgBit(oldp+6586,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[50]));
        bufp->chgBit(oldp+6587,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[51]));
        bufp->chgBit(oldp+6588,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[52]));
        bufp->chgBit(oldp+6589,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[53]));
        bufp->chgBit(oldp+6590,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[54]));
        bufp->chgBit(oldp+6591,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[55]));
        bufp->chgBit(oldp+6592,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[56]));
        bufp->chgBit(oldp+6593,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[57]));
        bufp->chgBit(oldp+6594,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[58]));
        bufp->chgBit(oldp+6595,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[59]));
        bufp->chgBit(oldp+6596,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[60]));
        bufp->chgBit(oldp+6597,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[61]));
        bufp->chgBit(oldp+6598,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[62]));
        bufp->chgBit(oldp+6599,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[63]));
        bufp->chgBit(oldp+6600,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[64]));
        bufp->chgBit(oldp+6601,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[65]));
        bufp->chgBit(oldp+6602,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[66]));
        bufp->chgBit(oldp+6603,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[67]));
        bufp->chgBit(oldp+6604,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[68]));
        bufp->chgBit(oldp+6605,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[69]));
        bufp->chgBit(oldp+6606,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[70]));
        bufp->chgBit(oldp+6607,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[71]));
        bufp->chgBit(oldp+6608,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[72]));
        bufp->chgBit(oldp+6609,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[73]));
        bufp->chgBit(oldp+6610,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[74]));
        bufp->chgBit(oldp+6611,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[75]));
        bufp->chgBit(oldp+6612,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[76]));
        bufp->chgBit(oldp+6613,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[77]));
        bufp->chgBit(oldp+6614,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[78]));
        bufp->chgBit(oldp+6615,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[79]));
        bufp->chgBit(oldp+6616,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[80]));
        bufp->chgBit(oldp+6617,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[81]));
        bufp->chgBit(oldp+6618,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[82]));
        bufp->chgBit(oldp+6619,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[83]));
        bufp->chgBit(oldp+6620,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[84]));
        bufp->chgBit(oldp+6621,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[85]));
        bufp->chgBit(oldp+6622,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[86]));
        bufp->chgBit(oldp+6623,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[87]));
        bufp->chgBit(oldp+6624,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[88]));
        bufp->chgBit(oldp+6625,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[89]));
        bufp->chgBit(oldp+6626,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[90]));
        bufp->chgBit(oldp+6627,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[91]));
        bufp->chgBit(oldp+6628,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[92]));
        bufp->chgBit(oldp+6629,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[93]));
        bufp->chgBit(oldp+6630,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[94]));
        bufp->chgBit(oldp+6631,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[95]));
        bufp->chgBit(oldp+6632,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[96]));
        bufp->chgBit(oldp+6633,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[97]));
        bufp->chgBit(oldp+6634,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[98]));
        bufp->chgBit(oldp+6635,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[99]));
        bufp->chgBit(oldp+6636,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[100]));
        bufp->chgBit(oldp+6637,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[101]));
        bufp->chgBit(oldp+6638,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[102]));
        bufp->chgBit(oldp+6639,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[103]));
        bufp->chgBit(oldp+6640,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[104]));
        bufp->chgBit(oldp+6641,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[105]));
        bufp->chgBit(oldp+6642,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[106]));
        bufp->chgBit(oldp+6643,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[107]));
        bufp->chgBit(oldp+6644,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[108]));
        bufp->chgBit(oldp+6645,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[109]));
        bufp->chgBit(oldp+6646,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[110]));
        bufp->chgBit(oldp+6647,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[111]));
        bufp->chgBit(oldp+6648,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[112]));
        bufp->chgBit(oldp+6649,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[113]));
        bufp->chgBit(oldp+6650,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[114]));
        bufp->chgBit(oldp+6651,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[115]));
        bufp->chgBit(oldp+6652,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[116]));
        bufp->chgBit(oldp+6653,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[117]));
        bufp->chgBit(oldp+6654,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[118]));
        bufp->chgBit(oldp+6655,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[119]));
        bufp->chgBit(oldp+6656,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[120]));
        bufp->chgBit(oldp+6657,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[121]));
        bufp->chgBit(oldp+6658,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[122]));
        bufp->chgBit(oldp+6659,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[123]));
        bufp->chgBit(oldp+6660,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[124]));
        bufp->chgBit(oldp+6661,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[125]));
        bufp->chgBit(oldp+6662,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[126]));
        bufp->chgBit(oldp+6663,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__D_Cache__DOT__genblk4__BRA__3__KET____DOT__DIRTY_RAM__DOT__RAM[127]));
        bufp->chgBit(oldp+6664,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__way_hit[0]));
        bufp->chgBit(oldp+6665,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__way_hit[1]));
        bufp->chgBit(oldp+6666,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__way_hit[2]));
        bufp->chgBit(oldp+6667,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__way_hit[3]));
        bufp->chgCData(oldp+6668,((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__way_hit
                                   [0U] ? 0U : (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__way_hit
                                                [1U]
                                                 ? 
                                                (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__way_hit
                                                 [2U]
                                                  ? 0U
                                                  : 
                                                 (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__way_hit
                                                  [3U]
                                                   ? 0U
                                                   : 1U))
                                                 : 
                                                (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__way_hit
                                                 [2U]
                                                  ? 
                                                 (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__way_hit
                                                  [3U]
                                                   ? 0U
                                                   : 2U)
                                                  : 
                                                 (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__way_hit
                                                  [3U]
                                                   ? 3U
                                                   : 0U))))),2);
        bufp->chgBit(oldp+6669,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__cache_hit));
        bufp->chgWData(oldp+6670,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_block[0]),256);
        bufp->chgWData(oldp+6678,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_block[1]),256);
        bufp->chgWData(oldp+6686,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_block[2]),256);
        bufp->chgWData(oldp+6694,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_block[3]),256);
        bufp->chgWData(oldp+6702,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_hit),256);
        bufp->chgBit(oldp+6710,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__cache_write[0]));
        bufp->chgBit(oldp+6711,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__cache_write[1]));
        bufp->chgBit(oldp+6712,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__cache_write[2]));
        bufp->chgBit(oldp+6713,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__cache_write[3]));
        bufp->chgBit(oldp+6714,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__valid_write[0]));
        bufp->chgBit(oldp+6715,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__valid_write[1]));
        bufp->chgBit(oldp+6716,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__valid_write[2]));
        bufp->chgBit(oldp+6717,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__valid_write[3]));
        bufp->chgIData(oldp+6718,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_tag_o[0]),20);
        bufp->chgIData(oldp+6719,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_tag_o[1]),20);
        bufp->chgIData(oldp+6720,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_tag_o[2]),20);
        bufp->chgIData(oldp+6721,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_tag_o[3]),20);
        bufp->chgBit(oldp+6722,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_valid_o[0]));
        bufp->chgBit(oldp+6723,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_valid_o[1]));
        bufp->chgBit(oldp+6724,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_valid_o[2]));
        bufp->chgBit(oldp+6725,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_valid_o[3]));
        bufp->chgCData(oldp+6726,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__init_count),7);
        bufp->chgCData(oldp+6727,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[0]),2);
        bufp->chgCData(oldp+6728,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[1]),2);
        bufp->chgCData(oldp+6729,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[2]),2);
        bufp->chgCData(oldp+6730,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[3]),2);
        bufp->chgCData(oldp+6731,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[4]),2);
        bufp->chgCData(oldp+6732,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[5]),2);
        bufp->chgCData(oldp+6733,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[6]),2);
        bufp->chgCData(oldp+6734,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[7]),2);
        bufp->chgCData(oldp+6735,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[8]),2);
        bufp->chgCData(oldp+6736,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[9]),2);
        bufp->chgCData(oldp+6737,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[10]),2);
        bufp->chgCData(oldp+6738,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[11]),2);
        bufp->chgCData(oldp+6739,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[12]),2);
        bufp->chgCData(oldp+6740,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[13]),2);
        bufp->chgCData(oldp+6741,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[14]),2);
        bufp->chgCData(oldp+6742,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[15]),2);
        bufp->chgCData(oldp+6743,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[16]),2);
        bufp->chgCData(oldp+6744,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[17]),2);
        bufp->chgCData(oldp+6745,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[18]),2);
        bufp->chgCData(oldp+6746,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[19]),2);
        bufp->chgCData(oldp+6747,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[20]),2);
        bufp->chgCData(oldp+6748,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[21]),2);
        bufp->chgCData(oldp+6749,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[22]),2);
        bufp->chgCData(oldp+6750,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[23]),2);
        bufp->chgCData(oldp+6751,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[24]),2);
        bufp->chgCData(oldp+6752,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[25]),2);
        bufp->chgCData(oldp+6753,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[26]),2);
        bufp->chgCData(oldp+6754,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[27]),2);
        bufp->chgCData(oldp+6755,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[28]),2);
        bufp->chgCData(oldp+6756,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[29]),2);
        bufp->chgCData(oldp+6757,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[30]),2);
        bufp->chgCData(oldp+6758,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[31]),2);
        bufp->chgCData(oldp+6759,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[32]),2);
        bufp->chgCData(oldp+6760,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[33]),2);
        bufp->chgCData(oldp+6761,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[34]),2);
        bufp->chgCData(oldp+6762,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[35]),2);
        bufp->chgCData(oldp+6763,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[36]),2);
        bufp->chgCData(oldp+6764,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[37]),2);
        bufp->chgCData(oldp+6765,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[38]),2);
        bufp->chgCData(oldp+6766,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[39]),2);
        bufp->chgCData(oldp+6767,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[40]),2);
        bufp->chgCData(oldp+6768,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[41]),2);
        bufp->chgCData(oldp+6769,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[42]),2);
        bufp->chgCData(oldp+6770,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[43]),2);
        bufp->chgCData(oldp+6771,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[44]),2);
        bufp->chgCData(oldp+6772,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[45]),2);
        bufp->chgCData(oldp+6773,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[46]),2);
        bufp->chgCData(oldp+6774,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[47]),2);
        bufp->chgCData(oldp+6775,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[48]),2);
        bufp->chgCData(oldp+6776,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[49]),2);
        bufp->chgCData(oldp+6777,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[50]),2);
        bufp->chgCData(oldp+6778,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[51]),2);
        bufp->chgCData(oldp+6779,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[52]),2);
        bufp->chgCData(oldp+6780,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[53]),2);
        bufp->chgCData(oldp+6781,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[54]),2);
        bufp->chgCData(oldp+6782,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[55]),2);
        bufp->chgCData(oldp+6783,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[56]),2);
        bufp->chgCData(oldp+6784,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[57]),2);
        bufp->chgCData(oldp+6785,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[58]),2);
        bufp->chgCData(oldp+6786,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[59]),2);
        bufp->chgCData(oldp+6787,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[60]),2);
        bufp->chgCData(oldp+6788,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[61]),2);
        bufp->chgCData(oldp+6789,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[62]),2);
        bufp->chgCData(oldp+6790,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[63]),2);
        bufp->chgCData(oldp+6791,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[64]),2);
        bufp->chgCData(oldp+6792,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[65]),2);
        bufp->chgCData(oldp+6793,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[66]),2);
        bufp->chgCData(oldp+6794,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[67]),2);
        bufp->chgCData(oldp+6795,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[68]),2);
        bufp->chgCData(oldp+6796,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[69]),2);
        bufp->chgCData(oldp+6797,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[70]),2);
        bufp->chgCData(oldp+6798,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[71]),2);
        bufp->chgCData(oldp+6799,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[72]),2);
        bufp->chgCData(oldp+6800,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[73]),2);
        bufp->chgCData(oldp+6801,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[74]),2);
        bufp->chgCData(oldp+6802,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[75]),2);
        bufp->chgCData(oldp+6803,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[76]),2);
        bufp->chgCData(oldp+6804,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[77]),2);
        bufp->chgCData(oldp+6805,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[78]),2);
        bufp->chgCData(oldp+6806,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[79]),2);
        bufp->chgCData(oldp+6807,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[80]),2);
        bufp->chgCData(oldp+6808,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[81]),2);
        bufp->chgCData(oldp+6809,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[82]),2);
        bufp->chgCData(oldp+6810,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[83]),2);
        bufp->chgCData(oldp+6811,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[84]),2);
        bufp->chgCData(oldp+6812,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[85]),2);
        bufp->chgCData(oldp+6813,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[86]),2);
        bufp->chgCData(oldp+6814,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[87]),2);
        bufp->chgCData(oldp+6815,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[88]),2);
        bufp->chgCData(oldp+6816,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[89]),2);
        bufp->chgCData(oldp+6817,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[90]),2);
        bufp->chgCData(oldp+6818,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[91]),2);
        bufp->chgCData(oldp+6819,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[92]),2);
        bufp->chgCData(oldp+6820,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[93]),2);
        bufp->chgCData(oldp+6821,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[94]),2);
        bufp->chgCData(oldp+6822,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[95]),2);
        bufp->chgCData(oldp+6823,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[96]),2);
        bufp->chgCData(oldp+6824,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[97]),2);
        bufp->chgCData(oldp+6825,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[98]),2);
        bufp->chgCData(oldp+6826,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[99]),2);
        bufp->chgCData(oldp+6827,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[100]),2);
        bufp->chgCData(oldp+6828,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[101]),2);
        bufp->chgCData(oldp+6829,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[102]),2);
        bufp->chgCData(oldp+6830,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[103]),2);
        bufp->chgCData(oldp+6831,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[104]),2);
        bufp->chgCData(oldp+6832,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[105]),2);
        bufp->chgCData(oldp+6833,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[106]),2);
        bufp->chgCData(oldp+6834,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[107]),2);
        bufp->chgCData(oldp+6835,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[108]),2);
        bufp->chgCData(oldp+6836,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[109]),2);
        bufp->chgCData(oldp+6837,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[110]),2);
        bufp->chgCData(oldp+6838,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[111]),2);
        bufp->chgCData(oldp+6839,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[112]),2);
        bufp->chgCData(oldp+6840,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[113]),2);
        bufp->chgCData(oldp+6841,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[114]),2);
        bufp->chgCData(oldp+6842,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[115]),2);
        bufp->chgCData(oldp+6843,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[116]),2);
        bufp->chgCData(oldp+6844,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[117]),2);
        bufp->chgCData(oldp+6845,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[118]),2);
        bufp->chgCData(oldp+6846,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[119]),2);
        bufp->chgCData(oldp+6847,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[120]),2);
        bufp->chgCData(oldp+6848,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[121]),2);
        bufp->chgCData(oldp+6849,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[122]),2);
        bufp->chgCData(oldp+6850,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[123]),2);
        bufp->chgCData(oldp+6851,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[124]),2);
        bufp->chgCData(oldp+6852,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[125]),2);
        bufp->chgCData(oldp+6853,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[126]),2);
        bufp->chgCData(oldp+6854,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__FIFO_cnt[127]),2);
        bufp->chgCData(oldp+6855,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__victim_sel),2);
        bufp->chgCData(oldp+6856,((7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                         >> 2U))),3);
        bufp->chgCData(oldp+6857,((0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                            >> 5U))),7);
        bufp->chgIData(oldp+6858,((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                   >> 0xcU)),20);
        bufp->chgCData(oldp+6859,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__index_prev),7);
        bufp->chgBit(oldp+6860,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__index_prev) 
                                 != (0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                              >> 5U)))));
        bufp->chgIData(oldp+6861,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__p_data_reg),32);
        bufp->chgBit(oldp+6862,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__is_diff_index_reg));
        bufp->chgCData(oldp+6863,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__line_offset_reg),3);
        bufp->chgIData(oldp+6864,(((4U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__line_offset_reg))
                                    ? ((2U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__line_offset_reg))
                                        ? ((1U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__line_offset_reg))
                                            ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[0U]
                                            : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[1U])
                                        : ((1U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__line_offset_reg))
                                            ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[2U]
                                            : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[3U]))
                                    : ((2U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__line_offset_reg))
                                        ? ((1U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__line_offset_reg))
                                            ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[4U]
                                            : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[5U])
                                        : ((1U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__line_offset_reg))
                                            ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[6U]
                                            : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd[7U])))),32);
        bufp->chgCData(oldp+6865,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__way_offset_reg),4);
        bufp->chgWData(oldp+6866,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_fwd),256);
        bufp->chgCData(oldp+6874,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__S),3);
        bufp->chgIData(oldp+6875,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__idx),32);
        bufp->chgIData(oldp+6876,(((0x10U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r)
                                    ? ((8U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r)
                                        ? ((4U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r)
                                            ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_hit[0U]
                                            : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_hit[1U])
                                        : ((4U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r)
                                            ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_hit[2U]
                                            : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_hit[3U]))
                                    : ((8U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r)
                                        ? ((4U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r)
                                            ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_hit[4U]
                                            : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_hit[5U])
                                        : ((4U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r)
                                            ? vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_hit[6U]
                                            : vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__c_data_hit[7U])))),32);
        bufp->chgIData(oldp+6877,(((0x10U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r)
                                    ? ((8U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r)
                                        ? ((4U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r)
                                            ? vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_imem_o[0U]
                                            : vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_imem_o[1U])
                                        : ((4U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r)
                                            ? vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_imem_o[2U]
                                            : vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_imem_o[3U]))
                                    : ((8U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r)
                                        ? ((4U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r)
                                            ? vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_imem_o[4U]
                                            : vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_imem_o[5U])
                                        : ((4U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r)
                                            ? vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_imem_o[6U]
                                            : vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__rdata_imem_o[7U])))),32);
        bufp->chgBit(oldp+6878,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__m_strobe));
        bufp->chgBit(oldp+6879,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__m_strobe_r));
        bufp->chgBit(oldp+6880,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__cache_write
                                [0U]));
        bufp->chgWData(oldp+6881,(vlSymsp->TOP__aquila_testharness__aquila_core.I_Cache__DOT____Vcellout__genblk1__BRA__0__KET____DOT__DATA_BRAM__data_o),256);
        bufp->chgWData(oldp+6889,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
        bufp->chgWData(oldp+6897,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
        bufp->chgWData(oldp+6905,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
        bufp->chgWData(oldp+6913,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
        bufp->chgWData(oldp+6921,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
        bufp->chgWData(oldp+6929,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
        bufp->chgWData(oldp+6937,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
        bufp->chgWData(oldp+6945,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
        bufp->chgWData(oldp+6953,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
        bufp->chgWData(oldp+6961,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
        bufp->chgWData(oldp+6969,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
        bufp->chgWData(oldp+6977,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
        bufp->chgWData(oldp+6985,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
        bufp->chgWData(oldp+6993,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
        bufp->chgWData(oldp+7001,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
        bufp->chgWData(oldp+7009,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
        bufp->chgWData(oldp+7017,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
        bufp->chgWData(oldp+7025,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
        bufp->chgWData(oldp+7033,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
        bufp->chgWData(oldp+7041,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
        bufp->chgWData(oldp+7049,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
        bufp->chgWData(oldp+7057,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
        bufp->chgWData(oldp+7065,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
        bufp->chgWData(oldp+7073,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
        bufp->chgWData(oldp+7081,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
        bufp->chgWData(oldp+7089,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
        bufp->chgWData(oldp+7097,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
        bufp->chgWData(oldp+7105,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
        bufp->chgWData(oldp+7113,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
        bufp->chgWData(oldp+7121,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
        bufp->chgWData(oldp+7129,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
        bufp->chgWData(oldp+7137,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
        bufp->chgWData(oldp+7145,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[32]),256);
        bufp->chgWData(oldp+7153,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[33]),256);
        bufp->chgWData(oldp+7161,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[34]),256);
        bufp->chgWData(oldp+7169,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[35]),256);
        bufp->chgWData(oldp+7177,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[36]),256);
        bufp->chgWData(oldp+7185,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[37]),256);
        bufp->chgWData(oldp+7193,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[38]),256);
        bufp->chgWData(oldp+7201,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[39]),256);
        bufp->chgWData(oldp+7209,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[40]),256);
        bufp->chgWData(oldp+7217,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[41]),256);
        bufp->chgWData(oldp+7225,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[42]),256);
        bufp->chgWData(oldp+7233,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[43]),256);
        bufp->chgWData(oldp+7241,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[44]),256);
        bufp->chgWData(oldp+7249,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[45]),256);
        bufp->chgWData(oldp+7257,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[46]),256);
        bufp->chgWData(oldp+7265,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[47]),256);
        bufp->chgWData(oldp+7273,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[48]),256);
        bufp->chgWData(oldp+7281,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[49]),256);
        bufp->chgWData(oldp+7289,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[50]),256);
        bufp->chgWData(oldp+7297,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[51]),256);
        bufp->chgWData(oldp+7305,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[52]),256);
        bufp->chgWData(oldp+7313,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[53]),256);
        bufp->chgWData(oldp+7321,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[54]),256);
        bufp->chgWData(oldp+7329,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[55]),256);
        bufp->chgWData(oldp+7337,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[56]),256);
        bufp->chgWData(oldp+7345,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[57]),256);
        bufp->chgWData(oldp+7353,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[58]),256);
        bufp->chgWData(oldp+7361,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[59]),256);
        bufp->chgWData(oldp+7369,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[60]),256);
        bufp->chgWData(oldp+7377,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[61]),256);
        bufp->chgWData(oldp+7385,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[62]),256);
        bufp->chgWData(oldp+7393,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[63]),256);
        bufp->chgWData(oldp+7401,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[64]),256);
        bufp->chgWData(oldp+7409,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[65]),256);
        bufp->chgWData(oldp+7417,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[66]),256);
        bufp->chgWData(oldp+7425,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[67]),256);
        bufp->chgWData(oldp+7433,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[68]),256);
        bufp->chgWData(oldp+7441,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[69]),256);
        bufp->chgWData(oldp+7449,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[70]),256);
        bufp->chgWData(oldp+7457,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[71]),256);
        bufp->chgWData(oldp+7465,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[72]),256);
        bufp->chgWData(oldp+7473,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[73]),256);
        bufp->chgWData(oldp+7481,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[74]),256);
        bufp->chgWData(oldp+7489,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[75]),256);
        bufp->chgWData(oldp+7497,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[76]),256);
        bufp->chgWData(oldp+7505,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[77]),256);
        bufp->chgWData(oldp+7513,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[78]),256);
        bufp->chgWData(oldp+7521,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[79]),256);
        bufp->chgWData(oldp+7529,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[80]),256);
        bufp->chgWData(oldp+7537,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[81]),256);
        bufp->chgWData(oldp+7545,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[82]),256);
        bufp->chgWData(oldp+7553,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[83]),256);
        bufp->chgWData(oldp+7561,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[84]),256);
        bufp->chgWData(oldp+7569,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[85]),256);
        bufp->chgWData(oldp+7577,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[86]),256);
        bufp->chgWData(oldp+7585,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[87]),256);
        bufp->chgWData(oldp+7593,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[88]),256);
        bufp->chgWData(oldp+7601,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[89]),256);
        bufp->chgWData(oldp+7609,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[90]),256);
        bufp->chgWData(oldp+7617,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[91]),256);
        bufp->chgWData(oldp+7625,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[92]),256);
        bufp->chgWData(oldp+7633,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[93]),256);
        bufp->chgWData(oldp+7641,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[94]),256);
        bufp->chgWData(oldp+7649,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[95]),256);
        bufp->chgWData(oldp+7657,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[96]),256);
        bufp->chgWData(oldp+7665,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[97]),256);
        bufp->chgWData(oldp+7673,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[98]),256);
        bufp->chgWData(oldp+7681,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[99]),256);
        bufp->chgWData(oldp+7689,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[100]),256);
        bufp->chgWData(oldp+7697,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[101]),256);
        bufp->chgWData(oldp+7705,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[102]),256);
        bufp->chgWData(oldp+7713,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[103]),256);
        bufp->chgWData(oldp+7721,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[104]),256);
        bufp->chgWData(oldp+7729,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[105]),256);
        bufp->chgWData(oldp+7737,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[106]),256);
        bufp->chgWData(oldp+7745,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[107]),256);
        bufp->chgWData(oldp+7753,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[108]),256);
        bufp->chgWData(oldp+7761,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[109]),256);
        bufp->chgWData(oldp+7769,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[110]),256);
        bufp->chgWData(oldp+7777,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[111]),256);
        bufp->chgWData(oldp+7785,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[112]),256);
        bufp->chgWData(oldp+7793,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[113]),256);
        bufp->chgWData(oldp+7801,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[114]),256);
        bufp->chgWData(oldp+7809,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[115]),256);
        bufp->chgWData(oldp+7817,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[116]),256);
        bufp->chgWData(oldp+7825,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[117]),256);
        bufp->chgWData(oldp+7833,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[118]),256);
        bufp->chgWData(oldp+7841,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[119]),256);
        bufp->chgWData(oldp+7849,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[120]),256);
        bufp->chgWData(oldp+7857,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[121]),256);
        bufp->chgWData(oldp+7865,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[122]),256);
        bufp->chgWData(oldp+7873,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[123]),256);
        bufp->chgWData(oldp+7881,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[124]),256);
        bufp->chgWData(oldp+7889,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[125]),256);
        bufp->chgWData(oldp+7897,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[126]),256);
        bufp->chgWData(oldp+7905,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__0__KET____DOT__DATA_BRAM__DOT__RAM[127]),256);
        bufp->chgBit(oldp+7913,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__cache_write
                                [1U]));
        bufp->chgWData(oldp+7914,(vlSymsp->TOP__aquila_testharness__aquila_core.I_Cache__DOT____Vcellout__genblk1__BRA__1__KET____DOT__DATA_BRAM__data_o),256);
        bufp->chgWData(oldp+7922,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
        bufp->chgWData(oldp+7930,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
        bufp->chgWData(oldp+7938,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
        bufp->chgWData(oldp+7946,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
        bufp->chgWData(oldp+7954,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
        bufp->chgWData(oldp+7962,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
        bufp->chgWData(oldp+7970,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
        bufp->chgWData(oldp+7978,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
        bufp->chgWData(oldp+7986,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
        bufp->chgWData(oldp+7994,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
        bufp->chgWData(oldp+8002,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
        bufp->chgWData(oldp+8010,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
        bufp->chgWData(oldp+8018,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
        bufp->chgWData(oldp+8026,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
        bufp->chgWData(oldp+8034,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
        bufp->chgWData(oldp+8042,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
        bufp->chgWData(oldp+8050,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
        bufp->chgWData(oldp+8058,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
        bufp->chgWData(oldp+8066,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
        bufp->chgWData(oldp+8074,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
        bufp->chgWData(oldp+8082,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
        bufp->chgWData(oldp+8090,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
        bufp->chgWData(oldp+8098,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
        bufp->chgWData(oldp+8106,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
        bufp->chgWData(oldp+8114,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
        bufp->chgWData(oldp+8122,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
        bufp->chgWData(oldp+8130,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
        bufp->chgWData(oldp+8138,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
        bufp->chgWData(oldp+8146,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
        bufp->chgWData(oldp+8154,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
        bufp->chgWData(oldp+8162,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
        bufp->chgWData(oldp+8170,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
        bufp->chgWData(oldp+8178,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[32]),256);
        bufp->chgWData(oldp+8186,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[33]),256);
        bufp->chgWData(oldp+8194,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[34]),256);
        bufp->chgWData(oldp+8202,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[35]),256);
        bufp->chgWData(oldp+8210,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[36]),256);
        bufp->chgWData(oldp+8218,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[37]),256);
        bufp->chgWData(oldp+8226,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[38]),256);
        bufp->chgWData(oldp+8234,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[39]),256);
        bufp->chgWData(oldp+8242,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[40]),256);
        bufp->chgWData(oldp+8250,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[41]),256);
        bufp->chgWData(oldp+8258,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[42]),256);
        bufp->chgWData(oldp+8266,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[43]),256);
        bufp->chgWData(oldp+8274,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[44]),256);
        bufp->chgWData(oldp+8282,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[45]),256);
        bufp->chgWData(oldp+8290,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[46]),256);
        bufp->chgWData(oldp+8298,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[47]),256);
        bufp->chgWData(oldp+8306,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[48]),256);
        bufp->chgWData(oldp+8314,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[49]),256);
        bufp->chgWData(oldp+8322,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[50]),256);
        bufp->chgWData(oldp+8330,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[51]),256);
        bufp->chgWData(oldp+8338,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[52]),256);
        bufp->chgWData(oldp+8346,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[53]),256);
        bufp->chgWData(oldp+8354,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[54]),256);
        bufp->chgWData(oldp+8362,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[55]),256);
        bufp->chgWData(oldp+8370,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[56]),256);
        bufp->chgWData(oldp+8378,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[57]),256);
        bufp->chgWData(oldp+8386,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[58]),256);
        bufp->chgWData(oldp+8394,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[59]),256);
        bufp->chgWData(oldp+8402,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[60]),256);
        bufp->chgWData(oldp+8410,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[61]),256);
        bufp->chgWData(oldp+8418,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[62]),256);
        bufp->chgWData(oldp+8426,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[63]),256);
        bufp->chgWData(oldp+8434,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[64]),256);
        bufp->chgWData(oldp+8442,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[65]),256);
        bufp->chgWData(oldp+8450,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[66]),256);
        bufp->chgWData(oldp+8458,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[67]),256);
        bufp->chgWData(oldp+8466,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[68]),256);
        bufp->chgWData(oldp+8474,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[69]),256);
        bufp->chgWData(oldp+8482,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[70]),256);
        bufp->chgWData(oldp+8490,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[71]),256);
        bufp->chgWData(oldp+8498,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[72]),256);
        bufp->chgWData(oldp+8506,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[73]),256);
        bufp->chgWData(oldp+8514,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[74]),256);
        bufp->chgWData(oldp+8522,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[75]),256);
        bufp->chgWData(oldp+8530,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[76]),256);
        bufp->chgWData(oldp+8538,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[77]),256);
        bufp->chgWData(oldp+8546,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[78]),256);
        bufp->chgWData(oldp+8554,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[79]),256);
        bufp->chgWData(oldp+8562,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[80]),256);
        bufp->chgWData(oldp+8570,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[81]),256);
        bufp->chgWData(oldp+8578,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[82]),256);
        bufp->chgWData(oldp+8586,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[83]),256);
        bufp->chgWData(oldp+8594,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[84]),256);
        bufp->chgWData(oldp+8602,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[85]),256);
        bufp->chgWData(oldp+8610,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[86]),256);
        bufp->chgWData(oldp+8618,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[87]),256);
        bufp->chgWData(oldp+8626,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[88]),256);
        bufp->chgWData(oldp+8634,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[89]),256);
        bufp->chgWData(oldp+8642,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[90]),256);
        bufp->chgWData(oldp+8650,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[91]),256);
        bufp->chgWData(oldp+8658,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[92]),256);
        bufp->chgWData(oldp+8666,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[93]),256);
        bufp->chgWData(oldp+8674,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[94]),256);
        bufp->chgWData(oldp+8682,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[95]),256);
        bufp->chgWData(oldp+8690,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[96]),256);
        bufp->chgWData(oldp+8698,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[97]),256);
        bufp->chgWData(oldp+8706,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[98]),256);
        bufp->chgWData(oldp+8714,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[99]),256);
        bufp->chgWData(oldp+8722,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[100]),256);
        bufp->chgWData(oldp+8730,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[101]),256);
        bufp->chgWData(oldp+8738,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[102]),256);
        bufp->chgWData(oldp+8746,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[103]),256);
        bufp->chgWData(oldp+8754,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[104]),256);
        bufp->chgWData(oldp+8762,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[105]),256);
        bufp->chgWData(oldp+8770,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[106]),256);
        bufp->chgWData(oldp+8778,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[107]),256);
        bufp->chgWData(oldp+8786,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[108]),256);
        bufp->chgWData(oldp+8794,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[109]),256);
        bufp->chgWData(oldp+8802,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[110]),256);
        bufp->chgWData(oldp+8810,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[111]),256);
        bufp->chgWData(oldp+8818,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[112]),256);
        bufp->chgWData(oldp+8826,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[113]),256);
        bufp->chgWData(oldp+8834,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[114]),256);
        bufp->chgWData(oldp+8842,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[115]),256);
        bufp->chgWData(oldp+8850,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[116]),256);
        bufp->chgWData(oldp+8858,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[117]),256);
        bufp->chgWData(oldp+8866,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[118]),256);
        bufp->chgWData(oldp+8874,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[119]),256);
        bufp->chgWData(oldp+8882,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[120]),256);
        bufp->chgWData(oldp+8890,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[121]),256);
        bufp->chgWData(oldp+8898,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[122]),256);
        bufp->chgWData(oldp+8906,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[123]),256);
        bufp->chgWData(oldp+8914,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[124]),256);
        bufp->chgWData(oldp+8922,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[125]),256);
        bufp->chgWData(oldp+8930,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[126]),256);
        bufp->chgWData(oldp+8938,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__1__KET____DOT__DATA_BRAM__DOT__RAM[127]),256);
        bufp->chgBit(oldp+8946,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__cache_write
                                [2U]));
        bufp->chgWData(oldp+8947,(vlSymsp->TOP__aquila_testharness__aquila_core.I_Cache__DOT____Vcellout__genblk1__BRA__2__KET____DOT__DATA_BRAM__data_o),256);
        bufp->chgWData(oldp+8955,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
        bufp->chgWData(oldp+8963,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
        bufp->chgWData(oldp+8971,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
        bufp->chgWData(oldp+8979,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
        bufp->chgWData(oldp+8987,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
        bufp->chgWData(oldp+8995,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
        bufp->chgWData(oldp+9003,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
        bufp->chgWData(oldp+9011,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
        bufp->chgWData(oldp+9019,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
        bufp->chgWData(oldp+9027,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
        bufp->chgWData(oldp+9035,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
        bufp->chgWData(oldp+9043,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
        bufp->chgWData(oldp+9051,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
        bufp->chgWData(oldp+9059,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
        bufp->chgWData(oldp+9067,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
        bufp->chgWData(oldp+9075,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
        bufp->chgWData(oldp+9083,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
        bufp->chgWData(oldp+9091,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
        bufp->chgWData(oldp+9099,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
        bufp->chgWData(oldp+9107,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
        bufp->chgWData(oldp+9115,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
        bufp->chgWData(oldp+9123,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
        bufp->chgWData(oldp+9131,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
        bufp->chgWData(oldp+9139,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
        bufp->chgWData(oldp+9147,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
        bufp->chgWData(oldp+9155,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
        bufp->chgWData(oldp+9163,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
        bufp->chgWData(oldp+9171,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
        bufp->chgWData(oldp+9179,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
        bufp->chgWData(oldp+9187,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
        bufp->chgWData(oldp+9195,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
        bufp->chgWData(oldp+9203,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
        bufp->chgWData(oldp+9211,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[32]),256);
        bufp->chgWData(oldp+9219,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[33]),256);
        bufp->chgWData(oldp+9227,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[34]),256);
        bufp->chgWData(oldp+9235,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[35]),256);
        bufp->chgWData(oldp+9243,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[36]),256);
        bufp->chgWData(oldp+9251,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[37]),256);
        bufp->chgWData(oldp+9259,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[38]),256);
        bufp->chgWData(oldp+9267,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[39]),256);
        bufp->chgWData(oldp+9275,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[40]),256);
        bufp->chgWData(oldp+9283,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[41]),256);
        bufp->chgWData(oldp+9291,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[42]),256);
        bufp->chgWData(oldp+9299,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[43]),256);
        bufp->chgWData(oldp+9307,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[44]),256);
        bufp->chgWData(oldp+9315,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[45]),256);
        bufp->chgWData(oldp+9323,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[46]),256);
        bufp->chgWData(oldp+9331,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[47]),256);
        bufp->chgWData(oldp+9339,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[48]),256);
        bufp->chgWData(oldp+9347,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[49]),256);
        bufp->chgWData(oldp+9355,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[50]),256);
        bufp->chgWData(oldp+9363,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[51]),256);
        bufp->chgWData(oldp+9371,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[52]),256);
        bufp->chgWData(oldp+9379,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[53]),256);
        bufp->chgWData(oldp+9387,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[54]),256);
        bufp->chgWData(oldp+9395,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[55]),256);
        bufp->chgWData(oldp+9403,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[56]),256);
        bufp->chgWData(oldp+9411,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[57]),256);
        bufp->chgWData(oldp+9419,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[58]),256);
        bufp->chgWData(oldp+9427,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[59]),256);
        bufp->chgWData(oldp+9435,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[60]),256);
        bufp->chgWData(oldp+9443,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[61]),256);
        bufp->chgWData(oldp+9451,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[62]),256);
        bufp->chgWData(oldp+9459,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[63]),256);
        bufp->chgWData(oldp+9467,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[64]),256);
        bufp->chgWData(oldp+9475,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[65]),256);
        bufp->chgWData(oldp+9483,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[66]),256);
        bufp->chgWData(oldp+9491,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[67]),256);
        bufp->chgWData(oldp+9499,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[68]),256);
        bufp->chgWData(oldp+9507,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[69]),256);
        bufp->chgWData(oldp+9515,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[70]),256);
        bufp->chgWData(oldp+9523,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[71]),256);
        bufp->chgWData(oldp+9531,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[72]),256);
        bufp->chgWData(oldp+9539,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[73]),256);
        bufp->chgWData(oldp+9547,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[74]),256);
        bufp->chgWData(oldp+9555,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[75]),256);
        bufp->chgWData(oldp+9563,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[76]),256);
        bufp->chgWData(oldp+9571,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[77]),256);
        bufp->chgWData(oldp+9579,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[78]),256);
        bufp->chgWData(oldp+9587,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[79]),256);
        bufp->chgWData(oldp+9595,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[80]),256);
        bufp->chgWData(oldp+9603,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[81]),256);
        bufp->chgWData(oldp+9611,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[82]),256);
        bufp->chgWData(oldp+9619,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[83]),256);
        bufp->chgWData(oldp+9627,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[84]),256);
        bufp->chgWData(oldp+9635,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[85]),256);
        bufp->chgWData(oldp+9643,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[86]),256);
        bufp->chgWData(oldp+9651,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[87]),256);
        bufp->chgWData(oldp+9659,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[88]),256);
        bufp->chgWData(oldp+9667,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[89]),256);
        bufp->chgWData(oldp+9675,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[90]),256);
        bufp->chgWData(oldp+9683,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[91]),256);
        bufp->chgWData(oldp+9691,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[92]),256);
        bufp->chgWData(oldp+9699,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[93]),256);
        bufp->chgWData(oldp+9707,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[94]),256);
        bufp->chgWData(oldp+9715,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[95]),256);
        bufp->chgWData(oldp+9723,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[96]),256);
        bufp->chgWData(oldp+9731,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[97]),256);
        bufp->chgWData(oldp+9739,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[98]),256);
        bufp->chgWData(oldp+9747,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[99]),256);
        bufp->chgWData(oldp+9755,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[100]),256);
        bufp->chgWData(oldp+9763,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[101]),256);
        bufp->chgWData(oldp+9771,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[102]),256);
        bufp->chgWData(oldp+9779,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[103]),256);
        bufp->chgWData(oldp+9787,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[104]),256);
        bufp->chgWData(oldp+9795,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[105]),256);
        bufp->chgWData(oldp+9803,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[106]),256);
        bufp->chgWData(oldp+9811,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[107]),256);
        bufp->chgWData(oldp+9819,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[108]),256);
        bufp->chgWData(oldp+9827,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[109]),256);
        bufp->chgWData(oldp+9835,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[110]),256);
        bufp->chgWData(oldp+9843,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[111]),256);
        bufp->chgWData(oldp+9851,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[112]),256);
        bufp->chgWData(oldp+9859,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[113]),256);
        bufp->chgWData(oldp+9867,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[114]),256);
        bufp->chgWData(oldp+9875,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[115]),256);
        bufp->chgWData(oldp+9883,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[116]),256);
        bufp->chgWData(oldp+9891,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[117]),256);
        bufp->chgWData(oldp+9899,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[118]),256);
        bufp->chgWData(oldp+9907,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[119]),256);
        bufp->chgWData(oldp+9915,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[120]),256);
        bufp->chgWData(oldp+9923,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[121]),256);
        bufp->chgWData(oldp+9931,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[122]),256);
        bufp->chgWData(oldp+9939,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[123]),256);
        bufp->chgWData(oldp+9947,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[124]),256);
        bufp->chgWData(oldp+9955,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[125]),256);
        bufp->chgWData(oldp+9963,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[126]),256);
        bufp->chgWData(oldp+9971,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__2__KET____DOT__DATA_BRAM__DOT__RAM[127]),256);
        bufp->chgBit(oldp+9979,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__cache_write
                                [3U]));
        bufp->chgWData(oldp+9980,(vlSymsp->TOP__aquila_testharness__aquila_core.I_Cache__DOT____Vcellout__genblk1__BRA__3__KET____DOT__DATA_BRAM__data_o),256);
        bufp->chgWData(oldp+9988,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[0]),256);
        bufp->chgWData(oldp+9996,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[1]),256);
        bufp->chgWData(oldp+10004,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[2]),256);
        bufp->chgWData(oldp+10012,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[3]),256);
        bufp->chgWData(oldp+10020,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[4]),256);
        bufp->chgWData(oldp+10028,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[5]),256);
        bufp->chgWData(oldp+10036,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[6]),256);
        bufp->chgWData(oldp+10044,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[7]),256);
        bufp->chgWData(oldp+10052,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[8]),256);
        bufp->chgWData(oldp+10060,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[9]),256);
        bufp->chgWData(oldp+10068,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[10]),256);
        bufp->chgWData(oldp+10076,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[11]),256);
        bufp->chgWData(oldp+10084,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[12]),256);
        bufp->chgWData(oldp+10092,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[13]),256);
        bufp->chgWData(oldp+10100,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[14]),256);
        bufp->chgWData(oldp+10108,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[15]),256);
        bufp->chgWData(oldp+10116,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[16]),256);
        bufp->chgWData(oldp+10124,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[17]),256);
        bufp->chgWData(oldp+10132,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[18]),256);
        bufp->chgWData(oldp+10140,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[19]),256);
        bufp->chgWData(oldp+10148,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[20]),256);
        bufp->chgWData(oldp+10156,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[21]),256);
        bufp->chgWData(oldp+10164,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[22]),256);
        bufp->chgWData(oldp+10172,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[23]),256);
        bufp->chgWData(oldp+10180,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[24]),256);
        bufp->chgWData(oldp+10188,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[25]),256);
        bufp->chgWData(oldp+10196,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[26]),256);
        bufp->chgWData(oldp+10204,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[27]),256);
        bufp->chgWData(oldp+10212,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[28]),256);
        bufp->chgWData(oldp+10220,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[29]),256);
        bufp->chgWData(oldp+10228,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[30]),256);
        bufp->chgWData(oldp+10236,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[31]),256);
        bufp->chgWData(oldp+10244,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[32]),256);
        bufp->chgWData(oldp+10252,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[33]),256);
        bufp->chgWData(oldp+10260,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[34]),256);
        bufp->chgWData(oldp+10268,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[35]),256);
        bufp->chgWData(oldp+10276,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[36]),256);
        bufp->chgWData(oldp+10284,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[37]),256);
        bufp->chgWData(oldp+10292,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[38]),256);
        bufp->chgWData(oldp+10300,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[39]),256);
        bufp->chgWData(oldp+10308,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[40]),256);
        bufp->chgWData(oldp+10316,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[41]),256);
        bufp->chgWData(oldp+10324,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[42]),256);
        bufp->chgWData(oldp+10332,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[43]),256);
        bufp->chgWData(oldp+10340,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[44]),256);
        bufp->chgWData(oldp+10348,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[45]),256);
        bufp->chgWData(oldp+10356,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[46]),256);
        bufp->chgWData(oldp+10364,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[47]),256);
        bufp->chgWData(oldp+10372,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[48]),256);
        bufp->chgWData(oldp+10380,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[49]),256);
        bufp->chgWData(oldp+10388,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[50]),256);
        bufp->chgWData(oldp+10396,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[51]),256);
        bufp->chgWData(oldp+10404,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[52]),256);
        bufp->chgWData(oldp+10412,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[53]),256);
        bufp->chgWData(oldp+10420,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[54]),256);
        bufp->chgWData(oldp+10428,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[55]),256);
        bufp->chgWData(oldp+10436,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[56]),256);
        bufp->chgWData(oldp+10444,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[57]),256);
        bufp->chgWData(oldp+10452,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[58]),256);
        bufp->chgWData(oldp+10460,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[59]),256);
        bufp->chgWData(oldp+10468,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[60]),256);
        bufp->chgWData(oldp+10476,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[61]),256);
        bufp->chgWData(oldp+10484,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[62]),256);
        bufp->chgWData(oldp+10492,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[63]),256);
        bufp->chgWData(oldp+10500,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[64]),256);
        bufp->chgWData(oldp+10508,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[65]),256);
        bufp->chgWData(oldp+10516,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[66]),256);
        bufp->chgWData(oldp+10524,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[67]),256);
        bufp->chgWData(oldp+10532,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[68]),256);
        bufp->chgWData(oldp+10540,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[69]),256);
        bufp->chgWData(oldp+10548,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[70]),256);
        bufp->chgWData(oldp+10556,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[71]),256);
        bufp->chgWData(oldp+10564,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[72]),256);
        bufp->chgWData(oldp+10572,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[73]),256);
        bufp->chgWData(oldp+10580,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[74]),256);
        bufp->chgWData(oldp+10588,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[75]),256);
        bufp->chgWData(oldp+10596,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[76]),256);
        bufp->chgWData(oldp+10604,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[77]),256);
        bufp->chgWData(oldp+10612,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[78]),256);
        bufp->chgWData(oldp+10620,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[79]),256);
        bufp->chgWData(oldp+10628,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[80]),256);
        bufp->chgWData(oldp+10636,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[81]),256);
        bufp->chgWData(oldp+10644,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[82]),256);
        bufp->chgWData(oldp+10652,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[83]),256);
        bufp->chgWData(oldp+10660,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[84]),256);
        bufp->chgWData(oldp+10668,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[85]),256);
        bufp->chgWData(oldp+10676,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[86]),256);
        bufp->chgWData(oldp+10684,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[87]),256);
        bufp->chgWData(oldp+10692,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[88]),256);
        bufp->chgWData(oldp+10700,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[89]),256);
        bufp->chgWData(oldp+10708,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[90]),256);
        bufp->chgWData(oldp+10716,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[91]),256);
        bufp->chgWData(oldp+10724,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[92]),256);
        bufp->chgWData(oldp+10732,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[93]),256);
        bufp->chgWData(oldp+10740,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[94]),256);
        bufp->chgWData(oldp+10748,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[95]),256);
        bufp->chgWData(oldp+10756,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[96]),256);
        bufp->chgWData(oldp+10764,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[97]),256);
        bufp->chgWData(oldp+10772,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[98]),256);
        bufp->chgWData(oldp+10780,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[99]),256);
        bufp->chgWData(oldp+10788,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[100]),256);
        bufp->chgWData(oldp+10796,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[101]),256);
        bufp->chgWData(oldp+10804,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[102]),256);
        bufp->chgWData(oldp+10812,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[103]),256);
        bufp->chgWData(oldp+10820,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[104]),256);
        bufp->chgWData(oldp+10828,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[105]),256);
        bufp->chgWData(oldp+10836,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[106]),256);
        bufp->chgWData(oldp+10844,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[107]),256);
        bufp->chgWData(oldp+10852,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[108]),256);
        bufp->chgWData(oldp+10860,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[109]),256);
        bufp->chgWData(oldp+10868,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[110]),256);
        bufp->chgWData(oldp+10876,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[111]),256);
        bufp->chgWData(oldp+10884,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[112]),256);
        bufp->chgWData(oldp+10892,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[113]),256);
        bufp->chgWData(oldp+10900,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[114]),256);
        bufp->chgWData(oldp+10908,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[115]),256);
        bufp->chgWData(oldp+10916,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[116]),256);
        bufp->chgWData(oldp+10924,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[117]),256);
        bufp->chgWData(oldp+10932,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[118]),256);
        bufp->chgWData(oldp+10940,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[119]),256);
        bufp->chgWData(oldp+10948,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[120]),256);
        bufp->chgWData(oldp+10956,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[121]),256);
        bufp->chgWData(oldp+10964,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[122]),256);
        bufp->chgWData(oldp+10972,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[123]),256);
        bufp->chgWData(oldp+10980,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[124]),256);
        bufp->chgWData(oldp+10988,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[125]),256);
        bufp->chgWData(oldp+10996,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[126]),256);
        bufp->chgWData(oldp+11004,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk1__BRA__3__KET____DOT__DATA_BRAM__DOT__RAM[127]),256);
        bufp->chgIData(oldp+11012,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM
                                   [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                              >> 5U))]),20);
        bufp->chgIData(oldp+11013,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[0]),20);
        bufp->chgIData(oldp+11014,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[1]),20);
        bufp->chgIData(oldp+11015,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[2]),20);
        bufp->chgIData(oldp+11016,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[3]),20);
        bufp->chgIData(oldp+11017,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[4]),20);
        bufp->chgIData(oldp+11018,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[5]),20);
        bufp->chgIData(oldp+11019,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[6]),20);
        bufp->chgIData(oldp+11020,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[7]),20);
        bufp->chgIData(oldp+11021,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[8]),20);
        bufp->chgIData(oldp+11022,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[9]),20);
        bufp->chgIData(oldp+11023,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[10]),20);
        bufp->chgIData(oldp+11024,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[11]),20);
        bufp->chgIData(oldp+11025,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[12]),20);
        bufp->chgIData(oldp+11026,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[13]),20);
        bufp->chgIData(oldp+11027,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[14]),20);
        bufp->chgIData(oldp+11028,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[15]),20);
        bufp->chgIData(oldp+11029,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[16]),20);
        bufp->chgIData(oldp+11030,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[17]),20);
        bufp->chgIData(oldp+11031,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[18]),20);
        bufp->chgIData(oldp+11032,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[19]),20);
        bufp->chgIData(oldp+11033,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[20]),20);
        bufp->chgIData(oldp+11034,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[21]),20);
        bufp->chgIData(oldp+11035,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[22]),20);
        bufp->chgIData(oldp+11036,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[23]),20);
        bufp->chgIData(oldp+11037,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[24]),20);
        bufp->chgIData(oldp+11038,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[25]),20);
        bufp->chgIData(oldp+11039,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[26]),20);
        bufp->chgIData(oldp+11040,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[27]),20);
        bufp->chgIData(oldp+11041,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[28]),20);
        bufp->chgIData(oldp+11042,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[29]),20);
        bufp->chgIData(oldp+11043,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[30]),20);
        bufp->chgIData(oldp+11044,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[31]),20);
        bufp->chgIData(oldp+11045,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[32]),20);
        bufp->chgIData(oldp+11046,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[33]),20);
        bufp->chgIData(oldp+11047,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[34]),20);
        bufp->chgIData(oldp+11048,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[35]),20);
        bufp->chgIData(oldp+11049,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[36]),20);
        bufp->chgIData(oldp+11050,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[37]),20);
        bufp->chgIData(oldp+11051,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[38]),20);
        bufp->chgIData(oldp+11052,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[39]),20);
        bufp->chgIData(oldp+11053,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[40]),20);
        bufp->chgIData(oldp+11054,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[41]),20);
        bufp->chgIData(oldp+11055,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[42]),20);
        bufp->chgIData(oldp+11056,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[43]),20);
        bufp->chgIData(oldp+11057,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[44]),20);
        bufp->chgIData(oldp+11058,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[45]),20);
        bufp->chgIData(oldp+11059,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[46]),20);
        bufp->chgIData(oldp+11060,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[47]),20);
        bufp->chgIData(oldp+11061,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[48]),20);
        bufp->chgIData(oldp+11062,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[49]),20);
        bufp->chgIData(oldp+11063,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[50]),20);
        bufp->chgIData(oldp+11064,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[51]),20);
        bufp->chgIData(oldp+11065,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[52]),20);
        bufp->chgIData(oldp+11066,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[53]),20);
        bufp->chgIData(oldp+11067,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[54]),20);
        bufp->chgIData(oldp+11068,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[55]),20);
        bufp->chgIData(oldp+11069,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[56]),20);
        bufp->chgIData(oldp+11070,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[57]),20);
        bufp->chgIData(oldp+11071,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[58]),20);
        bufp->chgIData(oldp+11072,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[59]),20);
        bufp->chgIData(oldp+11073,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[60]),20);
        bufp->chgIData(oldp+11074,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[61]),20);
        bufp->chgIData(oldp+11075,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[62]),20);
        bufp->chgIData(oldp+11076,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[63]),20);
        bufp->chgIData(oldp+11077,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[64]),20);
        bufp->chgIData(oldp+11078,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[65]),20);
        bufp->chgIData(oldp+11079,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[66]),20);
        bufp->chgIData(oldp+11080,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[67]),20);
        bufp->chgIData(oldp+11081,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[68]),20);
        bufp->chgIData(oldp+11082,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[69]),20);
        bufp->chgIData(oldp+11083,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[70]),20);
        bufp->chgIData(oldp+11084,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[71]),20);
        bufp->chgIData(oldp+11085,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[72]),20);
        bufp->chgIData(oldp+11086,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[73]),20);
        bufp->chgIData(oldp+11087,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[74]),20);
        bufp->chgIData(oldp+11088,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[75]),20);
        bufp->chgIData(oldp+11089,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[76]),20);
        bufp->chgIData(oldp+11090,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[77]),20);
        bufp->chgIData(oldp+11091,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[78]),20);
        bufp->chgIData(oldp+11092,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[79]),20);
        bufp->chgIData(oldp+11093,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[80]),20);
        bufp->chgIData(oldp+11094,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[81]),20);
        bufp->chgIData(oldp+11095,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[82]),20);
        bufp->chgIData(oldp+11096,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[83]),20);
        bufp->chgIData(oldp+11097,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[84]),20);
        bufp->chgIData(oldp+11098,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[85]),20);
        bufp->chgIData(oldp+11099,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[86]),20);
        bufp->chgIData(oldp+11100,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[87]),20);
        bufp->chgIData(oldp+11101,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[88]),20);
        bufp->chgIData(oldp+11102,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[89]),20);
        bufp->chgIData(oldp+11103,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[90]),20);
        bufp->chgIData(oldp+11104,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[91]),20);
        bufp->chgIData(oldp+11105,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[92]),20);
        bufp->chgIData(oldp+11106,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[93]),20);
        bufp->chgIData(oldp+11107,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[94]),20);
        bufp->chgIData(oldp+11108,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[95]),20);
        bufp->chgIData(oldp+11109,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[96]),20);
        bufp->chgIData(oldp+11110,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[97]),20);
        bufp->chgIData(oldp+11111,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[98]),20);
        bufp->chgIData(oldp+11112,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[99]),20);
        bufp->chgIData(oldp+11113,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[100]),20);
        bufp->chgIData(oldp+11114,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[101]),20);
        bufp->chgIData(oldp+11115,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[102]),20);
        bufp->chgIData(oldp+11116,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[103]),20);
        bufp->chgIData(oldp+11117,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[104]),20);
        bufp->chgIData(oldp+11118,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[105]),20);
        bufp->chgIData(oldp+11119,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[106]),20);
        bufp->chgIData(oldp+11120,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[107]),20);
        bufp->chgIData(oldp+11121,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[108]),20);
        bufp->chgIData(oldp+11122,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[109]),20);
        bufp->chgIData(oldp+11123,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[110]),20);
        bufp->chgIData(oldp+11124,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[111]),20);
        bufp->chgIData(oldp+11125,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[112]),20);
        bufp->chgIData(oldp+11126,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[113]),20);
        bufp->chgIData(oldp+11127,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[114]),20);
        bufp->chgIData(oldp+11128,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[115]),20);
        bufp->chgIData(oldp+11129,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[116]),20);
        bufp->chgIData(oldp+11130,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[117]),20);
        bufp->chgIData(oldp+11131,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[118]),20);
        bufp->chgIData(oldp+11132,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[119]),20);
        bufp->chgIData(oldp+11133,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[120]),20);
        bufp->chgIData(oldp+11134,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[121]),20);
        bufp->chgIData(oldp+11135,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[122]),20);
        bufp->chgIData(oldp+11136,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[123]),20);
        bufp->chgIData(oldp+11137,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[124]),20);
        bufp->chgIData(oldp+11138,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[125]),20);
        bufp->chgIData(oldp+11139,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[126]),20);
        bufp->chgIData(oldp+11140,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__0__KET____DOT__TAG_RAM__DOT__RAM[127]),20);
        bufp->chgIData(oldp+11141,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM
                                   [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                              >> 5U))]),20);
        bufp->chgIData(oldp+11142,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[0]),20);
        bufp->chgIData(oldp+11143,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[1]),20);
        bufp->chgIData(oldp+11144,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[2]),20);
        bufp->chgIData(oldp+11145,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[3]),20);
        bufp->chgIData(oldp+11146,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[4]),20);
        bufp->chgIData(oldp+11147,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[5]),20);
        bufp->chgIData(oldp+11148,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[6]),20);
        bufp->chgIData(oldp+11149,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[7]),20);
        bufp->chgIData(oldp+11150,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[8]),20);
        bufp->chgIData(oldp+11151,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[9]),20);
        bufp->chgIData(oldp+11152,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[10]),20);
        bufp->chgIData(oldp+11153,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[11]),20);
        bufp->chgIData(oldp+11154,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[12]),20);
        bufp->chgIData(oldp+11155,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[13]),20);
        bufp->chgIData(oldp+11156,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[14]),20);
        bufp->chgIData(oldp+11157,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[15]),20);
        bufp->chgIData(oldp+11158,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[16]),20);
        bufp->chgIData(oldp+11159,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[17]),20);
        bufp->chgIData(oldp+11160,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[18]),20);
        bufp->chgIData(oldp+11161,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[19]),20);
        bufp->chgIData(oldp+11162,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[20]),20);
        bufp->chgIData(oldp+11163,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[21]),20);
        bufp->chgIData(oldp+11164,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[22]),20);
        bufp->chgIData(oldp+11165,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[23]),20);
        bufp->chgIData(oldp+11166,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[24]),20);
        bufp->chgIData(oldp+11167,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[25]),20);
        bufp->chgIData(oldp+11168,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[26]),20);
        bufp->chgIData(oldp+11169,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[27]),20);
        bufp->chgIData(oldp+11170,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[28]),20);
        bufp->chgIData(oldp+11171,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[29]),20);
        bufp->chgIData(oldp+11172,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[30]),20);
        bufp->chgIData(oldp+11173,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[31]),20);
        bufp->chgIData(oldp+11174,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[32]),20);
        bufp->chgIData(oldp+11175,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[33]),20);
        bufp->chgIData(oldp+11176,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[34]),20);
        bufp->chgIData(oldp+11177,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[35]),20);
        bufp->chgIData(oldp+11178,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[36]),20);
        bufp->chgIData(oldp+11179,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[37]),20);
        bufp->chgIData(oldp+11180,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[38]),20);
        bufp->chgIData(oldp+11181,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[39]),20);
        bufp->chgIData(oldp+11182,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[40]),20);
        bufp->chgIData(oldp+11183,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[41]),20);
        bufp->chgIData(oldp+11184,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[42]),20);
        bufp->chgIData(oldp+11185,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[43]),20);
        bufp->chgIData(oldp+11186,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[44]),20);
        bufp->chgIData(oldp+11187,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[45]),20);
        bufp->chgIData(oldp+11188,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[46]),20);
        bufp->chgIData(oldp+11189,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[47]),20);
        bufp->chgIData(oldp+11190,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[48]),20);
        bufp->chgIData(oldp+11191,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[49]),20);
        bufp->chgIData(oldp+11192,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[50]),20);
        bufp->chgIData(oldp+11193,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[51]),20);
        bufp->chgIData(oldp+11194,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[52]),20);
        bufp->chgIData(oldp+11195,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[53]),20);
        bufp->chgIData(oldp+11196,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[54]),20);
        bufp->chgIData(oldp+11197,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[55]),20);
        bufp->chgIData(oldp+11198,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[56]),20);
        bufp->chgIData(oldp+11199,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[57]),20);
        bufp->chgIData(oldp+11200,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[58]),20);
        bufp->chgIData(oldp+11201,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[59]),20);
        bufp->chgIData(oldp+11202,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[60]),20);
        bufp->chgIData(oldp+11203,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[61]),20);
        bufp->chgIData(oldp+11204,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[62]),20);
        bufp->chgIData(oldp+11205,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[63]),20);
        bufp->chgIData(oldp+11206,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[64]),20);
        bufp->chgIData(oldp+11207,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[65]),20);
        bufp->chgIData(oldp+11208,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[66]),20);
        bufp->chgIData(oldp+11209,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[67]),20);
        bufp->chgIData(oldp+11210,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[68]),20);
        bufp->chgIData(oldp+11211,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[69]),20);
        bufp->chgIData(oldp+11212,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[70]),20);
        bufp->chgIData(oldp+11213,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[71]),20);
        bufp->chgIData(oldp+11214,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[72]),20);
        bufp->chgIData(oldp+11215,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[73]),20);
        bufp->chgIData(oldp+11216,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[74]),20);
        bufp->chgIData(oldp+11217,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[75]),20);
        bufp->chgIData(oldp+11218,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[76]),20);
        bufp->chgIData(oldp+11219,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[77]),20);
        bufp->chgIData(oldp+11220,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[78]),20);
        bufp->chgIData(oldp+11221,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[79]),20);
        bufp->chgIData(oldp+11222,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[80]),20);
        bufp->chgIData(oldp+11223,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[81]),20);
        bufp->chgIData(oldp+11224,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[82]),20);
        bufp->chgIData(oldp+11225,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[83]),20);
        bufp->chgIData(oldp+11226,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[84]),20);
        bufp->chgIData(oldp+11227,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[85]),20);
        bufp->chgIData(oldp+11228,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[86]),20);
        bufp->chgIData(oldp+11229,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[87]),20);
        bufp->chgIData(oldp+11230,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[88]),20);
        bufp->chgIData(oldp+11231,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[89]),20);
        bufp->chgIData(oldp+11232,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[90]),20);
        bufp->chgIData(oldp+11233,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[91]),20);
        bufp->chgIData(oldp+11234,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[92]),20);
        bufp->chgIData(oldp+11235,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[93]),20);
        bufp->chgIData(oldp+11236,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[94]),20);
        bufp->chgIData(oldp+11237,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[95]),20);
        bufp->chgIData(oldp+11238,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[96]),20);
        bufp->chgIData(oldp+11239,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[97]),20);
        bufp->chgIData(oldp+11240,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[98]),20);
        bufp->chgIData(oldp+11241,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[99]),20);
        bufp->chgIData(oldp+11242,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[100]),20);
        bufp->chgIData(oldp+11243,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[101]),20);
        bufp->chgIData(oldp+11244,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[102]),20);
        bufp->chgIData(oldp+11245,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[103]),20);
        bufp->chgIData(oldp+11246,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[104]),20);
        bufp->chgIData(oldp+11247,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[105]),20);
        bufp->chgIData(oldp+11248,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[106]),20);
        bufp->chgIData(oldp+11249,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[107]),20);
        bufp->chgIData(oldp+11250,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[108]),20);
        bufp->chgIData(oldp+11251,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[109]),20);
        bufp->chgIData(oldp+11252,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[110]),20);
        bufp->chgIData(oldp+11253,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[111]),20);
        bufp->chgIData(oldp+11254,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[112]),20);
        bufp->chgIData(oldp+11255,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[113]),20);
        bufp->chgIData(oldp+11256,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[114]),20);
        bufp->chgIData(oldp+11257,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[115]),20);
        bufp->chgIData(oldp+11258,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[116]),20);
        bufp->chgIData(oldp+11259,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[117]),20);
        bufp->chgIData(oldp+11260,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[118]),20);
        bufp->chgIData(oldp+11261,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[119]),20);
        bufp->chgIData(oldp+11262,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[120]),20);
        bufp->chgIData(oldp+11263,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[121]),20);
        bufp->chgIData(oldp+11264,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[122]),20);
        bufp->chgIData(oldp+11265,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[123]),20);
        bufp->chgIData(oldp+11266,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[124]),20);
        bufp->chgIData(oldp+11267,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[125]),20);
        bufp->chgIData(oldp+11268,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[126]),20);
        bufp->chgIData(oldp+11269,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__1__KET____DOT__TAG_RAM__DOT__RAM[127]),20);
        bufp->chgIData(oldp+11270,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM
                                   [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                              >> 5U))]),20);
        bufp->chgIData(oldp+11271,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[0]),20);
        bufp->chgIData(oldp+11272,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[1]),20);
        bufp->chgIData(oldp+11273,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[2]),20);
        bufp->chgIData(oldp+11274,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[3]),20);
        bufp->chgIData(oldp+11275,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[4]),20);
        bufp->chgIData(oldp+11276,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[5]),20);
        bufp->chgIData(oldp+11277,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[6]),20);
        bufp->chgIData(oldp+11278,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[7]),20);
        bufp->chgIData(oldp+11279,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[8]),20);
        bufp->chgIData(oldp+11280,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[9]),20);
        bufp->chgIData(oldp+11281,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[10]),20);
        bufp->chgIData(oldp+11282,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[11]),20);
        bufp->chgIData(oldp+11283,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[12]),20);
        bufp->chgIData(oldp+11284,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[13]),20);
        bufp->chgIData(oldp+11285,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[14]),20);
        bufp->chgIData(oldp+11286,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[15]),20);
        bufp->chgIData(oldp+11287,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[16]),20);
        bufp->chgIData(oldp+11288,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[17]),20);
        bufp->chgIData(oldp+11289,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[18]),20);
        bufp->chgIData(oldp+11290,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[19]),20);
        bufp->chgIData(oldp+11291,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[20]),20);
        bufp->chgIData(oldp+11292,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[21]),20);
        bufp->chgIData(oldp+11293,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[22]),20);
        bufp->chgIData(oldp+11294,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[23]),20);
        bufp->chgIData(oldp+11295,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[24]),20);
        bufp->chgIData(oldp+11296,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[25]),20);
        bufp->chgIData(oldp+11297,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[26]),20);
        bufp->chgIData(oldp+11298,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[27]),20);
        bufp->chgIData(oldp+11299,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[28]),20);
        bufp->chgIData(oldp+11300,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[29]),20);
        bufp->chgIData(oldp+11301,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[30]),20);
        bufp->chgIData(oldp+11302,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[31]),20);
        bufp->chgIData(oldp+11303,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[32]),20);
        bufp->chgIData(oldp+11304,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[33]),20);
        bufp->chgIData(oldp+11305,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[34]),20);
        bufp->chgIData(oldp+11306,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[35]),20);
        bufp->chgIData(oldp+11307,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[36]),20);
        bufp->chgIData(oldp+11308,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[37]),20);
        bufp->chgIData(oldp+11309,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[38]),20);
        bufp->chgIData(oldp+11310,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[39]),20);
        bufp->chgIData(oldp+11311,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[40]),20);
        bufp->chgIData(oldp+11312,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[41]),20);
        bufp->chgIData(oldp+11313,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[42]),20);
        bufp->chgIData(oldp+11314,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[43]),20);
        bufp->chgIData(oldp+11315,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[44]),20);
        bufp->chgIData(oldp+11316,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[45]),20);
        bufp->chgIData(oldp+11317,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[46]),20);
        bufp->chgIData(oldp+11318,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[47]),20);
        bufp->chgIData(oldp+11319,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[48]),20);
        bufp->chgIData(oldp+11320,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[49]),20);
        bufp->chgIData(oldp+11321,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[50]),20);
        bufp->chgIData(oldp+11322,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[51]),20);
        bufp->chgIData(oldp+11323,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[52]),20);
        bufp->chgIData(oldp+11324,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[53]),20);
        bufp->chgIData(oldp+11325,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[54]),20);
        bufp->chgIData(oldp+11326,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[55]),20);
        bufp->chgIData(oldp+11327,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[56]),20);
        bufp->chgIData(oldp+11328,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[57]),20);
        bufp->chgIData(oldp+11329,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[58]),20);
        bufp->chgIData(oldp+11330,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[59]),20);
        bufp->chgIData(oldp+11331,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[60]),20);
        bufp->chgIData(oldp+11332,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[61]),20);
        bufp->chgIData(oldp+11333,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[62]),20);
        bufp->chgIData(oldp+11334,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[63]),20);
        bufp->chgIData(oldp+11335,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[64]),20);
        bufp->chgIData(oldp+11336,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[65]),20);
        bufp->chgIData(oldp+11337,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[66]),20);
        bufp->chgIData(oldp+11338,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[67]),20);
        bufp->chgIData(oldp+11339,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[68]),20);
        bufp->chgIData(oldp+11340,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[69]),20);
        bufp->chgIData(oldp+11341,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[70]),20);
        bufp->chgIData(oldp+11342,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[71]),20);
        bufp->chgIData(oldp+11343,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[72]),20);
        bufp->chgIData(oldp+11344,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[73]),20);
        bufp->chgIData(oldp+11345,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[74]),20);
        bufp->chgIData(oldp+11346,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[75]),20);
        bufp->chgIData(oldp+11347,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[76]),20);
        bufp->chgIData(oldp+11348,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[77]),20);
        bufp->chgIData(oldp+11349,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[78]),20);
        bufp->chgIData(oldp+11350,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[79]),20);
        bufp->chgIData(oldp+11351,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[80]),20);
        bufp->chgIData(oldp+11352,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[81]),20);
        bufp->chgIData(oldp+11353,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[82]),20);
        bufp->chgIData(oldp+11354,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[83]),20);
        bufp->chgIData(oldp+11355,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[84]),20);
        bufp->chgIData(oldp+11356,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[85]),20);
        bufp->chgIData(oldp+11357,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[86]),20);
        bufp->chgIData(oldp+11358,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[87]),20);
        bufp->chgIData(oldp+11359,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[88]),20);
        bufp->chgIData(oldp+11360,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[89]),20);
        bufp->chgIData(oldp+11361,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[90]),20);
        bufp->chgIData(oldp+11362,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[91]),20);
        bufp->chgIData(oldp+11363,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[92]),20);
        bufp->chgIData(oldp+11364,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[93]),20);
        bufp->chgIData(oldp+11365,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[94]),20);
        bufp->chgIData(oldp+11366,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[95]),20);
        bufp->chgIData(oldp+11367,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[96]),20);
        bufp->chgIData(oldp+11368,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[97]),20);
        bufp->chgIData(oldp+11369,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[98]),20);
        bufp->chgIData(oldp+11370,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[99]),20);
        bufp->chgIData(oldp+11371,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[100]),20);
        bufp->chgIData(oldp+11372,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[101]),20);
        bufp->chgIData(oldp+11373,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[102]),20);
        bufp->chgIData(oldp+11374,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[103]),20);
        bufp->chgIData(oldp+11375,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[104]),20);
        bufp->chgIData(oldp+11376,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[105]),20);
        bufp->chgIData(oldp+11377,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[106]),20);
        bufp->chgIData(oldp+11378,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[107]),20);
        bufp->chgIData(oldp+11379,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[108]),20);
        bufp->chgIData(oldp+11380,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[109]),20);
        bufp->chgIData(oldp+11381,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[110]),20);
        bufp->chgIData(oldp+11382,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[111]),20);
        bufp->chgIData(oldp+11383,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[112]),20);
        bufp->chgIData(oldp+11384,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[113]),20);
        bufp->chgIData(oldp+11385,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[114]),20);
        bufp->chgIData(oldp+11386,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[115]),20);
        bufp->chgIData(oldp+11387,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[116]),20);
        bufp->chgIData(oldp+11388,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[117]),20);
        bufp->chgIData(oldp+11389,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[118]),20);
        bufp->chgIData(oldp+11390,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[119]),20);
        bufp->chgIData(oldp+11391,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[120]),20);
        bufp->chgIData(oldp+11392,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[121]),20);
        bufp->chgIData(oldp+11393,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[122]),20);
        bufp->chgIData(oldp+11394,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[123]),20);
        bufp->chgIData(oldp+11395,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[124]),20);
        bufp->chgIData(oldp+11396,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[125]),20);
        bufp->chgIData(oldp+11397,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[126]),20);
        bufp->chgIData(oldp+11398,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__2__KET____DOT__TAG_RAM__DOT__RAM[127]),20);
        bufp->chgIData(oldp+11399,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM
                                   [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                              >> 5U))]),20);
        bufp->chgIData(oldp+11400,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[0]),20);
        bufp->chgIData(oldp+11401,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[1]),20);
        bufp->chgIData(oldp+11402,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[2]),20);
        bufp->chgIData(oldp+11403,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[3]),20);
        bufp->chgIData(oldp+11404,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[4]),20);
        bufp->chgIData(oldp+11405,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[5]),20);
        bufp->chgIData(oldp+11406,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[6]),20);
        bufp->chgIData(oldp+11407,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[7]),20);
        bufp->chgIData(oldp+11408,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[8]),20);
        bufp->chgIData(oldp+11409,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[9]),20);
        bufp->chgIData(oldp+11410,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[10]),20);
        bufp->chgIData(oldp+11411,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[11]),20);
        bufp->chgIData(oldp+11412,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[12]),20);
        bufp->chgIData(oldp+11413,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[13]),20);
        bufp->chgIData(oldp+11414,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[14]),20);
        bufp->chgIData(oldp+11415,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[15]),20);
        bufp->chgIData(oldp+11416,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[16]),20);
        bufp->chgIData(oldp+11417,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[17]),20);
        bufp->chgIData(oldp+11418,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[18]),20);
        bufp->chgIData(oldp+11419,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[19]),20);
        bufp->chgIData(oldp+11420,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[20]),20);
        bufp->chgIData(oldp+11421,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[21]),20);
        bufp->chgIData(oldp+11422,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[22]),20);
        bufp->chgIData(oldp+11423,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[23]),20);
        bufp->chgIData(oldp+11424,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[24]),20);
        bufp->chgIData(oldp+11425,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[25]),20);
        bufp->chgIData(oldp+11426,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[26]),20);
        bufp->chgIData(oldp+11427,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[27]),20);
        bufp->chgIData(oldp+11428,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[28]),20);
        bufp->chgIData(oldp+11429,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[29]),20);
        bufp->chgIData(oldp+11430,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[30]),20);
        bufp->chgIData(oldp+11431,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[31]),20);
        bufp->chgIData(oldp+11432,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[32]),20);
        bufp->chgIData(oldp+11433,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[33]),20);
        bufp->chgIData(oldp+11434,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[34]),20);
        bufp->chgIData(oldp+11435,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[35]),20);
        bufp->chgIData(oldp+11436,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[36]),20);
        bufp->chgIData(oldp+11437,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[37]),20);
        bufp->chgIData(oldp+11438,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[38]),20);
        bufp->chgIData(oldp+11439,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[39]),20);
        bufp->chgIData(oldp+11440,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[40]),20);
        bufp->chgIData(oldp+11441,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[41]),20);
        bufp->chgIData(oldp+11442,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[42]),20);
        bufp->chgIData(oldp+11443,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[43]),20);
        bufp->chgIData(oldp+11444,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[44]),20);
        bufp->chgIData(oldp+11445,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[45]),20);
        bufp->chgIData(oldp+11446,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[46]),20);
        bufp->chgIData(oldp+11447,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[47]),20);
        bufp->chgIData(oldp+11448,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[48]),20);
        bufp->chgIData(oldp+11449,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[49]),20);
        bufp->chgIData(oldp+11450,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[50]),20);
        bufp->chgIData(oldp+11451,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[51]),20);
        bufp->chgIData(oldp+11452,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[52]),20);
        bufp->chgIData(oldp+11453,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[53]),20);
        bufp->chgIData(oldp+11454,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[54]),20);
        bufp->chgIData(oldp+11455,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[55]),20);
        bufp->chgIData(oldp+11456,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[56]),20);
        bufp->chgIData(oldp+11457,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[57]),20);
        bufp->chgIData(oldp+11458,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[58]),20);
        bufp->chgIData(oldp+11459,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[59]),20);
        bufp->chgIData(oldp+11460,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[60]),20);
        bufp->chgIData(oldp+11461,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[61]),20);
        bufp->chgIData(oldp+11462,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[62]),20);
        bufp->chgIData(oldp+11463,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[63]),20);
        bufp->chgIData(oldp+11464,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[64]),20);
        bufp->chgIData(oldp+11465,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[65]),20);
        bufp->chgIData(oldp+11466,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[66]),20);
        bufp->chgIData(oldp+11467,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[67]),20);
        bufp->chgIData(oldp+11468,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[68]),20);
        bufp->chgIData(oldp+11469,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[69]),20);
        bufp->chgIData(oldp+11470,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[70]),20);
        bufp->chgIData(oldp+11471,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[71]),20);
        bufp->chgIData(oldp+11472,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[72]),20);
        bufp->chgIData(oldp+11473,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[73]),20);
        bufp->chgIData(oldp+11474,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[74]),20);
        bufp->chgIData(oldp+11475,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[75]),20);
        bufp->chgIData(oldp+11476,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[76]),20);
        bufp->chgIData(oldp+11477,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[77]),20);
        bufp->chgIData(oldp+11478,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[78]),20);
        bufp->chgIData(oldp+11479,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[79]),20);
        bufp->chgIData(oldp+11480,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[80]),20);
        bufp->chgIData(oldp+11481,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[81]),20);
        bufp->chgIData(oldp+11482,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[82]),20);
        bufp->chgIData(oldp+11483,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[83]),20);
        bufp->chgIData(oldp+11484,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[84]),20);
        bufp->chgIData(oldp+11485,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[85]),20);
        bufp->chgIData(oldp+11486,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[86]),20);
        bufp->chgIData(oldp+11487,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[87]),20);
        bufp->chgIData(oldp+11488,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[88]),20);
        bufp->chgIData(oldp+11489,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[89]),20);
        bufp->chgIData(oldp+11490,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[90]),20);
        bufp->chgIData(oldp+11491,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[91]),20);
        bufp->chgIData(oldp+11492,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[92]),20);
        bufp->chgIData(oldp+11493,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[93]),20);
        bufp->chgIData(oldp+11494,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[94]),20);
        bufp->chgIData(oldp+11495,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[95]),20);
        bufp->chgIData(oldp+11496,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[96]),20);
        bufp->chgIData(oldp+11497,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[97]),20);
        bufp->chgIData(oldp+11498,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[98]),20);
        bufp->chgIData(oldp+11499,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[99]),20);
        bufp->chgIData(oldp+11500,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[100]),20);
        bufp->chgIData(oldp+11501,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[101]),20);
        bufp->chgIData(oldp+11502,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[102]),20);
        bufp->chgIData(oldp+11503,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[103]),20);
        bufp->chgIData(oldp+11504,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[104]),20);
        bufp->chgIData(oldp+11505,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[105]),20);
        bufp->chgIData(oldp+11506,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[106]),20);
        bufp->chgIData(oldp+11507,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[107]),20);
        bufp->chgIData(oldp+11508,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[108]),20);
        bufp->chgIData(oldp+11509,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[109]),20);
        bufp->chgIData(oldp+11510,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[110]),20);
        bufp->chgIData(oldp+11511,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[111]),20);
        bufp->chgIData(oldp+11512,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[112]),20);
        bufp->chgIData(oldp+11513,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[113]),20);
        bufp->chgIData(oldp+11514,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[114]),20);
        bufp->chgIData(oldp+11515,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[115]),20);
        bufp->chgIData(oldp+11516,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[116]),20);
        bufp->chgIData(oldp+11517,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[117]),20);
        bufp->chgIData(oldp+11518,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[118]),20);
        bufp->chgIData(oldp+11519,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[119]),20);
        bufp->chgIData(oldp+11520,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[120]),20);
        bufp->chgIData(oldp+11521,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[121]),20);
        bufp->chgIData(oldp+11522,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[122]),20);
        bufp->chgIData(oldp+11523,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[123]),20);
        bufp->chgIData(oldp+11524,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[124]),20);
        bufp->chgIData(oldp+11525,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[125]),20);
        bufp->chgIData(oldp+11526,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[126]),20);
        bufp->chgIData(oldp+11527,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk2__BRA__3__KET____DOT__TAG_RAM__DOT__RAM[127]),20);
        bufp->chgBit(oldp+11528,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__valid_write
                                 [0U]));
        bufp->chgCData(oldp+11529,(((0U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__S))
                                     ? (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__init_count)
                                     : (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__index_prev))),7);
        bufp->chgBit(oldp+11530,(((3U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__S)) 
                                  & (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_imem_o))));
        bufp->chgBit(oldp+11531,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM
                                 [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                            >> 5U))]));
        bufp->chgBit(oldp+11532,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[0]));
        bufp->chgBit(oldp+11533,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[1]));
        bufp->chgBit(oldp+11534,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[2]));
        bufp->chgBit(oldp+11535,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[3]));
        bufp->chgBit(oldp+11536,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[4]));
        bufp->chgBit(oldp+11537,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[5]));
        bufp->chgBit(oldp+11538,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[6]));
        bufp->chgBit(oldp+11539,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[7]));
        bufp->chgBit(oldp+11540,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[8]));
        bufp->chgBit(oldp+11541,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[9]));
        bufp->chgBit(oldp+11542,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[10]));
        bufp->chgBit(oldp+11543,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[11]));
        bufp->chgBit(oldp+11544,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[12]));
        bufp->chgBit(oldp+11545,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[13]));
        bufp->chgBit(oldp+11546,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[14]));
        bufp->chgBit(oldp+11547,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[15]));
        bufp->chgBit(oldp+11548,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[16]));
        bufp->chgBit(oldp+11549,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[17]));
        bufp->chgBit(oldp+11550,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[18]));
        bufp->chgBit(oldp+11551,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[19]));
        bufp->chgBit(oldp+11552,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[20]));
        bufp->chgBit(oldp+11553,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[21]));
        bufp->chgBit(oldp+11554,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[22]));
        bufp->chgBit(oldp+11555,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[23]));
        bufp->chgBit(oldp+11556,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[24]));
        bufp->chgBit(oldp+11557,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[25]));
        bufp->chgBit(oldp+11558,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[26]));
        bufp->chgBit(oldp+11559,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[27]));
        bufp->chgBit(oldp+11560,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[28]));
        bufp->chgBit(oldp+11561,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[29]));
        bufp->chgBit(oldp+11562,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[30]));
        bufp->chgBit(oldp+11563,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[31]));
        bufp->chgBit(oldp+11564,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[32]));
        bufp->chgBit(oldp+11565,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[33]));
        bufp->chgBit(oldp+11566,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[34]));
        bufp->chgBit(oldp+11567,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[35]));
        bufp->chgBit(oldp+11568,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[36]));
        bufp->chgBit(oldp+11569,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[37]));
        bufp->chgBit(oldp+11570,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[38]));
        bufp->chgBit(oldp+11571,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[39]));
        bufp->chgBit(oldp+11572,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[40]));
        bufp->chgBit(oldp+11573,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[41]));
        bufp->chgBit(oldp+11574,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[42]));
        bufp->chgBit(oldp+11575,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[43]));
        bufp->chgBit(oldp+11576,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[44]));
        bufp->chgBit(oldp+11577,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[45]));
        bufp->chgBit(oldp+11578,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[46]));
        bufp->chgBit(oldp+11579,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[47]));
        bufp->chgBit(oldp+11580,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[48]));
        bufp->chgBit(oldp+11581,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[49]));
        bufp->chgBit(oldp+11582,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[50]));
        bufp->chgBit(oldp+11583,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[51]));
        bufp->chgBit(oldp+11584,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[52]));
        bufp->chgBit(oldp+11585,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[53]));
        bufp->chgBit(oldp+11586,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[54]));
        bufp->chgBit(oldp+11587,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[55]));
        bufp->chgBit(oldp+11588,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[56]));
        bufp->chgBit(oldp+11589,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[57]));
        bufp->chgBit(oldp+11590,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[58]));
        bufp->chgBit(oldp+11591,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[59]));
        bufp->chgBit(oldp+11592,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[60]));
        bufp->chgBit(oldp+11593,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[61]));
        bufp->chgBit(oldp+11594,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[62]));
        bufp->chgBit(oldp+11595,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[63]));
        bufp->chgBit(oldp+11596,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[64]));
        bufp->chgBit(oldp+11597,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[65]));
        bufp->chgBit(oldp+11598,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[66]));
        bufp->chgBit(oldp+11599,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[67]));
        bufp->chgBit(oldp+11600,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[68]));
        bufp->chgBit(oldp+11601,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[69]));
        bufp->chgBit(oldp+11602,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[70]));
        bufp->chgBit(oldp+11603,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[71]));
        bufp->chgBit(oldp+11604,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[72]));
        bufp->chgBit(oldp+11605,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[73]));
        bufp->chgBit(oldp+11606,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[74]));
        bufp->chgBit(oldp+11607,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[75]));
        bufp->chgBit(oldp+11608,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[76]));
        bufp->chgBit(oldp+11609,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[77]));
        bufp->chgBit(oldp+11610,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[78]));
        bufp->chgBit(oldp+11611,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[79]));
        bufp->chgBit(oldp+11612,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[80]));
        bufp->chgBit(oldp+11613,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[81]));
        bufp->chgBit(oldp+11614,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[82]));
        bufp->chgBit(oldp+11615,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[83]));
        bufp->chgBit(oldp+11616,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[84]));
        bufp->chgBit(oldp+11617,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[85]));
        bufp->chgBit(oldp+11618,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[86]));
        bufp->chgBit(oldp+11619,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[87]));
        bufp->chgBit(oldp+11620,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[88]));
        bufp->chgBit(oldp+11621,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[89]));
        bufp->chgBit(oldp+11622,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[90]));
        bufp->chgBit(oldp+11623,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[91]));
        bufp->chgBit(oldp+11624,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[92]));
        bufp->chgBit(oldp+11625,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[93]));
        bufp->chgBit(oldp+11626,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[94]));
        bufp->chgBit(oldp+11627,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[95]));
        bufp->chgBit(oldp+11628,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[96]));
        bufp->chgBit(oldp+11629,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[97]));
        bufp->chgBit(oldp+11630,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[98]));
        bufp->chgBit(oldp+11631,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[99]));
        bufp->chgBit(oldp+11632,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[100]));
        bufp->chgBit(oldp+11633,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[101]));
        bufp->chgBit(oldp+11634,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[102]));
        bufp->chgBit(oldp+11635,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[103]));
        bufp->chgBit(oldp+11636,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[104]));
        bufp->chgBit(oldp+11637,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[105]));
        bufp->chgBit(oldp+11638,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[106]));
        bufp->chgBit(oldp+11639,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[107]));
        bufp->chgBit(oldp+11640,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[108]));
        bufp->chgBit(oldp+11641,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[109]));
        bufp->chgBit(oldp+11642,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[110]));
        bufp->chgBit(oldp+11643,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[111]));
        bufp->chgBit(oldp+11644,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[112]));
        bufp->chgBit(oldp+11645,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[113]));
        bufp->chgBit(oldp+11646,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[114]));
        bufp->chgBit(oldp+11647,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[115]));
        bufp->chgBit(oldp+11648,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[116]));
        bufp->chgBit(oldp+11649,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[117]));
        bufp->chgBit(oldp+11650,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[118]));
        bufp->chgBit(oldp+11651,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[119]));
        bufp->chgBit(oldp+11652,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[120]));
        bufp->chgBit(oldp+11653,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[121]));
        bufp->chgBit(oldp+11654,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[122]));
        bufp->chgBit(oldp+11655,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[123]));
        bufp->chgBit(oldp+11656,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[124]));
        bufp->chgBit(oldp+11657,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[125]));
        bufp->chgBit(oldp+11658,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[126]));
        bufp->chgBit(oldp+11659,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__0__KET____DOT__VALID_RAM__DOT__RAM[127]));
        bufp->chgBit(oldp+11660,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__valid_write
                                 [1U]));
        bufp->chgBit(oldp+11661,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM
                                 [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                            >> 5U))]));
        bufp->chgBit(oldp+11662,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[0]));
        bufp->chgBit(oldp+11663,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[1]));
        bufp->chgBit(oldp+11664,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[2]));
        bufp->chgBit(oldp+11665,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[3]));
        bufp->chgBit(oldp+11666,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[4]));
        bufp->chgBit(oldp+11667,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[5]));
        bufp->chgBit(oldp+11668,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[6]));
        bufp->chgBit(oldp+11669,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[7]));
        bufp->chgBit(oldp+11670,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[8]));
        bufp->chgBit(oldp+11671,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[9]));
        bufp->chgBit(oldp+11672,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[10]));
        bufp->chgBit(oldp+11673,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[11]));
        bufp->chgBit(oldp+11674,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[12]));
        bufp->chgBit(oldp+11675,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[13]));
        bufp->chgBit(oldp+11676,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[14]));
        bufp->chgBit(oldp+11677,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[15]));
        bufp->chgBit(oldp+11678,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[16]));
        bufp->chgBit(oldp+11679,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[17]));
        bufp->chgBit(oldp+11680,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[18]));
        bufp->chgBit(oldp+11681,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[19]));
        bufp->chgBit(oldp+11682,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[20]));
        bufp->chgBit(oldp+11683,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[21]));
        bufp->chgBit(oldp+11684,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[22]));
        bufp->chgBit(oldp+11685,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[23]));
        bufp->chgBit(oldp+11686,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[24]));
        bufp->chgBit(oldp+11687,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[25]));
        bufp->chgBit(oldp+11688,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[26]));
        bufp->chgBit(oldp+11689,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[27]));
        bufp->chgBit(oldp+11690,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[28]));
        bufp->chgBit(oldp+11691,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[29]));
        bufp->chgBit(oldp+11692,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[30]));
        bufp->chgBit(oldp+11693,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[31]));
        bufp->chgBit(oldp+11694,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[32]));
        bufp->chgBit(oldp+11695,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[33]));
        bufp->chgBit(oldp+11696,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[34]));
        bufp->chgBit(oldp+11697,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[35]));
        bufp->chgBit(oldp+11698,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[36]));
        bufp->chgBit(oldp+11699,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[37]));
        bufp->chgBit(oldp+11700,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[38]));
        bufp->chgBit(oldp+11701,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[39]));
        bufp->chgBit(oldp+11702,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[40]));
        bufp->chgBit(oldp+11703,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[41]));
        bufp->chgBit(oldp+11704,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[42]));
        bufp->chgBit(oldp+11705,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[43]));
        bufp->chgBit(oldp+11706,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[44]));
        bufp->chgBit(oldp+11707,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[45]));
        bufp->chgBit(oldp+11708,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[46]));
        bufp->chgBit(oldp+11709,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[47]));
        bufp->chgBit(oldp+11710,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[48]));
        bufp->chgBit(oldp+11711,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[49]));
        bufp->chgBit(oldp+11712,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[50]));
        bufp->chgBit(oldp+11713,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[51]));
        bufp->chgBit(oldp+11714,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[52]));
        bufp->chgBit(oldp+11715,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[53]));
        bufp->chgBit(oldp+11716,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[54]));
        bufp->chgBit(oldp+11717,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[55]));
        bufp->chgBit(oldp+11718,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[56]));
        bufp->chgBit(oldp+11719,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[57]));
        bufp->chgBit(oldp+11720,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[58]));
        bufp->chgBit(oldp+11721,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[59]));
        bufp->chgBit(oldp+11722,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[60]));
        bufp->chgBit(oldp+11723,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[61]));
        bufp->chgBit(oldp+11724,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[62]));
        bufp->chgBit(oldp+11725,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[63]));
        bufp->chgBit(oldp+11726,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[64]));
        bufp->chgBit(oldp+11727,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[65]));
        bufp->chgBit(oldp+11728,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[66]));
        bufp->chgBit(oldp+11729,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[67]));
        bufp->chgBit(oldp+11730,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[68]));
        bufp->chgBit(oldp+11731,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[69]));
        bufp->chgBit(oldp+11732,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[70]));
        bufp->chgBit(oldp+11733,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[71]));
        bufp->chgBit(oldp+11734,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[72]));
        bufp->chgBit(oldp+11735,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[73]));
        bufp->chgBit(oldp+11736,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[74]));
        bufp->chgBit(oldp+11737,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[75]));
        bufp->chgBit(oldp+11738,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[76]));
        bufp->chgBit(oldp+11739,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[77]));
        bufp->chgBit(oldp+11740,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[78]));
        bufp->chgBit(oldp+11741,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[79]));
        bufp->chgBit(oldp+11742,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[80]));
        bufp->chgBit(oldp+11743,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[81]));
        bufp->chgBit(oldp+11744,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[82]));
        bufp->chgBit(oldp+11745,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[83]));
        bufp->chgBit(oldp+11746,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[84]));
        bufp->chgBit(oldp+11747,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[85]));
        bufp->chgBit(oldp+11748,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[86]));
        bufp->chgBit(oldp+11749,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[87]));
        bufp->chgBit(oldp+11750,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[88]));
        bufp->chgBit(oldp+11751,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[89]));
        bufp->chgBit(oldp+11752,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[90]));
        bufp->chgBit(oldp+11753,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[91]));
        bufp->chgBit(oldp+11754,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[92]));
        bufp->chgBit(oldp+11755,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[93]));
        bufp->chgBit(oldp+11756,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[94]));
        bufp->chgBit(oldp+11757,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[95]));
        bufp->chgBit(oldp+11758,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[96]));
        bufp->chgBit(oldp+11759,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[97]));
        bufp->chgBit(oldp+11760,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[98]));
        bufp->chgBit(oldp+11761,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[99]));
        bufp->chgBit(oldp+11762,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[100]));
        bufp->chgBit(oldp+11763,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[101]));
        bufp->chgBit(oldp+11764,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[102]));
        bufp->chgBit(oldp+11765,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[103]));
        bufp->chgBit(oldp+11766,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[104]));
        bufp->chgBit(oldp+11767,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[105]));
        bufp->chgBit(oldp+11768,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[106]));
        bufp->chgBit(oldp+11769,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[107]));
        bufp->chgBit(oldp+11770,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[108]));
        bufp->chgBit(oldp+11771,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[109]));
        bufp->chgBit(oldp+11772,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[110]));
        bufp->chgBit(oldp+11773,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[111]));
        bufp->chgBit(oldp+11774,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[112]));
        bufp->chgBit(oldp+11775,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[113]));
        bufp->chgBit(oldp+11776,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[114]));
        bufp->chgBit(oldp+11777,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[115]));
        bufp->chgBit(oldp+11778,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[116]));
        bufp->chgBit(oldp+11779,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[117]));
        bufp->chgBit(oldp+11780,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[118]));
        bufp->chgBit(oldp+11781,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[119]));
        bufp->chgBit(oldp+11782,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[120]));
        bufp->chgBit(oldp+11783,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[121]));
        bufp->chgBit(oldp+11784,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[122]));
        bufp->chgBit(oldp+11785,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[123]));
        bufp->chgBit(oldp+11786,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[124]));
        bufp->chgBit(oldp+11787,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[125]));
        bufp->chgBit(oldp+11788,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[126]));
        bufp->chgBit(oldp+11789,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__1__KET____DOT__VALID_RAM__DOT__RAM[127]));
        bufp->chgBit(oldp+11790,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__valid_write
                                 [2U]));
        bufp->chgBit(oldp+11791,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM
                                 [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                            >> 5U))]));
        bufp->chgBit(oldp+11792,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[0]));
        bufp->chgBit(oldp+11793,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[1]));
        bufp->chgBit(oldp+11794,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[2]));
        bufp->chgBit(oldp+11795,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[3]));
        bufp->chgBit(oldp+11796,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[4]));
        bufp->chgBit(oldp+11797,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[5]));
        bufp->chgBit(oldp+11798,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[6]));
        bufp->chgBit(oldp+11799,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[7]));
        bufp->chgBit(oldp+11800,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[8]));
        bufp->chgBit(oldp+11801,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[9]));
        bufp->chgBit(oldp+11802,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[10]));
        bufp->chgBit(oldp+11803,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[11]));
        bufp->chgBit(oldp+11804,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[12]));
        bufp->chgBit(oldp+11805,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[13]));
        bufp->chgBit(oldp+11806,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[14]));
        bufp->chgBit(oldp+11807,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[15]));
        bufp->chgBit(oldp+11808,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[16]));
        bufp->chgBit(oldp+11809,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[17]));
        bufp->chgBit(oldp+11810,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[18]));
        bufp->chgBit(oldp+11811,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[19]));
        bufp->chgBit(oldp+11812,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[20]));
        bufp->chgBit(oldp+11813,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[21]));
        bufp->chgBit(oldp+11814,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[22]));
        bufp->chgBit(oldp+11815,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[23]));
        bufp->chgBit(oldp+11816,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[24]));
        bufp->chgBit(oldp+11817,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[25]));
        bufp->chgBit(oldp+11818,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[26]));
        bufp->chgBit(oldp+11819,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[27]));
        bufp->chgBit(oldp+11820,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[28]));
        bufp->chgBit(oldp+11821,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[29]));
        bufp->chgBit(oldp+11822,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[30]));
        bufp->chgBit(oldp+11823,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[31]));
        bufp->chgBit(oldp+11824,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[32]));
        bufp->chgBit(oldp+11825,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[33]));
        bufp->chgBit(oldp+11826,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[34]));
        bufp->chgBit(oldp+11827,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[35]));
        bufp->chgBit(oldp+11828,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[36]));
        bufp->chgBit(oldp+11829,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[37]));
        bufp->chgBit(oldp+11830,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[38]));
        bufp->chgBit(oldp+11831,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[39]));
        bufp->chgBit(oldp+11832,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[40]));
        bufp->chgBit(oldp+11833,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[41]));
        bufp->chgBit(oldp+11834,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[42]));
        bufp->chgBit(oldp+11835,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[43]));
        bufp->chgBit(oldp+11836,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[44]));
        bufp->chgBit(oldp+11837,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[45]));
        bufp->chgBit(oldp+11838,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[46]));
        bufp->chgBit(oldp+11839,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[47]));
        bufp->chgBit(oldp+11840,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[48]));
        bufp->chgBit(oldp+11841,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[49]));
        bufp->chgBit(oldp+11842,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[50]));
        bufp->chgBit(oldp+11843,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[51]));
        bufp->chgBit(oldp+11844,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[52]));
        bufp->chgBit(oldp+11845,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[53]));
        bufp->chgBit(oldp+11846,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[54]));
        bufp->chgBit(oldp+11847,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[55]));
        bufp->chgBit(oldp+11848,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[56]));
        bufp->chgBit(oldp+11849,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[57]));
        bufp->chgBit(oldp+11850,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[58]));
        bufp->chgBit(oldp+11851,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[59]));
        bufp->chgBit(oldp+11852,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[60]));
        bufp->chgBit(oldp+11853,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[61]));
        bufp->chgBit(oldp+11854,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[62]));
        bufp->chgBit(oldp+11855,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[63]));
        bufp->chgBit(oldp+11856,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[64]));
        bufp->chgBit(oldp+11857,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[65]));
        bufp->chgBit(oldp+11858,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[66]));
        bufp->chgBit(oldp+11859,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[67]));
        bufp->chgBit(oldp+11860,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[68]));
        bufp->chgBit(oldp+11861,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[69]));
        bufp->chgBit(oldp+11862,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[70]));
        bufp->chgBit(oldp+11863,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[71]));
        bufp->chgBit(oldp+11864,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[72]));
        bufp->chgBit(oldp+11865,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[73]));
        bufp->chgBit(oldp+11866,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[74]));
        bufp->chgBit(oldp+11867,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[75]));
        bufp->chgBit(oldp+11868,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[76]));
        bufp->chgBit(oldp+11869,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[77]));
        bufp->chgBit(oldp+11870,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[78]));
        bufp->chgBit(oldp+11871,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[79]));
        bufp->chgBit(oldp+11872,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[80]));
        bufp->chgBit(oldp+11873,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[81]));
        bufp->chgBit(oldp+11874,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[82]));
        bufp->chgBit(oldp+11875,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[83]));
        bufp->chgBit(oldp+11876,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[84]));
        bufp->chgBit(oldp+11877,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[85]));
        bufp->chgBit(oldp+11878,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[86]));
        bufp->chgBit(oldp+11879,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[87]));
        bufp->chgBit(oldp+11880,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[88]));
        bufp->chgBit(oldp+11881,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[89]));
        bufp->chgBit(oldp+11882,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[90]));
        bufp->chgBit(oldp+11883,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[91]));
        bufp->chgBit(oldp+11884,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[92]));
        bufp->chgBit(oldp+11885,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[93]));
        bufp->chgBit(oldp+11886,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[94]));
        bufp->chgBit(oldp+11887,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[95]));
        bufp->chgBit(oldp+11888,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[96]));
        bufp->chgBit(oldp+11889,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[97]));
        bufp->chgBit(oldp+11890,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[98]));
        bufp->chgBit(oldp+11891,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[99]));
        bufp->chgBit(oldp+11892,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[100]));
        bufp->chgBit(oldp+11893,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[101]));
        bufp->chgBit(oldp+11894,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[102]));
        bufp->chgBit(oldp+11895,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[103]));
        bufp->chgBit(oldp+11896,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[104]));
        bufp->chgBit(oldp+11897,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[105]));
        bufp->chgBit(oldp+11898,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[106]));
        bufp->chgBit(oldp+11899,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[107]));
        bufp->chgBit(oldp+11900,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[108]));
        bufp->chgBit(oldp+11901,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[109]));
        bufp->chgBit(oldp+11902,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[110]));
        bufp->chgBit(oldp+11903,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[111]));
        bufp->chgBit(oldp+11904,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[112]));
        bufp->chgBit(oldp+11905,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[113]));
        bufp->chgBit(oldp+11906,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[114]));
        bufp->chgBit(oldp+11907,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[115]));
        bufp->chgBit(oldp+11908,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[116]));
        bufp->chgBit(oldp+11909,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[117]));
        bufp->chgBit(oldp+11910,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[118]));
        bufp->chgBit(oldp+11911,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[119]));
        bufp->chgBit(oldp+11912,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[120]));
        bufp->chgBit(oldp+11913,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[121]));
        bufp->chgBit(oldp+11914,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[122]));
        bufp->chgBit(oldp+11915,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[123]));
        bufp->chgBit(oldp+11916,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[124]));
        bufp->chgBit(oldp+11917,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[125]));
        bufp->chgBit(oldp+11918,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[126]));
        bufp->chgBit(oldp+11919,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__2__KET____DOT__VALID_RAM__DOT__RAM[127]));
        bufp->chgBit(oldp+11920,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__valid_write
                                 [3U]));
        bufp->chgBit(oldp+11921,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM
                                 [(0x7fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                            >> 5U))]));
        bufp->chgBit(oldp+11922,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[0]));
        bufp->chgBit(oldp+11923,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[1]));
        bufp->chgBit(oldp+11924,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[2]));
        bufp->chgBit(oldp+11925,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[3]));
        bufp->chgBit(oldp+11926,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[4]));
        bufp->chgBit(oldp+11927,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[5]));
        bufp->chgBit(oldp+11928,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[6]));
        bufp->chgBit(oldp+11929,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[7]));
        bufp->chgBit(oldp+11930,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[8]));
        bufp->chgBit(oldp+11931,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[9]));
        bufp->chgBit(oldp+11932,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[10]));
        bufp->chgBit(oldp+11933,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[11]));
        bufp->chgBit(oldp+11934,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[12]));
        bufp->chgBit(oldp+11935,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[13]));
        bufp->chgBit(oldp+11936,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[14]));
        bufp->chgBit(oldp+11937,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[15]));
        bufp->chgBit(oldp+11938,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[16]));
        bufp->chgBit(oldp+11939,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[17]));
        bufp->chgBit(oldp+11940,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[18]));
        bufp->chgBit(oldp+11941,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[19]));
        bufp->chgBit(oldp+11942,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[20]));
        bufp->chgBit(oldp+11943,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[21]));
        bufp->chgBit(oldp+11944,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[22]));
        bufp->chgBit(oldp+11945,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[23]));
        bufp->chgBit(oldp+11946,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[24]));
        bufp->chgBit(oldp+11947,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[25]));
        bufp->chgBit(oldp+11948,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[26]));
        bufp->chgBit(oldp+11949,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[27]));
        bufp->chgBit(oldp+11950,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[28]));
        bufp->chgBit(oldp+11951,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[29]));
        bufp->chgBit(oldp+11952,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[30]));
        bufp->chgBit(oldp+11953,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[31]));
        bufp->chgBit(oldp+11954,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[32]));
        bufp->chgBit(oldp+11955,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[33]));
        bufp->chgBit(oldp+11956,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[34]));
        bufp->chgBit(oldp+11957,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[35]));
        bufp->chgBit(oldp+11958,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[36]));
        bufp->chgBit(oldp+11959,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[37]));
        bufp->chgBit(oldp+11960,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[38]));
        bufp->chgBit(oldp+11961,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[39]));
        bufp->chgBit(oldp+11962,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[40]));
        bufp->chgBit(oldp+11963,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[41]));
        bufp->chgBit(oldp+11964,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[42]));
        bufp->chgBit(oldp+11965,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[43]));
        bufp->chgBit(oldp+11966,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[44]));
        bufp->chgBit(oldp+11967,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[45]));
        bufp->chgBit(oldp+11968,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[46]));
        bufp->chgBit(oldp+11969,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[47]));
        bufp->chgBit(oldp+11970,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[48]));
        bufp->chgBit(oldp+11971,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[49]));
        bufp->chgBit(oldp+11972,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[50]));
        bufp->chgBit(oldp+11973,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[51]));
        bufp->chgBit(oldp+11974,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[52]));
        bufp->chgBit(oldp+11975,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[53]));
        bufp->chgBit(oldp+11976,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[54]));
        bufp->chgBit(oldp+11977,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[55]));
        bufp->chgBit(oldp+11978,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[56]));
        bufp->chgBit(oldp+11979,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[57]));
        bufp->chgBit(oldp+11980,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[58]));
        bufp->chgBit(oldp+11981,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[59]));
        bufp->chgBit(oldp+11982,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[60]));
        bufp->chgBit(oldp+11983,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[61]));
        bufp->chgBit(oldp+11984,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[62]));
        bufp->chgBit(oldp+11985,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[63]));
        bufp->chgBit(oldp+11986,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[64]));
        bufp->chgBit(oldp+11987,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[65]));
        bufp->chgBit(oldp+11988,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[66]));
        bufp->chgBit(oldp+11989,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[67]));
        bufp->chgBit(oldp+11990,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[68]));
        bufp->chgBit(oldp+11991,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[69]));
        bufp->chgBit(oldp+11992,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[70]));
        bufp->chgBit(oldp+11993,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[71]));
        bufp->chgBit(oldp+11994,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[72]));
        bufp->chgBit(oldp+11995,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[73]));
        bufp->chgBit(oldp+11996,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[74]));
        bufp->chgBit(oldp+11997,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[75]));
        bufp->chgBit(oldp+11998,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[76]));
        bufp->chgBit(oldp+11999,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[77]));
        bufp->chgBit(oldp+12000,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[78]));
        bufp->chgBit(oldp+12001,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[79]));
        bufp->chgBit(oldp+12002,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[80]));
        bufp->chgBit(oldp+12003,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[81]));
        bufp->chgBit(oldp+12004,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[82]));
        bufp->chgBit(oldp+12005,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[83]));
        bufp->chgBit(oldp+12006,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[84]));
        bufp->chgBit(oldp+12007,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[85]));
        bufp->chgBit(oldp+12008,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[86]));
        bufp->chgBit(oldp+12009,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[87]));
        bufp->chgBit(oldp+12010,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[88]));
        bufp->chgBit(oldp+12011,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[89]));
        bufp->chgBit(oldp+12012,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[90]));
        bufp->chgBit(oldp+12013,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[91]));
        bufp->chgBit(oldp+12014,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[92]));
        bufp->chgBit(oldp+12015,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[93]));
        bufp->chgBit(oldp+12016,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[94]));
        bufp->chgBit(oldp+12017,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[95]));
        bufp->chgBit(oldp+12018,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[96]));
        bufp->chgBit(oldp+12019,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[97]));
        bufp->chgBit(oldp+12020,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[98]));
        bufp->chgBit(oldp+12021,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[99]));
        bufp->chgBit(oldp+12022,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[100]));
        bufp->chgBit(oldp+12023,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[101]));
        bufp->chgBit(oldp+12024,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[102]));
        bufp->chgBit(oldp+12025,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[103]));
        bufp->chgBit(oldp+12026,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[104]));
        bufp->chgBit(oldp+12027,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[105]));
        bufp->chgBit(oldp+12028,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[106]));
        bufp->chgBit(oldp+12029,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[107]));
        bufp->chgBit(oldp+12030,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[108]));
        bufp->chgBit(oldp+12031,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[109]));
        bufp->chgBit(oldp+12032,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[110]));
        bufp->chgBit(oldp+12033,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[111]));
        bufp->chgBit(oldp+12034,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[112]));
        bufp->chgBit(oldp+12035,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[113]));
        bufp->chgBit(oldp+12036,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[114]));
        bufp->chgBit(oldp+12037,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[115]));
        bufp->chgBit(oldp+12038,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[116]));
        bufp->chgBit(oldp+12039,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[117]));
        bufp->chgBit(oldp+12040,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[118]));
        bufp->chgBit(oldp+12041,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[119]));
        bufp->chgBit(oldp+12042,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[120]));
        bufp->chgBit(oldp+12043,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[121]));
        bufp->chgBit(oldp+12044,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[122]));
        bufp->chgBit(oldp+12045,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[123]));
        bufp->chgBit(oldp+12046,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[124]));
        bufp->chgBit(oldp+12047,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[125]));
        bufp->chgBit(oldp+12048,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[126]));
        bufp->chgBit(oldp+12049,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__genblk3__BRA__3__KET____DOT__VALID_RAM__DOT__RAM[127]));
        bufp->chgSData(oldp+12050,((0x3fffU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                               >> 2U))),14);
        bufp->chgBit(oldp+12051,(vlSymsp->TOP__aquila_testharness__aquila_core.__Vcellinp__TCM__en2_i));
        bufp->chgBit(oldp+12052,(vlSymsp->TOP__aquila_testharness__aquila_core.__Vcellinp__TCM__we2_i));
        bufp->chgSData(oldp+12053,((0x3fffU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_addr 
                                               >> 2U))),14);
        bufp->chgIData(oldp+12054,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__TCM__DOT__idx2),32);
        bufp->chgCData(oldp+12055,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__imem_cur_state),2);
        bufp->chgCData(oldp+12056,(((0U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__imem_cur_state))
                                     ? ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_strobe)
                                         ? 1U : 0U)
                                     : ((1U == (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__imem_cur_state))
                                         ? ((4U <= (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__imem_delay_counter))
                                             ? 3U : 1U)
                                         : 0U))),2);
        bufp->chgCData(oldp+12057,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dmem_cur_state),2);
        bufp->chgCData(oldp+12058,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dmem_next_state),2);
        bufp->chgIData(oldp+12059,((0x1fffffffU & (
                                                   (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_addr 
                                                    - (IData)(0x80000000U)) 
                                                   >> 2U))),29);
        bufp->chgIData(oldp+12060,((0x1fffffffU & (
                                                   (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                                    - (IData)(0x80000000U)) 
                                                   >> 2U))),29);
        bufp->chgIData(oldp+12061,((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_i_addr 
                                    - (IData)(0x80000000U))),32);
        bufp->chgIData(oldp+12062,((vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__m_d_addr 
                                    - (IData)(0x80000000U))),32);
        bufp->chgCData(oldp+12063,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__imem_delay_counter),8);
        bufp->chgCData(oldp+12064,(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dmem_delay_counter),8);
        bufp->chgBit(oldp+12065,((4U <= (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__imem_delay_counter))));
        bufp->chgBit(oldp+12066,((4U <= (IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__dmem_delay_counter))));
        bufp->chgCData(oldp+12067,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__cur_state),2);
        bufp->chgCData(oldp+12068,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__read_counter),8);
        bufp->chgCData(oldp+12069,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__write_counter),8);
        bufp->chgBit(oldp+12070,((0xaU <= (IData)(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__read_counter))));
        bufp->chgBit(oldp+12071,((0xaU <= (IData)(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__write_counter))));
        bufp->chgIData(oldp+12072,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__isr),32);
        bufp->chgIData(oldp+12073,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__ipr),32);
        bufp->chgIData(oldp+12074,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__ier),32);
        bufp->chgIData(oldp+12075,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__iar),32);
        bufp->chgIData(oldp+12076,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__sie),32);
        bufp->chgIData(oldp+12077,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__cie),32);
        bufp->chgIData(oldp+12078,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__ivr),32);
        bufp->chgIData(oldp+12079,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__mer),32);
        bufp->chgIData(oldp+12080,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__imr),32);
        bufp->chgIData(oldp+12081,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__ilr),32);
        bufp->chgBit(oldp+12082,((1U & vlSymsp->TOP__aquila_testharness__intc_0.__PVT__mer)));
        bufp->chgBit(oldp+12083,((1U & (vlSymsp->TOP__aquila_testharness__intc_0.__PVT__mer 
                                        >> 1U))));
        bufp->chgBit(oldp+12084,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__has_enable_interrupt));
        bufp->chgIData(oldp+12085,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__i),32);
        bufp->chgBit(oldp+12086,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet_branch_hit));
        bufp->chgBit(oldp+12087,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet_branch_decision));
        bufp->chgBit(oldp+12088,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_valid));
        bufp->chgBit(oldp+12089,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_xcpt_valid));
        bufp->chgCData(oldp+12090,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_xcpt_cause),4);
        bufp->chgIData(oldp+12091,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_xcpt_tval),32);
        bufp->chgIData(oldp+12092,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec_pc),32);
        bufp->chgBit(oldp+12093,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec_is_branch));
        bufp->chgBit(oldp+12094,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec_is_jal));
        bufp->chgBit(oldp+12095,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec_is_jalr));
        bufp->chgBit(oldp+12096,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec_branch_hit));
        bufp->chgBit(oldp+12097,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec_branch_decision));
        bufp->chgCData(oldp+12098,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_rs1_addr),5);
        bufp->chgCData(oldp+12099,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_rs2_addr),5);
        bufp->chgIData(oldp+12100,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_rs1_data),32);
        bufp->chgIData(oldp+12101,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_rs2_data),32);
        bufp->chgSData(oldp+12102,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_csr_addr),12);
        bufp->chgIData(oldp+12103,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_csr_data),32);
        bufp->chgCData(oldp+12104,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_rd_input_sel),3);
        bufp->chgCData(oldp+12105,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_rd_addr),5);
        bufp->chgBit(oldp+12106,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_rd_we));
        bufp->chgBit(oldp+12107,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_signex_sel));
        bufp->chgBit(oldp+12108,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_we));
        bufp->chgBit(oldp+12109,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_re));
        bufp->chgIData(oldp+12110,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_imm),32);
        bufp->chgBit(oldp+12111,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_csr_we));
        bufp->chgCData(oldp+12112,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_csr_imm),5);
        bufp->chgCData(oldp+12113,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_inA_sel),2);
        bufp->chgCData(oldp+12114,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_inB_sel),2);
        bufp->chgCData(oldp+12115,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_dsize_sel),2);
        bufp->chgCData(oldp+12116,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel),3);
        bufp->chgBit(oldp+12117,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_alu_muldiv_sel));
        bufp->chgBit(oldp+12118,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_shift_sel));
        bufp->chgBit(oldp+12119,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_is_fencei));
        bufp->chgBit(oldp+12120,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_is_amo));
        bufp->chgCData(oldp+12121,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_amo_type),5);
        bufp->chgBit(oldp+12122,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_fetch_valid));
        bufp->chgBit(oldp+12123,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_sys_jump));
        bufp->chgCData(oldp+12124,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_sys_jump_csr_addr),2);
        bufp->chgBit(oldp+12125,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_xcpt_valid));
        bufp->chgCData(oldp+12126,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_xcpt_cause),4);
        bufp->chgIData(oldp+12127,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_xcpt_tval),32);
        bufp->chgBit(oldp+12128,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe_branch_taken));
        bufp->chgIData(oldp+12129,(((IData)(4U) + vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec_pc)),32);
        bufp->chgIData(oldp+12130,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__alu_result),32);
        bufp->chgBit(oldp+12131,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec_is_branch) 
                                  | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec_is_jal))));
        bufp->chgBit(oldp+12132,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe_re));
        bufp->chgBit(oldp+12133,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe_branch_misprediction));
        bufp->chgIData(oldp+12134,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_p_data),32);
        bufp->chgBit(oldp+12135,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_csr_we));
        bufp->chgSData(oldp+12136,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_csr_addr),12);
        bufp->chgIData(oldp+12137,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_csr_data),32);
        bufp->chgCData(oldp+12138,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_rd_input_sel),3);
        bufp->chgCData(oldp+12139,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_rd_addr),5);
        bufp->chgBit(oldp+12140,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_rd_we));
        bufp->chgBit(oldp+12141,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_signex_sel));
        bufp->chgCData(oldp+12142,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_dsize_sel),2);
        bufp->chgIData(oldp+12143,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_rs2_data),32);
        bufp->chgBit(oldp+12144,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_fetch_valid));
        bufp->chgBit(oldp+12145,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_sys_jump));
        bufp->chgCData(oldp+12146,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_sys_jump_csr_addr),2);
        bufp->chgBit(oldp+12147,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_xcpt_valid));
        bufp->chgCData(oldp+12148,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_xcpt_cause),4);
        bufp->chgIData(oldp+12149,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_xcpt_tval),32);
        bufp->chgIData(oldp+12150,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_pc),32);
        bufp->chgCData(oldp+12151,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_rd_input_sel),3);
        bufp->chgCData(oldp+12152,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_rd_addr),5);
        bufp->chgBit(oldp+12153,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_rd_we));
        bufp->chgBit(oldp+12154,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_signex_sel));
        bufp->chgBit(oldp+12155,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem_align_exception));
        bufp->chgIData(oldp+12156,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_aligned_data),32);
        bufp->chgIData(oldp+12157,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_p_data),32);
        bufp->chgBit(oldp+12158,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_fetch_valid));
        bufp->chgBit(oldp+12159,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_xcpt_valid));
        bufp->chgCData(oldp+12160,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_xcpt_cause),4);
        bufp->chgIData(oldp+12161,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_xcpt_tval),32);
        bufp->chgIData(oldp+12162,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_pc),32);
        bufp->chgBit(oldp+12163,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we));
        bufp->chgSData(oldp+12164,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr),12);
        bufp->chgIData(oldp+12165,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_data),32);
        bufp->chgIData(oldp+12166,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__rd_data),32);
        bufp->chgBit(oldp+12167,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__sys_jump_r));
        bufp->chgCData(oldp+12168,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__sys_jump_csr_addr_r),2);
        bufp->chgBit(oldp+12169,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_valid_r));
        bufp->chgCData(oldp+12170,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_cause_r),4);
        bufp->chgIData(oldp+12171,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__xcpt_tval_r),32);
        bufp->chgBit(oldp+12172,((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Pipeline_Control__DOT__branch_flush) 
                                   | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__sys_jump_r)) 
                                  | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe_is_fencei))));
        bufp->chgBit(oldp+12173,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe_is_fencei) 
                                  | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__sys_jump_r))));
        bufp->chgIData(oldp+12174,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs1_data),32);
        bufp->chgIData(oldp+12175,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs2_data),32);
        bufp->chgIData(oldp+12176,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_csr_data),32);
        bufp->chgBit(oldp+12177,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__csr_irq_taken_r));
        bufp->chgIData(oldp+12178,(((3U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__sys_jump_csr_addr_r))
                                     ? vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mepc_r
                                     : ((1U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__sys_jump_csr_addr_r))
                                         ? vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__sepc_r
                                         : 0U))),32);
        bufp->chgBit(oldp+12179,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__bpu_branch_hit));
        bufp->chgBit(oldp+12180,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__bpu_branch_decision));
        bufp->chgIData(oldp+12181,((IData)((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.Branch_Prediction_Unit__DOT____Vcellout__BPU_BHT__data_o 
                                            >> 0x20U))),32);
        bufp->chgBit(oldp+12182,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__irq_enable));
        bufp->chgCData(oldp+12183,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__privilege_level_r),2);
        bufp->chgBit(oldp+12184,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__iS));
        bufp->chgBit(oldp+12185,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__iS_nxt));
        bufp->chgCData(oldp+12186,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dS),2);
        bufp->chgBit(oldp+12187,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__muldiv_req));
        bufp->chgBit(oldp+12188,((1U & (~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_i_ready)))));
        bufp->chgIData(oldp+12189,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__data_read_reg),32);
        bufp->chgCData(oldp+12190,((0x3fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                             >> 2U))),6);
        bufp->chgCData(oldp+12191,((0x3fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec_pc 
                                             >> 2U))),6);
        bufp->chgIData(oldp+12192,((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.Branch_Prediction_Unit__DOT____Vcellout__BPU_BHT__data_o)),32);
        bufp->chgBit(oldp+12193,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BHT_hit_ff));
        bufp->chgBit(oldp+12194,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BHT_hit));
        bufp->chgCData(oldp+12195,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[0]),2);
        bufp->chgCData(oldp+12196,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[1]),2);
        bufp->chgCData(oldp+12197,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[2]),2);
        bufp->chgCData(oldp+12198,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[3]),2);
        bufp->chgCData(oldp+12199,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[4]),2);
        bufp->chgCData(oldp+12200,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[5]),2);
        bufp->chgCData(oldp+12201,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[6]),2);
        bufp->chgCData(oldp+12202,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[7]),2);
        bufp->chgCData(oldp+12203,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[8]),2);
        bufp->chgCData(oldp+12204,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[9]),2);
        bufp->chgCData(oldp+12205,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[10]),2);
        bufp->chgCData(oldp+12206,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[11]),2);
        bufp->chgCData(oldp+12207,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[12]),2);
        bufp->chgCData(oldp+12208,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[13]),2);
        bufp->chgCData(oldp+12209,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[14]),2);
        bufp->chgCData(oldp+12210,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[15]),2);
        bufp->chgCData(oldp+12211,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[16]),2);
        bufp->chgCData(oldp+12212,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[17]),2);
        bufp->chgCData(oldp+12213,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[18]),2);
        bufp->chgCData(oldp+12214,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[19]),2);
        bufp->chgCData(oldp+12215,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[20]),2);
        bufp->chgCData(oldp+12216,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[21]),2);
        bufp->chgCData(oldp+12217,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[22]),2);
        bufp->chgCData(oldp+12218,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[23]),2);
        bufp->chgCData(oldp+12219,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[24]),2);
        bufp->chgCData(oldp+12220,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[25]),2);
        bufp->chgCData(oldp+12221,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[26]),2);
        bufp->chgCData(oldp+12222,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[27]),2);
        bufp->chgCData(oldp+12223,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[28]),2);
        bufp->chgCData(oldp+12224,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[29]),2);
        bufp->chgCData(oldp+12225,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[30]),2);
        bufp->chgCData(oldp+12226,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[31]),2);
        bufp->chgCData(oldp+12227,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[32]),2);
        bufp->chgCData(oldp+12228,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[33]),2);
        bufp->chgCData(oldp+12229,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[34]),2);
        bufp->chgCData(oldp+12230,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[35]),2);
        bufp->chgCData(oldp+12231,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[36]),2);
        bufp->chgCData(oldp+12232,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[37]),2);
        bufp->chgCData(oldp+12233,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[38]),2);
        bufp->chgCData(oldp+12234,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[39]),2);
        bufp->chgCData(oldp+12235,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[40]),2);
        bufp->chgCData(oldp+12236,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[41]),2);
        bufp->chgCData(oldp+12237,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[42]),2);
        bufp->chgCData(oldp+12238,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[43]),2);
        bufp->chgCData(oldp+12239,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[44]),2);
        bufp->chgCData(oldp+12240,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[45]),2);
        bufp->chgCData(oldp+12241,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[46]),2);
        bufp->chgCData(oldp+12242,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[47]),2);
        bufp->chgCData(oldp+12243,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[48]),2);
        bufp->chgCData(oldp+12244,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[49]),2);
        bufp->chgCData(oldp+12245,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[50]),2);
        bufp->chgCData(oldp+12246,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[51]),2);
        bufp->chgCData(oldp+12247,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[52]),2);
        bufp->chgCData(oldp+12248,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[53]),2);
        bufp->chgCData(oldp+12249,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[54]),2);
        bufp->chgCData(oldp+12250,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[55]),2);
        bufp->chgCData(oldp+12251,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[56]),2);
        bufp->chgCData(oldp+12252,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[57]),2);
        bufp->chgCData(oldp+12253,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[58]),2);
        bufp->chgCData(oldp+12254,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[59]),2);
        bufp->chgCData(oldp+12255,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[60]),2);
        bufp->chgCData(oldp+12256,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[61]),2);
        bufp->chgCData(oldp+12257,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[62]),2);
        bufp->chgCData(oldp+12258,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__branch_likelihood[63]),2);
        bufp->chgIData(oldp+12259,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__idx),32);
        bufp->chgQData(oldp+12260,((((QData)((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__alu_result)) 
                                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec_pc)))),64);
        bufp->chgQData(oldp+12262,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.Branch_Prediction_Unit__DOT____Vcellout__BPU_BHT__data_o),64);
        bufp->chgQData(oldp+12264,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[0]),64);
        bufp->chgQData(oldp+12266,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[1]),64);
        bufp->chgQData(oldp+12268,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[2]),64);
        bufp->chgQData(oldp+12270,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[3]),64);
        bufp->chgQData(oldp+12272,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[4]),64);
        bufp->chgQData(oldp+12274,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[5]),64);
        bufp->chgQData(oldp+12276,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[6]),64);
        bufp->chgQData(oldp+12278,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[7]),64);
        bufp->chgQData(oldp+12280,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[8]),64);
        bufp->chgQData(oldp+12282,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[9]),64);
        bufp->chgQData(oldp+12284,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[10]),64);
        bufp->chgQData(oldp+12286,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[11]),64);
        bufp->chgQData(oldp+12288,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[12]),64);
        bufp->chgQData(oldp+12290,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[13]),64);
        bufp->chgQData(oldp+12292,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[14]),64);
        bufp->chgQData(oldp+12294,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[15]),64);
        bufp->chgQData(oldp+12296,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[16]),64);
        bufp->chgQData(oldp+12298,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[17]),64);
        bufp->chgQData(oldp+12300,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[18]),64);
        bufp->chgQData(oldp+12302,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[19]),64);
        bufp->chgQData(oldp+12304,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[20]),64);
        bufp->chgQData(oldp+12306,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[21]),64);
        bufp->chgQData(oldp+12308,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[22]),64);
        bufp->chgQData(oldp+12310,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[23]),64);
        bufp->chgQData(oldp+12312,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[24]),64);
        bufp->chgQData(oldp+12314,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[25]),64);
        bufp->chgQData(oldp+12316,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[26]),64);
        bufp->chgQData(oldp+12318,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[27]),64);
        bufp->chgQData(oldp+12320,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[28]),64);
        bufp->chgQData(oldp+12322,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[29]),64);
        bufp->chgQData(oldp+12324,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[30]),64);
        bufp->chgQData(oldp+12326,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[31]),64);
        bufp->chgQData(oldp+12328,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[32]),64);
        bufp->chgQData(oldp+12330,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[33]),64);
        bufp->chgQData(oldp+12332,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[34]),64);
        bufp->chgQData(oldp+12334,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[35]),64);
        bufp->chgQData(oldp+12336,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[36]),64);
        bufp->chgQData(oldp+12338,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[37]),64);
        bufp->chgQData(oldp+12340,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[38]),64);
        bufp->chgQData(oldp+12342,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[39]),64);
        bufp->chgQData(oldp+12344,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[40]),64);
        bufp->chgQData(oldp+12346,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[41]),64);
        bufp->chgQData(oldp+12348,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[42]),64);
        bufp->chgQData(oldp+12350,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[43]),64);
        bufp->chgQData(oldp+12352,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[44]),64);
        bufp->chgQData(oldp+12354,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[45]),64);
        bufp->chgQData(oldp+12356,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[46]),64);
        bufp->chgQData(oldp+12358,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[47]),64);
        bufp->chgQData(oldp+12360,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[48]),64);
        bufp->chgQData(oldp+12362,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[49]),64);
        bufp->chgQData(oldp+12364,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[50]),64);
        bufp->chgQData(oldp+12366,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[51]),64);
        bufp->chgQData(oldp+12368,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[52]),64);
        bufp->chgQData(oldp+12370,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[53]),64);
        bufp->chgQData(oldp+12372,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[54]),64);
        bufp->chgQData(oldp+12374,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[55]),64);
        bufp->chgQData(oldp+12376,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[56]),64);
        bufp->chgQData(oldp+12378,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[57]),64);
        bufp->chgQData(oldp+12380,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[58]),64);
        bufp->chgQData(oldp+12382,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[59]),64);
        bufp->chgQData(oldp+12384,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[60]),64);
        bufp->chgQData(oldp+12386,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[61]),64);
        bufp->chgQData(oldp+12388,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[62]),64);
        bufp->chgQData(oldp+12390,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__BPU_BHT__DOT__RAM[63]),64);
        bufp->chgIData(oldp+12392,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputA),32);
        bufp->chgIData(oldp+12393,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputB),32);
        bufp->chgIData(oldp+12394,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__muldiv_result),32);
        bufp->chgBit(oldp+12395,((((((((0U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel)) 
                                       & ((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                           == vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                           ? 1U : 0U)) 
                                      | ((1U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel)) 
                                         & ((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                             != vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                             ? 1U : 0U))) 
                                     | ((4U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel)) 
                                        & (VL_LTS_III(32, vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs1_data, vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                            ? 1U : 0U))) 
                                    | ((5U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel)) 
                                       & (VL_GTES_III(32, vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs1_data, vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                           ? 1U : 0U))) 
                                   | ((6U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel)) 
                                      & ((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                          < vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                          ? 1U : 0U))) 
                                  | ((7U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel)) 
                                     & ((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                         >= vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                         ? 1U : 0U)))));
        bufp->chgBit(oldp+12396,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__muldiv_ready));
        bufp->chgIData(oldp+12397,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_alu_muldiv_sel)
                                     ? vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__muldiv_result
                                     : vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__alu_result)),32);
        bufp->chgIData(oldp+12398,((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                    + vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_imm)),32);
        bufp->chgCData(oldp+12399,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__alu_operation),3);
        bufp->chgIData(oldp+12400,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__csr_inputB),32);
        bufp->chgIData(oldp+12401,(((1U == (3U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel)))
                                     ? vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__csr_inputB
                                     : ((2U == (3U 
                                                & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel)))
                                         ? (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_csr_data 
                                            | vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__csr_inputB)
                                         : ((3U == 
                                             (3U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel)))
                                             ? (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_csr_data 
                                                & (~ vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__csr_inputB))
                                             : vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_csr_data)))),32);
        bufp->chgIData(oldp+12402,((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputA 
                                    + vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputB)),32);
        bufp->chgIData(oldp+12403,((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputA 
                                    << (0x1fU & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputB))),32);
        bufp->chgIData(oldp+12404,((VL_LTS_III(32, vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputA, vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputB)
                                     ? 1U : 0U)),32);
        bufp->chgIData(oldp+12405,(((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputA 
                                     < vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputB)
                                     ? 1U : 0U)),32);
        bufp->chgIData(oldp+12406,((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputA 
                                    ^ vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputB)),32);
        bufp->chgIData(oldp+12407,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_shift_sel)
                                     ? VL_SHIFTRS_III(32,32,5, vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputA, 
                                                      (0x1fU 
                                                       & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputB))
                                     : (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputA 
                                        >> (0x1fU & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputB)))),32);
        bufp->chgIData(oldp+12408,((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputA 
                                    | vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputB)),32);
        bufp->chgIData(oldp+12409,((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputA 
                                    & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputB)),32);
        bufp->chgBit(oldp+12410,((0U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__alu_operation))));
        bufp->chgBit(oldp+12411,((1U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__alu_operation))));
        bufp->chgBit(oldp+12412,((2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__alu_operation))));
        bufp->chgBit(oldp+12413,((3U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__alu_operation))));
        bufp->chgBit(oldp+12414,((4U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__alu_operation))));
        bufp->chgBit(oldp+12415,((5U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__alu_operation))));
        bufp->chgBit(oldp+12416,((6U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__alu_operation))));
        bufp->chgBit(oldp+12417,((7U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__alu_operation))));
        bufp->chgBit(oldp+12418,(((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                   == vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                   ? 1U : 0U)));
        bufp->chgBit(oldp+12419,(((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                   != vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                   ? 1U : 0U)));
        bufp->chgBit(oldp+12420,((VL_LTS_III(32, vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs1_data, vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                   ? 1U : 0U)));
        bufp->chgBit(oldp+12421,((VL_GTES_III(32, vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs1_data, vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                   ? 1U : 0U)));
        bufp->chgBit(oldp+12422,(((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                   < vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                   ? 1U : 0U)));
        bufp->chgBit(oldp+12423,(((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs1_data 
                                   >= vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Forwarding_Unit__DOT__correct_rs2_data)
                                   ? 1U : 0U)));
        bufp->chgBit(oldp+12424,((0U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel))));
        bufp->chgBit(oldp+12425,((1U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel))));
        bufp->chgBit(oldp+12426,((4U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel))));
        bufp->chgBit(oldp+12427,((5U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel))));
        bufp->chgBit(oldp+12428,((6U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel))));
        bufp->chgBit(oldp+12429,((7U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel))));
        bufp->chgBit(oldp+12430,((2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel))));
        bufp->chgBit(oldp+12431,((3U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel))));
        bufp->chgBit(oldp+12432,((1U & ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel) 
                                        >> 2U))));
        bufp->chgBit(oldp+12433,((0U == vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputA)));
        bufp->chgBit(oldp+12434,((0U == vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputB)));
        bufp->chgBit(oldp+12435,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__is_a_neg));
        bufp->chgBit(oldp+12436,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__is_b_neg));
        bufp->chgBit(oldp+12437,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__signed_adjust));
        bufp->chgBit(oldp+12438,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__is_a_neg) 
                                  & (0U == (0x7fffffffU 
                                            & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__inputA)))));
        bufp->chgIData(oldp+12439,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__op_a),32);
        bufp->chgIData(oldp+12440,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__op_b),32);
        bufp->chgBit(oldp+12441,((1U & (((((0U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel)) 
                                           | (1U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel))) 
                                          | (2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel))) 
                                         | (3U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel)))
                                         ? (3U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__fast_mul_counter))
                                         : (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__cnt))))))));
        bufp->chgIData(oldp+12442,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__reg32),32);
        bufp->chgWData(oldp+12443,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__result),65);
        bufp->chgCData(oldp+12446,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__cnt),6);
        bufp->chgIData(oldp+12447,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__op_a_r),32);
        bufp->chgIData(oldp+12448,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__op_b_r),32);
        bufp->chgQData(oldp+12449,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__fast_result),64);
        bufp->chgQData(oldp+12451,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__mul0),64);
        bufp->chgQData(oldp+12453,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__mul1),64);
        bufp->chgCData(oldp+12455,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__fast_mul_counter),2);
        bufp->chgIData(oldp+12456,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__result[0U]),32);
        bufp->chgIData(oldp+12457,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__result[1U]),32);
        bufp->chgIData(oldp+12458,(((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__result[2U] 
                                     << 0x1fU) | (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__result[1U] 
                                                  >> 1U))),32);
        bufp->chgCData(oldp+12459,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__S),3);
        bufp->chgBit(oldp+12460,((1U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__result[0U])));
        bufp->chgBit(oldp+12461,((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__result[1U] 
                                  >= vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__reg32)));
        bufp->chgQData(oldp+12462,((0x1ffffffffULL 
                                    & ((4U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel))
                                        ? (- (QData)((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__reg32)))
                                        : (QData)((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__reg32))))),33);
        bufp->chgQData(oldp+12464,((QData)((IData)(
                                                   vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__result[1U]))),33);
        bufp->chgQData(oldp+12466,((0x1ffffffffULL 
                                    & (((4U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_operation_sel))
                                         ? (- (QData)((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__reg32)))
                                         : (QData)((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__reg32))) 
                                       + (QData)((IData)(
                                                         vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__result[1U]))))),33);
        bufp->chgWData(oldp+12468,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__result_tmp),65);
        bufp->chgBit(oldp+12471,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Fetch__DOT__stall_delay));
        bufp->chgBit(oldp+12472,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Fetch__DOT__flush_delay));
        bufp->chgIData(oldp+12473,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Fetch__DOT__instruction_delay),32);
        bufp->chgBit(oldp+12474,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_rs1_addr) 
                                  == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_rd_addr))));
        bufp->chgBit(oldp+12475,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_rs2_addr) 
                                  == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_rd_addr))));
        bufp->chgBit(oldp+12476,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_csr_addr) 
                                  == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_csr_addr))));
        bufp->chgBit(oldp+12477,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_rs1_addr) 
                                  == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_rd_addr))));
        bufp->chgBit(oldp+12478,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_rs2_addr) 
                                  == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_rd_addr))));
        bufp->chgBit(oldp+12479,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_csr_addr) 
                                  == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr))));
        bufp->chgBit(oldp+12480,((0U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_rd_addr))));
        bufp->chgBit(oldp+12481,((0U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_rd_addr))));
        bufp->chgBit(oldp+12482,((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_rd_we) 
                                   & ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_rs1_addr) 
                                      == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_rd_addr))) 
                                  & (0U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_rd_addr)))));
        bufp->chgBit(oldp+12483,((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_rd_we) 
                                   & ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_rs2_addr) 
                                      == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_rd_addr))) 
                                  & (0U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_rd_addr)))));
        bufp->chgBit(oldp+12484,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_csr_we) 
                                  & ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_csr_addr) 
                                     == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__exe2mem_csr_addr)))));
        bufp->chgBit(oldp+12485,((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_rd_we) 
                                   & ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_rs1_addr) 
                                      == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_rd_addr))) 
                                  & (0U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_rd_addr)))));
        bufp->chgBit(oldp+12486,((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_rd_we) 
                                   & ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_rs2_addr) 
                                      == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_rd_addr))) 
                                  & (0U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_rd_addr)))));
        bufp->chgBit(oldp+12487,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_we) 
                                  & ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2fwd_csr_addr) 
                                     == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_csr_addr)))));
        bufp->chgBit(oldp+12488,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Pipeline_Control__DOT__branch_flush));
        bufp->chgIData(oldp+12489,(((IData)(4U) + vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r)),32);
        bufp->chgBit(oldp+12490,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__we));
        bufp->chgIData(oldp+12491,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[0]),32);
        bufp->chgIData(oldp+12492,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[1]),32);
        bufp->chgIData(oldp+12493,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[2]),32);
        bufp->chgIData(oldp+12494,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[3]),32);
        bufp->chgIData(oldp+12495,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[4]),32);
        bufp->chgIData(oldp+12496,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[5]),32);
        bufp->chgIData(oldp+12497,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[6]),32);
        bufp->chgIData(oldp+12498,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[7]),32);
        bufp->chgIData(oldp+12499,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[8]),32);
        bufp->chgIData(oldp+12500,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[9]),32);
        bufp->chgIData(oldp+12501,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[10]),32);
        bufp->chgIData(oldp+12502,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[11]),32);
        bufp->chgIData(oldp+12503,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[12]),32);
        bufp->chgIData(oldp+12504,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[13]),32);
        bufp->chgIData(oldp+12505,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[14]),32);
        bufp->chgIData(oldp+12506,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[15]),32);
        bufp->chgIData(oldp+12507,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[16]),32);
        bufp->chgIData(oldp+12508,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[17]),32);
        bufp->chgIData(oldp+12509,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[18]),32);
        bufp->chgIData(oldp+12510,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[19]),32);
        bufp->chgIData(oldp+12511,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[20]),32);
        bufp->chgIData(oldp+12512,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[21]),32);
        bufp->chgIData(oldp+12513,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[22]),32);
        bufp->chgIData(oldp+12514,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[23]),32);
        bufp->chgIData(oldp+12515,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[24]),32);
        bufp->chgIData(oldp+12516,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[25]),32);
        bufp->chgIData(oldp+12517,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[26]),32);
        bufp->chgIData(oldp+12518,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[27]),32);
        bufp->chgIData(oldp+12519,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[28]),32);
        bufp->chgIData(oldp+12520,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[29]),32);
        bufp->chgIData(oldp+12521,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[30]),32);
        bufp->chgIData(oldp+12522,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x[31]),32);
        bufp->chgIData(oldp+12523,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [1U]),32);
        bufp->chgIData(oldp+12524,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [2U]),32);
        bufp->chgIData(oldp+12525,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [3U]),32);
        bufp->chgIData(oldp+12526,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [4U]),32);
        bufp->chgIData(oldp+12527,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [5U]),32);
        bufp->chgIData(oldp+12528,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [6U]),32);
        bufp->chgIData(oldp+12529,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [7U]),32);
        bufp->chgIData(oldp+12530,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [8U]),32);
        bufp->chgIData(oldp+12531,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [9U]),32);
        bufp->chgIData(oldp+12532,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0xaU]),32);
        bufp->chgIData(oldp+12533,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0xbU]),32);
        bufp->chgIData(oldp+12534,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0xcU]),32);
        bufp->chgIData(oldp+12535,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0xdU]),32);
        bufp->chgIData(oldp+12536,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0xeU]),32);
        bufp->chgIData(oldp+12537,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0xfU]),32);
        bufp->chgIData(oldp+12538,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x10U]),32);
        bufp->chgIData(oldp+12539,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x11U]),32);
        bufp->chgIData(oldp+12540,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x12U]),32);
        bufp->chgIData(oldp+12541,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x13U]),32);
        bufp->chgIData(oldp+12542,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x14U]),32);
        bufp->chgIData(oldp+12543,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x15U]),32);
        bufp->chgIData(oldp+12544,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x16U]),32);
        bufp->chgIData(oldp+12545,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x17U]),32);
        bufp->chgIData(oldp+12546,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x18U]),32);
        bufp->chgIData(oldp+12547,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x19U]),32);
        bufp->chgIData(oldp+12548,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x1aU]),32);
        bufp->chgIData(oldp+12549,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x1bU]),32);
        bufp->chgIData(oldp+12550,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x1cU]),32);
        bufp->chgIData(oldp+12551,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x1dU]),32);
        bufp->chgIData(oldp+12552,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x1eU]),32);
        bufp->chgIData(oldp+12553,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                   [0x1fU]),32);
        bufp->chgBit(oldp+12554,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__ext_irq_i));
        bufp->chgBit(oldp+12555,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__tmr_irq_i));
        bufp->chgBit(oldp+12556,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__CSR__sft_irq_i));
        bufp->chgIData(oldp+12557,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mstatus_r),32);
        bufp->chgIData(oldp+12558,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__misa_r),32);
        bufp->chgIData(oldp+12559,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mip_r),32);
        bufp->chgIData(oldp+12560,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mtvec_r),32);
        bufp->chgIData(oldp+12561,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mscratch_r),32);
        bufp->chgIData(oldp+12562,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mepc_r),32);
        bufp->chgIData(oldp+12563,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mcause_r),32);
        bufp->chgIData(oldp+12564,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mtval_r),32);
        bufp->chgIData(oldp+12565,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__medeleg_r),32);
        bufp->chgIData(oldp+12566,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mideleg_r),32);
        bufp->chgQData(oldp+12567,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mcycle_r),64);
        bufp->chgIData(oldp+12569,((0x800de763U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mstatus_r)),32);
        bufp->chgIData(oldp+12570,((0x333U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mip_r)),32);
        bufp->chgIData(oldp+12571,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__satp_r),32);
        bufp->chgIData(oldp+12572,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__stvec_r),32);
        bufp->chgIData(oldp+12573,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__sscratch_r),32);
        bufp->chgIData(oldp+12574,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__sepc_r),32);
        bufp->chgIData(oldp+12575,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__scause_r),32);
        bufp->chgIData(oldp+12576,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__stval_r),32);
        bufp->chgIData(oldp+12577,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__sedeleg_r),32);
        bufp->chgIData(oldp+12578,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__sideleg_r),32);
        bufp->chgQData(oldp+12579,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__cycle_r),64);
        bufp->chgIData(oldp+12581,((0xfffffffcU & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mtvec_r)),32);
        bufp->chgIData(oldp+12582,((0xfffffffcU & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__stvec_r)),32);
        bufp->chgBit(oldp+12583,((3U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__sys_jump_csr_addr_r))));
        bufp->chgBit(oldp+12584,((1U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__sys_jump_csr_addr_r))));
        bufp->chgBit(oldp+12585,((0U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__sys_jump_csr_addr_r))));
        bufp->chgBit(oldp+12586,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__sret_r));
        bufp->chgBit(oldp+12587,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mret_r));
        bufp->chgBit(oldp+12588,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__sys_jump_r));
        bufp->chgBit(oldp+12589,((1U & ((0x20000U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mstatus_r)
                                         ? (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mstatus_r 
                                            >> 0xbU)
                                         : (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__privilege_level_r)))));
        bufp->chgBit(oldp+12590,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__csr_flush_o));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+12591,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__code_req_o) 
                                  & ((0U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                             >> 0x1cU))
                                      ? 0U : 1U))));
        bufp->chgCData(oldp+12592,(((0U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__S))
                                     ? ((0x7fU > (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__init_count))
                                         ? 0U : 1U)
                                     : ((1U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__S))
                                         ? (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__code_req_o) 
                                             & ((0U 
                                                 == 
                                                 (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Program_Counter__DOT__pc_r 
                                                  >> 0x1cU))
                                                 ? 0U
                                                 : 1U))
                                             ? 2U : 1U)
                                         : ((2U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__S))
                                             ? ((1U 
                                                 & ((~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__cache_hit)) 
                                                    & (~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__dcache_flushing))))
                                                 ? 3U
                                                 : 2U)
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__S))
                                                 ? 
                                                ((IData)(vlSymsp->TOP__aquila_testharness__mock_ram.__PVT__done_imem_o)
                                                  ? 4U
                                                  : 3U)
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__I_Cache__DOT__S))
                                                  ? 2U
                                                  : 1U)))))),3);
        bufp->chgIData(oldp+12593,((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__we) 
                                     & ((0x1fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                  >> 0xfU)) 
                                        == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_rd_addr)))
                                     ? vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__rd_data
                                     : vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                    [(0x1fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 0xfU))])),32);
        bufp->chgIData(oldp+12594,((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__we) 
                                     & ((0x1fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                  >> 0x14U)) 
                                        == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__mem2wbk_rd_addr)))
                                     ? vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Writeback__DOT__rd_data
                                     : vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Register_File__DOT__x
                                    [(0x1fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 0x14U))])),32);
        bufp->chgIData(oldp+12595,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__trap_to_M)
                                     ? ((1U & ((0U 
                                                == 
                                                (3U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mtvec_r)) 
                                               | (~ 
                                                  (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mcause_d 
                                                   >> 0x1fU))))
                                         ? (0xfffffffcU 
                                            & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mtvec_r)
                                         : ((0xfffffffcU 
                                             & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mtvec_r) 
                                            + (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mcause_d 
                                               << 2U)))
                                     : ((0U == (3U 
                                                & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mtvec_r))
                                         ? (0xfffffffcU 
                                            & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__stvec_r)
                                         : ((0xfffffffcU 
                                             & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__stvec_r) 
                                            + (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__scause_d 
                                               << 2U))))),32);
        bufp->chgBit(oldp+12596,((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_mret) 
                                   & (3U != (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__privilege_level_r))) 
                                  | ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_sret) 
                                     & (0U == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__privilege_level_r))))));
        bufp->chgCData(oldp+12597,((0xfU & ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_ecall)
                                             ? ((3U 
                                                 == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__privilege_level_r))
                                                 ? 0xbU
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__privilege_level_r))
                                                  ? 9U
                                                  : 8U))
                                             : ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_ebreak)
                                                 ? 3U
                                                 : 
                                                ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_illegal_instr_xcpt)
                                                  ? 2U
                                                  : 0U))))),4);
        bufp->chgBit(oldp+12598,((((0x1fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                             >> 0xfU)) 
                                   == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_rd_addr)) 
                                  & (((((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__is_r_type) 
                                          | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__is_s_type)) 
                                         | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__is_b_type)) 
                                        | ((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load) 
                                             | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op_imm)) 
                                            | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_jalr)) 
                                           & (3U == 
                                              (3U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))) 
                                       | ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_fence) 
                                          & (3U == 
                                             (3U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))) 
                                      | (((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_system) 
                                            & (0x1000U 
                                               == (0x7000U 
                                                   & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr))) 
                                           | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csrrs)) 
                                          | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csrrc)) 
                                         & (3U == (3U 
                                                   & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))) 
                                     | ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_amo) 
                                        & (3U == (3U 
                                                  & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))))));
        bufp->chgBit(oldp+12599,((((0x1fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                             >> 0x14U)) 
                                   == (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dec2exe_rd_addr)) 
                                  & (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__is_r_type) 
                                      | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__is_s_type)) 
                                     | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__is_b_type)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+12600,(vlSymsp->TOP__aquila_testharness.__PVT__uart_strobe));
        bufp->chgBit(oldp+12601,(vlSymsp->TOP__aquila_testharness.__Vcellinp__Core2Wishbone_0__S_DEVICE_strobe_i));
        bufp->chgBit(oldp+12602,(vlSymsp->TOP__aquila_testharness.__PVT__Core2Wishbone_0__DOT__wb_stb));
        bufp->chgBit(oldp+12603,(vlSymsp->TOP__aquila_testharness.__PVT__Core2Wishboneuart_0__DOT__wb_stb));
        bufp->chgBit(oldp+12604,(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__w_reset));
        bufp->chgBit(oldp+12605,(vlSymsp->TOP__aquila_testharness.SD_Card_Controller__DOT____Vcellinp__spirxdatai____pinNumber2));
        bufp->chgBit(oldp+12606,(vlSymsp->TOP__aquila_testharness.SD_Card_Controller__DOT____Vcellinp__spitxdatai____pinNumber2));
        bufp->chgBit(oldp+12607,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__code_req_o));
        bufp->chgBit(oldp+12608,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_d_ready));
        bufp->chgIData(oldp+12609,(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__p_d_mem2core),32);
        bufp->chgBit(oldp+12610,(vlSymsp->TOP__aquila_testharness__aquila_core.__Vcellinp__TCM__en1_i));
        bufp->chgCData(oldp+12611,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__next_state),2);
        bufp->chgBit(oldp+12612,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__isr_write));
        bufp->chgBit(oldp+12613,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__iar_write));
        bufp->chgBit(oldp+12614,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__sie_write));
        bufp->chgBit(oldp+12615,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__cie_write));
        bufp->chgIData(oldp+12616,(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__read_data),32);
        bufp->chgIData(oldp+12617,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr),32);
        bufp->chgCData(oldp+12618,((0x1fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                             >> 0xfU))),5);
        bufp->chgCData(oldp+12619,((0x1fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                             >> 0x14U))),5);
        bufp->chgSData(oldp+12620,((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                    >> 0x14U)),12);
        bufp->chgBit(oldp+12621,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__irq_taken));
        bufp->chgIData(oldp+12622,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__csr_data),32);
        bufp->chgIData(oldp+12623,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__nxt_unwb_PC),32);
        bufp->chgCData(oldp+12624,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__dS_nxt),2);
        bufp->chgBit(oldp+12625,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__stall_data_fetch));
        bufp->chgIData(oldp+12626,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__data_read_mem),32);
        bufp->chgBit(oldp+12627,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Branch_Prediction_Unit__DOT__we));
        bufp->chgBit(oldp+12628,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__Decode__flush_i));
        bufp->chgCData(oldp+12629,((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load) 
                                     & ((0U == (7U 
                                                & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                   >> 0xcU))) 
                                        | (4U == (7U 
                                                  & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                     >> 0xcU)))))
                                     ? 0U : (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load) 
                                              & ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                      >> 0xcU))) 
                                                 | (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                        >> 0xcU)))))
                                              ? 1U : 
                                             ((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load) 
                                                & (0x2000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr))) 
                                               | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_amo))
                                               ? 2U
                                               : (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_jal) 
                                                   | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_jalr))
                                                   ? 3U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csr)
                                                    ? 5U
                                                    : 4U)))))),3);
        bufp->chgCData(oldp+12630,((0x1fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                             >> 7U))),5);
        bufp->chgBit(oldp+12631,((((((((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_lui) 
                                         | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_auipc)) 
                                        | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load)) 
                                       | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op_imm)) 
                                      | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op)) 
                                     | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csr)) 
                                    | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_amo)) 
                                   | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_jal)) 
                                  | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_jalr))));
        bufp->chgBit(oldp+12632,((1U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                        >> 0xeU))));
        bufp->chgBit(oldp+12633,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_store));
        bufp->chgBit(oldp+12634,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load) 
                                  | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_amo))));
        bufp->chgIData(oldp+12635,(((((((- (IData)(
                                                   (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op_imm) 
                                                     | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_jalr)) 
                                                    | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load)))) 
                                        & (((- (IData)(
                                                       (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                        >> 0x1fU))) 
                                            << 0xbU) 
                                           | (0x7ffU 
                                              & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                 >> 0x14U)))) 
                                       | ((- (IData)((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_store))) 
                                          & (((- (IData)(
                                                         (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                          >> 0x1fU))) 
                                              << 0xbU) 
                                             | ((0x7e0U 
                                                 & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                      >> 7U)))))) 
                                      | ((- (IData)((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_branch))) 
                                         & (((- (IData)(
                                                        (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                        >> 7U))))))) 
                                     | (0xfffff000U 
                                        & ((- (IData)(
                                                      ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_lui) 
                                                       | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_auipc)))) 
                                           & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr))) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_jal))) 
                                       & (((- (IData)(
                                                      (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                       >> 0x1fU))) 
                                           << 0x14U) 
                                          | ((0xff000U 
                                              & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr) 
                                             | ((0x800U 
                                                 & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                    >> 9U)) 
                                                | ((0x7e0U 
                                                    & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                         >> 0x14U))))))))),32);
        bufp->chgCData(oldp+12636,(((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_auipc) 
                                      | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_jal)) 
                                     | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_branch))
                                     ? 1U : (((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_lui) 
                                              | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_store))
                                              ? 0U : 2U))),2);
        bufp->chgCData(oldp+12637,((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op) 
                                     & (0x40000000U 
                                        == (0xfe007000U 
                                            & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))
                                     ? 2U : ((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_store) 
                                               | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op)) 
                                              | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_amo))
                                              ? 1U : 0U))),2);
        bufp->chgCData(oldp+12638,((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_lui) 
                                     | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_auipc))
                                     ? 0U : (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                   >> 0xcU)))),3);
        bufp->chgCData(oldp+12639,((3U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                          >> 0xcU))),2);
        bufp->chgBit(oldp+12640,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op) 
                                  & (1U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U)))));
        bufp->chgBit(oldp+12641,((0x20U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgCData(oldp+12642,((0x7fU & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)),7);
        bufp->chgCData(oldp+12643,((7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                          >> 0xcU))),3);
        bufp->chgCData(oldp+12644,((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                    >> 0x19U)),7);
        bufp->chgCData(oldp+12645,((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                    >> 0x1bU)),5);
        bufp->chgIData(oldp+12646,((((- (IData)((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                 >> 0x1fU))) 
                                     << 0xbU) | (0x7ffU 
                                                 & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+12647,((((- (IData)((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                 >> 0x1fU))) 
                                     << 0xbU) | ((0x7e0U 
                                                  & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                       >> 7U))))),32);
        bufp->chgIData(oldp+12648,((((- (IData)((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                 >> 0x1fU))) 
                                     << 0xcU) | ((0x800U 
                                                  & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                          >> 7U)))))),32);
        bufp->chgIData(oldp+12649,((0xfffff000U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)),32);
        bufp->chgIData(oldp+12650,((((- (IData)((vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                 >> 0x1fU))) 
                                     << 0x14U) | ((0xff000U 
                                                   & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr) 
                                                  | ((0x800U 
                                                      & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                         >> 9U)) 
                                                     | ((0x7e0U 
                                                         & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                              >> 0x14U))))))),32);
        bufp->chgBit(oldp+12651,((3U == (3U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr))));
        bufp->chgBit(oldp+12652,((0U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 2U)))));
        bufp->chgBit(oldp+12653,((1U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 2U)))));
        bufp->chgBit(oldp+12654,((2U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 2U)))));
        bufp->chgBit(oldp+12655,((3U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 2U)))));
        bufp->chgBit(oldp+12656,((4U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 2U)))));
        bufp->chgBit(oldp+12657,((5U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 2U)))));
        bufp->chgBit(oldp+12658,((6U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 2U)))));
        bufp->chgBit(oldp+12659,((7U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 2U)))));
        bufp->chgBit(oldp+12660,((0U == (3U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 5U)))));
        bufp->chgBit(oldp+12661,((1U == (3U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 5U)))));
        bufp->chgBit(oldp+12662,((2U == (3U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 5U)))));
        bufp->chgBit(oldp+12663,((3U == (3U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 5U)))));
        bufp->chgBit(oldp+12664,((0U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+12665,((1U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+12666,((2U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+12667,((3U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+12668,((4U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+12669,((5U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+12670,((6U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+12671,((7U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+12672,((0U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                         >> 0x19U))));
        bufp->chgBit(oldp+12673,((1U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                         >> 0x19U))));
        bufp->chgBit(oldp+12674,((5U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                         >> 0x19U))));
        bufp->chgBit(oldp+12675,((9U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                         >> 0x19U))));
        bufp->chgBit(oldp+12676,((0xdU == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                           >> 0x19U))));
        bufp->chgBit(oldp+12677,((0x15U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12678,((0x21U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12679,((0x11U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12680,((0x2dU == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12681,((0x7fU == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12682,((4U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                         >> 0x19U))));
        bufp->chgBit(oldp+12683,((8U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                         >> 0x19U))));
        bufp->chgBit(oldp+12684,((0xcU == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                           >> 0x19U))));
        bufp->chgBit(oldp+12685,((0x2cU == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12686,((0x10U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12687,((0x14U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12688,((0x60U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12689,((0x70U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12690,((0x50U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12691,((0x68U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12692,((0x78U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12693,((0x51U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12694,((0x71U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12695,((0x61U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12696,((0x69U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x19U))));
        bufp->chgBit(oldp+12697,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op));
        bufp->chgBit(oldp+12698,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op_imm));
        bufp->chgBit(oldp+12699,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_jal));
        bufp->chgBit(oldp+12700,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_jalr));
        bufp->chgBit(oldp+12701,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load));
        bufp->chgBit(oldp+12702,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_branch));
        bufp->chgBit(oldp+12703,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_lui));
        bufp->chgBit(oldp+12704,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_auipc));
        bufp->chgBit(oldp+12705,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_miscmem));
        bufp->chgBit(oldp+12706,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_system));
        bufp->chgBit(oldp+12707,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_amo));
        bufp->chgBit(oldp+12708,((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op_imm) 
                                   | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_jalr)) 
                                  | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load))));
        bufp->chgBit(oldp+12709,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_lui) 
                                  | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_auipc))));
        bufp->chgBit(oldp+12710,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op) 
                                  & (0x40000000U == 
                                     (0xfe007000U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12711,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_branch) 
                                  & (0U == (0x7000U 
                                            & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12712,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_branch) 
                                  & (0x1000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12713,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_branch) 
                                  & (0x4000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12714,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_branch) 
                                  & (0x5000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12715,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_branch) 
                                  & (0x6000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12716,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_branch) 
                                  & (0x7000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12717,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_fence));
        bufp->chgBit(oldp+12718,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_miscmem) 
                                  & (0x1000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12719,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_system) 
                                  & (0x1000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12720,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csrrs));
        bufp->chgBit(oldp+12721,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csrrc));
        bufp->chgBit(oldp+12722,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_system) 
                                  & (0x5000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12723,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_system) 
                                  & (0x6000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12724,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_system) 
                                  & (0x7000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12725,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csr));
        bufp->chgBit(oldp+12726,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_sys_op));
        bufp->chgBit(oldp+12727,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_ecall));
        bufp->chgBit(oldp+12728,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_ebreak));
        bufp->chgBit(oldp+12729,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_mret));
        bufp->chgBit(oldp+12730,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_sret));
        bufp->chgBit(oldp+12731,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load) 
                                  & (0U == (0x7000U 
                                            & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12732,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load) 
                                  & (0x1000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12733,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load) 
                                  & (0x2000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12734,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load) 
                                  & (0x4000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12735,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load) 
                                  & (0x5000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12736,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_store) 
                                  & (0U == (0x7000U 
                                            & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12737,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_store) 
                                  & (0x1000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12738,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_store) 
                                  & (0x2000U == (0x7000U 
                                                 & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12739,((IData)((0x12000073U 
                                          == (0xfe00707fU 
                                              & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12740,((0U != (0x1fU & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                  >> 0xfU)))));
        bufp->chgBit(oldp+12741,((((((((((((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op) 
                                             | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op_imm)) 
                                            | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_jal)) 
                                           | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_jalr)) 
                                          | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load)) 
                                         | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_store)) 
                                        | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_branch)) 
                                       | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_lui)) 
                                      | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_auipc)) 
                                     | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_miscmem)) 
                                    | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_system)) 
                                   | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_amo)) 
                                  & (3U == (3U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12742,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op_imm) 
                                  & ((1U == (7U & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                   >> 0xcU))) 
                                     | (5U == (7U & 
                                               (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                >> 0xcU)))))));
        bufp->chgBit(oldp+12743,((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op_imm) 
                                   & ((1U == (7U & 
                                              (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                               >> 0xcU))) 
                                      | (5U == (7U 
                                                & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                   >> 0xcU))))) 
                                  & (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                     >> 0x19U))));
        bufp->chgBit(oldp+12744,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csr) 
                                  & (0xc01U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+12745,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csr) 
                                  & (0xc81U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+12746,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csr) 
                                  & (0x14dU == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+12747,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csr) 
                                  & (0x15dU == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+12748,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csr) 
                                  & (0xda0U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+12749,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csr) 
                                  & (0xfb0U == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+12750,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csr) 
                                  & (0x30cU == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                >> 0x14U)))));
        bufp->chgBit(oldp+12751,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csr) 
                                  & (((((((0xc01U == 
                                           (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x14U)) 
                                          | (0xc81U 
                                             == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                 >> 0x14U))) 
                                         | (0x14dU 
                                            == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                >> 0x14U))) 
                                        | (0x15dU == 
                                           (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                            >> 0x14U))) 
                                       | (0xda0U == 
                                          (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                           >> 0x14U))) 
                                      | (0xfb0U == 
                                         (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                          >> 0x14U))) 
                                     | (0x30cU == (vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr 
                                                   >> 0x14U))))));
        bufp->chgBit(oldp+12752,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_illegal_instr_xcpt));
        bufp->chgBit(oldp+12753,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__xcpt_valid));
        bufp->chgIData(oldp+12754,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_illegal_instr_xcpt)
                                     ? vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr
                                     : 0U)),32);
        bufp->chgBit(oldp+12755,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__is_r_type));
        bufp->chgBit(oldp+12756,(((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_load) 
                                    | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_op_imm)) 
                                   | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_jalr)) 
                                  & (3U == (3U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12757,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__is_s_type));
        bufp->chgBit(oldp+12758,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__is_b_type));
        bufp->chgBit(oldp+12759,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_fence) 
                                  & (3U == (3U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12760,((((((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_system) 
                                     & (0x1000U == 
                                        (0x7000U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr))) 
                                    | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csrrs)) 
                                   | (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_csrrc)) 
                                  & (3U == (3U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12761,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Decode__DOT__rv32_amo) 
                                  & (3U == (3U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__fet2dec_instr)))));
        bufp->chgBit(oldp+12762,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__Execute__stall_i));
        bufp->chgBit(oldp+12763,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__Execute__flush_i));
        bufp->chgCData(oldp+12764,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__PVT__Execute__DOT__MulDiv__DOT__S_nxt),3);
        bufp->chgBit(oldp+12765,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__Fetch__stall_i));
        bufp->chgBit(oldp+12766,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__Fetch__flush_i));
        bufp->chgBit(oldp+12767,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.__Vcellinp__Memory__flush_i));
        bufp->chgIData(oldp+12768,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__mcause_d),32);
        bufp->chgIData(oldp+12769,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__scause_d),32);
        bufp->chgBit(oldp+12770,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__trap_to_M));
        bufp->chgCData(oldp+12771,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.__PVT__interrupt_cause),4);
    }
    bufp->chgBit(oldp+12772,(vlSelf->clk));
    bufp->chgBit(oldp+12773,(vlSelf->rst_n));
    bufp->chgIData(oldp+12774,(vlSelf->main_memory_addr),32);
    bufp->chgIData(oldp+12775,(vlSelf->cur_instr_addr),32);
    bufp->chgBit(oldp+12776,(vlSelf->spi_ss));
    bufp->chgBit(oldp+12777,(vlSelf->spi_sck));
    bufp->chgBit(oldp+12778,(vlSelf->spi_mosi));
    bufp->chgBit(oldp+12779,(vlSelf->spi_miso));
    bufp->chgBit(oldp+12780,(vlSelf->uart_tx));
    bufp->chgBit(oldp+12781,(vlSelf->uart_rx));
    bufp->chgBit(oldp+12782,(vlSymsp->TOP__aquila_testharness.M_DEVICE_strobe));
    bufp->chgBit(oldp+12783,(((IData)(vlSymsp->TOP__aquila_testharness.is_dev_req)
                               ? (1U & ((2U == (0xfU 
                                                & (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o 
                                                   >> 0x18U)))
                                         ? (IData)(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_ack)
                                         : ((IData)(vlSymsp->TOP__aquila_testharness.dev_sel)
                                             ? (IData)(vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_data_ready)
                                             : (IData)(vlSymsp->TOP__aquila_testharness.__PVT__wishbone_uart_ack))))
                               : 0U)));
    bufp->chgIData(oldp+12784,(((IData)(vlSymsp->TOP__aquila_testharness.is_dev_req)
                                 ? ((2U == (0xfU & 
                                            (vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o 
                                             >> 0x18U)))
                                     ? vlSymsp->TOP__aquila_testharness.__PVT__wishbone_data2core
                                     : ((IData)(vlSymsp->TOP__aquila_testharness.dev_sel)
                                         ? vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_dev2core_data
                                         : vlSymsp->TOP__aquila_testharness.__PVT__wishbone_uart_data2core))
                                 : 0U)),32);
    bufp->chgIData(oldp+12785,(vlSymsp->TOP__aquila_testharness.debug_pc),32);
    bufp->chgBit(oldp+12786,(vlSymsp->TOP__aquila_testharness.is_dev_req));
    bufp->chgBit(oldp+12787,(vlSymsp->TOP__aquila_testharness.dev_sel));
    bufp->chgBit(oldp+12788,((((IData)(vlSymsp->TOP__aquila_testharness.is_dev_req) 
                               & (~ (IData)(vlSymsp->TOP__aquila_testharness.dev_sel)))
                               ? (1U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_rw_o))
                               : 0U)));
    bufp->chgBit(oldp+12789,(vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_data_ready));
    bufp->chgBit(oldp+12790,((((IData)(vlSymsp->TOP__aquila_testharness.is_dev_req) 
                               & (IData)(vlSymsp->TOP__aquila_testharness.dev_sel))
                               ? (1U & (IData)(vlSymsp->TOP__aquila_testharness.M_DEVICE_strobe))
                               : 0U)));
    bufp->chgBit(oldp+12791,((((IData)(vlSymsp->TOP__aquila_testharness.is_dev_req) 
                               & (IData)(vlSymsp->TOP__aquila_testharness.dev_sel))
                               ? (1U & (IData)(vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_rw_o))
                               : 0U)));
    bufp->chgIData(oldp+12792,(vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_dev2core_data),32);
    bufp->chgBit(oldp+12793,(((IData)(vlSymsp->TOP__aquila_testharness.is_dev_req) 
                              & (0x2000000U == (0xf000000U 
                                                & vlSymsp->TOP__aquila_testharness__aquila_core.__PVT__M_DEVICE_addr_o)))));
    bufp->chgBit(oldp+12794,((1U & (~ (IData)(vlSelf->rst_n)))));
    bufp->chgIData(oldp+12795,((((IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_watchdog_err) 
                                 << 0x15U) | ((0x100000U 
                                               & ((~ (IData)(vlSelf->rst_n)) 
                                                  << 0x14U)) 
                                              | ((0x80000U 
                                                  & ((~ (IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_present)) 
                                                     << 0x13U)) 
                                                 | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__GEN_CARD_DETECT__DOT__r_card_removed) 
                                                     << 0x12U) 
                                                    | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_cmd_err) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_cmd_busy) 
                                                           << 0xeU) 
                                                          | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_fifo_id) 
                                                              << 0xcU) 
                                                             | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_use_fifo) 
                                                                 << 0xbU) 
                                                                | (((IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__write_to_card) 
                                                                    << 0xaU) 
                                                                   | (IData)(vlSymsp->TOP__aquila_testharness.__PVT__SD_Card_Controller__DOT__r_last_r_one))))))))))),32);
    bufp->chgBit(oldp+12796,(vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_strobe));
    bufp->chgIData(oldp+12797,(vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_addr),32);
    bufp->chgBit(oldp+12798,(vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_rw));
    bufp->chgIData(oldp+12799,(vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_core2dev_data),32);
    bufp->chgCData(oldp+12800,((0xffU & vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_addr)),8);
    bufp->chgBit(oldp+12801,(((2U == (IData)(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__cur_state)) 
                              & (4U == (0xffU & vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_addr)))));
    bufp->chgBit(oldp+12802,(((2U == (IData)(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__cur_state)) 
                              & (8U == (0xffU & vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_addr)))));
    bufp->chgBit(oldp+12803,(((2U == (IData)(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__cur_state)) 
                              & (0x18U == (0xffU & vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_addr)))));
    bufp->chgBit(oldp+12804,(((2U == (IData)(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__cur_state)) 
                              & (0x1cU == (0xffU & vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_addr)))));
    bufp->chgBit(oldp+12805,(((2U == (IData)(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__cur_state)) 
                              & (0x20U == (0xffU & vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_addr)))));
    bufp->chgBit(oldp+12806,(((2U == (IData)(vlSymsp->TOP__aquila_testharness__intc_0.__PVT__cur_state)) 
                              & (0x24U == (0xffU & vlSymsp->TOP__aquila_testharness__intc_0.M_DEVICE_addr)))));
    bufp->chgIData(oldp+12807,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.fet2dec_pc),32);
    bufp->chgBit(oldp+12808,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.dec2plc_load_hazard));
    bufp->chgBit(oldp+12809,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.dec_unsupported_instr));
    bufp->chgBit(oldp+12810,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.plc2dec_flush));
    bufp->chgBit(oldp+12811,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.irq_taken));
    bufp->chgBit(oldp+12812,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.stall_pipeline));
    bufp->chgBit(oldp+12813,(((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.stall_pipeline) 
                              | ((IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.dec2plc_load_hazard) 
                                 & (~ (IData)(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0.irq_taken))))));
    bufp->chgIData(oldp+12814,(vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.mie_r),32);
    bufp->chgIData(oldp+12815,((0x333U & vlSymsp->TOP__aquila_testharness__aquila_core__RISCV_CORE0__CSR.mie_r)),32);
}

void Vaquila_testharness___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaquila_testharness___024root__trace_cleanup\n"); );
    // Init
    Vaquila_testharness___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaquila_testharness___024root*>(voidSelf);
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
