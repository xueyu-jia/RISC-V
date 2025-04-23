// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSoc__Syms.h"


VL_ATTR_COLD void VSoc___024root__trace_init_sub__TOP__0(VSoc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_init_sub__TOP__0\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+98,0,"sim_in_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"sim_out_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"sim_in_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+101,0,"sim_in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Soc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+98,0,"sim_in_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"sim_out_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"sim_in_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+101,0,"sim_in_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"Rv32_out_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"Rv32_out_mem_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"Rv32_out_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"Rv32_out_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"Rv32_out_mem_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"Rv32_in_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"rv_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+107,0,"Rv32_mem_in_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+108,0,"Rv32_mem_in_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"Rv32_mem_in_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"Rv32_mem_out_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Rv32_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+102,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+108,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+115,0,"MEM_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"after_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rv32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+102,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"mem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"mem_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"mem_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"Regfile_in_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"Regfile_in_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"Regfile_in_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"Regfile_in_Ra_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"Regfile_in_Rb_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"Regfile_out_Ra_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"Regfile_out_Rb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"Ifu_in_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"Ifu_out_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"Ifu_out_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"Ifu_out_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"Ifu_in_jmp_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"Ifu_in_jmp_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"Decoder_in_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"Decoder_in_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"Decoder_in_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"Decoder_in_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"Decoder_out_rs1_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"Decoder_out_rs2_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"Decoder_out_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"Decoder_out_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"Decoder_out_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"Decoder_out_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"Decoder_out_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"Decoder_out_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+37,0,"Decoder_out_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"Decoder_out_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+94,0,"Decoder_out_jump_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"Decoder_out_jump_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"Alu_in_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+39,0,"Alu_in_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+96,0,"Alu_in_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"Alu_in_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"Alu_in_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"Alu_in_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"Alu_in_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"Alu_out_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"Alu_out_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"Alu_out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"Alu_out_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"Alu_out_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"Alu_out_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+114,0,"Memu_in_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"Memu_in_mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"Memu_in_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"Memu_in_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"Memu_in_alu_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"Memu_in_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"Memu_in_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+114,0,"Memu_out_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"Memu_out_mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"Memu_out_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+117,0,"Memu_out_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+39,0,"Memu_out_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"Memu_out_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"Memu_out_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"Memu_out_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"Wbu_in_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"Wbu_in_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"Wbu_in_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"Wbu_out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"Wbu_out_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"Wbu_out_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RV32I_Alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+43,0,"in_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+39,0,"in_rd_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"in_rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"in_mem_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"in_mem_re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"in_src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"in_src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"in_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"out_rd_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"out_rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"out_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"out_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"out_mem_re",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+97,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"alu_src_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RV32I_Decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"in_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"in_ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"in_src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"in_src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"out_rs1_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"out_rs2_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"out_src1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"out_src2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"out_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"out_rd_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"out_rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"out_alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+44,0,"out_mem_re",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+37,0,"out_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+94,0,"out_jump_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"out_jump_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+47,0,"fuc3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+48,0,"fuc7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+49,0,"is_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"is_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"is_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"is_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"is_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"is_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"is_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"is_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"is_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"is_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"is_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"is_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"is_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"is_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"is_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"is_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"is_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"is_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"is_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"is_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"is_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"is_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"is_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"is_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"is_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"is_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"is_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"is_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"is_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("RV32I_Ifu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+102,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"in_Jmp_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"in_Jmp_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"in_ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2,0,"out_mem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"out_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"out_ins",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"n_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RV32I_Memu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+114,0,"in_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"in_mem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"in_rd_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"in_rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"in_alu_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"out_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"in_mem_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+44,0,"in_mem_re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+93,0,"out_mem_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"out_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+45,0,"out_mem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"out_rd_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"out_rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"out_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RV32I_Regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+102,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"in_Ra_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"in_Rb_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+112,0,"out_Ra_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"out_Rb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"in_W_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"in_We",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"in_W_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"GENERAL_REG_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("general_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+36,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RV32I_Wbu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+39,0,"in_rd_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"in_rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"out_rd_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+40,0,"out_rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VSoc___024root__trace_init_top(VSoc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_init_top\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VSoc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSoc___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VSoc___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSoc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSoc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSoc___024root__trace_register(VSoc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_register\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VSoc___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VSoc___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VSoc___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VSoc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSoc___024root__trace_const_0_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSoc___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_const_0\n"); );
    // Init
    VSoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSoc___024root*>(voidSelf);
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSoc___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSoc___024root__trace_const_0_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_const_0_sub_0\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+115,(0x80000000U),32);
    bufp->fullIData(oldp+116,(0x1000U),32);
    bufp->fullCData(oldp+117,(vlSelfRef.Soc__DOT__rv32__DOT__Memu_out_mem_re),5);
    bufp->fullIData(oldp+118,(0x20U),32);
}

