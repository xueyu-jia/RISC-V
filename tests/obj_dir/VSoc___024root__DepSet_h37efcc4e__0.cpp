// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "VSoc__pch.h"
#include "VSoc___024root.h"

void VSoc___024root___ico_sequent__TOP__0(VSoc___024root* vlSelf);

void VSoc___024root___eval_ico(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_ico\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VSoc___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VSoc___024root___ico_sequent__TOP__0(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___ico_sequent__TOP__0\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.Soc__DOT__Rv32_out_mem_valid) {
        vlSelfRef.Soc__DOT__Rv32_mem_in_addr = vlSelfRef.Soc__DOT__Rv32_out_mem_addr;
        vlSelfRef.Soc__DOT__Rv32_mem_in_wdata = vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data;
        vlSelfRef.Soc__DOT__Rv32_mem_in_wen = (((IData)(vlSelfRef.Soc__DOT__Rv32_out_mem_valid) 
                                                & (0x400U 
                                                   > vlSelfRef.Soc__DOT__Rv32_out_mem_addr))
                                                ? (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we)
                                                : 0U);
    } else {
        vlSelfRef.Soc__DOT__Rv32_mem_in_addr = vlSelfRef.sim_in_addr;
        vlSelfRef.Soc__DOT__Rv32_mem_in_wdata = vlSelfRef.sim_in_wdata;
        vlSelfRef.Soc__DOT__Rv32_mem_in_wen = vlSelfRef.sim_in_wen;
    }
}

void VSoc___024root___eval_triggers__ico(VSoc___024root* vlSelf);

bool VSoc___024root___eval_phase__ico(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_phase__ico\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VSoc___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VSoc___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

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
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VSoc___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__0(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__0\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v2 = 0U;
    vlSelfRef.__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v3 = 0U;
    if ((1U & (IData)(vlSelfRef.Soc__DOT__Rv32_mem_in_wen))) {
        vlSelfRef.__VdlyVal__Soc__DOT__RV32_mem__DOT__mem__v0 
            = (0xffU & vlSelfRef.Soc__DOT__Rv32_mem_in_wdata);
        vlSelfRef.__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v0 
            = (0xfffU & ((vlSelfRef.Soc__DOT__Rv32_mem_in_addr 
                          - (IData)(0x80000000U)) >> 2U));
        vlSelfRef.__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.Soc__DOT__Rv32_mem_in_wen))) {
        vlSelfRef.__VdlyVal__Soc__DOT__RV32_mem__DOT__mem__v1 
            = (0xffU & (vlSelfRef.Soc__DOT__Rv32_mem_in_wdata 
                        >> 8U));
        vlSelfRef.__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v1 
            = (0xfffU & ((vlSelfRef.Soc__DOT__Rv32_mem_in_addr 
                          - (IData)(0x80000000U)) >> 2U));
        vlSelfRef.__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v1 = 1U;
    }
    if ((4U & (IData)(vlSelfRef.Soc__DOT__Rv32_mem_in_wen))) {
        vlSelfRef.__VdlyVal__Soc__DOT__RV32_mem__DOT__mem__v2 
            = (0xffU & (vlSelfRef.Soc__DOT__Rv32_mem_in_wdata 
                        >> 0x10U));
        vlSelfRef.__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v2 
            = (0xfffU & ((vlSelfRef.Soc__DOT__Rv32_mem_in_addr 
                          - (IData)(0x80000000U)) >> 2U));
        vlSelfRef.__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v2 = 1U;
    }
    if ((8U & (IData)(vlSelfRef.Soc__DOT__Rv32_mem_in_wen))) {
        vlSelfRef.__VdlyVal__Soc__DOT__RV32_mem__DOT__mem__v3 
            = (vlSelfRef.Soc__DOT__Rv32_mem_in_wdata 
               >> 0x18U);
        vlSelfRef.__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v3 
            = (0xfffU & ((vlSelfRef.Soc__DOT__Rv32_mem_in_addr 
                          - (IData)(0x80000000U)) >> 2U));
        vlSelfRef.__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v3 = 1U;
    }
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__1(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__1\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
    __Vdly__Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc 
        = vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc;
    __VdlySet__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v0 = 0U;
    __VdlySet__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 = 0U;
    if (vlSelfRef.rst) {
        vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__i = 0x20U;
        __Vdly__Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc = 0U;
        __VdlySet__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v0 = 1U;
        vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc = 0U;
    } else {
        if (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_en) {
            __Vdly__Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc 
                = ((IData)(4U) + vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_addr);
            vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                = vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_addr;
        } else {
            __Vdly__Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc 
                = ((IData)(4U) + vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc);
            vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                = vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc;
        }
        if (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_we) 
             & (0U != (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_id)))) {
            __VdlyVal__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 
                = (((- (IData)((1U & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)))) 
                    & (((- (IData)((1U & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                          >> 7U)))) 
                        << 8U) | (0xffU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                   | (((- (IData)((1U & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                         >> 1U)))) 
                       & (((- (IData)((1U & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                             >> 0xfU)))) 
                           << 0x10U) | (0xffffU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                      | (((- (IData)((1U & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                            >> 2U)))) 
                          & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata) 
                         | ((0xffU & ((- (IData)((1U 
                                                  & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                     >> 3U)))) 
                                      & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)) 
                            | ((0xffffU & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                          >> 4U)))) 
                                           & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)) 
                               | ((- (IData)((0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)))) 
                                  & vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data))))));
            __VdlyDim0__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 
                = vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_id;
            __VdlySet__Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg__v32 = 1U;
        }
    }
    vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_mem_valid = 1U;
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
}

