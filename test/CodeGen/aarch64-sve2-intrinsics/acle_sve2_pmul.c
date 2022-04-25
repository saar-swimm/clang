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

// CHECK-LABEL: @test_svpmul_u8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i8> @llvm.aarch64.sve.pmul.nxv16i8(<vscale x 16 x i8> [[OP1:%.*]], <vscale x 16 x i8> [[OP2:%.*]])
// CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z14test_svpmul_u8u11__SVUint8_tu11__SVUint8_t(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 16 x i8> @llvm.aarch64.sve.pmul.nxv16i8(<vscale x 16 x i8> [[OP1:%.*]], <vscale x 16 x i8> [[OP2:%.*]])
// CPP-CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP0]]
//
svuint8_t test_svpmul_u8(svuint8_t op1, svuint8_t op2)
{
  // overload-warning@+2 {{implicit declaration of function 'svpmul'}}
  // expected-warning@+1 {{implicit declaration of function 'svpmul_u8'}}
  return SVE_ACLE_FUNC(svpmul,_u8,,)(op1, op2);
}

// CHECK-LABEL: @test_svpmul_n_u8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 16 x i8> poison, i8 [[OP2:%.*]], i32 0
// CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 16 x i8> [[DOTSPLATINSERT]], <vscale x 16 x i8> poison, <vscale x 16 x i32> zeroinitializer
// CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 16 x i8> @llvm.aarch64.sve.pmul.nxv16i8(<vscale x 16 x i8> [[OP1:%.*]], <vscale x 16 x i8> [[TMP0]])
// CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP1]]
//
// CPP-CHECK-LABEL: @_Z16test_svpmul_n_u8u11__SVUint8_th(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[DOTSPLATINSERT:%.*]] = insertelement <vscale x 16 x i8> poison, i8 [[OP2:%.*]], i32 0
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = shufflevector <vscale x 16 x i8> [[DOTSPLATINSERT]], <vscale x 16 x i8> poison, <vscale x 16 x i32> zeroinitializer
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 16 x i8> @llvm.aarch64.sve.pmul.nxv16i8(<vscale x 16 x i8> [[OP1:%.*]], <vscale x 16 x i8> [[TMP0]])
// CPP-CHECK-NEXT:    ret <vscale x 16 x i8> [[TMP1]]
//
svuint8_t test_svpmul_n_u8(svuint8_t op1, uint8_t op2)
{
  // overload-warning@+2 {{implicit declaration of function 'svpmul'}}
  // expected-warning@+1 {{implicit declaration of function 'svpmul_n_u8'}}
  return SVE_ACLE_FUNC(svpmul,_n_u8,,)(op1, op2);
}
