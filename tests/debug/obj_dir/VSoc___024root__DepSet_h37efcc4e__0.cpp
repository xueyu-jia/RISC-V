// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "VSoc__pch.h"
#include "VSoc___024root.h"

void VSoc___024root___eval_act(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_act\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VSoc___024root___nba_sequent__TOP__0(VSoc___024root* vlSelf);
void VSoc___024root___nba_sequent__TOP__1(VSoc___024root* vlSelf);
void VSoc___024root___nba_comb__TOP__0(VSoc___024root* vlSelf);

void VSoc___024root___eval_nba(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_nba\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSoc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSoc___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VSoc___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__0(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__0\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v0;
    __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v0 = 0;
    IData/*21:0*/ __VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v0;
    __VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v0;
    __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v1;
    __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v1 = 0;
    IData/*21:0*/ __VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v1;
    __VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v1;
    __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v2;
    __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v2 = 0;
    IData/*21:0*/ __VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v2;
    __VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v2;
    __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v3;
    __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v3 = 0;
    IData/*21:0*/ __VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v3;
    __VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v3;
    __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v3 = 0;
    // Body
    __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v0 = 0U;
    __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v1 = 0U;
    __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v2 = 0U;
    __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v3 = 0U;
    if (((IData)(vlSelfRef.Soc__DOT__Rv32_Memclt__DOT__is_datamem) 
         & (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_we))) {
        __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v0 
            = (0xffU & vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_data);
        __VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v0 
            = (0x3fffffU & vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr);
        __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.Soc__DOT__Rv32_Memclt__DOT__is_datamem) 
         & ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_we) 
            >> 1U))) {
        __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v1 
            = (0xffU & (vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_data 
                        >> 8U));
        __VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v1 
            = (0x3fffffU & ((IData)(1U) + vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr));
        __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v1 = 1U;
    }
    if (((IData)(vlSelfRef.Soc__DOT__Rv32_Memclt__DOT__is_datamem) 
         & ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_we) 
            >> 2U))) {
        __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v2 
            = (0xffU & (vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_data 
                        >> 0x10U));
        __VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v2 
            = (0x3fffffU & ((IData)(2U) + vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr));
        __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v2 = 1U;
    }
    if (((IData)(vlSelfRef.Soc__DOT__Rv32_Memclt__DOT__is_datamem) 
         & ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_we) 
            >> 3U))) {
        __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v3 
            = (vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_data 
               >> 0x18U);
        __VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v3 
            = (0x3fffffU & ((IData)(3U) + vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr));
        __VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v3 = 1U;
    }
    if (__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v0) {
        vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem[__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v0] 
            = __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v0;
    }
    if (__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v1) {
        vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem[__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v1] 
            = __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v1;
    }
    if (__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v2) {
        vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem[__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v2] 
            = __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v2;
    }
    if (__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v3) {
        vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem[__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v3] 
            = __VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v3;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__1(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__1\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_19;
    Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_19 = 0;
    CData/*0:0*/ Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_22;
    Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_22 = 0;
    IData/*31:0*/ __Vdly__Soc__DOT__Rv32__DOT__RV32I_Ifu__DOT__n_pc;
    __Vdly__Soc__DOT__Rv32__DOT__RV32I_Ifu__DOT__n_pc = 0;
    CData/*0:0*/ __VdlySet__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v0;
    __VdlySet__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v0 = 0;
    IData/*31:0*/ __VdlyVal__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v32;
    __VdlyVal__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 = 0;
    CData/*4:0*/ __VdlyDim0__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v32;
    __VdlyDim0__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 = 0;
    CData/*0:0*/ __VdlySet__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v32;
    __VdlySet__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 = 0;
    CData/*7:0*/ __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v0;
    __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v0;
    __VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v0 = 0;
    CData/*7:0*/ __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v1;
    __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v1 = 0;
    CData/*7:0*/ __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v2;
    __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v2 = 0;
    CData/*7:0*/ __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v3;
    __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v3 = 0;
    CData/*7:0*/ __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v4;
    __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v4 = 0;
    SData/*10:0*/ __VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v4;
    __VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v4 = 0;
    CData/*7:0*/ __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v5;
    __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v5 = 0;
    SData/*10:0*/ __VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v5;
    __VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v5 = 0;
    CData/*7:0*/ __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v6;
    __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v6 = 0;
    SData/*10:0*/ __VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v6;
    __VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v6 = 0;
    CData/*7:0*/ __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v7;
    __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v7 = 0;
    SData/*10:0*/ __VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v7;
    __VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v7 = 0;
    // Body
    __Vdly__Soc__DOT__Rv32__DOT__RV32I_Ifu__DOT__n_pc 
        = vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Ifu__DOT__n_pc;
    __VdlySet__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v0 = 0U;
    __VdlySet__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 = 0U;
    if (vlSelfRef.rst) {
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__i = 0x20U;
    }
    if (vlSelfRef.rst) {
        vlSelfRef.Soc__DOT__Rv32_devport__DOT__i = 0U;
        while ((0x500U > vlSelfRef.Soc__DOT__Rv32_devport__DOT__i)) {
            vlSelfRef.Soc__DOT__Rv32_devport__DOT____Vlvbound_h9ac9a602__0 = 0U;
            if (VL_LIKELY(((0x4ffU >= (0x7ffU & vlSelfRef.Soc__DOT__Rv32_devport__DOT__i))))) {
                __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v0 
                    = vlSelfRef.Soc__DOT__Rv32_devport__DOT____Vlvbound_h9ac9a602__0;
                __VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v0 
                    = (0x7ffU & vlSelfRef.Soc__DOT__Rv32_devport__DOT__i);
                vlSelfRef.__VdlyCommitQueueSoc__DOT__Rv32_devport__DOT__iomem.enqueue(__VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v0, (IData)(__VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v0));
            }
            vlSelfRef.Soc__DOT__Rv32_devport__DOT__i 
                = ((IData)(1U) + vlSelfRef.Soc__DOT__Rv32_devport__DOT__i);
        }
    } else {
        __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v1 
            = vlSelfRef.butten;
        vlSelfRef.__VdlyCommitQueueSoc__DOT__Rv32_devport__DOT__iomem.enqueue(__VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v1, 0U);
        __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v2 
            = (0xffU & (IData)(vlSelfRef.swi));
        vlSelfRef.__VdlyCommitQueueSoc__DOT__Rv32_devport__DOT__iomem.enqueue(__VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v2, 1U);
        __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v3 
            = (0xffU & ((IData)(vlSelfRef.swi) >> 8U));
        vlSelfRef.__VdlyCommitQueueSoc__DOT__Rv32_devport__DOT__iomem.enqueue(__VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v3, 2U);
        if (((0U != ((- (IData)((IData)(vlSelfRef.Soc__DOT__Rv32_Memclt__DOT__is_iomem))) 
                     & (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_we))) 
             & (0x500U <= (vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr 
                           - (IData)(0xfffff000U))))) {
            vlSelfRef.Soc__DOT__Rv32_devport__DOT____Vlvbound_h5e86654e__0 
                = (0xffU & vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_data);
            if ((0x4ffU >= (0x7ffU & vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr))) {
                __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v4 
                    = vlSelfRef.Soc__DOT__Rv32_devport__DOT____Vlvbound_h5e86654e__0;
                __VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v4 
                    = (0x7ffU & vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr);
                vlSelfRef.__VdlyCommitQueueSoc__DOT__Rv32_devport__DOT__iomem.enqueue(__VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v4, (IData)(__VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v4));
            }
            vlSelfRef.Soc__DOT__Rv32_devport__DOT____Vlvbound_h5e86654e__1 
                = (0xffU & (vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_data 
                            >> 8U));
            if ((0x4ffU >= (0x7ffU & vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr))) {
                __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v5 
                    = vlSelfRef.Soc__DOT__Rv32_devport__DOT____Vlvbound_h5e86654e__1;
                __VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v5 
                    = (0x7ffU & vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr);
                vlSelfRef.__VdlyCommitQueueSoc__DOT__Rv32_devport__DOT__iomem.enqueue(__VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v5, (IData)(__VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v5));
            }
            vlSelfRef.Soc__DOT__Rv32_devport__DOT____Vlvbound_h5e86654e__2 
                = (0xffU & (vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_data 
                            >> 0x10U));
            if ((0x4ffU >= (0x7ffU & vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr))) {
                __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v6 
                    = vlSelfRef.Soc__DOT__Rv32_devport__DOT____Vlvbound_h5e86654e__2;
                __VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v6 
                    = (0x7ffU & vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr);
                vlSelfRef.__VdlyCommitQueueSoc__DOT__Rv32_devport__DOT__iomem.enqueue(__VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v6, (IData)(__VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v6));
            }
            vlSelfRef.Soc__DOT__Rv32_devport__DOT____Vlvbound_h5e86654e__3 
                = (vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_data 
                   >> 0x18U);
            if ((0x4ffU >= (0x7ffU & vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr))) {
                __VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v7 
                    = vlSelfRef.Soc__DOT__Rv32_devport__DOT____Vlvbound_h5e86654e__3;
                __VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v7 
                    = (0x7ffU & vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr);
                vlSelfRef.__VdlyCommitQueueSoc__DOT__Rv32_devport__DOT__iomem.enqueue(__VdlyVal__Soc__DOT__Rv32_devport__DOT__iomem__v7, (IData)(__VdlyDim0__Soc__DOT__Rv32_devport__DOT__iomem__v7));
            }
        }
    }
    if (vlSelfRef.rst) {
        __VdlySet__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v0 = 1U;
    } else if ((((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_21) 
                 | ((3U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)) 
                    | (0x33U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)))) 
                & (0U != (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_rd_id)))) {
        __VdlyVal__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 
            = (((- (IData)((1U & (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_re)))) 
                & (((- (IData)((1U & (vlSelfRef.Soc__DOT__Rv32__DOT__Memu_in_mem_data 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelfRef.Soc__DOT__Rv32__DOT__Memu_in_mem_data))) 
               | (((- (IData)((1U & ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_re) 
                                     >> 1U)))) & ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.Soc__DOT__Rv32__DOT__Memu_in_mem_data 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelfRef.Soc__DOT__Rv32__DOT__Memu_in_mem_data))) 
                  | (((- (IData)((1U & ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_re) 
                                        >> 2U)))) & vlSelfRef.Soc__DOT__Rv32__DOT__Memu_in_mem_data) 
                     | ((0xffU & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_re) 
                                               >> 3U)))) 
                                  & vlSelfRef.Soc__DOT__Rv32__DOT__Memu_in_mem_data)) 
                        | ((0xffffU & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_re) 
                                                      >> 4U)))) 
                                       & vlSelfRef.Soc__DOT__Rv32__DOT__Memu_in_mem_data)) 
                           | ((- (IData)((0U == (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_re)))) 
                              & vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_data))))));
        __VdlyDim0__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 
            = vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_rd_id;
        __VdlySet__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 = 1U;
    }
    vlSelfRef.__VdlyCommitQueueSoc__DOT__Rv32_devport__DOT__iomem.commit(vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem);
    if (vlSelfRef.rst) {
        vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc = 0x80000000U;
        __Vdly__Soc__DOT__Rv32__DOT__RV32I_Ifu__DOT__n_pc = 0x80000000U;
    } else if (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_jmp_en) {
        vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc = vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_jmp_addr;
        __Vdly__Soc__DOT__Rv32__DOT__RV32I_Ifu__DOT__n_pc 
            = (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_jmp_addr 
               + ((2U & (- (IData)((3U != (3U & (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                 [(0x3fffffU 
                                                   & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc)] 
                                                 | (VL_SHIFTL_III(2,32,32, 
                                                                  vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                  [
                                                                  (0x3fffffU 
                                                                   & ((IData)(1U) 
                                                                      + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc))], 8U) 
                                                    | (VL_SHIFTL_III(2,32,32, 
                                                                     vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                     [
                                                                     (0x3fffffU 
                                                                      & ((IData)(2U) 
                                                                         + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc))], 0x10U) 
                                                       | VL_SHIFTL_III(2,32,32, 
                                                                       vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                       [
                                                                       (0x3fffffU 
                                                                        & ((IData)(3U) 
                                                                           + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc))], 0x18U))))))))) 
                  | (4U & (- (IData)((3U == (3U & (
                                                   vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                   [
                                                   (0x3fffffU 
                                                    & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc)] 
                                                   | (VL_SHIFTL_III(2,32,32, 
                                                                    vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                    [
                                                                    (0x3fffffU 
                                                                     & ((IData)(1U) 
                                                                        + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc))], 8U) 
                                                      | (VL_SHIFTL_III(2,32,32, 
                                                                       vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                       [
                                                                       (0x3fffffU 
                                                                        & ((IData)(2U) 
                                                                           + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc))], 0x10U) 
                                                         | VL_SHIFTL_III(2,32,32, 
                                                                         vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                         [
                                                                         (0x3fffffU 
                                                                          & ((IData)(3U) 
                                                                             + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc))], 0x18U)))))))))));
    } else {
        vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc = vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Ifu__DOT__n_pc;
        __Vdly__Soc__DOT__Rv32__DOT__RV32I_Ifu__DOT__n_pc 
            = (vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Ifu__DOT__n_pc 
               + ((2U & (- (IData)((3U != (3U & (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                 [(0x3fffffU 
                                                   & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc)] 
                                                 | (VL_SHIFTL_III(2,32,32, 
                                                                  vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                  [
                                                                  (0x3fffffU 
                                                                   & ((IData)(1U) 
                                                                      + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc))], 8U) 
                                                    | (VL_SHIFTL_III(2,32,32, 
                                                                     vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                     [
                                                                     (0x3fffffU 
                                                                      & ((IData)(2U) 
                                                                         + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc))], 0x10U) 
                                                       | VL_SHIFTL_III(2,32,32, 
                                                                       vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                       [
                                                                       (0x3fffffU 
                                                                        & ((IData)(3U) 
                                                                           + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc))], 0x18U))))))))) 
                  | (4U & (- (IData)((3U == (3U & (
                                                   vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                   [
                                                   (0x3fffffU 
                                                    & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc)] 
                                                   | (VL_SHIFTL_III(2,32,32, 
                                                                    vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                    [
                                                                    (0x3fffffU 
                                                                     & ((IData)(1U) 
                                                                        + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc))], 8U) 
                                                      | (VL_SHIFTL_III(2,32,32, 
                                                                       vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                       [
                                                                       (0x3fffffU 
                                                                        & ((IData)(2U) 
                                                                           + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc))], 0x10U) 
                                                         | VL_SHIFTL_III(2,32,32, 
                                                                         vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                         [
                                                                         (0x3fffffU 
                                                                          & ((IData)(3U) 
                                                                             + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc))], 0x18U)))))))))));
    }
    if (__VdlySet__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v0) {
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[1U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[2U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[3U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[4U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[5U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[6U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[7U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[8U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[9U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0xaU] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0xbU] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0xcU] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0xdU] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0xeU] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0xfU] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x10U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x11U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x12U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x13U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x14U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x15U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x16U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x17U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x18U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x19U] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x1aU] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x1bU] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x1cU] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x1dU] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x1eU] = 0U;
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0x1fU] = 0U;
    }
    if (__VdlySet__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v32) {
        vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[__VdlyDim0__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v32] 
            = __VdlyVal__Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg__v32;
    }
    vlSelfRef.led = ((vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                      [0x101U] << 8U) | vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                     [0x100U]);
    vlSelfRef.seg0_cs = (0xfU & vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                         [0x102U]);
    vlSelfRef.seg0_data = vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
        [0x103U];
    vlSelfRef.seg1_cs = (0xfU & vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                         [0x104U]);
    vlSelfRef.seg1_data = vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
        [0x105U];
    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Ifu__DOT__n_pc 
        = __Vdly__Soc__DOT__Rv32__DOT__RV32I_Ifu__DOT__n_pc;
    vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins = (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                 [(0x3fffffU 
                                                   & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc)] 
                                                 | (VL_SHIFTL_III(32,32,32, 
                                                                  vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                  [
                                                                  (0x3fffffU 
                                                                   & ((IData)(1U) 
                                                                      + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc))], 8U) 
                                                    | (VL_SHIFTL_III(32,32,32, 
                                                                     vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                     [
                                                                     (0x3fffffU 
                                                                      & ((IData)(2U) 
                                                                         + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc))], 0x10U) 
                                                       | VL_SHIFTL_III(32,32,32, 
                                                                       vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                       [
                                                                       (0x3fffffU 
                                                                        & ((IData)(3U) 
                                                                           + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc))], 0x18U))));
    vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_we 
        = (0xfU & ((1U & (- (IData)((IData)((0x23U 
                                             == (0x707fU 
                                                 & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)))))) 
                   | ((3U & (- (IData)((IData)((0x1023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)))))) 
                      | (- (IData)((IData)((0x2023U 
                                            == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))))))));
    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)));
    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_12 
        = (IData)((0x33U == (0x707fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)));
    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)));
    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lb 
        = (IData)((3U == (0x707fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)));
    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lh 
        = (IData)((0x1003U == (0x707fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)));
    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lw 
        = (IData)((0x2003U == (0x707fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)));
    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)));
    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)));
    Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_19 
        = (((- (IData)((vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                        >> 0x1fU))) << 0xbU) | (0x7ffU 
                                                & (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                                   >> 0x14U)));
    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__is_j 
        = ((0x6fU == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)) 
           | (0x67U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)));
    Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_22 
        = ((0x63U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)) 
           | (0x33U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)));
    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_u 
        = ((0x37U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)) 
           | (0x17U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)));
    vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_re 
        = ((1U & (- (IData)((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lb)))) 
           | ((2U & (- (IData)((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lh)))) 
              | ((4U & (- (IData)((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lw)))) 
                 | ((8U & (- (IData)((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lbu)))) 
                    | (0x10U & (- (IData)((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lhu))))))));
    vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Rb_id 
        = (0x1fU & ((- (IData)(((0x23U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)) 
                                | (IData)(Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_22)))) 
                    & (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                       >> 0x14U)));
    vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id 
        = (0x1fU & ((- (IData)(((0x13U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)) 
                                | ((0x23U == (0x7fU 
                                              & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)) 
                                   | ((IData)(Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_22) 
                                      | ((0x67U == 
                                          (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)) 
                                         | (3U == (0x7fU 
                                                   & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)))))))) 
                    & (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                       >> 0xfU)));
    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_21 
        = ((0x13U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)) 
           | ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_u) 
              | (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__is_j)));
    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_auipc 
        = ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_u) 
           & (0x17U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)));
    vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_jmp_en = 
        ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__is_j) 
         | (((IData)((0x63U == (0x707fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))) 
             & (vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                == vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Rb_id])) 
            | (((IData)((0x1063U == (0x707fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))) 
                & (vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                   [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                   != vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                   [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Rb_id])) 
               | (((IData)((0x4063U == (0x707fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))) 
                   & VL_LTS_III(32, vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id], 
                                vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Rb_id])) 
                  | (((IData)((0x5063U == (0x707fU 
                                           & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))) 
                      & VL_GTES_III(32, vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                    [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id], 
                                    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                    [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Rb_id])) 
                     | (((IData)((0x6063U == (0x707fU 
                                              & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))) 
                         & (vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                            [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                            < vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                            [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Rb_id])) 
                        | ((IData)((0x7063U == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))) 
                           & (vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                              [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                              >= vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                              [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Rb_id]))))))));
    vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_jmp_addr 
        = (((- (IData)((0x6fU == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)))) 
            & (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc 
               + (((- (IData)((vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                               >> 0x1fU))) << 0x14U) 
                  | (((0xff000U & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins) 
                      | (0x800U & (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                   >> 9U))) | (0x7feU 
                                               & (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                                  >> 0x14U)))))) 
           | ((((- (IData)((0x67U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)))) 
                << 2U) & (vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                          [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                          + Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_19)) 
              | ((- (IData)((0x63U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)))) 
                 & (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc 
                    + (((- (IData)((vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                                      >> 7U)))))))));
    vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_rd_id 
        = (0x1fU & ((- (IData)(((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_21) 
                                | ((0x33U == (0x7fU 
                                              & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)) 
                                   | (3U == (0x7fU 
                                             & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)))))) 
                    & (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                       >> 7U)));
    vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_imm 
        = (((- (IData)(((0x13U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)) 
                        | (3U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))))) 
            & Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_19) 
           | (((- (IData)((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_u))) 
               & (((- (IData)((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_auipc))) 
                   & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc) 
                  + (0xfffff000U & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))) 
              | (((- (IData)((0x23U == (0x7fU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)))) 
                  & (((- (IData)((vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                  >> 0x1fU))) << 0xbU) 
                     | ((0x7e0U & (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                                    >> 7U))))) 
                 | ((- (IData)((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__is_j))) 
                    & ((IData)(4U) + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc)))));
    vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_ne_out_pc = 
        ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_jmp_en)
          ? vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_jmp_addr
          : vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Ifu__DOT__n_pc);
    vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr 
        = (vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_imm 
           + vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
           [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id]);
    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src 
        = (vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_imm 
           | vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
           [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Rb_id]);
    vlSelfRef.Soc__DOT__Rv32_Memclt__DOT__is_iomem 
        = ((0xfffff000U <= vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr) 
           & (0xfffff500U > vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr));
    vlSelfRef.Soc__DOT__Rv32_Memclt__DOT__is_datamem 
        = ((0x80400000U <= vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr) 
           & (0x80800000U > vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr));
    vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__srl_out 
        = (vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
           [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
           >> (0x1fU & vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src));
    vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_data = (
                                                   ((- (IData)(
                                                               ((IData)(
                                                                        (0x13U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))) 
                                                                | (((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_12) 
                                                                    & (0U 
                                                                       == 
                                                                       (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                                                        >> 0x19U))) 
                                                                   | ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lb) 
                                                                      | ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lh) 
                                                                         | ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lw) 
                                                                            | ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lbu) 
                                                                               | ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lhu) 
                                                                                | (((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_u) 
                                                                                & (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))) 
                                                                                | (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_auipc))))))))))) 
                                                    & (vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                       [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                                       + vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                   | (((- (IData)(
                                                                  ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_12) 
                                                                   & (0x20U 
                                                                      == 
                                                                      (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                                                       >> 0x19U))))) 
                                                       & (vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                          [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                                          - vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                      | (((- (IData)(
                                                                     ((IData)(
                                                                              (0x1033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))) 
                                                                      | (IData)(
                                                                                (0x1013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)))))) 
                                                          & (vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                             [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                                             << 
                                                             (0x1fU 
                                                              & vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src))) 
                                                         | (((- (IData)(
                                                                        (((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15) 
                                                                          & (0U 
                                                                             == 
                                                                             (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                                                              >> 0x19U))) 
                                                                         | ((~ 
                                                                             (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                                                              >> 0x1eU)) 
                                                                            & (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10))))) 
                                                             & vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__srl_out) 
                                                            | (((- (IData)(
                                                                           (((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15) 
                                                                             & (0x20U 
                                                                                == 
                                                                                (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                                                                >> 0x19U))) 
                                                                            | ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10) 
                                                                               & (vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins 
                                                                                >> 0x1eU))))) 
                                                                & (vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__srl_out 
                                                                   | ((vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                       [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                                                       >> 0x1fU)
                                                                       ? 
                                                                      (~ 
                                                                       (0xffffffffU 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)))
                                                                       : 0U))) 
                                                               | (((- (IData)(
                                                                              ((IData)(
                                                                                (0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))) 
                                                                               | (IData)(
                                                                                (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)))))) 
                                                                   & (vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                      [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                                                      & vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                                  | (((- (IData)(
                                                                                ((IData)(
                                                                                (0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))) 
                                                                                | (IData)(
                                                                                (0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)))))) 
                                                                      & (vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                         [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                                                         | vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                                     | (((- (IData)(
                                                                                ((IData)(
                                                                                (0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))) 
                                                                                | (IData)(
                                                                                (0x4013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)))))) 
                                                                         & (vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                            [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                                                            ^ vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                                        | (((- (IData)(
                                                                                ((IData)(
                                                                                (0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))) 
                                                                                | (IData)(
                                                                                (0x2013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)))))) 
                                                                            & VL_LTS_III(32, 
                                                                                vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                                [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id], vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                                           | (((- (IData)(
                                                                                ((IData)(
                                                                                (0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins))) 
                                                                                | (IData)(
                                                                                (0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_ins)))))) 
                                                                               & (vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                                [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                                                                < vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                                              | (((- (IData)((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__is_j))) 
                                                                                & vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src) 
                                                                                | ((- (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_we)))) 
                                                                                & vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                                [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Rb_id]))))))))))));
}

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__0(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__0\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Soc__DOT__Rv32__DOT__Memu_in_mem_data 
        = (((- (IData)((IData)(vlSelfRef.Soc__DOT__Rv32_Memclt__DOT__is_iomem))) 
            & (((0x4ffU >= (0x7ffU & vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr))
                 ? vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                [(0x7ffU & vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr)]
                 : 0U) | (VL_SHIFTL_III(32,32,32, (
                                                   (0x4ffU 
                                                    >= 
                                                    (0x7ffU 
                                                     & ((IData)(1U) 
                                                        + vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr)))
                                                    ? 
                                                   vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                                                   [
                                                   (0x7ffU 
                                                    & ((IData)(1U) 
                                                       + vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr))]
                                                    : 0U), 8U) 
                          | (VL_SHIFTL_III(32,32,32, 
                                           ((0x4ffU 
                                             >= (0x7ffU 
                                                 & ((IData)(2U) 
                                                    + vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr)))
                                             ? vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                                            [(0x7ffU 
                                              & ((IData)(2U) 
                                                 + vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr))]
                                             : 0U), 0x10U) 
                             | VL_SHIFTL_III(32,32,32, 
                                             ((0x4ffU 
                                               >= (0x7ffU 
                                                   & ((IData)(3U) 
                                                      + vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr)))
                                               ? vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                                              [(0x7ffU 
                                                & ((IData)(3U) 
                                                   + vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr))]
                                               : 0U), 0x18U))))) 
           | ((- (IData)((IData)(vlSelfRef.Soc__DOT__Rv32_Memclt__DOT__is_datamem))) 
              & (vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                 [(0x3fffffU & vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr)] 
                 | (VL_SHIFTL_III(32,32,32, vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                                  [(0x3fffffU & ((IData)(1U) 
                                                 + vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr))], 8U) 
                    | (VL_SHIFTL_III(32,32,32, vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                                     [(0x3fffffU & 
                                       ((IData)(2U) 
                                        + vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr))], 0x10U) 
                       | VL_SHIFTL_III(32,32,32, vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                                       [(0x3fffffU 
                                         & ((IData)(3U) 
                                            + vlSelfRef.Soc__DOT__Rv32__DOT__Alu_out_mem_addr))], 0x18U))))));
}

void VSoc___024root___eval_triggers__act(VSoc___024root* vlSelf);

bool VSoc___024root___eval_phase__act(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_phase__act\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VSoc___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VSoc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VSoc___024root___eval_phase__nba(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_phase__nba\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VSoc___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__nba(VSoc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__act(VSoc___024root* vlSelf);
#endif  // VL_DEBUG

void VSoc___024root___eval(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VSoc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../src/Mem/../../src/Soc.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VSoc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../src/Mem/../../src/Soc.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VSoc___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VSoc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VSoc___024root___eval_debug_assertions(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_debug_assertions\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.butten & 0xe0U)))) {
        Verilated::overWidthError("butten");}
}
#endif  // VL_DEBUG
