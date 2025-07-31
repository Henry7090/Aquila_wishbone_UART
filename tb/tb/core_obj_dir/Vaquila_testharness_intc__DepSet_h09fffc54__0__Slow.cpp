// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaquila_testharness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaquila_testharness__Syms.h"
#include "Vaquila_testharness_intc.h"

VL_ATTR_COLD void Vaquila_testharness_intc___settle__TOP__aquila_testharness__intc_0__0(Vaquila_testharness_intc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaquila_testharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaquila_testharness_intc___settle__TOP__aquila_testharness__intc_0__0\n"); );
    // Body
    vlSelf->__PVT__has_enable_interrupt = ((0U != vlSelf->__PVT__ier) 
                                           & (IData)(vlSymsp->TOP__aquila_testharness.__PVT__uart_intr));
    vlSelf->__PVT__hie = (1U & (vlSelf->__PVT__mer 
                                >> 1U));
}
