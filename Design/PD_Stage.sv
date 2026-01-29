module PD_Stage #(
    parameter PHT_ADDRESS = 9,
    parameter GHR_SIZE = 9,
    parameter XLEN = 32,
    parameter RAS_ADDRESS = 3
)(
    input logic CLK, reset, actual_taken, mispredict, restore_ghr, restore_ras, update_pht, update_btb, update_ras, ex_is_ret, ex_is_branch,
    input logic [XLEN-1:0] actual_target_address, actual_return_address, ex_pc,
    input logic [GHR_SIZE-1:0] ghr_snap,
    input logic [PHT_ADDRESS-1:0] rb_pht_index,
    input logic [RAS_ADDRESS-1:0] rb_sp_snap,
    input logic [2*XLEN-1:0] rb_ras_snap,
    output logic pd_pred_taken1, pd_pred_taken2, pd_btb_hit1, pd_btb_hit2,
    output logic [XLEN-1:0] pd_pc, pd_pred_target1, pd_pred_target2,
    output logic [PHT_ADDRESS-1:0] pd_pht_index1, pd_pht_index2,
    output logic [RAS_ADDRESS-1:0] pd_sp_snap,
    output logic [2*XLEN-1:0] pd_ras_snap,
    output logic [GHR_SIZE-1:0] pd_prev_ghr
);

    
    logic [GHR_SIZE-1:0] ghr_out, prev_ghr;
    logic [PHT_ADDRESS-1:0] pht_index1, pht_index2;
    logic [XLEN-1:0] final_pred_target1, final_pred_target2, pc;
    logic pred_taken1, pred_taken2, btb_hit1, btb_hit2;
    logic is_branch1, is_branch2, is_ret1, is_ret2;
    logic [XLEN-1:0] pred_target1, pred_target2, ret_addr1, ret_addr2;
    logic [RAS_ADDRESS-1:0] sp_snap;
    logic [2*XLEN-1:0] ras_snap;
    logic [XLEN-1:0] write_pc_data,next_pc, pc1, pc2;

    //can be further optimized
    logic [XLEN-1:0] always_pc;
    logic forever_loop, forever_set;
    assign forever_loop = mispredict && (ex_pc ==actual_target_address||ex_pc ==actual_target_address+4); 
    always_ff @(posedge CLK) begin
        always_pc <= forever_set ? always_pc : (forever_loop ? ex_pc : always_pc);
        if (!forever_set) begin
            forever_set  <= forever_loop;
        end
    end
    //ends here
    assign pc1 = pc;
    assign pc2 = pc+4;
    assign pht_index1 = ghr_out ^ pc1[PHT_ADDRESS+1:2];
    assign pht_index2 = ghr_out ^ pc2[PHT_ADDRESS+1:2];
    assign pd_pred_taken1 = pred_taken1;
    assign pd_pred_taken2 = pred_taken2;
    assign pd_pc = (forever_set)? always_pc: (btb_hit1 || btb_hit2 || mispredict)? write_pc_data: pc; 
    assign pd_btb_hit1 = btb_hit1;
    assign pd_btb_hit2 = btb_hit2;
    assign pd_sp_snap = sp_snap;
    assign pd_ras_snap = ras_snap;
    
    always_ff @( posedge CLK ) begin 
        pd_pht_index1 <= pht_index1;
        pd_pht_index2 <= pht_index2;
        pd_pred_target1 <= final_pred_target1;
        pd_pred_target2 <= final_pred_target2;
        pd_prev_ghr <= prev_ghr;
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
        .ghr_out        (ghr_out),
        .prev_ghr       (prev_ghr)
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
        .write_pc_data             (write_pc_data),
        .next_pc                (next_pc),
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
        .pc1                     (pc1),
        .pc2                     (pc2),
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
        .pred_target2            (pred_target2)
    );

    RAS ras_instantiation (
        //inputs
        .CLK                     (CLK),
        .reset                   (reset),
        .update_ras              (update_ras),
        .restore_ras             (restore_ras),
        .rb_sp_snap              (rb_sp_snap),
        .rb_ras_snap             (rb_ras_snap),
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