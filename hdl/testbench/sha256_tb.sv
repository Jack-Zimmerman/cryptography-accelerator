`define SHA256_TEST		640'h00006020cb85ba559c6860e289bb5810b506baaebaa8b081e6090b000000000000000000d551340e54c3a6a3723ca22c135fbbf4bed2bab710275685d751af00335d7d856d6162606fdf0c1708ccb03b
`define SHA256_TEST_PADDING	384'h800000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000280
`define SHA256_SECOND_PADDING  256'h8000000000000000000000000000000000000000000000000000000000000100
`timescale 1ns/10ps

module test_sha;

logic clk, rst, cmd_w_i;
logic [31:0] text_i;
logic [2:0] cmd_i;
logic [1023:0] message;
logic [255:0] res;
wire [31:0] text_o;
wire [3:0] cmd_o;


initial begin
    $dumpfile("waveforms/test1.vcd");
    $dumpvars(0);
	//clk = 1'b0;
	//rst = 1'b0;
	//cmd_w_i = 1'b0;
	//cmd_i = 3'b0;
	
	//#21;
	//rst = 1'b1;
	//#17;
	//rst = 1'b0;
    message = {`SHA256_TEST, `SHA256_TEST_PADDING};
	
	test_SHA256(message, 1'b1);
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);

    message =  {512'b0, res, `SHA256_SECOND_PADDING};
    //test_SHA256(message, 1'b0);
    
    $display("%h\n", res);
	
	$finish;
end

always #5 clk = ~clk;

sha256 sha_core(
	.clk_i(clk),
	.rst_i(rst),
	.text_i(text_i),
	.text_o(text_o),
	.cmd_i(cmd_i),
	.cmd_w_i(cmd_w_i),
	.cmd_o(cmd_o)
	);


task test_SHA256(input logic [1023:0] all_message, logic full_enable);
    begin
        integer i;
        reg [511:0] tmp_i;

        if (full_enable) begin //if we are hashing 1024 bits
            tmp_i = all_message[1023:512];
            $display("%h", tmp_i);
            

            
            cmd_i = 3'b010;
            cmd_w_i = 1'b1;
            @(posedge clk);
            
            for (i=0;i<16;i=i+1)
            begin
                @(posedge clk);
                cmd_w_i = 1'b0;
                text_i = tmp_i[16*32-1:15*32];
                tmp_i = tmp_i << 32;
            end

            
           // @(posedge clk);
            //@(posedge clk);
            //@(posedge clk);
            //@(posedge clk);
            //@(posedge clk);

            while (cmd_o[3])
                @(posedge clk);
            
            //@(posedge clk);
            //@(posedge clk);
            //@(posedge clk);
            //@(posedge clk);
            //@(posedge clk);
            
        
        end
        
        tmp_i = all_message[511:0];

        if (!full_enable) begin
            #100;
            
            //@(posedge clk);
            cmd_i = 3'b010;
            cmd_w_i = 1'b1;
        end else begin
            //@(posedge clk);
            cmd_i = 3'b110;
            cmd_w_i = 1'b1;
        end
        
        for (i=0; i<16; i=i+1)
        begin
            @(posedge clk);
            cmd_w_i = 1'b0;
            text_i = tmp_i[16*32-1:15*32];
            tmp_i = tmp_i << 32;
            $display("%h", text_i);
        end

        //@(posedge clk);
        //@(posedge clk);
        //@(posedge clk);
        //@(posedge clk);
        //@(posedge clk);

        while (cmd_o[3])
            @(posedge clk);
        
        //@(posedge clk);
        //@(posedge clk);
        //@(posedge clk);
        //@(posedge clk);
        //@(posedge clk);

        cmd_i = 3'b001;
        cmd_w_i = 1'b1;
        
        @(posedge clk);
        cmd_w_i = 1'b0;

        for (i=0;i<8;i=i+1)
        begin
            @(posedge clk);
            #1;
            res[31:0] = text_o;
            $display("%h", text_o);

            if (i != 7)
                res = res << 32;
        end	

  
        @(posedge clk);
        @(posedge clk);
        @(posedge clk);
        @(posedge clk);
        @(posedge clk);
        #100;
    end
endtask

endmodule