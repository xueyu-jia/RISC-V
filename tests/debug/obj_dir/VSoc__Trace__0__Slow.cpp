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
    tracep->declBit(c+134,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("Soc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+134,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"Rv32_out_codemem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"Rv32_out_codemem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"Rv32_in_codemem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"Rv32_out_codemem_ne_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"Rv32_in_codemem_ne_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"Rv32_out_dataemem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"Rv32_out_datamem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"Rv32_in_datamem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"Rv32_out_datamem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"Rv32_out_datamem_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,0,"Rv32_codemem_in_addr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"Rv32_codemem_out_rdata1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"Rv32_codemem_in_addr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"Rv32_codemem_out_rdata2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"Rv32_datamem_in_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"Rv32_datamem_in_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"Rv32_datamem_in_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"Rv32_datamem_out_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("Rv32_codemem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+140,0,"MEM_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"addr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"addr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"data10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"data11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"data12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"data13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"data20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"data21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"data22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"data23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("Rv32_datamem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"MEM_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"data0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"data3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rv32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+134,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"codemem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"codemem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"codemem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"codemem_ne_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"codemem_ne_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"datamem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"datamem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"datamem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"datamem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"datamem_wstrb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"Regfile_in_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"Regfile_in_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"Regfile_in_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"Regfile_in_Ra_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"Regfile_in_Rb_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"Regfile_out_Ra_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"Regfile_out_Rb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"Ifu_in_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"Ifu_out_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"Ifu_out_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"Ifu_out_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"Ifu_in_jmp_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"Ifu_in_jmp_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"Ifu_ne_in_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"Ifu_ne_out_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"Decoder_in_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"Decoder_in_ins",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"Decoder_in_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"Decoder_in_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"Decoder_out_rs1_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"Decoder_out_rs2_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"Decoder_out_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"Decoder_out_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"Decoder_out_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"Decoder_out_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"Decoder_out_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"Decoder_out_alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+10,0,"Decoder_out_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"Decoder_out_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+26,0,"Decoder_out_jump_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"Decoder_out_jump_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"Alu_in_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+19,0,"Alu_in_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+28,0,"Alu_in_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"Alu_in_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"Alu_in_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"Alu_in_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"Alu_in_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"Alu_out_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"Alu_out_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"Alu_out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"Alu_out_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"Alu_out_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"Alu_out_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"Memu_in_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"Memu_in_mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"Memu_in_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"Memu_in_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"Memu_in_alu_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"Memu_in_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"Memu_in_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"Memu_out_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"Memu_out_mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"Memu_out_mem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+143,0,"Memu_out_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"Memu_out_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"Memu_out_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"Memu_out_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"Memu_out_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"Wbu_in_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"Wbu_in_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"Wbu_in_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"Wbu_out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"Wbu_out_rd_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"Wbu_out_rd_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("RV32I_Alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+29,0,"in_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+19,0,"in_rd_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"in_rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"in_mem_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"in_mem_re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"in_src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"in_src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"in_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"out_rd_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"out_rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"out_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"out_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"out_mem_re",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+31,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"is_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"is_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"is_sl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"is_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"is_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"is_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"is_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"is_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"is_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"is_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"is_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"is_memw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"add_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,0,"sub_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"sl_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"srl_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"sra_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"and_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"or_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"xor_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"slt_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"sltu_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"j_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"memw_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RV32I_Decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"in_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"in_ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"in_src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"in_src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"out_rs1_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"out_rs2_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"out_src1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"out_src2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"out_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"out_rd_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"out_rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"out_alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+30,0,"out_mem_re",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"out_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+26,0,"out_jump_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"out_jump_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+55,0,"fuc3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+56,0,"fuc7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+57,0,"is_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"is_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"is_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"is_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"is_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"is_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"is_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"is_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"is_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"is_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"is_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"is_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"is_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"is_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"is_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"is_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"is_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"is_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"is_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"is_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"is_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"is_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"is_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"is_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"is_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"is_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"is_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"is_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"is_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"is_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"is_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"is_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"is_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"is_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"is_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"is_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"is_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"is_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"is_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"is_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"is_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"is_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"is_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"is_j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("RV32I_Ifu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+134,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"in_Jmp_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"in_Jmp_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"in_ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"ne_in_ins",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"out_mem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"out_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"ne_out_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"out_ins",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"n_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"ne_is_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("RV32I_Memu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+7,0,"in_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"in_mem_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"in_rd_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"in_rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"in_alu_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"out_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"in_mem_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"in_mem_re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"out_mem_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"out_mem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+6,0,"out_mem_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"out_rd_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"out_rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"out_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RV32I_Regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+134,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"in_Ra_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"in_Rb_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"out_Ra_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"out_Rb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"in_W_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"in_We",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"in_W_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"GENERAL_REG_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("general_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+101+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+133,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("RV32I_Wbu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"in_rd_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"in_rd_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"out_rd_id",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+20,0,"out_rd_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    bufp->fullIData(oldp+140,(0x80000000U),32);
    bufp->fullIData(oldp+141,(0x400000U),32);
    bufp->fullIData(oldp+142,(0x80400000U),32);
    bufp->fullCData(oldp+143,(vlSelfRef.Soc__DOT__rv32__DOT__Memu_out_mem_re),5);
    bufp->fullIData(oldp+144,(0x20U),32);
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
    bufp->fullIData(oldp+3,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins),32);
    bufp->fullIData(oldp+4,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc),32);
    bufp->fullIData(oldp+5,((vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                             [(0x3fffffU & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc)] 
                             | (VL_SHIFTL_III(32,32,32, 
                                              vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                              [(0x3fffffU 
                                                & ((IData)(1U) 
                                                   + vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc))], 8U) 
                                | (VL_SHIFTL_III(32,32,32, 
                                                 vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                 [(0x3fffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc))], 0x10U) 
                                   | VL_SHIFTL_III(32,32,32, 
                                                   vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                   [
                                                   (0x3fffffU 
                                                    & ((IData)(3U) 
                                                       + vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc))], 0x18U))))),32);
    bufp->fullBit(oldp+6,(((0U != (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)) 
                           | (0U != (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we)))));
    bufp->fullIData(oldp+7,(vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr),32);
    bufp->fullIData(oldp+8,(vlSelfRef.Soc__DOT__rv32__DOT__Memu_in_mem_data),32);
    bufp->fullIData(oldp+9,(vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data),32);
    bufp->fullCData(oldp+10,(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we),4);
    bufp->fullIData(oldp+11,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                             [(0x3fffffU & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc)]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                             [(0x3fffffU & ((IData)(1U) 
                                            + vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc))]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                             [(0x3fffffU & ((IData)(2U) 
                                            + vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc))]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                             [(0x3fffffU & ((IData)(3U) 
                                            + vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc))]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                             [(0x3fffffU & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc)]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                             [(0x3fffffU & ((IData)(1U) 
                                            + vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc))]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                             [(0x3fffffU & ((IData)(2U) 
                                            + vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc))]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                             [(0x3fffffU & ((IData)(3U) 
                                            + vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc))]),32);
    bufp->fullCData(oldp+19,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_id),5);
    bufp->fullBit(oldp+20,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_21) 
                            | ((3U == (0x7fU & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)) 
                               | (0x33U == (0x7fU & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))))));
    bufp->fullIData(oldp+21,((((- (IData)((1U & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)))) 
                               & (((- (IData)((1U & 
                                               (vlSelfRef.Soc__DOT__rv32__DOT__Memu_in_mem_data 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelfRef.Soc__DOT__rv32__DOT__Memu_in_mem_data))) 
                              | (((- (IData)((1U & 
                                              ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                               >> 1U)))) 
                                  & (((- (IData)((1U 
                                                  & (vlSelfRef.Soc__DOT__rv32__DOT__Memu_in_mem_data 
                                                     >> 0xfU)))) 
                                      << 0x10U) | (0xffffU 
                                                   & vlSelfRef.Soc__DOT__rv32__DOT__Memu_in_mem_data))) 
                                 | (((- (IData)((1U 
                                                 & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                    >> 2U)))) 
                                     & vlSelfRef.Soc__DOT__rv32__DOT__Memu_in_mem_data) 
                                    | ((0xffU & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                                >> 3U)))) 
                                                 & vlSelfRef.Soc__DOT__rv32__DOT__Memu_in_mem_data)) 
                                       | ((0xffffU 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                             >> 4U)))) 
                                              & vlSelfRef.Soc__DOT__rv32__DOT__Memu_in_mem_data)) 
                                          | ((- (IData)(
                                                        (0U 
                                                         == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)))) 
                                             & vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data))))))),32);
    bufp->fullCData(oldp+22,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id),5);
    bufp->fullCData(oldp+23,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id),5);
    bufp->fullIData(oldp+24,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                             [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                             [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id]),32);
    bufp->fullBit(oldp+26,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_en));
    bufp->fullIData(oldp+27,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_addr),32);
    bufp->fullIData(oldp+28,(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_imm),32);
    bufp->fullSData(oldp+29,((((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__is_j) 
                                 << 0xaU) | ((((IData)(
                                                       (0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                                               | (IData)(
                                                         (0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))) 
                                              << 9U) 
                                             | (((IData)(
                                                         (0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                                                 | (IData)(
                                                           (0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))) 
                                                << 8U))) 
                               | ((((IData)((0x4033U 
                                             == (0xfe00707fU 
                                                 & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                                    | (IData)((0x4013U 
                                               == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))) 
                                   << 7U) | ((((IData)(
                                                       (0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                                               | (IData)(
                                                         (0x6013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))) 
                                              << 6U) 
                                             | (((IData)(
                                                         (0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                                                 | (IData)(
                                                           (0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))) 
                                                << 5U)))) 
                              | ((((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15) 
                                     & (0x20U == (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                                                  >> 0x19U))) 
                                    << 4U) | (0x30U 
                                              & (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10) 
                                                  << 4U) 
                                                 & (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                                                    >> 0x1aU)))) 
                                  | (((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15) 
                                        & (0U == (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                                                  >> 0x19U))) 
                                       | ((~ (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                                              >> 0x1eU)) 
                                          & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10))) 
                                      << 3U) | (((IData)(
                                                         (0x1033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                                                 | (IData)(
                                                           (0x1013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))) 
                                                << 2U))) 
                                 | ((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_12) 
                                      & (0x20U == (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                                                   >> 0x19U))) 
                                     << 1U) | ((IData)(
                                                       (0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                                               | (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_12) 
                                                   & (0U 
                                                      == 
                                                      (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
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
                                                                         & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                                                                    | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc))))))))))))),11);
    bufp->fullCData(oldp+30,(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re),5);
    bufp->fullIData(oldp+31,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src),32);
    bufp->fullBit(oldp+32,(((IData)((0x13U == (0x707fU 
                                               & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                            | (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_12) 
                                & (0U == (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
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
                                                      & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                                                 | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc)))))))))));
    bufp->fullBit(oldp+33,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_12) 
                            & (0x20U == (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                                         >> 0x19U)))));
    bufp->fullBit(oldp+34,(((IData)((0x1033U == (0xfe00707fU 
                                                 & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                            | (IData)((0x1013U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))))));
    bufp->fullBit(oldp+35,((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15) 
                             & (0U == (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                                       >> 0x19U))) 
                            | ((~ (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                                   >> 0x1eU)) & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10)))));
    bufp->fullBit(oldp+36,((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15) 
                             & (0x20U == (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                                          >> 0x19U))) 
                            | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10) 
                               & (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                                  >> 0x1eU)))));
    bufp->fullBit(oldp+37,(((IData)((0x7033U == (0xfe00707fU 
                                                 & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                            | (IData)((0x7013U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))))));
    bufp->fullBit(oldp+38,(((IData)((0x6033U == (0xfe00707fU 
                                                 & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                            | (IData)((0x6013U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))))));
    bufp->fullBit(oldp+39,(((IData)((0x4033U == (0xfe00707fU 
                                                 & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                            | (IData)((0x4013U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))))));
    bufp->fullBit(oldp+40,(((IData)((0x2033U == (0xfe00707fU 
                                                 & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                            | (IData)((0x2013U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))))));
    bufp->fullBit(oldp+41,(((IData)((0x3033U == (0xfe00707fU 
                                                 & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))) 
                            | (IData)((0x3013U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))))));
    bufp->fullBit(oldp+42,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__is_j));
    bufp->fullBit(oldp+43,((0U != (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we))));
    bufp->fullIData(oldp+44,((vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                              [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                              + vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)),32);
    bufp->fullIData(oldp+45,((vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                              [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                              - vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)),32);
    bufp->fullIData(oldp+46,((vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                              [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                              << (0x1fU & vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src))),32);
    bufp->fullIData(oldp+47,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__srl_out),32);
    bufp->fullIData(oldp+48,((vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__srl_out 
                              | ((vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                  [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                                  >> 0x1fU) ? (~ (0xffffffffU 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)))
                                  : 0U))),32);
    bufp->fullIData(oldp+49,((vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                              [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                              & vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)),32);
    bufp->fullIData(oldp+50,((vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                              [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                              | vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)),32);
    bufp->fullIData(oldp+51,((vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                              [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                              ^ vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)),32);
    bufp->fullIData(oldp+52,(VL_LTS_III(32, vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                        [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id], vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)),32);
    bufp->fullIData(oldp+53,((vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                              [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                              < vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)),32);
    bufp->fullCData(oldp+54,((0x7fU & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)),7);
    bufp->fullCData(oldp+55,((7U & (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+56,((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+57,((0x13U == (0x7fU & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))));
    bufp->fullBit(oldp+58,((3U == (0x7fU & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))));
    bufp->fullBit(oldp+59,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u));
    bufp->fullBit(oldp+60,((0x63U == (0x7fU & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))));
    bufp->fullBit(oldp+61,((0x23U == (0x7fU & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))));
    bufp->fullBit(oldp+62,((0x33U == (0x7fU & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))));
    bufp->fullBit(oldp+63,((IData)((0x13U == (0x707fU 
                                              & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+64,((IData)((0x2013U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+65,((IData)((0x3013U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+66,((IData)((0x4013U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+67,((IData)((0x6013U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+68,((IData)((0x7013U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+69,((IData)((0x1013U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+70,(((~ (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                                >> 0x1eU)) & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10))));
    bufp->fullBit(oldp+71,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10) 
                            & (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                               >> 0x1eU))));
    bufp->fullBit(oldp+72,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_12) 
                            & (0U == (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+73,((IData)((0x1033U == (0xfe00707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+74,((IData)((0x2033U == (0xfe00707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+75,((IData)((0x3033U == (0xfe00707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+76,((IData)((0x4033U == (0xfe00707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+77,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15) 
                            & (0U == (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+78,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15) 
                            & (0x20U == (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins 
                                         >> 0x19U)))));
    bufp->fullBit(oldp+79,((IData)((0x6033U == (0xfe00707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+80,((IData)((0x7033U == (0xfe00707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+81,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u) 
                            & (0x37U == (0x7fU & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+82,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc));
    bufp->fullBit(oldp+83,((IData)((0x63U == (0x707fU 
                                              & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+84,((IData)((0x1063U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+85,((IData)((0x4063U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+86,((IData)((0x5063U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+87,((IData)((0x6063U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+88,((IData)((0x7063U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+89,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lb));
    bufp->fullBit(oldp+90,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lh));
    bufp->fullBit(oldp+91,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lw));
    bufp->fullBit(oldp+92,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lbu));
    bufp->fullBit(oldp+93,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lhu));
    bufp->fullBit(oldp+94,((IData)((0x23U == (0x707fU 
                                              & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+95,((IData)((0x1023U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+96,((IData)((0x2023U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins)))));
    bufp->fullBit(oldp+97,((0x6fU == (0x7fU & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))));
    bufp->fullBit(oldp+98,((0x67U == (0x7fU & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_ins))));
    bufp->fullIData(oldp+99,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc),32);
    bufp->fullBit(oldp+100,((3U != (3U & (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                          [(0x3fffffU 
                                            & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc)] 
                                          | (VL_SHIFTL_III(2,32,32, 
                                                           vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                           [
                                                           (0x3fffffU 
                                                            & ((IData)(1U) 
                                                               + vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc))], 8U) 
                                             | (VL_SHIFTL_III(2,32,32, 
                                                              vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                              [
                                                              (0x3fffffU 
                                                               & ((IData)(2U) 
                                                                  + vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc))], 0x10U) 
                                                | VL_SHIFTL_III(2,32,32, 
                                                                vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                [
                                                                (0x3fffffU 
                                                                 & ((IData)(3U) 
                                                                    + vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc))], 0x18U))))))));
    bufp->fullIData(oldp+101,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0]),32);
    bufp->fullIData(oldp+102,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[1]),32);
    bufp->fullIData(oldp+103,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[2]),32);
    bufp->fullIData(oldp+104,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[3]),32);
    bufp->fullIData(oldp+105,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[4]),32);
    bufp->fullIData(oldp+106,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[5]),32);
    bufp->fullIData(oldp+107,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[6]),32);
    bufp->fullIData(oldp+108,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[7]),32);
    bufp->fullIData(oldp+109,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[8]),32);
    bufp->fullIData(oldp+110,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[9]),32);
    bufp->fullIData(oldp+111,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[10]),32);
    bufp->fullIData(oldp+112,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[11]),32);
    bufp->fullIData(oldp+113,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[12]),32);
    bufp->fullIData(oldp+114,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[13]),32);
    bufp->fullIData(oldp+115,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[14]),32);
    bufp->fullIData(oldp+116,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[15]),32);
    bufp->fullIData(oldp+117,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[16]),32);
    bufp->fullIData(oldp+118,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[17]),32);
    bufp->fullIData(oldp+119,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[18]),32);
    bufp->fullIData(oldp+120,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[19]),32);
    bufp->fullIData(oldp+121,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[20]),32);
    bufp->fullIData(oldp+122,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[21]),32);
    bufp->fullIData(oldp+123,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[22]),32);
    bufp->fullIData(oldp+124,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[23]),32);
    bufp->fullIData(oldp+125,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[24]),32);
    bufp->fullIData(oldp+126,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[25]),32);
    bufp->fullIData(oldp+127,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[26]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[27]),32);
    bufp->fullIData(oldp+129,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[28]),32);
    bufp->fullIData(oldp+130,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[29]),32);
    bufp->fullIData(oldp+131,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[30]),32);
    bufp->fullIData(oldp+132,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[31]),32);
    bufp->fullIData(oldp+133,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__i),32);
    bufp->fullBit(oldp+134,(vlSelfRef.clk));
    bufp->fullBit(oldp+135,(vlSelfRef.rst));
    bufp->fullIData(oldp+136,(vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                              [(0x3fffffU & vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr)]),32);
    bufp->fullIData(oldp+137,(vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                              [(0x3fffffU & ((IData)(1U) 
                                             + vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr))]),32);
    bufp->fullIData(oldp+138,(vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                              [(0x3fffffU & ((IData)(2U) 
                                             + vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr))]),32);
    bufp->fullIData(oldp+139,(vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                              [(0x3fffffU & ((IData)(3U) 
                                             + vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr))]),32);
}
