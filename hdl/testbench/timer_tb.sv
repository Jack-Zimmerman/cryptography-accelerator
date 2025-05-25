
module timer_tb;

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

logic enable = 1;
logic clk;
logic rst_i;
logic second_tick;

timer #(10000) DUT (
    .clk(clk),
    .enable(enable),
    .rst_i(rst_i),
    .second_tick(second_tick)
);

initial begin
    $display("Starting timer");
    reset();
    $display("Passing 1 second");
    for (int i = 0; i < 10_000; i++) begin
        pass_tick();
    end

    $display("Second tick: %b\n", second_tick);

    $display("Trying reset\n");
    reset();
    $display("Passing 1 second");
    for (int i = 0; i < 10_000; i++) begin
        pass_tick();
    end

    $display("Second tick: %b\n", second_tick);



end
endmodule