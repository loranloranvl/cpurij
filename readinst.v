`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:43:54 05/11/2018 
// Design Name: 
// Module Name:    readinst 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module readinst(
	input rst,
	input clk,
	input [1:0] PC_s,
	input [31:0] R_Data_A,
	input [15:0] imm_data,
	input [25:0] address,
	output [31:0] Inst_code,
	output [31:0] PC_new
    );

	reg [31:0] PC;
	assign PC_new = PC + 4;

	initial PC = 32'h00000000;

	ROM_inst rominst (
		.clka(clk), // input clka
		.addra(PC[7:2]), // input [5 : 0] addra
		.douta(Inst_code) // output [31 : 0] douta
	);

	always @(posedge clk or posedge rst) begin
		if (rst) begin
			PC = 32'h00000000;
		end
		else begin
			case (PC_s)
				2'b00: PC = PC_new;
				2'b01: PC = R_Data_A;
				2'b10: PC = PC_new + (imm_data << 2);
				2'b11: PC = {{PC_new[31:28]}, {address}, {2'b00}};
			endcase
		end
	end


endmodule
