
module PC #(
    parameter XLEN = 32    
)(  
    input logic CLK, reset, mispredict, btb_hit1, btb_hit2, is_ret1, is_ret2, is_branch1, is_branch2, pred_taken1, pred_taken2,
    input logic [XLEN-1:0] pred_target1, pred_target2, ret_addr1, ret_addr2, actual_target_address, 
    output logic signed [31:0] pc, final_pred_target1, final_pred_target2
);
    logic is_branch_or_jump1, is_branch_or_jump2;

    assign is_branch_or_jump1 = is_branch1 && pred_taken1 || !is_branch1; //!is_branch = jal, jalr 
    assign is_branch_or_jump2 = is_branch2 && pred_taken2 || !is_branch2;

    always_comb begin
        final_pred_target1 = (is_ret1)? ret_addr1: pred_target1;
        final_pred_target2 = (is_ret2)? ret_addr2: pred_target2;
    end

    always_ff @(posedge CLK) begin
        if (reset) begin
            pc <= 0;
        end
        else if (mispredict) begin
            pc <= actual_target_address;
        end
        else if (btb_hit1 && (is_ret1 || is_branch_or_jump1)) begin
            pc <= final_pred_target1;
        end
        else if (btb_hit2 && (is_ret2 || is_branch_or_jump2)) begin
            pc <= final_pred_target2;
        end
        else begin
            pc <= pc + 8;
        end
    end
endmodule
