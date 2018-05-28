module Controller(
	input [5:0] OP,
	input [5:0] func,
	input ZF,
	output reg [1:0] w_r_s,
	output reg imm_s,
	output reg rt_imm_s,
	output reg [1:0] wr_data_s,
	output reg [2:0] ALU_OP,
	output reg Write_Reg,
	output reg Mem_Write,
	output reg [1:0] PC_s
);
	// OP
	localparam R_DEFAULT = 6'b000000;
	localparam ADDI = 6'b001000;
	localparam ANDI = 6'b001100;
	localparam XORI = 6'b001110;
	localparam SLTIU = 6'b001011;
	localparam LW = 6'b100011;
	localparam SW = 6'b101011;
	localparam BEQ = 6'b000100;
	localparam BNE = 6'b000101;
	localparam J = 6'b000010;
	localparam JAL = 6'b000011;

	// func
	localparam ADD = 6'b100000;
	localparam SUB = 6'b100010;
	localparam AND = 6'b100100;
	localparam OR = 6'b100101;
	localparam XOR = 6'b100110;
	localparam NOR = 6'b100111;
	localparam SLTU = 6'b101011;
	localparam SLLV = 6'b000100;
	localparam JR = 6'b001000;
	
	always @(*) begin
		case (OP)
			R_DEFAULT: begin
				if (func == JR) begin
					w_r_s = 2'bxx;
					imm_s = 1'bx;
					rt_imm_s = 1'bx;
					wr_data_s = 2'bxx;
					ALU_OP = 3'b100;
					Write_Reg = 1'b0;
					Mem_Write = 1'b0;
					PC_s = 2'b01;
				end else begin
					w_r_s = 2'b00;
					imm_s = 1'bx;
					rt_imm_s = 1'b0;
					wr_data_s = 2'b00;
					case (func)
						ADD: ALU_OP = 3'b100;
						SUB: ALU_OP = 3'b101;
						AND: ALU_OP = 3'b000;
						OR: ALU_OP = 3'b001;
						XOR: ALU_OP = 3'b010;
						NOR: ALU_OP = 3'b011;
						SLTU: ALU_OP = 3'b110;
						SLLV: ALU_OP = 3'b111;
					endcase
					Write_Reg = 1'b1;
					Mem_Write = 1'b0;
					PC_s = 2'b00;
				end
			end
			ADDI: begin
				w_r_s = 2'b01;
				imm_s = 1'b1;
				rt_imm_s = 1'b1;
				wr_data_s = 2'b00;
				ALU_OP = 3'b100;
				Write_Reg = 1'b1;
				Mem_Write = 1'b0;
				PC_s = 2'b00;
			end
			ANDI: begin
				w_r_s = 2'b01;
				imm_s = 1'b0;
				rt_imm_s = 1'b1;
				wr_data_s = 2'b00;
				ALU_OP = 3'b000;
				Write_Reg = 1'b1;
				Mem_Write = 1'b0;
				PC_s = 2'b00;
			end
			XORI: begin
				w_r_s = 2'b01;
				imm_s = 1'b0;
				rt_imm_s = 1'b1;
				wr_data_s = 2'b00;
				ALU_OP = 3'b010;
				Write_Reg = 1'b1;
				Mem_Write = 1'b0;
				PC_s = 2'b00;
			end
			SLTIU: begin
				w_r_s = 2'b01;
				imm_s = 1'b0;
				rt_imm_s = 1'b1;
				wr_data_s = 2'b00;
				ALU_OP = 3'b110;
				Write_Reg = 1'b1;
				Mem_Write = 1'b0;
				PC_s = 2'b00;
			end
			LW: begin
				w_r_s = 2'b01;
				imm_s = 1'b1;
				rt_imm_s = 1'b1;
				wr_data_s = 2'b01;
				ALU_OP = 3'b100;
				Write_Reg = 1'b1;
				Mem_Write = 1'b0;
				PC_s = 2'b00;
			end
			SW: begin
				w_r_s = 2'bxx;
				imm_s = 1'b1;
				rt_imm_s = 1'b1;
				wr_data_s = 2'bxx;
				ALU_OP = 3'b100;
				Write_Reg = 1'b0;
				Mem_Write = 1'b1;
				PC_s = 2'b00;
			end
			BEQ: begin
				w_r_s = 2'bxx;
				imm_s = 1'bx;
				rt_imm_s = 1'b0;
				wr_data_s = 2'bxx;
				ALU_OP = 3'b101;
				Write_Reg = 1'b0;
				Mem_Write = 1'b0;
				PC_s = (ZF) ? 2'b10 : 2'b00;
			end
			BNE: begin
				w_r_s = 2'bxx;
				imm_s = 1'bx;
				rt_imm_s = 1'b0;
				wr_data_s = 2'bxx;
				ALU_OP = 3'b101;
				Write_Reg = 1'b0;
				Mem_Write = 1'b0;
				PC_s = (ZF) ? 2'b00 : 2'b10;
			end
			J: begin
				w_r_s = 2'bxx;
				imm_s = 1'bx;
				rt_imm_s = 1'bx;
				wr_data_s = 2'bxx;
				ALU_OP = 3'bxxx;
				Write_Reg = 1'b0;
				Mem_Write = 1'b0;
				PC_s = 2'b11;
			end
			JAL: begin
				w_r_s = 2'b1x;
				imm_s = 1'bx;
				rt_imm_s = 1'bx;
				wr_data_s = 2'b1x;
				ALU_OP = 3'bxxx;
				Write_Reg = 1'b1;
				Mem_Write = 1'b0;
				PC_s = 2'b11;
			end
		endcase
	end

endmodule