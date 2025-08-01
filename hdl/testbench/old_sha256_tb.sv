/////////////////////////////////////////////////////////////////////
////                                                             ////
////  SHA-256                                                    ////
////  Secure Hash Algorithm (SHA-256)   testbench                ////
////                                                             ////
////  Author: marsgod                                            ////
////          marsgod@opencores.org                              ////
////                                                             ////
////                                                             ////
////  Downloaded from: http://www.opencores.org/cores/sha_core/  ////
////                                                             ////
/////////////////////////////////////////////////////////////////////
////                                                             ////
//// Copyright (C) 2002-2004 marsgod                             ////
////                         marsgod@opencores.org               ////
////                                                             ////
////                                                             ////
//// This source file may be used and distributed without        ////
//// restriction provided that this copyright statement is not   ////
//// removed from the file and that any derivative work contains ////
//// the original copyright notice and the associated disclaimer.////
////                                                             ////
////     THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY     ////
//// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED   ////
//// TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS   ////
//// FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL THE AUTHOR      ////
//// OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,         ////
//// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES    ////
//// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE   ////
//// GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR        ////
//// BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF  ////
//// LIABILITY, WHETHER IN  CONTRACT, STRICT LIABILITY, OR TORT  ////
//// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  ////
//// OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE         ////
//// POSSIBILITY OF SUCH DAMAGE.                                 ////
////                                                             ////
/////////////////////////////////////////////////////////////////////


`timescale 1ns/10ps

`define SHA256_TEST		640'h00006020cb85ba559c6860e289bb5810b506baaebaa8b081e6090b000000000000000000d551340e54c3a6a3723ca22c135fbbf4bed2bab710275685d751af00335d7d856d6162606fdf0c1708ccb03b
`define SHA256_TEST_PADDING	384'h800000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000280
`define SHA256_TEST_RESULT	256'h248d6a61_d20638b8_e5c02693_0c3e6039_a33ce459_64ff2167_f6ecedd4_19db06c1

module test_sha;

reg clk,rst,cmd_w_i;
reg [31:0] text_i;

reg [2:0] cmd_i;

wire [31:0] text_o;
wire [3:0] cmd_o;

initial
begin
//	$sdf_annotate("syn/data/sha256.sdf",sha_core);

	clk = 1'b0;
	rst = 1'b0;
	cmd_w_i = 1'b0;
	cmd_i = 3'b0;
	
	#21;
	rst = 1'b1;
	#17;
	rst = 1'b0;
	
	test_SHA256;
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);
	
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


task test_SHA256;
integer i;
reg [1023:0] all_message;
reg [511:0] tmp_i;
reg [255:0] tmp_o;
reg [31:0] tmp;
begin
	all_message = {`SHA256_TEST, `SHA256_TEST_PADDING};
    $display("%b\n", all_message);
	tmp_i = all_message[1023:512];
	tmp_o = `SHA256_TEST_RESULT;
	
	#100;
	
	
	@(posedge clk);
	cmd_i = 3'b010;
	cmd_w_i = 1'b1;
	
	for (i=0;i<16;i=i+1)
	begin
		@(posedge clk);
		cmd_w_i = 1'b0;
		text_i = tmp_i[16*32-1:15*32];
		tmp_i = tmp_i << 32;
	end

	
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);

	while (cmd_o[3])
		@(posedge clk);
	
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);
	
	#100;
	
	
	tmp_i = all_message[511:0];
	@(posedge clk);
	cmd_i = 3'b110;
	cmd_w_i = 1'b1;
	
	for (i=0;i<16;i=i+1)
	begin
		@(posedge clk);
		cmd_w_i = 1'b0;
		text_i = tmp_i[16*32-1:15*32];
		tmp_i = tmp_i << 32;
	end

	@(posedge clk);
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);

	while (cmd_o[3])
		@(posedge clk);
	
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);
	@(posedge clk);

	cmd_i = 3'b001;
	cmd_w_i = 1'b1;
	
	@(posedge clk);
	cmd_w_i = 1'b0;
	for (i=0;i<8;i=i+1)
	begin
		@(posedge clk);
		#1;
		tmp = tmp_o[8*32-1:7*32];
        $write("%h", text_o);
		tmp_o = tmp_o << 32;
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