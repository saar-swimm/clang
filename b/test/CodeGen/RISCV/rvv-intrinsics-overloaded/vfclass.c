// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +f -target-feature +d -target-feature +experimental-v \
// RUN:   -disable-O0-optnone -emit-llvm %s -o - | opt -S -mem2reg | FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: @test_vfclass_v_u32mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i32> @llvm.riscv.vfclass.nxv1f32.i64(<vscale x 1 x float> [[OP1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i32> [[TMP0]]
//
vuint32mf2_t test_vfclass_v_u32mf2(vfloat32mf2_t op1, size_t vl) {
  return vfclass(op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u32m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i32> @llvm.riscv.vfclass.nxv2f32.i64(<vscale x 2 x float> [[OP1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i32> [[TMP0]]
//
vuint32m1_t test_vfclass_v_u32m1(vfloat32m1_t op1, size_t vl) {
  return vfclass(op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u32m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.riscv.vfclass.nxv4f32.i64(<vscale x 4 x float> [[OP1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
vuint32m2_t test_vfclass_v_u32m2(vfloat32m2_t op1, size_t vl) {
  return vfclass(op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u32m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i32> @llvm.riscv.vfclass.nxv8f32.i64(<vscale x 8 x float> [[OP1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i32> [[TMP0]]
//
vuint32m4_t test_vfclass_v_u32m4(vfloat32m4_t op1, size_t vl) {
  return vfclass(op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u32m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i32> @llvm.riscv.vfclass.nxv16f32.i64(<vscale x 16 x float> [[OP1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i32> [[TMP0]]
//
vuint32m8_t test_vfclass_v_u32m8(vfloat32m8_t op1, size_t vl) {
  return vfclass(op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u64m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i64> @llvm.riscv.vfclass.nxv1f64.i64(<vscale x 1 x double> [[OP1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i64> [[TMP0]]
//
vuint64m1_t test_vfclass_v_u64m1(vfloat64m1_t op1, size_t vl) {
  return vfclass(op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u64m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i64> @llvm.riscv.vfclass.nxv2f64.i64(<vscale x 2 x double> [[OP1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
vuint64m2_t test_vfclass_v_u64m2(vfloat64m2_t op1, size_t vl) {
  return vfclass(op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u64m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i64> @llvm.riscv.vfclass.nxv4f64.i64(<vscale x 4 x double> [[OP1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i64> [[TMP0]]
//
vuint64m4_t test_vfclass_v_u64m4(vfloat64m4_t op1, size_t vl) {
  return vfclass(op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u64m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i64> @llvm.riscv.vfclass.nxv8f64.i64(<vscale x 8 x double> [[OP1:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i64> [[TMP0]]
//
vuint64m8_t test_vfclass_v_u64m8(vfloat64m8_t op1, size_t vl) {
  return vfclass(op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u32mf2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i32> @llvm.riscv.vfclass.mask.nxv1f32.i64(<vscale x 1 x i32> [[MASKEDOFF:%.*]], <vscale x 1 x float> [[OP1:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i32> [[TMP0]]
//
vuint32mf2_t test_vfclass_v_u32mf2_m(vbool64_t mask, vuint32mf2_t maskedoff,
                                     vfloat32mf2_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u32m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i32> @llvm.riscv.vfclass.mask.nxv2f32.i64(<vscale x 2 x i32> [[MASKEDOFF:%.*]], <vscale x 2 x float> [[OP1:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i32> [[TMP0]]
//
vuint32m1_t test_vfclass_v_u32m1_m(vbool32_t mask, vuint32m1_t maskedoff,
                                   vfloat32m1_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u32m2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.riscv.vfclass.mask.nxv4f32.i64(<vscale x 4 x i32> [[MASKEDOFF:%.*]], <vscale x 4 x float> [[OP1:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
vuint32m2_t test_vfclass_v_u32m2_m(vbool16_t mask, vuint32m2_t maskedoff,
                                   vfloat32m2_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u32m4_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i32> @llvm.riscv.vfclass.mask.nxv8f32.i64(<vscale x 8 x i32> [[MASKEDOFF:%.*]], <vscale x 8 x float> [[OP1:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i32> [[TMP0]]
//
vuint32m4_t test_vfclass_v_u32m4_m(vbool8_t mask, vuint32m4_t maskedoff,
                                   vfloat32m4_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u32m8_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i32> @llvm.riscv.vfclass.mask.nxv16f32.i64(<vscale x 16 x i32> [[MASKEDOFF:%.*]], <vscale x 16 x float> [[OP1:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x i32> [[TMP0]]
//
vuint32m8_t test_vfclass_v_u32m8_m(vbool4_t mask, vuint32m8_t maskedoff,
                                   vfloat32m8_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u64m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x i64> @llvm.riscv.vfclass.mask.nxv1f64.i64(<vscale x 1 x i64> [[MASKEDOFF:%.*]], <vscale x 1 x double> [[OP1:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x i64> [[TMP0]]
//
vuint64m1_t test_vfclass_v_u64m1_m(vbool64_t mask, vuint64m1_t maskedoff,
                                   vfloat64m1_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u64m2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i64> @llvm.riscv.vfclass.mask.nxv2f64.i64(<vscale x 2 x i64> [[MASKEDOFF:%.*]], <vscale x 2 x double> [[OP1:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
vuint64m2_t test_vfclass_v_u64m2_m(vbool32_t mask, vuint64m2_t maskedoff,
                                   vfloat64m2_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u64m4_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i64> @llvm.riscv.vfclass.mask.nxv4f64.i64(<vscale x 4 x i64> [[MASKEDOFF:%.*]], <vscale x 4 x double> [[OP1:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x i64> [[TMP0]]
//
vuint64m4_t test_vfclass_v_u64m4_m(vbool16_t mask, vuint64m4_t maskedoff,
                                   vfloat64m4_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}

// CHECK-RV64-LABEL: @test_vfclass_v_u64m8_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i64> @llvm.riscv.vfclass.mask.nxv8f64.i64(<vscale x 8 x i64> [[MASKEDOFF:%.*]], <vscale x 8 x double> [[OP1:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x i64> [[TMP0]]
//
vuint64m8_t test_vfclass_v_u64m8_m(vbool8_t mask, vuint64m8_t maskedoff,
                                   vfloat64m8_t op1, size_t vl) {
  return vfclass(mask, maskedoff, op1, vl);
}
