// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_dino.h for the primary calling header

#include "Vtop_dino_tt_um_uwasic_dinogame.h"
#include "Vtop_dino__Syms.h"

#include "verilated_dpi.h"

//==========
CData/*2:0*/ Vtop_dino_tt_um_uwasic_dinogame::__Vtable1_game_state[1024];
CData/*1:0*/ Vtop_dino_tt_um_uwasic_dinogame::__Vtable2_audio_inst__DOT__i_over__DOT__next_state[256];

VL_CTOR_IMP(Vtop_dino_tt_um_uwasic_dinogame), var_CONV (2U), 
  var_lfsr_inst__DOT__NUM_BITS (8U), var_player_constroller_inst__DOT__RESTART (0U), 
  var_player_constroller_inst__DOT__JUMPING (1U), var_player_constroller_inst__DOT__RUNNING1 (2U), 
  var_player_constroller_inst__DOT__RUNNING2 (3U), 
  var_player_constroller_inst__DOT__DUCKING (4U), var_player_constroller_inst__DOT__GAME_OVER (5U), 
  var_player_constroller_inst__DOT__u_player_physics__DOT__INITIAL_JUMP_VELOCITY (0xfffffff9U), 
  var_player_constroller_inst__DOT__u_player_physics__DOT__DOWNWARD_ACCELERATION (1U), 
  var_player_constroller_inst__DOT__u_player_physics__DOT__FASTDROP_VELOCITY (6U), 
  var_obstacles_inst__DOT__CONV (2U), var_obstacles_inst__DOT__GEN_LINE (0x47U), 
  var_bg_object_inst__DOT__CONV (2U), var_dino_rom_inst__DOT__JUMPING (1U), 
  var_dino_rom_inst__DOT__RUNNING_1 (2U), var_dino_rom_inst__DOT__RUNNING_2 (3U), 
  var_dino_rom_inst__DOT__DUCKING (4U), var_obs_rom_inst_1__DOT__EMPTY (0U), 
  var_obs_rom_inst_1__DOT__CAC_3 (1U), var_obs_rom_inst_1__DOT__CAC_2 (2U), 
  var_obs_rom_inst_1__DOT__CAC_THICK_1 (3U), var_obs_rom_inst_1__DOT__CAC_THICK_2 (4U), 
  var_obs_rom_inst_1__DOT__CAC_THIN (5U), var_obs_rom_inst_1__DOT__BIRD_LOW (6U), 
  var_obs_rom_inst_1__DOT__BIRD_HIGH (7U), var_obs_rom_inst_2__DOT__EMPTY (0U), 
  var_obs_rom_inst_2__DOT__CAC_3 (1U), var_obs_rom_inst_2__DOT__CAC_2 (2U), 
  var_obs_rom_inst_2__DOT__CAC_THICK_1 (3U), var_obs_rom_inst_2__DOT__CAC_THICK_2 (4U), 
  var_obs_rom_inst_2__DOT__CAC_THIN (5U), var_obs_rom_inst_2__DOT__BIRD_LOW (6U), 
  var_obs_rom_inst_2__DOT__BIRD_HIGH (7U), var_score_inst_1__DOT__CONV (2U), 
  var_score_inst_1__DOT__OFFSET (0x78U), var_score_inst_2__DOT__CONV (2U), 
  var_score_inst_2__DOT__OFFSET (0x6eU), var_score_inst_3__DOT__CONV (2U), 
  var_score_inst_3__DOT__OFFSET (0x64U), var_score_inst_4__DOT__CONV (2U), 
  var_score_inst_4__DOT__OFFSET (0x5aU), var_dino_inst__DOT__CONV (2U), 
  var_obs_inst_1__DOT__CONV (2U), var_obs_inst_2__DOT__CONV (2U), 
  var_bg_render_inst__DOT__CONV (2U), var_bg_line_inst__DOT__CONV (2U), 
  var_bg_line_inst__DOT__GND_LINE (0x3bU), var_graphics_inst__DOT__CONV (2U), 
  var_graphics_inst__DOT__hvsync_gen__DOT__H_DISPLAY (0x280U), 
  var_graphics_inst__DOT__hvsync_gen__DOT__H_BACK (0x30U), 
  var_graphics_inst__DOT__hvsync_gen__DOT__H_FRONT (0x10U), 
  var_graphics_inst__DOT__hvsync_gen__DOT__H_SYNC (0x60U), 
  var_graphics_inst__DOT__hvsync_gen__DOT__V_DISPLAY (0x1e0U), 
  var_graphics_inst__DOT__hvsync_gen__DOT__V_TOP (0x21U), 
  var_graphics_inst__DOT__hvsync_gen__DOT__V_BOTTOM (0xaU), 
  var_graphics_inst__DOT__hvsync_gen__DOT__V_SYNC (2U), 
  var_graphics_inst__DOT__hvsync_gen__DOT__H_SYNC_START (0x290U), 
  var_graphics_inst__DOT__hvsync_gen__DOT__H_SYNC_END (0x2efU), 
  var_graphics_inst__DOT__hvsync_gen__DOT__H_MAX (0x31fU), 
  var_graphics_inst__DOT__hvsync_gen__DOT__V_SYNC_START (0x1eaU), 
  var_graphics_inst__DOT__hvsync_gen__DOT__V_SYNC_END (0x1ebU), 
  var_graphics_inst__DOT__hvsync_gen__DOT__V_MAX (0x20cU), 
  var_audio_inst__DOT__i_jump__DOT__PWM_ARR_PERIOD (0x51615U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_0 (0x28b0aU), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_1 (0x224eaU), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_2 (0x1ce1cU), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_3 (0x1869fU), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_4 (0x14959U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_5 (0x11649U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_6 (0xeae2U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_7 (0xc496U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_8 (0xa5f3U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_9 (0x8c6bU), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_10 (0x7571U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_11 (0x6392U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_12 (0x5440U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_13 (0x477cU), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_14 (0x3ab8U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_15 (0x330fU), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_16 (0x28d9U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_17 (0x23beU), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_18 (0x1ea3U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_19 (0x1987U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_20 (0x146cU), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_21 (0x11dfU), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_22 (0xf51U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_23 (0xcc3U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_24 (0xa36U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_25 (0x7a8U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_26 (0x7a8U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_27 (0x51bU), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_28 (0x51bU), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_29 (0x19U), 
  var_audio_inst__DOT__i_jump__DOT__DECAY_30 (0x19U), 
  var_audio_inst__DOT__i_over__DOT__PERIOD (0x30d40U), 
  var_audio_inst__DOT__i_over__DOT__DECAY_0 (0x93f6U), 
  var_audio_inst__DOT__i_over__DOT__DECAY_1 (0x8432U), 
  var_audio_inst__DOT__i_over__DOT__DECAY_2 (0x7600U), 
  var_audio_inst__DOT__i_over__DOT__DECAY_3 (0x693cU), 
  var_audio_inst__DOT__i_over__DOT__DECAY_4 (0x5dc8U), 
  var_audio_inst__DOT__i_over__DOT__DECAY_5 (0x5387U), 
  var_audio_inst__DOT__i_over__DOT__DECAY_6 (0x4a63U), 
  var_audio_inst__DOT__i_over__DOT__DECAY_7 (0x4246U), 
  var_audio_inst__DOT__i_over__DOT__DECAY_8 (0x3b1fU), 
  var_audio_inst__DOT__i_over__DOT__DECAY_9 (0x34daU), 
  var_audio_inst__DOT__i_over__DOT__DECAY_10 (0x2f64U), 
  var_audio_inst__DOT__i_over__DOT__DECAY_11 (0x2aacU), 
  var_audio_inst__DOT__i_over__DOT__DECAY_12 (0x2697U), 
  var_audio_inst__DOT__i_over__DOT__DECAY_13 (0x22e4U), 
  var_audio_inst__DOT__i_over__DOT__DECAY_14 (0x1f8cU), 
  var_audio_inst__DOT__i_over__DOT__DECAY_15 (0x1c84U) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtop_dino_tt_um_uwasic_dinogame::__Vconfigure(Vtop_dino__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtop_dino_tt_um_uwasic_dinogame::~Vtop_dino_tt_um_uwasic_dinogame() {
}

void Vtop_dino_tt_um_uwasic_dinogame::_initial__TOP__top_dino__top__1(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_dino_tt_um_uwasic_dinogame::_initial__TOP__top_dino__top__1\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__top_dino__top._unused = 0U;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__active = 0U;
    vlSymsp->TOP__top_dino__top.uio_oe = 0x80U;
    vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_lfsr = 0x55U;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__counter = 0U;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__counter = 0U;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__state = 0U;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index = 0U;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__state = 0U;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index = 0U;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__next_state = 0U;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__next_state = 0U;
}

void Vtop_dino_tt_um_uwasic_dinogame::_settle__TOP__top_dino__top__3(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_dino_tt_um_uwasic_dinogame::_settle__TOP__top_dino__top__3\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__game_state 
        = vlSymsp->TOP__top_dino__top.game_state;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__obstacle1_pos 
        = vlSymsp->TOP__top_dino__top.obstacle1_pos;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__obstacle2_pos 
        = vlSymsp->TOP__top_dino__top.obstacle2_pos;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__obstacle1_type 
        = vlSymsp->TOP__top_dino__top.obstacle1_type;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__obstacle2_type 
        = vlSymsp->TOP__top_dino__top.obstacle2_type;
    vlSymsp->TOP__top_dino__top.bg_object_inst__DOT__bg_object_pos 
        = vlSymsp->TOP__top_dino__top.bg_object_pos;
    vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__i_player_state 
        = vlSymsp->TOP__top_dino__top.game_state;
    vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__i_obs_type 
        = vlSymsp->TOP__top_dino__top.obstacle1_type;
    vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__i_obs_type 
        = vlSymsp->TOP__top_dino__top.obstacle2_type;
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__i_xpos 
        = vlSymsp->TOP__top_dino__top.obstacle1_pos;
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__i_xpos 
        = vlSymsp->TOP__top_dino__top.obstacle2_pos;
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__i_xpos 
        = vlSymsp->TOP__top_dino__top.bg_object_pos;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_game_tick_20hz_r 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__game_tick_r;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__hpos 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hpos;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__vpos 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__sound 
        = vlSymsp->TOP__top_dino__top.__Vcellout__audio_inst__sound;
    vlSymsp->TOP__top_dino__top.uio_out = ((IData)(vlSymsp->TOP__top_dino__top.__Vcellout__audio_inst__sound) 
                                           << 7U);
    vlSymsp->TOP__top_dino__top.debounce_countdown_en 
        = (1U & (((IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos) 
                  >> 5U) & (~ (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos_5_r))));
    vlSymsp->TOP__top_dino__top.score = ((vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                                          [3U] << 0xcU) 
                                         | ((vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                                             [2U] << 8U) 
                                            | ((vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                                                [1U] 
                                                << 4U) 
                                               | vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                                               [0U])));
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__in_sprite 
        = ((8U > (IData)(vlSymsp->TOP__top_dino__top.dino_inst__DOT__x_offset_r)) 
           & (8U > (IData)(vlSymsp->TOP__top_dino__top.dino_inst__DOT__y_offset_r)));
    vlSymsp->TOP__top_dino__top.hsync = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hsync_r_r;
    vlSymsp->TOP__top_dino__top.vsync = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vsync_r_r;
    vlSymsp->TOP__top_dino__top.B = 0U;
    if (vlSymsp->TOP__top_dino__top.graphics_inst__DOT__display_on_r_r) {
        if (vlSymsp->TOP__top_dino__top.graphics_inst__DOT__is_colored_r) {
            vlSymsp->TOP__top_dino__top.B = 3U;
        }
    } else {
        vlSymsp->TOP__top_dino__top.B = 0U;
    }
    vlSymsp->TOP__top_dino__top.R = 0U;
    if (vlSymsp->TOP__top_dino__top.graphics_inst__DOT__display_on_r_r) {
        if (vlSymsp->TOP__top_dino__top.graphics_inst__DOT__is_colored_r) {
            vlSymsp->TOP__top_dino__top.R = 3U;
        }
    } else {
        vlSymsp->TOP__top_dino__top.R = 0U;
    }
    vlSymsp->TOP__top_dino__top.G = 0U;
    if (vlSymsp->TOP__top_dino__top.graphics_inst__DOT__display_on_r_r) {
        if (vlSymsp->TOP__top_dino__top.graphics_inst__DOT__is_colored_r) {
            vlSymsp->TOP__top_dino__top.G = 3U;
        }
    } else {
        vlSymsp->TOP__top_dino__top.G = 0U;
    }
    vlSymsp->TOP__top_dino__top.crash = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__collision;
    vlSymsp->TOP__top_dino__top.game_frozen = ((0U 
                                                == (IData)(vlSymsp->TOP__top_dino__top.game_state)) 
                                               | (5U 
                                                  == (IData)(vlSymsp->TOP__top_dino__top.game_state)));
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__running 
        = ((2U == (IData)(vlSymsp->TOP__top_dino__top.game_state)) 
           | (3U == (IData)(vlSymsp->TOP__top_dino__top.game_state)));
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__in_sprite 
        = ((0x10U > (IData)(vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__x_offset_r)) 
           & (0x10U > (IData)(vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__y_offset_r)));
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__in_sprite 
        = ((0x10U > (IData)(vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__x_offset_r)) 
           & (0x10U > (IData)(vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__y_offset_r)));
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__in_sprite 
        = ((8U > (IData)(vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__x_offset_r)) 
           & (8U > (IData)(vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__y_offset_r)));
    vlSymsp->TOP__top_dino__top.hpos = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hpos) 
                                                 >> 2U));
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__in_sprite 
        = ((4U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__x_offset_r)) 
           & (7U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__y_offset_r)));
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__in_sprite 
        = ((4U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__x_offset_r)) 
           & (7U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__y_offset_r)));
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__in_sprite 
        = ((4U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__x_offset_r)) 
           & (7U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__y_offset_r)));
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__in_sprite 
        = ((4U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__x_offset_r)) 
           & (7U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__y_offset_r)));
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment 
        = ((0x7eU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment)) 
           | ((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__y_offset_r)) 
              & ((((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r)) 
                       | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                      | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                     | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                    | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                   | (7U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                  | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                 | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r)))));
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment 
        = ((0x7dU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment)) 
           | ((((3U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__y_offset_r)) 
                & (0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__x_offset_r))) 
               & ((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r)) 
                      | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                     | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                    | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r)))) 
              << 1U));
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment 
        = ((0x7bU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment)) 
           | ((((3U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__y_offset_r)) 
                & (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__x_offset_r))) 
               & ((((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r)) 
                        | (1U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                       | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                      | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                     | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                    | (7U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r)))) 
              << 2U));
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment 
        = ((0x77U & (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment)) 
           | (((3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__y_offset_r)) 
               & (((((((2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r)) 
                       | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                      | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                     | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                    | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r)))) 
              << 3U));
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment 
        = ((0x6fU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment)) 
           | ((((3U < (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__y_offset_r)) 
                & (0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__x_offset_r))) 
               & ((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r)) 
                    | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                   | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                  | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r)))) 
              << 4U));
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment 
        = ((0x5fU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment)) 
           | ((((3U < (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__y_offset_r)) 
                & (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__x_offset_r))) 
               & (((((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r)) 
                         | (1U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                        | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                       | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                      | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                     | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                    | (7U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r)))) 
              << 5U));
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment 
        = ((0x3fU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment)) 
           | (((6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__y_offset_r)) 
               & ((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r)) 
                      | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                     | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                    | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                   | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r))) 
                  | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r)))) 
              << 6U));
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment 
        = ((0x7eU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment)) 
           | ((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__y_offset_r)) 
              & ((((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r)) 
                       | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                      | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                     | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                    | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                   | (7U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                  | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                 | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r)))));
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment 
        = ((0x7dU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment)) 
           | ((((3U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__y_offset_r)) 
                & (0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__x_offset_r))) 
               & ((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r)) 
                      | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                     | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                    | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r)))) 
              << 1U));
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment 
        = ((0x7bU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment)) 
           | ((((3U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__y_offset_r)) 
                & (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__x_offset_r))) 
               & ((((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r)) 
                        | (1U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                       | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                      | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                     | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                    | (7U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r)))) 
              << 2U));
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment 
        = ((0x77U & (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment)) 
           | (((3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__y_offset_r)) 
               & (((((((2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r)) 
                       | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                      | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                     | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                    | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r)))) 
              << 3U));
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment 
        = ((0x6fU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment)) 
           | ((((3U < (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__y_offset_r)) 
                & (0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__x_offset_r))) 
               & ((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r)) 
                    | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                   | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                  | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r)))) 
              << 4U));
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment 
        = ((0x5fU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment)) 
           | ((((3U < (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__y_offset_r)) 
                & (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__x_offset_r))) 
               & (((((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r)) 
                         | (1U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                        | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                       | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                      | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                     | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                    | (7U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r)))) 
              << 5U));
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment 
        = ((0x3fU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment)) 
           | (((6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__y_offset_r)) 
               & ((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r)) 
                      | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                     | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                    | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                   | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r))) 
                  | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r)))) 
              << 6U));
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment 
        = ((0x7eU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment)) 
           | ((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__y_offset_r)) 
              & ((((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r)) 
                       | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                      | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                     | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                    | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                   | (7U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                  | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                 | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r)))));
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment 
        = ((0x7dU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment)) 
           | ((((3U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__y_offset_r)) 
                & (0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__x_offset_r))) 
               & ((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r)) 
                      | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                     | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                    | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r)))) 
              << 1U));
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment 
        = ((0x7bU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment)) 
           | ((((3U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__y_offset_r)) 
                & (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__x_offset_r))) 
               & ((((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r)) 
                        | (1U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                       | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                      | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                     | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                    | (7U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r)))) 
              << 2U));
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment 
        = ((0x77U & (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment)) 
           | (((3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__y_offset_r)) 
               & (((((((2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r)) 
                       | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                      | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                     | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                    | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r)))) 
              << 3U));
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment 
        = ((0x6fU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment)) 
           | ((((3U < (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__y_offset_r)) 
                & (0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__x_offset_r))) 
               & ((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r)) 
                    | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                   | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                  | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r)))) 
              << 4U));
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment 
        = ((0x5fU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment)) 
           | ((((3U < (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__y_offset_r)) 
                & (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__x_offset_r))) 
               & (((((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r)) 
                         | (1U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                        | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                       | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                      | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                     | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                    | (7U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r)))) 
              << 5U));
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment 
        = ((0x3fU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment)) 
           | (((6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__y_offset_r)) 
               & ((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r)) 
                      | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                     | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                    | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                   | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r))) 
                  | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r)))) 
              << 6U));
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment 
        = ((0x7eU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment)) 
           | ((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__y_offset_r)) 
              & ((((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r)) 
                       | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                      | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                     | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                    | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                   | (7U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                  | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                 | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r)))));
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment 
        = ((0x7dU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment)) 
           | ((((3U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__y_offset_r)) 
                & (0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__x_offset_r))) 
               & ((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r)) 
                      | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                     | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                    | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r)))) 
              << 1U));
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment 
        = ((0x7bU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment)) 
           | ((((3U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__y_offset_r)) 
                & (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__x_offset_r))) 
               & ((((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r)) 
                        | (1U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                       | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                      | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                     | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                    | (7U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r)))) 
              << 2U));
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment 
        = ((0x77U & (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment)) 
           | (((3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__y_offset_r)) 
               & (((((((2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r)) 
                       | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                      | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                     | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                    | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r)))) 
              << 3U));
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment 
        = ((0x6fU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment)) 
           | ((((3U < (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__y_offset_r)) 
                & (0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__x_offset_r))) 
               & ((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r)) 
                    | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                   | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                  | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r)))) 
              << 4U));
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment 
        = ((0x5fU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment)) 
           | ((((3U < (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__y_offset_r)) 
                & (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__x_offset_r))) 
               & (((((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r)) 
                         | (1U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                        | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                       | (4U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                      | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                     | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                    | (7U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                   | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                  | (9U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r)))) 
              << 5U));
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment 
        = ((0x3fU & (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment)) 
           | (((6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__y_offset_r)) 
               & ((((((0U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r)) 
                      | (2U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                     | (3U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                    | (5U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                   | (6U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r))) 
                  | (8U == (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r)))) 
              << 6U));
    vlSymsp->TOP__top_dino__top.button_up = (0U != (IData)(vlSymsp->TOP__top_dino__top.button_up_debounce__DOT__counter));
    vlSymsp->TOP__top_dino__top.vpos = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos) 
                                                 >> 2U));
    vlSymsp->TOP__top_dino__top.button_down = (0U != (IData)(vlSymsp->TOP__top_dino__top.button_down_debounce__DOT__counter));
    vlSymsp->TOP__top_dino__top.game_tick_60hz = ((0U 
                                                   == (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos)) 
                                                  & (0U 
                                                     == (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hpos)));
    vlSymsp->TOP__top_dino__top.__Vcellout__graphics_inst__o_game_tick_20hz 
        = ((1U == (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__frame_counter)) 
           & (IData)(vlSymsp->TOP__top_dino__top.game_tick_60hz));
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__rom_x 
        = (0xfU & (IData)(vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__x_offset_r));
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__rom_y 
        = (0xfU & (IData)(vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__y_offset_r));
    vlSymsp->TOP__top_dino__top.obs_rom_counter_1 = 
        (((IData)(vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__rom_y) 
          << 4U) | (IData)(vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__rom_x));
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__rom_x 
        = (0xfU & (IData)(vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__x_offset_r));
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__rom_y 
        = (0xfU & (IData)(vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__y_offset_r));
    vlSymsp->TOP__top_dino__top.obs_rom_counter_2 = 
        (((IData)(vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__rom_y) 
          << 4U) | (IData)(vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__rom_x));
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__rom_x 
        = (7U & (IData)(vlSymsp->TOP__top_dino__top.dino_inst__DOT__x_offset_r));
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__rom_y 
        = (7U & (IData)(vlSymsp->TOP__top_dino__top.dino_inst__DOT__y_offset_r));
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__rom_x 
        = (7U & (IData)(vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__x_offset_r));
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__rom_y 
        = (7U & (IData)(vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__y_offset_r));
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__game_over 
        = (5U == (IData)(vlSymsp->TOP__top_dino__top.game_state));
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vsync 
        = ((0x1eaU <= (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos)) 
           & (0x1ebU >= (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos)));
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hsync 
        = ((0x290U <= (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hpos)) 
           & (0x2efU >= (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hpos)));
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__display_on 
        = ((0x280U > (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hpos)) 
           & (0x1e0U > (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos)));
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__i_ypos 
        = vlSymsp->TOP__top_dino__top.player_position;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__wave_out 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__jump_sound;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__wave_out 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__game_over_sound;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__player_position 
        = vlSymsp->TOP__top_dino__top.player_position;
    vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_xnor 
        = (1U & (((((IData)(vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_lfsr) 
                    >> 7U) ^ ~ ((IData)(vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_lfsr) 
                                >> 5U)) ^ ~ ((IData)(vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_lfsr) 
                                             >> 4U)) 
                 ^ ~ ((IData)(vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_lfsr) 
                      >> 3U)));
    vlSymsp->TOP__top_dino__top.rng = vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_lfsr;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__next_state 
        = ((0U == (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__state))
            ? ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__active)
                ? 1U : 0U) : ((1U == (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__state))
                               ? ((0x1eU == (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                   ? 2U : 1U) : 0U));
    vlSymsp->TOP__top_dino__top.__Vtableidx2 = (((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__active) 
                                                 << 7U) 
                                                | (((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                                    << 2U) 
                                                   | (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__state)));
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__next_state 
        = vlSymsp->TOP__top_dino__top.__Vtable2_audio_inst__DOT__i_over__DOT__next_state
        [vlSymsp->TOP__top_dino__top.__Vtableidx2];
    vlSymsp->TOP__top_dino__top.button_up_debounce__DOT__countdown_en 
        = vlSymsp->TOP__top_dino__top.debounce_countdown_en;
    vlSymsp->TOP__top_dino__top.button_down_debounce__DOT__countdown_en 
        = vlSymsp->TOP__top_dino__top.debounce_countdown_en;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_vpos_5_r 
        = vlSymsp->TOP__top_dino__top.debounce_countdown_en;
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num 
        = (0xfU & ((IData)(vlSymsp->TOP__top_dino__top.score) 
                   >> 0U));
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num 
        = (0xfU & ((IData)(vlSymsp->TOP__top_dino__top.score) 
                   >> 4U));
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num 
        = (0xfU & ((IData)(vlSymsp->TOP__top_dino__top.score) 
                   >> 8U));
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num 
        = (0xfU & ((IData)(vlSymsp->TOP__top_dino__top.score) 
                   >> 0xcU));
    vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score 
        = vlSymsp->TOP__top_dino__top.score;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_hsync 
        = vlSymsp->TOP__top_dino__top.hsync;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_vsync 
        = vlSymsp->TOP__top_dino__top.vsync;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_blue 
        = vlSymsp->TOP__top_dino__top.B;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_red 
        = vlSymsp->TOP__top_dino__top.R;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_green 
        = vlSymsp->TOP__top_dino__top.G;
    vlSymsp->TOP__top_dino__top.uo_out = (((IData)(vlSymsp->TOP__top_dino__top.hsync) 
                                           << 7U) | 
                                          ((0x40U & 
                                            ((IData)(vlSymsp->TOP__top_dino__top.B) 
                                             << 6U)) 
                                           | ((0x20U 
                                               & ((IData)(vlSymsp->TOP__top_dino__top.G) 
                                                  << 5U)) 
                                              | ((0x10U 
                                                  & ((IData)(vlSymsp->TOP__top_dino__top.R) 
                                                     << 4U)) 
                                                 | (((IData)(vlSymsp->TOP__top_dino__top.vsync) 
                                                     << 3U) 
                                                    | ((4U 
                                                        & ((IData)(vlSymsp->TOP__top_dino__top.B) 
                                                           << 1U)) 
                                                       | ((2U 
                                                           & (IData)(vlSymsp->TOP__top_dino__top.G)) 
                                                          | (1U 
                                                             & ((IData)(vlSymsp->TOP__top_dino__top.R) 
                                                                >> 1U)))))))));
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__crash 
        = vlSymsp->TOP__top_dino__top.crash;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_collision 
        = vlSymsp->TOP__top_dino__top.crash;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__game_frozen 
        = vlSymsp->TOP__top_dino__top.game_frozen;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__game_frozen 
        = vlSymsp->TOP__top_dino__top.game_frozen;
    vlSymsp->TOP__top_dino__top.score_module_inst__DOT__game_frozen 
        = vlSymsp->TOP__top_dino__top.game_frozen;
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__i_hpos 
        = vlSymsp->TOP__top_dino__top.hpos;
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__x_offset 
        = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.hpos) 
                    - (IData)(0x78U)));
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__i_hpos 
        = vlSymsp->TOP__top_dino__top.hpos;
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__x_offset 
        = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.hpos) 
                    - (IData)(0x6eU)));
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__i_hpos 
        = vlSymsp->TOP__top_dino__top.hpos;
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__x_offset 
        = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.hpos) 
                    - (IData)(0x64U)));
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__i_hpos 
        = vlSymsp->TOP__top_dino__top.hpos;
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__x_offset 
        = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.hpos) 
                    - (IData)(0x5aU)));
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__i_hpos 
        = vlSymsp->TOP__top_dino__top.hpos;
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__x_offset 
        = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.hpos) 
                    - (IData)(6U)));
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__i_hpos 
        = vlSymsp->TOP__top_dino__top.hpos;
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__i_hpos 
        = vlSymsp->TOP__top_dino__top.hpos;
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__i_hpos 
        = vlSymsp->TOP__top_dino__top.hpos;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_hpos 
        = vlSymsp->TOP__top_dino__top.hpos;
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__x_offset 
        = (0xffU & ((IData)(0x10U) + ((IData)(vlSymsp->TOP__top_dino__top.hpos) 
                                      - (IData)(vlSymsp->TOP__top_dino__top.obstacle1_pos))));
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__x_offset 
        = (0xffU & ((IData)(0x10U) + ((IData)(vlSymsp->TOP__top_dino__top.hpos) 
                                      - (IData)(vlSymsp->TOP__top_dino__top.obstacle2_pos))));
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__x_offset 
        = (0xffU & ((IData)(8U) + ((IData)(vlSymsp->TOP__top_dino__top.hpos) 
                                   - (IData)(vlSymsp->TOP__top_dino__top.bg_object_pos))));
    vlSymsp->TOP__top_dino__top.score_color_1 = ((0U 
                                                  != (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment)) 
                                                 & (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__in_sprite));
    vlSymsp->TOP__top_dino__top.score_color_2 = ((0U 
                                                  != (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment)) 
                                                 & (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__in_sprite));
    vlSymsp->TOP__top_dino__top.score_color_3 = ((0U 
                                                  != (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment)) 
                                                 & (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__in_sprite));
    vlSymsp->TOP__top_dino__top.score_color_4 = ((0U 
                                                  != (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment)) 
                                                 & (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__in_sprite));
    vlSymsp->TOP__top_dino__top.button_up_debounce__DOT__button_out 
        = vlSymsp->TOP__top_dino__top.button_up;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__button_start 
        = vlSymsp->TOP__top_dino__top.button_up;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__button_up 
        = vlSymsp->TOP__top_dino__top.button_up;
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__i_vpos 
        = vlSymsp->TOP__top_dino__top.vpos;
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__y_offset 
        = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.vpos) 
                    - (IData)(1U)));
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__i_vpos 
        = vlSymsp->TOP__top_dino__top.vpos;
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__y_offset 
        = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.vpos) 
                    - (IData)(1U)));
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__i_vpos 
        = vlSymsp->TOP__top_dino__top.vpos;
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__y_offset 
        = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.vpos) 
                    - (IData)(1U)));
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__i_vpos 
        = vlSymsp->TOP__top_dino__top.vpos;
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__y_offset 
        = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.vpos) 
                    - (IData)(1U)));
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__i_vpos 
        = vlSymsp->TOP__top_dino__top.vpos;
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__i_vpos 
        = vlSymsp->TOP__top_dino__top.vpos;
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__y_offset 
        = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.vpos) 
                    - (IData)(0x2aU)));
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__i_vpos 
        = vlSymsp->TOP__top_dino__top.vpos;
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__y_offset 
        = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.vpos) 
                    - (IData)(0x2aU)));
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__i_vpos 
        = vlSymsp->TOP__top_dino__top.vpos;
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__y_offset 
        = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.vpos) 
                    - (IData)(0xfU)));
    vlSymsp->TOP__top_dino__top.bg_line_inst__DOT__i_vpos 
        = vlSymsp->TOP__top_dino__top.vpos;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_vpos 
        = vlSymsp->TOP__top_dino__top.vpos;
    vlSymsp->TOP__top_dino__top.color_bg_line = 0U;
    if ((0x3bU == (IData)(vlSymsp->TOP__top_dino__top.vpos))) {
        vlSymsp->TOP__top_dino__top.color_bg_line = 1U;
    }
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__y_offset 
        = (0xffU & (((IData)(vlSymsp->TOP__top_dino__top.vpos) 
                     - ((0xc0U & ((- (IData)((1U & 
                                              ((IData)(vlSymsp->TOP__top_dino__top.player_position) 
                                               >> 5U)))) 
                                  << 6U)) | (IData)(vlSymsp->TOP__top_dino__top.player_position))) 
                    - (IData)(0x32U)));
    vlSymsp->TOP__top_dino__top.button_down_debounce__DOT__button_out 
        = vlSymsp->TOP__top_dino__top.button_down;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__button_down 
        = vlSymsp->TOP__top_dino__top.button_down;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__active_vel 
        = ((IData)(vlSymsp->TOP__top_dino__top.button_down)
            ? 6U : (0xfU & (IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__velocity)));
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__game_tick 
        = vlSymsp->TOP__top_dino__top.game_tick_60hz;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_game_tick_60hz 
        = vlSymsp->TOP__top_dino__top.game_tick_60hz;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_game_tick_20hz 
        = vlSymsp->TOP__top_dino__top.__Vcellout__graphics_inst__o_game_tick_20hz;
    vlSymsp->TOP__top_dino__top.game_tick_20hz = (((IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__game_tick_r) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__top_dino__top.__Vcellout__graphics_inst__o_game_tick_20hz));
    vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__i_rom_counter 
        = vlSymsp->TOP__top_dino__top.obs_rom_counter_1;
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__o_rom_counter 
        = vlSymsp->TOP__top_dino__top.obs_rom_counter_1;
    vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_y 
        = (0xfU & ((IData)(vlSymsp->TOP__top_dino__top.obs_rom_counter_1) 
                   >> 4U));
    vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_x 
        = (0xfU & (IData)(vlSymsp->TOP__top_dino__top.obs_rom_counter_1));
    vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__i_rom_counter 
        = vlSymsp->TOP__top_dino__top.obs_rom_counter_2;
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__o_rom_counter 
        = vlSymsp->TOP__top_dino__top.obs_rom_counter_2;
    vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_y 
        = (0xfU & ((IData)(vlSymsp->TOP__top_dino__top.obs_rom_counter_2) 
                   >> 4U));
    vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_x 
        = (0xfU & (IData)(vlSymsp->TOP__top_dino__top.obs_rom_counter_2));
    vlSymsp->TOP__top_dino__top.dino_rom_counter = 
        (((IData)(vlSymsp->TOP__top_dino__top.dino_inst__DOT__rom_y) 
          << 3U) | (IData)(vlSymsp->TOP__top_dino__top.dino_inst__DOT__rom_x));
    vlSymsp->TOP__top_dino__top.bg_objects_rom_counter 
        = (((IData)(vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__rom_y) 
            << 3U) | (IData)(vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__rom_x));
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__game_over 
        = vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__game_over;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__vsync 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vsync;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__hsync 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hsync;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__display_on 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__display_on;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__position 
        = vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__player_position;
    vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__lfsr_data 
        = vlSymsp->TOP__top_dino__top.rng;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__rng 
        = vlSymsp->TOP__top_dino__top.rng;
    vlSymsp->TOP__top_dino__top.bg_object_inst__DOT__rng 
        = vlSymsp->TOP__top_dino__top.rng;
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__o_score_color 
        = vlSymsp->TOP__top_dino__top.score_color_1;
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__o_score_color 
        = vlSymsp->TOP__top_dino__top.score_color_2;
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__o_score_color 
        = vlSymsp->TOP__top_dino__top.score_color_3;
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__o_score_color 
        = vlSymsp->TOP__top_dino__top.score_color_4;
    vlSymsp->TOP__top_dino__top.__Vcellinp__graphics_inst__i_color_score 
        = ((((IData)(vlSymsp->TOP__top_dino__top.score_color_1) 
             | (IData)(vlSymsp->TOP__top_dino__top.score_color_2)) 
            | (IData)(vlSymsp->TOP__top_dino__top.score_color_3)) 
           | (IData)(vlSymsp->TOP__top_dino__top.score_color_4));
    vlSymsp->TOP__top_dino__top.bg_line_inst__DOT__o_color_bg 
        = vlSymsp->TOP__top_dino__top.color_bg_line;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__button_down 
        = vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__button_down;
    vlSymsp->TOP__top_dino__top.bg_object_inst__DOT__game_tick 
        = (1U & ((IData)(vlSymsp->TOP__top_dino__top.game_tick_20hz) 
                 >> 0U));
    vlSymsp->TOP__top_dino__top.score_module_inst__DOT__game_tick 
        = (1U & ((IData)(vlSymsp->TOP__top_dino__top.game_tick_20hz) 
                 >> 0U));
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__game_tick 
        = vlSymsp->TOP__top_dino__top.game_tick_20hz;
    vlSymsp->TOP__top_dino__top.game_start_pulse = 
        (((IData)(vlSymsp->TOP__top_dino__top.game_frozen) 
          & (IData)(vlSymsp->TOP__top_dino__top.game_tick_20hz)) 
         & (IData)(vlSymsp->TOP__top_dino__top.button_up));
    vlSymsp->TOP__top_dino__top.game_over_pulse = (
                                                   ((5U 
                                                     != (IData)(vlSymsp->TOP__top_dino__top.game_state)) 
                                                    & (IData)(vlSymsp->TOP__top_dino__top.game_tick_20hz)) 
                                                   & (IData)(vlSymsp->TOP__top_dino__top.crash));
    vlSymsp->TOP__top_dino__top.jump_pulse = (((IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__running) 
                                               & (IData)(vlSymsp->TOP__top_dino__top.game_tick_20hz)) 
                                              & (IData)(vlSymsp->TOP__top_dino__top.button_up));
    if ((2U & (IData)(vlSymsp->TOP__top_dino__top.game_tick_20hz))) {
        vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__adder_in1 
            = (0xfU & (IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__active_vel));
        vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__adder_in2 
            = vlSymsp->TOP__top_dino__top.player_position;
    } else {
        vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__adder_in1 = 1U;
        vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__adder_in2 
            = ((0x30U & ((- (IData)((1U & ((IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__velocity) 
                                           >> 3U)))) 
                         << 4U)) | (IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__velocity));
    }
    vlSymsp->TOP__top_dino__top.obs_color_1 = (1U & 
                                               ((4U 
                                                 & (IData)(vlSymsp->TOP__top_dino__top.obstacle1_type))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSymsp->TOP__top_dino__top.obstacle1_type))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__top_dino__top.obstacle1_type))
                                                   ? 
                                                  (vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high
                                                   [vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_y] 
                                                   >> (IData)(vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_x))
                                                   : 
                                                  (vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low
                                                   [vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_y] 
                                                   >> (IData)(vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_x)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__top_dino__top.obstacle1_type))
                                                   ? 
                                                  (vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin
                                                   [vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_y] 
                                                   >> (IData)(vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_x))
                                                   : 
                                                  (vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2
                                                   [vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_y] 
                                                   >> (IData)(vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_x))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSymsp->TOP__top_dino__top.obstacle1_type))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__top_dino__top.obstacle1_type))
                                                   ? 
                                                  (vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1
                                                   [vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_y] 
                                                   >> (IData)(vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_x))
                                                   : 
                                                  (vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2
                                                   [vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_y] 
                                                   >> (IData)(vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_x)))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__top_dino__top.obstacle1_type) 
                                                  & (vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3
                                                     [vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_y] 
                                                     >> (IData)(vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_x))))));
    vlSymsp->TOP__top_dino__top.obs_color_2 = (1U & 
                                               ((4U 
                                                 & (IData)(vlSymsp->TOP__top_dino__top.obstacle2_type))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSymsp->TOP__top_dino__top.obstacle2_type))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__top_dino__top.obstacle2_type))
                                                   ? 
                                                  (vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high
                                                   [vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_y] 
                                                   >> (IData)(vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_x))
                                                   : 
                                                  (vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low
                                                   [vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_y] 
                                                   >> (IData)(vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_x)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__top_dino__top.obstacle2_type))
                                                   ? 
                                                  (vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin
                                                   [vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_y] 
                                                   >> (IData)(vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_x))
                                                   : 
                                                  (vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2
                                                   [vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_y] 
                                                   >> (IData)(vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_x))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSymsp->TOP__top_dino__top.obstacle2_type))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__top_dino__top.obstacle2_type))
                                                   ? 
                                                  (vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1
                                                   [vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_y] 
                                                   >> (IData)(vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_x))
                                                   : 
                                                  (vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2
                                                   [vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_y] 
                                                   >> (IData)(vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_x)))
                                                  : 
                                                 ((IData)(vlSymsp->TOP__top_dino__top.obstacle2_type) 
                                                  & (vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3
                                                     [vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_y] 
                                                     >> (IData)(vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_x))))));
    vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__i_rom_counter 
        = vlSymsp->TOP__top_dino__top.dino_rom_counter;
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__o_rom_counter 
        = vlSymsp->TOP__top_dino__top.dino_rom_counter;
    vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_y 
        = (7U & ((IData)(vlSymsp->TOP__top_dino__top.dino_rom_counter) 
                 >> 3U));
    vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_x 
        = (7U & (IData)(vlSymsp->TOP__top_dino__top.dino_rom_counter));
    vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__i_rom_counter 
        = vlSymsp->TOP__top_dino__top.bg_objects_rom_counter;
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__o_rom_counter 
        = vlSymsp->TOP__top_dino__top.bg_objects_rom_counter;
    vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__rom_y 
        = (7U & ((IData)(vlSymsp->TOP__top_dino__top.bg_objects_rom_counter) 
                 >> 3U));
    vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__rom_x 
        = (7U & (IData)(vlSymsp->TOP__top_dino__top.bg_objects_rom_counter));
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__i_color_score 
        = vlSymsp->TOP__top_dino__top.__Vcellinp__graphics_inst__i_color_score;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__game_tick 
        = vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__game_tick;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__game_start_pulse 
        = vlSymsp->TOP__top_dino__top.game_start_pulse;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__game_start 
        = vlSymsp->TOP__top_dino__top.game_start_pulse;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__i_game_start_pulse 
        = vlSymsp->TOP__top_dino__top.game_start_pulse;
    vlSymsp->TOP__top_dino__top.score_module_inst__DOT__game_start 
        = vlSymsp->TOP__top_dino__top.game_start_pulse;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__game_over_pulse 
        = vlSymsp->TOP__top_dino__top.game_over_pulse;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__game_is_over 
        = vlSymsp->TOP__top_dino__top.game_over_pulse;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__jump_pulse 
        = vlSymsp->TOP__top_dino__top.jump_pulse;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__jump_pulse 
        = vlSymsp->TOP__top_dino__top.jump_pulse;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__adder_res 
        = (0x3fU & (((0x30U & ((- (IData)((1U & ((IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__velocity) 
                                                 >> 3U)))) 
                               << 4U)) | (IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__adder_in1)) 
                    + (IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__adder_in2)));
    vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__o_sprite_color 
        = vlSymsp->TOP__top_dino__top.obs_color_1;
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__i_sprite_color 
        = vlSymsp->TOP__top_dino__top.obs_color_1;
    vlSymsp->TOP__top_dino__top.color_obs_1 = 0U;
    if (vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__in_sprite) {
        vlSymsp->TOP__top_dino__top.color_obs_1 = vlSymsp->TOP__top_dino__top.obs_color_1;
    }
    vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__o_sprite_color 
        = vlSymsp->TOP__top_dino__top.obs_color_2;
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__i_sprite_color 
        = vlSymsp->TOP__top_dino__top.obs_color_2;
    vlSymsp->TOP__top_dino__top.color_obs_2 = 0U;
    if (vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__in_sprite) {
        vlSymsp->TOP__top_dino__top.color_obs_2 = vlSymsp->TOP__top_dino__top.obs_color_2;
    }
    vlSymsp->TOP__top_dino__top.dino_color = (1U & 
                                              ((4U 
                                                & (IData)(vlSymsp->TOP__top_dino__top.game_state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__top_dino__top.game_state))
                                                    ? 
                                                   (vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon
                                                    [vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_y] 
                                                    >> (IData)(vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_x))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__top_dino__top.game_state))
                                                     ? 
                                                    (vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon
                                                     [vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_y] 
                                                     >> (IData)(vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_x))
                                                     : 
                                                    (vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_duck
                                                     [vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_y] 
                                                     >> (IData)(vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_x))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSymsp->TOP__top_dino__top.game_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__top_dino__top.game_state))
                                                     ? 
                                                    (vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_2
                                                     [vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_y] 
                                                     >> (IData)(vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_x))
                                                     : 
                                                    (vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_1
                                                     [vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_y] 
                                                     >> (IData)(vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_x)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__top_dino__top.game_state))
                                                     ? 
                                                    (vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon
                                                     [vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_y] 
                                                     >> (IData)(vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_x))
                                                     : 
                                                    (vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon
                                                     [vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_y] 
                                                     >> (IData)(vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_x))))));
    vlSymsp->TOP__top_dino__top.bg_object_color = (1U 
                                                   & (vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__icon_cloud
                                                      [vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__rom_y] 
                                                      >> (IData)(vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__rom_x)));
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__is_over 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__game_is_over;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__jump_pulse 
        = vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__jump_pulse;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__sound_trigger 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__jump_pulse;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__jump_done 
        = (1U & (~ ((IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__adder_res) 
                    >> 5U)));
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__o_color_obs 
        = vlSymsp->TOP__top_dino__top.color_obs_1;
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__o_color_obs 
        = vlSymsp->TOP__top_dino__top.color_obs_2;
    vlSymsp->TOP__top_dino__top.__Vcellinp__graphics_inst__i_color_obstacle 
        = ((IData)(vlSymsp->TOP__top_dino__top.color_obs_1) 
           | (IData)(vlSymsp->TOP__top_dino__top.color_obs_2));
    vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__o_sprite_color 
        = vlSymsp->TOP__top_dino__top.dino_color;
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__i_sprite_color 
        = vlSymsp->TOP__top_dino__top.dino_color;
    vlSymsp->TOP__top_dino__top.color_dino = 0U;
    if (vlSymsp->TOP__top_dino__top.dino_inst__DOT__in_sprite) {
        vlSymsp->TOP__top_dino__top.color_dino = vlSymsp->TOP__top_dino__top.dino_color;
    }
    vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__o_sprite_color 
        = vlSymsp->TOP__top_dino__top.bg_object_color;
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__i_sprite_color 
        = vlSymsp->TOP__top_dino__top.bg_object_color;
    vlSymsp->TOP__top_dino__top.color_bg_object = 0U;
    if (vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__in_sprite) {
        vlSymsp->TOP__top_dino__top.color_bg_object 
            = vlSymsp->TOP__top_dino__top.bg_object_color;
    }
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__jump_done 
        = vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__jump_done;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__i_color_obstacle 
        = vlSymsp->TOP__top_dino__top.__Vcellinp__graphics_inst__i_color_obstacle;
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__o_color_dino 
        = vlSymsp->TOP__top_dino__top.color_dino;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__i_color_player 
        = vlSymsp->TOP__top_dino__top.color_dino;
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__o_color_bg 
        = vlSymsp->TOP__top_dino__top.color_bg_object;
    vlSymsp->TOP__top_dino__top.__Vcellinp__graphics_inst__i_color_background 
        = ((IData)(vlSymsp->TOP__top_dino__top.color_bg_object) 
           | (IData)(vlSymsp->TOP__top_dino__top.color_bg_line));
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__i_color_background 
        = vlSymsp->TOP__top_dino__top.__Vcellinp__graphics_inst__i_color_background;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__is_colored 
        = ((((IData)(vlSymsp->TOP__top_dino__top.__Vcellinp__graphics_inst__i_color_obstacle) 
             | (IData)(vlSymsp->TOP__top_dino__top.color_dino)) 
            | (IData)(vlSymsp->TOP__top_dino__top.__Vcellinp__graphics_inst__i_color_background)) 
           | (IData)(vlSymsp->TOP__top_dino__top.__Vcellinp__graphics_inst__i_color_score));
}

