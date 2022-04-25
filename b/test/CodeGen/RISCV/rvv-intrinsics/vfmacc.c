// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +f -target-feature +d \
// RUN:   -target-feature +experimental-v -target-feature +experimental-zfh \
// RUN:   -disable-O0-optnone -emit-llvm %s -o - | opt -S -mem2reg | FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: @test_vfmacc_vv_f32mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x float> @llvm.riscv.vfmacc.nxv1f32.nxv1f32.i64(<vscale x 1 x float> [[ACC:%.*]], <vscale x 1 x float> [[OP1:%.*]], <vscale x 1 x float> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x float> [[TMP0]]
//
vfloat32mf2_t test_vfmacc_vv_f32mf2(vfloat32mf2_t acc, vfloat32mf2_t op1,
                                    vfloat32mf2_t op2, size_t vl) {
  return vfmacc_vv_f32mf2(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f32mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x float> @llvm.riscv.vfmacc.nxv1f32.f32.i64(<vscale x 1 x float> [[ACC:%.*]], float [[OP1:%.*]], <vscale x 1 x float> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x float> [[TMP0]]
//
vfloat32mf2_t test_vfmacc_vf_f32mf2(vfloat32mf2_t acc, float op1,
                                    vfloat32mf2_t op2, size_t vl) {
  return vfmacc_vf_f32mf2(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f32m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x float> @llvm.riscv.vfmacc.nxv2f32.nxv2f32.i64(<vscale x 2 x float> [[ACC:%.*]], <vscale x 2 x float> [[OP1:%.*]], <vscale x 2 x float> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x float> [[TMP0]]
//
vfloat32m1_t test_vfmacc_vv_f32m1(vfloat32m1_t acc, vfloat32m1_t op1,
                                  vfloat32m1_t op2, size_t vl) {
  return vfmacc_vv_f32m1(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f32m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x float> @llvm.riscv.vfmacc.nxv2f32.f32.i64(<vscale x 2 x float> [[ACC:%.*]], float [[OP1:%.*]], <vscale x 2 x float> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x float> [[TMP0]]
//
vfloat32m1_t test_vfmacc_vf_f32m1(vfloat32m1_t acc, float op1, vfloat32m1_t op2,
                                  size_t vl) {
  return vfmacc_vf_f32m1(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f32m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.vfmacc.nxv4f32.nxv4f32.i64(<vscale x 4 x float> [[ACC:%.*]], <vscale x 4 x float> [[OP1:%.*]], <vscale x 4 x float> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vfmacc_vv_f32m2(vfloat32m2_t acc, vfloat32m2_t op1,
                                  vfloat32m2_t op2, size_t vl) {
  return vfmacc_vv_f32m2(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f32m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.vfmacc.nxv4f32.f32.i64(<vscale x 4 x float> [[ACC:%.*]], float [[OP1:%.*]], <vscale x 4 x float> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vfmacc_vf_f32m2(vfloat32m2_t acc, float op1, vfloat32m2_t op2,
                                  size_t vl) {
  return vfmacc_vf_f32m2(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f32m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.vfmacc.nxv8f32.nxv8f32.i64(<vscale x 8 x float> [[ACC:%.*]], <vscale x 8 x float> [[OP1:%.*]], <vscale x 8 x float> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vfmacc_vv_f32m4(vfloat32m4_t acc, vfloat32m4_t op1,
                                  vfloat32m4_t op2, size_t vl) {
  return vfmacc_vv_f32m4(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f32m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.vfmacc.nxv8f32.f32.i64(<vscale x 8 x float> [[ACC:%.*]], float [[OP1:%.*]], <vscale x 8 x float> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vfmacc_vf_f32m4(vfloat32m4_t acc, float op1, vfloat32m4_t op2,
                                  size_t vl) {
  return vfmacc_vf_f32m4(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f32m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.vfmacc.nxv16f32.nxv16f32.i64(<vscale x 16 x float> [[ACC:%.*]], <vscale x 16 x float> [[OP1:%.*]], <vscale x 16 x float> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vfmacc_vv_f32m8(vfloat32m8_t acc, vfloat32m8_t op1,
                                  vfloat32m8_t op2, size_t vl) {
  return vfmacc_vv_f32m8(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f32m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.vfmacc.nxv16f32.f32.i64(<vscale x 16 x float> [[ACC:%.*]], float [[OP1:%.*]], <vscale x 16 x float> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vfmacc_vf_f32m8(vfloat32m8_t acc, float op1, vfloat32m8_t op2,
                                  size_t vl) {
  return vfmacc_vf_f32m8(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f64m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfmacc.nxv1f64.nxv1f64.i64(<vscale x 1 x double> [[ACC:%.*]], <vscale x 1 x double> [[OP1:%.*]], <vscale x 1 x double> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfmacc_vv_f64m1(vfloat64m1_t acc, vfloat64m1_t op1,
                                  vfloat64m1_t op2, size_t vl) {
  return vfmacc_vv_f64m1(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f64m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfmacc.nxv1f64.f64.i64(<vscale x 1 x double> [[ACC:%.*]], double [[OP1:%.*]], <vscale x 1 x double> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfmacc_vf_f64m1(vfloat64m1_t acc, double op1,
                                  vfloat64m1_t op2, size_t vl) {
  return vfmacc_vf_f64m1(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f64m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x double> @llvm.riscv.vfmacc.nxv2f64.nxv2f64.i64(<vscale x 2 x double> [[ACC:%.*]], <vscale x 2 x double> [[OP1:%.*]], <vscale x 2 x double> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
vfloat64m2_t test_vfmacc_vv_f64m2(vfloat64m2_t acc, vfloat64m2_t op1,
                                  vfloat64m2_t op2, size_t vl) {
  return vfmacc_vv_f64m2(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f64m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x double> @llvm.riscv.vfmacc.nxv2f64.f64.i64(<vscale x 2 x double> [[ACC:%.*]], double [[OP1:%.*]], <vscale x 2 x double> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
vfloat64m2_t test_vfmacc_vf_f64m2(vfloat64m2_t acc, double op1,
                                  vfloat64m2_t op2, size_t vl) {
  return vfmacc_vf_f64m2(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f64m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x double> @llvm.riscv.vfmacc.nxv4f64.nxv4f64.i64(<vscale x 4 x double> [[ACC:%.*]], <vscale x 4 x double> [[OP1:%.*]], <vscale x 4 x double> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x double> [[TMP0]]
//
vfloat64m4_t test_vfmacc_vv_f64m4(vfloat64m4_t acc, vfloat64m4_t op1,
                                  vfloat64m4_t op2, size_t vl) {
  return vfmacc_vv_f64m4(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f64m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x double> @llvm.riscv.vfmacc.nxv4f64.f64.i64(<vscale x 4 x double> [[ACC:%.*]], double [[OP1:%.*]], <vscale x 4 x double> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x double> [[TMP0]]
//
vfloat64m4_t test_vfmacc_vf_f64m4(vfloat64m4_t acc, double op1,
                                  vfloat64m4_t op2, size_t vl) {
  return vfmacc_vf_f64m4(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f64m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x double> @llvm.riscv.vfmacc.nxv8f64.nxv8f64.i64(<vscale x 8 x double> [[ACC:%.*]], <vscale x 8 x double> [[OP1:%.*]], <vscale x 8 x double> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x double> [[TMP0]]
//
vfloat64m8_t test_vfmacc_vv_f64m8(vfloat64m8_t acc, vfloat64m8_t op1,
                                  vfloat64m8_t op2, size_t vl) {
  return vfmacc_vv_f64m8(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f64m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x double> @llvm.riscv.vfmacc.nxv8f64.f64.i64(<vscale x 8 x double> [[ACC:%.*]], double [[OP1:%.*]], <vscale x 8 x double> [[OP2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x double> [[TMP0]]
//
vfloat64m8_t test_vfmacc_vf_f64m8(vfloat64m8_t acc, double op1,
                                  vfloat64m8_t op2, size_t vl) {
  return vfmacc_vf_f64m8(acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f32mf2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x float> @llvm.riscv.vfmacc.mask.nxv1f32.nxv1f32.i64(<vscale x 1 x float> [[ACC:%.*]], <vscale x 1 x float> [[OP1:%.*]], <vscale x 1 x float> [[OP2:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x float> [[TMP0]]
//
vfloat32mf2_t test_vfmacc_vv_f32mf2_m(vbool64_t mask, vfloat32mf2_t acc,
                                      vfloat32mf2_t op1, vfloat32mf2_t op2,
                                      size_t vl) {
  return vfmacc_vv_f32mf2_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f32mf2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x float> @llvm.riscv.vfmacc.mask.nxv1f32.f32.i64(<vscale x 1 x float> [[ACC:%.*]], float [[OP1:%.*]], <vscale x 1 x float> [[OP2:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x float> [[TMP0]]
//
vfloat32mf2_t test_vfmacc_vf_f32mf2_m(vbool64_t mask, vfloat32mf2_t acc,
                                      float op1, vfloat32mf2_t op2, size_t vl) {
  return vfmacc_vf_f32mf2_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f32m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x float> @llvm.riscv.vfmacc.mask.nxv2f32.nxv2f32.i64(<vscale x 2 x float> [[ACC:%.*]], <vscale x 2 x float> [[OP1:%.*]], <vscale x 2 x float> [[OP2:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x float> [[TMP0]]
//
vfloat32m1_t test_vfmacc_vv_f32m1_m(vbool32_t mask, vfloat32m1_t acc,
                                    vfloat32m1_t op1, vfloat32m1_t op2,
                                    size_t vl) {
  return vfmacc_vv_f32m1_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f32m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x float> @llvm.riscv.vfmacc.mask.nxv2f32.f32.i64(<vscale x 2 x float> [[ACC:%.*]], float [[OP1:%.*]], <vscale x 2 x float> [[OP2:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x float> [[TMP0]]
//
vfloat32m1_t test_vfmacc_vf_f32m1_m(vbool32_t mask, vfloat32m1_t acc, float op1,
                                    vfloat32m1_t op2, size_t vl) {
  return vfmacc_vf_f32m1_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f32m2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.vfmacc.mask.nxv4f32.nxv4f32.i64(<vscale x 4 x float> [[ACC:%.*]], <vscale x 4 x float> [[OP1:%.*]], <vscale x 4 x float> [[OP2:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vfmacc_vv_f32m2_m(vbool16_t mask, vfloat32m2_t acc,
                                    vfloat32m2_t op1, vfloat32m2_t op2,
                                    size_t vl) {
  return vfmacc_vv_f32m2_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f32m2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x float> @llvm.riscv.vfmacc.mask.nxv4f32.f32.i64(<vscale x 4 x float> [[ACC:%.*]], float [[OP1:%.*]], <vscale x 4 x float> [[OP2:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
vfloat32m2_t test_vfmacc_vf_f32m2_m(vbool16_t mask, vfloat32m2_t acc, float op1,
                                    vfloat32m2_t op2, size_t vl) {
  return vfmacc_vf_f32m2_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f32m4_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.vfmacc.mask.nxv8f32.nxv8f32.i64(<vscale x 8 x float> [[ACC:%.*]], <vscale x 8 x float> [[OP1:%.*]], <vscale x 8 x float> [[OP2:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vfmacc_vv_f32m4_m(vbool8_t mask, vfloat32m4_t acc,
                                    vfloat32m4_t op1, vfloat32m4_t op2,
                                    size_t vl) {
  return vfmacc_vv_f32m4_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f32m4_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x float> @llvm.riscv.vfmacc.mask.nxv8f32.f32.i64(<vscale x 8 x float> [[ACC:%.*]], float [[OP1:%.*]], <vscale x 8 x float> [[OP2:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x float> [[TMP0]]
//
vfloat32m4_t test_vfmacc_vf_f32m4_m(vbool8_t mask, vfloat32m4_t acc, float op1,
                                    vfloat32m4_t op2, size_t vl) {
  return vfmacc_vf_f32m4_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f32m8_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.vfmacc.mask.nxv16f32.nxv16f32.i64(<vscale x 16 x float> [[ACC:%.*]], <vscale x 16 x float> [[OP1:%.*]], <vscale x 16 x float> [[OP2:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vfmacc_vv_f32m8_m(vbool4_t mask, vfloat32m8_t acc,
                                    vfloat32m8_t op1, vfloat32m8_t op2,
                                    size_t vl) {
  return vfmacc_vv_f32m8_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f32m8_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x float> @llvm.riscv.vfmacc.mask.nxv16f32.f32.i64(<vscale x 16 x float> [[ACC:%.*]], float [[OP1:%.*]], <vscale x 16 x float> [[OP2:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x float> [[TMP0]]
//
vfloat32m8_t test_vfmacc_vf_f32m8_m(vbool4_t mask, vfloat32m8_t acc, float op1,
                                    vfloat32m8_t op2, size_t vl) {
  return vfmacc_vf_f32m8_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f64m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfmacc.mask.nxv1f64.nxv1f64.i64(<vscale x 1 x double> [[ACC:%.*]], <vscale x 1 x double> [[OP1:%.*]], <vscale x 1 x double> [[OP2:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfmacc_vv_f64m1_m(vbool64_t mask, vfloat64m1_t acc,
                                    vfloat64m1_t op1, vfloat64m1_t op2,
                                    size_t vl) {
  return vfmacc_vv_f64m1_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f64m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x double> @llvm.riscv.vfmacc.mask.nxv1f64.f64.i64(<vscale x 1 x double> [[ACC:%.*]], double [[OP1:%.*]], <vscale x 1 x double> [[OP2:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x double> [[TMP0]]
//
vfloat64m1_t test_vfmacc_vf_f64m1_m(vbool64_t mask, vfloat64m1_t acc,
                                    double op1, vfloat64m1_t op2, size_t vl) {
  return vfmacc_vf_f64m1_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f64m2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x double> @llvm.riscv.vfmacc.mask.nxv2f64.nxv2f64.i64(<vscale x 2 x double> [[ACC:%.*]], <vscale x 2 x double> [[OP1:%.*]], <vscale x 2 x double> [[OP2:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
vfloat64m2_t test_vfmacc_vv_f64m2_m(vbool32_t mask, vfloat64m2_t acc,
                                    vfloat64m2_t op1, vfloat64m2_t op2,
                                    size_t vl) {
  return vfmacc_vv_f64m2_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f64m2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x double> @llvm.riscv.vfmacc.mask.nxv2f64.f64.i64(<vscale x 2 x double> [[ACC:%.*]], double [[OP1:%.*]], <vscale x 2 x double> [[OP2:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
vfloat64m2_t test_vfmacc_vf_f64m2_m(vbool32_t mask, vfloat64m2_t acc,
                                    double op1, vfloat64m2_t op2, size_t vl) {
  return vfmacc_vf_f64m2_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f64m4_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x double> @llvm.riscv.vfmacc.mask.nxv4f64.nxv4f64.i64(<vscale x 4 x double> [[ACC:%.*]], <vscale x 4 x double> [[OP1:%.*]], <vscale x 4 x double> [[OP2:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x double> [[TMP0]]
//
vfloat64m4_t test_vfmacc_vv_f64m4_m(vbool16_t mask, vfloat64m4_t acc,
                                    vfloat64m4_t op1, vfloat64m4_t op2,
                                    size_t vl) {
  return vfmacc_vv_f64m4_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f64m4_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x double> @llvm.riscv.vfmacc.mask.nxv4f64.f64.i64(<vscale x 4 x double> [[ACC:%.*]], double [[OP1:%.*]], <vscale x 4 x double> [[OP2:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x double> [[TMP0]]
//
vfloat64m4_t test_vfmacc_vf_f64m4_m(vbool16_t mask, vfloat64m4_t acc,
                                    double op1, vfloat64m4_t op2, size_t vl) {
  return vfmacc_vf_f64m4_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f64m8_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x double> @llvm.riscv.vfmacc.mask.nxv8f64.nxv8f64.i64(<vscale x 8 x double> [[ACC:%.*]], <vscale x 8 x double> [[OP1:%.*]], <vscale x 8 x double> [[OP2:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x double> [[TMP0]]
//
vfloat64m8_t test_vfmacc_vv_f64m8_m(vbool8_t mask, vfloat64m8_t acc,
                                    vfloat64m8_t op1, vfloat64m8_t op2,
                                    size_t vl) {
  return vfmacc_vv_f64m8_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f64m8_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x double> @llvm.riscv.vfmacc.mask.nxv8f64.f64.i64(<vscale x 8 x double> [[ACC:%.*]], double [[OP1:%.*]], <vscale x 8 x double> [[OP2:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x double> [[TMP0]]
//
vfloat64m8_t test_vfmacc_vf_f64m8_m(vbool8_t mask, vfloat64m8_t acc, double op1,
                                    vfloat64m8_t op2, size_t vl) {
  return vfmacc_vf_f64m8_m(mask, acc, op1, op2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f16mf4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x half> @llvm.riscv.vfmacc.nxv1f16.nxv1f16.i64(<vscale x 1 x half> [[VD:%.*]], <vscale x 1 x half> [[VS1:%.*]], <vscale x 1 x half> [[VS2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x half> [[TMP0]]
//
vfloat16mf4_t test_vfmacc_vv_f16mf4 (vfloat16mf4_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmacc_vv_f16mf4(vd, vs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f16mf4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x half> @llvm.riscv.vfmacc.nxv1f16.f16.i64(<vscale x 1 x half> [[VD:%.*]], half [[RS1:%.*]], <vscale x 1 x half> [[VS2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x half> [[TMP0]]
//
vfloat16mf4_t test_vfmacc_vf_f16mf4 (vfloat16mf4_t vd, _Float16 rs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmacc_vf_f16mf4(vd, rs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f16mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x half> @llvm.riscv.vfmacc.nxv2f16.nxv2f16.i64(<vscale x 2 x half> [[VD:%.*]], <vscale x 2 x half> [[VS1:%.*]], <vscale x 2 x half> [[VS2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x half> [[TMP0]]
//
vfloat16mf2_t test_vfmacc_vv_f16mf2 (vfloat16mf2_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmacc_vv_f16mf2(vd, vs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f16mf2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x half> @llvm.riscv.vfmacc.nxv2f16.f16.i64(<vscale x 2 x half> [[VD:%.*]], half [[RS1:%.*]], <vscale x 2 x half> [[VS2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x half> [[TMP0]]
//
vfloat16mf2_t test_vfmacc_vf_f16mf2 (vfloat16mf2_t vd, _Float16 rs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmacc_vf_f16mf2(vd, rs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f16m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x half> @llvm.riscv.vfmacc.nxv4f16.nxv4f16.i64(<vscale x 4 x half> [[VD:%.*]], <vscale x 4 x half> [[VS1:%.*]], <vscale x 4 x half> [[VS2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x half> [[TMP0]]
//
vfloat16m1_t test_vfmacc_vv_f16m1 (vfloat16m1_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return vfmacc_vv_f16m1(vd, vs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f16m1(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x half> @llvm.riscv.vfmacc.nxv4f16.f16.i64(<vscale x 4 x half> [[VD:%.*]], half [[RS1:%.*]], <vscale x 4 x half> [[VS2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x half> [[TMP0]]
//
vfloat16m1_t test_vfmacc_vf_f16m1 (vfloat16m1_t vd, _Float16 rs1, vfloat16m1_t vs2, size_t vl) {
  return vfmacc_vf_f16m1(vd, rs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f16m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x half> @llvm.riscv.vfmacc.nxv8f16.nxv8f16.i64(<vscale x 8 x half> [[VD:%.*]], <vscale x 8 x half> [[VS1:%.*]], <vscale x 8 x half> [[VS2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
vfloat16m2_t test_vfmacc_vv_f16m2 (vfloat16m2_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return vfmacc_vv_f16m2(vd, vs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f16m2(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x half> @llvm.riscv.vfmacc.nxv8f16.f16.i64(<vscale x 8 x half> [[VD:%.*]], half [[RS1:%.*]], <vscale x 8 x half> [[VS2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
vfloat16m2_t test_vfmacc_vf_f16m2 (vfloat16m2_t vd, _Float16 rs1, vfloat16m2_t vs2, size_t vl) {
  return vfmacc_vf_f16m2(vd, rs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f16m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x half> @llvm.riscv.vfmacc.nxv16f16.nxv16f16.i64(<vscale x 16 x half> [[VD:%.*]], <vscale x 16 x half> [[VS1:%.*]], <vscale x 16 x half> [[VS2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x half> [[TMP0]]
//
vfloat16m4_t test_vfmacc_vv_f16m4 (vfloat16m4_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return vfmacc_vv_f16m4(vd, vs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f16m4(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x half> @llvm.riscv.vfmacc.nxv16f16.f16.i64(<vscale x 16 x half> [[VD:%.*]], half [[RS1:%.*]], <vscale x 16 x half> [[VS2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x half> [[TMP0]]
//
vfloat16m4_t test_vfmacc_vf_f16m4 (vfloat16m4_t vd, _Float16 rs1, vfloat16m4_t vs2, size_t vl) {
  return vfmacc_vf_f16m4(vd, rs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f16m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x half> @llvm.riscv.vfmacc.nxv32f16.nxv32f16.i64(<vscale x 32 x half> [[VD:%.*]], <vscale x 32 x half> [[VS1:%.*]], <vscale x 32 x half> [[VS2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x half> [[TMP0]]
//
vfloat16m8_t test_vfmacc_vv_f16m8 (vfloat16m8_t vd, vfloat16m8_t vs1, vfloat16m8_t vs2, size_t vl) {
  return vfmacc_vv_f16m8(vd, vs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f16m8(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x half> @llvm.riscv.vfmacc.nxv32f16.f16.i64(<vscale x 32 x half> [[VD:%.*]], half [[RS1:%.*]], <vscale x 32 x half> [[VS2:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x half> [[TMP0]]
//
vfloat16m8_t test_vfmacc_vf_f16m8 (vfloat16m8_t vd, _Float16 rs1, vfloat16m8_t vs2, size_t vl) {
  return vfmacc_vf_f16m8(vd, rs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f16mf4_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x half> @llvm.riscv.vfmacc.mask.nxv1f16.nxv1f16.i64(<vscale x 1 x half> [[VD:%.*]], <vscale x 1 x half> [[VS1:%.*]], <vscale x 1 x half> [[VS2:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x half> [[TMP0]]
//
vfloat16mf4_t test_vfmacc_vv_f16mf4_m (vbool64_t mask, vfloat16mf4_t vd, vfloat16mf4_t vs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmacc_vv_f16mf4_m(mask, vd, vs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f16mf4_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 1 x half> @llvm.riscv.vfmacc.mask.nxv1f16.f16.i64(<vscale x 1 x half> [[VD:%.*]], half [[RS1:%.*]], <vscale x 1 x half> [[VS2:%.*]], <vscale x 1 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 1 x half> [[TMP0]]
//
vfloat16mf4_t test_vfmacc_vf_f16mf4_m (vbool64_t mask, vfloat16mf4_t vd, _Float16 rs1, vfloat16mf4_t vs2, size_t vl) {
  return vfmacc_vf_f16mf4_m(mask, vd, rs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f16mf2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x half> @llvm.riscv.vfmacc.mask.nxv2f16.nxv2f16.i64(<vscale x 2 x half> [[VD:%.*]], <vscale x 2 x half> [[VS1:%.*]], <vscale x 2 x half> [[VS2:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x half> [[TMP0]]
//
vfloat16mf2_t test_vfmacc_vv_f16mf2_m (vbool32_t mask, vfloat16mf2_t vd, vfloat16mf2_t vs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmacc_vv_f16mf2_m(mask, vd, vs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f16mf2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x half> @llvm.riscv.vfmacc.mask.nxv2f16.f16.i64(<vscale x 2 x half> [[VD:%.*]], half [[RS1:%.*]], <vscale x 2 x half> [[VS2:%.*]], <vscale x 2 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 2 x half> [[TMP0]]
//
vfloat16mf2_t test_vfmacc_vf_f16mf2_m (vbool32_t mask, vfloat16mf2_t vd, _Float16 rs1, vfloat16mf2_t vs2, size_t vl) {
  return vfmacc_vf_f16mf2_m(mask, vd, rs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f16m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x half> @llvm.riscv.vfmacc.mask.nxv4f16.nxv4f16.i64(<vscale x 4 x half> [[VD:%.*]], <vscale x 4 x half> [[VS1:%.*]], <vscale x 4 x half> [[VS2:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x half> [[TMP0]]
//
vfloat16m1_t test_vfmacc_vv_f16m1_m (vbool16_t mask, vfloat16m1_t vd, vfloat16m1_t vs1, vfloat16m1_t vs2, size_t vl) {
  return vfmacc_vv_f16m1_m(mask, vd, vs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f16m1_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x half> @llvm.riscv.vfmacc.mask.nxv4f16.f16.i64(<vscale x 4 x half> [[VD:%.*]], half [[RS1:%.*]], <vscale x 4 x half> [[VS2:%.*]], <vscale x 4 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 4 x half> [[TMP0]]
//
vfloat16m1_t test_vfmacc_vf_f16m1_m (vbool16_t mask, vfloat16m1_t vd, _Float16 rs1, vfloat16m1_t vs2, size_t vl) {
  return vfmacc_vf_f16m1_m(mask, vd, rs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f16m2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x half> @llvm.riscv.vfmacc.mask.nxv8f16.nxv8f16.i64(<vscale x 8 x half> [[VD:%.*]], <vscale x 8 x half> [[VS1:%.*]], <vscale x 8 x half> [[VS2:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
vfloat16m2_t test_vfmacc_vv_f16m2_m (vbool8_t mask, vfloat16m2_t vd, vfloat16m2_t vs1, vfloat16m2_t vs2, size_t vl) {
  return vfmacc_vv_f16m2_m(mask, vd, vs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f16m2_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x half> @llvm.riscv.vfmacc.mask.nxv8f16.f16.i64(<vscale x 8 x half> [[VD:%.*]], half [[RS1:%.*]], <vscale x 8 x half> [[VS2:%.*]], <vscale x 8 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
vfloat16m2_t test_vfmacc_vf_f16m2_m (vbool8_t mask, vfloat16m2_t vd, _Float16 rs1, vfloat16m2_t vs2, size_t vl) {
  return vfmacc_vf_f16m2_m(mask, vd, rs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f16m4_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x half> @llvm.riscv.vfmacc.mask.nxv16f16.nxv16f16.i64(<vscale x 16 x half> [[VD:%.*]], <vscale x 16 x half> [[VS1:%.*]], <vscale x 16 x half> [[VS2:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x half> [[TMP0]]
//
vfloat16m4_t test_vfmacc_vv_f16m4_m (vbool4_t mask, vfloat16m4_t vd, vfloat16m4_t vs1, vfloat16m4_t vs2, size_t vl) {
  return vfmacc_vv_f16m4_m(mask, vd, vs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f16m4_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x half> @llvm.riscv.vfmacc.mask.nxv16f16.f16.i64(<vscale x 16 x half> [[VD:%.*]], half [[RS1:%.*]], <vscale x 16 x half> [[VS2:%.*]], <vscale x 16 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 16 x half> [[TMP0]]
//
vfloat16m4_t test_vfmacc_vf_f16m4_m (vbool4_t mask, vfloat16m4_t vd, _Float16 rs1, vfloat16m4_t vs2, size_t vl) {
  return vfmacc_vf_f16m4_m(mask, vd, rs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vv_f16m8_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x half> @llvm.riscv.vfmacc.mask.nxv32f16.nxv32f16.i64(<vscale x 32 x half> [[VD:%.*]], <vscale x 32 x half> [[VS1:%.*]], <vscale x 32 x half> [[VS2:%.*]], <vscale x 32 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x half> [[TMP0]]
//
vfloat16m8_t test_vfmacc_vv_f16m8_m (vbool2_t mask, vfloat16m8_t vd, vfloat16m8_t vs1, vfloat16m8_t vs2, size_t vl) {
  return vfmacc_vv_f16m8_m(mask, vd, vs1, vs2, vl);
}

// CHECK-RV64-LABEL: @test_vfmacc_vf_f16m8_m(
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call <vscale x 32 x half> @llvm.riscv.vfmacc.mask.nxv32f16.f16.i64(<vscale x 32 x half> [[VD:%.*]], half [[RS1:%.*]], <vscale x 32 x half> [[VS2:%.*]], <vscale x 32 x i1> [[MASK:%.*]], i64 [[VL:%.*]])
// CHECK-RV64-NEXT:    ret <vscale x 32 x half> [[TMP0]]
//
vfloat16m8_t test_vfmacc_vf_f16m8_m (vbool2_t mask, vfloat16m8_t vd, _Float16 rs1, vfloat16m8_t vs2, size_t vl) {
  return vfmacc_vf_f16m8_m(mask, vd, rs1, vs2, vl);
}
