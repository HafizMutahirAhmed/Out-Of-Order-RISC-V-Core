module RAS #(
    parameter RAS_ADDRESS = 3,
    parameter XLEN = 32,
    parameter RAS_LEN = (1<<RAS_ADDRESS)
) (
    input logic CLK, reset, update_ras, btb_is_ret1, btb_is_ret2,
    input logic [XLEN-1:0] actual_return_address, 
    output logic [XLEN-1:0] ret_addr1, ret_addr2,
    output logic [RAS_ADDRESS-1:0] sp_snap,
    output logic [2*XLEN-1:0] ras_snap
);
    (* ram_style = "distributed" *) logic [XLEN-1:0] RAS [0:RAS_LEN-1]; 
    logic [RAS_ADDRESS-1:0] sp;
    logic [1:0] pop;
    logic full, empty, push, pop1, pop2;

    assign full = (sp == RAS_LEN-1);
    assign empty = (sp == 'b0);
    assign push = update_ras && !full;
    assign pop1 = !empty && btb_is_ret1;
    assign pop2 = !empty && btb_is_ret2;
    assign pop = pop1 + pop2;


    always_ff @(posedge CLK) begin 
        if (reset) begin
            sp <= '0; 
            ret_addr1 <= '0;
            ret_addr2 <= '0;
            sp_snap <= '0;
            ras_snap <= '0;
        end
        else begin
            sp_snap <= sp;
            ras_snap <= {RAS[sp-2], RAS[sp-1]};
            sp <= sp + push - pop;
            if (push) begin
                RAS[sp] <= actual_return_address;
            end
            if (pop1) begin
                ret_addr1 <= RAS[sp-1]; 
            end
            if (pop2) begin
                ret_addr2 <= RAS[sp-2]; 
            end
        end
    end
endmodule 