VL_INLINE_OPT void VSoc___024root___nba_sequent__TOP__2(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_sequent__TOP__2\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_0;
    __VdfgRegularize_hd87f99a1_0_0 = 0;
    // Body
    vlSelfRef.Soc__DOT__Rv32_mem_out_rdata = vlSelfRef.Soc__DOT__RV32_mem__DOT__mem
        [(0xfffU & ((vlSelfRef.Soc__DOT__Rv32_mem_in_addr 
                     - (IData)(0x80000000U)) >> 2U))];
    if (vlSelfRef.__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v0) {
        vlSelfRef.Soc__DOT__RV32_mem__DOT__mem[vlSelfRef.__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.Soc__DOT__RV32_mem__DOT__mem
                [vlSelfRef.__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v0]) 
               | (IData)(vlSelfRef.__VdlyVal__Soc__DOT__RV32_mem__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v1) {
        vlSelfRef.Soc__DOT__RV32_mem__DOT__mem[vlSelfRef.__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.Soc__DOT__RV32_mem__DOT__mem
                [vlSelfRef.__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__Soc__DOT__RV32_mem__DOT__mem__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v2) {
        vlSelfRef.Soc__DOT__RV32_mem__DOT__mem[vlSelfRef.__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.Soc__DOT__RV32_mem__DOT__mem
                [vlSelfRef.__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__Soc__DOT__RV32_mem__DOT__mem__v2) 
                  << 0x10U));
    }
    if (vlSelfRef.__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v3) {
        vlSelfRef.Soc__DOT__RV32_mem__DOT__mem[vlSelfRef.__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.Soc__DOT__RV32_mem__DOT__mem
                [vlSelfRef.__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__Soc__DOT__RV32_mem__DOT__mem__v3) 
                  << 0x18U));
    }
    vlSelfRef.sim_out_rdata = vlSelfRef.Soc__DOT__Rv32_mem_out_rdata;
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j 
        = ((0x6fU == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)) 
           | (0x67U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13 
        = (IData)((0x33U == (0x707fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_16 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)));
    vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we 
        = (0xfU & ((1U & (- (IData)((IData)((0x23U 
                                             == (0x707fU 
                                                 & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))))) 
                   | ((3U & (- (IData)((IData)((0x1023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))))) 
                      | (- (IData)((IData)((0x2023U 
                                            == (0x707fU 
                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))))))));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_slti 
        = (IData)((0x2013U == (0x707fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_xori 
        = (IData)((0x4013U == (0x707fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_slli 
        = (IData)((0x1013U == (0x707fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_addi 
        = (IData)((0x13U == (0x707fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)));
    __VdfgRegularize_hd87f99a1_0_0 = ((0x23U == (0x7fU 
                                                 & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)) 
                                      | ((0x63U == 
                                          (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)) 
                                         | (0x33U == 
                                            (0x7fU 
                                             & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u 
        = ((0x37U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)) 
           | (0x17U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)));
    vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re 
        = ((1U & (- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_addi)))) 
           | ((2U & (- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_slli)))) 
              | ((4U & (- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_slti)))) 
                 | ((8U & (- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_xori)))) 
                    | (0x10U & (- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli))))))));
    vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id 
        = (0x1fU & ((- (IData)(((0x13U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)) 
                                | (IData)(__VdfgRegularize_hd87f99a1_0_0)))) 
                    & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                       >> 0xfU)));
    vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id 
        = (0x1fU & ((- (IData)((IData)(__VdfgRegularize_hd87f99a1_0_0))) 
                    & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                       >> 0x14U)));
    vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_we 
        = ((0x13U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)) 
           | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u) 
              | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j)));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc 
        = ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u) 
           & (0x17U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)));
    vlSelfRef.Soc__DOT__rv32__DOT__Memu_out_mem_valid 
        = ((0U != (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)) 
           | (0U != (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we)));
    vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_id 
        = (0x1fU & ((- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_we))) 
                    & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                       >> 7U)));
}

