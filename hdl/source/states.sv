module state_machine(
    input logic clk,
    input logic finished_recieving, //if we are recieving bits from the computer
    input logic finished_sending, 
    input logic second_tick,
    input logic rst_i,
    output logic hash_enable, //if we are hashing
    output logic write_enable //if we are writing
);

typedef enum logic [1:0] {RECIEVING, HASHING, SENDING} State;
State current_state, next_state;

//always in RECIEVING mode unless otherwise, idle or reading same thing
//once read is finished, in HASHING mode
//after a second has passed, send into SENDING mode


always_ff @(posedge clk, posedge rst_i) begin
    if (rst_i) begin
        current_state <= RECIEVING;
    end else begin
        current_state <= next_state;
    end
end

always_comb begin
    case (current_state) 
        RECIEVING: begin
            if (finished_recieving) begin
                next_state = HASHING;
            end else begin
                next_state = RECIEVING;
            end
        end
        HASHING: begin
            if (second_tick) begin
                next_state = SENDING;
                write_enable = 1;
                hash_enable = 0;
            end else begin
                hash_enable = 1;
            end
        end
        SENDING: begin
            if (finished_sending) begin
                //end writing
                write_enable = 0;
                next_state = RECIEVING;
            end else begin
                next_state = SENDING;
            end
        end
    endcase
end

endmodule