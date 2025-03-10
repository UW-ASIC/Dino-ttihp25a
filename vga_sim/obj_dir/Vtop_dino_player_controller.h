// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_dino.h for the primary calling header

#ifndef _VTOP_DINO_PLAYER_CONTROLLER_H_
#define _VTOP_DINO_PLAYER_CONTROLLER_H_  // guard

#include "verilated.h"
#include "Vtop_dino__Dpi.h"

//==========

class Vtop_dino__Syms;

//----------

VL_MODULE(Vtop_dino_player_controller) {
  public:
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(game_tick,1,0);
    VL_IN8(button_up,0,0);
    VL_IN8(button_down,0,0);
    VL_IN8(crash,0,0);
    VL_OUT8(player_position,5,0);
    VL_OUT8(game_start_pulse,0,0);
    VL_OUT8(game_over_pulse,0,0);
    VL_OUT8(jump_pulse,0,0);
    VL_OUT8(game_state,2,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ running;
    CData/*0:0*/ jump_done;
    CData/*0:0*/ u_player_physics__DOT__clk;
    CData/*0:0*/ u_player_physics__DOT__rst_n;
    CData/*1:0*/ u_player_physics__DOT__game_tick;
    CData/*0:0*/ u_player_physics__DOT__jump_pulse;
    CData/*0:0*/ u_player_physics__DOT__button_down;
    CData/*5:0*/ u_player_physics__DOT__position;
    CData/*0:0*/ u_player_physics__DOT__jump_done;
    CData/*3:0*/ u_player_physics__DOT__velocity;
    CData/*3:0*/ u_player_physics__DOT__active_vel;
    CData/*3:0*/ u_player_physics__DOT__adder_in1;
    CData/*5:0*/ u_player_physics__DOT__adder_in2;
    CData/*5:0*/ u_player_physics__DOT__adder_res;
    
    // LOCAL VARIABLES
    static CData/*2:0*/ __Vtable1_game_state[1024];
    
    // INTERNAL VARIABLES
  private:
    Vtop_dino__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    enum _IDataRESTART { RESTART = 0U};
    const IData var_RESTART;
    enum _IDataJUMPING { JUMPING = 1U};
    const IData var_JUMPING;
    enum _IDataRUNNING1 { RUNNING1 = 2U};
    const IData var_RUNNING1;
    enum _IDataRUNNING2 { RUNNING2 = 3U};
    const IData var_RUNNING2;
    enum _IDataDUCKING { DUCKING = 4U};
    const IData var_DUCKING;
    enum _IDataGAME_OVER { GAME_OVER = 5U};
    const IData var_GAME_OVER;
    enum _IDatau_player_physics__DOT__INITIAL_JUMP_VELOCITY { u_player_physics__DOT__INITIAL_JUMP_VELOCITY = 0xfffffff9U};
    const IData var_u_player_physics__DOT__INITIAL_JUMP_VELOCITY;
    enum _IDatau_player_physics__DOT__DOWNWARD_ACCELERATION { u_player_physics__DOT__DOWNWARD_ACCELERATION = 1U};
    const IData var_u_player_physics__DOT__DOWNWARD_ACCELERATION;
    enum _IDatau_player_physics__DOT__FASTDROP_VELOCITY { u_player_physics__DOT__FASTDROP_VELOCITY = 6U};
    const IData var_u_player_physics__DOT__FASTDROP_VELOCITY;
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_dino_player_controller);  ///< Copying not allowed
  public:
    Vtop_dino_player_controller(const char* name = "TOP");
    ~Vtop_dino_player_controller();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop_dino__Syms* symsp, bool first);
    static void _combo__TOP__top_dino__top__player_constroller_inst__1(Vtop_dino__Syms* __restrict vlSymsp);
    static void _combo__TOP__top_dino__top__player_constroller_inst__5(Vtop_dino__Syms* __restrict vlSymsp);
    static void _combo__TOP__top_dino__top__player_constroller_inst__6(Vtop_dino__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__top_dino__top__player_constroller_inst__4(Vtop_dino__Syms* __restrict vlSymsp);
    static void _settle__TOP__top_dino__top__player_constroller_inst__2(Vtop_dino__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__top_dino__top__player_constroller_inst__3(Vtop_dino__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
