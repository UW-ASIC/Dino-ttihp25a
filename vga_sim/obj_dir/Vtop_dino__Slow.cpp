// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_dino.h for the primary calling header

#include "Vtop_dino.h"
#include "Vtop_dino__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop_dino) {
    Vtop_dino__Syms* __restrict vlSymsp = __VlSymsp = new Vtop_dino__Syms(this, name());
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(top_dino, Vtop_dino_top_dino);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_dino::__Vconfigure(Vtop_dino__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtop_dino::~Vtop_dino() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtop_dino::_settle__TOP__3(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_dino::_settle__TOP__3\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uio_oe = vlSymsp->TOP__top_dino.uio_oe;
    vlTOPp->uio_oe = vlSymsp->TOP__top_dino.uio_oe;
    vlTOPp->uio_out = vlSymsp->TOP__top_dino.uio_out;
    vlTOPp->uo_out = vlSymsp->TOP__top_dino.uo_out;
}

void Vtop_dino::_eval_initial(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_dino::_eval_initial\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__top_dino__top._initial__TOP__top_dino__top__1(vlSymsp);
    vlSymsp->TOP__top_dino._initial__TOP__top_dino__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__top_dino__top__clk = vlSymsp->TOP__top_dino__top.clk;
}

void Vtop_dino::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_dino::final\n"); );
    // Variables
    Vtop_dino__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop_dino::_eval_settle(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_dino::_eval_settle\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlSymsp->TOP__top_dino__top._settle__TOP__top_dino__top__3(vlSymsp);
    vlSymsp->TOP__top_dino._settle__TOP__top_dino__3(vlSymsp);
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlSymsp->TOP__top_dino__top._settle__TOP__top_dino__top__4(vlSymsp);
}

void Vtop_dino::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_dino::_ctor_var_reset\n"); );
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
