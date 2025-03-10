module bg_object
  #(    parameter CONV = 0)
(
    input wire clk,
    input wire rst_n,
    input  wire game_tick,      // 20 Hz
    input wire [7:0] rng,
    output reg [9:CONV] bg_object_pos
);
    always @(posedge clk) begin
        if (!rst_n) begin
            bg_object_pos <= 0;
        end else begin
            if (game_tick) begin
                if (bg_object_pos != 0) bg_object_pos <= bg_object_pos - 1;
                if (bg_object_pos == 0) begin
                    bg_object_pos <= {{(5-CONV){1'b1}}, rng[6:2]};
                end
            end
        end
    end
endmodule