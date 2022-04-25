// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: aarch64-registered-target

// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sve2 -fallow-half-arguments-and-returns -S -O1 -Werror -Wall -emit-llvm -o - %s | FileCheck %s
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sve2 -fallow-half-arguments-and-returns -S -O1 -Werror -Wall -emit-llvm -o - -x c++ %s | FileCheck %s -check-prefix=CPP-CHECK
// RUN: %clang_cc1 -DSVE_OVERLOADED_FORMS -triple aarch64-none-linux-gnu -target-feature +sve2 -fallow-half-arguments-and-returns -S -O1 -Werror -Wall -emit-llvm -o - %s | FileCheck %s
// RUN: %clang_cc1 -DSVE_OVERLOADED_FORMS -triple aarch64-none-linux-gnu -target-feature +sve2 -fallow-half-arguments-and-returns -S -O1 -Werror -Wall -emit-llvm -o - -x c++ %s | FileCheck %s -check-prefix=CPP-CHECK
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sve -fallow-half-arguments-and-returns -fsyntax-only -verify -verify-ignore-unexpected=error %s
// RUN: %clang_cc1 -DSVE_OVERLOADED_FORMS -triple aarch64-none-linux-gnu -target-feature +sve -fallow-half-arguments-and-returns -fsyntax-only -verify=overload -verify-ignore-unexpected=error %s

#include <arm_sve.h>

#ifdef SVE_OVERLOADED_FORMS
// A simple used,unused... macro, long enough to represent any SVE builtin.
#define SVE_ACLE_FUNC(A1,A2_UNUSED,A3,A4_UNUSED) A1##A3
#else
#define SVE_ACLE_FUNC(A1,A2,A3,A4) A1##A2##A3##A4
#endif

// CHECK-LABEL: @test_svbsl_s8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i8> @llvm.aarch64.sve.bsl.nxv16i8(<vscale x 16 x i8> [[OP1:%.*]], <vscale x 16 x i8> [[OP2:%.*]], <vscale x 16 x i8> [[OP3:%.*]])
// CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z13test_svbsl_s8u10__SVInt8_tu10__SVInt8_tu10__SVInt8_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i8> @llvm.aarch64.sve.bsl.nxv16i8(<vscale x 16 x i8> [[OP1:%.*]], <vscale x 16 x i8> [[OP2:%.*]], <vscale x 16 x i8> [[OP3:%.*]])
// CPP-CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
svint8_t test_svbsl_s8(svint8_t op1, svint8_t op2, svint8_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_s8'}}
  return SVE_ACLE_FUNC(svbsl,_s8,,)(op1, op2, op3);
}

// CHECK-LABEL: @test_svbsl_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i16> @llvm.aarch64.sve.bsl.nxv8i16(<vscale x 8 x i16> [[OP1:%.*]], <vscale x 8 x i16> [[OP2:%.*]], <vscale x 8 x i16> [[OP3:%.*]])
// CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z14test_svbsl_s16u11__SVInt16_tu11__SVInt16_tu11__SVInt16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i16> @llvm.aarch64.sve.bsl.nxv8i16(<vscale x 8 x i16> [[OP1:%.*]], <vscale x 8 x i16> [[OP2:%.*]], <vscale x 8 x i16> [[OP3:%.*]])
// CPP-CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP0]]
//
svint16_t test_svbsl_s16(svint16_t op1, svint16_t op2, svint16_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_s16'}}
  return SVE_ACLE_FUNC(svbsl,_s16,,)(op1, op2, op3);
}

// CHECK-LABEL: @test_svbsl_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.aarch64.sve.bsl.nxv4i32(<vscale x 4 x i32> [[OP1:%.*]], <vscale x 4 x i32> [[OP2:%.*]], <vscale x 4 x i32> [[OP3:%.*]])
// CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z14test_svbsl_s32u11__SVInt32_tu11__SVInt32_tu11__SVInt32_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.aarch64.sve.bsl.nxv4i32(<vscale x 4 x i32> [[OP1:%.*]], <vscale x 4 x i32> [[OP2:%.*]], <vscale x 4 x i32> [[OP3:%.*]])
// CPP-CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
svint32_t test_svbsl_s32(svint32_t op1, svint32_t op2, svint32_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_s32'}}
  return SVE_ACLE_FUNC(svbsl,_s32,,)(op1, op2, op3);
}

