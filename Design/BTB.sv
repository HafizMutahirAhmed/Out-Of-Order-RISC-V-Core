//direct-mapped BTB
module BTB #(
    parameter BTB_ADDRESS = 6,
    parameter XLEN = 32,
    parameter TAG_SIZE = XLEN-BTB_ADDRESS-2
) (
    input logic CLK, reset, update_btb, ex_is_ret, ex_is_branch,
    input logic [XLEN-1:0] pc1, pc2, ex_pc,
    input logic [XLEN-1:0] actual_target_address,
    output logic btb_hit1, btb_hit2, is_ret1, is_ret2, is_branch1, is_branch2,
    output logic [XLEN-1:0] pred_target1, pred_target2
);  
    
    //read signals
    logic [TAG_SIZE-1:0] btb_tag1, btb_tag2;
    logic [BTB_ADDRESS-1:0] btb_index1, btb_index2;
    assign btb_tag1 = pc1[XLEN-1:BTB_ADDRESS+2];
    assign btb_tag2 = pc2[XLEN-1:BTB_ADDRESS+2];
    assign btb_index1 = pc1[BTB_ADDRESS+1:2];
    assign btb_index2 = pc2[BTB_ADDRESS+1:2];
    //write signals
    logic [TAG_SIZE-1:0] ex_tag;
    logic [BTB_ADDRESS-1:0] ex_btb_index;
    assign ex_tag = ex_pc[XLEN-1:BTB_ADDRESS+2];
    assign ex_btb_index = ex_pc[BTB_ADDRESS+1:2];

    typedef struct packed {
        logic [TAG_SIZE-1:0] tag;
        logic [XLEN-1:0] target_address;
        logic valid;
        logic is_ret;
        logic is_branch;
    } btb_organization;

    (* ram_style = "block" *) btb_organization BTB [0:(1<<BTB_ADDRESS)-1];

    assign tag_matched1 = BTB[btb_index1].tag == btb_tag1;
    assign tag_matched2 = BTB[btb_index2].tag == btb_tag2;

    always_ff @(posedge CLK) begin
        if (reset) begin
            for (int i = 0; i < (1<<BTB_ADDRESS); i++) begin
                BTB[i].valid <= 1'b0;
            end
        end
        else if(update_btb) begin
            BTB[ex_btb_index].tag <=  ex_tag; 
            BTB[ex_btb_index].target_address <= actual_target_address;
            BTB[ex_btb_index].valid <= 1'b1;
            BTB[ex_btb_index].is_ret <= ex_is_ret;
            BTB[ex_btb_index].is_branch <= ex_is_branch;
        end
        btb_hit1 <= BTB[btb_index1].valid && tag_matched1;
        btb_hit2 <= BTB[btb_index2].valid && tag_matched2;
        pred_target_address1 <= BTB[btb_index1];
        pred_target_address2 <= BTB[btb_index2];
        is_ret1 <= tag_matched1 && BTB[btb_index1].valid && BTB[btb_index1].is_ret;
        is_ret2 <= tag_matched2 && BTB[btb_index2].valid && BTB[btb_index2].is_ret;
        is_branch1 <= tag_matched1 && BTB[btb_index1].valid && BTB[btb_index1].is_branch;
        is_branch2 <= tag_matched2 && BTB[btb_index2].valid && BTB[btb_index2].is_branch;
    end
endmodule