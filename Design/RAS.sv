module RAS #(
    parameter RAS_ADDRESS = 3,
    parameter XLEN = 32,
    parameter RAS_LEN = (1<<RAS_ADDRESS)
) (
    input logic CLK, reset, update_ras, btb_is_ret1, btb_is_ret2,
    input logic [XLEN-1:0] actual_return_address, 
    output logic [XLEN-1:0] ret_addr,
    output logic [RAS_ADDRESS-1:0] sp_snap,
    output logic [2*XLEN-1:0] ras_snap
);
    (* ram_style = "distributed" *)  logic [XLEN-1:0] RAS [0:RAS_LEN-1]; 
    logic [RAS_ADDRESS-1:0] sp;
    logic full, empty, push, pop;

    assign full = (sp == RAS_LEN-1);
    assign empty = (sp == 'b0);
    assign push = update_ras && !full;
    assign pop = !empty && (btb_is_ret1 || btb_is_ret2);

    always_ff @(posedge CLK) begin 
        if (reset) begin
            sp <= 'b0; 
            ret_addr <= 'b0;
            sp_snap <= 'b0;
            ras_snap <= 'b0;
        end
        else begin
            sp_snap <= sp;
            ras_snap <= (sp > 2) ? {RAS[sp-2], RAS[sp-1]}: 'b0;
            sp <= sp + push - pop;

            if (push) begin
                RAS[sp] <= actual_return_address;
            end
            if (pop) begin
                ret_addr <= RAS[sp-1];  
            end
        end
    end
endmodule 