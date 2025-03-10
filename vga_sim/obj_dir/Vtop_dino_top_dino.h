// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_dino.h for the primary calling header

#ifndef _VTOP_DINO_TOP_DINO_H_
#define _VTOP_DINO_TOP_DINO_H_  // guard

#include "verilated.h"
#include "Vtop_dino__Dpi.h"

//==========

class Vtop_dino__Syms;
class Vtop_dino_tt_um_uwasic_dinogame;


//----------

VL_MODULE(Vtop_dino_top_dino) {
  public:
    // CELLS
    Vtop_dino_tt_um_uwasic_dinogame* top;
    
    // PORTS
    VL_IN8(ui_in,7,0);
    VL_OUT8(uo_out,7,0);
    VL_IN8(uio_in,7,0);
    VL_OUT8(uio_out,7,0);
    VL_OUT8(uio_oe,7,0);
    VL_IN8(ena,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    
    // INTERNAL VARIABLES
  private:
    Vtop_dino__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_dino_top_dino);  ///< Copying not allowed
  public:
    Vtop_dino_top_dino(const char* name = "TOP");
    ~Vtop_dino_top_dino();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtop_dino__Syms* symsp, bool first);
    static void _combo__TOP__top_dino__2(Vtop_dino__Syms* __restrict vlSymsp);
    static void _combo__TOP__top_dino__5(Vtop_dino__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__top_dino__1(Vtop_dino__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__top_dino__4(Vtop_dino__Syms* __restrict vlSymsp);
    static void _settle__TOP__top_dino__3(Vtop_dino__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
