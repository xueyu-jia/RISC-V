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
        bufp->chgIData(oldp+0,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_pc),32);
        bufp->chgBit(oldp+1,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_mem_valid));
        bufp->chgIData(oldp+2,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Ifu__DOT__n_pc),32);
        bufp->chgIData(oldp+3,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[0]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[1]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[2]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[3]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[4]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[5]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[6]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[7]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[8]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[9]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[10]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[11]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[12]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[13]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[14]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[15]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[16]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[17]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[18]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[19]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[20]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[21]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[22]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[23]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[24]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[25]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[26]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[27]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[28]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[29]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[30]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg[31]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+36,(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we),4);
        bufp->chgIData(oldp+37,(vlSelfRef.Soc__DOT__Rv32_mem_out_rdata),32);
        bufp->chgCData(oldp+38,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_id),5);
        bufp->chgBit(oldp+39,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_rd_we));
        bufp->chgCData(oldp+40,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id),5);
        bufp->chgCData(oldp+41,(vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id),5);
        bufp->chgSData(oldp+42,(((((((IData)((0x3033U 
                                              == (0xfe00707fU 
                                                  & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                     | (IData)((0x3013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))) 
                                    << 9U) | ((((IData)(
                                                        (0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                                | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_slti)) 
                                               << 8U) 
                                              | (((IData)(
                                                          (0x4033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                                  | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_xori)) 
                                                 << 7U))) 
                                  | ((((IData)((0x6033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                       | (IData)((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))) 
                                      << 6U) | (((IData)(
                                                         (0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                                 | (IData)(
                                                           (0x7013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))) 
                                                << 5U))) 
                                 | ((((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_16) 
                                        & (0x20U == 
                                           (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                            >> 0x19U))) 
                                       | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli)) 
                                      << 4U) | (((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_16) 
                                                   & (0U 
                                                      == 
                                                      (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                       >> 0x19U))) 
                                                  | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli)) 
                                                 << 3U) 
                                                | (((IData)(
                                                            (0x1033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                                    | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_slli)) 
                                                   << 2U))) 
                                    | ((((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                                         & (0x20U == 
                                            (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                             >> 0x19U))) 
                                        << 1U) | ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_addi) 
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
                                                                       | (IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc))))))))))))),10);
        bufp->chgCData(oldp+43,(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re),5);
        bufp->chgBit(oldp+44,(vlSelfRef.Soc__DOT__rv32__DOT__Memu_out_mem_valid));
        bufp->chgCData(oldp+45,((0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)),7);
        bufp->chgCData(oldp+46,((7U & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+47,((vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                 >> 0x19U)),7);
        bufp->chgBit(oldp+48,((0x13U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))));
        bufp->chgBit(oldp+49,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u));
        bufp->chgBit(oldp+50,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j));
        bufp->chgBit(oldp+51,((0x63U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))));
        bufp->chgBit(oldp+52,((0x23U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))));
        bufp->chgBit(oldp+53,((0x33U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))));
        bufp->chgBit(oldp+54,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_addi));
        bufp->chgBit(oldp+55,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_slti));
        bufp->chgBit(oldp+56,((IData)((0x3013U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+57,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_xori));
        bufp->chgBit(oldp+58,((IData)((0x6013U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+59,((IData)((0x7013U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+60,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_slli));
        bufp->chgBit(oldp+61,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_srli));
        bufp->chgBit(oldp+62,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                               & (0U == (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+63,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_13) 
                               & (0x20U == (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                            >> 0x19U)))));
        bufp->chgBit(oldp+64,((IData)((0x1033U == (0xfe00707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+65,((IData)((0x2033U == (0xfe00707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+66,((IData)((0x3033U == (0xfe00707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+67,((IData)((0x4033U == (0xfe00707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+68,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_16) 
                               & (0U == (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+69,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT____VdfgRegularize_hb9908eda_0_16) 
                               & (0x20U == (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                            >> 0x19U)))));
        bufp->chgBit(oldp+70,((IData)((0x6033U == (0xfe00707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+71,((IData)((0x7033U == (0xfe00707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+72,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_u) 
                               & (0x37U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+73,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_auipc));
        bufp->chgBit(oldp+74,((IData)((0x63U == (0x707fU 
                                                 & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+75,((IData)((0x1063U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+76,((IData)((0x4063U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+77,((IData)((0x5063U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+78,((IData)((0x6063U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+79,((IData)((0x7063U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+80,((IData)((0x23U == (0x707fU 
                                                 & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+81,((IData)((0x1023U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+82,((IData)((0x2023U == (0x707fU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+83,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j) 
                               & (0x6fU == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
        bufp->chgBit(oldp+84,(((IData)(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Decoder__DOT__is_j) 
                               & (0x67U == (0x7fU & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+85,(vlSelfRef.Soc__DOT__Rv32_out_mem_valid));
        bufp->chgIData(oldp+86,(vlSelfRef.Soc__DOT__Rv32_out_mem_addr),32);
        bufp->chgIData(oldp+87,(vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data),32);
        bufp->chgBit(oldp+88,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_en));
        bufp->chgIData(oldp+89,(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_in_jmp_addr),32);
        bufp->chgIData(oldp+90,(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_imm),32);
        bufp->chgIData(oldp+91,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Alu__DOT__alu_src),32);
    }
    bufp->chgIData(oldp+92,(vlSelfRef.sim_out_rdata),32);
    bufp->chgCData(oldp+93,(vlSelfRef.sim_in_wen),4);
    bufp->chgIData(oldp+94,(vlSelfRef.sim_in_addr),32);
    bufp->chgIData(oldp+95,(vlSelfRef.sim_in_wdata),32);
    bufp->chgBit(oldp+96,(vlSelfRef.clk));
    bufp->chgBit(oldp+97,(vlSelfRef.rst));
    bufp->chgBit(oldp+98,(((~ (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Memu_out_mem_valid)) 
                           & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Ifu_out_mem_valid))));
    bufp->chgCData(oldp+99,((((IData)(vlSelfRef.Soc__DOT__Rv32_out_mem_valid) 
                              & (0x400U > vlSelfRef.Soc__DOT__Rv32_out_mem_addr))
                              ? (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_we)
                              : 0U)),4);
    bufp->chgCData(oldp+100,(vlSelfRef.Soc__DOT__Rv32_mem_in_wen),4);
    bufp->chgIData(oldp+101,(vlSelfRef.Soc__DOT__Rv32_mem_in_addr),32);
    bufp->chgIData(oldp+102,(vlSelfRef.Soc__DOT__Rv32_mem_in_wdata),32);
    bufp->chgIData(oldp+103,(VL_SHIFTR_III(32,32,32, 
                                           (vlSelfRef.Soc__DOT__Rv32_mem_in_addr 
                                            - (IData)(0x80000000U)), 2U)),32);
    bufp->chgIData(oldp+104,((((- (IData)((1U & (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)))) 
                               & (((- (IData)((1U & 
                                               (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                              | (((- (IData)((1U & 
                                              ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                               >> 1U)))) 
                                  & (((- (IData)((1U 
                                                  & (vlSelfRef.Soc__DOT__Rv32_mem_out_rdata 
                                                     >> 0xfU)))) 
                                      << 0x10U) | (0xffffU 
                                                   & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata))) 
                                 | (((- (IData)((1U 
                                                 & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                    >> 2U)))) 
                                     & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata) 
                                    | ((0xffU & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                                >> 3U)))) 
                                                 & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)) 
                                       | ((0xffffU 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re) 
                                                             >> 4U)))) 
                                              & vlSelfRef.Soc__DOT__Rv32_mem_out_rdata)) 
                                          | ((- (IData)(
                                                        (0U 
                                                         == (IData)(vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_mem_re)))) 
                                             & vlSelfRef.Soc__DOT__rv32__DOT__Alu_out_data))))))),32);
    bufp->chgIData(oldp+105,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                             [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id]),32);
    bufp->chgIData(oldp+106,(vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                             [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Rb_id]),32);
    bufp->chgIData(oldp+107,((vlSelfRef.Soc__DOT__rv32__DOT__Decoder_out_imm 
                              + vlSelfRef.Soc__DOT__rv32__DOT__RV32I_Regfile__DOT__general_reg
                              [vlSelfRef.Soc__DOT__rv32__DOT__Regfile_in_Ra_id])),32);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
