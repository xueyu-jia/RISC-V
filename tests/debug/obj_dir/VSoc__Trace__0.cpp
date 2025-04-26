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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_mem_valid));
        bufp->chgIData(oldp+1,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc),32);
        bufp->chgIData(oldp+2,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                               [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                              - (IData)(0x80000000U)) 
                                             >> 2U))]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc),32);
        bufp->chgIData(oldp+4,(vlSelfRef.Soc__DOT__Rv32_codemem__DOT__mem
                               [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc 
                                              - (IData)(0x80000000U)) 
                                             >> 2U))]),32);
        bufp->chgBit(oldp+5,(((0U != (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)) 
                              | (0U != (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we)))));
        bufp->chgIData(oldp+6,(vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr),32);
        bufp->chgIData(oldp+7,(vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data),32);
        bufp->chgCData(oldp+8,(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we),4);
        bufp->chgIData(oldp+9,(VL_SHIFTR_III(32,32,32, 
                                             (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc 
                                              - (IData)(0x80000000U)), 2U)),32);
        bufp->chgIData(oldp+10,(VL_SHIFTR_III(32,32,32, 
                                              (vlSelfRef.Soc__DOT__rv32__DOT__Ifu_ne_out_pc 
                                               - (IData)(0x80000000U)), 2U)),32);
        bufp->chgIData(oldp+11,(VL_SHIFTR_III(32,32,32, 
                                              (vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                                               - (IData)(0x80400000U)), 2U)),32);
        bufp->chgCData(oldp+12,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_id),5);
        bufp->chgBit(oldp+13,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_19) 
                               | (3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)))));
        bufp->chgCData(oldp+14,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id),5);
        bufp->chgCData(oldp+15,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id),5);
        bufp->chgIData(oldp+16,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                                [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id]),32);
        bufp->chgBit(oldp+18,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_en));
        bufp->chgIData(oldp+19,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_addr),32);
        bufp->chgIData(oldp+20,(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_imm),32);
        bufp->chgSData(oldp+21,((((((((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
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
                                        << 1U) | ((
                                                   (0x13U 
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
        bufp->chgCData(oldp+22,(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re),5);
        bufp->chgIData(oldp+23,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src),32);
        bufp->chgCData(oldp+24,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode),7);
        bufp->chgCData(oldp+25,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3),3);
        bufp->chgCData(oldp+26,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7),7);
        bufp->chgBit(oldp+27,((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))));
        bufp->chgBit(oldp+28,((3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))));
        bufp->chgBit(oldp+29,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u));
        bufp->chgBit(oldp+30,((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))));
        bufp->chgBit(oldp+31,((0x23U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))));
        bufp->chgBit(oldp+32,((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))));
        bufp->chgBit(oldp+33,(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+34,(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (2U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+35,(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+36,(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (4U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+37,(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (6U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+38,(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (7U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+39,(((0x13U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (1U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+40,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli));
        bufp->chgBit(oldp+41,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10) 
                               & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))));
        bufp->chgBit(oldp+42,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_10) 
                               & (0x20U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))));
        bufp->chgBit(oldp+43,(((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & ((1U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                  & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))))));
        bufp->chgBit(oldp+44,(((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & ((2U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                  & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))))));
        bufp->chgBit(oldp+45,(((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & ((3U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                  & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))))));
        bufp->chgBit(oldp+46,(((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & ((4U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                  & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))))));
        bufp->chgBit(oldp+47,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                               & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))));
        bufp->chgBit(oldp+48,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                               & (0x20U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7)))));
        bufp->chgBit(oldp+49,(((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & ((6U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                  & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))))));
        bufp->chgBit(oldp+50,(((0x33U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & ((7U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)) 
                                  & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc7))))));
        bufp->chgBit(oldp+51,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u) 
                               & (0x37U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)))));
        bufp->chgBit(oldp+52,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc));
        bufp->chgBit(oldp+53,(((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+54,(((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (1U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+55,(((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (4U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+56,(((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (5U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+57,(((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (6U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+58,(((0x63U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (7U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+59,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lb));
        bufp->chgBit(oldp+60,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lh));
        bufp->chgBit(oldp+61,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lw));
        bufp->chgBit(oldp+62,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lbu));
        bufp->chgBit(oldp+63,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_lhu));
        bufp->chgBit(oldp+64,(((0x23U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (0U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+65,(((0x23U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (1U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+66,(((0x23U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode)) 
                               & (2U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__fuc3)))));
        bufp->chgBit(oldp+67,((0x6fU == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))));
        bufp->chgBit(oldp+68,((0x67U == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__opcode))));
        bufp->chgBit(oldp+69,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j));
        bufp->chgIData(oldp+70,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc),32);
        bufp->chgBit(oldp+71,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__ne_is_c));
        bufp->chgIData(oldp+72,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[1]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[2]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[3]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[4]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[5]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[6]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[7]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[8]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[9]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[10]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[11]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[12]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[13]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[14]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[15]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[16]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[17]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[18]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[19]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[20]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[21]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[22]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[23]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[24]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[25]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[26]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[27]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[28]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[29]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[30]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[31]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__i),32);
    }
    bufp->chgBit(oldp+105,(vlSelfRef.clk));
    bufp->chgBit(oldp+106,(vlSelfRef.rst));
    bufp->chgIData(oldp+107,(vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                             [(0xfffffU & ((vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
                                            - (IData)(0x80400000U)) 
                                           >> 2U))]),32);
    bufp->chgIData(oldp+108,((((- (IData)((1U & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)))) 
                               & (((- (IData)((1U & 
                                               (vlSelfRef.Soc__DOT__Rv32_datamem__DOT__mem
                                                [(0xfffffU 
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
                                     [(0xfffffU & (
                                                   (vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_mem_addr 
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

void VSoc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSoc___024root__trace_cleanup\n"); );
    // Init
    VSoc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSoc___024root*>(voidSelf);
    VSoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
