module RAT_TestBench;

    logic CLK, Reset;
    logic [4:0] RD, RS1, RS2;
    logic [7:0] Allocated_PRF_ID, RS1_PRF_ID, RS2_PRF_ID, RD_PRF_ID, Old_RD_PRF_ID;

    RAT dut(
        .CLK(CLK),
        .Reset(Reset),
        .RD(RD),
        .RS1(RS1),
        .RS2(RS2),
        .Allocated_PRF_ID(Allocated_PRF_ID),
        .RS1_PRF_ID(RS1_PRF_ID),
        .RS2_PRF_ID(RS2_PRF_ID),
        .RD_PRF_ID(RD_PRF_ID),
        .Old_RD_PRF_ID(Old_RD_PRF_ID)
    );
    always begin
        #1 CLK = ~CLK;
    end

    initial begin
        CLK = 0;
        Reset = 1;
        #2 Reset = 0;
        RD = 5'd5;
        RS1 = 5'd3;
        RS2 = 5'd4;
        Allocated_PRF_ID = 8'd33;
    end

    initial begin
        $dumpfile("RAT_TestBench.vcd");
        $dumpvars(0, RAT_TestBench);
    end
endmodule