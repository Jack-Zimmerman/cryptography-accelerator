module states_tb;

logic finished_sending;
logic finished_recieving;
logic clk;
logic rst_i;
logic second_tick;
logic hash_enable;
logic write_enable;

state_machine DUT (
    .clk(clk),
    .finished_recieving(finished_recieving),
    .finished_sending(finished_sending),
    .second_tick(second_tick),
    .rst_i(rst_i),
    .hash_enable(hash_enable),
    .write_enable(write_enable)
)
endmodule