// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_dino.h for the primary calling header

#include "Vtop_dino_player_controller.h"
#include "Vtop_dino__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_dino_player_controller::_combo__TOP__top_dino__top__player_constroller_inst__1(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_dino_player_controller::_combo__TOP__top_dino__top__player_constroller_inst__1\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__clk 
        = vlSymsp->TOP__top_dino__top__player_constroller_inst.clk;
}

VL_INLINE_OPT void Vtop_dino_player_controller::_sequent__TOP__top_dino__top__player_constroller_inst__4(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_dino_player_controller::_sequent__TOP__top_dino__top__player_constroller_inst__4\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    SData/*9:0*/ __Vtableidx1;
    // Body
    if (vlSymsp->TOP__top_dino__top__player_constroller_inst.rst_n) {
        if ((1U & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.game_tick))) {
            if (vlSymsp->TOP__top_dino__top__player_constroller_inst.button_down) {
                vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__velocity = 0U;
            } else {
                if (vlSymsp->TOP__top_dino__top__player_constroller_inst.jump_pulse) {
                    vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__velocity = 9U;
                } else {
                    if ((0x20U & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.player_position))) {
                        vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__velocity 
                            = (0xfU & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__adder_res));
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.game_tick))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__adder_res) 
                              >> 5U)))) {
                    vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__velocity = 0U;
                }
            }
        }
    } else {
        vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__velocity = 0U;
    }
    __Vtableidx1 = (((IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.jump_done) 
                     << 9U) | (((IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.button_down) 
                                << 8U) | (((IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.crash) 
                                           << 7U) | 
                                          (((IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.button_up) 
                                            << 6U) 
                                           | (((IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.game_tick) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.game_state) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.rst_n)))))));
    vlSymsp->TOP__top_dino__top__player_constroller_inst.game_state 
        = vlSymsp->TOP__top_dino__top__player_constroller_inst.__Vtable1_game_state
        [__Vtableidx1];
    if (vlSymsp->TOP__top_dino__top__player_constroller_inst.rst_n) {
        if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.game_tick)))) {
            if ((2U & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.game_tick))) {
                vlSymsp->TOP__top_dino__top__player_constroller_inst.player_position 
                    = ((0x20U & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__adder_res))
                        ? (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__adder_res)
                        : 0U);
            }
        }
    } else {
        vlSymsp->TOP__top_dino__top__player_constroller_inst.player_position = 0U;
    }
    vlSymsp->TOP__top_dino__top__player_constroller_inst.running 
        = ((2U == (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.game_state)) 
           | (3U == (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.game_state)));
    vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__position 
        = vlSymsp->TOP__top_dino__top__player_constroller_inst.player_position;
}

VL_INLINE_OPT void Vtop_dino_player_controller::_combo__TOP__top_dino__top__player_constroller_inst__5(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_dino_player_controller::_combo__TOP__top_dino__top__player_constroller_inst__5\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__button_down 
        = vlSymsp->TOP__top_dino__top__player_constroller_inst.button_down;
    vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__active_vel 
        = ((IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.button_down)
            ? 6U : (0xfU & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__velocity)));
    vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__game_tick 
        = vlSymsp->TOP__top_dino__top__player_constroller_inst.game_tick;
    vlSymsp->TOP__top_dino__top__player_constroller_inst.game_start_pulse 
        = (((0U == (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.game_state)) 
            & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.game_tick)) 
           & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.button_up));
    vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__adder_in2 
        = ((2U & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.game_tick))
            ? (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.player_position)
            : ((0x30U & ((- (IData)((1U & ((IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__velocity) 
                                           >> 3U)))) 
                         << 4U)) | (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__velocity)));
    vlSymsp->TOP__top_dino__top__player_constroller_inst.jump_pulse 
        = (((IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.running) 
            & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.game_tick)) 
           & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.button_up));
    vlSymsp->TOP__top_dino__top__player_constroller_inst.game_over_pulse 
        = (((5U != (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.game_state)) 
            & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.game_tick)) 
           & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.button_up));
    vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__adder_in1 
        = ((2U & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.game_tick))
            ? (0xfU & (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__active_vel))
            : 1U);
    vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__jump_pulse 
        = vlSymsp->TOP__top_dino__top__player_constroller_inst.jump_pulse;
    vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__adder_res 
        = (0x3fU & (((0x30U & ((- (IData)((1U & ((IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__velocity) 
                                                 >> 3U)))) 
                               << 4U)) | (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__adder_in1)) 
                    + (IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__adder_in2)));
    vlSymsp->TOP__top_dino__top__player_constroller_inst.jump_done 
        = (1U & (~ ((IData)(vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__adder_res) 
                    >> 5U)));
    vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__jump_done 
        = vlSymsp->TOP__top_dino__top__player_constroller_inst.jump_done;
}

VL_INLINE_OPT void Vtop_dino_player_controller::_combo__TOP__top_dino__top__player_constroller_inst__6(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_dino_player_controller::_combo__TOP__top_dino__top__player_constroller_inst__6\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__top_dino__top__player_constroller_inst.u_player_physics__DOT__rst_n 
        = vlSymsp->TOP__top_dino__top__player_constroller_inst.rst_n;
}
