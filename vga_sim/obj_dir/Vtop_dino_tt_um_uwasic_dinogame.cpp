// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_dino.h for the primary calling header

#include "Vtop_dino_tt_um_uwasic_dinogame.h"
#include "Vtop_dino__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtop_dino_tt_um_uwasic_dinogame::_combo__TOP__top_dino__top__2(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_dino_tt_um_uwasic_dinogame::_combo__TOP__top_dino__top__2\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__clk 
        = vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__clk;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__clk 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__clk;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__clk 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__clk;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__clk 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__clk;
}

VL_INLINE_OPT void Vtop_dino_tt_um_uwasic_dinogame::_sequent__TOP__top_dino__top__5(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_dino_tt_um_uwasic_dinogame::_sequent__TOP__top_dino__top__5\n"); );
    Vtop_dino* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__button_up_debounce__DOT__counter;
    CData/*3:0*/ __Vdly__button_down_debounce__DOT__counter;
    CData/*7:0*/ __Vdly__obstacle1_pos;
    CData/*7:0*/ __Vdly__obstacle2_pos;
    CData/*0:0*/ __Vdly__obstacles_inst__DOT__obstacle1_cross_gen_line_reg;
    CData/*0:0*/ __Vdly__obstacles_inst__DOT__obstacle2_cross_gen_line_reg;
    CData/*7:0*/ __Vdly__bg_object_pos;
    CData/*0:0*/ __Vdlyvset__dino_rom_inst__DOT__icon__v0;
    CData/*0:0*/ __Vdlyvset__dino_rom_inst__DOT__icon_run_1__v0;
    CData/*0:0*/ __Vdlyvset__dino_rom_inst__DOT__icon_run_2__v0;
    CData/*0:0*/ __Vdlyvset__dino_rom_inst__DOT__icon_duck__v0;
    CData/*0:0*/ __Vdlyvset__obs_rom_inst_1__DOT__icon_cac_3__v0;
    CData/*0:0*/ __Vdlyvset__obs_rom_inst_1__DOT__icon_cac_2__v0;
    CData/*0:0*/ __Vdlyvset__obs_rom_inst_1__DOT__icon_cac_thick_1__v0;
    CData/*0:0*/ __Vdlyvset__obs_rom_inst_1__DOT__icon_cac_thick_2__v0;
    CData/*0:0*/ __Vdlyvset__obs_rom_inst_1__DOT__icon_cac_thin__v0;
    CData/*0:0*/ __Vdlyvset__obs_rom_inst_1__DOT__icon_bird_low__v0;
    CData/*0:0*/ __Vdlyvset__obs_rom_inst_1__DOT__icon_bird_high__v0;
    CData/*0:0*/ __Vdlyvset__obs_rom_inst_2__DOT__icon_cac_3__v0;
    CData/*0:0*/ __Vdlyvset__obs_rom_inst_2__DOT__icon_cac_2__v0;
    CData/*0:0*/ __Vdlyvset__obs_rom_inst_2__DOT__icon_cac_thick_1__v0;
    CData/*0:0*/ __Vdlyvset__obs_rom_inst_2__DOT__icon_cac_thick_2__v0;
    CData/*0:0*/ __Vdlyvset__obs_rom_inst_2__DOT__icon_cac_thin__v0;
    CData/*0:0*/ __Vdlyvset__obs_rom_inst_2__DOT__icon_bird_low__v0;
    CData/*0:0*/ __Vdlyvset__obs_rom_inst_2__DOT__icon_bird_high__v0;
    CData/*0:0*/ __Vdlyvset__bg_object_rom_inst__DOT__icon_cloud__v0;
    CData/*1:0*/ __Vdly__graphics_inst__DOT__frame_counter;
    CData/*0:0*/ __Vdlyvset__score_module_inst__DOT__score_int__v0;
    CData/*0:0*/ __Vdlyvset__score_module_inst__DOT__score_int__v4;
    CData/*3:0*/ __Vdlyvval__score_module_inst__DOT__score_int__v5;
    CData/*0:0*/ __Vdlyvset__score_module_inst__DOT__score_int__v5;
    CData/*3:0*/ __Vdlyvval__score_module_inst__DOT__score_int__v7;
    CData/*0:0*/ __Vdlyvset__score_module_inst__DOT__score_int__v7;
    CData/*3:0*/ __Vdlyvval__score_module_inst__DOT__score_int__v9;
    CData/*0:0*/ __Vdlyvset__score_module_inst__DOT__score_int__v9;
    CData/*3:0*/ __Vdlyvval__score_module_inst__DOT__score_int__v11;
    CData/*0:0*/ __Vdlyvset__score_module_inst__DOT__score_int__v11;
    CData/*4:0*/ __Vdly__audio_inst__DOT__i_jump__DOT__stage_index;
    CData/*4:0*/ __Vdly__audio_inst__DOT__i_over__DOT__stage_index;
    SData/*9:0*/ __Vtableidx1;
    IData/*18:0*/ __Vdly__audio_inst__DOT__i_jump__DOT__counter;
    IData/*18:0*/ __Vdly__audio_inst__DOT__i_over__DOT__counter;
    IData/*18:0*/ __Vdly__audio_inst__DOT__i_over__DOT__decay_value;
    // Body
    __Vdlyvset__dino_rom_inst__DOT__icon_duck__v0 = 0U;
    __Vdlyvset__dino_rom_inst__DOT__icon_run_2__v0 = 0U;
    __Vdlyvset__dino_rom_inst__DOT__icon_run_1__v0 = 0U;
    __Vdlyvset__dino_rom_inst__DOT__icon__v0 = 0U;
    __Vdlyvset__bg_object_rom_inst__DOT__icon_cloud__v0 = 0U;
    __Vdly__audio_inst__DOT__i_jump__DOT__counter = vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__counter;
    __Vdlyvset__obs_rom_inst_2__DOT__icon_bird_high__v0 = 0U;
    __Vdlyvset__obs_rom_inst_2__DOT__icon_bird_low__v0 = 0U;
    __Vdlyvset__obs_rom_inst_2__DOT__icon_cac_thin__v0 = 0U;
    __Vdlyvset__obs_rom_inst_2__DOT__icon_cac_thick_2__v0 = 0U;
    __Vdlyvset__obs_rom_inst_2__DOT__icon_cac_thick_1__v0 = 0U;
    __Vdlyvset__obs_rom_inst_2__DOT__icon_cac_2__v0 = 0U;
    __Vdlyvset__obs_rom_inst_2__DOT__icon_cac_3__v0 = 0U;
    __Vdlyvset__obs_rom_inst_1__DOT__icon_bird_high__v0 = 0U;
    __Vdlyvset__obs_rom_inst_1__DOT__icon_bird_low__v0 = 0U;
    __Vdlyvset__obs_rom_inst_1__DOT__icon_cac_thin__v0 = 0U;
    __Vdlyvset__obs_rom_inst_1__DOT__icon_cac_thick_2__v0 = 0U;
    __Vdlyvset__obs_rom_inst_1__DOT__icon_cac_thick_1__v0 = 0U;
    __Vdlyvset__obs_rom_inst_1__DOT__icon_cac_2__v0 = 0U;
    __Vdlyvset__obs_rom_inst_1__DOT__icon_cac_3__v0 = 0U;
    __Vdly__audio_inst__DOT__i_over__DOT__decay_value 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__decay_value;
    __Vdly__audio_inst__DOT__i_jump__DOT__stage_index 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index;
    __Vdly__audio_inst__DOT__i_over__DOT__counter = vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__counter;
    __Vdly__audio_inst__DOT__i_over__DOT__stage_index 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index;
    __Vdly__bg_object_pos = vlSymsp->TOP__top_dino__top.bg_object_pos;
    __Vdly__button_up_debounce__DOT__counter = vlSymsp->TOP__top_dino__top.button_up_debounce__DOT__counter;
    __Vdly__button_down_debounce__DOT__counter = vlSymsp->TOP__top_dino__top.button_down_debounce__DOT__counter;
    __Vdly__obstacles_inst__DOT__obstacle2_cross_gen_line_reg 
        = vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__obstacle2_cross_gen_line_reg;
    __Vdly__obstacles_inst__DOT__obstacle1_cross_gen_line_reg 
        = vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__obstacle1_cross_gen_line_reg;
    __Vdly__obstacle2_pos = vlSymsp->TOP__top_dino__top.obstacle2_pos;
    __Vdly__obstacle1_pos = vlSymsp->TOP__top_dino__top.obstacle1_pos;
    __Vdly__graphics_inst__DOT__frame_counter = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__frame_counter;
    __Vdlyvset__score_module_inst__DOT__score_int__v0 = 0U;
    __Vdlyvset__score_module_inst__DOT__score_int__v4 = 0U;
    __Vdlyvset__score_module_inst__DOT__score_int__v5 = 0U;
    __Vdlyvset__score_module_inst__DOT__score_int__v7 = 0U;
    __Vdlyvset__score_module_inst__DOT__score_int__v9 = 0U;
    __Vdlyvset__score_module_inst__DOT__score_int__v11 = 0U;
    vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_lfsr 
        = ((IData)(vlSymsp->TOP__top_dino__top.ena)
            ? ((0xfeU & ((IData)(vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_lfsr) 
                         << 1U)) | (IData)(vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_xnor))
            : 0x55U);
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__dino_rom_inst__DOT__icon_duck__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__dino_rom_inst__DOT__icon_run_2__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__dino_rom_inst__DOT__icon_run_1__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__dino_rom_inst__DOT__icon__v0 = 1U;
    }
    if (vlSymsp->TOP__top_dino__top.rst_n) {
        if (vlSymsp->TOP__top_dino__top.jump_pulse) {
            vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__active = 1U;
        } else {
            if ((0U != (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__state))) {
                if ((1U != (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__state))) {
                    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__active = 0U;
                }
            }
        }
    } else {
        vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__active = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__bg_object_rom_inst__DOT__icon_cloud__v0 = 1U;
    }
    if (vlSymsp->TOP__top_dino__top.rst_n) {
        if (vlSymsp->TOP__top_dino__top.game_over_pulse) {
            vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__active = 1U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__state))) {
                if ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__state))) {
                    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__active = 0U;
                }
            }
        }
    } else {
        vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__active = 0U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__obs_rom_inst_2__DOT__icon_bird_high__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__obs_rom_inst_2__DOT__icon_bird_low__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__obs_rom_inst_2__DOT__icon_cac_thin__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__obs_rom_inst_2__DOT__icon_cac_thick_2__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__obs_rom_inst_2__DOT__icon_cac_thick_1__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__obs_rom_inst_2__DOT__icon_cac_2__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__obs_rom_inst_2__DOT__icon_cac_3__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__obs_rom_inst_1__DOT__icon_bird_high__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__obs_rom_inst_1__DOT__icon_bird_low__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__obs_rom_inst_1__DOT__icon_cac_thin__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__obs_rom_inst_1__DOT__icon_cac_thick_2__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__obs_rom_inst_1__DOT__icon_cac_thick_1__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__obs_rom_inst_1__DOT__icon_cac_2__v0 = 1U;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)))) {
        __Vdlyvset__obs_rom_inst_1__DOT__icon_cac_3__v0 = 1U;
    }
    if (vlSymsp->TOP__top_dino__top.rst_n) {
        vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r 
            = (0xfU & ((IData)(vlSymsp->TOP__top_dino__top.score) 
                       >> 0xcU));
        vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r 
            = (0xfU & ((IData)(vlSymsp->TOP__top_dino__top.score) 
                       >> 8U));
        vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r 
            = (0xfU & ((IData)(vlSymsp->TOP__top_dino__top.score) 
                       >> 4U));
        vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r 
            = (0xfU & (IData)(vlSymsp->TOP__top_dino__top.score));
        vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hsync_r_r 
            = ((IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hsync_r) 
               & 1U);
        vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vsync_r_r 
            = ((IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vsync_r) 
               & 1U);
    } else {
        vlSymsp->TOP__top_dino__top.score_inst_4__DOT__num_r = 0U;
        vlSymsp->TOP__top_dino__top.score_inst_3__DOT__num_r = 0U;
        vlSymsp->TOP__top_dino__top.score_inst_2__DOT__num_r = 0U;
        vlSymsp->TOP__top_dino__top.score_inst_1__DOT__num_r = 0U;
        vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hsync_r_r = 0U;
        vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vsync_r_r = 0U;
    }
    if (vlSymsp->TOP__top_dino__top.rst_n) {
        if ((1U & (IData)(vlSymsp->TOP__top_dino__top.game_tick_20hz))) {
            if ((0U != (IData)(vlSymsp->TOP__top_dino__top.bg_object_pos))) {
                __Vdly__bg_object_pos = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.bg_object_pos) 
                                                  - (IData)(1U)));
            }
            if ((0U == (IData)(vlSymsp->TOP__top_dino__top.bg_object_pos))) {
                __Vdly__bg_object_pos = (0xe0U | (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__top_dino__top.rng) 
                                                     >> 2U)));
            }
        }
    } else {
        __Vdly__bg_object_pos = 0U;
    }
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__is_colored_r 
        = ((IData)(vlSymsp->TOP__top_dino__top.rst_n) 
           & (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__is_colored));
    if (vlSymsp->TOP__top_dino__top.rst_n) {
        if (vlSymsp->TOP__top_dino__top.game_start_pulse) {
            vlSymsp->TOP__top_dino__top.graphics_inst__DOT__collision = 0U;
        } else {
            if ((((IData)(vlSymsp->TOP__top_dino__top.__Vcellinp__graphics_inst__i_color_obstacle) 
                  & (IData)(vlSymsp->TOP__top_dino__top.color_dino)) 
                 & (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__display_on_r))) {
                vlSymsp->TOP__top_dino__top.graphics_inst__DOT__collision = 1U;
            }
        }
    } else {
        vlSymsp->TOP__top_dino__top.graphics_inst__DOT__collision = 0U;
    }
    if (vlSymsp->TOP__top_dino__top.rst_n) {
        vlSymsp->TOP__top_dino__top.score_inst_4__DOT__y_offset_r 
            = vlSymsp->TOP__top_dino__top.score_inst_4__DOT__y_offset;
        vlSymsp->TOP__top_dino__top.score_inst_4__DOT__x_offset_r 
            = vlSymsp->TOP__top_dino__top.score_inst_4__DOT__x_offset;
        vlSymsp->TOP__top_dino__top.score_inst_3__DOT__y_offset_r 
            = vlSymsp->TOP__top_dino__top.score_inst_3__DOT__y_offset;
        vlSymsp->TOP__top_dino__top.score_inst_3__DOT__x_offset_r 
            = vlSymsp->TOP__top_dino__top.score_inst_3__DOT__x_offset;
        vlSymsp->TOP__top_dino__top.score_inst_2__DOT__y_offset_r 
            = vlSymsp->TOP__top_dino__top.score_inst_2__DOT__y_offset;
        vlSymsp->TOP__top_dino__top.score_inst_2__DOT__x_offset_r 
            = vlSymsp->TOP__top_dino__top.score_inst_2__DOT__x_offset;
        vlSymsp->TOP__top_dino__top.score_inst_1__DOT__y_offset_r 
            = vlSymsp->TOP__top_dino__top.score_inst_1__DOT__y_offset;
        vlSymsp->TOP__top_dino__top.score_inst_1__DOT__x_offset_r 
            = vlSymsp->TOP__top_dino__top.score_inst_1__DOT__x_offset;
    } else {
        vlSymsp->TOP__top_dino__top.score_inst_4__DOT__y_offset_r = 0U;
        vlSymsp->TOP__top_dino__top.score_inst_4__DOT__x_offset_r = 0U;
        vlSymsp->TOP__top_dino__top.score_inst_3__DOT__y_offset_r = 0U;
        vlSymsp->TOP__top_dino__top.score_inst_3__DOT__x_offset_r = 0U;
        vlSymsp->TOP__top_dino__top.score_inst_2__DOT__y_offset_r = 0U;
        vlSymsp->TOP__top_dino__top.score_inst_2__DOT__x_offset_r = 0U;
        vlSymsp->TOP__top_dino__top.score_inst_1__DOT__y_offset_r = 0U;
        vlSymsp->TOP__top_dino__top.score_inst_1__DOT__x_offset_r = 0U;
    }
    if (vlSymsp->TOP__top_dino__top.rst_n) {
        if ((1U & (IData)(vlSymsp->TOP__top_dino__top.ui_in))) {
            __Vdly__button_up_debounce__DOT__counter = 0xfU;
        } else {
            if (((IData)(vlSymsp->TOP__top_dino__top.debounce_countdown_en) 
                 & (0U != (IData)(vlSymsp->TOP__top_dino__top.button_up_debounce__DOT__counter)))) {
                __Vdly__button_up_debounce__DOT__counter 
                    = (0xfU & ((IData)(vlSymsp->TOP__top_dino__top.button_up_debounce__DOT__counter) 
                               - (IData)(1U)));
            }
        }
    } else {
        __Vdly__button_up_debounce__DOT__counter = 0U;
    }
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__display_on_r_r 
        = ((IData)(vlSymsp->TOP__top_dino__top.rst_n) 
           & (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__display_on_r));
    if (vlSymsp->TOP__top_dino__top.rst_n) {
        if ((2U & (IData)(vlSymsp->TOP__top_dino__top.ui_in))) {
            __Vdly__button_down_debounce__DOT__counter = 0xfU;
        } else {
            if (((IData)(vlSymsp->TOP__top_dino__top.debounce_countdown_en) 
                 & (0U != (IData)(vlSymsp->TOP__top_dino__top.button_down_debounce__DOT__counter)))) {
                __Vdly__button_down_debounce__DOT__counter 
                    = (0xfU & ((IData)(vlSymsp->TOP__top_dino__top.button_down_debounce__DOT__counter) 
                               - (IData)(1U)));
            }
        }
    } else {
        __Vdly__button_down_debounce__DOT__counter = 0U;
    }
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos_5_r 
        = ((IData)(vlSymsp->TOP__top_dino__top.rst_n) 
           & ((IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos) 
              >> 5U));
    vlSymsp->TOP__top_dino__top.__Vcellout__audio_inst__sound 
        = ((IData)(vlSymsp->TOP__top_dino__top.rst_n) 
           & ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__jump_sound) 
              | (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__game_over_sound)));
    if ((1U & ((~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)) 
               | (IData)(vlSymsp->TOP__top_dino__top.game_start_pulse)))) {
        __Vdly__obstacle1_pos = 0U;
        __Vdly__obstacle2_pos = 0U;
        vlSymsp->TOP__top_dino__top.obstacle1_type = 0U;
        vlSymsp->TOP__top_dino__top.obstacle2_type = 0U;
        __Vdly__obstacles_inst__DOT__obstacle1_cross_gen_line_reg = 0U;
        __Vdly__obstacles_inst__DOT__obstacle2_cross_gen_line_reg = 1U;
    } else {
        if (((~ (IData)(vlSymsp->TOP__top_dino__top.game_frozen)) 
             & (IData)(vlSymsp->TOP__top_dino__top.game_tick_60hz))) {
            if ((0U != (IData)(vlSymsp->TOP__top_dino__top.obstacle1_pos))) {
                __Vdly__obstacle1_pos = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.obstacle1_pos) 
                                                  - (IData)(1U)));
            }
            if ((0U != (IData)(vlSymsp->TOP__top_dino__top.obstacle2_pos))) {
                __Vdly__obstacle2_pos = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.obstacle2_pos) 
                                                  - (IData)(1U)));
            }
            if ((0x47U == (IData)(vlSymsp->TOP__top_dino__top.obstacle1_pos))) {
                __Vdly__obstacles_inst__DOT__obstacle1_cross_gen_line_reg = 1U;
            }
            if ((0x47U == (IData)(vlSymsp->TOP__top_dino__top.obstacle2_pos))) {
                __Vdly__obstacles_inst__DOT__obstacle2_cross_gen_line_reg = 1U;
            }
            if (((0U == (IData)(vlSymsp->TOP__top_dino__top.obstacle1_pos)) 
                 & (IData)(vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__obstacle2_cross_gen_line_reg))) {
                __Vdly__obstacle1_pos = (0xa0U | (0x1fU 
                                                  & (IData)(vlSymsp->TOP__top_dino__top.rng)));
                vlSymsp->TOP__top_dino__top.obstacle1_type 
                    = (7U & ((IData)(vlSymsp->TOP__top_dino__top.rng) 
                             >> 5U));
                __Vdly__obstacles_inst__DOT__obstacle2_cross_gen_line_reg = 0U;
            }
            if (((0U == (IData)(vlSymsp->TOP__top_dino__top.obstacle2_pos)) 
                 & (IData)(vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__obstacle1_cross_gen_line_reg))) {
                __Vdly__obstacle2_pos = (0xa0U | (0x1fU 
                                                  & (IData)(vlSymsp->TOP__top_dino__top.rng)));
                vlSymsp->TOP__top_dino__top.obstacle2_type 
                    = (7U & ((IData)(vlSymsp->TOP__top_dino__top.rng) 
                             >> 5U));
                __Vdly__obstacles_inst__DOT__obstacle1_cross_gen_line_reg = 0U;
            }
        }
    }
    if (vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__physics_rst_n) {
        if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__game_over)))) {
            if ((1U & (IData)(vlSymsp->TOP__top_dino__top.game_tick_20hz))) {
                if (vlSymsp->TOP__top_dino__top.button_down) {
                    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__velocity = 0U;
                } else {
                    if (vlSymsp->TOP__top_dino__top.jump_pulse) {
                        vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__velocity = 9U;
                    } else {
                        if ((0x20U & (IData)(vlSymsp->TOP__top_dino__top.player_position))) {
                            vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__velocity 
                                = (0xfU & (IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__adder_res));
                        }
                    }
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__top_dino__top.game_tick_20hz))) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__adder_res) 
                                  >> 5U)))) {
                        vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__velocity = 0U;
                    }
                }
            }
        }
    } else {
        vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__velocity = 0U;
    }
    __Vtableidx1 = (((IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__jump_done) 
                     << 9U) | (((IData)(vlSymsp->TOP__top_dino__top.button_down) 
                                << 8U) | (((IData)(vlSymsp->TOP__top_dino__top.crash) 
                                           << 7U) | 
                                          (((IData)(vlSymsp->TOP__top_dino__top.button_up) 
                                            << 6U) 
                                           | (((IData)(vlSymsp->TOP__top_dino__top.game_tick_20hz) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__top_dino__top.game_state) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__top_dino__top.rst_n)))))));
    vlSymsp->TOP__top_dino__top.game_state = vlSymsp->TOP__top_dino__top.__Vtable1_game_state
        [__Vtableidx1];
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__game_tick_r 
        = ((IData)(vlSymsp->TOP__top_dino__top.rst_n) 
           & (IData)(vlSymsp->TOP__top_dino__top.__Vcellout__graphics_inst__o_game_tick_20hz));
    if (vlSymsp->TOP__top_dino__top.rst_n) {
        vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__y_offset_r 
            = vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__y_offset;
        vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__y_offset_r 
            = vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__y_offset;
        vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__x_offset_r 
            = vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__x_offset;
        vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__x_offset_r 
            = vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__x_offset;
        vlSymsp->TOP__top_dino__top.dino_inst__DOT__x_offset_r 
            = vlSymsp->TOP__top_dino__top.dino_inst__DOT__x_offset;
        vlSymsp->TOP__top_dino__top.dino_inst__DOT__y_offset_r 
            = vlSymsp->TOP__top_dino__top.dino_inst__DOT__y_offset;
    } else {
        vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__y_offset_r = 0U;
        vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__y_offset_r = 0U;
        vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__x_offset_r = 0U;
        vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__x_offset_r = 0U;
        vlSymsp->TOP__top_dino__top.dino_inst__DOT__x_offset_r = 0U;
        vlSymsp->TOP__top_dino__top.dino_inst__DOT__y_offset_r = 0U;
    }
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hpos 
        = ((IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__hmaxxed)
            ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hpos))));
    if (vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__hmaxxed) {
        vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos 
            = ((IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__vmaxxed)
                ? 0U : (0x3ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos))));
    }
    if (vlSymsp->TOP__top_dino__top.rst_n) {
        if (vlSymsp->TOP__top_dino__top.game_tick_60hz) {
            __Vdly__graphics_inst__DOT__frame_counter 
                = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__frame_counter)));
            if ((2U == (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__frame_counter))) {
                __Vdly__graphics_inst__DOT__frame_counter = 0U;
            }
        }
    } else {
        __Vdly__graphics_inst__DOT__frame_counter = 0U;
    }
    if (vlSymsp->TOP__top_dino__top.rst_n) {
        vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__y_offset_r 
            = vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__y_offset;
        vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__x_offset_r 
            = vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__x_offset;
    } else {
        vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__y_offset_r = 0U;
        vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__x_offset_r = 0U;
    }
    if ((1U & ((~ (IData)(vlSymsp->TOP__top_dino__top.rst_n)) 
               | (IData)(vlSymsp->TOP__top_dino__top.game_start_pulse)))) {
        __Vdlyvset__score_module_inst__DOT__score_int__v0 = 1U;
    } else {
        if ((1U & ((~ (IData)(vlSymsp->TOP__top_dino__top.game_frozen)) 
                   & (IData)(vlSymsp->TOP__top_dino__top.game_tick_20hz)))) {
            if ((9U == vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                 [0U])) {
                if ((9U == vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                     [1U])) {
                    if ((9U == vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                         [2U])) {
                        if ((9U == vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                             [3U])) {
                            __Vdlyvset__score_module_inst__DOT__score_int__v4 = 1U;
                        } else {
                            __Vdlyvval__score_module_inst__DOT__score_int__v5 
                                = (0xfU & ((IData)(1U) 
                                           + vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                                           [3U]));
                            __Vdlyvset__score_module_inst__DOT__score_int__v5 = 1U;
                        }
                    } else {
                        __Vdlyvval__score_module_inst__DOT__score_int__v7 
                            = (0xfU & ((IData)(1U) 
                                       + vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                                       [2U]));
                        __Vdlyvset__score_module_inst__DOT__score_int__v7 = 1U;
                    }
                } else {
                    __Vdlyvval__score_module_inst__DOT__score_int__v9 
                        = (0xfU & ((IData)(1U) + vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                                   [1U]));
                    __Vdlyvset__score_module_inst__DOT__score_int__v9 = 1U;
                }
            } else {
                __Vdlyvval__score_module_inst__DOT__score_int__v11 
                    = (0xfU & ((IData)(1U) + vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                               [0U]));
                __Vdlyvset__score_module_inst__DOT__score_int__v11 = 1U;
            }
        }
    }
    if (__Vdlyvset__dino_rom_inst__DOT__icon_duck__v0) {
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_duck[0U] = 0U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_duck[1U] = 0U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_duck[2U] = 0U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_duck[3U] = 0x70U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_duck[4U] = 0xf9U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_duck[5U] = 0x3fU;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_duck[6U] = 0x1eU;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_duck[7U] = 0x14U;
    }
    if (__Vdlyvset__dino_rom_inst__DOT__icon_run_2__v0) {
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_2[0U] = 0x70U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_2[1U] = 0xf0U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_2[2U] = 0x30U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_2[3U] = 0x39U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_2[4U] = 0x3fU;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_2[5U] = 0x1eU;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_2[6U] = 0x14U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_2[7U] = 0x10U;
    }
    if (__Vdlyvset__dino_rom_inst__DOT__icon_run_1__v0) {
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_1[0U] = 0x70U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_1[1U] = 0xf0U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_1[2U] = 0x30U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_1[3U] = 0x39U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_1[4U] = 0x3fU;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_1[5U] = 0x1eU;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_1[6U] = 0x14U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon_run_1[7U] = 4U;
    }
    if (__Vdlyvset__dino_rom_inst__DOT__icon__v0) {
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon[0U] = 0x70U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon[1U] = 0xf0U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon[2U] = 0x30U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon[3U] = 0x39U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon[4U] = 0x3fU;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon[5U] = 0x1eU;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon[6U] = 0x14U;
        vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__icon[7U] = 0x14U;
    }
    if (__Vdlyvset__bg_object_rom_inst__DOT__icon_cloud__v0) {
        vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__icon_cloud[0U] = 0U;
        vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__icon_cloud[1U] = 0U;
        vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__icon_cloud[2U] = 0xcU;
        vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__icon_cloud[3U] = 0x1eU;
        vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__icon_cloud[4U] = 0x6bU;
        vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__icon_cloud[5U] = 0xc1U;
        vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__icon_cloud[6U] = 0xffU;
        vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__icon_cloud[7U] = 0x66U;
    }
    if (__Vdlyvset__obs_rom_inst_2__DOT__icon_bird_high__v0) {
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[0U] = 0x180U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[1U] = 0xc0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[2U] = 0x1ecU;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[3U] = 0xbeaU;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[4U] = 0x7f6U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[5U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[6U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[7U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[8U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[9U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[0xaU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[0xbU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[0xcU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[0xdU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[0xeU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_high[0xfU] = 0U;
    }
    if (__Vdlyvset__obs_rom_inst_2__DOT__icon_bird_low__v0) {
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[0U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[1U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[2U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[3U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[4U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[5U] = 0x180U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[6U] = 0xc0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[7U] = 0x1ecU;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[8U] = 0xbeaU;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[9U] = 0x7f6U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[0xaU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[0xbU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[0xcU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[0xdU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[0xeU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_bird_low[0xfU] = 0U;
    }
    if (__Vdlyvset__obs_rom_inst_2__DOT__icon_cac_thin__v0) {
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[0U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[1U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[2U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[3U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[4U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[5U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[6U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[7U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[8U] = 0x100U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[9U] = 0x100U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[0xaU] = 0x500U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[0xbU] = 0x700U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[0xcU] = 0x140U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[0xdU] = 0x1c0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[0xeU] = 0x100U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thin[0xfU] = 0x100U;
    }
    if (__Vdlyvset__obs_rom_inst_2__DOT__icon_cac_thick_2__v0) {
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[0U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[1U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[2U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[3U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[4U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[5U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[6U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[7U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[8U] = 0x180U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[9U] = 0xd80U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[0xaU] = 0xfb0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[0xbU] = 0x1b0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[0xcU] = 0x1f0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[0xdU] = 0x180U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[0xeU] = 0x180U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_2[0xfU] = 0x180U;
    }
    if (__Vdlyvset__obs_rom_inst_2__DOT__icon_cac_thick_1__v0) {
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[0U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[1U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[2U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[3U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[4U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[5U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[6U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[7U] = 0x180U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[8U] = 0x380U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[9U] = 0x3b0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[0xaU] = 0x3b0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[0xbU] = 0x1bf0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[0xcU] = 0x1b80U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[0xdU] = 0x1f80U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[0xeU] = 0x380U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_thick_1[0xfU] = 0x380U;
    }
    if (__Vdlyvset__obs_rom_inst_2__DOT__icon_cac_2__v0) {
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[0U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[1U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[2U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[3U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[4U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[5U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[6U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[7U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[8U] = 0xc00U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[9U] = 0xc10U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[0xaU] = 0xc10U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[0xbU] = 0x2c14U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[0xcU] = 0x3d5cU;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[0xdU] = 0xf70U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[0xeU] = 0xc10U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_2[0xfU] = 0xc10U;
    }
    if (__Vdlyvset__obs_rom_inst_2__DOT__icon_cac_3__v0) {
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[0U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[1U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[2U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[3U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[4U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[5U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[6U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[7U] = 0x180U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[8U] = 0x1184U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[9U] = 0x1184U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[0xaU] = 0x5594U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[0xbU] = 0x579dU;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[0xcU] = 0x51a7U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[0xdU] = 0x31e4U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[0xeU] = 0x1184U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__icon_cac_3[0xfU] = 0x1184U;
    }
    if (__Vdlyvset__obs_rom_inst_1__DOT__icon_bird_high__v0) {
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[0U] = 0x180U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[1U] = 0xc0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[2U] = 0x1ecU;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[3U] = 0xbeaU;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[4U] = 0x7f6U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[5U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[6U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[7U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[8U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[9U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[0xaU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[0xbU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[0xcU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[0xdU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[0xeU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_high[0xfU] = 0U;
    }
    if (__Vdlyvset__obs_rom_inst_1__DOT__icon_bird_low__v0) {
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[0U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[1U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[2U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[3U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[4U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[5U] = 0x180U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[6U] = 0xc0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[7U] = 0x1ecU;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[8U] = 0xbeaU;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[9U] = 0x7f6U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[0xaU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[0xbU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[0xcU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[0xdU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[0xeU] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_bird_low[0xfU] = 0U;
    }
    if (__Vdlyvset__obs_rom_inst_1__DOT__icon_cac_thin__v0) {
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[0U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[1U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[2U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[3U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[4U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[5U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[6U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[7U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[8U] = 0x100U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[9U] = 0x100U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[0xaU] = 0x500U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[0xbU] = 0x700U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[0xcU] = 0x140U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[0xdU] = 0x1c0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[0xeU] = 0x100U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thin[0xfU] = 0x100U;
    }
    if (__Vdlyvset__obs_rom_inst_1__DOT__icon_cac_thick_2__v0) {
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[0U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[1U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[2U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[3U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[4U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[5U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[6U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[7U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[8U] = 0x180U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[9U] = 0xd80U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[0xaU] = 0xfb0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[0xbU] = 0x1b0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[0xcU] = 0x1f0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[0xdU] = 0x180U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[0xeU] = 0x180U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_2[0xfU] = 0x180U;
    }
    if (__Vdlyvset__obs_rom_inst_1__DOT__icon_cac_thick_1__v0) {
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[0U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[1U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[2U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[3U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[4U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[5U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[6U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[7U] = 0x180U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[8U] = 0x380U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[9U] = 0x3b0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[0xaU] = 0x3b0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[0xbU] = 0x1bf0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[0xcU] = 0x1b80U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[0xdU] = 0x1f80U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[0xeU] = 0x380U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_thick_1[0xfU] = 0x380U;
    }
    if (__Vdlyvset__obs_rom_inst_1__DOT__icon_cac_2__v0) {
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[0U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[1U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[2U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[3U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[4U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[5U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[6U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[7U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[8U] = 0xc00U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[9U] = 0xc10U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[0xaU] = 0xc10U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[0xbU] = 0x2c14U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[0xcU] = 0x3d5cU;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[0xdU] = 0xf70U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[0xeU] = 0xc10U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_2[0xfU] = 0xc10U;
    }
    if (__Vdlyvset__obs_rom_inst_1__DOT__icon_cac_3__v0) {
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[0U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[1U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[2U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[3U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[4U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[5U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[6U] = 0U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[7U] = 0x180U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[8U] = 0x1184U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[9U] = 0x1184U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[0xaU] = 0x5594U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[0xbU] = 0x579dU;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[0xcU] = 0x51a7U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[0xdU] = 0x31e4U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[0xeU] = 0x1184U;
        vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__icon_cac_3[0xfU] = 0x1184U;
    }
    vlSymsp->TOP__top_dino__top.bg_object_pos = __Vdly__bg_object_pos;
    vlSymsp->TOP__top_dino__top.button_up_debounce__DOT__counter 
        = __Vdly__button_up_debounce__DOT__counter;
    vlSymsp->TOP__top_dino__top.button_down_debounce__DOT__counter 
        = __Vdly__button_down_debounce__DOT__counter;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__obstacle1_cross_gen_line_reg 
        = __Vdly__obstacles_inst__DOT__obstacle1_cross_gen_line_reg;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__obstacle2_cross_gen_line_reg 
        = __Vdly__obstacles_inst__DOT__obstacle2_cross_gen_line_reg;
    vlSymsp->TOP__top_dino__top.obstacle1_pos = __Vdly__obstacle1_pos;
    vlSymsp->TOP__top_dino__top.obstacle2_pos = __Vdly__obstacle2_pos;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__frame_counter 
        = __Vdly__graphics_inst__DOT__frame_counter;
    if (__Vdlyvset__score_module_inst__DOT__score_int__v0) {
        vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int[0U] = 0U;
        vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int[1U] = 0U;
        vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int[2U] = 0U;
        vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int[3U] = 0U;
    }
    if (__Vdlyvset__score_module_inst__DOT__score_int__v4) {
        vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int[3U] = 0U;
    }
    if (__Vdlyvset__score_module_inst__DOT__score_int__v5) {
        vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int[3U] 
            = __Vdlyvval__score_module_inst__DOT__score_int__v5;
        vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int[2U] = 0U;
    }
    if (__Vdlyvset__score_module_inst__DOT__score_int__v7) {
        vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int[2U] 
            = __Vdlyvval__score_module_inst__DOT__score_int__v7;
        vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int[1U] = 0U;
    }
    if (__Vdlyvset__score_module_inst__DOT__score_int__v9) {
        vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int[1U] 
            = __Vdlyvval__score_module_inst__DOT__score_int__v9;
        vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int[0U] = 0U;
    }
    if (__Vdlyvset__score_module_inst__DOT__score_int__v11) {
        vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int[0U] 
            = __Vdlyvval__score_module_inst__DOT__score_int__v11;
    }
    vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_xnor 
        = (1U & (((((IData)(vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_lfsr) 
                    >> 7U) ^ ~ ((IData)(vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_lfsr) 
                                >> 5U)) ^ ~ ((IData)(vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_lfsr) 
                                             >> 4U)) 
                 ^ ~ ((IData)(vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_lfsr) 
                      >> 3U)));
    vlSymsp->TOP__top_dino__top.rng = vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__r_lfsr;
    vlSymsp->TOP__top_dino__top.hsync = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hsync_r_r;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hsync_r 
        = ((IData)(vlSymsp->TOP__top_dino__top.rst_n) 
           & (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hsync));
    vlSymsp->TOP__top_dino__top.vsync = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vsync_r_r;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vsync_r 
        = ((IData)(vlSymsp->TOP__top_dino__top.rst_n) 
           & (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vsync));
    vlSymsp->TOP__top_dino__top.bg_object_inst__DOT__bg_object_pos 
        = vlSymsp->TOP__top_dino__top.bg_object_pos;
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__i_xpos 
        = vlSymsp->TOP__top_dino__top.bg_object_pos;
    vlSymsp->TOP__top_dino__top.crash = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__collision;
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__in_sprite 
        = ((4U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__x_offset_r)) 
           & (7U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__y_offset_r)));
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
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__in_sprite 
        = ((4U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__x_offset_r)) 
           & (7U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__y_offset_r)));
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
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__in_sprite 
        = ((4U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__x_offset_r)) 
           & (7U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__y_offset_r)));
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
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__in_sprite 
        = ((4U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__x_offset_r)) 
           & (7U > (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__y_offset_r)));
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
    vlSymsp->TOP__top_dino__top.button_up = (0U != (IData)(vlSymsp->TOP__top_dino__top.button_up_debounce__DOT__counter));
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
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__display_on_r 
        = ((IData)(vlSymsp->TOP__top_dino__top.rst_n) 
           & (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__display_on));
    vlSymsp->TOP__top_dino__top.button_down = (0U != (IData)(vlSymsp->TOP__top_dino__top.button_down_debounce__DOT__counter));
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__sound 
        = vlSymsp->TOP__top_dino__top.__Vcellout__audio_inst__sound;
    vlSymsp->TOP__top_dino__top.uio_out = ((IData)(vlSymsp->TOP__top_dino__top.__Vcellout__audio_inst__sound) 
                                           << 7U);
    if (vlSymsp->TOP__top_dino__top.rst_n) {
        if (vlSymsp->TOP__top_dino__top.jump_pulse) {
            __Vdly__audio_inst__DOT__i_jump__DOT__counter = 0U;
            __Vdly__audio_inst__DOT__i_jump__DOT__stage_index = 0U;
            vlSymsp->TOP__top_dino__top.audio_inst__DOT__jump_sound = 0U;
        } else {
            if ((0U == (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__state))) {
                __Vdly__audio_inst__DOT__i_jump__DOT__stage_index = 0U;
                __Vdly__audio_inst__DOT__i_jump__DOT__counter = 0U;
                vlSymsp->TOP__top_dino__top.audio_inst__DOT__jump_sound = 0U;
            } else {
                if ((1U == (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__state))) {
                    if ((vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__counter 
                         >= vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__decay_value)) {
                        vlSymsp->TOP__top_dino__top.audio_inst__DOT__jump_sound = 0U;
                    }
                    if ((0x51615U <= vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__counter)) {
                        __Vdly__audio_inst__DOT__i_jump__DOT__stage_index 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index)));
                        vlSymsp->TOP__top_dino__top.audio_inst__DOT__jump_sound = 1U;
                        __Vdly__audio_inst__DOT__i_jump__DOT__counter = 0U;
                    } else {
                        __Vdly__audio_inst__DOT__i_jump__DOT__counter 
                            = (0x7ffffU & ((IData)(1U) 
                                           + vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__counter));
                    }
                    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__decay_value 
                        = ((0x10U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                            ? ((8U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                ? ((4U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                    ? ((2U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                        ? 0x19U : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                                    ? 0x19U
                                                    : 0x51bU))
                                    : ((2U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                        ? ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                            ? 0x51bU
                                            : 0x7a8U)
                                        : ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                            ? 0x7a8U
                                            : 0xa36U)))
                                : ((4U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                    ? ((2U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                        ? ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                            ? 0xcc3U
                                            : 0xf51U)
                                        : ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                            ? 0x11dfU
                                            : 0x146cU))
                                    : ((2U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                        ? ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                            ? 0x1987U
                                            : 0x1ea3U)
                                        : ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                            ? 0x23beU
                                            : 0x28d9U))))
                            : ((8U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                ? ((4U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                    ? ((2U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                        ? ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                            ? 0x330fU
                                            : 0x3ab8U)
                                        : ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                            ? 0x477cU
                                            : 0x5440U))
                                    : ((2U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                        ? ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                            ? 0x6392U
                                            : 0x7571U)
                                        : ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                            ? 0x8c6bU
                                            : 0xa5f3U)))
                                : ((4U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                    ? ((2U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                        ? ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                            ? 0xc496U
                                            : 0xeae2U)
                                        : ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                            ? 0x11649U
                                            : 0x14959U))
                                    : ((2U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                        ? ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                            ? 0x1869fU
                                            : 0x1ce1cU)
                                        : ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index))
                                            ? 0x224eaU
                                            : 0x28b0aU)))));
                } else {
                    if ((2U == (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__state))) {
                        vlSymsp->TOP__top_dino__top.audio_inst__DOT__jump_sound = 0U;
                    } else {
                        __Vdly__audio_inst__DOT__i_jump__DOT__counter = 0U;
                        __Vdly__audio_inst__DOT__i_jump__DOT__stage_index = 0U;
                        vlSymsp->TOP__top_dino__top.audio_inst__DOT__jump_sound = 0U;
                    }
                }
            }
        }
    } else {
        __Vdly__audio_inst__DOT__i_jump__DOT__stage_index = 0U;
        vlSymsp->TOP__top_dino__top.audio_inst__DOT__jump_sound = 0U;
        vlSymsp->TOP__top_dino__top.audio_inst__DOT__jump_sound = 0U;
    }
    if (vlSymsp->TOP__top_dino__top.rst_n) {
        if (vlSymsp->TOP__top_dino__top.game_over_pulse) {
            __Vdly__audio_inst__DOT__i_over__DOT__stage_index = 0U;
            __Vdly__audio_inst__DOT__i_over__DOT__counter = 0U;
            vlSymsp->TOP__top_dino__top.audio_inst__DOT__game_over_sound = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__state))) {
                if ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__state))) {
                    vlSymsp->TOP__top_dino__top.audio_inst__DOT__game_over_sound = 0U;
                } else {
                    if ((vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__counter 
                         >= vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__decay_value)) {
                        vlSymsp->TOP__top_dino__top.audio_inst__DOT__game_over_sound = 0U;
                    }
                    if ((0x30d40U <= vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__counter)) {
                        __Vdly__audio_inst__DOT__i_over__DOT__stage_index 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index)));
                        vlSymsp->TOP__top_dino__top.audio_inst__DOT__game_over_sound = 1U;
                        __Vdly__audio_inst__DOT__i_over__DOT__counter = 0U;
                    } else {
                        __Vdly__audio_inst__DOT__i_over__DOT__counter 
                            = (0x7ffffU & ((IData)(1U) 
                                           + vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__counter));
                    }
                    if (((((((((0U == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                       - (IData)(0xfU))) 
                               | (1U == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                         - (IData)(0xfU)))) 
                              | (2U == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                        - (IData)(0xfU)))) 
                             | (3U == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                       - (IData)(0xfU)))) 
                            | (4U == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                      - (IData)(0xfU)))) 
                           | (5U == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                     - (IData)(0xfU)))) 
                          | (6U == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                    - (IData)(0xfU)))) 
                         | (7U == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                   - (IData)(0xfU))))) {
                        __Vdly__audio_inst__DOT__i_over__DOT__decay_value 
                            = ((0U == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                       - (IData)(0xfU)))
                                ? 0x93f6U : ((1U == 
                                              ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                               - (IData)(0xfU)))
                                              ? 0x8432U
                                              : ((2U 
                                                  == 
                                                  ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                                   - (IData)(0xfU)))
                                                  ? 0x7600U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                                    - (IData)(0xfU)))
                                                   ? 0x693cU
                                                   : 
                                                  ((4U 
                                                    == 
                                                    ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                                     - (IData)(0xfU)))
                                                    ? 0x5dc8U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                                      - (IData)(0xfU)))
                                                     ? 0x5387U
                                                     : 
                                                    ((6U 
                                                      == 
                                                      ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                                       - (IData)(0xfU)))
                                                      ? 0x4a63U
                                                      : 0x4246U)))))));
                    } else {
                        if (((((((((8U == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                           - (IData)(0xfU))) 
                                   | (9U == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                             - (IData)(0xfU)))) 
                                  | (0xaU == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                              - (IData)(0xfU)))) 
                                 | (0xbU == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                             - (IData)(0xfU)))) 
                                | (0xcU == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                            - (IData)(0xfU)))) 
                               | (0xdU == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                           - (IData)(0xfU)))) 
                              | (0xeU == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                          - (IData)(0xfU)))) 
                             | (0xfU == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                         - (IData)(0xfU))))) {
                            __Vdly__audio_inst__DOT__i_over__DOT__decay_value 
                                = ((8U == ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                           - (IData)(0xfU)))
                                    ? 0x3b1fU : ((9U 
                                                  == 
                                                  ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                                   - (IData)(0xfU)))
                                                  ? 0x34daU
                                                  : 
                                                 ((0xaU 
                                                   == 
                                                   ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                                    - (IData)(0xfU)))
                                                   ? 0x2f64U
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                                     - (IData)(0xfU)))
                                                    ? 0x2aacU
                                                    : 
                                                   ((0xcU 
                                                     == 
                                                     ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                                      - (IData)(0xfU)))
                                                     ? 0x2697U
                                                     : 
                                                    ((0xdU 
                                                      == 
                                                      ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                                       - (IData)(0xfU)))
                                                      ? 0x22e4U
                                                      : 
                                                     ((0xeU 
                                                       == 
                                                       ((IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index) 
                                                        - (IData)(0xfU)))
                                                       ? 0x1f8cU
                                                       : 0x1c84U)))))));
                        }
                    }
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__state))) {
                    if ((vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__counter 
                         >= vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__decay_value)) {
                        vlSymsp->TOP__top_dino__top.audio_inst__DOT__game_over_sound = 0U;
                    }
                    if ((0x30d40U <= vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__counter)) {
                        __Vdly__audio_inst__DOT__i_over__DOT__stage_index 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index)));
                        vlSymsp->TOP__top_dino__top.audio_inst__DOT__game_over_sound = 1U;
                        __Vdly__audio_inst__DOT__i_over__DOT__counter = 0U;
                    } else {
                        __Vdly__audio_inst__DOT__i_over__DOT__counter 
                            = (0x7ffffU & ((IData)(1U) 
                                           + vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__counter));
                    }
                    __Vdly__audio_inst__DOT__i_over__DOT__decay_value 
                        = ((0x10U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                            ? 0x93f6U : ((8U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                                          ? ((4U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                                              ? ((2U 
                                                  & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                                                   ? 0x1c84U
                                                   : 0x1f8cU)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                                                   ? 0x22e4U
                                                   : 0x2697U))
                                              : ((2U 
                                                  & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                                                   ? 0x2aacU
                                                   : 0x2f64U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                                                   ? 0x34daU
                                                   : 0x3b1fU)))
                                          : ((4U & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                                              ? ((2U 
                                                  & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                                                   ? 0x4246U
                                                   : 0x4a63U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                                                   ? 0x5387U
                                                   : 0x5dc8U))
                                              : ((2U 
                                                  & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                                                   ? 0x693cU
                                                   : 0x7600U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index))
                                                   ? 0x8432U
                                                   : 0x93f6U)))));
                } else {
                    __Vdly__audio_inst__DOT__i_over__DOT__stage_index = 0U;
                    __Vdly__audio_inst__DOT__i_over__DOT__counter = 0U;
                    vlSymsp->TOP__top_dino__top.audio_inst__DOT__game_over_sound = 0U;
                }
            }
        }
    } else {
        __Vdly__audio_inst__DOT__i_over__DOT__stage_index = 0U;
        __Vdly__audio_inst__DOT__i_over__DOT__counter = 0U;
        vlSymsp->TOP__top_dino__top.audio_inst__DOT__game_over_sound = 0U;
    }
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__obstacle1_pos 
        = vlSymsp->TOP__top_dino__top.obstacle1_pos;
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__i_xpos 
        = vlSymsp->TOP__top_dino__top.obstacle1_pos;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__obstacle2_pos 
        = vlSymsp->TOP__top_dino__top.obstacle2_pos;
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__i_xpos 
        = vlSymsp->TOP__top_dino__top.obstacle2_pos;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__obstacle1_type 
        = vlSymsp->TOP__top_dino__top.obstacle1_type;
    vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__i_obs_type 
        = vlSymsp->TOP__top_dino__top.obstacle1_type;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__obstacle2_type 
        = vlSymsp->TOP__top_dino__top.obstacle2_type;
    vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__i_obs_type 
        = vlSymsp->TOP__top_dino__top.obstacle2_type;
    if (vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__physics_rst_n) {
        if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__game_over)))) {
            if ((1U & (~ (IData)(vlSymsp->TOP__top_dino__top.game_tick_20hz)))) {
                if ((2U & (IData)(vlSymsp->TOP__top_dino__top.game_tick_20hz))) {
                    vlSymsp->TOP__top_dino__top.player_position 
                        = ((0x20U & (IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__adder_res))
                            ? (IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__adder_res)
                            : 0U);
                }
            }
        }
    } else {
        vlSymsp->TOP__top_dino__top.player_position = 0U;
    }
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__game_state 
        = vlSymsp->TOP__top_dino__top.game_state;
    vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__i_player_state 
        = vlSymsp->TOP__top_dino__top.game_state;
    vlSymsp->TOP__top_dino__top.game_frozen = ((0U 
                                                == (IData)(vlSymsp->TOP__top_dino__top.game_state)) 
                                               | (5U 
                                                  == (IData)(vlSymsp->TOP__top_dino__top.game_state)));
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__running 
        = ((2U == (IData)(vlSymsp->TOP__top_dino__top.game_state)) 
           | (3U == (IData)(vlSymsp->TOP__top_dino__top.game_state)));
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_game_tick_20hz_r 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__game_tick_r;
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__in_sprite 
        = ((0x10U > (IData)(vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__x_offset_r)) 
           & (0x10U > (IData)(vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__y_offset_r)));
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__rom_x 
        = (0xfU & (IData)(vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__x_offset_r));
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__rom_y 
        = (0xfU & (IData)(vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__y_offset_r));
    vlSymsp->TOP__top_dino__top.obs_rom_counter_2 = 
        (((IData)(vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__rom_y) 
          << 4U) | (IData)(vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__rom_x));
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__in_sprite 
        = ((0x10U > (IData)(vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__x_offset_r)) 
           & (0x10U > (IData)(vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__y_offset_r)));
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__rom_x 
        = (0xfU & (IData)(vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__x_offset_r));
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__rom_y 
        = (0xfU & (IData)(vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__y_offset_r));
    vlSymsp->TOP__top_dino__top.obs_rom_counter_1 = 
        (((IData)(vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__rom_y) 
          << 4U) | (IData)(vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__rom_x));
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__rom_x 
        = (7U & (IData)(vlSymsp->TOP__top_dino__top.dino_inst__DOT__x_offset_r));
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__in_sprite 
        = ((8U > (IData)(vlSymsp->TOP__top_dino__top.dino_inst__DOT__x_offset_r)) 
           & (8U > (IData)(vlSymsp->TOP__top_dino__top.dino_inst__DOT__y_offset_r)));
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__rom_y 
        = (7U & (IData)(vlSymsp->TOP__top_dino__top.dino_inst__DOT__y_offset_r));
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__hpos 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hpos;
    vlSymsp->TOP__top_dino__top.hpos = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hpos) 
                                                 >> 2U));
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__vpos 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos;
    vlSymsp->TOP__top_dino__top.debounce_countdown_en 
        = (1U & (((IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos) 
                  >> 5U) & (~ (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos_5_r))));
    vlSymsp->TOP__top_dino__top.vpos = (0xffU & ((IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos) 
                                                 >> 2U));
    vlSymsp->TOP__top_dino__top.game_tick_60hz = ((0U 
                                                   == (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos)) 
                                                  & (0U 
                                                     == (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hpos)));
    vlSymsp->TOP__top_dino__top.__Vcellout__graphics_inst__o_game_tick_20hz 
        = ((1U == (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__frame_counter)) 
           & (IData)(vlSymsp->TOP__top_dino__top.game_tick_60hz));
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__rom_y 
        = (7U & (IData)(vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__y_offset_r));
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__in_sprite 
        = ((8U > (IData)(vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__x_offset_r)) 
           & (8U > (IData)(vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__y_offset_r)));
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__rom_x 
        = (7U & (IData)(vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__x_offset_r));
    vlSymsp->TOP__top_dino__top.score = ((vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                                          [3U] << 0xcU) 
                                         | ((vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                                             [2U] << 8U) 
                                            | ((vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                                                [1U] 
                                                << 4U) 
                                               | vlSymsp->TOP__top_dino__top.score_module_inst__DOT__score_int
                                               [0U])));
    vlSymsp->TOP__top_dino__top.lfsr_inst__DOT__lfsr_data 
        = vlSymsp->TOP__top_dino__top.rng;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__rng 
        = vlSymsp->TOP__top_dino__top.rng;
    vlSymsp->TOP__top_dino__top.bg_object_inst__DOT__rng 
        = vlSymsp->TOP__top_dino__top.rng;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_hsync 
        = vlSymsp->TOP__top_dino__top.hsync;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hsync 
        = ((0x290U <= (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hpos)) 
           & (0x2efU >= (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hpos)));
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_vsync 
        = vlSymsp->TOP__top_dino__top.vsync;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vsync 
        = ((0x1eaU <= (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos)) 
           & (0x1ebU >= (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos)));
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__crash 
        = vlSymsp->TOP__top_dino__top.crash;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_collision 
        = vlSymsp->TOP__top_dino__top.crash;
    vlSymsp->TOP__top_dino__top.score_color_4 = ((0U 
                                                  != (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__segment)) 
                                                 & (IData)(vlSymsp->TOP__top_dino__top.score_inst_4__DOT__in_sprite));
    vlSymsp->TOP__top_dino__top.score_color_3 = ((0U 
                                                  != (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__segment)) 
                                                 & (IData)(vlSymsp->TOP__top_dino__top.score_inst_3__DOT__in_sprite));
    vlSymsp->TOP__top_dino__top.score_color_2 = ((0U 
                                                  != (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__segment)) 
                                                 & (IData)(vlSymsp->TOP__top_dino__top.score_inst_2__DOT__in_sprite));
    vlSymsp->TOP__top_dino__top.score_color_1 = ((0U 
                                                  != (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__segment)) 
                                                 & (IData)(vlSymsp->TOP__top_dino__top.score_inst_1__DOT__in_sprite));
    vlSymsp->TOP__top_dino__top.button_up_debounce__DOT__button_out 
        = vlSymsp->TOP__top_dino__top.button_up;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__button_start 
        = vlSymsp->TOP__top_dino__top.button_up;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__button_up 
        = vlSymsp->TOP__top_dino__top.button_up;
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
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__display_on 
        = ((0x280U > (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hpos)) 
           & (0x1e0U > (IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vpos)));
    vlSymsp->TOP__top_dino__top.button_down_debounce__DOT__button_out 
        = vlSymsp->TOP__top_dino__top.button_down;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__button_down 
        = vlSymsp->TOP__top_dino__top.button_down;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__active_vel 
        = ((IData)(vlSymsp->TOP__top_dino__top.button_down)
            ? 6U : (0xfU & (IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__velocity)));
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__counter 
        = __Vdly__audio_inst__DOT__i_jump__DOT__counter;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__stage_index 
        = __Vdly__audio_inst__DOT__i_jump__DOT__stage_index;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__decay_value 
        = __Vdly__audio_inst__DOT__i_over__DOT__decay_value;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__counter 
        = __Vdly__audio_inst__DOT__i_over__DOT__counter;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__stage_index 
        = __Vdly__audio_inst__DOT__i_over__DOT__stage_index;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__game_over 
        = (5U == (IData)(vlSymsp->TOP__top_dino__top.game_state));
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__game_frozen 
        = vlSymsp->TOP__top_dino__top.game_frozen;
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__game_frozen 
        = vlSymsp->TOP__top_dino__top.game_frozen;
    vlSymsp->TOP__top_dino__top.score_module_inst__DOT__game_frozen 
        = vlSymsp->TOP__top_dino__top.game_frozen;
    vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__i_rom_counter 
        = vlSymsp->TOP__top_dino__top.obs_rom_counter_2;
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__o_rom_counter 
        = vlSymsp->TOP__top_dino__top.obs_rom_counter_2;
    vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_y 
        = (0xfU & ((IData)(vlSymsp->TOP__top_dino__top.obs_rom_counter_2) 
                   >> 4U));
    vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__rom_x 
        = (0xfU & (IData)(vlSymsp->TOP__top_dino__top.obs_rom_counter_2));
    vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__i_rom_counter 
        = vlSymsp->TOP__top_dino__top.obs_rom_counter_1;
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__o_rom_counter 
        = vlSymsp->TOP__top_dino__top.obs_rom_counter_1;
    vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_y 
        = (0xfU & ((IData)(vlSymsp->TOP__top_dino__top.obs_rom_counter_1) 
                   >> 4U));
    vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__rom_x 
        = (0xfU & (IData)(vlSymsp->TOP__top_dino__top.obs_rom_counter_1));
    vlSymsp->TOP__top_dino__top.dino_rom_counter = 
        (((IData)(vlSymsp->TOP__top_dino__top.dino_inst__DOT__rom_y) 
          << 3U) | (IData)(vlSymsp->TOP__top_dino__top.dino_inst__DOT__rom_x));
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
    vlSymsp->TOP__top_dino__top.button_up_debounce__DOT__countdown_en 
        = vlSymsp->TOP__top_dino__top.debounce_countdown_en;
    vlSymsp->TOP__top_dino__top.button_down_debounce__DOT__countdown_en 
        = vlSymsp->TOP__top_dino__top.debounce_countdown_en;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_vpos_5_r 
        = vlSymsp->TOP__top_dino__top.debounce_countdown_en;
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
    vlSymsp->TOP__top_dino__top.obstacles_inst__DOT__game_tick 
        = vlSymsp->TOP__top_dino__top.game_tick_60hz;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_game_tick_60hz 
        = vlSymsp->TOP__top_dino__top.game_tick_60hz;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__o_game_tick_20hz 
        = vlSymsp->TOP__top_dino__top.__Vcellout__graphics_inst__o_game_tick_20hz;
    vlSymsp->TOP__top_dino__top.game_tick_20hz = (((IData)(vlSymsp->TOP__top_dino__top.graphics_inst__DOT__game_tick_r) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__top_dino__top.__Vcellout__graphics_inst__o_game_tick_20hz));
    vlSymsp->TOP__top_dino__top.bg_objects_rom_counter 
        = (((IData)(vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__rom_y) 
            << 3U) | (IData)(vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__rom_x));
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
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__hsync 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hsync;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__vsync 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__vsync;
    vlSymsp->TOP__top_dino__top.score_inst_4__DOT__o_score_color 
        = vlSymsp->TOP__top_dino__top.score_color_4;
    vlSymsp->TOP__top_dino__top.score_inst_3__DOT__o_score_color 
        = vlSymsp->TOP__top_dino__top.score_color_3;
    vlSymsp->TOP__top_dino__top.score_inst_2__DOT__o_score_color 
        = vlSymsp->TOP__top_dino__top.score_color_2;
    vlSymsp->TOP__top_dino__top.score_inst_1__DOT__o_score_color 
        = vlSymsp->TOP__top_dino__top.score_color_1;
    vlSymsp->TOP__top_dino__top.__Vcellinp__graphics_inst__i_color_score 
        = ((((IData)(vlSymsp->TOP__top_dino__top.score_color_1) 
             | (IData)(vlSymsp->TOP__top_dino__top.score_color_2)) 
            | (IData)(vlSymsp->TOP__top_dino__top.score_color_3)) 
           | (IData)(vlSymsp->TOP__top_dino__top.score_color_4));
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__display_on 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__display_on;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__button_down 
        = vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__button_down;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__wave_out 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__jump_sound;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__state 
        = ((IData)(vlSymsp->TOP__top_dino__top.rst_n)
            ? (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__next_state)
            : 0U);
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__wave_out 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__game_over_sound;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__state 
        = ((IData)(vlSymsp->TOP__top_dino__top.rst_n)
            ? (IData)(vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__next_state)
            : 0U);
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__game_over 
        = vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__game_over;
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__i_ypos 
        = vlSymsp->TOP__top_dino__top.player_position;
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__y_offset 
        = (0xffU & (((IData)(vlSymsp->TOP__top_dino__top.vpos) 
                     - ((0xc0U & ((- (IData)((1U & 
                                              ((IData)(vlSymsp->TOP__top_dino__top.player_position) 
                                               >> 5U)))) 
                                  << 6U)) | (IData)(vlSymsp->TOP__top_dino__top.player_position))) 
                    - (IData)(0x32U)));
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__player_position 
        = vlSymsp->TOP__top_dino__top.player_position;
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
    vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__i_rom_counter 
        = vlSymsp->TOP__top_dino__top.dino_rom_counter;
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__o_rom_counter 
        = vlSymsp->TOP__top_dino__top.dino_rom_counter;
    vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_y 
        = (7U & ((IData)(vlSymsp->TOP__top_dino__top.dino_rom_counter) 
                 >> 3U));
    vlSymsp->TOP__top_dino__top.dino_rom_inst__DOT__rom_x 
        = (7U & (IData)(vlSymsp->TOP__top_dino__top.dino_rom_counter));
    vlSymsp->TOP__top_dino__top.bg_line_inst__DOT__o_color_bg 
        = vlSymsp->TOP__top_dino__top.color_bg_line;
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
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__position 
        = vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__player_position;
    vlSymsp->TOP__top_dino__top.obs_rom_inst_2__DOT__o_sprite_color 
        = vlSymsp->TOP__top_dino__top.obs_color_2;
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__i_sprite_color 
        = vlSymsp->TOP__top_dino__top.obs_color_2;
    vlSymsp->TOP__top_dino__top.color_obs_2 = 0U;
    if (vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__in_sprite) {
        vlSymsp->TOP__top_dino__top.color_obs_2 = vlSymsp->TOP__top_dino__top.obs_color_2;
    }
    vlSymsp->TOP__top_dino__top.obs_rom_inst_1__DOT__o_sprite_color 
        = vlSymsp->TOP__top_dino__top.obs_color_1;
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__i_sprite_color 
        = vlSymsp->TOP__top_dino__top.obs_color_1;
    vlSymsp->TOP__top_dino__top.color_obs_1 = 0U;
    if (vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__in_sprite) {
        vlSymsp->TOP__top_dino__top.color_obs_1 = vlSymsp->TOP__top_dino__top.obs_color_1;
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
    vlSymsp->TOP__top_dino__top.bg_object_color = (1U 
                                                   & (vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__icon_cloud
                                                      [vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__rom_y] 
                                                      >> (IData)(vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__rom_x)));
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
    vlSymsp->TOP__top_dino__top.obs_inst_2__DOT__o_color_obs 
        = vlSymsp->TOP__top_dino__top.color_obs_2;
    vlSymsp->TOP__top_dino__top.obs_inst_1__DOT__o_color_obs 
        = vlSymsp->TOP__top_dino__top.color_obs_1;
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
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__is_over 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__game_is_over;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__jump_pulse 
        = vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__jump_pulse;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__sound_trigger 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__jump_pulse;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__jump_done 
        = (1U & (~ ((IData)(vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__adder_res) 
                    >> 5U)));
    vlSymsp->TOP__top_dino__top.bg_object_rom_inst__DOT__o_sprite_color 
        = vlSymsp->TOP__top_dino__top.bg_object_color;
    vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__i_sprite_color 
        = vlSymsp->TOP__top_dino__top.bg_object_color;
    vlSymsp->TOP__top_dino__top.color_bg_object = 0U;
    if (vlSymsp->TOP__top_dino__top.bg_render_inst__DOT__in_sprite) {
        vlSymsp->TOP__top_dino__top.color_bg_object 
            = vlSymsp->TOP__top_dino__top.bg_object_color;
    }
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__i_color_obstacle 
        = vlSymsp->TOP__top_dino__top.__Vcellinp__graphics_inst__i_color_obstacle;
    vlSymsp->TOP__top_dino__top.dino_inst__DOT__o_color_dino 
        = vlSymsp->TOP__top_dino__top.color_dino;
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__i_color_player 
        = vlSymsp->TOP__top_dino__top.color_dino;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__jump_done 
        = vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__jump_done;
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

VL_INLINE_OPT void Vtop_dino_tt_um_uwasic_dinogame::_combo__TOP__top_dino__top__6(Vtop_dino__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_dino_tt_um_uwasic_dinogame::_combo__TOP__top_dino__top__6\n"); );
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
    vlSymsp->TOP__top_dino__top.graphics_inst__DOT__hvsync_gen__DOT__reset 
        = vlSymsp->TOP__top_dino__top.graphics_inst__DOT__rst;
    vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__u_player_physics__DOT__rst_n 
        = vlSymsp->TOP__top_dino__top.player_constroller_inst__DOT__physics_rst_n;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_jump__DOT__rst_n 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__rst_n;
    vlSymsp->TOP__top_dino__top.audio_inst__DOT__i_over__DOT__rst_n 
        = vlSymsp->TOP__top_dino__top.audio_inst__DOT__rst_n;
}