void Vtop_dino_tt_um_uwasic_dinogame::_settle__TOP__top_dino__top__4(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_dino_tt_um_uwasic_dinogame::_settle__TOP__top_dino__top__4\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__enable 
        = vlSymsp->TOP__top_dino__top.ena;
    vlSymsp->TOP__top_dino__top.button_up_debounce__DOT__button_in 
        = (1U & ((IData)(vlSymsp->TOP__top_dino__top.ui_in) 
                 >> 0U));
    vlSymsp->TOP__top_dino__top.button_down_debounce__DOT__button_in 
        = (1U & ((IData)(vlSymsp->TOP__top_dino__top.ui_in) 
                 >> 1U));
    vlSymsp->TOP__top_dino__top.button_up_debounce__DOT__rst_n 
        = vlSymsp->TOP__top_dino__top.rst_n;
    vlSymsp->TOP__top_dino__top.button_down_debounce__DOT__rst_n 
        = vlSymsp->TOP__top_dino__top.rst_n;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__rst_n 
        = vlSymsp->TOP__top_dino__top.rst_n;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__rst_n 
        = vlSymsp->TOP__top_dino__top.rst_n;
    vlSymsp->TOP__top_dino__top.bg_object_inst__DOT__rst_n 
        = vlSymsp->TOP__top_dino__top.rst_n;
    vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rst 
        = (1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)));
    vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rst 
        = (1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)));
    vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rst 
        = (1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)));
    vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__rst 
        = (1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)));
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__rst 
        = (1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)));
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__rst 
        = (1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)));
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__rst 
        = (1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)));
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__rst 
        = (1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)));
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__rst 
        = (1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)));
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__rst 
        = (1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)));
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__rst 
        = (1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)));
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__rst 
        = (1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)));
    vlSymsp->TOP__top_dino__top.score_module_inst__DOT__rst_n 
        = vlSymsp->TOP__top_dino__top.rst_n;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__hmaxxed 
        = (1U & ((0x31fU == (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hpos)) 
                 | (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n))));
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__vmaxxed 
        = (1U & ((0x20cU == (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos)) 
                 | (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n))));
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__rst 
        = (1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)));
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__physics_rst_n 
        = ((IData)(vlSymsp->TOP__top_dino__top.rst_n) 
           & (~ (((5U == (IData)(vlSymsp->TOP__top_dino__top.game_state)) 
                  & (IData)(vlSymsp->TOP__top_dino__top.game_tick_20hz)) 
                 & (IData)(vlSymsp->TOP__top_dino__top.button_up))));
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__rst_n 
        = vlSymsp->TOP__top_dino__top.rst_n;
    vlSymsp->TOP__top_dino__top.button_up_debounce__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.button_down_debounce__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.bg_object_inst__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.score_module_inst__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__clk 
        = vlSymsp->TOP__top_dino__top.clk;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__reset 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__rst;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__rst_n 
        = vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__physics_rst_n;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__rst_n 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__rst_n;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__rst_n 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__rst_n;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__clk 
        = vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__clk;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__clk 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__clk;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__clk 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__clk;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__clk 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__clk;
}

