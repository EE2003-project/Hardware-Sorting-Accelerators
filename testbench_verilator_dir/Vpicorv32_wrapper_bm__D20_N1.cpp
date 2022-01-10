// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper_bm__D20_N1.h"
#include "Vpicorv32_wrapper__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vpicorv32_wrapper_bm__D20_N1) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vpicorv32_wrapper_bm__D20_N1::__Vconfigure(Vpicorv32_wrapper__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpicorv32_wrapper_bm__D20_N1::~Vpicorv32_wrapper_bm__D20_N1() {
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__1(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__1\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x1fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x1eU])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_sequent__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__17(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_sequent__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__17\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : (((IData)((this->__PVT__int_wires
                              [0U] >> 0x20U)) < (IData)(
                                                        this->__PVT__int_wires
                                                        [0U]))
                     ? (IData)(this->__PVT__int_wires
                               [0U]) : (IData)((this->__PVT__int_wires
                                                [0U] 
                                                >> 0x20U))));
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : (((IData)((this->__PVT__int_wires
                              [0U] >> 0x20U)) < (IData)(
                                                        this->__PVT__int_wires
                                                        [0U]))
                     ? (IData)((this->__PVT__int_wires
                                [0U] >> 0x20U)) : (IData)(
                                                          this->__PVT__int_wires
                                                          [0U])));
    this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch 
        = ((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)) 
           & this->__PVT__validity[0U]);
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__33(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__33\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__49(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__49\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x1fU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x1eU])));
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__1__KET____DOT__bm_i__2(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__1__KET____DOT__bm_i__2\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x1dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x1cU])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_sequent__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__1__KET____DOT__bm_i__18(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_sequent__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__1__KET____DOT__bm_i__18\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : (((IData)((this->__PVT__int_wires
                              [0U] >> 0x20U)) < (IData)(
                                                        this->__PVT__int_wires
                                                        [0U]))
                     ? (IData)((this->__PVT__int_wires
                                [0U] >> 0x20U)) : (IData)(
                                                          this->__PVT__int_wires
                                                          [0U])));
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : (((IData)((this->__PVT__int_wires
                              [0U] >> 0x20U)) < (IData)(
                                                        this->__PVT__int_wires
                                                        [0U]))
                     ? (IData)(this->__PVT__int_wires
                               [0U]) : (IData)((this->__PVT__int_wires
                                                [0U] 
                                                >> 0x20U))));
    this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch 
        = ((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)) 
           & this->__PVT__validity[0U]);
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__1__KET____DOT__bm_i__50(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__1__KET____DOT__bm_i__50\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x1dU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x1cU])));
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__2__KET____DOT__bm_i__3(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__2__KET____DOT__bm_i__3\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x1bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x1aU])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__2__KET____DOT__bm_i__51(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__2__KET____DOT__bm_i__51\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x1bU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x1aU])));
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__3__KET____DOT__bm_i__4(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__3__KET____DOT__bm_i__4\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x19U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x18U])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__3__KET____DOT__bm_i__52(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__3__KET____DOT__bm_i__52\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x19U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x18U])));
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__4__KET____DOT__bm_i__5(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__4__KET____DOT__bm_i__5\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x17U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x16U])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__4__KET____DOT__bm_i__53(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__4__KET____DOT__bm_i__53\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x17U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x16U])));
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__5__KET____DOT__bm_i__6(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__5__KET____DOT__bm_i__6\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x15U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x14U])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__5__KET____DOT__bm_i__54(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__5__KET____DOT__bm_i__54\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x15U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x14U])));
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__6__KET____DOT__bm_i__7(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__6__KET____DOT__bm_i__7\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x13U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x12U])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__6__KET____DOT__bm_i__55(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__6__KET____DOT__bm_i__55\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x13U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x12U])));
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__7__KET____DOT__bm_i__8(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__7__KET____DOT__bm_i__8\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x11U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x10U])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__7__KET____DOT__bm_i__56(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__7__KET____DOT__bm_i__56\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0x11U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0x10U])));
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__8__KET____DOT__bm_i__9(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__8__KET____DOT__bm_i__9\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0xfU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0xeU])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__8__KET____DOT__bm_i__57(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__8__KET____DOT__bm_i__57\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0xfU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0xeU])));
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__9__KET____DOT__bm_i__10(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__9__KET____DOT__bm_i__10\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0xdU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0xcU])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__9__KET____DOT__bm_i__58(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__9__KET____DOT__bm_i__58\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0xdU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0xcU])));
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__10__KET____DOT__bm_i__11(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__10__KET____DOT__bm_i__11\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0xbU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0xaU])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__10__KET____DOT__bm_i__59(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__10__KET____DOT__bm_i__59\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][0xbU])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0xaU])));
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__11__KET____DOT__bm_i__12(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__11__KET____DOT__bm_i__12\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][8U])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__11__KET____DOT__bm_i__60(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__11__KET____DOT__bm_i__60\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][9U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][8U])));
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__12__KET____DOT__bm_i__13(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__12__KET____DOT__bm_i__13\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][6U])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__12__KET____DOT__bm_i__61(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__12__KET____DOT__bm_i__61\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][7U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][6U])));
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__13__KET____DOT__bm_i__14(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__13__KET____DOT__bm_i__14\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][4U])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__13__KET____DOT__bm_i__62(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__13__KET____DOT__bm_i__62\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][4U])));
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__14__KET____DOT__bm_i__15(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__14__KET____DOT__bm_i__15\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][2U])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__14__KET____DOT__bm_i__63(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__14__KET____DOT__bm_i__63\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][2U])));
}

void Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__15__KET____DOT__bm_i__16(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__15__KET____DOT__bm_i__16\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0U])));
    this->__PVT__int_wires[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__15__KET____DOT__bm_i__64(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__0__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__15__KET____DOT__bm_i__64\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U] = (((QData)((IData)(
                                                   vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                   [0U][1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
                                                               [0U][0U])));
}

void Vpicorv32_wrapper_bm__D20_N1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N1::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__x_valid = VL_RAND_RESET_I(1);
    __PVT__last_stage = VL_RAND_RESET_I(1);
    __PVT__ASCENDING = VL_RAND_RESET_I(1);
    __PVT__c_in = VL_RAND_RESET_Q(64);
    __PVT__c_out = VL_RAND_RESET_Q(64);
    __PVT__y_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__int_wires[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __PVT__validity[__Vi0] = VL_RAND_RESET_I(1);
    }}
    __PVT__genblk1__BRA__0__KET____DOT__y_valid_ch = VL_RAND_RESET_I(1);
    __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp = VL_RAND_RESET_Q(64);
    __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__validp = VL_RAND_RESET_I(2);
    __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1 = VL_RAND_RESET_I(32);
    __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2 = VL_RAND_RESET_I(32);
}
