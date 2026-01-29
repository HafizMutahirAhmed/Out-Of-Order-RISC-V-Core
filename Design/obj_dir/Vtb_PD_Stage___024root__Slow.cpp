// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_PD_Stage.h for the primary calling header

#include "Vtb_PD_Stage__pch.h"
#include "Vtb_PD_Stage__Syms.h"
#include "Vtb_PD_Stage___024root.h"

void Vtb_PD_Stage___024root___ctor_var_reset(Vtb_PD_Stage___024root* vlSelf);

Vtb_PD_Stage___024root::Vtb_PD_Stage___024root(Vtb_PD_Stage__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_PD_Stage___024root___ctor_var_reset(this);
}

void Vtb_PD_Stage___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_PD_Stage___024root::~Vtb_PD_Stage___024root() {
}
