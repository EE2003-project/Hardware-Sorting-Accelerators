// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpicorv32_wrapper.h for the primary calling header

#ifndef _VPICORV32_WRAPPER_BM__D20_N3_H_
#define _VPICORV32_WRAPPER_BM__D20_N3_H_  // guard

#include "verilated_heavy.h"
#include "Vpicorv32_wrapper__Dpi.h"

//==========

class Vpicorv32_wrapper__Syms;
class Vpicorv32_wrapper_VerilatedVcd;


//----------

VL_MODULE(Vpicorv32_wrapper_bm__D20_N3) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__x_valid,0,0);
    VL_IN8(__PVT__last_stage,0,0);
    VL_IN8(__PVT__ASCENDING,0,0);
    VL_OUT8(__PVT__y_valid,0,0);
    VL_INW(__PVT__c_in,255,0,8);
    VL_OUTW(__PVT__c_out,255,0,8);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    CData/*0:0*/ __PVT__genblk1__BRA__1__KET____DOT__y_valid_ch;
    CData/*0:0*/ __PVT__genblk1__BRA__2__KET____DOT__y_valid_ch;
    CData/*4:0*/ __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__validp;
    CData/*2:0*/ __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__validp;
    CData/*2:0*/ __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__validp;
    CData/*1:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__validp;
    CData/*1:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__validp;
    CData/*1:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__2__KET____DOT__validp;
    CData/*1:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__3__KET____DOT__validp;
    WData/*255:0*/ __PVT__genblk1__BRA__1__KET____DOT__out[8];
    WData/*255:0*/ __PVT__genblk1__BRA__2__KET____DOT__out[8];
    WData/*255:0*/ __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[8];
    IData/*31:0*/ __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    IData/*31:0*/ __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    IData/*31:0*/ __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1;
    IData/*31:0*/ __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2;
    IData/*31:0*/ __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__2__KET____DOT__y1;
    IData/*31:0*/ __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__2__KET____DOT__y2;
    IData/*31:0*/ __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__3__KET____DOT__y1;
    IData/*31:0*/ __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__3__KET____DOT__y2;
    WData/*127:0*/ __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[4];
    WData/*127:0*/ __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp[4];
    IData/*31:0*/ __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    IData/*31:0*/ __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    IData/*31:0*/ __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1;
    IData/*31:0*/ __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2;
    IData/*31:0*/ __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    IData/*31:0*/ __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    IData/*31:0*/ __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1;
    IData/*31:0*/ __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2;
    IData/*31:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    IData/*31:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    IData/*31:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    IData/*31:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    IData/*31:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__2__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    IData/*31:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__2__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    IData/*31:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__3__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    IData/*31:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__3__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    QData/*63:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp;
    QData/*63:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp;
    QData/*63:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__2__KET____DOT__outp;
    QData/*63:0*/ __PVT__genblk1__BRA__2__KET____DOT__bm_chann_i__DOT__genblk1__BRA__3__KET____DOT__outp;
    WData/*255:0*/ __PVT__int_wires[4][8];
    CData/*0:0*/ __PVT__validity[4];
    
    // INTERNAL VARIABLES
  private:
    Vpicorv32_wrapper__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vpicorv32_wrapper_bm__D20_N3);  ///< Copying not allowed
  public:
    Vpicorv32_wrapper_bm__D20_N3(const char* name = "TOP");
    ~Vpicorv32_wrapper_bm__D20_N3();
    
    // INTERNAL METHODS
    void __Vconfigure(Vpicorv32_wrapper__Syms* symsp, bool first);
    void _combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__2__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__13(Vpicorv32_wrapper__Syms* __restrict vlSymsp);
    void _combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__2__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__9(Vpicorv32_wrapper__Syms* __restrict vlSymsp);
    void _combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__2__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__1__KET____DOT__bm_i__14(Vpicorv32_wrapper__Syms* __restrict vlSymsp);
    void _combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__2__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__2__KET____DOT__bm_i__15(Vpicorv32_wrapper__Syms* __restrict vlSymsp);
    void _combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__2__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__3__KET____DOT__bm_i__16(Vpicorv32_wrapper__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__2__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__5(Vpicorv32_wrapper__Syms* __restrict vlSymsp);
    void _sequent__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__2__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__1__KET____DOT__bm_i__6(Vpicorv32_wrapper__Syms* __restrict vlSymsp);
    void _settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__2__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__1(Vpicorv32_wrapper__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__2__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__1__KET____DOT__bm_i__2(Vpicorv32_wrapper__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__2__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__2__KET____DOT__bm_i__3(Vpicorv32_wrapper__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__2__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__3__KET____DOT__bm_i__4(Vpicorv32_wrapper__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