void Vtop_dino_tt_um_uwasic_dinogame::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_dino_tt_um_uwasic_dinogame::_ctor_var_reset\n"); );
    // Body
    ui_in = 0;
    uo_out = 0;
    uio_in = 0;
    uio_out = 0;
    uio_oe = 0;
    ena = 0;
    clk = 0;
    rst_n = 0;
    game_tick_60hz = 0;
    game_tick_20hz = 0;
    debounce_countdown_en = 0;
    button_up = 0;
    button_down = 0;
    crash = 0;
    player_position = 0;
    game_start_pulse = 0;
    game_over_pulse = 0;
    game_frozen = 0;
    jump_pulse = 0;
    game_state = 0;
    obstacle1_pos = 0;
    obstacle2_pos = 0;
    obstacle1_type = 0;
    obstacle2_type = 0;
    bg_object_pos = 0;
    rng = 0;
    hsync = 0;
    vsync = 0;
    R = 0;
    G = 0;
    B = 0;
    hpos = 0;
    vpos = 0;
    color_dino = 0;
    color_obs_1 = 0;
    color_obs_2 = 0;
    color_bg_object = 0;
    color_bg_line = 0;
    obs_color_1 = 0;
    obs_color_2 = 0;
    bg_object_color = 0;
    dino_color = 0;
    score_color_1 = 0;
    score_color_2 = 0;
    score_color_3 = 0;
    score_color_4 = 0;
    dino_rom_counter = 0;
    obs_rom_counter_1 = 0;
    obs_rom_counter_2 = 0;
    bg_objects_rom_counter = 0;
    score = 0;
    __Vcellout__graphics_inst__o_game_tick_20hz = 0;
    __Vcellinp__graphics_inst__i_color_score = 0;
    __Vcellinp__graphics_inst__i_color_obstacle = 0;
    __Vcellinp__graphics_inst__i_color_background = 0;
    __Vcellout__audio_inst__sound = 0;
    _unused = 0;
    button_up_debounce__DOT__clk = 0;
    button_up_debounce__DOT__rst_n = 0;
    button_up_debounce__DOT__countdown_en = 0;
    button_up_debounce__DOT__button_in = 0;
    button_up_debounce__DOT__button_out = 0;
    button_up_debounce__DOT__counter = 0;
    button_down_debounce__DOT__clk = 0;
    button_down_debounce__DOT__rst_n = 0;
    button_down_debounce__DOT__countdown_en = 0;
    button_down_debounce__DOT__button_in = 0;
    button_down_debounce__DOT__button_out = 0;
    button_down_debounce__DOT__counter = 0;
    lfsr_inst__DOT__clk = 0;
    lfsr_inst__DOT__enable = 0;
    lfsr_inst__DOT__lfsr_data = 0;
    lfsr_inst__DOT__r_lfsr = 0;
    lfsr_inst__DOT__r_xnor = 0;
    player_constroller_inst__DOT__clk = 0;
    player_constroller_inst__DOT__rst_n = 0;
    player_constroller_inst__DOT__game_tick = 0;
    player_constroller_inst__DOT__button_start = 0;
    player_constroller_inst__DOT__button_up = 0;
    player_constroller_inst__DOT__button_down = 0;
    player_constroller_inst__DOT__crash = 0;
    player_constroller_inst__DOT__player_position = 0;
    player_constroller_inst__DOT__game_frozen = 0;
    player_constroller_inst__DOT__game_start_pulse = 0;
    player_constroller_inst__DOT__game_over_pulse = 0;
    player_constroller_inst__DOT__jump_pulse = 0;
    player_constroller_inst__DOT__game_state = 0;
    player_constroller_inst__DOT__running = 0;
    player_constroller_inst__DOT__jump_done = 0;
    player_constroller_inst__DOT__physics_rst_n = 0;
    player_constroller_inst__DOT__game_over = 0;
    player_constroller_inst__DOT__u_player_physics__DOT__clk = 0;
    player_constroller_inst__DOT__u_player_physics__DOT__rst_n = 0;
    player_constroller_inst__DOT__u_player_physics__DOT__game_tick = 0;
    player_constroller_inst__DOT__u_player_physics__DOT__game_over = 0;
    player_constroller_inst__DOT__u_player_physics__DOT__jump_pulse = 0;
    player_constroller_inst__DOT__u_player_physics__DOT__button_down = 0;
    player_constroller_inst__DOT__u_player_physics__DOT__position = 0;
    player_constroller_inst__DOT__u_player_physics__DOT__jump_done = 0;
    player_constroller_inst__DOT__u_player_physics__DOT__velocity = 0;
    player_constroller_inst__DOT__u_player_physics__DOT__active_vel = 0;
    player_constroller_inst__DOT__u_player_physics__DOT__adder_in1 = 0;
    player_constroller_inst__DOT__u_player_physics__DOT__adder_in2 = 0;
    player_constroller_inst__DOT__u_player_physics__DOT__adder_res = 0;
    obstacles_inst__DOT__clk = 0;
    obstacles_inst__DOT__rst_n = 0;
    obstacles_inst__DOT__game_frozen = 0;
    obstacles_inst__DOT__game_start = 0;
    obstacles_inst__DOT__game_tick = 0;
    obstacles_inst__DOT__rng = 0;
    obstacles_inst__DOT__obstacle1_pos = 0;
    obstacles_inst__DOT__obstacle2_pos = 0;
    obstacles_inst__DOT__obstacle1_type = 0;
    obstacles_inst__DOT__obstacle2_type = 0;
    obstacles_inst__DOT__obstacle1_cross_gen_line_reg = 0;
    obstacles_inst__DOT__obstacle2_cross_gen_line_reg = 0;
    bg_object_inst__DOT__clk = 0;
    bg_object_inst__DOT__rst_n = 0;
    bg_object_inst__DOT__game_tick = 0;
    bg_object_inst__DOT__rng = 0;
    bg_object_inst__DOT__bg_object_pos = 0;
    dino_rom_inst__DOT__clk = 0;
    dino_rom_inst__DOT__rst = 0;
    dino_rom_inst__DOT__i_rom_counter = 0;
    dino_rom_inst__DOT__i_player_state = 0;
    dino_rom_inst__DOT__o_sprite_color = 0;
    dino_rom_inst__DOT__rom_x = 0;
    dino_rom_inst__DOT__rom_y = 0;
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            dino_rom_inst__DOT__icon[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            dino_rom_inst__DOT__icon_run_1[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            dino_rom_inst__DOT__icon_run_2[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            dino_rom_inst__DOT__icon_duck[__Vi0] = 0;
    }}
    obs_rom_inst_1__DOT__clk = 0;
    obs_rom_inst_1__DOT__rst = 0;
    obs_rom_inst_1__DOT__i_rom_counter = 0;
    obs_rom_inst_1__DOT__i_obs_type = 0;
    obs_rom_inst_1__DOT__o_sprite_color = 0;
    obs_rom_inst_1__DOT__rom_x = 0;
    obs_rom_inst_1__DOT__rom_y = 0;
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            obs_rom_inst_1__DOT__icon_cac_3[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            obs_rom_inst_1__DOT__icon_cac_2[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            obs_rom_inst_1__DOT__icon_cac_thick_1[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            obs_rom_inst_1__DOT__icon_cac_thick_2[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            obs_rom_inst_1__DOT__icon_cac_thin[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            obs_rom_inst_1__DOT__icon_bird_low[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            obs_rom_inst_1__DOT__icon_bird_high[__Vi0] = 0;
    }}
    obs_rom_inst_2__DOT__clk = 0;
    obs_rom_inst_2__DOT__rst = 0;
    obs_rom_inst_2__DOT__i_rom_counter = 0;
    obs_rom_inst_2__DOT__i_obs_type = 0;
    obs_rom_inst_2__DOT__o_sprite_color = 0;
    obs_rom_inst_2__DOT__rom_x = 0;
    obs_rom_inst_2__DOT__rom_y = 0;
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            obs_rom_inst_2__DOT__icon_cac_3[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            obs_rom_inst_2__DOT__icon_cac_2[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            obs_rom_inst_2__DOT__icon_cac_thick_1[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            obs_rom_inst_2__DOT__icon_cac_thick_2[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            obs_rom_inst_2__DOT__icon_cac_thin[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            obs_rom_inst_2__DOT__icon_bird_low[__Vi0] = 0;
    }}
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            obs_rom_inst_2__DOT__icon_bird_high[__Vi0] = 0;
    }}
    bg_object_rom_inst__DOT__clk = 0;
    bg_object_rom_inst__DOT__rst = 0;
    bg_object_rom_inst__DOT__i_rom_counter = 0;
    bg_object_rom_inst__DOT__o_sprite_color = 0;
    bg_object_rom_inst__DOT__rom_x = 0;
    bg_object_rom_inst__DOT__rom_y = 0;
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            bg_object_rom_inst__DOT__icon_cloud[__Vi0] = 0;
    }}
    score_inst_1__DOT__clk = 0;
    score_inst_1__DOT__rst = 0;
    score_inst_1__DOT__num = 0;
    score_inst_1__DOT__i_hpos = 0;
    score_inst_1__DOT__i_vpos = 0;
    score_inst_1__DOT__o_score_color = 0;
    score_inst_1__DOT__y_offset = 0;
    score_inst_1__DOT__x_offset = 0;
    score_inst_1__DOT__y_offset_r = 0;
    score_inst_1__DOT__x_offset_r = 0;
    score_inst_1__DOT__num_r = 0;
    score_inst_1__DOT__in_sprite = 0;
    score_inst_1__DOT__segment = 0;
    score_inst_2__DOT__clk = 0;
    score_inst_2__DOT__rst = 0;
    score_inst_2__DOT__num = 0;
    score_inst_2__DOT__i_hpos = 0;
    score_inst_2__DOT__i_vpos = 0;
    score_inst_2__DOT__o_score_color = 0;
    score_inst_2__DOT__y_offset = 0;
    score_inst_2__DOT__x_offset = 0;
    score_inst_2__DOT__y_offset_r = 0;
    score_inst_2__DOT__x_offset_r = 0;
    score_inst_2__DOT__num_r = 0;
    score_inst_2__DOT__in_sprite = 0;
    score_inst_2__DOT__segment = 0;
    score_inst_3__DOT__clk = 0;
    score_inst_3__DOT__rst = 0;
    score_inst_3__DOT__num = 0;
    score_inst_3__DOT__i_hpos = 0;
    score_inst_3__DOT__i_vpos = 0;
    score_inst_3__DOT__o_score_color = 0;
    score_inst_3__DOT__y_offset = 0;
    score_inst_3__DOT__x_offset = 0;
    score_inst_3__DOT__y_offset_r = 0;
    score_inst_3__DOT__x_offset_r = 0;
    score_inst_3__DOT__num_r = 0;
    score_inst_3__DOT__in_sprite = 0;
    score_inst_3__DOT__segment = 0;
    score_inst_4__DOT__clk = 0;
    score_inst_4__DOT__rst = 0;
    score_inst_4__DOT__num = 0;
    score_inst_4__DOT__i_hpos = 0;
    score_inst_4__DOT__i_vpos = 0;
    score_inst_4__DOT__o_score_color = 0;
    score_inst_4__DOT__y_offset = 0;
    score_inst_4__DOT__x_offset = 0;
    score_inst_4__DOT__y_offset_r = 0;
    score_inst_4__DOT__x_offset_r = 0;
    score_inst_4__DOT__num_r = 0;
    score_inst_4__DOT__in_sprite = 0;
    score_inst_4__DOT__segment = 0;
    dino_inst__DOT__clk = 0;
    dino_inst__DOT__rst = 0;
    dino_inst__DOT__i_hpos = 0;
    dino_inst__DOT__i_vpos = 0;
    dino_inst__DOT__o_color_dino = 0;
    dino_inst__DOT__o_rom_counter = 0;
    dino_inst__DOT__i_sprite_color = 0;
    dino_inst__DOT__i_ypos = 0;
    dino_inst__DOT__y_offset = 0;
    dino_inst__DOT__x_offset = 0;
    dino_inst__DOT__in_sprite = 0;
    dino_inst__DOT__y_offset_r = 0;
    dino_inst__DOT__x_offset_r = 0;
    dino_inst__DOT__rom_x = 0;
    dino_inst__DOT__rom_y = 0;
    obs_inst_1__DOT__clk = 0;
    obs_inst_1__DOT__rst = 0;
    obs_inst_1__DOT__i_hpos = 0;
    obs_inst_1__DOT__i_vpos = 0;
    obs_inst_1__DOT__o_color_obs = 0;
    obs_inst_1__DOT__o_rom_counter = 0;
    obs_inst_1__DOT__i_sprite_color = 0;
    obs_inst_1__DOT__i_xpos = 0;
    obs_inst_1__DOT__y_offset = 0;
    obs_inst_1__DOT__x_offset = 0;
    obs_inst_1__DOT__in_sprite = 0;
    obs_inst_1__DOT__y_offset_r = 0;
    obs_inst_1__DOT__x_offset_r = 0;
    obs_inst_1__DOT__rom_x = 0;
    obs_inst_1__DOT__rom_y = 0;
    obs_inst_2__DOT__clk = 0;
    obs_inst_2__DOT__rst = 0;
    obs_inst_2__DOT__i_hpos = 0;
    obs_inst_2__DOT__i_vpos = 0;
    obs_inst_2__DOT__o_color_obs = 0;
    obs_inst_2__DOT__o_rom_counter = 0;
    obs_inst_2__DOT__i_sprite_color = 0;
    obs_inst_2__DOT__i_xpos = 0;
    obs_inst_2__DOT__y_offset = 0;
    obs_inst_2__DOT__x_offset = 0;
    obs_inst_2__DOT__in_sprite = 0;
    obs_inst_2__DOT__y_offset_r = 0;
    obs_inst_2__DOT__x_offset_r = 0;
    obs_inst_2__DOT__rom_x = 0;
    obs_inst_2__DOT__rom_y = 0;
    bg_render_inst__DOT__clk = 0;
    bg_render_inst__DOT__rst = 0;
    bg_render_inst__DOT__i_hpos = 0;
    bg_render_inst__DOT__i_vpos = 0;
    bg_render_inst__DOT__o_color_bg = 0;
    bg_render_inst__DOT__o_rom_counter = 0;
    bg_render_inst__DOT__i_sprite_color = 0;
    bg_render_inst__DOT__i_xpos = 0;
    bg_render_inst__DOT__y_offset = 0;
    bg_render_inst__DOT__x_offset = 0;
    bg_render_inst__DOT__in_sprite = 0;
    bg_render_inst__DOT__y_offset_r = 0;
    bg_render_inst__DOT__x_offset_r = 0;
    bg_render_inst__DOT__rom_x = 0;
    bg_render_inst__DOT__rom_y = 0;
    bg_line_inst__DOT__i_vpos = 0;
    bg_line_inst__DOT__o_color_bg = 0;
    graphics_inst__DOT__clk = 0;
    graphics_inst__DOT__rst = 0;
    graphics_inst__DOT__o_hsync = 0;
    graphics_inst__DOT__o_vsync = 0;
    graphics_inst__DOT__o_blue = 0;
    graphics_inst__DOT__o_red = 0;
    graphics_inst__DOT__o_green = 0;
    graphics_inst__DOT__o_hpos = 0;
    graphics_inst__DOT__o_vpos = 0;
    graphics_inst__DOT__i_color_obstacle = 0;
    graphics_inst__DOT__i_color_player = 0;
    graphics_inst__DOT__i_color_background = 0;
    graphics_inst__DOT__i_color_score = 0;
    graphics_inst__DOT__i_game_start_pulse = 0;
    graphics_inst__DOT__o_game_tick_60hz = 0;
    graphics_inst__DOT__o_game_tick_20hz = 0;
    graphics_inst__DOT__o_game_tick_20hz_r = 0;
    graphics_inst__DOT__o_vpos_5_r = 0;
    graphics_inst__DOT__o_collision = 0;
    graphics_inst__DOT__hpos = 0;
    graphics_inst__DOT__vpos = 0;
    graphics_inst__DOT__vpos_5_r = 0;
    graphics_inst__DOT__display_on = 0;
    graphics_inst__DOT__hsync = 0;
    graphics_inst__DOT__vsync = 0;
    graphics_inst__DOT__hsync_r = 0;
    graphics_inst__DOT__vsync_r = 0;
    graphics_inst__DOT__hsync_r_r = 0;
    graphics_inst__DOT__vsync_r_r = 0;
    graphics_inst__DOT__display_on_r = 0;
    graphics_inst__DOT__display_on_r_r = 0;
    graphics_inst__DOT__is_colored = 0;
    graphics_inst__DOT__is_colored_r = 0;
    graphics_inst__DOT__frame_counter = 0;
    graphics_inst__DOT__game_tick_r = 0;
    graphics_inst__DOT__collision = 0;
    graphics_inst__DOT__hvsync_gen__DOT__clk = 0;
    graphics_inst__DOT__hvsync_gen__DOT__reset = 0;
    graphics_inst__DOT__hvsync_gen__DOT__hsync = 0;
    graphics_inst__DOT__hvsync_gen__DOT__vsync = 0;
    graphics_inst__DOT__hvsync_gen__DOT__display_on = 0;
    graphics_inst__DOT__hvsync_gen__DOT__hpos = 0;
    graphics_inst__DOT__hvsync_gen__DOT__vpos = 0;
    graphics_inst__DOT__hvsync_gen__DOT__hmaxxed = 0;
    graphics_inst__DOT__hvsync_gen__DOT__vmaxxed = 0;
    score_module_inst__DOT__game_start = 0;
    score_module_inst__DOT__game_frozen = 0;
    score_module_inst__DOT__game_tick = 0;
    score_module_inst__DOT__clk = 0;
    score_module_inst__DOT__rst_n = 0;
    score_module_inst__DOT__score = 0;
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            score_module_inst__DOT__score_int[__Vi0] = 0;
    }}
    audio_inst__DOT__clk = 0;
    audio_inst__DOT__rst_n = 0;
    audio_inst__DOT__game_is_over = 0;
    audio_inst__DOT__jump_pulse = 0;
    audio_inst__DOT__sound = 0;
    audio_inst__DOT__jump_sound = 0;
    audio_inst__DOT__game_over_sound = 0;
    audio_inst__DOT__i_jump__DOT__clk = 0;
    audio_inst__DOT__i_jump__DOT__rst_n = 0;
    audio_inst__DOT__i_jump__DOT__sound_trigger = 0;
    audio_inst__DOT__i_jump__DOT__wave_out = 0;
    audio_inst__DOT__i_jump__DOT__state = 0;
    audio_inst__DOT__i_jump__DOT__next_state = 0;
    audio_inst__DOT__i_jump__DOT__stage_index = 0;
    audio_inst__DOT__i_jump__DOT__counter = 0;
    audio_inst__DOT__i_jump__DOT__active = 0;
    audio_inst__DOT__i_jump__DOT__decay_value = 0;
    audio_inst__DOT__i_over__DOT__clk = 0;
    audio_inst__DOT__i_over__DOT__rst_n = 0;
    audio_inst__DOT__i_over__DOT__is_over = 0;
    audio_inst__DOT__i_over__DOT__wave_out = 0;
    audio_inst__DOT__i_over__DOT__state = 0;
    audio_inst__DOT__i_over__DOT__next_state = 0;
    audio_inst__DOT__i_over__DOT__stage_index = 0;
    audio_inst__DOT__i_over__DOT__counter = 0;
    audio_inst__DOT__i_over__DOT__active = 0;
    audio_inst__DOT__i_over__DOT__decay_value = 0;
    __Vtable1_game_state[0] = 0U;
    __Vtable1_game_state[1] = 0U;
    __Vtable1_game_state[2] = 0U;
    __Vtable1_game_state[3] = 1U;
    __Vtable1_game_state[4] = 0U;
    __Vtable1_game_state[5] = 2U;
    __Vtable1_game_state[6] = 0U;
    __Vtable1_game_state[7] = 3U;
    __Vtable1_game_state[8] = 0U;
    __Vtable1_game_state[9] = 4U;
    __Vtable1_game_state[10] = 0U;
    __Vtable1_game_state[11] = 5U;
    __Vtable1_game_state[12] = 0U;
    __Vtable1_game_state[13] = 0U;
    __Vtable1_game_state[14] = 0U;
    __Vtable1_game_state[15] = 0U;
    __Vtable1_game_state[16] = 0U;
    __Vtable1_game_state[17] = 0U;
    __Vtable1_game_state[18] = 0U;
    __Vtable1_game_state[19] = 1U;
    __Vtable1_game_state[20] = 0U;
    __Vtable1_game_state[21] = 3U;
    __Vtable1_game_state[22] = 0U;
    __Vtable1_game_state[23] = 2U;
    __Vtable1_game_state[24] = 0U;
    __Vtable1_game_state[25] = 2U;
    __Vtable1_game_state[26] = 0U;
    __Vtable1_game_state[27] = 5U;
    __Vtable1_game_state[28] = 0U;
    __Vtable1_game_state[29] = 0U;
    __Vtable1_game_state[30] = 0U;
    __Vtable1_game_state[31] = 0U;
    __Vtable1_game_state[32] = 0U;
    __Vtable1_game_state[33] = 0U;
    __Vtable1_game_state[34] = 0U;
    __Vtable1_game_state[35] = 1U;
    __Vtable1_game_state[36] = 0U;
    __Vtable1_game_state[37] = 2U;
    __Vtable1_game_state[38] = 0U;
    __Vtable1_game_state[39] = 3U;
    __Vtable1_game_state[40] = 0U;
    __Vtable1_game_state[41] = 4U;
    __Vtable1_game_state[42] = 0U;
    __Vtable1_game_state[43] = 5U;
    __Vtable1_game_state[44] = 0U;
    __Vtable1_game_state[45] = 0U;
    __Vtable1_game_state[46] = 0U;
    __Vtable1_game_state[47] = 0U;
    __Vtable1_game_state[48] = 0U;
    __Vtable1_game_state[49] = 0U;
    __Vtable1_game_state[50] = 0U;
    __Vtable1_game_state[51] = 1U;
    __Vtable1_game_state[52] = 0U;
    __Vtable1_game_state[53] = 3U;
    __Vtable1_game_state[54] = 0U;
    __Vtable1_game_state[55] = 2U;
    __Vtable1_game_state[56] = 0U;
    __Vtable1_game_state[57] = 2U;
    __Vtable1_game_state[58] = 0U;
    __Vtable1_game_state[59] = 5U;
    __Vtable1_game_state[60] = 0U;
    __Vtable1_game_state[61] = 0U;
    __Vtable1_game_state[62] = 0U;
    __Vtable1_game_state[63] = 0U;
    __Vtable1_game_state[64] = 0U;
    __Vtable1_game_state[65] = 0U;
    __Vtable1_game_state[66] = 0U;
    __Vtable1_game_state[67] = 1U;
    __Vtable1_game_state[68] = 0U;
    __Vtable1_game_state[69] = 2U;
    __Vtable1_game_state[70] = 0U;
    __Vtable1_game_state[71] = 3U;
    __Vtable1_game_state[72] = 0U;
    __Vtable1_game_state[73] = 4U;
    __Vtable1_game_state[74] = 0U;
    __Vtable1_game_state[75] = 5U;
    __Vtable1_game_state[76] = 0U;
    __Vtable1_game_state[77] = 0U;
    __Vtable1_game_state[78] = 0U;
    __Vtable1_game_state[79] = 0U;
    __Vtable1_game_state[80] = 0U;
    __Vtable1_game_state[81] = 1U;
    __Vtable1_game_state[82] = 0U;
    __Vtable1_game_state[83] = 1U;
    __Vtable1_game_state[84] = 0U;
    __Vtable1_game_state[85] = 1U;
    __Vtable1_game_state[86] = 0U;
    __Vtable1_game_state[87] = 1U;
    __Vtable1_game_state[88] = 0U;
    __Vtable1_game_state[89] = 2U;
    __Vtable1_game_state[90] = 0U;
    __Vtable1_game_state[91] = 2U;
    __Vtable1_game_state[92] = 0U;
    __Vtable1_game_state[93] = 0U;
    __Vtable1_game_state[94] = 0U;
    __Vtable1_game_state[95] = 0U;
    __Vtable1_game_state[96] = 0U;
    __Vtable1_game_state[97] = 0U;
    __Vtable1_game_state[98] = 0U;
    __Vtable1_game_state[99] = 1U;
    __Vtable1_game_state[100] = 0U;
    __Vtable1_game_state[101] = 2U;
    __Vtable1_game_state[102] = 0U;
    __Vtable1_game_state[103] = 3U;
    __Vtable1_game_state[104] = 0U;
    __Vtable1_game_state[105] = 4U;
    __Vtable1_game_state[106] = 0U;
    __Vtable1_game_state[107] = 5U;
    __Vtable1_game_state[108] = 0U;
    __Vtable1_game_state[109] = 0U;
    __Vtable1_game_state[110] = 0U;
    __Vtable1_game_state[111] = 0U;
    __Vtable1_game_state[112] = 0U;
    __Vtable1_game_state[113] = 1U;
    __Vtable1_game_state[114] = 0U;
    __Vtable1_game_state[115] = 1U;
    __Vtable1_game_state[116] = 0U;
    __Vtable1_game_state[117] = 1U;
    __Vtable1_game_state[118] = 0U;
    __Vtable1_game_state[119] = 1U;
    __Vtable1_game_state[120] = 0U;
    __Vtable1_game_state[121] = 2U;
    __Vtable1_game_state[122] = 0U;
    __Vtable1_game_state[123] = 2U;
    __Vtable1_game_state[124] = 0U;
    __Vtable1_game_state[125] = 0U;
    __Vtable1_game_state[126] = 0U;
    __Vtable1_game_state[127] = 0U;
    __Vtable1_game_state[128] = 0U;
    __Vtable1_game_state[129] = 0U;
    __Vtable1_game_state[130] = 0U;
    __Vtable1_game_state[131] = 5U;
    __Vtable1_game_state[132] = 0U;
    __Vtable1_game_state[133] = 5U;
    __Vtable1_game_state[134] = 0U;
    __Vtable1_game_state[135] = 5U;
    __Vtable1_game_state[136] = 0U;
    __Vtable1_game_state[137] = 5U;
    __Vtable1_game_state[138] = 0U;
    __Vtable1_game_state[139] = 5U;
    __Vtable1_game_state[140] = 0U;
    __Vtable1_game_state[141] = 0U;
    __Vtable1_game_state[142] = 0U;
    __Vtable1_game_state[143] = 0U;
    __Vtable1_game_state[144] = 0U;
    __Vtable1_game_state[145] = 0U;
    __Vtable1_game_state[146] = 0U;
    __Vtable1_game_state[147] = 5U;
    __Vtable1_game_state[148] = 0U;
    __Vtable1_game_state[149] = 5U;
    __Vtable1_game_state[150] = 0U;
    __Vtable1_game_state[151] = 5U;
    __Vtable1_game_state[152] = 0U;
    __Vtable1_game_state[153] = 5U;
    __Vtable1_game_state[154] = 0U;
    __Vtable1_game_state[155] = 5U;
    __Vtable1_game_state[156] = 0U;
    __Vtable1_game_state[157] = 0U;
    __Vtable1_game_state[158] = 0U;
    __Vtable1_game_state[159] = 0U;
    __Vtable1_game_state[160] = 0U;
    __Vtable1_game_state[161] = 0U;
    __Vtable1_game_state[162] = 0U;
    __Vtable1_game_state[163] = 5U;
    __Vtable1_game_state[164] = 0U;
    __Vtable1_game_state[165] = 5U;
    __Vtable1_game_state[166] = 0U;
    __Vtable1_game_state[167] = 5U;
    __Vtable1_game_state[168] = 0U;
    __Vtable1_game_state[169] = 5U;
    __Vtable1_game_state[170] = 0U;
    __Vtable1_game_state[171] = 5U;
    __Vtable1_game_state[172] = 0U;
    __Vtable1_game_state[173] = 0U;
    __Vtable1_game_state[174] = 0U;
    __Vtable1_game_state[175] = 0U;
    __Vtable1_game_state[176] = 0U;
    __Vtable1_game_state[177] = 0U;
    __Vtable1_game_state[178] = 0U;
    __Vtable1_game_state[179] = 5U;
    __Vtable1_game_state[180] = 0U;
    __Vtable1_game_state[181] = 5U;
    __Vtable1_game_state[182] = 0U;
    __Vtable1_game_state[183] = 5U;
    __Vtable1_game_state[184] = 0U;
    __Vtable1_game_state[185] = 5U;
    __Vtable1_game_state[186] = 0U;
    __Vtable1_game_state[187] = 5U;
    __Vtable1_game_state[188] = 0U;
    __Vtable1_game_state[189] = 0U;
    __Vtable1_game_state[190] = 0U;
    __Vtable1_game_state[191] = 0U;
    __Vtable1_game_state[192] = 0U;
    __Vtable1_game_state[193] = 0U;
    __Vtable1_game_state[194] = 0U;
    __Vtable1_game_state[195] = 5U;
    __Vtable1_game_state[196] = 0U;
    __Vtable1_game_state[197] = 5U;
    __Vtable1_game_state[198] = 0U;
    __Vtable1_game_state[199] = 5U;
    __Vtable1_game_state[200] = 0U;
    __Vtable1_game_state[201] = 5U;
    __Vtable1_game_state[202] = 0U;
    __Vtable1_game_state[203] = 5U;
    __Vtable1_game_state[204] = 0U;
    __Vtable1_game_state[205] = 0U;
    __Vtable1_game_state[206] = 0U;
    __Vtable1_game_state[207] = 0U;
    __Vtable1_game_state[208] = 0U;
    __Vtable1_game_state[209] = 1U;
    __Vtable1_game_state[210] = 0U;
    __Vtable1_game_state[211] = 5U;
    __Vtable1_game_state[212] = 0U;
    __Vtable1_game_state[213] = 5U;
    __Vtable1_game_state[214] = 0U;
    __Vtable1_game_state[215] = 5U;
    __Vtable1_game_state[216] = 0U;
    __Vtable1_game_state[217] = 5U;
    __Vtable1_game_state[218] = 0U;
    __Vtable1_game_state[219] = 2U;
    __Vtable1_game_state[220] = 0U;
    __Vtable1_game_state[221] = 0U;
    __Vtable1_game_state[222] = 0U;
    __Vtable1_game_state[223] = 0U;
    __Vtable1_game_state[224] = 0U;
    __Vtable1_game_state[225] = 0U;
    __Vtable1_game_state[226] = 0U;
    __Vtable1_game_state[227] = 5U;
    __Vtable1_game_state[228] = 0U;
    __Vtable1_game_state[229] = 5U;
    __Vtable1_game_state[230] = 0U;
    __Vtable1_game_state[231] = 5U;
    __Vtable1_game_state[232] = 0U;
    __Vtable1_game_state[233] = 5U;
    __Vtable1_game_state[234] = 0U;
    __Vtable1_game_state[235] = 5U;
    __Vtable1_game_state[236] = 0U;
    __Vtable1_game_state[237] = 0U;
    __Vtable1_game_state[238] = 0U;
    __Vtable1_game_state[239] = 0U;
    __Vtable1_game_state[240] = 0U;
    __Vtable1_game_state[241] = 1U;
    __Vtable1_game_state[242] = 0U;
    __Vtable1_game_state[243] = 5U;
    __Vtable1_game_state[244] = 0U;
    __Vtable1_game_state[245] = 5U;
    __Vtable1_game_state[246] = 0U;
    __Vtable1_game_state[247] = 5U;
    __Vtable1_game_state[248] = 0U;
    __Vtable1_game_state[249] = 5U;
    __Vtable1_game_state[250] = 0U;
    __Vtable1_game_state[251] = 2U;
    __Vtable1_game_state[252] = 0U;
    __Vtable1_game_state[253] = 0U;
    __Vtable1_game_state[254] = 0U;
    __Vtable1_game_state[255] = 0U;
    __Vtable1_game_state[256] = 0U;
    __Vtable1_game_state[257] = 0U;
    __Vtable1_game_state[258] = 0U;
    __Vtable1_game_state[259] = 1U;
    __Vtable1_game_state[260] = 0U;
    __Vtable1_game_state[261] = 2U;
    __Vtable1_game_state[262] = 0U;
    __Vtable1_game_state[263] = 3U;
    __Vtable1_game_state[264] = 0U;
    __Vtable1_game_state[265] = 4U;
    __Vtable1_game_state[266] = 0U;
    __Vtable1_game_state[267] = 5U;
    __Vtable1_game_state[268] = 0U;
    __Vtable1_game_state[269] = 0U;
    __Vtable1_game_state[270] = 0U;
    __Vtable1_game_state[271] = 0U;
    __Vtable1_game_state[272] = 0U;
    __Vtable1_game_state[273] = 0U;
    __Vtable1_game_state[274] = 0U;
    __Vtable1_game_state[275] = 1U;
    __Vtable1_game_state[276] = 0U;
    __Vtable1_game_state[277] = 4U;
    __Vtable1_game_state[278] = 0U;
    __Vtable1_game_state[279] = 4U;
    __Vtable1_game_state[280] = 0U;
    __Vtable1_game_state[281] = 4U;
    __Vtable1_game_state[282] = 0U;
    __Vtable1_game_state[283] = 5U;
    __Vtable1_game_state[284] = 0U;
    __Vtable1_game_state[285] = 0U;
    __Vtable1_game_state[286] = 0U;
    __Vtable1_game_state[287] = 0U;
    __Vtable1_game_state[288] = 0U;
    __Vtable1_game_state[289] = 0U;
    __Vtable1_game_state[290] = 0U;
    __Vtable1_game_state[291] = 1U;
    __Vtable1_game_state[292] = 0U;
    __Vtable1_game_state[293] = 2U;
    __Vtable1_game_state[294] = 0U;
    __Vtable1_game_state[295] = 3U;
    __Vtable1_game_state[296] = 0U;
    __Vtable1_game_state[297] = 4U;
    __Vtable1_game_state[298] = 0U;
    __Vtable1_game_state[299] = 5U;
    __Vtable1_game_state[300] = 0U;
    __Vtable1_game_state[301] = 0U;
    __Vtable1_game_state[302] = 0U;
    __Vtable1_game_state[303] = 0U;
    __Vtable1_game_state[304] = 0U;
    __Vtable1_game_state[305] = 0U;
    __Vtable1_game_state[306] = 0U;
    __Vtable1_game_state[307] = 1U;
    __Vtable1_game_state[308] = 0U;
    __Vtable1_game_state[309] = 4U;
    __Vtable1_game_state[310] = 0U;
    __Vtable1_game_state[311] = 4U;
    __Vtable1_game_state[312] = 0U;
    __Vtable1_game_state[313] = 4U;
    __Vtable1_game_state[314] = 0U;
    __Vtable1_game_state[315] = 5U;
    __Vtable1_game_state[316] = 0U;
    __Vtable1_game_state[317] = 0U;
    __Vtable1_game_state[318] = 0U;
    __Vtable1_game_state[319] = 0U;
    __Vtable1_game_state[320] = 0U;
    __Vtable1_game_state[321] = 0U;
    __Vtable1_game_state[322] = 0U;
    __Vtable1_game_state[323] = 1U;
    __Vtable1_game_state[324] = 0U;
    __Vtable1_game_state[325] = 2U;
    __Vtable1_game_state[326] = 0U;
    __Vtable1_game_state[327] = 3U;
    __Vtable1_game_state[328] = 0U;
    __Vtable1_game_state[329] = 4U;
    __Vtable1_game_state[330] = 0U;
    __Vtable1_game_state[331] = 5U;
    __Vtable1_game_state[332] = 0U;
    __Vtable1_game_state[333] = 0U;
    __Vtable1_game_state[334] = 0U;
    __Vtable1_game_state[335] = 0U;
    __Vtable1_game_state[336] = 0U;
    __Vtable1_game_state[337] = 1U;
    __Vtable1_game_state[338] = 0U;
    __Vtable1_game_state[339] = 1U;
    __Vtable1_game_state[340] = 0U;
    __Vtable1_game_state[341] = 4U;
    __Vtable1_game_state[342] = 0U;
    __Vtable1_game_state[343] = 4U;
    __Vtable1_game_state[344] = 0U;
    __Vtable1_game_state[345] = 4U;
    __Vtable1_game_state[346] = 0U;
    __Vtable1_game_state[347] = 2U;
    __Vtable1_game_state[348] = 0U;
    __Vtable1_game_state[349] = 0U;
    __Vtable1_game_state[350] = 0U;
    __Vtable1_game_state[351] = 0U;
    __Vtable1_game_state[352] = 0U;
    __Vtable1_game_state[353] = 0U;
    __Vtable1_game_state[354] = 0U;
    __Vtable1_game_state[355] = 1U;
    __Vtable1_game_state[356] = 0U;
    __Vtable1_game_state[357] = 2U;
    __Vtable1_game_state[358] = 0U;
    __Vtable1_game_state[359] = 3U;
    __Vtable1_game_state[360] = 0U;
    __Vtable1_game_state[361] = 4U;
    __Vtable1_game_state[362] = 0U;
    __Vtable1_game_state[363] = 5U;
    __Vtable1_game_state[364] = 0U;
    __Vtable1_game_state[365] = 0U;
    __Vtable1_game_state[366] = 0U;
    __Vtable1_game_state[367] = 0U;
    __Vtable1_game_state[368] = 0U;
    __Vtable1_game_state[369] = 1U;
    __Vtable1_game_state[370] = 0U;
    __Vtable1_game_state[371] = 1U;
    __Vtable1_game_state[372] = 0U;
    __Vtable1_game_state[373] = 4U;
    __Vtable1_game_state[374] = 0U;
    __Vtable1_game_state[375] = 4U;
    __Vtable1_game_state[376] = 0U;
    __Vtable1_game_state[377] = 4U;
    __Vtable1_game_state[378] = 0U;
    __Vtable1_game_state[379] = 2U;
    __Vtable1_game_state[380] = 0U;
    __Vtable1_game_state[381] = 0U;
    __Vtable1_game_state[382] = 0U;
    __Vtable1_game_state[383] = 0U;
    __Vtable1_game_state[384] = 0U;
    __Vtable1_game_state[385] = 0U;
    __Vtable1_game_state[386] = 0U;
    __Vtable1_game_state[387] = 5U;
    __Vtable1_game_state[388] = 0U;
    __Vtable1_game_state[389] = 5U;
    __Vtable1_game_state[390] = 0U;
    __Vtable1_game_state[391] = 5U;
    __Vtable1_game_state[392] = 0U;
    __Vtable1_game_state[393] = 5U;
    __Vtable1_game_state[394] = 0U;
    __Vtable1_game_state[395] = 5U;
    __Vtable1_game_state[396] = 0U;
    __Vtable1_game_state[397] = 0U;
    __Vtable1_game_state[398] = 0U;
    __Vtable1_game_state[399] = 0U;
    __Vtable1_game_state[400] = 0U;
    __Vtable1_game_state[401] = 0U;
    __Vtable1_game_state[402] = 0U;
    __Vtable1_game_state[403] = 5U;
    __Vtable1_game_state[404] = 0U;
    __Vtable1_game_state[405] = 5U;
    __Vtable1_game_state[406] = 0U;
    __Vtable1_game_state[407] = 5U;
    __Vtable1_game_state[408] = 0U;
    __Vtable1_game_state[409] = 5U;
    __Vtable1_game_state[410] = 0U;
    __Vtable1_game_state[411] = 5U;
    __Vtable1_game_state[412] = 0U;
    __Vtable1_game_state[413] = 0U;
    __Vtable1_game_state[414] = 0U;
    __Vtable1_game_state[415] = 0U;
    __Vtable1_game_state[416] = 0U;
    __Vtable1_game_state[417] = 0U;
    __Vtable1_game_state[418] = 0U;
    __Vtable1_game_state[419] = 5U;
    __Vtable1_game_state[420] = 0U;
    __Vtable1_game_state[421] = 5U;
    __Vtable1_game_state[422] = 0U;
    __Vtable1_game_state[423] = 5U;
    __Vtable1_game_state[424] = 0U;
    __Vtable1_game_state[425] = 5U;
    __Vtable1_game_state[426] = 0U;
    __Vtable1_game_state[427] = 5U;
    __Vtable1_game_state[428] = 0U;
    __Vtable1_game_state[429] = 0U;
    __Vtable1_game_state[430] = 0U;
    __Vtable1_game_state[431] = 0U;
    __Vtable1_game_state[432] = 0U;
    __Vtable1_game_state[433] = 0U;
    __Vtable1_game_state[434] = 0U;
    __Vtable1_game_state[435] = 5U;
    __Vtable1_game_state[436] = 0U;
    __Vtable1_game_state[437] = 5U;
    __Vtable1_game_state[438] = 0U;
    __Vtable1_game_state[439] = 5U;
    __Vtable1_game_state[440] = 0U;
    __Vtable1_game_state[441] = 5U;
    __Vtable1_game_state[442] = 0U;
    __Vtable1_game_state[443] = 5U;
    __Vtable1_game_state[444] = 0U;
    __Vtable1_game_state[445] = 0U;
    __Vtable1_game_state[446] = 0U;
    __Vtable1_game_state[447] = 0U;
    __Vtable1_game_state[448] = 0U;
    __Vtable1_game_state[449] = 0U;
    __Vtable1_game_state[450] = 0U;
    __Vtable1_game_state[451] = 5U;
    __Vtable1_game_state[452] = 0U;
    __Vtable1_game_state[453] = 5U;
    __Vtable1_game_state[454] = 0U;
    __Vtable1_game_state[455] = 5U;
    __Vtable1_game_state[456] = 0U;
    __Vtable1_game_state[457] = 5U;
    __Vtable1_game_state[458] = 0U;
    __Vtable1_game_state[459] = 5U;
    __Vtable1_game_state[460] = 0U;
    __Vtable1_game_state[461] = 0U;
    __Vtable1_game_state[462] = 0U;
    __Vtable1_game_state[463] = 0U;
    __Vtable1_game_state[464] = 0U;
    __Vtable1_game_state[465] = 1U;
    __Vtable1_game_state[466] = 0U;
    __Vtable1_game_state[467] = 5U;
    __Vtable1_game_state[468] = 0U;
    __Vtable1_game_state[469] = 5U;
    __Vtable1_game_state[470] = 0U;
    __Vtable1_game_state[471] = 5U;
    __Vtable1_game_state[472] = 0U;
    __Vtable1_game_state[473] = 5U;
    __Vtable1_game_state[474] = 0U;
    __Vtable1_game_state[475] = 2U;
    __Vtable1_game_state[476] = 0U;
    __Vtable1_game_state[477] = 0U;
    __Vtable1_game_state[478] = 0U;
    __Vtable1_game_state[479] = 0U;
    __Vtable1_game_state[480] = 0U;
    __Vtable1_game_state[481] = 0U;
    __Vtable1_game_state[482] = 0U;
    __Vtable1_game_state[483] = 5U;
    __Vtable1_game_state[484] = 0U;
    __Vtable1_game_state[485] = 5U;
    __Vtable1_game_state[486] = 0U;
    __Vtable1_game_state[487] = 5U;
    __Vtable1_game_state[488] = 0U;
    __Vtable1_game_state[489] = 5U;
    __Vtable1_game_state[490] = 0U;
    __Vtable1_game_state[491] = 5U;
    __Vtable1_game_state[492] = 0U;
    __Vtable1_game_state[493] = 0U;
    __Vtable1_game_state[494] = 0U;
    __Vtable1_game_state[495] = 0U;
    __Vtable1_game_state[496] = 0U;
    __Vtable1_game_state[497] = 1U;
    __Vtable1_game_state[498] = 0U;
    __Vtable1_game_state[499] = 5U;
    __Vtable1_game_state[500] = 0U;
    __Vtable1_game_state[501] = 5U;
    __Vtable1_game_state[502] = 0U;
    __Vtable1_game_state[503] = 5U;
    __Vtable1_game_state[504] = 0U;
    __Vtable1_game_state[505] = 5U;
    __Vtable1_game_state[506] = 0U;
    __Vtable1_game_state[507] = 2U;
    __Vtable1_game_state[508] = 0U;
    __Vtable1_game_state[509] = 0U;
    __Vtable1_game_state[510] = 0U;
    __Vtable1_game_state[511] = 0U;
    __Vtable1_game_state[512] = 0U;
    __Vtable1_game_state[513] = 0U;
    __Vtable1_game_state[514] = 0U;
    __Vtable1_game_state[515] = 1U;
    __Vtable1_game_state[516] = 0U;
    __Vtable1_game_state[517] = 2U;
    __Vtable1_game_state[518] = 0U;
    __Vtable1_game_state[519] = 3U;
    __Vtable1_game_state[520] = 0U;
    __Vtable1_game_state[521] = 4U;
    __Vtable1_game_state[522] = 0U;
    __Vtable1_game_state[523] = 5U;
    __Vtable1_game_state[524] = 0U;
    __Vtable1_game_state[525] = 0U;
    __Vtable1_game_state[526] = 0U;
    __Vtable1_game_state[527] = 0U;
    __Vtable1_game_state[528] = 0U;
    __Vtable1_game_state[529] = 0U;
    __Vtable1_game_state[530] = 0U;
    __Vtable1_game_state[531] = 1U;
    __Vtable1_game_state[532] = 0U;
    __Vtable1_game_state[533] = 3U;
    __Vtable1_game_state[534] = 0U;
    __Vtable1_game_state[535] = 2U;
    __Vtable1_game_state[536] = 0U;
    __Vtable1_game_state[537] = 2U;
    __Vtable1_game_state[538] = 0U;
    __Vtable1_game_state[539] = 5U;
    __Vtable1_game_state[540] = 0U;
    __Vtable1_game_state[541] = 0U;
    __Vtable1_game_state[542] = 0U;
    __Vtable1_game_state[543] = 0U;
    __Vtable1_game_state[544] = 0U;
    __Vtable1_game_state[545] = 0U;
    __Vtable1_game_state[546] = 0U;
    __Vtable1_game_state[547] = 2U;
    __Vtable1_game_state[548] = 0U;
    __Vtable1_game_state[549] = 2U;
    __Vtable1_game_state[550] = 0U;
    __Vtable1_game_state[551] = 3U;
    __Vtable1_game_state[552] = 0U;
    __Vtable1_game_state[553] = 4U;
    __Vtable1_game_state[554] = 0U;
    __Vtable1_game_state[555] = 5U;
    __Vtable1_game_state[556] = 0U;
    __Vtable1_game_state[557] = 0U;
    __Vtable1_game_state[558] = 0U;
    __Vtable1_game_state[559] = 0U;
    __Vtable1_game_state[560] = 0U;
    __Vtable1_game_state[561] = 0U;
    __Vtable1_game_state[562] = 0U;
    __Vtable1_game_state[563] = 2U;
    __Vtable1_game_state[564] = 0U;
    __Vtable1_game_state[565] = 3U;
    __Vtable1_game_state[566] = 0U;
    __Vtable1_game_state[567] = 2U;
    __Vtable1_game_state[568] = 0U;
    __Vtable1_game_state[569] = 2U;
    __Vtable1_game_state[570] = 0U;
    __Vtable1_game_state[571] = 5U;
    __Vtable1_game_state[572] = 0U;
    __Vtable1_game_state[573] = 0U;
    __Vtable1_game_state[574] = 0U;
    __Vtable1_game_state[575] = 0U;
    __Vtable1_game_state[576] = 0U;
    __Vtable1_game_state[577] = 0U;
    __Vtable1_game_state[578] = 0U;
    __Vtable1_game_state[579] = 1U;
    __Vtable1_game_state[580] = 0U;
    __Vtable1_game_state[581] = 2U;
    __Vtable1_game_state[582] = 0U;
    __Vtable1_game_state[583] = 3U;
    __Vtable1_game_state[584] = 0U;
    __Vtable1_game_state[585] = 4U;
    __Vtable1_game_state[586] = 0U;
    __Vtable1_game_state[587] = 5U;
    __Vtable1_game_state[588] = 0U;
    __Vtable1_game_state[589] = 0U;
    __Vtable1_game_state[590] = 0U;
    __Vtable1_game_state[591] = 0U;
    __Vtable1_game_state[592] = 0U;
    __Vtable1_game_state[593] = 1U;
    __Vtable1_game_state[594] = 0U;
    __Vtable1_game_state[595] = 1U;
    __Vtable1_game_state[596] = 0U;
    __Vtable1_game_state[597] = 1U;
    __Vtable1_game_state[598] = 0U;
    __Vtable1_game_state[599] = 1U;
    __Vtable1_game_state[600] = 0U;
    __Vtable1_game_state[601] = 2U;
    __Vtable1_game_state[602] = 0U;
    __Vtable1_game_state[603] = 2U;
    __Vtable1_game_state[604] = 0U;
    __Vtable1_game_state[605] = 0U;
    __Vtable1_game_state[606] = 0U;
    __Vtable1_game_state[607] = 0U;
    __Vtable1_game_state[608] = 0U;
    __Vtable1_game_state[609] = 0U;
    __Vtable1_game_state[610] = 0U;
    __Vtable1_game_state[611] = 2U;
    __Vtable1_game_state[612] = 0U;
    __Vtable1_game_state[613] = 2U;
    __Vtable1_game_state[614] = 0U;
    __Vtable1_game_state[615] = 3U;
    __Vtable1_game_state[616] = 0U;
    __Vtable1_game_state[617] = 4U;
    __Vtable1_game_state[618] = 0U;
    __Vtable1_game_state[619] = 5U;
    __Vtable1_game_state[620] = 0U;
    __Vtable1_game_state[621] = 0U;
    __Vtable1_game_state[622] = 0U;
    __Vtable1_game_state[623] = 0U;
    __Vtable1_game_state[624] = 0U;
    __Vtable1_game_state[625] = 1U;
    __Vtable1_game_state[626] = 0U;
    __Vtable1_game_state[627] = 2U;
    __Vtable1_game_state[628] = 0U;
    __Vtable1_game_state[629] = 1U;
    __Vtable1_game_state[630] = 0U;
    __Vtable1_game_state[631] = 1U;
    __Vtable1_game_state[632] = 0U;
    __Vtable1_game_state[633] = 2U;
    __Vtable1_game_state[634] = 0U;
    __Vtable1_game_state[635] = 2U;
    __Vtable1_game_state[636] = 0U;
    __Vtable1_game_state[637] = 0U;
    __Vtable1_game_state[638] = 0U;
    __Vtable1_game_state[639] = 0U;
    __Vtable1_game_state[640] = 0U;
    __Vtable1_game_state[641] = 0U;
    __Vtable1_game_state[642] = 0U;
    __Vtable1_game_state[643] = 5U;
    __Vtable1_game_state[644] = 0U;
    __Vtable1_game_state[645] = 5U;
    __Vtable1_game_state[646] = 0U;
    __Vtable1_game_state[647] = 5U;
    __Vtable1_game_state[648] = 0U;
    __Vtable1_game_state[649] = 5U;
    __Vtable1_game_state[650] = 0U;
    __Vtable1_game_state[651] = 5U;
    __Vtable1_game_state[652] = 0U;
    __Vtable1_game_state[653] = 0U;
    __Vtable1_game_state[654] = 0U;
    __Vtable1_game_state[655] = 0U;
    __Vtable1_game_state[656] = 0U;
    __Vtable1_game_state[657] = 0U;
    __Vtable1_game_state[658] = 0U;
    __Vtable1_game_state[659] = 5U;
    __Vtable1_game_state[660] = 0U;
    __Vtable1_game_state[661] = 5U;
    __Vtable1_game_state[662] = 0U;
    __Vtable1_game_state[663] = 5U;
    __Vtable1_game_state[664] = 0U;
    __Vtable1_game_state[665] = 5U;
    __Vtable1_game_state[666] = 0U;
    __Vtable1_game_state[667] = 5U;
    __Vtable1_game_state[668] = 0U;
    __Vtable1_game_state[669] = 0U;
    __Vtable1_game_state[670] = 0U;
    __Vtable1_game_state[671] = 0U;
    __Vtable1_game_state[672] = 0U;
    __Vtable1_game_state[673] = 0U;
    __Vtable1_game_state[674] = 0U;
    __Vtable1_game_state[675] = 5U;
    __Vtable1_game_state[676] = 0U;
    __Vtable1_game_state[677] = 5U;
    __Vtable1_game_state[678] = 0U;
    __Vtable1_game_state[679] = 5U;
    __Vtable1_game_state[680] = 0U;
    __Vtable1_game_state[681] = 5U;
    __Vtable1_game_state[682] = 0U;
    __Vtable1_game_state[683] = 5U;
    __Vtable1_game_state[684] = 0U;
    __Vtable1_game_state[685] = 0U;
    __Vtable1_game_state[686] = 0U;
    __Vtable1_game_state[687] = 0U;
    __Vtable1_game_state[688] = 0U;
    __Vtable1_game_state[689] = 0U;
    __Vtable1_game_state[690] = 0U;
    __Vtable1_game_state[691] = 5U;
    __Vtable1_game_state[692] = 0U;
    __Vtable1_game_state[693] = 5U;
    __Vtable1_game_state[694] = 0U;
    __Vtable1_game_state[695] = 5U;
    __Vtable1_game_state[696] = 0U;
    __Vtable1_game_state[697] = 5U;
    __Vtable1_game_state[698] = 0U;
    __Vtable1_game_state[699] = 5U;
    __Vtable1_game_state[700] = 0U;
    __Vtable1_game_state[701] = 0U;
    __Vtable1_game_state[702] = 0U;
    __Vtable1_game_state[703] = 0U;
    __Vtable1_game_state[704] = 0U;
    __Vtable1_game_state[705] = 0U;
    __Vtable1_game_state[706] = 0U;
    __Vtable1_game_state[707] = 5U;
    __Vtable1_game_state[708] = 0U;
    __Vtable1_game_state[709] = 5U;
    __Vtable1_game_state[710] = 0U;
    __Vtable1_game_state[711] = 5U;
    __Vtable1_game_state[712] = 0U;
    __Vtable1_game_state[713] = 5U;
    __Vtable1_game_state[714] = 0U;
    __Vtable1_game_state[715] = 5U;
    __Vtable1_game_state[716] = 0U;
    __Vtable1_game_state[717] = 0U;
    __Vtable1_game_state[718] = 0U;
    __Vtable1_game_state[719] = 0U;
    __Vtable1_game_state[720] = 0U;
    __Vtable1_game_state[721] = 1U;
    __Vtable1_game_state[722] = 0U;
    __Vtable1_game_state[723] = 5U;
    __Vtable1_game_state[724] = 0U;
    __Vtable1_game_state[725] = 5U;
    __Vtable1_game_state[726] = 0U;
    __Vtable1_game_state[727] = 5U;
    __Vtable1_game_state[728] = 0U;
    __Vtable1_game_state[729] = 5U;
    __Vtable1_game_state[730] = 0U;
    __Vtable1_game_state[731] = 2U;
    __Vtable1_game_state[732] = 0U;
    __Vtable1_game_state[733] = 0U;
    __Vtable1_game_state[734] = 0U;
    __Vtable1_game_state[735] = 0U;
    __Vtable1_game_state[736] = 0U;
    __Vtable1_game_state[737] = 0U;
    __Vtable1_game_state[738] = 0U;
    __Vtable1_game_state[739] = 5U;
    __Vtable1_game_state[740] = 0U;
    __Vtable1_game_state[741] = 5U;
    __Vtable1_game_state[742] = 0U;
    __Vtable1_game_state[743] = 5U;
    __Vtable1_game_state[744] = 0U;
    __Vtable1_game_state[745] = 5U;
    __Vtable1_game_state[746] = 0U;
    __Vtable1_game_state[747] = 5U;
    __Vtable1_game_state[748] = 0U;
    __Vtable1_game_state[749] = 0U;
    __Vtable1_game_state[750] = 0U;
    __Vtable1_game_state[751] = 0U;
    __Vtable1_game_state[752] = 0U;
    __Vtable1_game_state[753] = 1U;
    __Vtable1_game_state[754] = 0U;
    __Vtable1_game_state[755] = 5U;
    __Vtable1_game_state[756] = 0U;
    __Vtable1_game_state[757] = 5U;
    __Vtable1_game_state[758] = 0U;
    __Vtable1_game_state[759] = 5U;
    __Vtable1_game_state[760] = 0U;
    __Vtable1_game_state[761] = 5U;
    __Vtable1_game_state[762] = 0U;
    __Vtable1_game_state[763] = 2U;
    __Vtable1_game_state[764] = 0U;
    __Vtable1_game_state[765] = 0U;
    __Vtable1_game_state[766] = 0U;
    __Vtable1_game_state[767] = 0U;
    __Vtable1_game_state[768] = 0U;
    __Vtable1_game_state[769] = 0U;
    __Vtable1_game_state[770] = 0U;
    __Vtable1_game_state[771] = 1U;
    __Vtable1_game_state[772] = 0U;
    __Vtable1_game_state[773] = 2U;
    __Vtable1_game_state[774] = 0U;
    __Vtable1_game_state[775] = 3U;
    __Vtable1_game_state[776] = 0U;
    __Vtable1_game_state[777] = 4U;
    __Vtable1_game_state[778] = 0U;
    __Vtable1_game_state[779] = 5U;
    __Vtable1_game_state[780] = 0U;
    __Vtable1_game_state[781] = 0U;
    __Vtable1_game_state[782] = 0U;
    __Vtable1_game_state[783] = 0U;
    __Vtable1_game_state[784] = 0U;
    __Vtable1_game_state[785] = 0U;
    __Vtable1_game_state[786] = 0U;
    __Vtable1_game_state[787] = 1U;
    __Vtable1_game_state[788] = 0U;
    __Vtable1_game_state[789] = 4U;
    __Vtable1_game_state[790] = 0U;
    __Vtable1_game_state[791] = 4U;
    __Vtable1_game_state[792] = 0U;
    __Vtable1_game_state[793] = 4U;
    __Vtable1_game_state[794] = 0U;
    __Vtable1_game_state[795] = 5U;
    __Vtable1_game_state[796] = 0U;
    __Vtable1_game_state[797] = 0U;
    __Vtable1_game_state[798] = 0U;
    __Vtable1_game_state[799] = 0U;
    __Vtable1_game_state[800] = 0U;
    __Vtable1_game_state[801] = 0U;
    __Vtable1_game_state[802] = 0U;
    __Vtable1_game_state[803] = 2U;
    __Vtable1_game_state[804] = 0U;
    __Vtable1_game_state[805] = 2U;
    __Vtable1_game_state[806] = 0U;
    __Vtable1_game_state[807] = 3U;
    __Vtable1_game_state[808] = 0U;
    __Vtable1_game_state[809] = 4U;
    __Vtable1_game_state[810] = 0U;
    __Vtable1_game_state[811] = 5U;
    __Vtable1_game_state[812] = 0U;
    __Vtable1_game_state[813] = 0U;
    __Vtable1_game_state[814] = 0U;
    __Vtable1_game_state[815] = 0U;
    __Vtable1_game_state[816] = 0U;
    __Vtable1_game_state[817] = 0U;
    __Vtable1_game_state[818] = 0U;
    __Vtable1_game_state[819] = 2U;
    __Vtable1_game_state[820] = 0U;
    __Vtable1_game_state[821] = 4U;
    __Vtable1_game_state[822] = 0U;
    __Vtable1_game_state[823] = 4U;
    __Vtable1_game_state[824] = 0U;
    __Vtable1_game_state[825] = 4U;
    __Vtable1_game_state[826] = 0U;
    __Vtable1_game_state[827] = 5U;
    __Vtable1_game_state[828] = 0U;
    __Vtable1_game_state[829] = 0U;
    __Vtable1_game_state[830] = 0U;
    __Vtable1_game_state[831] = 0U;
    __Vtable1_game_state[832] = 0U;
    __Vtable1_game_state[833] = 0U;
    __Vtable1_game_state[834] = 0U;
    __Vtable1_game_state[835] = 1U;
    __Vtable1_game_state[836] = 0U;
    __Vtable1_game_state[837] = 2U;
    __Vtable1_game_state[838] = 0U;
    __Vtable1_game_state[839] = 3U;
    __Vtable1_game_state[840] = 0U;
    __Vtable1_game_state[841] = 4U;
    __Vtable1_game_state[842] = 0U;
    __Vtable1_game_state[843] = 5U;
    __Vtable1_game_state[844] = 0U;
    __Vtable1_game_state[845] = 0U;
    __Vtable1_game_state[846] = 0U;
    __Vtable1_game_state[847] = 0U;
    __Vtable1_game_state[848] = 0U;
    __Vtable1_game_state[849] = 1U;
    __Vtable1_game_state[850] = 0U;
    __Vtable1_game_state[851] = 1U;
    __Vtable1_game_state[852] = 0U;
    __Vtable1_game_state[853] = 4U;
    __Vtable1_game_state[854] = 0U;
    __Vtable1_game_state[855] = 4U;
    __Vtable1_game_state[856] = 0U;
    __Vtable1_game_state[857] = 4U;
    __Vtable1_game_state[858] = 0U;
    __Vtable1_game_state[859] = 2U;
    __Vtable1_game_state[860] = 0U;
    __Vtable1_game_state[861] = 0U;
    __Vtable1_game_state[862] = 0U;
    __Vtable1_game_state[863] = 0U;
    __Vtable1_game_state[864] = 0U;
    __Vtable1_game_state[865] = 0U;
    __Vtable1_game_state[866] = 0U;
    __Vtable1_game_state[867] = 2U;
    __Vtable1_game_state[868] = 0U;
    __Vtable1_game_state[869] = 2U;
    __Vtable1_game_state[870] = 0U;
    __Vtable1_game_state[871] = 3U;
    __Vtable1_game_state[872] = 0U;
    __Vtable1_game_state[873] = 4U;
    __Vtable1_game_state[874] = 0U;
    __Vtable1_game_state[875] = 5U;
    __Vtable1_game_state[876] = 0U;
    __Vtable1_game_state[877] = 0U;
    __Vtable1_game_state[878] = 0U;
    __Vtable1_game_state[879] = 0U;
    __Vtable1_game_state[880] = 0U;
    __Vtable1_game_state[881] = 1U;
    __Vtable1_game_state[882] = 0U;
    __Vtable1_game_state[883] = 2U;
    __Vtable1_game_state[884] = 0U;
    __Vtable1_game_state[885] = 4U;
    __Vtable1_game_state[886] = 0U;
    __Vtable1_game_state[887] = 4U;
    __Vtable1_game_state[888] = 0U;
    __Vtable1_game_state[889] = 4U;
    __Vtable1_game_state[890] = 0U;
    __Vtable1_game_state[891] = 2U;
    __Vtable1_game_state[892] = 0U;
    __Vtable1_game_state[893] = 0U;
    __Vtable1_game_state[894] = 0U;
    __Vtable1_game_state[895] = 0U;
    __Vtable1_game_state[896] = 0U;
    __Vtable1_game_state[897] = 0U;
    __Vtable1_game_state[898] = 0U;
    __Vtable1_game_state[899] = 5U;
    __Vtable1_game_state[900] = 0U;
    __Vtable1_game_state[901] = 5U;
    __Vtable1_game_state[902] = 0U;
    __Vtable1_game_state[903] = 5U;
    __Vtable1_game_state[904] = 0U;
    __Vtable1_game_state[905] = 5U;
    __Vtable1_game_state[906] = 0U;
    __Vtable1_game_state[907] = 5U;
    __Vtable1_game_state[908] = 0U;
    __Vtable1_game_state[909] = 0U;
    __Vtable1_game_state[910] = 0U;
    __Vtable1_game_state[911] = 0U;
    __Vtable1_game_state[912] = 0U;
    __Vtable1_game_state[913] = 0U;
    __Vtable1_game_state[914] = 0U;
    __Vtable1_game_state[915] = 5U;
    __Vtable1_game_state[916] = 0U;
    __Vtable1_game_state[917] = 5U;
    __Vtable1_game_state[918] = 0U;
    __Vtable1_game_state[919] = 5U;
    __Vtable1_game_state[920] = 0U;
    __Vtable1_game_state[921] = 5U;
    __Vtable1_game_state[922] = 0U;
    __Vtable1_game_state[923] = 5U;
    __Vtable1_game_state[924] = 0U;
    __Vtable1_game_state[925] = 0U;
    __Vtable1_game_state[926] = 0U;
    __Vtable1_game_state[927] = 0U;
    __Vtable1_game_state[928] = 0U;
    __Vtable1_game_state[929] = 0U;
    __Vtable1_game_state[930] = 0U;
    __Vtable1_game_state[931] = 5U;
    __Vtable1_game_state[932] = 0U;
    __Vtable1_game_state[933] = 5U;
    __Vtable1_game_state[934] = 0U;
    __Vtable1_game_state[935] = 5U;
    __Vtable1_game_state[936] = 0U;
    __Vtable1_game_state[937] = 5U;
    __Vtable1_game_state[938] = 0U;
    __Vtable1_game_state[939] = 5U;
    __Vtable1_game_state[940] = 0U;
    __Vtable1_game_state[941] = 0U;
    __Vtable1_game_state[942] = 0U;
    __Vtable1_game_state[943] = 0U;
    __Vtable1_game_state[944] = 0U;
    __Vtable1_game_state[945] = 0U;
    __Vtable1_game_state[946] = 0U;
    __Vtable1_game_state[947] = 5U;
    __Vtable1_game_state[948] = 0U;
    __Vtable1_game_state[949] = 5U;
    __Vtable1_game_state[950] = 0U;
    __Vtable1_game_state[951] = 5U;
    __Vtable1_game_state[952] = 0U;
    __Vtable1_game_state[953] = 5U;
    __Vtable1_game_state[954] = 0U;
    __Vtable1_game_state[955] = 5U;
    __Vtable1_game_state[956] = 0U;
    __Vtable1_game_state[957] = 0U;
    __Vtable1_game_state[958] = 0U;
    __Vtable1_game_state[959] = 0U;
    __Vtable1_game_state[960] = 0U;
    __Vtable1_game_state[961] = 0U;
    __Vtable1_game_state[962] = 0U;
    __Vtable1_game_state[963] = 5U;
    __Vtable1_game_state[964] = 0U;
    __Vtable1_game_state[965] = 5U;
    __Vtable1_game_state[966] = 0U;
    __Vtable1_game_state[967] = 5U;
    __Vtable1_game_state[968] = 0U;
    __Vtable1_game_state[969] = 5U;
    __Vtable1_game_state[970] = 0U;
    __Vtable1_game_state[971] = 5U;
    __Vtable1_game_state[972] = 0U;
    __Vtable1_game_state[973] = 0U;
    __Vtable1_game_state[974] = 0U;
    __Vtable1_game_state[975] = 0U;
    __Vtable1_game_state[976] = 0U;
    __Vtable1_game_state[977] = 1U;
    __Vtable1_game_state[978] = 0U;
    __Vtable1_game_state[979] = 5U;
    __Vtable1_game_state[980] = 0U;
    __Vtable1_game_state[981] = 5U;
    __Vtable1_game_state[982] = 0U;
    __Vtable1_game_state[983] = 5U;
    __Vtable1_game_state[984] = 0U;
    __Vtable1_game_state[985] = 5U;
    __Vtable1_game_state[986] = 0U;
    __Vtable1_game_state[987] = 2U;
    __Vtable1_game_state[988] = 0U;
    __Vtable1_game_state[989] = 0U;
    __Vtable1_game_state[990] = 0U;
    __Vtable1_game_state[991] = 0U;
    __Vtable1_game_state[992] = 0U;
    __Vtable1_game_state[993] = 0U;
    __Vtable1_game_state[994] = 0U;
    __Vtable1_game_state[995] = 5U;
    __Vtable1_game_state[996] = 0U;
    __Vtable1_game_state[997] = 5U;
    __Vtable1_game_state[998] = 0U;
    __Vtable1_game_state[999] = 5U;
    __Vtable1_game_state[1000] = 0U;
    __Vtable1_game_state[1001] = 5U;
    __Vtable1_game_state[1002] = 0U;
    __Vtable1_game_state[1003] = 5U;
    __Vtable1_game_state[1004] = 0U;
    __Vtable1_game_state[1005] = 0U;
    __Vtable1_game_state[1006] = 0U;
    __Vtable1_game_state[1007] = 0U;
    __Vtable1_game_state[1008] = 0U;
    __Vtable1_game_state[1009] = 1U;
    __Vtable1_game_state[1010] = 0U;
    __Vtable1_game_state[1011] = 5U;
    __Vtable1_game_state[1012] = 0U;
    __Vtable1_game_state[1013] = 5U;
    __Vtable1_game_state[1014] = 0U;
    __Vtable1_game_state[1015] = 5U;
    __Vtable1_game_state[1016] = 0U;
    __Vtable1_game_state[1017] = 5U;
    __Vtable1_game_state[1018] = 0U;
    __Vtable1_game_state[1019] = 2U;
    __Vtable1_game_state[1020] = 0U;
    __Vtable1_game_state[1021] = 0U;
    __Vtable1_game_state[1022] = 0U;
    __Vtable1_game_state[1023] = 0U;
    __Vtableidx2 = 0;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[0] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[1] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[2] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[3] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[4] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[5] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[6] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[7] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[8] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[9] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[10] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[11] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[12] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[13] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[14] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[15] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[16] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[17] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[18] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[19] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[20] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[21] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[22] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[23] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[24] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[25] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[26] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[27] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[28] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[29] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[30] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[31] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[32] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[33] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[34] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[35] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[36] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[37] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[38] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[39] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[40] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[41] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[42] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[43] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[44] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[45] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[46] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[47] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[48] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[49] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[50] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[51] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[52] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[53] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[54] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[55] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[56] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[57] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[58] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[59] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[60] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[61] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[62] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[63] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[64] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[65] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[66] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[67] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[68] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[69] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[70] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[71] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[72] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[73] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[74] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[75] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[76] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[77] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[78] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[79] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[80] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[81] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[82] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[83] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[84] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[85] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[86] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[87] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[88] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[89] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[90] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[91] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[92] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[93] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[94] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[95] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[96] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[97] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[98] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[99] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[100] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[101] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[102] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[103] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[104] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[105] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[106] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[107] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[108] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[109] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[110] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[111] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[112] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[113] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[114] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[115] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[116] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[117] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[118] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[119] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[120] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[121] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[122] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[123] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[124] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[125] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[126] = 3U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[127] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[128] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[129] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[130] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[131] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[132] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[133] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[134] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[135] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[136] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[137] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[138] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[139] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[140] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[141] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[142] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[143] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[144] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[145] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[146] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[147] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[148] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[149] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[150] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[151] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[152] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[153] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[154] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[155] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[156] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[157] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[158] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[159] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[160] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[161] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[162] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[163] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[164] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[165] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[166] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[167] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[168] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[169] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[170] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[171] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[172] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[173] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[174] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[175] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[176] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[177] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[178] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[179] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[180] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[181] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[182] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[183] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[184] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[185] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[186] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[187] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[188] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[189] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[190] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[191] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[192] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[193] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[194] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[195] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[196] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[197] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[198] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[199] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[200] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[201] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[202] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[203] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[204] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[205] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[206] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[207] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[208] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[209] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[210] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[211] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[212] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[213] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[214] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[215] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[216] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[217] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[218] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[219] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[220] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[221] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[222] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[223] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[224] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[225] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[226] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[227] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[228] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[229] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[230] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[231] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[232] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[233] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[234] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[235] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[236] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[237] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[238] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[239] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[240] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[241] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[242] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[243] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[244] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[245] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[246] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[247] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[248] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[249] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[250] = 2U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[251] = 0U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[252] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[253] = 1U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[254] = 3U;
    __Vtable2_audio_inst__DOT__i_over__DOT__next_state[255] = 0U;
}
