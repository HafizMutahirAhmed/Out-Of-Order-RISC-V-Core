module PHT #(
  parameter PHT_ADDRESS  = 9,
  parameter COUNTER_SIZE = 2
)(
    input logic CLK, reset, actual_taken, update_pht,
    input logic [PHT_ADDRESS-1:0] pht_index1, pht_index2, rb_pht_index, 
    output logic pred_taken1, pred_taken2
);
    (* ram_style = "block" *) logic [COUNTER_SIZE-1:0] PHT [0:(1<<PHT_ADDRESS)-1];

    function automatic logic [COUNTER_SIZE-1:0] saturating_counter(
        input logic taken, 
        input logic [COUNTER_SIZE-1:0] current_state
    );
        logic [COUNTER_SIZE-1:0] new_state;
        if (taken) begin
            case({current_state})    
                2'b00: new_state = 01;
                2'b01: new_state = 10;
                2'b10: new_state = 11;
                2'b11: new_state = 11;
            endcase 
        end
        else begin 
            case({current_state}) 
                2'b00: new_state = 00;
                2'b01: new_state = 00;
                2'b10: new_state = 01;
                2'b11: new_state = 10;
            endcase           
        end
        return new_state;
    endfunction

    always_ff @(posedge CLK) begin
        if (update_pht) begin
            PHT[rb_pht_index] <= saturating_counter(.current_state(PHT[rb_pht_index]), .taken(actual_taken));
        end
        pred_taken1 <= PHT[pht_index1][1];
        pred_taken2 <= PHT[pht_index2][1];
    end

endmodule