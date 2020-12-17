/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Intrinsic Function Source Fragment                                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifndef LLVM_IR_INTRINSIC_RISCV_ENUMS_H
#define LLVM_IR_INTRINSIC_RISCV_ENUMS_H

namespace llvm {
namespace Intrinsic {
enum RISCVIntrinsics : unsigned {
// Enum values for intrinsics
    riscv_masked_atomicrmw_add_i32 = 6614,            // llvm.riscv.masked.atomicrmw.add.i32
    riscv_masked_atomicrmw_add_i64,            // llvm.riscv.masked.atomicrmw.add.i64
    riscv_masked_atomicrmw_max_i32,            // llvm.riscv.masked.atomicrmw.max.i32
    riscv_masked_atomicrmw_max_i64,            // llvm.riscv.masked.atomicrmw.max.i64
    riscv_masked_atomicrmw_min_i32,            // llvm.riscv.masked.atomicrmw.min.i32
    riscv_masked_atomicrmw_min_i64,            // llvm.riscv.masked.atomicrmw.min.i64
    riscv_masked_atomicrmw_nand_i32,           // llvm.riscv.masked.atomicrmw.nand.i32
    riscv_masked_atomicrmw_nand_i64,           // llvm.riscv.masked.atomicrmw.nand.i64
    riscv_masked_atomicrmw_sub_i32,            // llvm.riscv.masked.atomicrmw.sub.i32
    riscv_masked_atomicrmw_sub_i64,            // llvm.riscv.masked.atomicrmw.sub.i64
    riscv_masked_atomicrmw_umax_i32,           // llvm.riscv.masked.atomicrmw.umax.i32
    riscv_masked_atomicrmw_umax_i64,           // llvm.riscv.masked.atomicrmw.umax.i64
    riscv_masked_atomicrmw_umin_i32,           // llvm.riscv.masked.atomicrmw.umin.i32
    riscv_masked_atomicrmw_umin_i64,           // llvm.riscv.masked.atomicrmw.umin.i64
    riscv_masked_atomicrmw_xchg_i32,           // llvm.riscv.masked.atomicrmw.xchg.i32
    riscv_masked_atomicrmw_xchg_i64,           // llvm.riscv.masked.atomicrmw.xchg.i64
    riscv_masked_cmpxchg_i32,                  // llvm.riscv.masked.cmpxchg.i32
    riscv_masked_cmpxchg_i64,                  // llvm.riscv.masked.cmpxchg.i64
    riscv_vadc,                                // llvm.riscv.vadc
    riscv_vadd,                                // llvm.riscv.vadd
    riscv_vadd_mask,                           // llvm.riscv.vadd.mask
    riscv_vdiv,                                // llvm.riscv.vdiv
    riscv_vdiv_mask,                           // llvm.riscv.vdiv.mask
    riscv_vdivu,                               // llvm.riscv.vdivu
    riscv_vdivu_mask,                          // llvm.riscv.vdivu.mask
    riscv_vfadd,                               // llvm.riscv.vfadd
    riscv_vfadd_mask,                          // llvm.riscv.vfadd.mask
    riscv_vfrsub,                              // llvm.riscv.vfrsub
    riscv_vfrsub_mask,                         // llvm.riscv.vfrsub.mask
    riscv_vfsub,                               // llvm.riscv.vfsub
    riscv_vfsub_mask,                          // llvm.riscv.vfsub.mask
    riscv_vle,                                 // llvm.riscv.vle
    riscv_vle_mask,                            // llvm.riscv.vle.mask
    riscv_vmadc,                               // llvm.riscv.vmadc
    riscv_vmadc_carry_in,                      // llvm.riscv.vmadc.carry.in
    riscv_vmax,                                // llvm.riscv.vmax
    riscv_vmax_mask,                           // llvm.riscv.vmax.mask
    riscv_vmaxu,                               // llvm.riscv.vmaxu
    riscv_vmaxu_mask,                          // llvm.riscv.vmaxu.mask
    riscv_vmin,                                // llvm.riscv.vmin
    riscv_vmin_mask,                           // llvm.riscv.vmin.mask
    riscv_vminu,                               // llvm.riscv.vminu
    riscv_vminu_mask,                          // llvm.riscv.vminu.mask
    riscv_vmsbc,                               // llvm.riscv.vmsbc
    riscv_vmsbc_borrow_in,                     // llvm.riscv.vmsbc.borrow.in
    riscv_vmul,                                // llvm.riscv.vmul
    riscv_vmul_mask,                           // llvm.riscv.vmul.mask
    riscv_vmulh,                               // llvm.riscv.vmulh
    riscv_vmulh_mask,                          // llvm.riscv.vmulh.mask
    riscv_vmulhsu,                             // llvm.riscv.vmulhsu
    riscv_vmulhsu_mask,                        // llvm.riscv.vmulhsu.mask
    riscv_vmulhu,                              // llvm.riscv.vmulhu
    riscv_vmulhu_mask,                         // llvm.riscv.vmulhu.mask
    riscv_vnsra,                               // llvm.riscv.vnsra
    riscv_vnsra_mask,                          // llvm.riscv.vnsra.mask
    riscv_vnsrl,                               // llvm.riscv.vnsrl
    riscv_vnsrl_mask,                          // llvm.riscv.vnsrl.mask
    riscv_vrem,                                // llvm.riscv.vrem
    riscv_vrem_mask,                           // llvm.riscv.vrem.mask
    riscv_vremu,                               // llvm.riscv.vremu
    riscv_vremu_mask,                          // llvm.riscv.vremu.mask
    riscv_vrsub,                               // llvm.riscv.vrsub
    riscv_vrsub_mask,                          // llvm.riscv.vrsub.mask
    riscv_vsbc,                                // llvm.riscv.vsbc
    riscv_vse,                                 // llvm.riscv.vse
    riscv_vse_mask,                            // llvm.riscv.vse.mask
    riscv_vsll,                                // llvm.riscv.vsll
    riscv_vsll_mask,                           // llvm.riscv.vsll.mask
    riscv_vsra,                                // llvm.riscv.vsra
    riscv_vsra_mask,                           // llvm.riscv.vsra.mask
    riscv_vsrl,                                // llvm.riscv.vsrl
    riscv_vsrl_mask,                           // llvm.riscv.vsrl.mask
    riscv_vsub,                                // llvm.riscv.vsub
    riscv_vsub_mask,                           // llvm.riscv.vsub.mask
    riscv_vwadd,                               // llvm.riscv.vwadd
    riscv_vwadd_mask,                          // llvm.riscv.vwadd.mask
    riscv_vwadd_w,                             // llvm.riscv.vwadd.w
    riscv_vwadd_w_mask,                        // llvm.riscv.vwadd.w.mask
    riscv_vwaddu,                              // llvm.riscv.vwaddu
    riscv_vwaddu_mask,                         // llvm.riscv.vwaddu.mask
    riscv_vwaddu_w,                            // llvm.riscv.vwaddu.w
    riscv_vwaddu_w_mask,                       // llvm.riscv.vwaddu.w.mask
    riscv_vwmul,                               // llvm.riscv.vwmul
    riscv_vwmul_mask,                          // llvm.riscv.vwmul.mask
    riscv_vwmulsu,                             // llvm.riscv.vwmulsu
    riscv_vwmulsu_mask,                        // llvm.riscv.vwmulsu.mask
    riscv_vwmulu,                              // llvm.riscv.vwmulu
    riscv_vwmulu_mask,                         // llvm.riscv.vwmulu.mask
    riscv_vwsub,                               // llvm.riscv.vwsub
    riscv_vwsub_mask,                          // llvm.riscv.vwsub.mask
    riscv_vwsub_w,                             // llvm.riscv.vwsub.w
    riscv_vwsub_w_mask,                        // llvm.riscv.vwsub.w.mask
    riscv_vwsubu,                              // llvm.riscv.vwsubu
    riscv_vwsubu_mask,                         // llvm.riscv.vwsubu.mask
    riscv_vwsubu_w,                            // llvm.riscv.vwsubu.w
    riscv_vwsubu_w_mask,                       // llvm.riscv.vwsubu.w.mask
}; // enum
} // namespace Intrinsic
} // namespace llvm

#endif
