// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_PD_Stage.h for the primary calling header

#ifndef VERILATED_VTB_PD_STAGE___024ROOT_H_
#define VERILATED_VTB_PD_STAGE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_PD_Stage__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_PD_Stage___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_PD_Stage__DOT__CLK;
    CData/*0:0*/ tb_PD_Stage__DOT__reset;
    CData/*0:0*/ tb_PD_Stage__DOT__actual_taken;
    CData/*0:0*/ tb_PD_Stage__DOT__mispredict;
    CData/*0:0*/ tb_PD_Stage__DOT__restore_ghr;
    CData/*0:0*/ tb_PD_Stage__DOT__update_pht;
    CData/*0:0*/ tb_PD_Stage__DOT__restore_ras;
    CData/*0:0*/ tb_PD_Stage__DOT__update_btb;
    CData/*0:0*/ tb_PD_Stage__DOT__update_ras;
    CData/*0:0*/ tb_PD_Stage__DOT__ex_is_ret;
    CData/*0:0*/ tb_PD_Stage__DOT__ex_is_branch;
    CData/*2:0*/ tb_PD_Stage__DOT__rb_sp_snap;
    CData/*2:0*/ tb_PD_Stage__DOT__pd_sp_snap;
    CData/*0:0*/ tb_PD_Stage__DOT__dut__DOT__pred_taken1;
    CData/*0:0*/ tb_PD_Stage__DOT__dut__DOT__pred_taken2;
    CData/*0:0*/ tb_PD_Stage__DOT__dut__DOT__btb_hit1;
    CData/*0:0*/ tb_PD_Stage__DOT__dut__DOT__btb_hit2;
    CData/*0:0*/ tb_PD_Stage__DOT__dut__DOT__is_branch1;
    CData/*0:0*/ tb_PD_Stage__DOT__dut__DOT__is_branch2;
    CData/*0:0*/ tb_PD_Stage__DOT__dut__DOT__is_ret1;
    CData/*0:0*/ tb_PD_Stage__DOT__dut__DOT__is_ret2;
    CData/*2:0*/ tb_PD_Stage__DOT__dut__DOT__sp_snap;
    CData/*0:0*/ tb_PD_Stage__DOT__dut__DOT__forever_loop;
    CData/*0:0*/ tb_PD_Stage__DOT__dut__DOT__forever_set;
    CData/*0:0*/ tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__tag_matched1;
    CData/*0:0*/ tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__tag_matched2;
    CData/*2:0*/ tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__sp;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_PD_Stage__DOT__CLK__0;
    CData/*0:0*/ __VactContinue;
    SData/*8:0*/ tb_PD_Stage__DOT__ghr_snap;
    SData/*8:0*/ tb_PD_Stage__DOT__rb_pht_index;
    SData/*8:0*/ tb_PD_Stage__DOT__pd_pht_index1;
    SData/*8:0*/ tb_PD_Stage__DOT__pd_pht_index2;
    SData/*8:0*/ tb_PD_Stage__DOT__pd_prev_ghr;
    SData/*8:0*/ tb_PD_Stage__DOT__dut__DOT__ghr_out;
    SData/*8:0*/ tb_PD_Stage__DOT__dut__DOT__pht_index1;
    SData/*8:0*/ tb_PD_Stage__DOT__dut__DOT__pht_index2;
    IData/*31:0*/ tb_PD_Stage__DOT__actual_target_address;
    IData/*31:0*/ tb_PD_Stage__DOT__actual_return_address;
    IData/*31:0*/ tb_PD_Stage__DOT__ex_pc;
    IData/*31:0*/ tb_PD_Stage__DOT__pd_pred_target1;
    IData/*31:0*/ tb_PD_Stage__DOT__pd_pred_target2;
    IData/*31:0*/ tb_PD_Stage__DOT__dut__DOT__final_pred_target1;
    IData/*31:0*/ tb_PD_Stage__DOT__dut__DOT__final_pred_target2;
    IData/*31:0*/ tb_PD_Stage__DOT__dut__DOT__pc;
    IData/*31:0*/ tb_PD_Stage__DOT__dut__DOT__ret_addr1;
    IData/*31:0*/ tb_PD_Stage__DOT__dut__DOT__ret_addr2;
    IData/*31:0*/ tb_PD_Stage__DOT__dut__DOT__write_pc_data;
    IData/*31:0*/ tb_PD_Stage__DOT__dut__DOT__next_pc;
    IData/*31:0*/ tb_PD_Stage__DOT__dut__DOT__always_pc;
    IData/*23:0*/ tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__reg_btb_tag1;
    IData/*23:0*/ tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__reg_btb_tag2;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_PD_Stage__DOT__rb_ras_snap;
    QData/*63:0*/ tb_PD_Stage__DOT__pd_ras_snap;
    QData/*63:0*/ tb_PD_Stage__DOT__dut__DOT__ras_snap;
    QData/*58:0*/ tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry1;
    QData/*58:0*/ tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__btb_entry2;
    VlUnpacked<CData/*1:0*/, 512> tb_PD_Stage__DOT__dut__DOT__pht_instantiation__DOT__PHT;
    VlUnpacked<QData/*58:0*/, 64> tb_PD_Stage__DOT__dut__DOT__btb_instantiation__DOT__BTB;
    VlUnpacked<IData/*31:0*/, 8> tb_PD_Stage__DOT__dut__DOT__ras_instantiation__DOT__RAS;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf88ba093__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_PD_Stage__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_PD_Stage___024root(Vtb_PD_Stage__Syms* symsp, const char* v__name);
    ~Vtb_PD_Stage___024root();
    VL_UNCOPYABLE(Vtb_PD_Stage___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
