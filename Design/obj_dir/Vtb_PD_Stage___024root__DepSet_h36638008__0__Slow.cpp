// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_PD_Stage.h for the primary calling header

#include "Vtb_PD_Stage__pch.h"
#include "Vtb_PD_Stage___024root.h"

VL_ATTR_COLD void Vtb_PD_Stage___024root___eval_static(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_PD_Stage___024root___eval_final(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_PD_Stage___024root___dump_triggers__stl(Vtb_PD_Stage___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_PD_Stage___024root___eval_phase__stl(Vtb_PD_Stage___024root* vlSelf);

VL_ATTR_COLD void Vtb_PD_Stage___024root___eval_settle(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_PD_Stage___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/mutahir/Documents/SV/OOO/Design/tb_PD_Stage.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_PD_Stage___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_PD_Stage___024root___dump_triggers__stl(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_PD_Stage___024root___stl_sequent__TOP__0(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_PD_Stage__DOT__pd_sp_snap = vlSelf->tb_PD_Stage__DOT__dut__DOT__sp_snap;
    vlSelf->tb_PD_Stage__DOT__pd_ras_snap = vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_snap;
    vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_index1 
        = (0x1ffU & ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__ghr_out) 
                     ^ (vlSelf->tb_PD_Stage__DOT__dut__DOT__pc 
                        >> 2U)));
    vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_index2 
        = (0x1ffU & ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__ghr_out) 
                     ^ (((IData)(4U) + vlSelf->tb_PD_Stage__DOT__dut__DOT__pc) 
                        >> 2U)));
    vlSelf->tb_PD_Stage__DOT__dut__DOT__forever_loop 
        = ((IData)(vlSelf->tb_PD_Stage__DOT__mispredict) 
           & ((vlSelf->tb_PD_Stage__DOT__actual_target_address 
               == vlSelf->tb_PD_Stage__DOT__ex_pc) 
              | (vlSelf->tb_PD_Stage__DOT__ex_pc == 
                 ((IData)(4U) + vlSelf->tb_PD_Stage__DOT__actual_target_address))));
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

VL_ATTR_COLD void Vtb_PD_Stage___024root___eval_stl(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_PD_Stage___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_PD_Stage___024root___eval_triggers__stl(Vtb_PD_Stage___024root* vlSelf);

VL_ATTR_COLD bool Vtb_PD_Stage___024root___eval_phase__stl(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_PD_Stage___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_PD_Stage___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_PD_Stage___024root___dump_triggers__act(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_PD_Stage.CLK)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_PD_Stage___024root___dump_triggers__nba(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_PD_Stage.CLK)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_PD_Stage___024root___ctor_var_reset(Vtb_PD_Stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_PD_Stage__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__actual_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__mispredict = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__restore_ghr = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__update_pht = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__restore_ras = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__update_btb = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__update_ras = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__ex_is_ret = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__ex_is_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__actual_target_address = VL_RAND_RESET_I(32);
    vlSelf->tb_PD_Stage__DOT__actual_return_address = VL_RAND_RESET_I(32);
    vlSelf->tb_PD_Stage__DOT__ex_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_PD_Stage__DOT__ghr_snap = VL_RAND_RESET_I(9);
    vlSelf->tb_PD_Stage__DOT__rb_pht_index = VL_RAND_RESET_I(9);
    vlSelf->tb_PD_Stage__DOT__rb_sp_snap = VL_RAND_RESET_I(3);
    vlSelf->tb_PD_Stage__DOT__rb_ras_snap = VL_RAND_RESET_Q(64);
    vlSelf->tb_PD_Stage__DOT__pd_pred_target1 = VL_RAND_RESET_I(32);
    vlSelf->tb_PD_Stage__DOT__pd_pred_target2 = VL_RAND_RESET_I(32);
    vlSelf->tb_PD_Stage__DOT__pd_pht_index1 = VL_RAND_RESET_I(9);
    vlSelf->tb_PD_Stage__DOT__pd_pht_index2 = VL_RAND_RESET_I(9);
    vlSelf->tb_PD_Stage__DOT__pd_sp_snap = VL_RAND_RESET_I(3);
    vlSelf->tb_PD_Stage__DOT__pd_ras_snap = VL_RAND_RESET_Q(64);
    vlSelf->tb_PD_Stage__DOT__pd_prev_ghr = VL_RAND_RESET_I(9);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__ghr_out = VL_RAND_RESET_I(9);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_index1 = VL_RAND_RESET_I(9);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_index2 = VL_RAND_RESET_I(9);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__final_pred_target1 = VL_RAND_RESET_I(32);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__final_pred_target2 = VL_RAND_RESET_I(32);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__pred_taken1 = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__pred_taken2 = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_hit1 = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_hit2 = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch1 = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch2 = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__is_ret1 = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__is_ret2 = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__ret_addr1 = VL_RAND_RESET_I(32);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__ret_addr2 = VL_RAND_RESET_I(32);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__sp_snap = VL_RAND_RESET_I(3);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_snap = VL_RAND_RESET_Q(64);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__write_pc_data = VL_RAND_RESET_I(32);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__always_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__forever_loop = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__forever_set = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB[__Vi0] = VL_RAND_RESET_Q(59);
    }
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry1 = VL_RAND_RESET_Q(59);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry2 = VL_RAND_RESET_Q(59);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__tag_matched1 = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__tag_matched2 = VL_RAND_RESET_I(1);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__reg_btb_tag1 = VL_RAND_RESET_I(24);
    vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__reg_btb_tag2 = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_PD_Stage__DOT__CLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
