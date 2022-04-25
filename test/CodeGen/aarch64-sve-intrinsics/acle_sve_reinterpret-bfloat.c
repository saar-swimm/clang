// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: aarch64-registered-target
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sve -target-feature +bf16 -fallow-half-arguments-and-returns -S -O1 -Werror -Wall -emit-llvm -o - %s | FileCheck %s
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sve -target-feature +bf16 -fallow-half-arguments-and-returns -S -O1 -Werror -Wall -emit-llvm -o - -x c++ %s | FileCheck %s -check-prefix=CPP-CHECK
// RUN: %clang_cc1 -DSVE_OVERLOADED_FORMS -triple aarch64-none-linux-gnu -target-feature +sve -target-feature +bf16 -fallow-half-arguments-and-returns -S -O1 -Werror -Wall -emit-llvm -o - %s | FileCheck %s
// RUN: %clang_cc1 -DSVE_OVERLOADED_FORMS -triple aarch64-none-linux-gnu -target-feature +sve -target-feature +bf16 -fallow-half-arguments-and-returns -S -O1 -Werror -Wall -emit-llvm -o - -x c++ %s | FileCheck %s -check-prefix=CPP-CHECK

// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sve -target-feature +bf16 -fallow-half-arguments-and-returns -S -O1 -Werror -Wall -o /dev/null %s

#include <arm_sve.h>

#ifdef SVE_OVERLOADED_FORMS
// A simple used,unused... macro, long enough to represent any SVE builtin.
#define SVE_ACLE_FUNC(A1, A2_UNUSED, A3, A4_UNUSED) A1##A3
#else
#define SVE_ACLE_FUNC(A1, A2, A3, A4) A1##A2##A3##A4
#endif

