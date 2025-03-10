// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTOP_DINO__SYMS_H_
#define _VTOP_DINO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vtop_dino.h"
#include "Vtop_dino_top_dino.h"
#include "Vtop_dino_tt_um_uwasic_dinogame.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vtop_dino__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vtop_dino*                     TOPp;
    Vtop_dino_top_dino             TOP__top_dino;
    Vtop_dino_tt_um_uwasic_dinogame TOP__top_dino__top;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_top_dino;
    VerilatedScope __Vscope_top_dino__top;
    
    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;
    
    // CREATORS
    Vtop_dino__Syms(Vtop_dino* topp, const char* namep);
    ~Vtop_dino__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
