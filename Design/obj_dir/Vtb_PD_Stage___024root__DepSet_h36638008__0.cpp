// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_PD_Stage.h for the primary calling header

#include "Vtb_PD_Stage__pch.h"
#include "Vtb_PD_Stage___024root.h"

VL_ATTR_COLD void Vtb_PD_Stage___024root___eval_initial__TOP(Vtb_PD_Stage___024root* vlSelf);
VlCoroutine Vtb_PD_Stage___024root___eval_initial__TOP__Vtiming__0(Vtb_PD_Stage___024root* vlSelf);
VlCoroutine Vtb_PD_Stage___024root___eval_initial__TOP__Vtiming__1(Vtb_PD_Stage___024root* vlSelf);

void Vtb_PD_Stage___024root___eval_initial(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval_initial\n"); );
    // Body
    Vtb_PD_Stage___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_PD_Stage___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_PD_Stage___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_PD_Stage__DOT__CLK__0 
        = vlSelf->tb_PD_Stage__DOT__CLK;
}

VL_INLINE_OPT VlCoroutine Vtb_PD_Stage___024root___eval_initial__TOP__Vtiming__0(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_PD_Stage__DOT__CLK = 0U;
    vlSelf->tb_PD_Stage__DOT__reset = 1U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "/home/mutahir/Documents/SV/OOO/Design/tb_PD_Stage.sv", 
                                           36);
        vlSelf->tb_PD_Stage__DOT__CLK = (1U & (~ (IData)(vlSelf->tb_PD_Stage__DOT__CLK)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_PD_Stage___024root___eval_initial__TOP__Vtiming__1(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VtrigSched_hf88ba093__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_PD_Stage.CLK)", 
                                                       "/home/mutahir/Documents/SV/OOO/Design/tb_PD_Stage.sv", 
                                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_PD_Stage__DOT__reset = 0U;
    vlSelf->tb_PD_Stage__DOT__actual_taken = 0U;
    vlSelf->tb_PD_Stage__DOT__mispredict = 1U;
    vlSelf->tb_PD_Stage__DOT__restore_ghr = 0U;
    vlSelf->tb_PD_Stage__DOT__restore_ras = 0U;
    vlSelf->tb_PD_Stage__DOT__update_pht = 0U;
    vlSelf->tb_PD_Stage__DOT__update_btb = 1U;
    vlSelf->tb_PD_Stage__DOT__update_ras = 0U;
    vlSelf->tb_PD_Stage__DOT__ex_is_ret = 0U;
    vlSelf->tb_PD_Stage__DOT__ex_is_branch = 0U;
    vlSelf->tb_PD_Stage__DOT__actual_target_address = 4U;
    vlSelf->tb_PD_Stage__DOT__actual_return_address = 0x44444444U;
    vlSelf->tb_PD_Stage__DOT__ex_pc = 4U;
    vlSelf->tb_PD_Stage__DOT__ghr_snap = 0x155U;
    vlSelf->tb_PD_Stage__DOT__pd_sp_snap = 4U;
    vlSelf->tb_PD_Stage__DOT__pd_ras_snap = 0xaaaaaaaa88888888ULL;
    vlSelf->tb_PD_Stage__DOT__rb_pht_index = 0xa1U;
    co_await vlSelf->__VtrigSched_hf88ba093__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_PD_Stage.CLK)", 
                                                       "/home/mutahir/Documents/SV/OOO/Design/tb_PD_Stage.sv", 
                                                       60);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_PD_Stage__DOT__reset = 0U;
    vlSelf->tb_PD_Stage__DOT__actual_taken = 0U;
    vlSelf->tb_PD_Stage__DOT__mispredict = 0U;
    vlSelf->tb_PD_Stage__DOT__restore_ghr = 0U;
    vlSelf->tb_PD_Stage__DOT__update_btb = 0U;
    vlSelf->tb_PD_Stage__DOT__restore_ras = 0U;
    vlSelf->tb_PD_Stage__DOT__update_pht = 0U;
    vlSelf->tb_PD_Stage__DOT__update_ras = 0U;
    vlSelf->tb_PD_Stage__DOT__ex_is_ret = 0U;
    vlSelf->tb_PD_Stage__DOT__ex_is_branch = 0U;
    vlSelf->tb_PD_Stage__DOT__actual_target_address = 0x401000U;
    vlSelf->tb_PD_Stage__DOT__actual_return_address = 0x44444444U;
    vlSelf->tb_PD_Stage__DOT__ex_pc = 8U;
    vlSelf->tb_PD_Stage__DOT__ghr_snap = 0x155U;
    vlSelf->tb_PD_Stage__DOT__pd_sp_snap = 4U;
    vlSelf->tb_PD_Stage__DOT__pd_ras_snap = 0xaaaaaaaa88888888ULL;
    vlSelf->tb_PD_Stage__DOT__rb_pht_index = 0xa1U;
    co_await vlSelf->__VdlySched.delay(0xc8ULL, nullptr, 
                                       "/home/mutahir/Documents/SV/OOO/Design/tb_PD_Stage.sv", 
                                       78);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/mutahir/Documents/SV/OOO/Design/tb_PD_Stage.sv", 79, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vtb_PD_Stage___024root___act_comb__TOP__0(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_PD_Stage__DOT__dut__DOT__forever_loop 
        = ((IData)(vlSelf->tb_PD_Stage__DOT__mispredict) 
           & ((vlSelf->tb_PD_Stage__DOT__actual_target_address 
               == vlSelf->tb_PD_Stage__DOT__ex_pc) 
              | (vlSelf->tb_PD_Stage__DOT__ex_pc == 
                 ((IData)(4U) + vlSelf->tb_PD_Stage__DOT__actual_target_address))));
    vlSelf->tb_PD_Stage__DOT__dut__DOT__write_pc_data 
        = ((IData)(vlSelf->tb_PD_Stage__DOT__reset)
            ? 0U : ((IData)(vlSelf->tb_PD_Stage__DOT__mispredict)
                     ? vlSelf->tb_PD_Stage__DOT__actual_target_address
                     : (((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_hit1) 
                         & ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_ret1) 
                            | ((~ (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch1)) 
                               | ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch1) 
                                  & (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__pred_taken1)))))
                         ? vlSelf->tb_PD_Stage__DOT__dut__DOT__final_pred_target1
                         : (((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_hit2) 
                             & ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_ret2) 
                                | ((~ (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch2)) 
                                   | ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch2) 
                                      & (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__pred_taken2)))))
                             ? vlSelf->tb_PD_Stage__DOT__dut__DOT__final_pred_target2
                             : vlSelf->tb_PD_Stage__DOT__dut__DOT__pc))));
    vlSelf->tb_PD_Stage__DOT__dut__DOT__next_pc = ((IData)(8U) 
                                                   + vlSelf->tb_PD_Stage__DOT__dut__DOT__write_pc_data);
}

