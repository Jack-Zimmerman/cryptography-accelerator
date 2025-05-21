`define SHA256_TEST		640'h00006020cb85ba559c6860e289bb5810b506baaebaa8b081e6090b000000000000000000d551340e54c3a6a3723ca22c135fbbf4bed2bab710275685d751af00335d7d856d6162606fdf0c1708ccb03b
`timescale 1ns/10ps

module doublesha_tb;

logic clk_i;
logic rst_i;
logic start_tick = 1'b1;
logic [639:0] block_info = `SHA256_TEST;
logic complete;
logic [255:0] hash;


always #5 clk_i = ~clk_i;

doublesha DUT (
    .clk_i(clk_i),
    .rst_i(rst_i),
    .start_tick(start_tick),
    .block_info(`SHA256_TEST),
    .complete(complete),
    .hash(hash)
);

initial begin
    $dumpfile("waveforms/test.vcd");
    $dumpvars(0);
end

always begin
    if(complete) begin
        $display("%h", hash);
        $finish;
    end
end 

endmodule