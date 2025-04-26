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
    tracep->declBit(c+106,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Soc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+106,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"Rv32_out_codemem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"Rv32_out_codemem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"Rv32_in_codemem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"Rv32_out_codemem_ne_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"Rv32_in_codemem_ne_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"Rv32_out_dataemem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"Rv32_out_datamem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"Rv32_in_datamem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"Rv32_out_datamem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"Rv32_out_datamem_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"Rv32_codemem_in_addr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"Rv32_codemem_out_rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"Rv32_codemem_in_addr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"Rv32_codemem_out_rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"Rv32_datamem_in_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"Rv32_datamem_in_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"Rv32_datamem_in_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"Rv32_datamem_out_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Rv32_codemem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+110,0,"MEM_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"addr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"after_addr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"after_addr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Rv32_datamem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+112,0,"MEM_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"after_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rv32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+106,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"codemem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"codemem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"codemem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"codemem_ne_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"codemem_ne_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"datamem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"datamem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"datamem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"datamem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"datamem_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"Regfile_in_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"Regfile_in_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"Regfile_in_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"Regfile_in_Ra_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"Regfile_in_Rb_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"Regfile_out_Ra_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"Regfile_out_Rb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"Ifu_in_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"Ifu_out_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"Ifu_out_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"Ifu_out_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"Ifu_in_jmp_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"Ifu_in_jmp_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"Ifu_ne_in_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"Ifu_ne_out_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"Decoder_in_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"Decoder_in_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"Decoder_in_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"Decoder_in_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"Decoder_out_rs1_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"Decoder_out_rs2_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"Decoder_out_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"Decoder_out_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"Decoder_out_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"Decoder_out_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"Decoder_out_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"Decoder_out_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+9,0,"Decoder_out_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"Decoder_out_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+19,0,"Decoder_out_jump_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"Decoder_out_jump_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"Alu_in_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+13,0,"Alu_in_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+21,0,"Alu_in_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"Alu_in_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"Alu_in_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"Alu_in_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"Alu_in_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"Alu_out_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"Alu_out_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"Alu_out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"Alu_out_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"Alu_out_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"Alu_out_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"Memu_in_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"Memu_in_mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"Memu_in_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"Memu_in_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"Memu_in_alu_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"Memu_in_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"Memu_in_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"Memu_out_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"Memu_out_mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"Memu_out_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+113,0,"Memu_out_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"Memu_out_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"Memu_out_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"Memu_out_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"Memu_out_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"Wbu_in_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"Wbu_in_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"Wbu_in_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"Wbu_out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"Wbu_out_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"Wbu_out_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RV32I_Alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"in_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+13,0,"in_rd_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"in_rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"in_mem_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"in_mem_re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"in_src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"in_src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"in_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"out_rd_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"out_rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"out_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"out_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"out_mem_re",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"alu_src_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RV32I_Decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"in_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"in_ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"in_src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"in_src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"out_rs1_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"out_rs2_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"out_src1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"out_src2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"out_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"out_rd_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"out_rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"out_alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+23,0,"out_mem_re",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"out_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+19,0,"out_jump_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"out_jump_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+26,0,"fuc3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+27,0,"fuc7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+28,0,"is_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"is_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"is_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"is_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"is_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"is_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"is_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"is_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"is_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"is_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"is_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"is_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"is_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"is_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"is_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"is_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"is_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"is_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"is_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"is_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"is_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"is_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"is_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"is_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"is_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"is_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"is_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"is_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"is_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"is_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"is_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("RV32I_Ifu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+106,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"in_Jmp_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"in_Jmp_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"in_ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"ne_in_ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"out_mem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"out_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"ne_out_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"out_ins",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"n_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+72,0,"ne_is_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("RV32I_Memu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"in_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"in_mem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"in_rd_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"in_rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"in_alu_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"out_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"in_mem_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"in_mem_re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"out_mem_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"out_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+6,0,"out_mem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"out_rd_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"out_rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"out_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RV32I_Regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+106,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"in_Ra_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,0,"in_Rb_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"out_Ra_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"out_Rb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"in_W_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"in_We",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"in_W_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"GENERAL_REG_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("general_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+73+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+105,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RV32I_Wbu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"in_rd_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"in_rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"out_rd_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"out_rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    bufp->fullIData(oldp+110,(0x80000000U),32);
    bufp->fullIData(oldp+111,(0x400000U),32);
    bufp->fullIData(oldp+112,(0x80400000U),32);
    bufp->fullCData(oldp+113,(vlSelfRef.Soc__DOT__rv32__DOT__Memu_out_mem_re),5);
    bufp->fullIData(oldp+114,(0x20U),32);
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
    bufp->fullBit(oldp+1,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_mem_valid));
    bufp->fullIData(oldp+2,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc),32);
    bufp->fullIData(oldp+3,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                            [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                           - (IData)(0x80000000U)) 
                                          >> 2U))]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc),32);
    bufp->fullIData(oldp+5,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                            [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc 
                                           - (IData)(0x80000000U)) 
                                          >> 2U))]),32);
    bufp->fullBit(oldp+6,(((0U != (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)) 
                           | (0U != (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we)))));
    bufp->fullIData(oldp+7,(vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr),32);
    bufp->fullIData(oldp+8,(vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data),32);
    bufp->fullCData(oldp+9,(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we),4);
    bufp->fullIData(oldp+10,(VL_SHIFTR_III(32,32,32, 
                                           (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                            - (IData)(0x80000000U)), 2U)),32);
    bufp->fullIData(oldp+11,(VL_SHIFTR_III(32,32,32, 
                                           (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc 
                                            - (IData)(0x80000000U)), 2U)),32);
    bufp->fullIData(oldp+12,(VL_SHIFTR_III(32,32,32, 
                                           (vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                                            - (IData)(0x80400000U)), 2U)),32);
    bufp->fullCData(oldp+13,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_id),5);
    bufp->fullBit(oldp+14,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_19) 
                            | (3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)))));
    bufp->fullCData(oldp+15,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id),5);
    bufp->fullCData(oldp+16,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id),5);
    bufp->fullIData(oldp+17,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                             [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                             [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id]),32);
    bufp->fullBit(oldp+19,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_en));
    bufp->fullIData(oldp+20,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_addr),32);
    bufp->fullIData(oldp+21,(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_imm),32);
    bufp->fullSData(oldp+22,((((((((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                   & ((3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                      & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))) 
                                  | ((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                     & (3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))) 
                                 << 9U) | (((((0x33U 
                                               == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                              & ((2U 
                                                  == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))) 
                                             | ((0x13U 
                                                 == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                & (2U 
                                                   == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))) 
                                            << 8U) 
                                           | ((((0x33U 
                                                 == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                & ((4U 
                                                    == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))) 
                                               | ((0x13U 
                                                   == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                  & (4U 
                                                     == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))) 
                                              << 7U))) 
                               | (((((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                     & ((6U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                        & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))) 
                                    | ((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                       & (6U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))) 
                                   << 6U) | ((((0x33U 
                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                               & ((7U 
                                                   == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))) 
                                              | ((0x13U 
                                                  == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                 & (7U 
                                                    == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))) 
                                             << 5U))) 
                              | ((((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                                     & (0x20U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))) 
                                    | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli)) 
                                   << 4U) | (((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))) 
                                               | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli)) 
                                              << 3U) 
                                             | ((((0x33U 
                                                   == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                  & ((1U 
                                                      == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                                     & (0U 
                                                        == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))) 
                                                 | ((0x13U 
                                                     == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))) 
                                                << 2U))) 
                                 | ((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10) 
                                      & (0x20U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))) 
                                     << 1U) | (((0x13U 
                                                 == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3))) 
                                               | (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))) 
                                                  | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lb) 
                                                     | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lh) 
                                                        | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lw) 
                                                           | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lbu) 
                                                              | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lhu) 
                                                                 | (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u) 
                                                                     & (0x37U 
                                                                        == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))) 
                                                                    | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc) 
                                                                       | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j)))))))))))))),10);
    bufp->fullCData(oldp+23,(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re),5);
    bufp->fullIData(oldp+24,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src),32);
    bufp->fullCData(oldp+25,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode),7);
    bufp->fullCData(oldp+26,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3),3);
    bufp->fullCData(oldp+27,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7),7);
    bufp->fullBit(oldp+28,((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))));
    bufp->fullBit(oldp+29,((3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))));
    bufp->fullBit(oldp+30,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u));
    bufp->fullBit(oldp+31,((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))));
    bufp->fullBit(oldp+32,((0x23U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))));
    bufp->fullBit(oldp+33,((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))));
    bufp->fullBit(oldp+34,(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+35,(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (2U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+36,(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+37,(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (4U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+38,(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (6U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+39,(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (7U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+40,(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (1U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+41,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli));
    bufp->fullBit(oldp+42,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10) 
                            & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))));
    bufp->fullBit(oldp+43,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10) 
                            & (0x20U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))));
    bufp->fullBit(oldp+44,(((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & ((1U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                               & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))))));
    bufp->fullBit(oldp+45,(((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & ((2U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                               & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))))));
    bufp->fullBit(oldp+46,(((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & ((3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                               & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))))));
    bufp->fullBit(oldp+47,(((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & ((4U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                               & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))))));
    bufp->fullBit(oldp+48,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                            & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))));
    bufp->fullBit(oldp+49,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                            & (0x20U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))));
    bufp->fullBit(oldp+50,(((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & ((6U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                               & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))))));
    bufp->fullBit(oldp+51,(((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & ((7U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                               & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))))));
    bufp->fullBit(oldp+52,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u) 
                            & (0x37U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)))));
    bufp->fullBit(oldp+53,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc));
    bufp->fullBit(oldp+54,(((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+55,(((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (1U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+56,(((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (4U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+57,(((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (5U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+58,(((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (6U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+59,(((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (7U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+60,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lb));
    bufp->fullBit(oldp+61,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lh));
    bufp->fullBit(oldp+62,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lw));
    bufp->fullBit(oldp+63,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lbu));
    bufp->fullBit(oldp+64,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lhu));
    bufp->fullBit(oldp+65,(((0x23U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+66,(((0x23U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (1U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+67,(((0x23U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (2U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
    bufp->fullBit(oldp+68,((0x6fU == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))));
    bufp->fullBit(oldp+69,((0x67U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))));
    bufp->fullBit(oldp+70,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j));
    bufp->fullIData(oldp+71,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc),32);
    bufp->fullBit(oldp+72,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__ne_is_c));
    bufp->fullIData(oldp+73,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[1]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[2]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[3]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[4]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[5]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[6]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[7]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[8]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[9]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[10]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[11]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[12]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[13]),32);
    bufp->fullIData(oldp+87,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[14]),32);
    bufp->fullIData(oldp+88,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[15]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[16]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[17]),32);
    bufp->fullIData(oldp+91,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[18]),32);
    bufp->fullIData(oldp+92,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[19]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[20]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[21]),32);
    bufp->fullIData(oldp+95,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[22]),32);
    bufp->fullIData(oldp+96,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[23]),32);
    bufp->fullIData(oldp+97,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[24]),32);
    bufp->fullIData(oldp+98,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[25]),32);
    bufp->fullIData(oldp+99,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[26]),32);
    bufp->fullIData(oldp+100,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[27]),32);
    bufp->fullIData(oldp+101,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[28]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[29]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[30]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[31]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__i),32);
    bufp->fullBit(oldp+106,(vlSelfRef.clk));
    bufp->fullBit(oldp+107,(vlSelfRef.rst));
    bufp->fullIData(oldp+108,(vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                              [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                                             - (IData)(0x80400000U)) 
                                            >> 2U))]),32);
    bufp->fullIData(oldp+109,((((- (IData)((1U & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)))) 
                                & (((- (IData)((1U 
                                                & (vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                                                   [
                                                   (0xfffffU 
                                                    & ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                                                        - (IData)(0x80400000U)) 
                                                       >> 2U))] 
                                                   >> 7U)))) 
                                    << 8U) | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Memu__DOT____VdfgRegularize_hd9a39314_0_0))) 
                               | (((- (IData)((1U & 
                                               ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                >> 1U)))) 
                                   & (((- (IData)((1U 
                                                   & (vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                                                      [
                                                      (0xfffffU 
                                                       & ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                                                           - (IData)(0x80400000U)) 
                                                          >> 2U))] 
                                                      >> 0xfU)))) 
                                       << 0x10U) | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Memu__DOT____VdfgRegularize_hd9a39314_0_1))) 
                                  | (((- (IData)((1U 
                                                  & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                     >> 2U)))) 
                                      & vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                                      [(0xfffffU & 
                                        ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                                          - (IData)(0x80400000U)) 
                                         >> 2U))]) 
                                     | (((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                        >> 3U)))) 
                                         & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Memu__DOT____VdfgRegularize_hd9a39314_0_0)) 
                                        | (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                           >> 4U)))) 
                                            & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Memu__DOT____VdfgRegularize_hd9a39314_0_1)) 
                                           | ((- (IData)(
                                                         (0U 
                                                          == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)))) 
                                              & vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data))))))),32);
}