void Vtb_PD_Stage___024root___eval_act(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_PD_Stage___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_PD_Stage___024root___nba_sequent__TOP__0(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__Vfuncout;
    __Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__taken;
    __Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__taken = 0;
    CData/*1:0*/ __Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__current_state;
    __Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__current_state = 0;
    CData/*1:0*/ __Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__new_state;
    __Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__new_state = 0;
    SData/*8:0*/ __Vdly__tb_PD_Stage__DOT__dut__DOT__ghr_out;
    __Vdly__tb_PD_Stage__DOT__dut__DOT__ghr_out = 0;
    SData/*8:0*/ __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT__v0;
    __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT__v0 = 0;
    CData/*1:0*/ __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT__v0;
    __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT__v0;
    __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0;
    __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0;
    __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0 = 0;
    IData/*23:0*/ __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0;
    __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0;
    __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v1;
    __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v1 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v1;
    __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v1 = 0;
    IData/*31:0*/ __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v1;
    __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v1 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v2;
    __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v2 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v2;
    __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v2 = 0;
    CData/*0:0*/ __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v2;
    __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v2 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v3;
    __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v3 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v3;
    __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v3 = 0;
    CData/*0:0*/ __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v3;
    __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v3 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v4;
    __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v4 = 0;
    IData/*31:0*/ __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v4;
    __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v4 = 0;
    CData/*0:0*/ __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v4;
    __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v4 = 0;
    CData/*2:0*/ __Vdly__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp;
    __Vdly__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp = 0;
    CData/*2:0*/ __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v0;
    __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v0;
    __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v0;
    __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v1;
    __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v1 = 0;
    IData/*31:0*/ __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v1;
    __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v2;
    __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v2 = 0;
    IData/*31:0*/ __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v2;
    __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v2;
    __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v2 = 0;
    // Body
    __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT__v0 = 0U;
    __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0 = 0U;
    __Vdly__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp 
        = vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp;
    __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v0 = 0U;
    __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v2 = 0U;
    __Vdly__tb_PD_Stage__DOT__dut__DOT__ghr_out = vlSelf->tb_PD_Stage__DOT__dut__DOT__ghr_out;
    vlSelf->tb_PD_Stage__DOT__dut__DOT__always_pc = 
        ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__forever_set)
          ? vlSelf->tb_PD_Stage__DOT__dut__DOT__always_pc
          : ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__forever_loop)
              ? vlSelf->tb_PD_Stage__DOT__ex_pc : vlSelf->tb_PD_Stage__DOT__dut__DOT__always_pc));
    if ((1U & (~ (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__forever_set)))) {
        vlSelf->tb_PD_Stage__DOT__dut__DOT__forever_set 
            = vlSelf->tb_PD_Stage__DOT__dut__DOT__forever_loop;
    }
    if (vlSelf->tb_PD_Stage__DOT__update_btb) {
        __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0 
            = (vlSelf->tb_PD_Stage__DOT__ex_pc >> 8U);
        __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0 = 1U;
        __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0 = 0x23U;
        __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0 
            = (0x3fU & (vlSelf->tb_PD_Stage__DOT__ex_pc 
                        >> 2U));
        __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v1 
            = vlSelf->tb_PD_Stage__DOT__actual_target_address;
        __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v1 = 3U;
        __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v1 
            = (0x3fU & (vlSelf->tb_PD_Stage__DOT__ex_pc 
                        >> 2U));
        __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v2 
            = vlSelf->tb_PD_Stage__DOT__update_btb;
        __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v2 = 2U;
        __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v2 
            = (0x3fU & (vlSelf->tb_PD_Stage__DOT__ex_pc 
                        >> 2U));
        __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v3 
            = vlSelf->tb_PD_Stage__DOT__ex_is_ret;
        __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v3 = 1U;
        __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v3 
            = (0x3fU & (vlSelf->tb_PD_Stage__DOT__ex_pc 
                        >> 2U));
        __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v4 
            = vlSelf->tb_PD_Stage__DOT__ex_is_branch;
        __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v4 = 0U;
        __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v4 
            = (0x3fU & (vlSelf->tb_PD_Stage__DOT__ex_pc 
                        >> 2U));
    }
    vlSelf->tb_PD_Stage__DOT__pd_pht_index2 = vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_index2;
    vlSelf->tb_PD_Stage__DOT__pd_pht_index1 = vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_index1;
    vlSelf->tb_PD_Stage__DOT__pd_prev_ghr = vlSelf->tb_PD_Stage__DOT__dut__DOT__ghr_out;
    vlSelf->tb_PD_Stage__DOT__pd_pred_target2 = vlSelf->tb_PD_Stage__DOT__dut__DOT__final_pred_target2;
    vlSelf->tb_PD_Stage__DOT__pd_pred_target1 = vlSelf->tb_PD_Stage__DOT__dut__DOT__final_pred_target1;
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__reg_btb_tag1 
        = (vlSelf->tb_PD_Stage__DOT__dut__DOT__pc >> 8U);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__reg_btb_tag2 
        = (((IData)(4U) + vlSelf->tb_PD_Stage__DOT__dut__DOT__pc) 
           >> 8U);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry1 
        = vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB
        [(0x3fU & (vlSelf->tb_PD_Stage__DOT__dut__DOT__pc 
                   >> 2U))];
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry2 
        = vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB
        [(0x3fU & (((IData)(4U) + vlSelf->tb_PD_Stage__DOT__dut__DOT__pc) 
                   >> 2U))];
    if (vlSelf->tb_PD_Stage__DOT__reset) {
        __Vdly__tb_PD_Stage__DOT__dut__DOT__ghr_out = 0U;
        __Vdly__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp = 0U;
        vlSelf->tb_PD_Stage__DOT__dut__DOT__ret_addr1 = 0U;
        vlSelf->tb_PD_Stage__DOT__dut__DOT__ret_addr2 = 0U;
        vlSelf->tb_PD_Stage__DOT__dut__DOT__sp_snap = 0U;
        vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_snap = 0ULL;
        vlSelf->tb_PD_Stage__DOT__dut__DOT__pc = 0U;
    } else {
        if (vlSelf->tb_PD_Stage__DOT__restore_ghr) {
            __Vdly__tb_PD_Stage__DOT__dut__DOT__ghr_out 
                = ((0x1feU & ((IData)(vlSelf->tb_PD_Stage__DOT__ghr_snap) 
                              << 1U)) | (IData)(vlSelf->tb_PD_Stage__DOT__actual_taken));
        } else if (((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch1) 
                    | (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch2))) {
            __Vdly__tb_PD_Stage__DOT__dut__DOT__ghr_out 
                = ((0x1feU & ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__ghr_out) 
                              << 1U)) | ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch1)
                                          ? (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__pred_taken1)
                                          : (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__pred_taken2)));
        }
        if (vlSelf->tb_PD_Stage__DOT__restore_ras) {
            __Vdly__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp 
                = vlSelf->tb_PD_Stage__DOT__rb_sp_snap;
            __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v0 
                = (IData)(vlSelf->tb_PD_Stage__DOT__rb_ras_snap);
            __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v0 = 1U;
            __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v0 
                = (7U & ((IData)(vlSelf->tb_PD_Stage__DOT__rb_sp_snap) 
                         - (IData)(1U)));
            __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v1 
                = (IData)((vlSelf->tb_PD_Stage__DOT__rb_ras_snap 
                           >> 0x20U));
            __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v1 
                = (7U & ((IData)(vlSelf->tb_PD_Stage__DOT__rb_sp_snap) 
                         - (IData)(2U)));
        } else {
            vlSelf->tb_PD_Stage__DOT__dut__DOT__sp_snap 
                = vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp;
            vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_snap 
                = (((QData)((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS
                                    [(7U & ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp) 
                                            - (IData)(2U)))])) 
                    << 0x20U) | (QData)((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS
                                                [(7U 
                                                  & ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp) 
                                                     - (IData)(1U)))])));
            __Vdly__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp 
                = (7U & (((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp) 
                          + (IData)(vlSelf->tb_PD_Stage__DOT__update_ras)) 
                         - (3U & ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_ret1) 
                                  + (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_ret2)))));
            if (vlSelf->tb_PD_Stage__DOT__update_ras) {
                __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v2 
                    = vlSelf->tb_PD_Stage__DOT__actual_return_address;
                __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v2 = 1U;
                __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v2 
                    = vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp;
            }
            vlSelf->tb_PD_Stage__DOT__dut__DOT__ret_addr1 
                = vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS
                [(7U & ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp) 
                        - (IData)(1U)))];
            vlSelf->tb_PD_Stage__DOT__dut__DOT__ret_addr2 
                = vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS
                [(7U & ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp) 
                        - (IData)(2U)))];
        }
        vlSelf->tb_PD_Stage__DOT__dut__DOT__pc = ((IData)(vlSelf->tb_PD_Stage__DOT__mispredict)
                                                   ? vlSelf->tb_PD_Stage__DOT__dut__DOT__write_pc_data
                                                   : vlSelf->tb_PD_Stage__DOT__dut__DOT__next_pc);
    }
    vlSelf->tb_PD_Stage__DOT__dut__DOT__ghr_out = __Vdly__tb_PD_Stage__DOT__dut__DOT__ghr_out;
    vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp 
        = __Vdly__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp;
    if (__Vdlyvset__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v0) {
        vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS[__Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v0] 
            = __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v0;
        vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS[__Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v1] 
            = __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v1;
    }
    if (__Vdlyvset__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v2) {
        vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS[__Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v2] 
            = __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS__v2;
    }
    if (__Vdlyvset__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0) {
        vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB[__Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0] 
            = (((~ (0xffffffULL << __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0)) 
                & vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB
                [__Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0]) 
               | (0x7ffffffffffffffULL & ((QData)((IData)(__Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0)) 
                                          << __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v0)));
        vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB[__Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v1] 
            = (((~ (0xffffffffULL << __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v1)) 
                & vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB
                [__Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v1]) 
               | (0x7ffffffffffffffULL & ((QData)((IData)(__Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v1)) 
                                          << __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v1)));
        vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB[__Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v2] 
            = (((~ (1ULL << __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v2)) 
                & vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB
                [__Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v2]) 
               | (0x7ffffffffffffffULL & ((QData)((IData)(__Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v2)) 
                                          << __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v2)));
        vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB[__Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v3] 
            = (((~ (1ULL << __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v3)) 
                & vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB
                [__Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v3]) 
               | (0x7ffffffffffffffULL & ((QData)((IData)(__Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v3)) 
                                          << __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v3)));
        vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB[__Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v4] 
            = (((~ (1ULL << __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v4)) 
                & vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB
                [__Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v4]) 
               | (0x7ffffffffffffffULL & ((QData)((IData)(__Vdlyvval__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v4)) 
                                          << __Vdlyvlsb__tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB__v4)));
    }
    if (vlSelf->tb_PD_Stage__DOT__update_pht) {
        __Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__current_state 
            = vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT
            [vlSelf->tb_PD_Stage__DOT__rb_pht_index];
        __Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__taken 
            = vlSelf->tb_PD_Stage__DOT__actual_taken;
        __Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__new_state 
            = ((IData)(__Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__taken)
                ? ((2U & (IData)(__Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__current_state))
                    ? 3U : ((1U & (IData)(__Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__current_state))
                             ? 2U : 1U)) : ((2U & (IData)(__Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__current_state))
                                             ? ((1U 
                                                 & (IData)(__Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__current_state))
                                                 ? 2U
                                                 : 1U)
                                             : 0U));
        __Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__Vfuncout 
            = __Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__new_state;
        __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT__v0 
            = __Vfunc_tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__train_pht__0__Vfuncout;
        __Vdlyvset__tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT__v0 = 1U;
        __Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT__v0 
            = vlSelf->tb_PD_Stage__DOT__rb_pht_index;
    }
    vlSelf->tb_PD_Stage__DOT__dut__DOT__pred_taken1 
        = (1U & (vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT
                 [vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_index1] 
                 >> 1U));
    vlSelf->tb_PD_Stage__DOT__dut__DOT__pred_taken2 
        = (1U & (vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT
                 [vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_index2] 
                 >> 1U));
    vlSelf->tb_PD_Stage__DOT__pd_sp_snap = vlSelf->tb_PD_Stage__DOT__dut__DOT__sp_snap;
    vlSelf->tb_PD_Stage__DOT__pd_ras_snap = vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_snap;
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__tag_matched1 
        = ((0xffffffU & (IData)((vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry1 
                                 >> 0x23U))) == vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__reg_btb_tag1);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_hit1 = 
        ((IData)((vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry1 
                  >> 2U)) & (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__tag_matched1));
    vlSelf->tb_PD_Stage__DOT__dut__DOT__is_ret1 = ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__tag_matched1) 
                                                   & (6ULL 
                                                      == 
                                                      (6ULL 
                                                       & vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry1)));
    vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch1 
        = (((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__tag_matched1) 
            & (IData)((vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry1 
                       >> 2U))) & (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry1));
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__tag_matched2 
        = ((0xffffffU & (IData)((vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry2 
                                 >> 0x23U))) == vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__reg_btb_tag2);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_hit2 = 
        ((IData)((vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry2 
                  >> 2U)) & (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__tag_matched2));
    vlSelf->tb_PD_Stage__DOT__dut__DOT__is_ret2 = ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__tag_matched2) 
                                                   & (6ULL 
                                                      == 
                                                      (6ULL 
                                                       & vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry2)));
    vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch2 
        = (((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__tag_matched2) 
            & (IData)((vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry2 
                       >> 2U))) & (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry2));
    if (__Vdlyvset__tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT__v0) {
        vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT[__Vdlyvdim0__tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT__v0] 
            = __Vdlyvval__tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT__v0;
    }
    vlSelf->tb_PD_Stage__DOT__dut__DOT__final_pred_target1 
        = ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_ret1)
            ? vlSelf->tb_PD_Stage__DOT__dut__DOT__ret_addr1
            : (IData)((vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry1 
                       >> 3U)));
    vlSelf->tb_PD_Stage__DOT__dut__DOT__final_pred_target2 
        = ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_ret2)
            ? vlSelf->tb_PD_Stage__DOT__dut__DOT__ret_addr2
            : (IData)((vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry2 
                       >> 3U)));
    vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_index1 
        = (0x1ffU & ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__ghr_out) 
                     ^ (vlSelf->tb_PD_Stage__DOT__dut__DOT__pc 
                        >> 2U)));
    vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_index2 
        = (0x1ffU & ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__ghr_out) 
                     ^ (((IData)(4U) + vlSelf->tb_PD_Stage__DOT__dut__DOT__pc) 
                        >> 2U)));
}

