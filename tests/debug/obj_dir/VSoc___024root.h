// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSoc.h for the primary calling header

#ifndef VERILATED_VSOC___024ROOT_H_
#define VERILATED_VSOC___024ROOT_H_  // guard

#include "verilated.h"


class VSoc__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSoc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(sim_in_wen,3,0);
    CData/*0:0*/ Soc__DOT__Rv32_out_mem_valid;
    CData/*3:0*/ Soc__DOT__Rv32_mem_in_wen;
    CData/*4:0*/ Soc__DOT__rv32__DOT__Regfile_in_rd_id;
    CData/*4:0*/ Soc__DOT__rv32__DOT__Regfile_in_Ra_id;
    CData/*4:0*/ Soc__DOT__rv32__DOT__Regfile_in_Rb_id;
    CData/*0:0*/ Soc__DOT__rv32__DOT__Ifu_out_mem_valid;
    CData/*0:0*/ Soc__DOT__rv32__DOT__Ifu_in_jmp_en;
    CData/*3:0*/ Soc__DOT__rv32__DOT__Decoder_out_mem_we;
    CData/*4:0*/ Soc__DOT__rv32__DOT__Decoder_out_mem_re;
    CData/*4:0*/ Soc__DOT__rv32__DOT__Memu_out_mem_re;
    CData/*0:0*/ Soc__DOT__rv32__DOT__Memu_out_mem_valid;
    CData/*0:0*/ Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u;
    CData/*0:0*/ Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j;
    CData/*0:0*/ Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli;
    CData/*0:0*/ Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc;
    CData/*0:0*/ Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lb;
    CData/*0:0*/ Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lh;
    CData/*0:0*/ Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lw;
    CData/*0:0*/ Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lbu;
    CData/*0:0*/ Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lhu;
    CData/*0:0*/ Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13;
    CData/*0:0*/ Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_16;
    CData/*0:0*/ Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_19;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(sim_in_addr,31,0);
    VL_OUT(sim_out_rdata,31,0);
    VL_IN(sim_in_wdata,31,0);
    IData/*31:0*/ Soc__DOT__Rv32_mem_in_addr;
    IData/*31:0*/ Soc__DOT__Rv32_mem_in_wdata;
    IData/*31:0*/ Soc__DOT__Rv32_mem_out_rdata;
    IData/*31:0*/ Soc__DOT__rv32__DOT__Ifu_out_pc;
    IData/*31:0*/ Soc__DOT__rv32__DOT__Ifu_in_jmp_addr;
    IData/*31:0*/ Soc__DOT__rv32__DOT__Decoder_out_imm;
    IData/*31:0*/ Soc__DOT__rv32__DOT__Alu_out_data;
    IData/*31:0*/ Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__i;
    IData/*31:0*/ Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc;
    IData/*31:0*/ Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg;
    VlUnpacked<IData/*31:0*/, 4096> Soc__DOT__Rv32_mem__DOT__mem;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSoc__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSoc___024root(VSoc__Syms* symsp, const char* v__name);
    ~VSoc___024root();
    VL_UNCOPYABLE(VSoc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
