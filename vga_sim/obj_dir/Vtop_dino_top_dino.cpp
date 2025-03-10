// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_dino.h for the primary calling header

#include "Vtop_dino_top_dino.h"
#include "Vtop_dino__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_dino_top_dino::_combo__TOP__top_dino__2(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_dino_top_dino::_combo__TOP__top_dino__2\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__top_dino__top.uio_in = vlSymsp->TOP__top_dino.uio_in;
    vlSymsp->TOP__top_dino__top.clk = vlSymsp->TOP__top_dino.clk;
}

VL_INLINE_OPT void Vtop_dino_top_dino::_sequent__TOP__top_dino__4(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_dino_top_dino::_sequent__TOP__top_dino__4\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__top_dino.uio_out = vlSymsp->TOP__top_dino__top.uio_out;
    vlSymsp->TOP__top_dino.uo_out = vlSymsp->TOP__top_dino__top.uo_out;
}

VL_INLINE_OPT void Vtop_dino_top_dino::_combo__TOP__top_dino__5(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_dino_top_dino::_combo__TOP__top_dino__5\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__top_dino__top.ena = vlSymsp->TOP__top_dino.ena;
    vlSymsp->TOP__top_dino__top.ui_in = vlSymsp->TOP__top_dino.ui_in;
    vlSymsp->TOP__top_dino__top.rst_n = vlSymsp->TOP__top_dino.rst_n;
}