VL_INLINE_OPT void VSoc___024root___nba_comb__TOP__0(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___nba_comb__TOP__0\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ Soc__DOT__rv32__DOT__RV32I_Alu__DOT____VdfgRegularize_h81d224ff_0_0;
    Soc__DOT__rv32__DOT__RV32I_Alu__DOT____VdfgRegularize_h81d224ff_0_0 = 0;
    // Body
    vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_addr 
        = (((- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j))) 
            & (((- (IData)((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                            >> 0x1fU))) << 0x14U) | 
               (((0xff000U & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata) 
                 | (0x800U & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                              >> 9U))) | (0x7feU & 
                                          (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                           >> 0x14U))))) 
           | ((- (IData)((0x63U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))) 
              & (((- (IData)((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                              >> 0x1fU))) << 0xcU) 
                 | ((0x800U & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                               << 4U)) | ((0x7e0U & 
                                           (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                >> 7U)))))));
    vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_en = 
        (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j) 
          & (0x6fU == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
         | (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j) 
             & (0x67U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
            | (((IData)((0x63U == (0x707fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                   [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                   == vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                   [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id])) 
               | (((IData)((0x1063U == (0x707fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                   & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                      [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                      != vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                      [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id])) 
                  | (((IData)((0x4063U == (0x707fU 
                                           & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                      & VL_LTS_III(32, vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                   [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id], 
                                   vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                   [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id])) 
                     | (((IData)((0x5063U == (0x707fU 
                                              & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                         & VL_GTS_III(32, vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                      [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id], 
                                      vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                      [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id])) 
                        | (((IData)((0x6063U == (0x707fU 
                                                 & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                            & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                               [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                               < vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                               [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id])) 
                           | ((IData)((0x7063U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                              & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                 [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                                 > vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                 [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id])))))))));
    vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_imm 
        = (((- (IData)((0x13U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))) 
            & (((- (IData)((vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                            >> 0x1fU))) << 0xcU) | 
               (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                >> 0x14U))) | (((- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u))) 
                                & (((- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc))) 
                                    & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc) 
                                   + (0xfffff000U & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                               | ((- (IData)((0x23U 
                                              == (0x7fU 
                                                  & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))) 
                                  & (((- (IData)((vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0xfe0U 
                                                   & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                        >> 7U)))))));
    vlSelfRef.Soc__DOT__Rv32_out_mem_valid = ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_mem_valid) 
                                              | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Memu_out_mem_valid));
    vlSelfRef.Soc__DOT__Rv32_out_mem_addr = (((- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Memu_out_mem_valid))) 
                                              & (vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_imm 
                                                 + 
                                                 vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                 [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id])) 
                                             | ((- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_mem_valid))) 
                                                & vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc));
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src 
        = (vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_imm 
           | vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
           [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id]);
    Soc__DOT__rv32__DOT__RV32I_Alu__DOT____VdfgRegularize_h81d224ff_0_0 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                        [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id], vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src);
    vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data = (
                                                   ((- (IData)(
                                                               ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_addi) 
                                                                | (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                                                                    & (0U 
                                                                       == 
                                                                       (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                                        >> 0x19U))) 
                                                                   | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_addi) 
                                                                      | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_slli) 
                                                                         | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_slti) 
                                                                            | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_xori) 
                                                                               | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli) 
                                                                                | (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u) 
                                                                                & (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                                                                | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc))))))))))) 
                                                    & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                       [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                                                       + vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                   | (((- (IData)(
                                                                  ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                                                                   & (0x20U 
                                                                      == 
                                                                      (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                                       >> 0x19U))))) 
                                                       & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                          [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                                                          - vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                      | (((- (IData)(
                                                                     ((IData)(
                                                                              (0x1033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                                                      | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_slli)))) 
                                                          & VL_SHIFTL_III(32,32,32, 
                                                                          vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                          [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id], vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                         | (((- (IData)(
                                                                        (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_16) 
                                                                          & (0U 
                                                                             == 
                                                                             (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                                              >> 0x19U))) 
                                                                         | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli)))) 
                                                             & Soc__DOT__rv32__DOT__RV32I_Alu__DOT____VdfgRegularize_h81d224ff_0_0) 
                                                            | (((- (IData)(
                                                                           (((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_16) 
                                                                             & (0x20U 
                                                                                == 
                                                                                (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                                                >> 0x19U))) 
                                                                            | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli)))) 
                                                                & Soc__DOT__rv32__DOT__RV32I_Alu__DOT____VdfgRegularize_h81d224ff_0_0) 
                                                               | (((- (IData)(
                                                                              ((IData)(
                                                                                (0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                                                               | (IData)(
                                                                                (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))))) 
                                                                   & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                      [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                                                                      & vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                                  | (((- (IData)(
                                                                                ((IData)(
                                                                                (0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                                                                | (IData)(
                                                                                (0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))))) 
                                                                      & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                         [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                                                                         | vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                                     | (((- (IData)(
                                                                                ((IData)(
                                                                                (0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                                                                | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_xori)))) 
                                                                         & (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                            [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                                                                            ^ vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)) 
                                                                        | (((- (IData)(
                                                                                ((IData)(
                                                                                (0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                                                                | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_slti)))) 
                                                                            & (- (IData)(
                                                                                VL_LTS_III(32, 
                                                                                vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                                [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id], vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)))) 
                                                                           | (((- (IData)(
                                                                                ((IData)(
                                                                                (0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                                                                | (IData)(
                                                                                (0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))))) 
                                                                               & (- (IData)(
                                                                                (vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                                [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id] 
                                                                                < vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src)))) 
                                                                              | ((- (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we)))) 
                                                                                & vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                                                                [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id])))))))))));
    if (vlSelfRef.Soc__DOT__Rv32_out_mem_valid) {
        vlSelfRef.Soc__DOT__Rv32_mem_in_addr = vlSelfRef.Soc__DOT__Rv32_out_mem_addr;
        vlSelfRef.Soc__DOT__Rv32_mem_in_wen = (((IData)(vlSelfRef.Soc__DOT__Rv32_out_mem_valid) 
                                                & (0x400U 
                                                   > vlSelfRef.Soc__DOT__Rv32_out_mem_addr))
                                                ? (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we)
                                                : 0U);
        vlSelfRef.Soc__DOT__Rv32_mem_in_wdata = vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data;
    } else {
        vlSelfRef.Soc__DOT__Rv32_mem_in_addr = vlSelfRef.sim_in_addr;
        vlSelfRef.Soc__DOT__Rv32_mem_in_wen = vlSelfRef.sim_in_wen;
        vlSelfRef.Soc__DOT__Rv32_mem_in_wdata = vlSelfRef.sim_in_wdata;
    }
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
VL_ATTR_COLD void VSoc___024root___dump_triggers__ico(VSoc___024root* vlSelf);
#endif  // VL_DEBUG
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
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VSoc___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../src/../src/Soc.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VSoc___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VSoc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../src/../src/Soc.v", 1, "", "NBA region did not converge.");
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
                VL_FATAL_MT("../src/../src/Soc.v", 1, "", "Active region did not converge.");
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
    if (VL_UNLIKELY(((vlSelfRef.sim_in_wen & 0xf0U)))) {
        Verilated::overWidthError("sim_in_wen");}
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
