// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSoc.h for the primary calling header

#include "VSoc__pch.h"
#include "VSoc___024root.h"

VL_ATTR_COLD void VSoc___024root___eval_static(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_static\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VSoc___024root___eval_initial(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_initial\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void VSoc___024root___eval_final(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_final\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__stl(VSoc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSoc___024root___eval_phase__stl(VSoc___024root* vlSelf);

VL_ATTR_COLD void VSoc___024root___eval_settle(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_settle\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VSoc___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../src/Soc.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSoc___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__stl(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___dump_triggers__stl\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSoc___024root___stl_sequent__TOP__0(VSoc___024root* vlSelf);
VL_ATTR_COLD void VSoc___024root____Vm_traceActivitySetAll(VSoc___024root* vlSelf);

VL_ATTR_COLD void VSoc___024root___eval_stl(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_stl\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VSoc___024root___stl_sequent__TOP__0(vlSelf);
        VSoc___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VSoc___024root___stl_sequent__TOP__0(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___stl_sequent__TOP__0\n"); );
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
    // Body
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
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Memu__DOT____VdfgRegularize_hd9a39314_0_0 
        = (0xffU & vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
           [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                          - (IData)(0x80400000U)) >> 2U))]);
    vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Memu__DOT____VdfgRegularize_hd9a39314_0_1 
        = (0xffffU & vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
           [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                          - (IData)(0x80400000U)) >> 2U))]);
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

VL_ATTR_COLD void VSoc___024root___eval_triggers__stl(VSoc___024root* vlSelf);

VL_ATTR_COLD bool VSoc___024root___eval_phase__stl(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___eval_phase__stl\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSoc___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VSoc___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__act(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___dump_triggers__act\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSoc___024root___dump_triggers__nba(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___dump_triggers__nba\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSoc___024root____Vm_traceActivitySetAll(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root____Vm_traceActivitySetAll\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void VSoc___024root___ctor_var_reset(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___ctor_var_reset\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__Regfile_in_rd_id = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__rv32__DOT__Regfile_in_Ra_id = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__rv32__DOT__Regfile_in_Rb_id = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__rv32__DOT__Ifu_out_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__Ifu_out_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__Ifu_in_jmp_en = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__Ifu_in_jmp_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__Ifu_ne_out_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__Decoder_out_imm = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__Decoder_out_mem_we = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__rv32__DOT__Decoder_out_mem_re = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__rv32__DOT__Alu_out_data = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__Alu_out_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__Memu_out_mem_re = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__ne_is_c = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3 = VL_RAND_RESET_I(3);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7 = VL_RAND_RESET_I(7);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lb = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lh = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lw = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lbu = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lhu = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_19 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Memu__DOT____VdfgRegularize_hd9a39314_0_0 = VL_RAND_RESET_I(8);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Memu__DOT____VdfgRegularize_hd9a39314_0_1 = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->Soc__DOT__Rv32_codemem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->Soc__DOT__Rv32_datamem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v0 = VL_RAND_RESET_I(20);
    vlSelf->__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v1 = VL_RAND_RESET_I(20);
    vlSelf->__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v2 = VL_RAND_RESET_I(20);
    vlSelf->__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__Soc__DOT__Rv32_datamem__DOT__mem__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__Soc__DOT__Rv32_datamem__DOT__mem__v3 = VL_RAND_RESET_I(20);
    vlSelf->__VdlySet__Soc__DOT__Rv32_datamem__DOT__mem__v3 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
