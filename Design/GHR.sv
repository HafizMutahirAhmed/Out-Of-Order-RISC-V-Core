module GHR #(
    parameter GHR_SIZE = 9
)(
    input logic CLK, reset, restore_ghr, actual_taken, pred_taken1, pred_taken2, pred_branch1, pred_branch2,
    input logic [GHR_SIZE-1:0] ghr_snap,
    output logic [GHR_SIZE-1:0] ghr_out, prev_ghr
);
    logic pred_taken;
    assign pred_taken = (pred_branch1)? pred_taken1 : pred_taken2;
    assign prev_ghr = ghr_out;
    always_ff @(posedge CLK) begin
        if (reset) begin
            ghr_out <= '0;
        end
        else if (restore_ghr) begin
            ghr_out <= {ghr_snap[GHR_SIZE-2:0], actual_taken};
        end
        else if (pred_branch1 || pred_branch2) begin
            ghr_out <= {ghr_out[GHR_SIZE-2:0], pred_taken};
        end
    end     
endmodule