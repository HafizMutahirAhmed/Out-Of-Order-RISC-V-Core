module RAT (
    input logic CLK, Reset,
    input logic [4:0] RD, RS1, RS2,
    input logic [7:0] Allocated_PRF_ID,
    output logic [7:0] RS1_PRF_ID, RS2_PRF_ID, RD_PRF_ID, Old_RD_PRF_ID
    );

    logic [7:0] RAT_Table [31:0];

    always_ff @(posedge CLK) begin
        if (Reset) begin
            for (int i = 0; i < 32; i++) begin
                RAT_Table[i] <= i[7:0]; 
            end
        end
        else if (RD != 5'b00000) begin
            Old_RD_PRF_ID <= RAT_Table[RD];
            RAT_Table[RD] <= Allocated_PRF_ID;
            RD_PRF_ID <= Allocated_PRF_ID;
        end
    end
    
    always_comb begin
        RS1_PRF_ID = RAT_Table[RS1];
        RS2_PRF_ID = RAT_Table[RS2];
    end
endmodule