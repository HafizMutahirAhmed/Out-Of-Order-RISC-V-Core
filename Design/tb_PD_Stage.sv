module tb_PD_Stage;
    parameter PHT_ADDRESS = 9, GHR_SIZE = 9, XLEN = 32, RAS_ADDRESS = 3;
    
    // === ALL INPUTS ===
    logic CLK, reset, actual_taken, mispredict, restore_ghr, update_pht, restore_ras, update_btb;
    logic update_ras, ex_is_ret, ex_is_branch;
    logic [XLEN-1:0] actual_target_address, actual_return_address, ex_pc;
    logic [GHR_SIZE-1:0] ghr_snap;
    logic [PHT_ADDRESS-1:0] rb_pht_index;
    logic [RAS_ADDRESS-1:0] rb_sp_snap; 
    logic [2*XLEN-1:0] rb_ras_snap;
    // === ALL OUTPUTS ===
    logic pd_pred_taken1, pd_pred_taken2, pd_btb_hit1, pd_btb_hit2;
    logic [XLEN-1:0] pd_pc, pd_pred_target1, pd_pred_target2;
    logic [PHT_ADDRESS-1:0] pd_pht_index1, pd_pht_index2;
    logic [RAS_ADDRESS-1:0] pd_sp_snap;
    logic [2*XLEN-1:0] pd_ras_snap;
    logic [GHR_SIZE-1:0] pd_prev_ghr;

    // DUT
    PD_Stage #(PHT_ADDRESS, GHR_SIZE, XLEN, RAS_ADDRESS) dut (
        .CLK, .reset, .actual_taken, .mispredict, .restore_ghr, .restore_ras,
        .update_pht, .update_btb, .update_ras, .ex_is_ret, .ex_is_branch,
        .actual_target_address, .actual_return_address, .ex_pc,
        .rb_sp_snap, .rb_ras_snap,
        .ghr_snap, .rb_pht_index,
        .pd_pred_taken1, .pd_pred_taken2, .pd_btb_hit1, .pd_btb_hit2,
        .pd_pc, .pd_pred_target1, .pd_pred_target2,
        .pd_pht_index1, .pd_pht_index2, .pd_sp_snap, .pd_ras_snap, .pd_prev_ghr
    );

    // Clock
    initial begin
        CLK = 0;
        reset = 1;
        forever #5 CLK = ~CLK; 
    end
      
    initial begin
        //test1 (adding jal/jalr instruction from ex stage due to misprediction)
        @(posedge CLK);
        reset = 0;
        actual_taken =0;//NT
        mispredict = 1;
        restore_ghr = 0;
        restore_ras = 0;
        update_pht = 0;
        update_btb = 1; 
        update_ras = 0;
        ex_is_ret = 0;
        ex_is_branch = 0; //is JAL/JALR
        actual_target_address = 32'h0000000C;
        actual_return_address = 32'h44444444;
        ex_pc                 = 32'h00000004;
        ghr_snap =  9'b101010101;
        pd_sp_snap = 3'b100;
        pd_ras_snap = 64'hAAAAAAAA88888888;
        rb_pht_index = 9'hAA1;
        
        @(posedge CLK);
        reset = 0;
        actual_taken = 0;//NT
        mispredict = 0;
        restore_ghr = 0;
        update_btb = 0;
        restore_ras = 0;
        update_pht = 0;
        update_ras = 0;
        ex_is_ret = 0;
        ex_is_branch = 0; //is call
        actual_target_address = 32'h00401000;
        actual_return_address = 32'h44444444;
        ex_pc                 = 32'h00000008;
        ghr_snap =  9'b101010101;
        pd_sp_snap = 3'b100;
        pd_ras_snap = 64'hAAAAAAAA88888888;
        rb_pht_index = 9'hAA1;
        #200;        
         $finish;
    end
    initial begin
        $dumpfile("/home/mutahir/Documents/SV/OOO/Design/PD_Stage.vcd");
        $dumpvars(0,tb_PD_Stage);
    end    
endmodule
