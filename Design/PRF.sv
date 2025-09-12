module PRF(input logic [31:0] DataIN, Address,
            input logic CLK, Reset, 
            input logic Valid,
            output logic [31:0] DataOUT);

   typedef struct packed {
      logic Valid;
      logic [31:0] Data;
   } PRF_Columns;

   PRF_Columns RegisterFile [255:0];

   //assigning data and values to PRF
   always_ff (@posedge CLK) begin
         if (Reset) begin
            for (int i = 0; i < 32; i++) begin
               Register[i] <= 33'h100000000;
            end
         end
         Registers[Address][31:0] <= Data;
         Registers[Address][32] <= Valid;
   end
    //reading from PRF
   always_ff (@posedge CLK) begin
         DataOUT <= Registers[Address][31:0];
   end
endmodule