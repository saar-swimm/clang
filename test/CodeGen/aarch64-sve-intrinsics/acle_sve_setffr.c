// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: aarch64-registered-target
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sve -fallow-half-arguments-and-returns -S -O1 -Werror -Wall -emit-llvm -o - %s | FileCheck %s
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sve -fallow-half-arguments-and-returns -S -O1 -Werror -Wall -emit-llvm -o - -x c++ %s | FileCheck %s -check-prefix=CPP-CHECK
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sve -fallow-half-arguments-and-returns -S -O1 -Werror -o /dev/null %s
#include <arm_sve.h>

// CHECK-LABEL: @test_svsetffr(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    call void @llvm.aarch64.sve.setffr()
// CHECK-NEXT:    ret void
//
// CPP-CHECK-LABEL: @_Z13test_svsetffrv(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    call void @llvm.aarch64.sve.setffr()
// CPP-CHECK-NEXT:    ret void
//
void test_svsetffr()
{
  svsetffr();
}
