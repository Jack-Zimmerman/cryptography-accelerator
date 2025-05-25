module fsm(
    input logic clk,
    input logic finished_recieving, //if we are recieving bits from the computer
    input logic finished_sending, 
    input logic second_tick,
    input logic rst_i,
    output logic hash_enable, //if we are hashing
    output logic write_enable //if we are writing
);

typedef enum logic [2:0] {RECIEVING, HASHING, SENDING} State;
State state;

//always in RECIEVING mode unless otherwise, idle or reading same thing
//once read is finished, in HASHING mode
//after a second has passed, send into SENDING mode

initial begin
    state = RECIEVING;
end



always @(posedge clk) begin
    case (state) 
        RECIEVING: begin
            if (finished_recieving) begin
                state = HASHING;
            end 
        end
        HASHING: begin
            if (second_tick) begin
                state = SENDING;
            end
        end
        SENDING: begin
            if (finished_sending) begin
                //end writing
                state = RECIEVING;
            end 
        end
        default: begin
            state = RECIEVING;
        end
    endcase
end

assign hash_enable = (state == HASHING);
assign write_enable = (state == SENDING);

endmodule