module top_tb();
    logic CLK_100MHZ; 
    logic UART_RX = 1;
    logic UART_TX = 0;


    top TOP (
        .CLK_100MHZ(CLK_100MHZ),
        .UART_RX(UART_RX),
        .UART_TX(UART_TX)
    );

    task pass_tick();
        CLK_100MHZ = 1;
        #5;
        CLK_100MHZ = 0;
        #5;
    endtask


endmodule