void Vtb_PD_Stage___024root___eval_nba(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_PD_Stage___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_PD_Stage___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_PD_Stage___024root___timing_resume(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf88ba093__0.resume("@(posedge tb_PD_Stage.CLK)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_PD_Stage___024root___timing_commit(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf88ba093__0.commit("@(posedge tb_PD_Stage.CLK)");
    }
}

void Vtb_PD_Stage___024root___eval_triggers__act(Vtb_PD_Stage___024root* vlSelf);

bool Vtb_PD_Stage___024root___eval_phase__act(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_PD_Stage___024root___eval_triggers__act(vlSelf);
    Vtb_PD_Stage___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_PD_Stage___024root___timing_resume(vlSelf);
        Vtb_PD_Stage___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_PD_Stage___024root___eval_phase__nba(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_PD_Stage___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_PD_Stage___024root___dump_triggers__nba(Vtb_PD_Stage___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_PD_Stage___024root___dump_triggers__act(Vtb_PD_Stage___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_PD_Stage___024root___eval(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_PD_Stage___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/mutahir/Documents/SV/OOO/Design/tb_PD_Stage.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_PD_Stage___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/mutahir/Documents/SV/OOO/Design/tb_PD_Stage.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_PD_Stage___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_PD_Stage___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_PD_Stage___024root___eval_debug_assertions(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
