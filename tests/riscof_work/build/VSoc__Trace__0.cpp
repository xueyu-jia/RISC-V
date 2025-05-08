// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSoc__Syms.h"


void VSoc___024root__trace_chg_0_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSoc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_chg_0\n"); );
    // Init
    VSoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSoc___024root*>(voidSelf);
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSoc___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VSoc___024root__trace_chg_0_sub_0(VSoc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_chg_0_sub_0\n"); );
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,((vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                                [(0x3fffffU & vlSelfRef.Soc__DOT__Rv32_out_datamem_addr)] 
                                | (VL_SHIFTL_III(32,32,32, 
                                                 vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                                                 [(0x3fffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr))], 8U) 
                                   | (VL_SHIFTL_III(32,32,32, 
                                                    vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                                                    [
                                                    (0x3fffffU 
                                                     & ((IData)(2U) 
                                                        + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr))], 0x10U) 
                                      | VL_SHIFTL_III(32,32,32, 
                                                      vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                                                      [
                                                      (0x3fffffU 
                                                       & ((IData)(3U) 
                                                          + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr))], 0x18U))))),32);
        bufp->chgIData(oldp+1,(vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                               [(0x3fffffU & vlSelfRef.Soc__DOT__Rv32_out_datamem_addr)]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                               [(0x3fffffU & ((IData)(1U) 
                                              + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr))]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                               [(0x3fffffU & ((IData)(2U) 
                                              + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr))]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                               [(0x3fffffU & ((IData)(3U) 
                                              + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr))]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+5,(vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc),32);
        bufp->chgIData(oldp+6,(vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata),32);
        bufp->chgIData(oldp+7,(vlSelfRef.Soc__DOT__Rv32_out_codemem_ne_addr),32);
        bufp->chgIData(oldp+8,((vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                [(0x3fffffU & vlSelfRef.Soc__DOT__Rv32_out_codemem_ne_addr)] 
                                | (VL_SHIFTL_III(32,32,32, 
                                                 vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                 [(0x3fffffU 
                                                   & ((IData)(1U) 
                                                      + vlSelfRef.Soc__DOT__Rv32_out_codemem_ne_addr))], 8U) 
                                   | (VL_SHIFTL_III(32,32,32, 
                                                    vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                    [
                                                    (0x3fffffU 
                                                     & ((IData)(2U) 
                                                        + vlSelfRef.Soc__DOT__Rv32_out_codemem_ne_addr))], 0x10U) 
                                      | VL_SHIFTL_III(32,32,32, 
                                                      vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                      [
                                                      (0x3fffffU 
                                                       & ((IData)(3U) 
                                                          + vlSelfRef.Soc__DOT__Rv32_out_codemem_ne_addr))], 0x18U))))),32);
        bufp->chgIData(oldp+9,(vlSelfRef.Soc__DOT__Rv32_out_datamem_addr),32);
        bufp->chgIData(oldp+10,(vlSelfRef.Soc__DOT__Rv32_in_datamem_rdata),32);
        bufp->chgIData(oldp+11,(vlSelfRef.Soc__DOT__Rv32_out_datamem_wdata),32);
        bufp->chgCData(oldp+12,(vlSelfRef.Soc__DOT__Rv32_out_datamem_wen),4);
        bufp->chgIData(oldp+13,((vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc 
                                 - (IData)(0x80000000U))),32);
        bufp->chgIData(oldp+14,((vlSelfRef.Soc__DOT__Rv32_out_codemem_ne_addr 
                                 - (IData)(0x80000000U))),32);
        bufp->chgIData(oldp+15,((vlSelfRef.Soc__DOT__Rv32_out_datamem_addr 
                                 - (IData)(0x80400000U))),32);
        bufp->chgCData(oldp+16,(((- (IData)((IData)(vlSelfRef.Soc__DOT__Rv32_Memclt__DOT__is_datamem))) 
                                 & (IData)(vlSelfRef.Soc__DOT__Rv32_out_datamem_wen))),4);
        bufp->chgIData(oldp+17,((vlSelfRef.Soc__DOT__Rv32_out_datamem_addr 
                                 - (IData)(0xfffff000U))),32);
        bufp->chgIData(oldp+18,((((0x4ffU >= (0x7ffU 
                                              & vlSelfRef.Soc__DOT__Rv32_out_datamem_addr))
                                   ? vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                                  [(0x7ffU & vlSelfRef.Soc__DOT__Rv32_out_datamem_addr)]
                                   : 0U) | (VL_SHIFTL_III(32,32,32, 
                                                          ((0x4ffU 
                                                            >= 
                                                            (0x7ffU 
                                                             & ((IData)(1U) 
                                                                + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr)))
                                                            ? 
                                                           vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                                                           [
                                                           (0x7ffU 
                                                            & ((IData)(1U) 
                                                               + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr))]
                                                            : 0U), 8U) 
                                            | (VL_SHIFTL_III(32,32,32, 
                                                             ((0x4ffU 
                                                               >= 
                                                               (0x7ffU 
                                                                & ((IData)(2U) 
                                                                   + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr)))
                                                               ? 
                                                              vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                                                              [
                                                              (0x7ffU 
                                                               & ((IData)(2U) 
                                                                  + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr))]
                                                               : 0U), 0x10U) 
                                               | VL_SHIFTL_III(32,32,32, 
                                                               ((0x4ffU 
                                                                 >= 
                                                                 (0x7ffU 
                                                                  & ((IData)(3U) 
                                                                     + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr)))
                                                                 ? 
                                                                vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                                                                [
                                                                (0x7ffU 
                                                                 & ((IData)(3U) 
                                                                    + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr))]
                                                                 : 0U), 0x18U))))),32);
        bufp->chgCData(oldp+19,(((- (IData)((IData)(vlSelfRef.Soc__DOT__Rv32_Memclt__DOT__is_iomem))) 
                                 & (IData)(vlSelfRef.Soc__DOT__Rv32_out_datamem_wen))),4);
        bufp->chgCData(oldp+20,(vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                                [0x103U]),8);
        bufp->chgCData(oldp+21,(vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                                [0x105U]),8);
        bufp->chgCData(oldp+22,(vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_rd_id),5);
        bufp->chgBit(oldp+23,(((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_21) 
                               | ((3U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)) 
                                  | (0x33U == (0x7fU 
                                               & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))))));
        bufp->chgIData(oldp+24,((((- (IData)((1U & (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_re)))) 
                                  & (((- (IData)((1U 
                                                  & (vlSelfRef.Soc__DOT__Rv32_in_datamem_rdata 
                                                     >> 7U)))) 
                                      << 8U) | (0xffU 
                                                & vlSelfRef.Soc__DOT__Rv32_in_datamem_rdata))) 
                                 | (((- (IData)((1U 
                                                 & ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_re) 
                                                    >> 1U)))) 
                                     & (((- (IData)(
                                                    (1U 
                                                     & (vlSelfRef.Soc__DOT__Rv32_in_datamem_rdata 
                                                        >> 0xfU)))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & vlSelfRef.Soc__DOT__Rv32_in_datamem_rdata))) 
                                    | (((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_re) 
                                                       >> 2U)))) 
                                        & vlSelfRef.Soc__DOT__Rv32_in_datamem_rdata) 
                                       | ((0xffU & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_re) 
                                                           >> 3U)))) 
                                            & vlSelfRef.Soc__DOT__Rv32_in_datamem_rdata)) 
                                          | ((0xffffU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_re) 
                                                                >> 4U)))) 
                                                 & vlSelfRef.Soc__DOT__Rv32_in_datamem_rdata)) 
                                             | ((- (IData)(
                                                           (0U 
                                                            == (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_re)))) 
                                                & vlSelfRef.Soc__DOT__Rv32_out_datamem_wdata))))))),32);
        bufp->chgCData(oldp+25,(vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id),5);
        bufp->chgCData(oldp+26,(vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Rb_id),5);
        bufp->chgIData(oldp+27,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Rb_id]),32);
        bufp->chgBit(oldp+29,(vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_jmp_en));
        bufp->chgIData(oldp+30,(vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_in_jmp_addr),32);
        bufp->chgIData(oldp+31,(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_imm),32);
        bufp->chgSData(oldp+32,((((((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__is_j) 
                                    << 0xaU) | ((((IData)(
                                                          (0x3033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                                                  | (IData)(
                                                            (0x3013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))) 
                                                 << 9U) 
                                                | (((IData)(
                                                            (0x2033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                                                    | (IData)(
                                                              (0x2013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))) 
                                                   << 8U))) 
                                  | ((((IData)((0x4033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                                       | (IData)((0x4013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))) 
                                      << 7U) | ((((IData)(
                                                          (0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                                                  | (IData)(
                                                            (0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))) 
                                                 << 6U) 
                                                | (((IData)(
                                                            (0x7033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                                                    | (IData)(
                                                              (0x7013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))) 
                                                   << 5U)))) 
                                 | ((((((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15) 
                                        & (0x20U == 
                                           (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                            >> 0x19U))) 
                                       << 4U) | (0x30U 
                                                 & (((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10) 
                                                     << 4U) 
                                                    & (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                                       >> 0x1aU)))) 
                                     | (((((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15) 
                                           & (0U == 
                                              (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                               >> 0x19U))) 
                                          | ((~ (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                                 >> 0x1eU)) 
                                             & (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10))) 
                                         << 3U) | (
                                                   ((IData)(
                                                            (0x1033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                                                    | (IData)(
                                                              (0x1013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))) 
                                                   << 2U))) 
                                    | ((((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_12) 
                                         & (0x20U == 
                                            (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                             >> 0x19U))) 
                                        << 1U) | ((IData)(
                                                          (0x13U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                                                  | (((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_12) 
                                                      & (0U 
                                                         == 
                                                         (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
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
                                                                            & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                                                                       | (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_auipc))))))))))))),11);
        bufp->chgCData(oldp+33,(vlSelfRef.Soc__DOT__Rv32__DOT__Decoder_out_mem_re),5);
        bufp->chgIData(oldp+34,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src),32);
        bufp->chgBit(oldp+35,(((IData)((0x13U == (0x707fU 
                                                  & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                               | (((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_12) 
                                   & (0U == (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
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
                                                         & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                                                    | (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_auipc)))))))))));
        bufp->chgBit(oldp+36,(((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_12) 
                               & (0x20U == (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                            >> 0x19U)))));
        bufp->chgBit(oldp+37,(((IData)((0x1033U == 
                                        (0xfe00707fU 
                                         & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                               | (IData)((0x1013U == 
                                          (0x707fU 
                                           & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))))));
        bufp->chgBit(oldp+38,((((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15) 
                                & (0U == (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                          >> 0x19U))) 
                               | ((~ (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                      >> 0x1eU)) & (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10)))));
        bufp->chgBit(oldp+39,((((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15) 
                                & (0x20U == (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                             >> 0x19U))) 
                               | ((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10) 
                                  & (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                     >> 0x1eU)))));
        bufp->chgBit(oldp+40,(((IData)((0x7033U == 
                                        (0xfe00707fU 
                                         & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                               | (IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))))));
        bufp->chgBit(oldp+41,(((IData)((0x6033U == 
                                        (0xfe00707fU 
                                         & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                               | (IData)((0x6013U == 
                                          (0x707fU 
                                           & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))))));
        bufp->chgBit(oldp+42,(((IData)((0x4033U == 
                                        (0xfe00707fU 
                                         & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                               | (IData)((0x4013U == 
                                          (0x707fU 
                                           & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))))));
        bufp->chgBit(oldp+43,(((IData)((0x2033U == 
                                        (0xfe00707fU 
                                         & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                               | (IData)((0x2013U == 
                                          (0x707fU 
                                           & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))))));
        bufp->chgBit(oldp+44,(((IData)((0x3033U == 
                                        (0xfe00707fU 
                                         & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))) 
                               | (IData)((0x3013U == 
                                          (0x707fU 
                                           & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))))));
        bufp->chgBit(oldp+45,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__is_j));
        bufp->chgBit(oldp+46,((0U != (IData)(vlSelfRef.Soc__DOT__Rv32_out_datamem_wen))));
        bufp->chgIData(oldp+47,((vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                 [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                 + vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)),32);
        bufp->chgIData(oldp+48,((vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                 [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                 - vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)),32);
        bufp->chgIData(oldp+49,((vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                 [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                 << (0x1fU & vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src))),32);
        bufp->chgIData(oldp+50,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__srl_out),32);
        bufp->chgIData(oldp+51,((vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__srl_out 
                                 | ((vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                     [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                     >> 0x1fU) ? (~ 
                                                  (0xffffffffU 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)))
                                     : 0U))),32);
        bufp->chgIData(oldp+52,((vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                 [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                 & vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)),32);
        bufp->chgIData(oldp+53,((vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                 [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                 | vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)),32);
        bufp->chgIData(oldp+54,((vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                 [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                 ^ vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)),32);
        bufp->chgIData(oldp+55,(VL_LTS_III(32, vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                           [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id], vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)),32);
        bufp->chgIData(oldp+56,((vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg
                                 [vlSelfRef.Soc__DOT__Rv32__DOT__Regfile_in_Ra_id] 
                                 < vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Alu__DOT__alu_src)),32);
        bufp->chgCData(oldp+57,((0x7fU & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)),7);
        bufp->chgCData(oldp+58,((7U & (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+59,((vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                 >> 0x19U)),7);
        bufp->chgBit(oldp+60,((0x13U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))));
        bufp->chgBit(oldp+61,((3U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))));
        bufp->chgBit(oldp+62,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_u));
        bufp->chgBit(oldp+63,((0x63U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))));
        bufp->chgBit(oldp+64,((0x23U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))));
        bufp->chgBit(oldp+65,((0x33U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))));
        bufp->chgBit(oldp+66,((IData)((0x13U == (0x707fU 
                                                 & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+67,((IData)((0x2013U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+68,((IData)((0x3013U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+69,((IData)((0x4013U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+70,((IData)((0x6013U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+71,((IData)((0x7013U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+72,((IData)((0x1013U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+73,(((~ (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                   >> 0x1eU)) & (IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10))));
        bufp->chgBit(oldp+74,(((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10) 
                               & (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                  >> 0x1eU))));
        bufp->chgBit(oldp+75,(((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_12) 
                               & (0U == (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+76,((IData)((0x1033U == (0xfe00707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+77,((IData)((0x2033U == (0xfe00707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+78,((IData)((0x3033U == (0xfe00707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+79,((IData)((0x4033U == (0xfe00707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+80,(((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15) 
                               & (0U == (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+81,(((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_15) 
                               & (0x20U == (vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata 
                                            >> 0x19U)))));
        bufp->chgBit(oldp+82,((IData)((0x6033U == (0xfe00707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+83,((IData)((0x7033U == (0xfe00707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+84,(((IData)(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_u) 
                               & (0x37U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+85,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_auipc));
        bufp->chgBit(oldp+86,((IData)((0x63U == (0x707fU 
                                                 & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+87,((IData)((0x1063U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+88,((IData)((0x4063U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+89,((IData)((0x5063U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+90,((IData)((0x6063U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+91,((IData)((0x7063U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+92,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lb));
        bufp->chgBit(oldp+93,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lh));
        bufp->chgBit(oldp+94,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lw));
        bufp->chgBit(oldp+95,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lbu));
        bufp->chgBit(oldp+96,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Decoder__DOT__is_lhu));
        bufp->chgBit(oldp+97,((IData)((0x23U == (0x707fU 
                                                 & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+98,((IData)((0x1023U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+99,((IData)((0x2023U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata)))));
        bufp->chgBit(oldp+100,((0x6fU == (0x7fU & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))));
        bufp->chgBit(oldp+101,((0x67U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_in_codemem_rdata))));
        bufp->chgIData(oldp+102,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Ifu__DOT__n_pc),32);
        bufp->chgBit(oldp+103,((3U != (3U & (vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                             [(0x3fffffU 
                                               & vlSelfRef.Soc__DOT__Rv32_out_codemem_ne_addr)] 
                                             | (VL_SHIFTL_III(2,32,32, 
                                                              vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                              [
                                                              (0x3fffffU 
                                                               & ((IData)(1U) 
                                                                  + vlSelfRef.Soc__DOT__Rv32_out_codemem_ne_addr))], 8U) 
                                                | (VL_SHIFTL_III(2,32,32, 
                                                                 vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                 [
                                                                 (0x3fffffU 
                                                                  & ((IData)(2U) 
                                                                     + vlSelfRef.Soc__DOT__Rv32_out_codemem_ne_addr))], 0x10U) 
                                                   | VL_SHIFTL_III(2,32,32, 
                                                                   vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                                                   [
                                                                   (0x3fffffU 
                                                                    & ((IData)(3U) 
                                                                       + vlSelfRef.Soc__DOT__Rv32_out_codemem_ne_addr))], 0x18U))))))));
        bufp->chgIData(oldp+104,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[0]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[1]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[2]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[3]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[4]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[5]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[6]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[7]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[8]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[9]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[10]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[11]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[12]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[13]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[14]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[15]),32);
        bufp->chgIData(oldp+120,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[16]),32);
        bufp->chgIData(oldp+121,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[17]),32);
        bufp->chgIData(oldp+122,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[18]),32);
        bufp->chgIData(oldp+123,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[19]),32);
        bufp->chgIData(oldp+124,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[20]),32);
        bufp->chgIData(oldp+125,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[21]),32);
        bufp->chgIData(oldp+126,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[22]),32);
        bufp->chgIData(oldp+127,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[23]),32);
        bufp->chgIData(oldp+128,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[24]),32);
        bufp->chgIData(oldp+129,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[25]),32);
        bufp->chgIData(oldp+130,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[26]),32);
        bufp->chgIData(oldp+131,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[27]),32);
        bufp->chgIData(oldp+132,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[28]),32);
        bufp->chgIData(oldp+133,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[29]),32);
        bufp->chgIData(oldp+134,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[30]),32);
        bufp->chgIData(oldp+135,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__general_reg[31]),32);
        bufp->chgIData(oldp+136,(vlSelfRef.Soc__DOT__Rv32__DOT__RV32I_Regfile__DOT__i),32);
        bufp->chgBit(oldp+137,(vlSelfRef.Soc__DOT__Rv32_Memclt__DOT__is_iomem));
        bufp->chgBit(oldp+138,(vlSelfRef.Soc__DOT__Rv32_Memclt__DOT__is_datamem));
        bufp->chgIData(oldp+139,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                 [(0x3fffffU & vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc)]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                 [(0x3fffffU & ((IData)(1U) 
                                                + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc))]),32);
        bufp->chgIData(oldp+141,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                 [(0x3fffffU & ((IData)(2U) 
                                                + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc))]),32);
        bufp->chgIData(oldp+142,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                 [(0x3fffffU & ((IData)(3U) 
                                                + vlSelfRef.Soc__DOT__Rv32__DOT__Ifu_out_pc))]),32);
        bufp->chgIData(oldp+143,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                 [(0x3fffffU & vlSelfRef.Soc__DOT__Rv32_out_codemem_ne_addr)]),32);
        bufp->chgIData(oldp+144,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                 [(0x3fffffU & ((IData)(1U) 
                                                + vlSelfRef.Soc__DOT__Rv32_out_codemem_ne_addr))]),32);
        bufp->chgIData(oldp+145,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                 [(0x3fffffU & ((IData)(2U) 
                                                + vlSelfRef.Soc__DOT__Rv32_out_codemem_ne_addr))]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                                 [(0x3fffffU & ((IData)(3U) 
                                                + vlSelfRef.Soc__DOT__Rv32_out_codemem_ne_addr))]),32);
        bufp->chgIData(oldp+147,(((0x4ffU >= (0x7ffU 
                                              & vlSelfRef.Soc__DOT__Rv32_out_datamem_addr))
                                   ? vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                                  [(0x7ffU & vlSelfRef.Soc__DOT__Rv32_out_datamem_addr)]
                                   : 0U)),32);
        bufp->chgIData(oldp+148,(((0x4ffU >= (0x7ffU 
                                              & ((IData)(1U) 
                                                 + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr)))
                                   ? vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                                  [(0x7ffU & ((IData)(1U) 
                                              + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr))]
                                   : 0U)),32);
        bufp->chgIData(oldp+149,(((0x4ffU >= (0x7ffU 
                                              & ((IData)(2U) 
                                                 + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr)))
                                   ? vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                                  [(0x7ffU & ((IData)(2U) 
                                              + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr))]
                                   : 0U)),32);
        bufp->chgIData(oldp+150,(((0x4ffU >= (0x7ffU 
                                              & ((IData)(3U) 
                                                 + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr)))
                                   ? vlSelfRef.Soc__DOT__Rv32_devport__DOT__iomem
                                  [(0x7ffU & ((IData)(3U) 
                                              + vlSelfRef.Soc__DOT__Rv32_out_datamem_addr))]
                                   : 0U)),32);
        bufp->chgIData(oldp+151,(vlSelfRef.Soc__DOT__Rv32_devport__DOT__i),32);
    }
    bufp->chgBit(oldp+152,(vlSelfRef.clk));
    bufp->chgBit(oldp+153,(vlSelfRef.rst));
    bufp->chgCData(oldp+154,(vlSelfRef.butten),5);
    bufp->chgSData(oldp+155,(vlSelfRef.swi),16);
    bufp->chgSData(oldp+156,(vlSelfRef.led),16);
    bufp->chgCData(oldp+157,(vlSelfRef.seg0_cs),4);
    bufp->chgCData(oldp+158,(vlSelfRef.seg0_data),8);
    bufp->chgCData(oldp+159,(vlSelfRef.seg1_cs),4);
    bufp->chgCData(oldp+160,(vlSelfRef.seg1_data),8);
}

void VSoc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_cleanup\n"); );
    // Init
    VSoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSoc___024root*>(voidSelf);
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
