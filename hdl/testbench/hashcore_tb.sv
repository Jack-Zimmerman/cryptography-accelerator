`timescale 1ns/10ps
`define SHA256_NO_NONCE		608'h00006020cb85ba559c6860e289bb5810b506baaebaa8b081e6090b000000000000000000d551340e54c3a6a3723ca22c135fbbf4bed2bab710275685d751af00335d7d856d616260

module hashcore_tb ();

logic clk;
logic start;
logic [255:0] best_hash;
logic [31:0] best_hash_nonce;
logic enable;
logic rst_i = 0;


hashcore DUT (
    .clk(clk),
    .enable(enable),
    .rst_i(rst_i),
    .block_without_nonce(`SHA256_NO_NONCE),
    .best_hash(best_hash),
    .best_hash_nonce(best_hash_nonce)
);


task pass_tick();
    clk = 1;
    #5;
    clk = 0;
    #5;
endtask

task reset();
    rst_i = 1;
    pass_tick();
    rst_i = 0;
endtask


initial begin
    enable = 1; //set enable high

    for (int i = 0; i < 1000000; i++) begin
        pass_tick();
    end

    //display best hash at that moment  
    $display("Best hash after 10000 cycles: %h", best_hash);

    //test reset
    $display("Resetting!!");
    reset();

    for (int i = 0; i < 1000000; i++) begin
        pass_tick();
    end

    //display best hash at that moment  
    $display("Best hash after 10000 cycles: %h", best_hash);


end





endmodule