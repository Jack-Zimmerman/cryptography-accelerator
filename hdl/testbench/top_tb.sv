`timescale 1ns/10ps
`define SHA256_NO_NONCE  608'h00006020cb85ba559c6860e289bb5810b506baaebaa8b081e6090b000000000000000000d551340e54c3a6a3723ca22c135fbbf4bed2bab710275685d751af00335d7d856d616260
`define CLK_RATE 100_000
`define CLKS_PER_BIT 20

module top_tb();
    logic CLK_100MHZ; 
    logic UART_RXD = 1;
    logic UART_TXD = 0;


    logic [7:0] read_byte;
    logic [3:0] bits_read;

    top #(`CLK_RATE, `CLKS_PER_BIT) TOP (
        .CLK_100MHZ(CLK_100MHZ),
        .UART_RXD(UART_RXD),
        .UART_TXD(UART_TXD)
    );

    task pass_tick();
        CLK_100MHZ = 1;
        #(500_000_000 / `CLK_RATE);
        CLK_100MHZ = 0;
        #(500_000_000 / `CLK_RATE);
    endtask

    task pass_baud();
        for(int i = 0; i < `CLKS_PER_BIT; i++) begin
            pass_tick();
        end
    endtask

    task pass_second();
        //pass around a second worth of clock cycles
        for (int i = 0; i < `CLK_RATE; i++) begin
            pass_tick();
        end
    endtask


    
    initial begin
        //pass nonce
        for (int i = 0; i < 608/8; i++) begin
            //start bit
            UART_RXD = 1;
            pass_baud();
            UART_RXD = 0;
            pass_baud();

            for (int b = 0; b < 8; b++) begin
                UART_RXD = {`SHA256_NO_NONCE}[(i*8 + b)];
                pass_baud();
            end


            //stop bit
            UART_RXD = 1;
            pass_baud();
        end
        pass_baud();


        $display("passing loose second");

        pass_second();

        for (int i = 0; i < 4; i++) begin
            pass_baud(); //start bit

            for (int d = 0; d < 8; d++) begin
                read_byte[7] = UART_TXD;
                bits_read += 1;
                
                if (bits_read != 8) begin
                    read_byte = read_byte >> 1;
                end else begin
                    bits_read = 0;
                    $display("Recieved byte: %h", read_byte);
                end
            end

            pass_baud(); //stop bit
        end
    end

endmodule