// CHECK-LABEL: @test_svbsl_s64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i64> @llvm.aarch64.sve.bsl.nxv2i64(<vscale x 2 x i64> [[OP1:%.*]], <vscale x 2 x i64> [[OP2:%.*]], <vscale x 2 x i64> [[OP3:%.*]])
// CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z14test_svbsl_s64u11__SVInt64_tu11__SVInt64_tu11__SVInt64_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i64> @llvm.aarch64.sve.bsl.nxv2i64(<vscale x 2 x i64> [[OP1:%.*]], <vscale x 2 x i64> [[OP2:%.*]], <vscale x 2 x i64> [[OP3:%.*]])
// CPP-CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
svint64_t test_svbsl_s64(svint64_t op1, svint64_t op2, svint64_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_s64'}}
  return SVE_ACLE_FUNC(svbsl,_s64,,)(op1, op2, op3);
}

// CHECK-LABEL: @test_svbsl_u8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i8> @llvm.aarch64.sve.bsl.nxv16i8(<vscale x 16 x i8> [[OP1:%.*]], <vscale x 16 x i8> [[OP2:%.*]], <vscale x 16 x i8> [[OP3:%.*]])
// CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z13test_svbsl_u8u11__SVUint8_tu11__SVUint8_tu11__SVUint8_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i8> @llvm.aarch64.sve.bsl.nxv16i8(<vscale x 16 x i8> [[OP1:%.*]], <vscale x 16 x i8> [[OP2:%.*]], <vscale x 16 x i8> [[OP3:%.*]])
// CPP-CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
svuint8_t test_svbsl_u8(svuint8_t op1, svuint8_t op2, svuint8_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_u8'}}
  return SVE_ACLE_FUNC(svbsl,_u8,,)(op1, op2, op3);
}

// CHECK-LABEL: @test_svbsl_u16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i16> @llvm.aarch64.sve.bsl.nxv8i16(<vscale x 8 x i16> [[OP1:%.*]], <vscale x 8 x i16> [[OP2:%.*]], <vscale x 8 x i16> [[OP3:%.*]])
// CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z14test_svbsl_u16u12__SVUint16_tu12__SVUint16_tu12__SVUint16_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 8 x i16> @llvm.aarch64.sve.bsl.nxv8i16(<vscale x 8 x i16> [[OP1:%.*]], <vscale x 8 x i16> [[OP2:%.*]], <vscale x 8 x i16> [[OP3:%.*]])
// CPP-CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP0]]
//
svuint16_t test_svbsl_u16(svuint16_t op1, svuint16_t op2, svuint16_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_u16'}}
  return SVE_ACLE_FUNC(svbsl,_u16,,)(op1, op2, op3);
}

// CHECK-LABEL: @test_svbsl_u32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.aarch64.sve.bsl.nxv4i32(<vscale x 4 x i32> [[OP1:%.*]], <vscale x 4 x i32> [[OP2:%.*]], <vscale x 4 x i32> [[OP3:%.*]])
// CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z14test_svbsl_u32u12__SVUint32_tu12__SVUint32_tu12__SVUint32_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 4 x i32> @llvm.aarch64.sve.bsl.nxv4i32(<vscale x 4 x i32> [[OP1:%.*]], <vscale x 4 x i32> [[OP2:%.*]], <vscale x 4 x i32> [[OP3:%.*]])
// CPP-CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP0]]
//
svuint32_t test_svbsl_u32(svuint32_t op1, svuint32_t op2, svuint32_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_u32'}}
  return SVE_ACLE_FUNC(svbsl,_u32,,)(op1, op2, op3);
}

