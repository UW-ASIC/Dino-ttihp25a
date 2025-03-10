// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_DINO_H_
#define _VTOP_DINO_H_  // guard

#include "verilated.h"
#include "Vtop_dino__Dpi.h"

//==========

class Vtop_dino__Syms;
class Vtop_dino_top_dino;


//----------

VL_MODULE(Vtop_dino) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vtop_dino_top_dino* top_dino;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(ui_in,7,0);
    VL_OUT8(uo_out,7,0);
    VL_IN8(uio_in,7,0);
    VL_OUT8(uio_out,7,0);
    VL_OUT8(uio_oe,7,0);
    VL_IN8(ena,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__top_dino__top__clk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop_dino__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_dino);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop_dino(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop_dino();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop_dino__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop_dino__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop_dino__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop_dino__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vtop_dino__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop_dino__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop_dino__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop_dino__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(Vtop_dino__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vtop_dino__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