VL_ATTR_COLD void VSoc___024root__trace_full_0_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSoc___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_full_0\n"); );
    // Init
    VSoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSoc___024root*>(voidSelf);
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSoc___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSoc___024root__trace_full_0_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_full_0_sub_0\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc),32);
    bufp->fullBit(oldp+2,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_mem_valid));
    bufp->fullIData(oldp+3,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc),32);
    bufp->fullIData(oldp+4,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[1]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[2]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[3]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[4]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[5]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[6]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[7]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[8]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[9]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[10]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[11]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[12]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[13]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[14]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[15]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[16]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[17]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[18]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[19]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[20]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[21]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[22]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[23]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[24]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[25]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[26]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[27]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[28]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[29]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[30]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[31]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__i),32);
    bufp->fullCData(oldp+37,(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we),4);
    bufp->fullIData(oldp+38,(vlSelfRef.Soc__DOT__Rv32_mem_out_rdata),32);
    bufp->fullCData(oldp+39,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_id),5);
    bufp->fullBit(oldp+40,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_19) 
                            | (3U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullCData(oldp+41,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id),5);
    bufp->fullCData(oldp+42,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id),5);
    bufp->fullSData(oldp+43,(((((((IData)((0x3033U 
                                           == (0xfe00707fU 
                                               & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                  | (IData)((0x3013U 
                                             == (0x707fU 
                                                 & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))) 
                                 << 9U) | ((((IData)(
                                                     (0x2033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                             | (IData)(
                                                       (0x2013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))) 
                                            << 8U) 
                                           | (((IData)(
                                                       (0x4033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                               | (IData)(
                                                         (0x4013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))) 
                                              << 7U))) 
                               | ((((IData)((0x6033U 
                                             == (0xfe00707fU 
                                                 & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                    | (IData)((0x6013U 
                                               == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))) 
                                   << 6U) | (((IData)(
                                                      (0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                              | (IData)(
                                                        (0x7013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))) 
                                             << 5U))) 
                              | ((((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_16) 
                                     & (0x20U == (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                  >> 0x19U))) 
                                    | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli)) 
                                   << 4U) | (((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_16) 
                                                & (0U 
                                                   == 
                                                   (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                    >> 0x19U))) 
                                               | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli)) 
                                              << 3U) 
                                             | (((IData)(
                                                         (0x1033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                                 | (IData)(
                                                           (0x1013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))) 
                                                << 2U))) 
                                 | ((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                                      & (0x20U == (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                   >> 0x19U))) 
                                     << 1U) | ((IData)(
                                                       (0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                               | (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                                                   & (0U 
                                                      == 
                                                      (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                       >> 0x19U))) 
                                                  | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lb) 
                                                     | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lh) 
                                                        | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lw) 
                                                           | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lbu) 
                                                              | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lhu) 
                                                                 | (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u) 
                                                                     & (0x37U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                                                    | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc))))))))))))),10);
    bufp->fullCData(oldp+44,(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re),5);
    bufp->fullBit(oldp+45,(vlSelfRef.Soc__DOT__rv32__DOT__Memu_out_mem_valid));
    bufp->fullCData(oldp+46,((0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)),7);
    bufp->fullCData(oldp+47,((7U & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+48,((vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+49,((0x13U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))));
    bufp->fullBit(oldp+50,((3U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))));
    bufp->fullBit(oldp+51,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u));
    bufp->fullBit(oldp+52,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j));
    bufp->fullBit(oldp+53,((0x63U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))));
    bufp->fullBit(oldp+54,((0x23U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))));
    bufp->fullBit(oldp+55,((0x33U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))));
    bufp->fullBit(oldp+56,((IData)((0x13U == (0x707fU 
                                              & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+57,((IData)((0x2013U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+58,((IData)((0x3013U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+59,((IData)((0x4013U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+60,((IData)((0x6013U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+61,((IData)((0x7013U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+62,((IData)((0x1013U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+63,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli));
    bufp->fullBit(oldp+64,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                            & (0U == (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+65,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                            & (0x20U == (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                         >> 0x19U)))));
    bufp->fullBit(oldp+66,((IData)((0x1033U == (0xfe00707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+67,((IData)((0x2033U == (0xfe00707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+68,((IData)((0x3033U == (0xfe00707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+69,((IData)((0x4033U == (0xfe00707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+70,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_16) 
                            & (0U == (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+71,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_16) 
                            & (0x20U == (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                         >> 0x19U)))));
    bufp->fullBit(oldp+72,((IData)((0x6033U == (0xfe00707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+73,((IData)((0x7033U == (0xfe00707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+74,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u) 
                            & (0x37U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+75,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc));
    bufp->fullBit(oldp+76,((IData)((0x63U == (0x707fU 
                                              & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+77,((IData)((0x1063U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+78,((IData)((0x4063U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+79,((IData)((0x5063U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+80,((IData)((0x6063U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+81,((IData)((0x7063U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+82,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lb));
    bufp->fullBit(oldp+83,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lh));
    bufp->fullBit(oldp+84,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lw));
    bufp->fullBit(oldp+85,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lbu));
    bufp->fullBit(oldp+86,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lhu));
    bufp->fullBit(oldp+87,((IData)((0x23U == (0x707fU 
                                              & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+88,((IData)((0x1023U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+89,((IData)((0x2023U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+90,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j) 
                            & (0x6fU == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+91,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j) 
                            & (0x67U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    bufp->fullBit(oldp+92,(vlSelfRef.Soc__DOT__Rv32_out_mem_valid));
    bufp->fullIData(oldp+93,(vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data),32);
    bufp->fullBit(oldp+94,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_en));
    bufp->fullIData(oldp+95,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_addr),32);
    bufp->fullIData(oldp+96,(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_imm),32);
    bufp->fullIData(oldp+97,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src),32);
    bufp->fullIData(oldp+98,(vlSelfRef.sim_in_addr),32);
    bufp->fullIData(oldp+99,(vlSelfRef.sim_out_rdata),32);
    bufp->fullCData(oldp+100,(vlSelfRef.sim_in_wen),4);
    bufp->fullIData(oldp+101,(vlSelfRef.sim_in_wdata),32);
    bufp->fullBit(oldp+102,(vlSelfRef.clk));
    bufp->fullBit(oldp+103,(vlSelfRef.rst));
    bufp->fullBit(oldp+104,(((~ (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Memu_out_mem_valid)) 
                             & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_mem_valid))));
    bufp->fullIData(oldp+105,((((- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Memu_out_mem_valid))) 
                                & (vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_imm 
                                   + vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                   [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id])) 
                               | ((- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_mem_valid))) 
                                  & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc))),32);
    bufp->fullCData(oldp+106,(((IData)(vlSelfRef.Soc__DOT__Rv32_out_mem_valid)
                                ? (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we)
                                : 0U)),4);
    bufp->fullCData(oldp+107,(vlSelfRef.Soc__DOT__Rv32_mem_in_wen),4);
    bufp->fullIData(oldp+108,(vlSelfRef.Soc__DOT__Rv32_mem_in_addr),32);
    bufp->fullIData(oldp+109,(vlSelfRef.Soc__DOT__Rv32_mem_in_wdata),32);
    bufp->fullIData(oldp+110,(VL_SHIFTR_III(32,32,32, 
                                            (vlSelfRef.Soc__DOT__Rv32_mem_in_addr 
                                             - (IData)(0x80000000U)), 2U)),32);
    bufp->fullIData(oldp+111,((((- (IData)((1U & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)))) 
                                & (((- (IData)((1U 
                                                & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                               | (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                >> 1U)))) 
                                   & (((- (IData)((1U 
                                                   & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                      >> 0xfU)))) 
                                       << 0x10U) | 
                                      (0xffffU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                  | (((- (IData)((1U 
                                                  & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                     >> 2U)))) 
                                      & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata) 
                                     | ((0xffU & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                                 >> 3U)))) 
                                                  & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)) 
                                        | ((0xffffU 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                              >> 4U)))) 
                                               & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)) 
                                           | ((- (IData)(
                                                         (0U 
                                                          == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)))) 
                                              & vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data))))))),32);
    bufp->fullIData(oldp+112,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                              [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id]),32);
    bufp->fullIData(oldp+113,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                              [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id]),32);
    bufp->fullIData(oldp+114,((vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_imm 
                               + vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                               [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id])),32);
}
