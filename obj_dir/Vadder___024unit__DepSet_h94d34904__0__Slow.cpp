// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder.h for the primary calling header

#include "Vadder__pch.h"
#include "Vadder___024unit.h"

VL_ATTR_COLD void Vadder___024unit___ctor_var_reset(Vadder___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vadder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vadder___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