// CHECK-LABEL: @test_svbsl_u64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i64> @llvm.aarch64.sve.bsl.nxv2i64(<vscale x 2 x i64> [[OP1:%.*]], <vscale x 2 x i64> [[OP2:%.*]], <vscale x 2 x i64> [[OP3:%.*]])
// CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z14test_svbsl_u64u12__SVUint64_tu12__SVUint64_tu12__SVUint64_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i64> @llvm.aarch64.sve.bsl.nxv2i64(<vscale x 2 x i64> [[OP1:%.*]], <vscale x 2 x i64> [[OP2:%.*]], <vscale x 2 x i64> [[OP3:%.*]])
// CPP-CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP0]]
//
svuint64_t test_svbsl_u64(svuint64_t op1, svuint64_t op2, svuint64_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_u64'}}
  return SVE_ACLE_FUNC(svbsl,_u64,,)(op1, op2, op3);
}

// CHECK-LABEL: @test_svbsl_n_s8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 16 x i8> poison, i8 [[OP3:%.*]], i32 0
// CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 16 x i8> [[DOTSPLATINSERT]], <vscale x 16 x i8> poison, <vscale x 16 x i32> zeroinitializer
// CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 16 x i8> @llvm.aarch64.sve.bsl.nxv16i8(<vscale x 16 x i8> [[OP1:%.*]], <vscale x 16 x i8> [[OP2:%.*]], <vscale x 16 x i8> [[TMP0]])
// CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP1]]
//
// CPP-CHECK-LABEL: @_Z15test_svbsl_n_s8u10__SVInt8_tu10__SVInt8_ta(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 16 x i8> poison, i8 [[OP3:%.*]], i32 0
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 16 x i8> [[DOTSPLATINSERT]], <vscale x 16 x i8> poison, <vscale x 16 x i32> zeroinitializer
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 16 x i8> @llvm.aarch64.sve.bsl.nxv16i8(<vscale x 16 x i8> [[OP1:%.*]], <vscale x 16 x i8> [[OP2:%.*]], <vscale x 16 x i8> [[TMP0]])
// CPP-CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP1]]
//
svint8_t test_svbsl_n_s8(svint8_t op1, svint8_t op2, int8_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_n_s8'}}
  return SVE_ACLE_FUNC(svbsl,_n_s8,,)(op1, op2, op3);
}

// CHECK-LABEL: @test_svbsl_n_s16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 8 x i16> poison, i16 [[OP3:%.*]], i32 0
// CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 8 x i16> [[DOTSPLATINSERT]], <vscale x 8 x i16> poison, <vscale x 8 x i32> zeroinitializer
// CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 8 x i16> @llvm.aarch64.sve.bsl.nxv8i16(<vscale x 8 x i16> [[OP1:%.*]], <vscale x 8 x i16> [[OP2:%.*]], <vscale x 8 x i16> [[TMP0]])
// CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP1]]
//
// CPP-CHECK-LABEL: @_Z16test_svbsl_n_s16u11__SVInt16_tu11__SVInt16_ts(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 8 x i16> poison, i16 [[OP3:%.*]], i32 0
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 8 x i16> [[DOTSPLATINSERT]], <vscale x 8 x i16> poison, <vscale x 8 x i32> zeroinitializer
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 8 x i16> @llvm.aarch64.sve.bsl.nxv8i16(<vscale x 8 x i16> [[OP1:%.*]], <vscale x 8 x i16> [[OP2:%.*]], <vscale x 8 x i16> [[TMP0]])
// CPP-CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP1]]
//
svint16_t test_svbsl_n_s16(svint16_t op1, svint16_t op2, int16_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_n_s16'}}
  return SVE_ACLE_FUNC(svbsl,_n_s16,,)(op1, op2, op3);
}

