`define RST_PC 32'h80000000
`define INVALID_RID 5'00000

`define INVALID_RegW  1'b0
`define VALID_RegW    1'b1

`define INVALID_MemW  1'b1
`define VALID_MemW    1'b0

`define ZERO       32'h00000000
`define ZERO_ID    5'b00000

`define INVALID_OP  6'b000000

// I-type instructions
`define I           7'b0010011
`define ADDI        3'b000
`define SLTI        3'b010
`define SLTIU       3'b011
`define XORI        3'b100
`define ORI         3'b110
`define ANDI        3'b111
`define SLLI        3'b001
`define SRLI        3'b101
`define SRAI        3'b101

// R-type instructions
`define R           7'b0110011
`define ADD         3'b000
`define SUB         3'b000
`define SLL         3'b001
`define SLT         3'b010
`define SLTU        3'b011
`define XOR         3'b100
`define SRL         3'b101
`define SRA         3'b101
`define OR          3'b110
`define AND         3'b111
`define ADD_FUNCT7  7'b0000000
`define SUB_FUNCT7  7'b0100000
`define SLL_FUNCT7  7'b0000000
`define SLT_FUNCT7  7'b0000000
`define SLTU_FUNCT7 7'b0000000
`define XOR_FUNCT7  7'b0000000
`define SRL_FUNCT7  7'b0000000
`define SRA_FUNCT7  7'b0100000
`define OR_FUNCT7   7'b0000000
`define AND_FUNCT7  7'b0000000

// B-type instructions
`define B           7'b1100011
`define BEQ         3'b000
`define BNE         3'b001
`define BLT         3'b100
`define BGE         3'b101
`define BLTU        3'b110
`define BGEU        3'b111

// S-type instructions
`define S           7'b0100011
`define SB          3'b000
`define SH          3'b001
`define SW          3'b010

// Load instructions
`define L          7'b0000011
`define LB          3'b000
`define LH          3'b001
`define LW          3'b010
`define LBU         3'b100
`define LHU         3'b101

// J-type instructions
`define JAL         7'b1101111
`define JALR        7'b1100111

// U-type instructions
`define LUI         7'b0110111
`define AUIPC       7'b0010111

//NOP
`define NOP         7'b0000000

//FENCE
`define FENCE       7'b0001111

//ECALL
`define ECALL       7'b1110011

//EBREAK
`define EBREAK      7'b1110011



`define ALU_OP_NUM 11

`define ADD_OP 0
`define SUB_OP 1
`define SL_OP 2
`define SRL_OP 3
`define SRA_OP 4
`define AND_OP 5
`define OR_OP 6
`define XOR_OP 7
`define SLT_OP 8
`define SLTU_OP 9
`define J_OP   10

`define SB_MASK 4'b0001
`define SH_MASK 4'b0011
`define SW_MASK 4'b1111

`define LB_MASK 5'b00001
`define LH_MASK 5'b00010
`define LW_MASK 5'b00100
`define LBU_MASK 5'b01000
`define LHU_MASK 5'b10000

`define LB_BIT  0
`define LH_BIT  1
`define LW_BIT  2
`define LBU_BIT  3
`define LHU_BIT  4