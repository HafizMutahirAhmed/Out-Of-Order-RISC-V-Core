// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_PD_Stage.h for the primary calling header

#include "Vtb_PD_Stage__pch.h"
#include "Vtb_PD_Stage__Syms.h"
#include "Vtb_PD_Stage___024root.h"

extern const VlWide<13>/*415:0*/ Vtb_PD_Stage__ConstPool__CONST_hfdcdfd09_0;

VL_ATTR_COLD void Vtb_PD_Stage___024root___eval_initial__TOP(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(13, Vtb_PD_Stage__ConstPool__CONST_hfdcdfd09_0));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_PD_Stage___024root___dump_triggers__stl(Vtb_PD_Stage___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_PD_Stage___024root___eval_triggers__stl(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_PD_Stage___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
