
module PC #(
    parameter XLEN = 32    
)(  
    input logic CLK, reset, mispredict, btb_hit1, btb_hit2, is_ret1, is_ret2, 
    input logic [XLEN-1:0] pred_target1, pred_target2, ret_addr1, ret_addr2, actual_target_address, 
    output logic signed [31:0] pc
);
    always_ff @(posedge CLK) begin
        if (reset) begin
            pc <= -8;
        end
        else if (mispredict) begin
            pc <= actual_target_address;
        end
        else if (btb_hit1 && is_ret1) begin
            pc <= ret_addr1;
        end
        else if (btb_hit1) begin
            pc <= pred_target1;
        end
        else if (btb_hit2 && is_ret2) begin
            pc <= ret_addr2;
        end
        else if (btb_hit2) begin
            pc <= pred_target2;
        end
        else begin
            pc <= pc + 8;
        end
    end
endmodule
