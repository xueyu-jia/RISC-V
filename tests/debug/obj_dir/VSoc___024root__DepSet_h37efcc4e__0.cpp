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
void VSoc___024root___nba_sequent__TOP__2(VSoc___024root* vlSelf);
void VSoc___024root___nba_comb__TOP__0(VSoc___024root* vlSelf);

void VSoc___024root___eval_nba(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_nba\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSoc___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSoc___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSoc___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSoc___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__0(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__0\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v2 = 0U;
    vlSelfRef.__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v3 = 0U;
    if ((1U & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we))) {
        vlSelfRef.__VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v0 
            = (0xffU & vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data);
        vlSelfRef.__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v0 
            = (0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                            - (IData)(0x80400000U)) 
                           >> 2U));
        vlSelfRef.__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we))) {
        vlSelfRef.__VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v1 
            = (0xffU & (vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data 
                        >> 8U));
        vlSelfRef.__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v1 
            = (0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                            - (IData)(0x80400000U)) 
                           >> 2U));
        vlSelfRef.__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v1 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we))) {
        vlSelfRef.__VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v2 
            = (0xffU & (vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data 
                        >> 0x10U));
        vlSelfRef.__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v2 
            = (0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                            - (IData)(0x80400000U)) 
                           >> 2U));
        vlSelfRef.__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v2 = 1U;
    }
    if ((8U & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we))) {
        vlSelfRef.__VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v3 
            = (vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data 
               >> 0x18U);
        vlSelfRef.__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v3 
            = (0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                            - (IData)(0x80400000U)) 
                           >> 2U));
        vlSelfRef.__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v3 = 1U;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__1(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__1\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_14;
    Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_14 = 0;
    CData/*0:0*/ Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15;
    Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15 = 0;
    CData/*5:0*/ Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_17;
    Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_17 = 0;
    IData/*31:0*/ Soc__DOT__rv32__DOT__RV32I_Alu__DOT____VdfgRegularize_h81d224ff_0_1;
    Soc__DOT__rv32__DOT__RV32I_Alu__DOT____VdfgRegularize_h81d224ff_0_1 = 0;
    IData/*31:0*/ __Vdly__Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc;
    __Vdly__Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc = 0;
    CData/*0:0*/ __VdlySet__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v0;
    __VdlySet__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v0 = 0;
    IData/*31:0*/ __VdlyVal__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32;
    __VdlyVal__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 = 0;
    CData/*4:0*/ __VdlyDim0__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32;
    __VdlyDim0__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 = 0;
    CData/*0:0*/ __VdlySet__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32;
    __VdlySet__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 = 0;
    // Body
    __VdlySet__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v0 = 0U;
    __VdlySet__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 = 0U;
    __Vdly__Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc 
        = vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc;
    if (vlSelfRef.rst) {
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__i = 0x20U;
        __VdlySet__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v0 = 1U;
        vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc = 0x80000000U;
        __Vdly__Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc = 0x80000000U;
    } else {
        if ((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_19) 
              | (3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))) 
             & (0U != (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_id)))) {
            __VdlyVal__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 
                = (((- (IData)((1U & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)))) 
                    & (((- (IData)((1U & (vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                                          [(0xfffffU 
                                            & ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                                                - (IData)(0x80400000U)) 
                                               >> 2U))] 
                                          >> 7U)))) 
                        << 8U) | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Memu__DOT____VdfgRegularize_hd9a39314_0_0))) 
                   | (((- (IData)((1U & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                         >> 1U)))) 
                       & (((- (IData)((1U & (vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                                             [(0xfffffU 
                                               & ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                                                   - (IData)(0x80400000U)) 
                                                  >> 2U))] 
                                             >> 0xfU)))) 
                           << 0x10U) | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Memu__DOT____VdfgRegularize_hd9a39314_0_1))) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                            >> 2U)))) 
                          & vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                          [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                                         - (IData)(0x80400000U)) 
                                        >> 2U))]) | 
                         (((- (IData)((1U & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                             >> 3U)))) 
                           & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Memu__DOT____VdfgRegularize_hd9a39314_0_0)) 
                          | (((- (IData)((1U & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                >> 4U)))) 
                              & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Memu__DOT____VdfgRegularize_hd9a39314_0_1)) 
                             | ((- (IData)((0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)))) 
                                & vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data))))));
            __VdlyDim0__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 
                = vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_id;
            __VdlySet__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 = 1U;
        }
        if (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_en) {
            vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                = vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_addr;
            __Vdly__Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc 
                = (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_addr 
                   + ((2U & (- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__ne_is_c)))) 
                      | (4U & (- (IData)((1U & (~ (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__ne_is_c))))))));
        } else {
            vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                = vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc;
            __Vdly__Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc 
                = (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc 
                   + ((2U & (- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__ne_is_c)))) 
                      | (4U & (- (IData)((1U & (~ (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__ne_is_c))))))));
        }
    }
    vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_mem_valid 
        = (1U & (~ (IData)(vlSelfRef.rst)));
    if (__VdlySet__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v0) {
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[1U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[2U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[3U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[4U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[5U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[6U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[7U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[8U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[9U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0xaU] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0xbU] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0xcU] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0xdU] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0xeU] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0xfU] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x10U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x11U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x12U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x13U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x14U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x15U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x16U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x17U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x18U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x19U] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x1aU] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x1bU] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x1cU] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x1dU] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x1eU] = 0U;
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0x1fU] = 0U;
    }
    if (__VdlySet__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32) {
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[__VdlyDim0__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32] 
            = __VdlyVal__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32;
    }
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc 
        = __Vdly__Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc;
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7 
        = (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
           [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                          - (IData)(0x80000000U)) >> 2U))] 
           >> 0x19U);
    Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_14 
        = (0x1fU & (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                    [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                   - (IData)(0x80000000U)) 
                                  >> 2U))] >> 7U));
    Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_17 
        = (0x3fU & (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                    [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                   - (IData)(0x80000000U)) 
                                  >> 2U))] >> 0x19U));
    Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15 
        = (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
           [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                          - (IData)(0x80000000U)) >> 2U))] 
           >> 0x1fU);
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3 
        = (7U & (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                 [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                - (IData)(0x80000000U)) 
                               >> 2U))] >> 0xcU));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode 
        = (0x7fU & vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
           [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                          - (IData)(0x80000000U)) >> 2U))]);
    vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we 
        = (0xfU & ((1U & (- (IData)(((0x23U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                     & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))))) 
                   | ((3U & (- (IData)(((0x23U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                        & (1U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))))) 
                      | (- (IData)(((0x23U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                    & (2U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3))))))));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli 
        = ((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
           & (5U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10 
        = ((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
           & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13 
        = ((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
           & (5U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lb 
        = ((3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
           & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lh 
        = ((3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
           & (1U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lw 
        = ((3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
           & (2U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lbu 
        = ((3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
           & (4U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lhu 
        = ((3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
           & (5U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j 
        = ((0x6fU == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
           | (0x67U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)));
    vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id 
        = (0x1fU & ((- (IData)(((0x23U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                | ((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                   | (0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)))))) 
                    & (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                       [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                      - (IData)(0x80000000U)) 
                                     >> 2U))] >> 0x14U)));
    vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id 
        = (0x1fU & ((- (IData)(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                | ((0x23U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                   | ((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                      | ((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                         | (0x67U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)))))))) 
                    & (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                       [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                      - (IData)(0x80000000U)) 
                                     >> 2U))] >> 0xfU)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u 
        = ((0x37U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
           | (0x17U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)));
    vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re 
        = ((1U & (- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lb)))) 
           | ((2U & (- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lh)))) 
              | ((4U & (- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lw)))) 
                 | ((8U & (- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lbu)))) 
                    | (0x10U & (- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lhu))))))));
    vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_en = 
        ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j) 
         | ((((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
              & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3))) 
             & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                == vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id])) 
            | ((((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                 & (1U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3))) 
                & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                   [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                   != vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                   [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id])) 
               | ((((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                    & (4U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3))) 
                   & VL_LTS_III(32, vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id], 
                                vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id])) 
                  | ((((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                       & (5U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3))) 
                      & VL_GTS_III(32, vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                   [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id], 
                                   vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                   [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id])) 
                     | ((((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                          & (6U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3))) 
                         & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                            [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                            < vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                            [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id])) 
                        | (((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                            & (7U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3))) 
                           & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                              [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                              > vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                              [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id]))))))));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_19 
        = ((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
           | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u) 
              | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc 
        = ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u) 
           & (0x17U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)));
    vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_id 
        = ((- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_19))) 
           & (IData)(Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_14));
    vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_imm 
        = (((- (IData)(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                        | (0x67U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))))) 
            & (((- (IData)((IData)(Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15))) 
                << 0xbU) | (0x7ffU & (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                      [(0xfffffU & 
                                        ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                          - (IData)(0x80000000U)) 
                                         >> 2U))] >> 0x14U)))) 
           | (((- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u))) 
               & (((- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc))) 
                   & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc) 
                  + (0xfffff000U & vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                     [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                    - (IData)(0x80000000U)) 
                                   >> 2U))]))) | ((
                                                   (- (IData)(
                                                              (0x23U 
                                                               == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)))) 
                                                   & (((- (IData)((IData)(Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15))) 
                                                       << 0xbU) 
                                                      | (((IData)(Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_17) 
                                                          << 5U) 
                                                         | (IData)(Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_14)))) 
                                                  | ((- (IData)(
                                                                (0x6fU 
                                                                 == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)))) 
                                                     & ((IData)(4U) 
                                                        + vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc)))));
    vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
        = (vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_imm 
           + vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
           [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id]);
    vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_addr 
        = (((- (IData)((0x6fU == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)))) 
            & (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
               + (((- (IData)((IData)(Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15))) 
                   << 0x14U) | (((0xff000U & vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                  [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                                 - (IData)(0x80000000U)) 
                                                >> 2U))]) 
                                 | (0x800U & (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                              [(0xfffffU 
                                                & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                                    - (IData)(0x80000000U)) 
                                                   >> 2U))] 
                                              >> 9U))) 
                                | (0x7feU & (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                             [(0xfffffU 
                                               & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                                   - (IData)(0x80000000U)) 
                                                  >> 2U))] 
                                             >> 0x14U)))))) 
           | (((- (IData)((0x67U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)))) 
               & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                  [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                  + vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_imm)) 
              | ((- (IData)((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)))) 
                 & (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                    + (((- (IData)((IData)(Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15))) 
                        << 0xcU) | ((0x800U & (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                               [(0xfffffU 
                                                 & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                                     - (IData)(0x80000000U)) 
                                                    >> 2U))] 
                                               << 4U)) 
                                    | (((IData)(Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_17) 
                                        << 5U) | (0x1eU 
                                                  & (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                     [
                                                     (0xfffffU 
                                                      & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                                          - (IData)(0x80000000U)) 
                                                         >> 2U))] 
                                                     >> 7U)))))))));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src 
        = (vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_imm 
           | vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
           [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id]);
    vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc = 
        ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_en)
          ? vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_addr
          : vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc);
    Soc__DOT__rv32__DOT__RV32I_Alu__DOT____VdfgRegularize_h81d224ff_0_1 
        = (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
           [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
           >> (0x1fU & vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__ne_is_c 
        = (3U != (3U & vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                  [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc 
                                 - (IData)(0x80000000U)) 
                                >> 2U))]));
    vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data = (
                                                   ((- (IData)(
                                                               (((0x13U 
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
                                                                                | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j)))))))))))) 
                                                    & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                       [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                                                       + vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                   | (((- (IData)(
                                                                  ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10) 
                                                                   & (0x20U 
                                                                      == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))))) 
                                                       & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                          [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                                                          - vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                      | (((- (IData)(
                                                                     (((0x33U 
                                                                        == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                                       & ((1U 
                                                                           == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                                                          & (0U 
                                                                             == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))) 
                                                                      | ((0x13U 
                                                                          == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                                         & (1U 
                                                                            == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))))) 
                                                          & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                             [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                                                             << 
                                                             (0x1fU 
                                                              & vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src))) 
                                                         | (((- (IData)(
                                                                        (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                                                                          & (0U 
                                                                             == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))) 
                                                                         | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli)))) 
                                                             & Soc__DOT__rv32__DOT__RV32I_Alu__DOT____VdfgRegularize_h81d224ff_0_1) 
                                                            | (((- (IData)(
                                                                           (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                                                                             & (0x20U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))) 
                                                                            | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli)))) 
                                                                & Soc__DOT__rv32__DOT__RV32I_Alu__DOT____VdfgRegularize_h81d224ff_0_1) 
                                                               | (((- (IData)(
                                                                              (((0x33U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                                                & ((7U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))) 
                                                                               | ((0x13U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                                                & (7U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))))) 
                                                                   & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                      [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                                                                      & vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                                  | (((- (IData)(
                                                                                (((0x33U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                                                & ((6U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))) 
                                                                                | ((0x13U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))))) 
                                                                      & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                         [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                                                                         | vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                                     | (((- (IData)(
                                                                                (((0x33U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                                                & ((4U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))) 
                                                                                | ((0x13U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                                                & (4U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))))) 
                                                                         & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                            [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                                                                            ^ vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                                        | (((- (IData)(
                                                                                (((0x33U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                                                & ((2U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))) 
                                                                                | ((0x13U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                                                & (2U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))))) 
                                                                            & (- (IData)(
                                                                                VL_LTS_III(32, 
                                                                                vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                                [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id], vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)))) 
                                                                           | (((- (IData)(
                                                                                (((0x33U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                                                & ((3U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))) 
                                                                                | ((0x13U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                                                                                & (3U 
                                                                                == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))))) 
                                                                               & (- (IData)(
                                                                                (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                                [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                                                                                < vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)))) 
                                                                              | ((- (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we)))) 
                                                                                & vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                                [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id])))))))))));
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__2(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__2\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v0) {
        vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem[vlSelfRef.__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                [vlSelfRef.__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v0]) 
               | (IData)(vlSelfRef.__VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v1) {
        vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem[vlSelfRef.__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                [vlSelfRef.__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v2) {
        vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem[vlSelfRef.__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                [vlSelfRef.__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v2) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v3) {
        vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem[vlSelfRef.__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                [vlSelfRef.__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v3) 
                  << 0x18U));
    }
}

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__0(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__0\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Memu__DOT____VdfgRegularize_hd9a39314_0_0 
        = (0xffU & vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
           [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                          - (IData)(0x80400000U)) >> 2U))]);
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Memu__DOT____VdfgRegularize_hd9a39314_0_1 
        = (0xffffU & vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
           [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                          - (IData)(0x80400000U)) >> 2U))]);
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
            VL_FATAL_MT("../../src/Soc.v", 1, "", "NBA region did not converge.");
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
                VL_FATAL_MT("../../src/Soc.v", 1, "", "Active region did not converge.");
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
}
#endif  // VL_DEBUG