// CHECK-LABEL: @test_svbsl_n_s32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 4 x i32> poison, i32 [[OP3:%.*]], i32 0
// CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 4 x i32> [[DOTSPLATINSERT]], <vscale x 4 x i32> poison, <vscale x 4 x i32> zeroinitializer
// CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 4 x i32> @llvm.aarch64.sve.bsl.nxv4i32(<vscale x 4 x i32> [[OP1:%.*]], <vscale x 4 x i32> [[OP2:%.*]], <vscale x 4 x i32> [[TMP0]])
// CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP1]]
//
// CPP-CHECK-LABEL: @_Z16test_svbsl_n_s32u11__SVInt32_tu11__SVInt32_ti(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 4 x i32> poison, i32 [[OP3:%.*]], i32 0
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 4 x i32> [[DOTSPLATINSERT]], <vscale x 4 x i32> poison, <vscale x 4 x i32> zeroinitializer
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 4 x i32> @llvm.aarch64.sve.bsl.nxv4i32(<vscale x 4 x i32> [[OP1:%.*]], <vscale x 4 x i32> [[OP2:%.*]], <vscale x 4 x i32> [[TMP0]])
// CPP-CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP1]]
//
svint32_t test_svbsl_n_s32(svint32_t op1, svint32_t op2, int32_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_n_s32'}}
  return SVE_ACLE_FUNC(svbsl,_n_s32,,)(op1, op2, op3);
}

// CHECK-LABEL: @test_svbsl_n_s64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 2 x i64> poison, i64 [[OP3:%.*]], i32 0
// CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 2 x i64> [[DOTSPLATINSERT]], <vscale x 2 x i64> poison, <vscale x 2 x i32> zeroinitializer
// CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 2 x i64> @llvm.aarch64.sve.bsl.nxv2i64(<vscale x 2 x i64> [[OP1:%.*]], <vscale x 2 x i64> [[OP2:%.*]], <vscale x 2 x i64> [[TMP0]])
// CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP1]]
//
// CPP-CHECK-LABEL: @_Z16test_svbsl_n_s64u11__SVInt64_tu11__SVInt64_tl(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 2 x i64> poison, i64 [[OP3:%.*]], i32 0
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 2 x i64> [[DOTSPLATINSERT]], <vscale x 2 x i64> poison, <vscale x 2 x i32> zeroinitializer
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 2 x i64> @llvm.aarch64.sve.bsl.nxv2i64(<vscale x 2 x i64> [[OP1:%.*]], <vscale x 2 x i64> [[OP2:%.*]], <vscale x 2 x i64> [[TMP0]])
// CPP-CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP1]]
//
svint64_t test_svbsl_n_s64(svint64_t op1, svint64_t op2, int64_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_n_s64'}}
  return SVE_ACLE_FUNC(svbsl,_n_s64,,)(op1, op2, op3);
}

// CHECK-LABEL: @test_svbsl_n_u8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 16 x i8> poison, i8 [[OP3:%.*]], i32 0
// CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 16 x i8> [[DOTSPLATINSERT]], <vscale x 16 x i8> poison, <vscale x 16 x i32> zeroinitializer
// CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 16 x i8> @llvm.aarch64.sve.bsl.nxv16i8(<vscale x 16 x i8> [[OP1:%.*]], <vscale x 16 x i8> [[OP2:%.*]], <vscale x 16 x i8> [[TMP0]])
// CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP1]]
//
// CPP-CHECK-LABEL: @_Z15test_svbsl_n_u8u11__SVUint8_tu11__SVUint8_th(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 16 x i8> poison, i8 [[OP3:%.*]], i32 0
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 16 x i8> [[DOTSPLATINSERT]], <vscale x 16 x i8> poison, <vscale x 16 x i32> zeroinitializer
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 16 x i8> @llvm.aarch64.sve.bsl.nxv16i8(<vscale x 16 x i8> [[OP1:%.*]], <vscale x 16 x i8> [[OP2:%.*]], <vscale x 16 x i8> [[TMP0]])
// CPP-CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP1]]
//
svuint8_t test_svbsl_n_u8(svuint8_t op1, svuint8_t op2, uint8_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_n_u8'}}
  return SVE_ACLE_FUNC(svbsl,_n_u8,,)(op1, op2, op3);
}

