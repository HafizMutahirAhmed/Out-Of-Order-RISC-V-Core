module PD_Stage #(
    parameter PHT_ADDRESS = 9,
    parameter XLEN = 32
)(
    input logic CLK, reset, restore_ghr, actual_taken, mispredict, update_pht, update_btb, ex_is_ret, ex_is_branch, update_ras,
    input logic [XLEN-1:0] actual_target_address, actual_return_address, ex_pc
    input logic [GHR_SIZE-1:0] ghr_snap,
    input logic [PHT_ADDRESS-1:0] rb_pht_index,
    output logic pd_pred_taken1, pd_pred_taken2,
    output logic [XLEN-1:0] pd_pc, pd_pred_target1, pd_pred_target2,
    output logic [PHT_ADDRESS-1:0] pd_pht_index1, pd_pht_index2
);

    assign pht_index1 = ghr_out ^ pc[PHT_ADDRESS+1:2];
    assign pht_index2 = ghr_out ^ (pc+4)[PHT_ADDRESS+1:2];
    assign pd_pred_taken1 = pred_taken1;
    assign pd_pred_taken2 = pred_taken2;
    assign pd_pc = pc; 
    
    always_ff @( posedge CLK ) begin 
        pd_pht_index1 <= pht_index1;
        pd_pht_index2 <= pht_index2;
        pd_pred_target1 <= final_pred_target1;
        pd_pred_target2 <= final_pred_target2;
    end
    GHR ghr_instantiation(
        //inputs 
        .CLK            (CLK),
        .reset          (reset),
        .restore_ghr    (restore_ghr),
        .actual_taken   (actual_taken),
        .pred_taken1    (pred_taken1),
        .pred_taken2    (pred_taken2),
        .pred_branch1   (is_branch1),
        .pred_branch2   (is_branch2),
        .ghr_snap       (ghr_snap),
        //outputs
        .ghr_out        (ghr_out)
    );
    
    PC pc_instantiation (
        //inputs
        .CLK                    (CLK),
        .reset                  (reset),
        .mispredict             (mispredict),
        .btb_hit1               (btb_hit1),
        .btb_hit2               (btb_hit2),
        .is_ret1                (is_ret1),
        .is_ret2                (is_ret2),
        .is_branch1             (is_branch1),
        .is_branch2             (is_branch2),
        .pred_taken1            (pred_taken1),
        .pred_taken2            (pred_taken2),
        .pred_target1           (pred_target1),
        .pred_target2           (pred_target2),
        .ret_addr1              (ret_addr1),
        .ret_addr2              (ret_addr2),
        .actual_target_address  (actual_target_address),
        //outputs
        .pc                     (pc),
        .final_pred_target1     (final_pred_target1),
        .final_pred_target2     (final_pred_target2)
    );

    PHT pht_instantiation (
        //inputs
        .CLK           (CLK),
        .reset         (reset),
        .actual_taken  (actual_taken),
        .update_pht    (update_pht),
        .pht_index1    (pht_index1),
        .pht_index2    (pht_index2),
        .rb_pht_index  (rb_pht_index),
        //outputs
        .pred_taken1   (pred_taken1),
        .pred_taken2   (pred_taken2)
    );

    BTB btb_instantiation (
        //inputs
        .CLK                     (CLK),
        .reset                   (reset),
        .update_btb              (update_btb),
        .ex_is_ret               (ex_is_ret),
        .ex_is_branch            (ex_is_branch),
        .pc1                     (pc),
        .pc2                     (pc+4),
        .ex_pc                   (ex_pc),
        .actual_target_address   (actual_target_address),
        //outputs
        .btb_hit1                (btb_hit1),
        .btb_hit2                (btb_hit2),
        .is_ret1                 (is_ret1),
        .is_ret2                 (is_ret2),
        .is_branch1              (is_branch1),
        .is_branch2              (is_branch2),
        .pred_target1            (pred_target1),
        .pred_target2            (pred_target2),
    );

    RAS ras_instantiation (
        //inputs
        .CLK                     (CLK),
        .reset                   (reset),
        .update_ras              (update_ras),
        .btb_is_ret1             (is_ret1),
        .btb_is_ret2             (is_ret2),
        .actual_return_address   (actual_return_address),
        //outputs
        .ret_addr1               (ret_addr1),
        .ret_addr2               (ret_addr2),
        .sp_snap                 (sp_snap),
        .ras_snap                (ras_snap)
    );

endmodule