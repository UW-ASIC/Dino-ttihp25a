// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_dino.h for the primary calling header

#ifndef _VTOP_DINO_TT_UM_UWASIC_DINOGAME_H_
#define _VTOP_DINO_TT_UM_UWASIC_DINOGAME_H_  // guard

#include "verilated.h"
#include "Vtop_dino__Dpi.h"

//==========

class Vtop_dino__Syms;

//----------

VL_MODULE(Vtop_dino_tt_um_uwasic_dinogame) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(ui_in,7,0);
    VL_OUT8(uo_out,7,0);
    VL_IN8(uio_in,7,0);
    VL_OUT8(uio_out,7,0);
    VL_OUT8(uio_oe,7,0);
    VL_IN8(ena,0,0);
    VL_IN8(rst_n,0,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ game_tick_60hz;
        CData/*1:0*/ game_tick_20hz;
        CData/*0:0*/ debounce_countdown_en;
        CData/*0:0*/ button_up;
        CData/*0:0*/ button_down;
        CData/*0:0*/ crash;
        CData/*5:0*/ player_position;
        CData/*0:0*/ game_start_pulse;
        CData/*0:0*/ game_over_pulse;
        CData/*0:0*/ game_frozen;
        CData/*0:0*/ jump_pulse;
        CData/*2:0*/ game_state;
        CData/*7:0*/ obstacle1_pos;
        CData/*7:0*/ obstacle2_pos;
        CData/*2:0*/ obstacle1_type;
        CData/*2:0*/ obstacle2_type;
        CData/*7:0*/ bg_object_pos;
        CData/*7:0*/ rng;
        CData/*0:0*/ hsync;
        CData/*0:0*/ vsync;
        CData/*1:0*/ R;
        CData/*1:0*/ G;
        CData/*1:0*/ B;
        CData/*7:0*/ hpos;
        CData/*7:0*/ vpos;
        CData/*0:0*/ color_dino;
        CData/*0:0*/ color_obs_1;
        CData/*0:0*/ color_obs_2;
        CData/*0:0*/ color_bg_object;
        CData/*0:0*/ color_bg_line;
        CData/*0:0*/ obs_color_1;
        CData/*0:0*/ obs_color_2;
        CData/*0:0*/ bg_object_color;
        CData/*0:0*/ dino_color;
        CData/*0:0*/ score_color_1;
        CData/*0:0*/ score_color_2;
        CData/*0:0*/ score_color_3;
        CData/*0:0*/ score_color_4;
        CData/*5:0*/ dino_rom_counter;
        CData/*7:0*/ obs_rom_counter_1;
        CData/*7:0*/ obs_rom_counter_2;
        CData/*5:0*/ bg_objects_rom_counter;
        CData/*0:0*/ _unused;
        CData/*0:0*/ button_up_debounce__DOT__clk;
        CData/*0:0*/ button_up_debounce__DOT__rst_n;
        CData/*0:0*/ button_up_debounce__DOT__countdown_en;
        CData/*0:0*/ button_up_debounce__DOT__button_in;
        CData/*0:0*/ button_up_debounce__DOT__button_out;
        CData/*3:0*/ button_up_debounce__DOT__counter;
        CData/*0:0*/ button_down_debounce__DOT__clk;
        CData/*0:0*/ button_down_debounce__DOT__rst_n;
        CData/*0:0*/ button_down_debounce__DOT__countdown_en;
        CData/*0:0*/ button_down_debounce__DOT__button_in;
        CData/*0:0*/ button_down_debounce__DOT__button_out;
        CData/*3:0*/ button_down_debounce__DOT__counter;
        CData/*0:0*/ lfsr_inst__DOT__clk;
        CData/*0:0*/ lfsr_inst__DOT__enable;
        CData/*7:0*/ lfsr_inst__DOT__lfsr_data;
        CData/*7:0*/ lfsr_inst__DOT__r_lfsr;
        CData/*0:0*/ lfsr_inst__DOT__r_xnor;
        CData/*0:0*/ player_constroller_inst__DOT__clk;
        CData/*0:0*/ player_constroller_inst__DOT__rst_n;
        CData/*1:0*/ player_constroller_inst__DOT__game_tick;
        CData/*0:0*/ player_constroller_inst__DOT__button_start;
    };
    struct {
        CData/*0:0*/ player_constroller_inst__DOT__button_up;
        CData/*0:0*/ player_constroller_inst__DOT__button_down;
        CData/*0:0*/ player_constroller_inst__DOT__crash;
        CData/*5:0*/ player_constroller_inst__DOT__player_position;
        CData/*0:0*/ player_constroller_inst__DOT__game_frozen;
        CData/*0:0*/ player_constroller_inst__DOT__game_start_pulse;
        CData/*0:0*/ player_constroller_inst__DOT__game_over_pulse;
        CData/*0:0*/ player_constroller_inst__DOT__jump_pulse;
        CData/*2:0*/ player_constroller_inst__DOT__game_state;
        CData/*0:0*/ player_constroller_inst__DOT__running;
        CData/*0:0*/ player_constroller_inst__DOT__jump_done;
        CData/*0:0*/ player_constroller_inst__DOT__physics_rst_n;
        CData/*0:0*/ player_constroller_inst__DOT__game_over;
        CData/*0:0*/ player_constroller_inst__DOT__u_player_physics__DOT__clk;
        CData/*0:0*/ player_constroller_inst__DOT__u_player_physics__DOT__rst_n;
        CData/*1:0*/ player_constroller_inst__DOT__u_player_physics__DOT__game_tick;
        CData/*0:0*/ player_constroller_inst__DOT__u_player_physics__DOT__game_over;
        CData/*0:0*/ player_constroller_inst__DOT__u_player_physics__DOT__jump_pulse;
        CData/*0:0*/ player_constroller_inst__DOT__u_player_physics__DOT__button_down;
        CData/*5:0*/ player_constroller_inst__DOT__u_player_physics__DOT__position;
        CData/*0:0*/ player_constroller_inst__DOT__u_player_physics__DOT__jump_done;
        CData/*3:0*/ player_constroller_inst__DOT__u_player_physics__DOT__velocity;
        CData/*3:0*/ player_constroller_inst__DOT__u_player_physics__DOT__active_vel;
        CData/*3:0*/ player_constroller_inst__DOT__u_player_physics__DOT__adder_in1;
        CData/*5:0*/ player_constroller_inst__DOT__u_player_physics__DOT__adder_in2;
        CData/*5:0*/ player_constroller_inst__DOT__u_player_physics__DOT__adder_res;
        CData/*0:0*/ obstacles_inst__DOT__clk;
        CData/*0:0*/ obstacles_inst__DOT__rst_n;
        CData/*0:0*/ obstacles_inst__DOT__game_frozen;
        CData/*0:0*/ obstacles_inst__DOT__game_start;
        CData/*0:0*/ obstacles_inst__DOT__game_tick;
        CData/*7:0*/ obstacles_inst__DOT__rng;
        CData/*7:0*/ obstacles_inst__DOT__obstacle1_pos;
        CData/*7:0*/ obstacles_inst__DOT__obstacle2_pos;
        CData/*2:0*/ obstacles_inst__DOT__obstacle1_type;
        CData/*2:0*/ obstacles_inst__DOT__obstacle2_type;
        CData/*0:0*/ obstacles_inst__DOT__obstacle1_cross_gen_line_reg;
        CData/*0:0*/ obstacles_inst__DOT__obstacle2_cross_gen_line_reg;
        CData/*0:0*/ bg_object_inst__DOT__clk;
        CData/*0:0*/ bg_object_inst__DOT__rst_n;
        CData/*0:0*/ bg_object_inst__DOT__game_tick;
        CData/*7:0*/ bg_object_inst__DOT__rng;
        CData/*7:0*/ bg_object_inst__DOT__bg_object_pos;
        CData/*0:0*/ dino_rom_inst__DOT__clk;
        CData/*0:0*/ dino_rom_inst__DOT__rst;
        CData/*5:0*/ dino_rom_inst__DOT__i_rom_counter;
        CData/*2:0*/ dino_rom_inst__DOT__i_player_state;
        CData/*0:0*/ dino_rom_inst__DOT__o_sprite_color;
        CData/*2:0*/ dino_rom_inst__DOT__rom_x;
        CData/*2:0*/ dino_rom_inst__DOT__rom_y;
        CData/*0:0*/ obs_rom_inst_1__DOT__clk;
        CData/*0:0*/ obs_rom_inst_1__DOT__rst;
        CData/*7:0*/ obs_rom_inst_1__DOT__i_rom_counter;
        CData/*2:0*/ obs_rom_inst_1__DOT__i_obs_type;
        CData/*0:0*/ obs_rom_inst_1__DOT__o_sprite_color;
        CData/*3:0*/ obs_rom_inst_1__DOT__rom_x;
        CData/*3:0*/ obs_rom_inst_1__DOT__rom_y;
        CData/*0:0*/ obs_rom_inst_2__DOT__clk;
        CData/*0:0*/ obs_rom_inst_2__DOT__rst;
        CData/*7:0*/ obs_rom_inst_2__DOT__i_rom_counter;
        CData/*2:0*/ obs_rom_inst_2__DOT__i_obs_type;
        CData/*0:0*/ obs_rom_inst_2__DOT__o_sprite_color;
        CData/*3:0*/ obs_rom_inst_2__DOT__rom_x;
        CData/*3:0*/ obs_rom_inst_2__DOT__rom_y;
    };
    struct {
        CData/*0:0*/ bg_object_rom_inst__DOT__clk;
        CData/*0:0*/ bg_object_rom_inst__DOT__rst;
        CData/*5:0*/ bg_object_rom_inst__DOT__i_rom_counter;
        CData/*0:0*/ bg_object_rom_inst__DOT__o_sprite_color;
        CData/*2:0*/ bg_object_rom_inst__DOT__rom_x;
        CData/*2:0*/ bg_object_rom_inst__DOT__rom_y;
        CData/*0:0*/ score_inst_1__DOT__clk;
        CData/*0:0*/ score_inst_1__DOT__rst;
        CData/*3:0*/ score_inst_1__DOT__num;
        CData/*7:0*/ score_inst_1__DOT__i_hpos;
        CData/*7:0*/ score_inst_1__DOT__i_vpos;
        CData/*0:0*/ score_inst_1__DOT__o_score_color;
        CData/*7:0*/ score_inst_1__DOT__y_offset;
        CData/*7:0*/ score_inst_1__DOT__x_offset;
        CData/*7:0*/ score_inst_1__DOT__y_offset_r;
        CData/*7:0*/ score_inst_1__DOT__x_offset_r;
        CData/*3:0*/ score_inst_1__DOT__num_r;
        CData/*0:0*/ score_inst_1__DOT__in_sprite;
        CData/*6:0*/ score_inst_1__DOT__segment;
        CData/*0:0*/ score_inst_2__DOT__clk;
        CData/*0:0*/ score_inst_2__DOT__rst;
        CData/*3:0*/ score_inst_2__DOT__num;
        CData/*7:0*/ score_inst_2__DOT__i_hpos;
        CData/*7:0*/ score_inst_2__DOT__i_vpos;
        CData/*0:0*/ score_inst_2__DOT__o_score_color;
        CData/*7:0*/ score_inst_2__DOT__y_offset;
        CData/*7:0*/ score_inst_2__DOT__x_offset;
        CData/*7:0*/ score_inst_2__DOT__y_offset_r;
        CData/*7:0*/ score_inst_2__DOT__x_offset_r;
        CData/*3:0*/ score_inst_2__DOT__num_r;
        CData/*0:0*/ score_inst_2__DOT__in_sprite;
        CData/*6:0*/ score_inst_2__DOT__segment;
        CData/*0:0*/ score_inst_3__DOT__clk;
        CData/*0:0*/ score_inst_3__DOT__rst;
        CData/*3:0*/ score_inst_3__DOT__num;
        CData/*7:0*/ score_inst_3__DOT__i_hpos;
        CData/*7:0*/ score_inst_3__DOT__i_vpos;
        CData/*0:0*/ score_inst_3__DOT__o_score_color;
        CData/*7:0*/ score_inst_3__DOT__y_offset;
        CData/*7:0*/ score_inst_3__DOT__x_offset;
        CData/*7:0*/ score_inst_3__DOT__y_offset_r;
        CData/*7:0*/ score_inst_3__DOT__x_offset_r;
        CData/*3:0*/ score_inst_3__DOT__num_r;
        CData/*0:0*/ score_inst_3__DOT__in_sprite;
        CData/*6:0*/ score_inst_3__DOT__segment;
        CData/*0:0*/ score_inst_4__DOT__clk;
        CData/*0:0*/ score_inst_4__DOT__rst;
        CData/*3:0*/ score_inst_4__DOT__num;
        CData/*7:0*/ score_inst_4__DOT__i_hpos;
        CData/*7:0*/ score_inst_4__DOT__i_vpos;
        CData/*0:0*/ score_inst_4__DOT__o_score_color;
        CData/*7:0*/ score_inst_4__DOT__y_offset;
        CData/*7:0*/ score_inst_4__DOT__x_offset;
        CData/*7:0*/ score_inst_4__DOT__y_offset_r;
        CData/*7:0*/ score_inst_4__DOT__x_offset_r;
        CData/*3:0*/ score_inst_4__DOT__num_r;
        CData/*0:0*/ score_inst_4__DOT__in_sprite;
        CData/*6:0*/ score_inst_4__DOT__segment;
        CData/*0:0*/ dino_inst__DOT__clk;
        CData/*0:0*/ dino_inst__DOT__rst;
        CData/*7:0*/ dino_inst__DOT__i_hpos;
        CData/*7:0*/ dino_inst__DOT__i_vpos;
        CData/*0:0*/ dino_inst__DOT__o_color_dino;
        CData/*5:0*/ dino_inst__DOT__o_rom_counter;
    };
    struct {
        CData/*0:0*/ dino_inst__DOT__i_sprite_color;
        CData/*5:0*/ dino_inst__DOT__i_ypos;
        CData/*7:0*/ dino_inst__DOT__y_offset;
        CData/*7:0*/ dino_inst__DOT__x_offset;
        CData/*0:0*/ dino_inst__DOT__in_sprite;
        CData/*7:0*/ dino_inst__DOT__y_offset_r;
        CData/*7:0*/ dino_inst__DOT__x_offset_r;
        CData/*2:0*/ dino_inst__DOT__rom_x;
        CData/*2:0*/ dino_inst__DOT__rom_y;
        CData/*0:0*/ obs_inst_1__DOT__clk;
        CData/*0:0*/ obs_inst_1__DOT__rst;
        CData/*7:0*/ obs_inst_1__DOT__i_hpos;
        CData/*7:0*/ obs_inst_1__DOT__i_vpos;
        CData/*0:0*/ obs_inst_1__DOT__o_color_obs;
        CData/*7:0*/ obs_inst_1__DOT__o_rom_counter;
        CData/*0:0*/ obs_inst_1__DOT__i_sprite_color;
        CData/*7:0*/ obs_inst_1__DOT__i_xpos;
        CData/*7:0*/ obs_inst_1__DOT__y_offset;
        CData/*7:0*/ obs_inst_1__DOT__x_offset;
        CData/*0:0*/ obs_inst_1__DOT__in_sprite;
        CData/*7:0*/ obs_inst_1__DOT__y_offset_r;
        CData/*7:0*/ obs_inst_1__DOT__x_offset_r;
        CData/*3:0*/ obs_inst_1__DOT__rom_x;
        CData/*3:0*/ obs_inst_1__DOT__rom_y;
        CData/*0:0*/ obs_inst_2__DOT__clk;
        CData/*0:0*/ obs_inst_2__DOT__rst;
        CData/*7:0*/ obs_inst_2__DOT__i_hpos;
        CData/*7:0*/ obs_inst_2__DOT__i_vpos;
        CData/*0:0*/ obs_inst_2__DOT__o_color_obs;
        CData/*7:0*/ obs_inst_2__DOT__o_rom_counter;
        CData/*0:0*/ obs_inst_2__DOT__i_sprite_color;
        CData/*7:0*/ obs_inst_2__DOT__i_xpos;
        CData/*7:0*/ obs_inst_2__DOT__y_offset;
        CData/*7:0*/ obs_inst_2__DOT__x_offset;
        CData/*0:0*/ obs_inst_2__DOT__in_sprite;
        CData/*7:0*/ obs_inst_2__DOT__y_offset_r;
        CData/*7:0*/ obs_inst_2__DOT__x_offset_r;
        CData/*3:0*/ obs_inst_2__DOT__rom_x;
        CData/*3:0*/ obs_inst_2__DOT__rom_y;
        CData/*0:0*/ bg_render_inst__DOT__clk;
        CData/*0:0*/ bg_render_inst__DOT__rst;
        CData/*7:0*/ bg_render_inst__DOT__i_hpos;
        CData/*7:0*/ bg_render_inst__DOT__i_vpos;
        CData/*0:0*/ bg_render_inst__DOT__o_color_bg;
        CData/*5:0*/ bg_render_inst__DOT__o_rom_counter;
        CData/*0:0*/ bg_render_inst__DOT__i_sprite_color;
        CData/*7:0*/ bg_render_inst__DOT__i_xpos;
        CData/*7:0*/ bg_render_inst__DOT__y_offset;
        CData/*7:0*/ bg_render_inst__DOT__x_offset;
        CData/*0:0*/ bg_render_inst__DOT__in_sprite;
        CData/*7:0*/ bg_render_inst__DOT__y_offset_r;
        CData/*7:0*/ bg_render_inst__DOT__x_offset_r;
        CData/*2:0*/ bg_render_inst__DOT__rom_x;
        CData/*2:0*/ bg_render_inst__DOT__rom_y;
        CData/*7:0*/ bg_line_inst__DOT__i_vpos;
        CData/*0:0*/ bg_line_inst__DOT__o_color_bg;
        CData/*0:0*/ graphics_inst__DOT__clk;
        CData/*0:0*/ graphics_inst__DOT__rst;
        CData/*0:0*/ graphics_inst__DOT__o_hsync;
        CData/*0:0*/ graphics_inst__DOT__o_vsync;
        CData/*1:0*/ graphics_inst__DOT__o_blue;
        CData/*1:0*/ graphics_inst__DOT__o_red;
        CData/*1:0*/ graphics_inst__DOT__o_green;
        CData/*7:0*/ graphics_inst__DOT__o_hpos;
    };
    struct {
        CData/*7:0*/ graphics_inst__DOT__o_vpos;
        CData/*0:0*/ graphics_inst__DOT__i_color_obstacle;
        CData/*0:0*/ graphics_inst__DOT__i_color_player;
        CData/*0:0*/ graphics_inst__DOT__i_color_background;
        CData/*0:0*/ graphics_inst__DOT__i_color_score;
        CData/*0:0*/ graphics_inst__DOT__i_game_start_pulse;
        CData/*0:0*/ graphics_inst__DOT__o_game_tick_60hz;
        CData/*0:0*/ graphics_inst__DOT__o_game_tick_20hz;
        CData/*0:0*/ graphics_inst__DOT__o_game_tick_20hz_r;
        CData/*0:0*/ graphics_inst__DOT__o_vpos_5_r;
        CData/*0:0*/ graphics_inst__DOT__o_collision;
        CData/*0:0*/ graphics_inst__DOT__vpos_5_r;
        CData/*0:0*/ graphics_inst__DOT__display_on;
        CData/*0:0*/ graphics_inst__DOT__hsync;
        CData/*0:0*/ graphics_inst__DOT__vsync;
        CData/*0:0*/ graphics_inst__DOT__hsync_r;
        CData/*0:0*/ graphics_inst__DOT__vsync_r;
        CData/*0:0*/ graphics_inst__DOT__hsync_r_r;
        CData/*0:0*/ graphics_inst__DOT__vsync_r_r;
        CData/*0:0*/ graphics_inst__DOT__display_on_r;
        CData/*0:0*/ graphics_inst__DOT__display_on_r_r;
        CData/*0:0*/ graphics_inst__DOT__is_colored;
        CData/*0:0*/ graphics_inst__DOT__is_colored_r;
        CData/*1:0*/ graphics_inst__DOT__frame_counter;
        CData/*0:0*/ graphics_inst__DOT__game_tick_r;
        CData/*0:0*/ graphics_inst__DOT__collision;
        CData/*0:0*/ graphics_inst__DOT__hvsync_gen__DOT__clk;
        CData/*0:0*/ graphics_inst__DOT__hvsync_gen__DOT__reset;
        CData/*0:0*/ graphics_inst__DOT__hvsync_gen__DOT__hsync;
        CData/*0:0*/ graphics_inst__DOT__hvsync_gen__DOT__vsync;
        CData/*0:0*/ graphics_inst__DOT__hvsync_gen__DOT__display_on;
        CData/*0:0*/ graphics_inst__DOT__hvsync_gen__DOT__hmaxxed;
        CData/*0:0*/ graphics_inst__DOT__hvsync_gen__DOT__vmaxxed;
        CData/*0:0*/ score_module_inst__DOT__game_start;
        CData/*0:0*/ score_module_inst__DOT__game_frozen;
        CData/*0:0*/ score_module_inst__DOT__game_tick;
        CData/*0:0*/ score_module_inst__DOT__clk;
        CData/*0:0*/ score_module_inst__DOT__rst_n;
        CData/*0:0*/ audio_inst__DOT__clk;
        CData/*0:0*/ audio_inst__DOT__rst_n;
        CData/*0:0*/ audio_inst__DOT__game_is_over;
        CData/*0:0*/ audio_inst__DOT__jump_pulse;
        CData/*0:0*/ audio_inst__DOT__sound;
        CData/*0:0*/ audio_inst__DOT__jump_sound;
        CData/*0:0*/ audio_inst__DOT__game_over_sound;
        CData/*0:0*/ audio_inst__DOT__i_jump__DOT__clk;
        CData/*0:0*/ audio_inst__DOT__i_jump__DOT__rst_n;
        CData/*0:0*/ audio_inst__DOT__i_jump__DOT__sound_trigger;
        CData/*0:0*/ audio_inst__DOT__i_jump__DOT__wave_out;
        CData/*1:0*/ audio_inst__DOT__i_jump__DOT__state;
        CData/*1:0*/ audio_inst__DOT__i_jump__DOT__next_state;
        CData/*4:0*/ audio_inst__DOT__i_jump__DOT__stage_index;
        CData/*0:0*/ audio_inst__DOT__i_jump__DOT__active;
        CData/*0:0*/ audio_inst__DOT__i_over__DOT__clk;
        CData/*0:0*/ audio_inst__DOT__i_over__DOT__rst_n;
        CData/*0:0*/ audio_inst__DOT__i_over__DOT__is_over;
        CData/*0:0*/ audio_inst__DOT__i_over__DOT__wave_out;
        CData/*1:0*/ audio_inst__DOT__i_over__DOT__state;
        CData/*1:0*/ audio_inst__DOT__i_over__DOT__next_state;
        CData/*4:0*/ audio_inst__DOT__i_over__DOT__stage_index;
        CData/*0:0*/ audio_inst__DOT__i_over__DOT__active;
        SData/*15:0*/ score;
        SData/*9:0*/ graphics_inst__DOT__hpos;
        SData/*9:0*/ graphics_inst__DOT__vpos;
    };
    struct {
        SData/*9:0*/ graphics_inst__DOT__hvsync_gen__DOT__hpos;
        SData/*9:0*/ graphics_inst__DOT__hvsync_gen__DOT__vpos;
        SData/*15:0*/ score_module_inst__DOT__score;
        IData/*18:0*/ audio_inst__DOT__i_jump__DOT__counter;
        IData/*18:0*/ audio_inst__DOT__i_jump__DOT__decay_value;
        IData/*18:0*/ audio_inst__DOT__i_over__DOT__counter;
        IData/*18:0*/ audio_inst__DOT__i_over__DOT__decay_value;
        CData/*7:0*/ dino_rom_inst__DOT__icon[8];
        CData/*7:0*/ dino_rom_inst__DOT__icon_run_1[8];
        CData/*7:0*/ dino_rom_inst__DOT__icon_run_2[8];
        CData/*7:0*/ dino_rom_inst__DOT__icon_duck[8];
        SData/*15:0*/ obs_rom_inst_1__DOT__icon_cac_3[16];
        SData/*15:0*/ obs_rom_inst_1__DOT__icon_cac_2[16];
        SData/*15:0*/ obs_rom_inst_1__DOT__icon_cac_thick_1[16];
        SData/*15:0*/ obs_rom_inst_1__DOT__icon_cac_thick_2[16];
        SData/*15:0*/ obs_rom_inst_1__DOT__icon_cac_thin[16];
        SData/*15:0*/ obs_rom_inst_1__DOT__icon_bird_low[16];
        SData/*15:0*/ obs_rom_inst_1__DOT__icon_bird_high[16];
        SData/*15:0*/ obs_rom_inst_2__DOT__icon_cac_3[16];
        SData/*15:0*/ obs_rom_inst_2__DOT__icon_cac_2[16];
        SData/*15:0*/ obs_rom_inst_2__DOT__icon_cac_thick_1[16];
        SData/*15:0*/ obs_rom_inst_2__DOT__icon_cac_thick_2[16];
        SData/*15:0*/ obs_rom_inst_2__DOT__icon_cac_thin[16];
        SData/*15:0*/ obs_rom_inst_2__DOT__icon_bird_low[16];
        SData/*15:0*/ obs_rom_inst_2__DOT__icon_bird_high[16];
        CData/*7:0*/ bg_object_rom_inst__DOT__icon_cloud[8];
        CData/*3:0*/ score_module_inst__DOT__score_int[4];
    };
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellout__graphics_inst__o_game_tick_20hz;
    CData/*0:0*/ __Vcellinp__graphics_inst__i_color_score;
    CData/*0:0*/ __Vcellinp__graphics_inst__i_color_obstacle;
    CData/*0:0*/ __Vcellinp__graphics_inst__i_color_background;
    CData/*0:0*/ __Vcellout__audio_inst__sound;
    CData/*7:0*/ __Vtableidx2;
    static CData/*2:0*/ __Vtable1_game_state[1024];
    static CData/*1:0*/ __Vtable2_audio_inst__DOT__i_over__DOT__next_state[256];
    
    // INTERNAL VARIABLES
  private:
    Vtop_dino__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    enum _IDataCONV { CONV = 2U};
    const IData var_CONV;
    enum _IDatalfsr_inst__DOT__NUM_BITS { lfsr_inst__DOT__NUM_BITS = 8U};
    const IData var_lfsr_inst__DOT__NUM_BITS;
    enum _IDataplayer_constroller_inst__DOT__RESTART { player_constroller_inst__DOT__RESTART = 0U};
    const IData var_player_constroller_inst__DOT__RESTART;
    enum _IDataplayer_constroller_inst__DOT__JUMPING { player_constroller_inst__DOT__JUMPING = 1U};
    const IData var_player_constroller_inst__DOT__JUMPING;
    enum _IDataplayer_constroller_inst__DOT__RUNNING1 { player_constroller_inst__DOT__RUNNING1 = 2U};
    const IData var_player_constroller_inst__DOT__RUNNING1;
    enum _IDataplayer_constroller_inst__DOT__RUNNING2 { player_constroller_inst__DOT__RUNNING2 = 3U};
    const IData var_player_constroller_inst__DOT__RUNNING2;
    enum _IDataplayer_constroller_inst__DOT__DUCKING { player_constroller_inst__DOT__DUCKING = 4U};
    const IData var_player_constroller_inst__DOT__DUCKING;
    enum _IDataplayer_constroller_inst__DOT__GAME_OVER { player_constroller_inst__DOT__GAME_OVER = 5U};
    const IData var_player_constroller_inst__DOT__GAME_OVER;
    enum _IDataplayer_constroller_inst__DOT__u_player_physics__DOT__INITIAL_JUMP_VELOCITY { player_constroller_inst__DOT__u_player_physics__DOT__INITIAL_JUMP_VELOCITY = 0xfffffff9U};
    const IData var_player_constroller_inst__DOT__u_player_physics__DOT__INITIAL_JUMP_VELOCITY;
    enum _IDataplayer_constroller_inst__DOT__u_player_physics__DOT__DOWNWARD_ACCELERATION { player_constroller_inst__DOT__u_player_physics__DOT__DOWNWARD_ACCELERATION = 1U};
    const IData var_player_constroller_inst__DOT__u_player_physics__DOT__DOWNWARD_ACCELERATION;
    enum _IDataplayer_constroller_inst__DOT__u_player_physics__DOT__FASTDROP_VELOCITY { player_constroller_inst__DOT__u_player_physics__DOT__FASTDROP_VELOCITY = 6U};
    const IData var_player_constroller_inst__DOT__u_player_physics__DOT__FASTDROP_VELOCITY;
    enum _IDataobstacles_inst__DOT__CONV { obstacles_inst__DOT__CONV = 2U};
    const IData var_obstacles_inst__DOT__CONV;
    enum _IDataobstacles_inst__DOT__GEN_LINE { obstacles_inst__DOT__GEN_LINE = 0x47U};
    const IData var_obstacles_inst__DOT__GEN_LINE;
    enum _IDatabg_object_inst__DOT__CONV { bg_object_inst__DOT__CONV = 2U};
    const IData var_bg_object_inst__DOT__CONV;
    enum _IDatadino_rom_inst__DOT__JUMPING { dino_rom_inst__DOT__JUMPING = 1U};
    const IData var_dino_rom_inst__DOT__JUMPING;
    enum _IDatadino_rom_inst__DOT__RUNNING_1 { dino_rom_inst__DOT__RUNNING_1 = 2U};
    const IData var_dino_rom_inst__DOT__RUNNING_1;
    enum _IDatadino_rom_inst__DOT__RUNNING_2 { dino_rom_inst__DOT__RUNNING_2 = 3U};
    const IData var_dino_rom_inst__DOT__RUNNING_2;
    enum _IDatadino_rom_inst__DOT__DUCKING { dino_rom_inst__DOT__DUCKING = 4U};
    const IData var_dino_rom_inst__DOT__DUCKING;
    enum _IDataobs_rom_inst_1__DOT__EMPTY { obs_rom_inst_1__DOT__EMPTY = 0U};
    const IData var_obs_rom_inst_1__DOT__EMPTY;
    enum _IDataobs_rom_inst_1__DOT__CAC_3 { obs_rom_inst_1__DOT__CAC_3 = 1U};
    const IData var_obs_rom_inst_1__DOT__CAC_3;
    enum _IDataobs_rom_inst_1__DOT__CAC_2 { obs_rom_inst_1__DOT__CAC_2 = 2U};
    const IData var_obs_rom_inst_1__DOT__CAC_2;
    enum _IDataobs_rom_inst_1__DOT__CAC_THICK_1 { obs_rom_inst_1__DOT__CAC_THICK_1 = 3U};
    const IData var_obs_rom_inst_1__DOT__CAC_THICK_1;
    enum _IDataobs_rom_inst_1__DOT__CAC_THICK_2 { obs_rom_inst_1__DOT__CAC_THICK_2 = 4U};
    const IData var_obs_rom_inst_1__DOT__CAC_THICK_2;
    enum _IDataobs_rom_inst_1__DOT__CAC_THIN { obs_rom_inst_1__DOT__CAC_THIN = 5U};
    const IData var_obs_rom_inst_1__DOT__CAC_THIN;
    enum _IDataobs_rom_inst_1__DOT__BIRD_LOW { obs_rom_inst_1__DOT__BIRD_LOW = 6U};
    const IData var_obs_rom_inst_1__DOT__BIRD_LOW;
    enum _IDataobs_rom_inst_1__DOT__BIRD_HIGH { obs_rom_inst_1__DOT__BIRD_HIGH = 7U};
    const IData var_obs_rom_inst_1__DOT__BIRD_HIGH;
    enum _IDataobs_rom_inst_2__DOT__EMPTY { obs_rom_inst_2__DOT__EMPTY = 0U};
    const IData var_obs_rom_inst_2__DOT__EMPTY;
    enum _IDataobs_rom_inst_2__DOT__CAC_3 { obs_rom_inst_2__DOT__CAC_3 = 1U};
    const IData var_obs_rom_inst_2__DOT__CAC_3;
    enum _IDataobs_rom_inst_2__DOT__CAC_2 { obs_rom_inst_2__DOT__CAC_2 = 2U};
    const IData var_obs_rom_inst_2__DOT__CAC_2;
    enum _IDataobs_rom_inst_2__DOT__CAC_THICK_1 { obs_rom_inst_2__DOT__CAC_THICK_1 = 3U};
    const IData var_obs_rom_inst_2__DOT__CAC_THICK_1;
    enum _IDataobs_rom_inst_2__DOT__CAC_THICK_2 { obs_rom_inst_2__DOT__CAC_THICK_2 = 4U};
    const IData var_obs_rom_inst_2__DOT__CAC_THICK_2;
    enum _IDataobs_rom_inst_2__DOT__CAC_THIN { obs_rom_inst_2__DOT__CAC_THIN = 5U};
    const IData var_obs_rom_inst_2__DOT__CAC_THIN;
    enum _IDataobs_rom_inst_2__DOT__BIRD_LOW { obs_rom_inst_2__DOT__BIRD_LOW = 6U};
    const IData var_obs_rom_inst_2__DOT__BIRD_LOW;
    enum _IDataobs_rom_inst_2__DOT__BIRD_HIGH { obs_rom_inst_2__DOT__BIRD_HIGH = 7U};
    const IData var_obs_rom_inst_2__DOT__BIRD_HIGH;
    enum _IDatascore_inst_1__DOT__CONV { score_inst_1__DOT__CONV = 2U};
    const IData var_score_inst_1__DOT__CONV;
    enum _IDatascore_inst_1__DOT__OFFSET { score_inst_1__DOT__OFFSET = 0x78U};
    const IData var_score_inst_1__DOT__OFFSET;
    enum _IDatascore_inst_2__DOT__CONV { score_inst_2__DOT__CONV = 2U};
    const IData var_score_inst_2__DOT__CONV;
    enum _IDatascore_inst_2__DOT__OFFSET { score_inst_2__DOT__OFFSET = 0x6eU};
    const IData var_score_inst_2__DOT__OFFSET;
    enum _IDatascore_inst_3__DOT__CONV { score_inst_3__DOT__CONV = 2U};
    const IData var_score_inst_3__DOT__CONV;
    enum _IDatascore_inst_3__DOT__OFFSET { score_inst_3__DOT__OFFSET = 0x64U};
    const IData var_score_inst_3__DOT__OFFSET;
    enum _IDatascore_inst_4__DOT__CONV { score_inst_4__DOT__CONV = 2U};
    const IData var_score_inst_4__DOT__CONV;
    enum _IDatascore_inst_4__DOT__OFFSET { score_inst_4__DOT__OFFSET = 0x5aU};
    const IData var_score_inst_4__DOT__OFFSET;
    enum _IDatadino_inst__DOT__CONV { dino_inst__DOT__CONV = 2U};
    const IData var_dino_inst__DOT__CONV;
    enum _IDataobs_inst_1__DOT__CONV { obs_inst_1__DOT__CONV = 2U};
    const IData var_obs_inst_1__DOT__CONV;
    enum _IDataobs_inst_2__DOT__CONV { obs_inst_2__DOT__CONV = 2U};
    const IData var_obs_inst_2__DOT__CONV;
    enum _IDatabg_render_inst__DOT__CONV { bg_render_inst__DOT__CONV = 2U};
    const IData var_bg_render_inst__DOT__CONV;
    enum _IDatabg_line_inst__DOT__CONV { bg_line_inst__DOT__CONV = 2U};
    const IData var_bg_line_inst__DOT__CONV;
    enum _IDatabg_line_inst__DOT__GND_LINE { bg_line_inst__DOT__GND_LINE = 0x3bU};
    const IData var_bg_line_inst__DOT__GND_LINE;
    enum _IDatagraphics_inst__DOT__CONV { graphics_inst__DOT__CONV = 2U};
    const IData var_graphics_inst__DOT__CONV;
    enum _IDatagraphics_inst__DOT__hvsync_gen__DOT__H_DISPLAY { graphics_inst__DOT__hvsync_gen__DOT__H_DISPLAY = 0x280U};
    const IData var_graphics_inst__DOT__hvsync_gen__DOT__H_DISPLAY;
    enum _IDatagraphics_inst__DOT__hvsync_gen__DOT__H_BACK { graphics_inst__DOT__hvsync_gen__DOT__H_BACK = 0x30U};
    const IData var_graphics_inst__DOT__hvsync_gen__DOT__H_BACK;
    enum _IDatagraphics_inst__DOT__hvsync_gen__DOT__H_FRONT { graphics_inst__DOT__hvsync_gen__DOT__H_FRONT = 0x10U};
    const IData var_graphics_inst__DOT__hvsync_gen__DOT__H_FRONT;
    enum _IDatagraphics_inst__DOT__hvsync_gen__DOT__H_SYNC { graphics_inst__DOT__hvsync_gen__DOT__H_SYNC = 0x60U};
    const IData var_graphics_inst__DOT__hvsync_gen__DOT__H_SYNC;
    enum _IDatagraphics_inst__DOT__hvsync_gen__DOT__V_DISPLAY { graphics_inst__DOT__hvsync_gen__DOT__V_DISPLAY = 0x1e0U};
    const IData var_graphics_inst__DOT__hvsync_gen__DOT__V_DISPLAY;
    enum _IDatagraphics_inst__DOT__hvsync_gen__DOT__V_TOP { graphics_inst__DOT__hvsync_gen__DOT__V_TOP = 0x21U};
    const IData var_graphics_inst__DOT__hvsync_gen__DOT__V_TOP;
    enum _IDatagraphics_inst__DOT__hvsync_gen__DOT__V_BOTTOM { graphics_inst__DOT__hvsync_gen__DOT__V_BOTTOM = 0xaU};
    const IData var_graphics_inst__DOT__hvsync_gen__DOT__V_BOTTOM;
    enum _IDatagraphics_inst__DOT__hvsync_gen__DOT__V_SYNC { graphics_inst__DOT__hvsync_gen__DOT__V_SYNC = 2U};
    const IData var_graphics_inst__DOT__hvsync_gen__DOT__V_SYNC;
    enum _IDatagraphics_inst__DOT__hvsync_gen__DOT__H_SYNC_START { graphics_inst__DOT__hvsync_gen__DOT__H_SYNC_START = 0x290U};
    const IData var_graphics_inst__DOT__hvsync_gen__DOT__H_SYNC_START;
    enum _IDatagraphics_inst__DOT__hvsync_gen__DOT__H_SYNC_END { graphics_inst__DOT__hvsync_gen__DOT__H_SYNC_END = 0x2efU};
    const IData var_graphics_inst__DOT__hvsync_gen__DOT__H_SYNC_END;
    enum _IDatagraphics_inst__DOT__hvsync_gen__DOT__H_MAX { graphics_inst__DOT__hvsync_gen__DOT__H_MAX = 0x31fU};
    const IData var_graphics_inst__DOT__hvsync_gen__DOT__H_MAX;
    enum _IDatagraphics_inst__DOT__hvsync_gen__DOT__V_SYNC_START { graphics_inst__DOT__hvsync_gen__DOT__V_SYNC_START = 0x1eaU};
    const IData var_graphics_inst__DOT__hvsync_gen__DOT__V_SYNC_START;
    enum _IDatagraphics_inst__DOT__hvsync_gen__DOT__V_SYNC_END { graphics_inst__DOT__hvsync_gen__DOT__V_SYNC_END = 0x1ebU};
    const IData var_graphics_inst__DOT__hvsync_gen__DOT__V_SYNC_END;
    enum _IDatagraphics_inst__DOT__hvsync_gen__DOT__V_MAX { graphics_inst__DOT__hvsync_gen__DOT__V_MAX = 0x20cU};
    const IData var_graphics_inst__DOT__hvsync_gen__DOT__V_MAX;
    enum _IDataaudio_inst__DOT__i_jump__DOT__PWM_ARR_PERIOD { audio_inst__DOT__i_jump__DOT__PWM_ARR_PERIOD = 0x51615U};
    const IData var_audio_inst__DOT__i_jump__DOT__PWM_ARR_PERIOD;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_0 { audio_inst__DOT__i_jump__DOT__DECAY_0 = 0x28b0aU};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_0;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_1 { audio_inst__DOT__i_jump__DOT__DECAY_1 = 0x224eaU};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_1;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_2 { audio_inst__DOT__i_jump__DOT__DECAY_2 = 0x1ce1cU};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_2;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_3 { audio_inst__DOT__i_jump__DOT__DECAY_3 = 0x1869fU};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_3;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_4 { audio_inst__DOT__i_jump__DOT__DECAY_4 = 0x14959U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_4;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_5 { audio_inst__DOT__i_jump__DOT__DECAY_5 = 0x11649U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_5;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_6 { audio_inst__DOT__i_jump__DOT__DECAY_6 = 0xeae2U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_6;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_7 { audio_inst__DOT__i_jump__DOT__DECAY_7 = 0xc496U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_7;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_8 { audio_inst__DOT__i_jump__DOT__DECAY_8 = 0xa5f3U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_8;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_9 { audio_inst__DOT__i_jump__DOT__DECAY_9 = 0x8c6bU};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_9;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_10 { audio_inst__DOT__i_jump__DOT__DECAY_10 = 0x7571U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_10;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_11 { audio_inst__DOT__i_jump__DOT__DECAY_11 = 0x6392U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_11;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_12 { audio_inst__DOT__i_jump__DOT__DECAY_12 = 0x5440U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_12;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_13 { audio_inst__DOT__i_jump__DOT__DECAY_13 = 0x477cU};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_13;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_14 { audio_inst__DOT__i_jump__DOT__DECAY_14 = 0x3ab8U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_14;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_15 { audio_inst__DOT__i_jump__DOT__DECAY_15 = 0x330fU};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_15;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_16 { audio_inst__DOT__i_jump__DOT__DECAY_16 = 0x28d9U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_16;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_17 { audio_inst__DOT__i_jump__DOT__DECAY_17 = 0x23beU};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_17;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_18 { audio_inst__DOT__i_jump__DOT__DECAY_18 = 0x1ea3U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_18;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_19 { audio_inst__DOT__i_jump__DOT__DECAY_19 = 0x1987U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_19;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_20 { audio_inst__DOT__i_jump__DOT__DECAY_20 = 0x146cU};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_20;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_21 { audio_inst__DOT__i_jump__DOT__DECAY_21 = 0x11dfU};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_21;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_22 { audio_inst__DOT__i_jump__DOT__DECAY_22 = 0xf51U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_22;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_23 { audio_inst__DOT__i_jump__DOT__DECAY_23 = 0xcc3U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_23;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_24 { audio_inst__DOT__i_jump__DOT__DECAY_24 = 0xa36U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_24;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_25 { audio_inst__DOT__i_jump__DOT__DECAY_25 = 0x7a8U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_25;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_26 { audio_inst__DOT__i_jump__DOT__DECAY_26 = 0x7a8U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_26;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_27 { audio_inst__DOT__i_jump__DOT__DECAY_27 = 0x51bU};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_27;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_28 { audio_inst__DOT__i_jump__DOT__DECAY_28 = 0x51bU};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_28;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_29 { audio_inst__DOT__i_jump__DOT__DECAY_29 = 0x19U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_29;
    enum _IDataaudio_inst__DOT__i_jump__DOT__DECAY_30 { audio_inst__DOT__i_jump__DOT__DECAY_30 = 0x19U};
    const IData var_audio_inst__DOT__i_jump__DOT__DECAY_30;
    enum _IDataaudio_inst__DOT__i_over__DOT__PERIOD { audio_inst__DOT__i_over__DOT__PERIOD = 0x30d40U};
    const IData var_audio_inst__DOT__i_over__DOT__PERIOD;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_0 { audio_inst__DOT__i_over__DOT__DECAY_0 = 0x93f6U};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_0;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_1 { audio_inst__DOT__i_over__DOT__DECAY_1 = 0x8432U};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_1;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_2 { audio_inst__DOT__i_over__DOT__DECAY_2 = 0x7600U};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_2;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_3 { audio_inst__DOT__i_over__DOT__DECAY_3 = 0x693cU};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_3;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_4 { audio_inst__DOT__i_over__DOT__DECAY_4 = 0x5dc8U};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_4;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_5 { audio_inst__DOT__i_over__DOT__DECAY_5 = 0x5387U};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_5;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_6 { audio_inst__DOT__i_over__DOT__DECAY_6 = 0x4a63U};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_6;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_7 { audio_inst__DOT__i_over__DOT__DECAY_7 = 0x4246U};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_7;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_8 { audio_inst__DOT__i_over__DOT__DECAY_8 = 0x3b1fU};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_8;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_9 { audio_inst__DOT__i_over__DOT__DECAY_9 = 0x34daU};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_9;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_10 { audio_inst__DOT__i_over__DOT__DECAY_10 = 0x2f64U};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_10;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_11 { audio_inst__DOT__i_over__DOT__DECAY_11 = 0x2aacU};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_11;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_12 { audio_inst__DOT__i_over__DOT__DECAY_12 = 0x2697U};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_12;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_13 { audio_inst__DOT__i_over__DOT__DECAY_13 = 0x22e4U};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_13;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_14 { audio_inst__DOT__i_over__DOT__DECAY_14 = 0x1f8cU};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_14;
    enum _IDataaudio_inst__DOT__i_over__DOT__DECAY_15 { audio_inst__DOT__i_over__DOT__DECAY_15 = 0x1c84U};
    const IData var_audio_inst__DOT__i_over__DOT__DECAY_15;
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_dino_tt_um_uwasic_dinogame);  ///< Copying not allowed
  public:
    Vtop_dino_tt_um_uwasic_dinogame(const char* name = "TOP");
    ~Vtop_dino_tt_um_uwasic_dinogame();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop_dino__Syms* symsp, bool first);
    static void _combo__TOP__top_dino__top__2(Vtop_dino__Syms* __restrict vlSymsp);
    static void _combo__TOP__top_dino__top__6(Vtop_dino__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__top_dino__top__1(Vtop_dino__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__top_dino__top__5(Vtop_dino__Syms* __restrict vlSymsp);
    static void _settle__TOP__top_dino__top__3(Vtop_dino__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__top_dino__top__4(Vtop_dino__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
