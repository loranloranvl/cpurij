`ifndef _alu_v_
`define _alu_v_

module Alu(ALU_OP, A, B, F, ZF, OF);
	input [2:0] ALU_OP;
	input [31:0] A, B;
	output reg [31:0] F;
	output ZF, OF;

	reg carry;

	parameter ONE32 = 32'h00000001;
	parameter ZERO32 = 32'h00000000;

	always @(*) begin
		if (ALU_OP == 3'b000)
			F = A & B;
		else if (ALU_OP == 3'b001)
			F = A | B;
		else if (ALU_OP == 3'b010)
			F = A ^ B;
		else if (ALU_OP == 3'b011)
			F = ~(A | B);
		else if (ALU_OP == 3'b100)
			{carry, F} = A + B;
		else if (ALU_OP == 3'b101)
			{carry, F} = A - B;
		else if (ALU_OP == 3'b110)
			F = (A < B ? ONE32 : ZERO32);
		else if (ALU_OP == 3'b111)
			F = (B << A);
		$display("At time %t, do %b, with %h and %h, output %h", $time, ALU_OP, A, B, F);
	end

	assign ZF = (F == ZERO32) ? 1 : 0;
	assign OF = (ALU_OP == 3'b100 || ALU_OP == 3'b101)
		&& (A[31] ^ B[31] ^ F[31] ^ carry);

endmodule

`endif
