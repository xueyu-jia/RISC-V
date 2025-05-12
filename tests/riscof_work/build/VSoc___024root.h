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
    VL_IN8(butten,4,0);
    VL_OUT8(seg0_cs,3,0);
    VL_OUT8(seg0_data,7,0);
    VL_OUT8(seg1_cs,3,0);
    VL_OUT8(seg1_data,7,0);
    CData/*3:0*/ Soc__DOT__Rv32_out_datamem_wen;
    CData/*4:0*/ Soc__DOT__Rv32__DOT__Regfile_in_rd_id;
    CData/*4:0*/ Soc__DOT__Rv32__DOT__Regfile_in_Ra_id;
    CData/*4:0*/ Soc__DOT__Rv32__DOT__Regfile_in_Rb_id;
    CData/*0:0*/ Soc__DOT__Rv32__DOT__Ifu_in_jmp_en;
    CData/*4:0*/ Soc__DOT__Rv32__DOT__Decoder_out_mem_re;
    CData/*4:0*/ Soc__DOT__Rv32__DOT__Memu_out_mem_re;
    CData/*0:0*/ Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_u;
    CData/*0:0*/ Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_auipc;
    CData/*0:0*/ Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lb;
    CData/*0:0*/ Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lh;
    CData/*0:0*/ Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lw;
    CData/*0:0*/ Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lbu;
    CData/*0:0*/ Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lhu;
    CData/*0:0*/ Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10;
    CData/*0:0*/ Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_12;
    CData/*0:0*/ Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15;
    CData/*0:0*/ Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_21;
    CData/*0:0*/ Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__is_j;
    CData/*0:0*/ Soc__DOT__Rv32_Memclt__DOT__is_iomem;
    CData/*0:0*/ Soc__DOT__Rv32_Memclt__DOT__is_datamem;
    CData/*7:0*/ Soc__DOT__Rv32_devport__DOT____Vlvbound_h9ac9a602__0;
    CData/*7:0*/ Soc__DOT__Rv32_devport__DOT____Vlvbound_h5e86654e__0;
    CData/*7:0*/ Soc__DOT__Rv32_devport__DOT____Vlvbound_he043ccaa__0;
    CData/*7:0*/ Soc__DOT__Rv32_devport__DOT____Vlvbound_he0447b2f__0;
    CData/*7:0*/ Soc__DOT__Rv32_devport__DOT____Vlvbound_he0442d3e__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(swi,15,0);
    VL_OUT16(led,15,0);
    IData/*31:0*/ Soc__DOT__Rv32_in_codemem_rdata;
    IData/*31:0*/ Soc__DOT__Rv32_out_codemem_ne_addr;
    IData/*31:0*/ Soc__DOT__Rv32_out_datamem_addr;
    IData/*31:0*/ Soc__DOT__Rv32_in_datamem_rdata;
    IData/*31:0*/ Soc__DOT__Rv32_out_datamem_wdata;
    IData/*31:0*/ Soc__DOT__Rv32__DOT__Ifu_out_pc;
    IData/*31:0*/ Soc__DOT__Rv32__DOT__Ifu_in_jmp_addr;
    IData/*31:0*/ Soc__DOT__Rv32__DOT__Decoder_out_imm;
    IData/*31:0*/ Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__i;
    IData/*31:0*/ Soc__DOT__Rv32__DOT__RV32I_Ifu__DOT__n_pc;
    IData/*31:0*/ Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src;
    IData/*31:0*/ Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__srl_out;
    IData/*31:0*/ Soc__DOT__Rv32_devport__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg;
    VlUnpacked<CData/*7:0*/, 4194304> Soc__DOT__Rv32_codemem__DOT__mem;
    VlUnpacked<CData/*7:0*/, 4194304> Soc__DOT__Rv32_datamem__DOT__mem;
    VlUnpacked<CData/*7:0*/, 1280> Soc__DOT__Rv32_devport__DOT__iomem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 1280>, false, CData/*7:0*/, 1> __VdlyCommitQueueSoc__DOT__Rv32_devport__DOT__iomem;
    VlTriggerVec<1> __VstlTriggered;
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
