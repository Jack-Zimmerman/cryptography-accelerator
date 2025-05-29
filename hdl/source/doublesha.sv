`define SHA256_TEST_PADDING	384'h800000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000280
`define SHA256_SECOND_PADDING  256'h8000000000000000000000000000000000000000000000000000000000000100
`timescale 1ns/10ps

module doublesha(
    input logic clk_i, //clk in
    input logic rst_i, //reset in
    input logic [639:0] block_info,
    output logic complete,
    output logic [255:0] hash
);

logic [31:0] text_i;
logic [511:0] tmp_i;
logic [31:0] tmp; 
logic [255:0] first_hash; 
logic [2:0] cmd_i = 3'b010;
logic cmd_w_i = 1;
logic [4:0] hash_index = 5'b0; 
wire [31:0] text_o;
wire [3:0] cmd_o;


logic second_cycle = 0;

//delay variables
logic [3:0] delay_left = 0;

logic [3:0] output_index = 4'b0;
logic [4:0] internal_index = 5'b0;

//msb represents which hash we are on, lsb represents first or second pass-thru (512 vs 1024 bit)
logic [3:0] state = 0; //set to 1 is on second hash, otherwise set to first hash 


sha256 sha_core(
	.clk_i(clk_i),
	.rst_i(rst_i),
	.text_i(text_i),
	.text_o(text_o),
	.cmd_i(cmd_i),
	.cmd_w_i(cmd_w_i),
	.cmd_o(cmd_o)
);


//steps
//step 0: setup first hash data
//step 1: fee through first hash
//step 2: setup second hash data
//step 4: second half of the first hash
//step 5: digesting first hash
//step 6: creating second hash
//step 7: digesting second hash

always @(posedge clk_i) begin
    if (rst_i) begin
        delay_left = 0;
        first_hash = 0;
        second_cycle = 0;
        hash_index = 0;
        tmp_i = 0;
        complete = 0;
        state = 0;
    end
    else if (delay_left != 0) begin
        //don't do anything this cycle and delay 
        delay_left -= 1;
    end
    else if (cmd_o[3] && (state == 2 || state == 4)) begin 
        //if we have to wait on the hash core
        //$display("Internal hashing delay! %d %d", state, internal_index);
    end
    else begin
        if (state == 0) begin 
            cmd_i = 3'b010;
            cmd_w_i = 1'b1;
            tmp_i = {block_info, `SHA256_TEST_PADDING}[1023:512];
            //delay_left = 1; // one tick delay
            state = 1;
        end else if (state == 1) begin
            //we must loop
            cmd_w_i = 1'b0;
            text_i = tmp_i[511:480];
            tmp_i = tmp_i << 32;
            internal_index += 1;

            //once we ran 16 times
            if (internal_index == 5'd16) begin
                internal_index = 5'd0;
                state = 2;
            end
        end
        else if (state == 2) begin
            cmd_w_i = 1'b1;
            if (!second_cycle) begin
                tmp_i = {block_info, `SHA256_TEST_PADDING}[511:0];
                cmd_i = 3'b110;
            end else begin
                tmp_i = {first_hash, `SHA256_SECOND_PADDING}[511:0];
                cmd_i = 3'b010;
            end
            state = 3;
        end
        else if (state == 3) begin
            cmd_w_i = 0;
            text_i = tmp_i[511:480];
            tmp_i = tmp_i << 32;
            internal_index += 1;
            //$display("%h", text_i);

            if (internal_index == 5'd16) begin
                internal_index = 0;
                state = 4;
            end
        end
        else if (state == 4) begin
            cmd_i = 3'b001;
            cmd_w_i = 1'b1;
            state = 5;
        end
        else if (state == 5) begin
            cmd_w_i = 0;
            state = 6;
            delay_left = 1;
        end
        else if (state == 6) begin
            first_hash[31:0] = text_o;
            internal_index += 1;

            if (internal_index == 5'd8) begin
                internal_index = 0;
                state = 7;
                if (!second_cycle) begin
                    state = 2;
                    second_cycle = 1;
                end else begin
                    complete = 1;
                    hash = first_hash;
                end
            end else begin
                first_hash = first_hash << 32;
            end
        end
    end
end

endmodule
