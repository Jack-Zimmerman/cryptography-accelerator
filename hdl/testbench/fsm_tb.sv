module states_tb;

logic finished_sending = 0;
logic finished_recieving = 0;
logic clk;
logic rst_i = 0;
logic second_tick;
logic hash_enable;
logic write_enable;

fsm DUT (
    .clk(clk),
    .finished_recieving(finished_recieving),
    .finished_sending(finished_sending),
    .second_tick(second_tick),
    .rst_i(rst_i),
    .hash_enable(hash_enable),
    .write_enable(write_enable)
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
    $display("Initial state");
    pass_tick();
    $display("hash_enable %b | write_enable: %b\n", hash_enable, write_enable);
    $display("Testing read termination: ");
    finished_recieving = 1;
    pass_tick();
    finished_recieving = 0;
    $display("hash_enable %b | write_enable: %b\n", hash_enable, write_enable);

    $display("Testing hash termination: ");
    second_tick = 1;
    pass_tick();
    second_tick = 0;
    $display("hash_enable: %b write_enable: %b\n", hash_enable, write_enable);
    

    $display("Testing write termination: ");
    finished_sending = 1;
    pass_tick();
    finished_sending = 0;
    $display("hash_enable: %b write_enable: %b\n", hash_enable, write_enable);

    $display("Testing reset: ");
    reset();
    $display("hash_enable: %b write_enable: %b\n", hash_enable, write_enable);
end

endmodule