// CHECK-LABEL: @test_svreinterpret_s8_bf16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 16 x i8>
// CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z26test_svreinterpret_s8_bf16u14__SVBFloat16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 16 x i8>
// CPP-CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
svint8_t test_svreinterpret_s8_bf16(svbfloat16_t op) {
  return SVE_ACLE_FUNC(svreinterpret_s8, _bf16, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_s16_bf16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 8 x i16>
// CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_s16_bf16u14__SVBFloat16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 8 x i16>
// CPP-CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP0]]
//
svint16_t test_svreinterpret_s16_bf16(svbfloat16_t op) {
  return SVE_ACLE_FUNC(svreinterpret_s16, _bf16, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_s32_bf16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 4 x i32>
// CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_s32_bf16u14__SVBFloat16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 4 x i32>
// CPP-CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
svint32_t test_svreinterpret_s32_bf16(svbfloat16_t op) {
  return SVE_ACLE_FUNC(svreinterpret_s32, _bf16, , )(op);
}
// CHECK-LABEL: @test_svreinterpret_s64_bf16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 2 x i64>
// CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_s64_bf16u14__SVBFloat16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 2 x i64>
// CPP-CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
svint64_t test_svreinterpret_s64_bf16(svbfloat16_t op) {
  return SVE_ACLE_FUNC(svreinterpret_s64, _bf16, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_u8_bf16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 16 x i8>
// CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z26test_svreinterpret_u8_bf16u14__SVBFloat16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 16 x i8>
// CPP-CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
svuint8_t test_svreinterpret_u8_bf16(svbfloat16_t op) {
  return SVE_ACLE_FUNC(svreinterpret_u8, _bf16, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_u16_bf16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 8 x i16>
// CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_u16_bf16u14__SVBFloat16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 8 x i16>
// CPP-CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP0]]
//
svuint16_t test_svreinterpret_u16_bf16(svbfloat16_t op) {
  return SVE_ACLE_FUNC(svreinterpret_u16, _bf16, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_u32_bf16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 4 x i32>
// CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_u32_bf16u14__SVBFloat16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 4 x i32>
// CPP-CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
svuint32_t test_svreinterpret_u32_bf16(svbfloat16_t op) {
  return SVE_ACLE_FUNC(svreinterpret_u32, _bf16, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_u64_bf16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 2 x i64>
// CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_u64_bf16u14__SVBFloat16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 2 x i64>
// CPP-CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
svuint64_t test_svreinterpret_u64_bf16(svbfloat16_t op) {
  return SVE_ACLE_FUNC(svreinterpret_u64, _bf16, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_bf16_s8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 16 x i8> [[OP:%.*]] to <vscale x 8 x bfloat>
// CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z26test_svreinterpret_bf16_s8u10__SVInt8_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 16 x i8> [[OP:%.*]] to <vscale x 8 x bfloat>
// CPP-CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
svbfloat16_t test_svreinterpret_bf16_s8(svint8_t op) {
  return SVE_ACLE_FUNC(svreinterpret_bf16, _s8, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_bf16_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x i16> [[OP:%.*]] to <vscale x 8 x bfloat>
// CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_bf16_s16u11__SVInt16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x i16> [[OP:%.*]] to <vscale x 8 x bfloat>
// CPP-CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
svbfloat16_t test_svreinterpret_bf16_s16(svint16_t op) {
  return SVE_ACLE_FUNC(svreinterpret_bf16, _s16, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_bf16_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 4 x i32> [[OP:%.*]] to <vscale x 8 x bfloat>
// CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_bf16_s32u11__SVInt32_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 4 x i32> [[OP:%.*]] to <vscale x 8 x bfloat>
// CPP-CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
svbfloat16_t test_svreinterpret_bf16_s32(svint32_t op) {
  return SVE_ACLE_FUNC(svreinterpret_bf16, _s32, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_bf16_s64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 2 x i64> [[OP:%.*]] to <vscale x 8 x bfloat>
// CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_bf16_s64u11__SVInt64_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 2 x i64> [[OP:%.*]] to <vscale x 8 x bfloat>
// CPP-CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
svbfloat16_t test_svreinterpret_bf16_s64(svint64_t op) {
  return SVE_ACLE_FUNC(svreinterpret_bf16, _s64, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_bf16_u8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 16 x i8> [[OP:%.*]] to <vscale x 8 x bfloat>
// CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z26test_svreinterpret_bf16_u8u11__SVUint8_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 16 x i8> [[OP:%.*]] to <vscale x 8 x bfloat>
// CPP-CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
svbfloat16_t test_svreinterpret_bf16_u8(svuint8_t op) {
  return SVE_ACLE_FUNC(svreinterpret_bf16, _u8, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_bf16_u16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x i16> [[OP:%.*]] to <vscale x 8 x bfloat>
// CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_bf16_u16u12__SVUint16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x i16> [[OP:%.*]] to <vscale x 8 x bfloat>
// CPP-CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
svbfloat16_t test_svreinterpret_bf16_u16(svuint16_t op) {
  return SVE_ACLE_FUNC(svreinterpret_bf16, _u16, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_bf16_u32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 4 x i32> [[OP:%.*]] to <vscale x 8 x bfloat>
// CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_bf16_u32u12__SVUint32_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 4 x i32> [[OP:%.*]] to <vscale x 8 x bfloat>
// CPP-CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
svbfloat16_t test_svreinterpret_bf16_u32(svuint32_t op) {
  return SVE_ACLE_FUNC(svreinterpret_bf16, _u32, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_bf16_u64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 2 x i64> [[OP:%.*]] to <vscale x 8 x bfloat>
// CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_bf16_u64u12__SVUint64_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 2 x i64> [[OP:%.*]] to <vscale x 8 x bfloat>
// CPP-CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
svbfloat16_t test_svreinterpret_bf16_u64(svuint64_t op) {
  return SVE_ACLE_FUNC(svreinterpret_bf16, _u64, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_bf16_bf16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    ret <vscale x 8 x bfloat> [[OP:%.*]]
//
// CPP-CHECK-LABEL: @_Z28test_svreinterpret_bf16_bf16u14__SVBFloat16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    ret <vscale x 8 x bfloat> [[OP:%.*]]
//
svbfloat16_t test_svreinterpret_bf16_bf16(svbfloat16_t op) {
  return SVE_ACLE_FUNC(svreinterpret_bf16, _bf16, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_bf16_f16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x half> [[OP:%.*]] to <vscale x 8 x bfloat>
// CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_bf16_f16u13__SVFloat16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x half> [[OP:%.*]] to <vscale x 8 x bfloat>
// CPP-CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
svbfloat16_t test_svreinterpret_bf16_f16(svfloat16_t op) {
  return SVE_ACLE_FUNC(svreinterpret_bf16, _f16, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_bf16_f32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 4 x float> [[OP:%.*]] to <vscale x 8 x bfloat>
// CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_bf16_f32u13__SVFloat32_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 4 x float> [[OP:%.*]] to <vscale x 8 x bfloat>
// CPP-CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
svbfloat16_t test_svreinterpret_bf16_f32(svfloat32_t op) {
  return SVE_ACLE_FUNC(svreinterpret_bf16, _f32, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_bf16_f64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 2 x double> [[OP:%.*]] to <vscale x 8 x bfloat>
// CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_bf16_f64u13__SVFloat64_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 2 x double> [[OP:%.*]] to <vscale x 8 x bfloat>
// CPP-CHECK-NEXT:    ret <vscale x 8 x bfloat> [[TMP0]]
//
svbfloat16_t test_svreinterpret_bf16_f64(svfloat64_t op) {
  return SVE_ACLE_FUNC(svreinterpret_bf16, _f64, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_f32_bf16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 4 x float>
// CHECK-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_f32_bf16u14__SVBFloat16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 4 x float>
// CPP-CHECK-NEXT:    ret <vscale x 4 x float> [[TMP0]]
//
svfloat32_t test_svreinterpret_f32_bf16(svbfloat16_t op) {
  return SVE_ACLE_FUNC(svreinterpret_f32, _bf16, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_f16_bf16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 8 x half>
// CHECK-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_f16_bf16u14__SVBFloat16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 8 x half>
// CPP-CHECK-NEXT:    ret <vscale x 8 x half> [[TMP0]]
//
svfloat16_t test_svreinterpret_f16_bf16(svbfloat16_t op) {
  return SVE_ACLE_FUNC(svreinterpret_f16, _bf16, , )(op);
}

// CHECK-LABEL: @test_svreinterpret_f64_bf16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 2 x double>
// CHECK-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z27test_svreinterpret_f64_bf16u14__SVBFloat16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = bitcast <vscale x 8 x bfloat> [[OP:%.*]] to <vscale x 2 x double>
// CPP-CHECK-NEXT:    ret <vscale x 2 x double> [[TMP0]]
//
svfloat64_t test_svreinterpret_f64_bf16(svbfloat16_t op) {
  return SVE_ACLE_FUNC(svreinterpret_f64, _bf16, , )(op);
}
