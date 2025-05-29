`timescale 1ns/10ps

module hashcore (
    input clk,
    input logic enable,
    input logic rst_i, 
    input logic [607:0] block_without_nonce,
    output logic [255:0] best_hash,
    output logic [31:0] best_hash_nonce
);

logic [31:0] nonces [0:9]; //nonces from all cores
logic [255:0] best_hash_reverse; //best hash in reverse (used for comparison)
logic [255:0] output_hashes [0:9]; //output hashes
logic [255:0] reverse_output_hashes [0:9]; //reversed hashes for comparison
logic completes [9:0]; //collection of states from all 10 cores
logic rst = 0;//local reset

//generate 8 hash cores
genvar i;
genvar a;
genvar b;

generate
    for (i = 0; i < 10; i = i+1) begin
        doublesha HASHCORE (
            .clk_i(clk),
            .rst_i(rst),
            .block_info({block_without_nonce, nonces[i]}),
            .complete(completes[i]),
            .hash(output_hashes[i])
        );
    end
endgenerate


//reverse bit order for hash comparison
generate
    for (a = 0; a < 10; a = a+1) begin
        for (b = 0 ; b <= 255; b = b + 1) begin
            assign reverse_output_hashes[a][255-b] = output_hashes[a][b];
        end
    end
endgenerate

//set initial nonce value
//set initial target hash value
initial begin
    best_hash_reverse = 256'hFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF;
    for (int j = 0; j < 10; j++) begin
        nonces[j] = j;
    end
end




always @(posedge clk) begin
    if (!enable) begin
        //don't do anything
    end else if (rst_i) begin
        best_hash_reverse = {256{1'b1}};
        best_hash = {256{1'b1}};
        best_hash_nonce = 0;

        //reset nonces
        for (int i = 0; i < 10; i++) begin
            nonces[i] = i;
        end
        //now we're hashing 
    end else if (rst) begin //internal reset, pass one cycle to let subcores know
        rst = 0;
    end else if (completes[0]) begin 
        //should all finish at the same time, so now we're done
        //send all high-value hashes to memory
        for (int i = 0; i < 10; i++) begin
            if (reverse_output_hashes[i] < best_hash_reverse) begin
                $display("%h %h", output_hashes[i], reverse_output_hashes[i]);
                best_hash = output_hashes[i];
                best_hash_reverse = reverse_output_hashes[i];
                best_hash_nonce = nonces[i];
            end
        end

        //update nonces
        for (int k = 0; k < 10; k++) begin
            nonces[k] = nonces[k] + 10; //next cycle
        end

        //set reset high and start again
        rst = 1;
    end
end

endmodule