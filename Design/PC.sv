
module PC #(
    parameter XLEN = 32    
)(  
    input logic CLK, reset,
    output logic signed [31:0] pc1, pc2
);
    always_ff @(posedge CLK) begin
        if (reset) begin
            pc1 <= -4;
            pc2 <= -4;
        end
        else begin
            pc1 <= pc1 + 4;
            pc2 <= pc2 + 8;
        end
    end

endmodule
