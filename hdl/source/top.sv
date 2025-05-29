`timescale 1ns/10ps
`define CLK_RATE 100_000
`define CLKS_PER_BIT 200

module top 
(
    input logic CLK_100MHZ,
    input logic UART_TXD,
    output logic UART_RXD,
    output logic [15:0] LED
);


//GLOBAL VARIABLES
logic rst_i; //global reset

//UART VARIABLES
logic finished_recieving; //status bit from UART rx
logic finished_sending; //status bit from UART tx
logic finished_read_byte; //byte completion for rx
logic finished_write_byte; //byte completion for tx
logic write_enable; //enable for UART tx
logic read_enable; //enable for UART rx
logic [7:0] read_bytes_passed; //we need to tally 608/8 = 76 bytes to read block info
logic [7:0] write_bytes_passed; //we need to tally 32/8 = 4 bytes to transmit nonce
logic [4:0] repeat_bytes_sent = 0; //repeat
logic [7:0] tx_byte; //feed buffer for tx
logic [7:0] rx_byte; //reciever buffer from rx
logic sending; //sending status bit

//TIMER VARIABLES
logic second_tick; //goes high when second has passed


//MINING VARIABLES
logic hash_enable; //enable for hashing 
logic [607:0] block_info; //everything needed for hashing besides nonce
logic [255:0] best_hash; //lowest hash achieved
logic [255:0] copy_hash;
logic [31:0] best_hash_nonce; //nonce corrosponding with best_hash
logic [31:0] best_hash_nonce_copy; //copy of nonce




timer #(`CLK_RATE) TIMER (
    .clk(CLK_100MHZ),
    .enable(hash_enable),
    .rst_i(rst_i),
    .second_tick(second_tick)
);

fsm FSM (
    .clk(CLK_100MHZ),
    .finished_recieving(finished_recieving),
    .finished_sending(finished_sending),
    .second_tick(second_tick),
    .rst_i(rst_i),
    .hash_enable(hash_enable),
    .write_enable(write_enable),
    .read_enable(read_enable)
);


hashcore HASHCORE (
    .clk(CLK_100MHZ),
    .enable(hash_enable),
    .rst_i(rst_i),
    .block_without_nonce(block_info),
    .best_hash(best_hash),
    .best_hash_nonce(best_hash_nonce)
);

uart_rx #(`CLKS_PER_BIT) UART_RX(
    .i_Clock(CLK_100MHZ),
    .i_Rx_Serial(UART_TXD),
    .o_Rx_DV(finished_read_byte),
    .o_Rx_Byte(rx_byte)
);

uart_tx #(`CLKS_PER_BIT) UART_TX (
    .i_Clock(CLK_100MHZ),
    .i_Tx_DV(write_enable),
    .i_Tx_Byte(tx_byte),
    .o_Tx_Active(sending),
    .o_Tx_Serial(UART_RXD),
    .o_Tx_Done(finished_write_byte)
);





always @(posedge CLK_100MHZ) begin
    finished_sending = 0;
    //take in bytes from computer, if not wait
    if (read_enable) begin
        if (read_bytes_passed == 8'd76) begin
            finished_recieving = 1;
            $display("Block info: %h", block_info);
            read_bytes_passed = 0;
        end 
        else if (finished_read_byte) begin
            read_bytes_passed += 1;
            //load read byte into block

            //little endian
            block_info[607:600] = rx_byte;

            //only if we are not on the last byte, shift one byte
            if (read_bytes_passed != 8'd76) begin
                block_info = block_info >> 8; 
            end
        end
    end

    if (write_enable) begin
        finished_recieving = 0;


        if (sending) begin
            //do nothing
        end
        else if (write_bytes_passed != 8'd32) begin //write next byte
            //first, if we are on zero bytes passed, create copy best hash
            tx_byte = best_hash[write_bytes_passed*8+:8];
            
            if (repeat_bytes_sent == 3) begin
                repeat_bytes_sent = 0; 
                write_bytes_passed += 1;
            end else begin
                repeat_bytes_sent += 1; 
            end
        end 
        else begin // when we are done sending all the bytes
            write_bytes_passed = 0;
            copy_hash = 256'b0;
            finished_sending = 1;
        end
    end    
end

assign LED[15:8] = read_bytes_passed;
assign LED[0] = read_enable;
assign LED[1] = write_enable;

endmodule