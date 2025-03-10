// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_dino.h for the primary calling header

#include "Vtop_dino.h"
#include "Vtop_dino__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop_dino::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_dino::eval\n"); );
    Vtop_dino__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top_dino.v", 8, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop_dino::_eval_initial_loop(Vtop_dino__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top_dino.v", 8, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop_dino::_combo__TOP__1(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_dino::_combo__TOP__1\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__top_dino.uio_in = vlTOPp->uio_in;
    vlSymsp->TOP__top_dino.ena = vlTOPp->ena;
    vlSymsp->TOP__top_dino.ui_in = vlTOPp->ui_in;
    vlSymsp->TOP__top_dino.rst_n = vlTOPp->rst_n;
    vlSymsp->TOP__top_dino.clk = vlTOPp->clk;
}

VL_INLINE_OPT void Vtop_dino::_sequent__TOP__4(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_dino::_sequent__TOP__4\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->uio_out = vlSymsp->TOP__top_dino.uio_out;
    vlTOPp->uo_out = vlSymsp->TOP__top_dino.uo_out;
}

void Vtop_dino::_eval(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_dino::_eval\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlSymsp->TOP__top_dino._combo__TOP__top_dino__2(vlSymsp);
    vlSymsp->TOP__top_dino__top._combo__TOP__top_dino__top__2(vlSymsp);
    if (((IData)(vlSymsp->TOP__top_dino__top.clk) & 
         (~ (IData)(vlTOPp->__Vclklast__TOP__top_dino__top__clk)))) {
        vlSymsp->TOP__top_dino__top._sequent__TOP__top_dino__top__5(vlSymsp);
        vlSymsp->TOP__top_dino._sequent__TOP__top_dino__4(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlSymsp->TOP__top_dino._combo__TOP__top_dino__5(vlSymsp);
    vlSymsp->TOP__top_dino__top._combo__TOP__top_dino__top__6(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__top_dino__top__clk = vlSymsp->TOP__top_dino__top.clk;
}

VL_INLINE_OPT QData Vtop_dino::_change_request(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_dino::_change_request\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop_dino::_change_request_1(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_dino::_change_request_1\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop_dino::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_dino::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((ena & 0xfeU))) {
        Verilated::overWidthError("ena");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
