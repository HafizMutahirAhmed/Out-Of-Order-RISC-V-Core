// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_PD_Stage__Syms.h"


void Vtb_PD_Stage___024root__trace_chg_0_sub_0(Vtb_PD_Stage___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_PD_Stage___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root__trace_chg_0\n"); );
    // Init
    Vtb_PD_Stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_PD_Stage___024root*>(voidSelf);
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_PD_Stage___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_PD_Stage___024root__trace_chg_0_sub_0(Vtb_PD_Stage___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_PD_Stage__DOT__actual_taken));
        bufp->chgBit(oldp+1,(vlSelf->tb_PD_Stage__DOT__mispredict));
        bufp->chgBit(oldp+2,(vlSelf->tb_PD_Stage__DOT__restore_ghr));
        bufp->chgBit(oldp+3,(vlSelf->tb_PD_Stage__DOT__update_pht));
        bufp->chgBit(oldp+4,(vlSelf->tb_PD_Stage__DOT__restore_ras));
        bufp->chgBit(oldp+5,(vlSelf->tb_PD_Stage__DOT__update_btb));
        bufp->chgBit(oldp+6,(vlSelf->tb_PD_Stage__DOT__update_ras));
        bufp->chgBit(oldp+7,(vlSelf->tb_PD_Stage__DOT__ex_is_ret));
        bufp->chgBit(oldp+8,(vlSelf->tb_PD_Stage__DOT__ex_is_branch));
        bufp->chgIData(oldp+9,(vlSelf->tb_PD_Stage__DOT__actual_target_address),32);
        bufp->chgIData(oldp+10,(vlSelf->tb_PD_Stage__DOT__actual_return_address),32);
        bufp->chgIData(oldp+11,(vlSelf->tb_PD_Stage__DOT__ex_pc),32);
        bufp->chgSData(oldp+12,(vlSelf->tb_PD_Stage__DOT__ghr_snap),9);
        bufp->chgSData(oldp+13,(vlSelf->tb_PD_Stage__DOT__rb_pht_index),9);
        bufp->chgIData(oldp+14,((vlSelf->tb_PD_Stage__DOT__ex_pc 
                                 >> 8U)),24);
        bufp->chgCData(oldp+15,((0x3fU & (vlSelf->tb_PD_Stage__DOT__ex_pc 
                                          >> 2U))),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+16,(vlSelf->tb_PD_Stage__DOT__dut__DOT__pred_taken1));
        bufp->chgBit(oldp+17,(vlSelf->tb_PD_Stage__DOT__dut__DOT__pred_taken2));
        bufp->chgBit(oldp+18,(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_hit1));
        bufp->chgBit(oldp+19,(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_hit2));
        bufp->chgIData(oldp+20,(vlSelf->tb_PD_Stage__DOT__pd_pred_target1),32);
        bufp->chgIData(oldp+21,(vlSelf->tb_PD_Stage__DOT__pd_pred_target2),32);
        bufp->chgSData(oldp+22,(vlSelf->tb_PD_Stage__DOT__pd_pht_index1),9);
        bufp->chgSData(oldp+23,(vlSelf->tb_PD_Stage__DOT__pd_pht_index2),9);
        bufp->chgSData(oldp+24,(vlSelf->tb_PD_Stage__DOT__pd_prev_ghr),9);
        bufp->chgSData(oldp+25,(vlSelf->tb_PD_Stage__DOT__dut__DOT__ghr_out),9);
        bufp->chgSData(oldp+26,(vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_index1),9);
        bufp->chgSData(oldp+27,(vlSelf->tb_PD_Stage__DOT__dut__DOT__pht_index2),9);
        bufp->chgIData(oldp+28,(vlSelf->tb_PD_Stage__DOT__dut__DOT__final_pred_target1),32);
        bufp->chgIData(oldp+29,(vlSelf->tb_PD_Stage__DOT__dut__DOT__final_pred_target2),32);
        bufp->chgIData(oldp+30,(vlSelf->tb_PD_Stage__DOT__dut__DOT__pc),32);
        bufp->chgBit(oldp+31,(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch1));
        bufp->chgBit(oldp+32,(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch2));
        bufp->chgBit(oldp+33,(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_ret1));
        bufp->chgBit(oldp+34,(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_ret2));
        bufp->chgIData(oldp+35,((IData)((vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry1 
                                         >> 3U))),32);
        bufp->chgIData(oldp+36,((IData)((vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry2 
                                         >> 3U))),32);
        bufp->chgIData(oldp+37,(vlSelf->tb_PD_Stage__DOT__dut__DOT__ret_addr1),32);
        bufp->chgIData(oldp+38,(vlSelf->tb_PD_Stage__DOT__dut__DOT__ret_addr2),32);
        bufp->chgCData(oldp+39,(vlSelf->tb_PD_Stage__DOT__dut__DOT__sp_snap),3);
        bufp->chgQData(oldp+40,(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_snap),64);
        bufp->chgIData(oldp+42,(((IData)(4U) + vlSelf->tb_PD_Stage__DOT__dut__DOT__pc)),32);
        bufp->chgIData(oldp+43,(vlSelf->tb_PD_Stage__DOT__dut__DOT__always_pc),32);
        bufp->chgBit(oldp+44,(vlSelf->tb_PD_Stage__DOT__dut__DOT__forever_set));
        bufp->chgQData(oldp+45,(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry1),59);
        bufp->chgQData(oldp+47,(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry2),59);
        bufp->chgBit(oldp+49,(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__tag_matched1));
        bufp->chgBit(oldp+50,(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__tag_matched2));
        bufp->chgIData(oldp+51,((vlSelf->tb_PD_Stage__DOT__dut__DOT__pc 
                                 >> 8U)),24);
        bufp->chgIData(oldp+52,((((IData)(4U) + vlSelf->tb_PD_Stage__DOT__dut__DOT__pc) 
                                 >> 8U)),24);
        bufp->chgIData(oldp+53,(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__reg_btb_tag1),24);
        bufp->chgIData(oldp+54,(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__reg_btb_tag2),24);
        bufp->chgCData(oldp+55,((0x3fU & (vlSelf->tb_PD_Stage__DOT__dut__DOT__pc 
                                          >> 2U))),6);
        bufp->chgCData(oldp+56,((0x3fU & (((IData)(4U) 
                                           + vlSelf->tb_PD_Stage__DOT__dut__DOT__pc) 
                                          >> 2U))),6);
        bufp->chgBit(oldp+57,(((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch1)
                                ? (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__pred_taken1)
                                : (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__pred_taken2))));
        bufp->chgBit(oldp+58,((1U & ((~ (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch1)) 
                                     | ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch1) 
                                        & (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__pred_taken1))))));
        bufp->chgBit(oldp+59,((1U & ((~ (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch2)) 
                                     | ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_branch2) 
                                        & (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__pred_taken2))))));
        bufp->chgIData(oldp+60,(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS[0]),32);
        bufp->chgIData(oldp+61,(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS[1]),32);
        bufp->chgIData(oldp+62,(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS[2]),32);
        bufp->chgIData(oldp+63,(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS[3]),32);
        bufp->chgIData(oldp+64,(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS[4]),32);
        bufp->chgIData(oldp+65,(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS[5]),32);
        bufp->chgIData(oldp+66,(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS[6]),32);
        bufp->chgIData(oldp+67,(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS[7]),32);
        bufp->chgCData(oldp+68,(vlSelf->tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp),3);
        bufp->chgCData(oldp+69,((3U & ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_ret1) 
                                       + (IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__is_ret2)))),2);
    }
    bufp->chgBit(oldp+70,(vlSelf->tb_PD_Stage__DOT__CLK));
    bufp->chgBit(oldp+71,(vlSelf->tb_PD_Stage__DOT__reset));
    bufp->chgIData(oldp+72,(((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__forever_set)
                              ? vlSelf->tb_PD_Stage__DOT__dut__DOT__always_pc
                              : (((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_hit1) 
                                  | ((IData)(vlSelf->tb_PD_Stage__DOT__dut__DOT__btb_hit2) 
                                     | (IData)(vlSelf->tb_PD_Stage__DOT__mispredict)))
                                  ? vlSelf->tb_PD_Stage__DOT__dut__DOT__write_pc_data
                                  : vlSelf->tb_PD_Stage__DOT__dut__DOT__pc))),32);
    bufp->chgCData(oldp+73,(vlSelf->tb_PD_Stage__DOT__pd_sp_snap),3);
    bufp->chgQData(oldp+74,(vlSelf->tb_PD_Stage__DOT__pd_ras_snap),64);
    bufp->chgIData(oldp+76,(vlSelf->tb_PD_Stage__DOT__dut__DOT__write_pc_data),32);
    bufp->chgIData(oldp+77,(vlSelf->tb_PD_Stage__DOT__dut__DOT__next_pc),32);
    bufp->chgBit(oldp+78,(vlSelf->tb_PD_Stage__DOT__dut__DOT__forever_loop));
}

void Vtb_PD_Stage___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_PD_Stage___024root__trace_cleanup\n"); );
    // Init
    Vtb_PD_Stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_PD_Stage___024root*>(voidSelf);
    Vtb_PD_Stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
