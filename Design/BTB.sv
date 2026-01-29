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
    typedef struct packed {
        logic [TAG_SIZE  -1:0] tag;
        logic [XLEN-1:0] target_address;
        logic valid;
        logic is_ret;
        logic is_branch;
    } btb_organization;

    (* ram_style = "block" *) btb_organization BTB [0:(1<<BTB_ADDRESS)-1];  
    btb_organization btb_entry1, btb_entry2;
    logic tag_matched1, tag_matched2;
    //read signals
    logic [TAG_SIZE-1:0] btb_tag1, btb_tag2, reg_btb_tag1, reg_btb_tag2;
    logic [BTB_ADDRESS-1:0] btb_index1, btb_index2;
    //write signals
    logic [TAG_SIZE-1:0] ex_tag;
    logic [BTB_ADDRESS-1:0] ex_btb_index;

    assign btb_tag1 = pc1[XLEN-1:BTB_ADDRESS+2];
    assign btb_tag2 = pc2[XLEN-1:BTB_ADDRESS+2];
    assign btb_index1 = pc1[BTB_ADDRESS+1:2];
    assign btb_index2 = pc2[BTB_ADDRESS+1:2];

    assign ex_tag = ex_pc[XLEN-1:BTB_ADDRESS+2];
    assign ex_btb_index = ex_pc[BTB_ADDRESS+1:2];

    always_ff @(posedge CLK) begin
        if(update_btb) begin
            BTB[ex_btb_index].tag <=  ex_tag; 
            BTB[ex_btb_index].target_address <= actual_target_address;
            BTB[ex_btb_index].valid <= update_btb;
            BTB[ex_btb_index].is_ret <= ex_is_ret;
            BTB[ex_btb_index].is_branch <= ex_is_branch;
        end
        btb_entry1 <=  BTB[btb_index1];
        btb_entry2 <=  BTB[btb_index2];  
        reg_btb_tag1 <= btb_tag1;
        reg_btb_tag2 <= btb_tag2;  
    end
    always_comb begin
        tag_matched1 = btb_entry1.tag == reg_btb_tag1;
        tag_matched2 = btb_entry2.tag == reg_btb_tag2;      
 
        btb_hit1 = btb_entry1.valid && tag_matched1;
        btb_hit2 = btb_entry2.valid && tag_matched2;
        pred_target1 = btb_entry1.target_address;
        pred_target2 = btb_entry2.target_address;
        is_ret1 = tag_matched1 && btb_entry1.valid && btb_entry1.is_ret;
        is_ret2 = tag_matched2 && btb_entry2.valid && btb_entry2.is_ret;
        is_branch1 = tag_matched1 && btb_entry1.valid && btb_entry1.is_branch;
        is_branch2 = tag_matched2 && btb_entry2.valid && btb_entry2.is_branch;
    end
endmodule