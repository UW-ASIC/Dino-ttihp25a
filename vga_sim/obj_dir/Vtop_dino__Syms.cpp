// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop_dino__Syms.h"
#include "Vtop_dino.h"
#include "Vtop_dino_top_dino.h"
#include "Vtop_dino_tt_um_uwasic_dinogame.h"



// FUNCTIONS
Vtop_dino__Syms::Vtop_dino__Syms(Vtop_dino* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__top_dino(Verilated::catName(topp->name(), "top_dino"))
    , TOP__top_dino__top(Verilated::catName(topp->name(), "top_dino.top"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->top_dino = &TOP__top_dino;
    TOPp->top_dino->top = &TOP__top_dino__top;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__top_dino.__Vconfigure(this, true);
    TOP__top_dino__top.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_top_dino.configure(this, name(), "top_dino", "top_dino", -12, VerilatedScope::SCOPE_MODULE);
    __Vscope_top_dino__top.configure(this, name(), "top_dino.top", "top", -12, VerilatedScope::SCOPE_MODULE);
    
    // Setup scope hierarchy
    __Vhier.add(0, &__Vscope_top_dino);
    __Vhier.add(&__Vscope_top_dino, &__Vscope_top_dino__top);
    
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_top_dino__top.varInsert(__Vfinal,"bg_object_pos", &(TOP__top_dino__top.bg_object_pos), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,9,2);
    }
}