// CHECK-LABEL: @test_svbsl_n_u16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 8 x i16> poison, i16 [[OP3:%.*]], i32 0
// CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 8 x i16> [[DOTSPLATINSERT]], <vscale x 8 x i16> poison, <vscale x 8 x i32> zeroinitializer
// CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 8 x i16> @llvm.aarch64.sve.bsl.nxv8i16(<vscale x 8 x i16> [[OP1:%.*]], <vscale x 8 x i16> [[OP2:%.*]], <vscale x 8 x i16> [[TMP0]])
// CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP1]]
//
// CPP-CHECK-LABEL: @_Z16test_svbsl_n_u16u12__SVUint16_tu12__SVUint16_tt(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 8 x i16> poison, i16 [[OP3:%.*]], i32 0
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 8 x i16> [[DOTSPLATINSERT]], <vscale x 8 x i16> poison, <vscale x 8 x i32> zeroinitializer
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 8 x i16> @llvm.aarch64.sve.bsl.nxv8i16(<vscale x 8 x i16> [[OP1:%.*]], <vscale x 8 x i16> [[OP2:%.*]], <vscale x 8 x i16> [[TMP0]])
// CPP-CHECK-NEXT:    ret <vscale x 8 x i16> [[TMP1]]
//
svuint16_t test_svbsl_n_u16(svuint16_t op1, svuint16_t op2, uint16_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_n_u16'}}
  return SVE_ACLE_FUNC(svbsl,_n_u16,,)(op1, op2, op3);
}

// CHECK-LABEL: @test_svbsl_n_u32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 4 x i32> poison, i32 [[OP3:%.*]], i32 0
// CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 4 x i32> [[DOTSPLATINSERT]], <vscale x 4 x i32> poison, <vscale x 4 x i32> zeroinitializer
// CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 4 x i32> @llvm.aarch64.sve.bsl.nxv4i32(<vscale x 4 x i32> [[OP1:%.*]], <vscale x 4 x i32> [[OP2:%.*]], <vscale x 4 x i32> [[TMP0]])
// CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP1]]
//
// CPP-CHECK-LABEL: @_Z16test_svbsl_n_u32u12__SVUint32_tu12__SVUint32_tj(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 4 x i32> poison, i32 [[OP3:%.*]], i32 0
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 4 x i32> [[DOTSPLATINSERT]], <vscale x 4 x i32> poison, <vscale x 4 x i32> zeroinitializer
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 4 x i32> @llvm.aarch64.sve.bsl.nxv4i32(<vscale x 4 x i32> [[OP1:%.*]], <vscale x 4 x i32> [[OP2:%.*]], <vscale x 4 x i32> [[TMP0]])
// CPP-CHECK-NEXT:    ret <vscale x 4 x i32> [[TMP1]]
//
svuint32_t test_svbsl_n_u32(svuint32_t op1, svuint32_t op2, uint32_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_n_u32'}}
  return SVE_ACLE_FUNC(svbsl,_n_u32,,)(op1, op2, op3);
}

// CHECK-LABEL: @test_svbsl_n_u64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 2 x i64> poison, i64 [[OP3:%.*]], i32 0
// CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 2 x i64> [[DOTSPLATINSERT]], <vscale x 2 x i64> poison, <vscale x 2 x i32> zeroinitializer
// CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 2 x i64> @llvm.aarch64.sve.bsl.nxv2i64(<vscale x 2 x i64> [[OP1:%.*]], <vscale x 2 x i64> [[OP2:%.*]], <vscale x 2 x i64> [[TMP0]])
// CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP1]]
//
// CPP-CHECK-LABEL: @_Z16test_svbsl_n_u64u12__SVUint64_tu12__SVUint64_tm(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 2 x i64> poison, i64 [[OP3:%.*]], i32 0
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 2 x i64> [[DOTSPLATINSERT]], <vscale x 2 x i64> poison, <vscale x 2 x i32> zeroinitializer
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 2 x i64> @llvm.aarch64.sve.bsl.nxv2i64(<vscale x 2 x i64> [[OP1:%.*]], <vscale x 2 x i64> [[OP2:%.*]], <vscale x 2 x i64> [[TMP0]])
// CPP-CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP1]]
//
svuint64_t test_svbsl_n_u64(svuint64_t op1, svuint64_t op2, uint64_t op3)
{
  // overload-warning@+2 {{implicit declaration of function 'svbsl'}}
  // expected-warning@+1 {{implicit declaration of function 'svbsl_n_u64'}}
  return SVE_ACLE_FUNC(svbsl,_n_u64,,)(op1, op2, op3);
}
