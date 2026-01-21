module PD_Stage #(
    parameter PHT_ADDRESS = 9,
    parameter XLEN = 32
)(
    input logic CLK, reset, actual_taken, update_pht, update_btb, ex_is_ret,
    input logic [PHT_ADDRESS-1:0] rb_pht_index,
    input logic [XLEN-1:0] ex_pc, actual_target_address, actual_return_address
);
    GHR ghr_instantiation(
        .CLK            (CLK),
        .reset          (reset),
        .restore_ghr    (restore_ghr),
        .actual_taken   (actual_taken),
        .pred_taken1    (pred_taken1),
        .pred_taken2    (pred_taken2),
        .pred_branch1   (is_branch1),
        .pred_branch2   (is_branch2),
        .ghr_snap       (ghr_snap),
        .ghr_out        (ghr_out)
    );
    
    PC pc_instantiation (
        //inputs
        .CLK            (CLK),
        .reset          (reset),
        //outputs
        .pred_target1   (pred_target1),
        .pred_target2   (pred_target2),
        .pc1            (pc1),
        .pc2            (pc2)
        
    );

    PHT pht_instantiation (
        //inputs
        .CLK           (CLK),
        .reset         (reset),
        .actual_taken  (actual_taken),
        .update_pht    (update_pht),
        .pht_index1    (GHR ^ pc1[PHT_ADDRESS+1:2]),
        .pht_index2    (GHR ^ pc2[PHT_ADDRESS+1:2]),
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
        .pc1                     (pc1),
        .pc2                     (pc2),
        .ex_pc                   (ex_pc),
        .actual_target_address   (actual_target_address),
        //outputs
        .tag_matched1            (btb_hit1),
        .tag_matched2            (btb_hit2),
        .is_ret1                 (is_ret1),
        .is_ret2                 (is_ret2),
        .is_branch1              (is_branch1),
        .is_branch2              (is_branch2),
        .pred_target1            (pred_target1),
        .pred_target2            (pred_target2),
        .pred_target1            (pred_target1),
        .pred_target2            (pred_target2)
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
        .ret_addr                (ret_addr),
        .sp_snap                 (sp_snap),
        .ras_snap                (ras_snap)
    );

endmodule