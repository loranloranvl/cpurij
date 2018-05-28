`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:26:13 05/27/2018
// Design Name:   Processor
// Module Name:   F:/school files/computerarchitecture/sbise/cpu_rij/cpu_tb.v
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

module cpu_tb;

	// Inputs
	reg clk;
	reg clk_m;
	reg rst;

	// Outputs
	wire [31:0] ALU_F;
	wire [31:0] M_R_Data;
	wire OF;
	wire ZF;

	// Instantiate the Unit Under Test (UUT)
	Processor uut (
		.clk(clk), 
		.clk_m(clk_m), 
		.rst(rst), 
		.ALU_F(ALU_F), 
		.M_R_Data(M_R_Data), 
		.OF(OF), 
		.ZF(ZF)
	);
	
	always #5 clk_m = ~clk_m;
	always #10 clk = ~clk;

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

