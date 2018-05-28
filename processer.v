module Processor(
	input clk,
	input clk_m,
	input rst,
	output [31:0] ALU_F,
	output [31:0] M_R_Data,
	output OF,
	output ZF
);
	/*
		OP 31:26
		rs 25:21
		rt 20:16
		rd 15:11
		shamt 10:6
		func 5:0

		offset 15:0

		address 25:0
	*/

	// instruction read and divide
	wire [31:0] inst;
	wire [31:0] PC_new;

	wire [5:0] OP = inst[31:26];
	wire [4:0] rs = inst[25:21];
	wire [4:0] rt = inst[20:16];
	wire [4:0] rd = inst[15:11];
	wire [5:0] func = inst[5:0];
	wire [15:0] imm = inst[15:0];
	wire [25:0] address = inst[25:0];

	// selectors
	wire [1:0] w_r_s;
	wire imm_s;
	wire rt_imm_s;
	wire [1:0] wr_data_s;

	// option and flags
	wire [2:0] ALU_OP; // for alu
	wire Write_Reg; // for register
	wire Mem_Write; // for memory
	wire [1:0] PC_s; // for PC

	// expansion
	wire [15:0] imm_data = (imm_s) ? {{16{imm[15]}}, {imm}} : {{16{1'b0}}, {imm}};

	// register stack
	wire [4:0] R_Addr_A = rs;
	wire [4:0] R_Addr_B = rt;
	wire [4:0] W_Addr = (w_r_s[1]) ? 5'b11111 : ((w_r_s[0]) ? rt : rd);
	wire [31:0] W_Data = (wr_data_s[1]) ? PC_new : ((wr_data_s[0]) ? M_R_Data : ALU_F);
	wire [31:0] R_Data_A;
	wire [31:0] R_Data_B;

	// alu
	wire [31:0] ALU_A = R_Data_A;
	wire [31:0] ALU_B = (rt_imm_s) ? imm_data : R_Data_B;

	// memory
	wire [31:0] Mem_Addr = ALU_F;
	wire [31:0] M_W_Data = R_Data_B;

	Controller c_i(
		.OP(OP),
		.func(func),
		.ZF(ZF),
		.w_r_s(w_r_s),
		.imm_s(imm_s),
		.rt_imm_s(rt_imm_s),
		.wr_data_s(wr_data_s),
		.ALU_OP(ALU_OP),
		.Write_Reg(Write_Reg),
		.Mem_Write(Mem_Write),
		.PC_s(PC_s)
	);

	readinst ri_i(
		.clk(clk),
		.rst(rst),
		.PC_s(PC_s),
		.R_Data_A(R_Data_A),
		.imm_data(imm_data),
		.address(address),
		.Inst_code(inst),
		.PC_new(PC_new)
	);

	Register_Stack rs_i(
		.R_Addr_A(R_Addr_A),
		.R_Addr_B(R_Addr_B),
		.Write_Reg(Write_Reg),
		.W_Addr(W_Addr),
		.W_Data(W_Data),
		.clk(~clk),
		.rst(rst),
		.R_Data_A(R_Data_A),
		.R_Data_B(R_Data_B)
	);

	Alu a_i(
		.ALU_OP(ALU_OP),
		.A(ALU_A),
		.B(ALU_B),
		.F(ALU_F),
		.ZF(ZF),
		.OF(OF)
	);

	RAM ram_i(
		.clka(clk_m),
		.wea(Mem_Write),
		.addra(Mem_Addr[7:2]),
		.dina(M_W_Data),
		.douta(M_R_Data)
	);

endmodule