// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_dino.h for the primary calling header

#include "Vtop_dino_top_dino.h"
#include "Vtop_dino__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop_dino_top_dino) {
    VL_CELL(top, Vtop_dino_tt_um_uwasic_dinogame);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_dino_top_dino::__Vconfigure(Vtop_dino__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtop_dino_top_dino::~Vtop_dino_top_dino() {
}

void Vtop_dino_top_dino::_initial__TOP__top_dino__1(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_dino_top_dino::_initial__TOP__top_dino__1\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__top_dino.uio_oe = vlSymsp->TOP__top_dino__top.uio_oe;
}

void Vtop_dino_top_dino::_settle__TOP__top_dino__3(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_dino_top_dino::_settle__TOP__top_dino__3\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__top_dino.uio_oe = vlSymsp->TOP__top_dino__top.uio_oe;
    vlSymsp->TOP__top_dino__top.uio_in = vlSymsp->TOP__top_dino.uio_in;
    vlSymsp->TOP__top_dino__top.ena = vlSymsp->TOP__top_dino.ena;
    vlSymsp->TOP__top_dino__top.ui_in = vlSymsp->TOP__top_dino.ui_in;
    vlSymsp->TOP__top_dino__top.rst_n = vlSymsp->TOP__top_dino.rst_n;
    vlSymsp->TOP__top_dino__top.clk = vlSymsp->TOP__top_dino.clk;
    vlSymsp->TOP__top_dino.uio_out = vlSymsp->TOP__top_dino__top.uio_out;
    vlSymsp->TOP__top_dino.uo_out = vlSymsp->TOP__top_dino__top.uo_out;
}

void Vtop_dino_top_dino::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_dino_top_dino::_ctor_var_reset\n"); );
    // Body
    ui_in = 0;
    uo_out = 0;
    uio_in = 0;
    uio_out = 0;
    uio_oe = 0;
    ena = 0;
    clk = 0;
    rst_n = 0;
}
