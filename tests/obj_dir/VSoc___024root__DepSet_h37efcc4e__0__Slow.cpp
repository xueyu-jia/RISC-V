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
            VL_FATAL_MT("../src/../src/Soc.v", 1, "", "Settle region did not converge.");
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
    IData/*31:0*/ Soc__DOT__rv32__DOT__RV32I_Alu__DOT____VdfgRegularize_h81d224ff_0_0;
    Soc__DOT__rv32__DOT__RV32I_Alu__DOT____VdfgRegularize_h81d224ff_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_0;
    __VdfgRegularize_hd87f99a1_0_0 = 0;
    // Body
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
    vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_id 
        = (0x1fU & ((- (IData)((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_we))) 
                    & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                       >> 7U)));
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
VL_ATTR_COLD void VSoc___024root___dump_triggers__ico(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___dump_triggers__ico\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

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
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void VSoc___024root___ctor_var_reset(VSoc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root___ctor_var_reset\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->sim_out_rdata = VL_RAND_RESET_I(32);
    vlSelf->sim_in_wen = VL_RAND_RESET_I(4);
    vlSelf->sim_in_addr = VL_RAND_RESET_I(32);
    vlSelf->sim_in_wdata = VL_RAND_RESET_I(32);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__Rv32_out_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__Rv32_out_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__Rv32_mem_in_wen = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__Rv32_mem_in_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__Rv32_mem_in_wdata = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__Rv32_mem_out_rdata = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__Regfile_in_rd_id = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__rv32__DOT__Regfile_in_rd_we = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__Regfile_in_Ra_id = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__rv32__DOT__Regfile_in_Rb_id = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__rv32__DOT__Ifu_out_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__Ifu_out_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__Ifu_in_jmp_en = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__Ifu_in_jmp_addr = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__Decoder_out_imm = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__Decoder_out_mem_we = VL_RAND_RESET_I(4);
    vlSelf->Soc__DOT__rv32__DOT__Decoder_out_mem_re = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__rv32__DOT__Alu_out_data = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__Memu_out_mem_re = VL_RAND_RESET_I(5);
    vlSelf->Soc__DOT__rv32__DOT__Memu_out_mem_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc = VL_RAND_RESET_I(32);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_addi = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_slti = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_xori = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_slli = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_16 = VL_RAND_RESET_I(1);
    vlSelf->Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->Soc__DOT__RV32_mem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdlyVal__Soc__DOT__RV32_mem__DOT__mem__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v0 = VL_RAND_RESET_I(12);
    vlSelf->__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__Soc__DOT__RV32_mem__DOT__mem__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v1 = VL_RAND_RESET_I(12);
    vlSelf->__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__Soc__DOT__RV32_mem__DOT__mem__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v2 = VL_RAND_RESET_I(12);
    vlSelf->__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__Soc__DOT__RV32_mem__DOT__mem__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__Soc__DOT__RV32_mem__DOT__mem__v3 = VL_RAND_RESET_I(12);
    vlSelf->__VdlySet__Soc__DOT__RV32_mem__DOT__mem__v3 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
