`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:24:01 06/01/2018
// Design Name:   Processor
// Module Name:   F:/school files/computerarchitecture/sbise/cpu_rij/cpu_tb2.v
// Project Name:  cpu_rij
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Processor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpu_tb2;

	// Inputs
	reg clk;
	reg clk_m;
	reg rst;

	// Outputs
	wire [31:0] ALU_F;
	wire [31:0] M_R_Data;
	wire OF;
	wire ZF;
	wire [31:0] inst;
	wire [31:0] PC;
	wire [31:0] PC_new;
	wire [5:0] OP;
	wire [4:0] rs;
	wire [4:0] rt;
	wire [4:0] rd;
	wire [5:0] func;
	wire [15:0] imm;
	wire [25:0] address;
	wire [1:0] w_r_s;
	wire imm_s;
	wire rt_imm_s;
	wire [1:0] wr_data_s;
	wire [2:0] ALU_OP;
	wire Write_Reg;
	wire Mem_Write;
	wire [1:0] PC_s;
	wire [15:0] imm_data;
	wire [4:0] R_Addr_A;
	wire [4:0] R_Addr_B;
	wire [4:0] W_Addr;
	wire [31:0] W_Data;
	wire [31:0] R_Data_A;
	wire [31:0] R_Data_B;
	wire [31:0] ALU_A;
	wire [31:0] ALU_B;
	wire [31:0] Mem_Addr;
	wire [31:0] M_W_Data;
	
	always #5 clk_m = ~clk_m;
	always #10 clk = ~clk;

	// Instantiate the Unit Under Test (UUT)
	Processor uut (
		.clk(clk), 
		.clk_m(clk_m), 
		.rst(rst), 
		.ALU_F(ALU_F), 
		.M_R_Data(M_R_Data), 
		.OF(OF), 
		.ZF(ZF), 
		.inst(inst), 
		.PC_new(PC_new), 
		.PC(PC),
		.OP(OP), 
		.rs(rs), 
		.rt(rt), 
		.rd(rd), 
		.func(func), 
		.imm(imm), 
		.address(address), 
		.w_r_s(w_r_s), 
		.imm_s(imm_s), 
		.rt_imm_s(rt_imm_s), 
		.wr_data_s(wr_data_s), 
		.ALU_OP(ALU_OP), 
		.Write_Reg(Write_Reg), 
		.Mem_Write(Mem_Write), 
		.PC_s(PC_s), 
		.imm_data(imm_data), 
		.R_Addr_A(R_Addr_A), 
		.R_Addr_B(R_Addr_B), 
		.W_Addr(W_Addr), 
		.W_Data(W_Data), 
		.R_Data_A(R_Data_A), 
		.R_Data_B(R_Data_B), 
		.ALU_A(ALU_A), 
		.ALU_B(ALU_B), 
		.Mem_Addr(Mem_Addr), 
		.M_W_Data(M_W_Data)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clk_m = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#400;
		
		$stop;
        
		// Add stimulus here

	end
      
endmodule

