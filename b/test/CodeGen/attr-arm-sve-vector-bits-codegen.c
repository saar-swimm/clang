// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sve -target-feature +bf16 -mvscale-min=4 -mvscale-max=4 -fallow-half-arguments-and-returns -S -disable-llvm-passes -emit-llvm -o - %s | FileCheck %s

// REQUIRES: aarch64-registered-target

#include <arm_sve.h>

#define N __ARM_FEATURE_SVE_BITS

typedef svint32_t fixed_int32_t __attribute__((arm_sve_vector_bits(N)));
typedef svbool_t fixed_bool_t __attribute__((arm_sve_vector_bits(N)));
typedef uint8_t uint8_vec_t __attribute__((vector_size(N / 64)));

fixed_bool_t global_pred;
fixed_int32_t global_vec;

// CHECK-LABEL: @foo(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[RETVAL:%.*]] = alloca <16 x i32>, align 16
// CHECK-NEXT:    [[PRED_ADDR:%.*]] = alloca <vscale x 16 x i1>, align 2
// CHECK-NEXT:    [[VEC_ADDR:%.*]] = alloca <vscale x 4 x i32>, align 16
// CHECK-NEXT:    [[PG:%.*]] = alloca <vscale x 16 x i1>, align 2
// CHECK-NEXT:    store <vscale x 16 x i1> [[PRED:%.*]], <vscale x 16 x i1>* [[PRED_ADDR]], align 2
// CHECK-NEXT:    store <vscale x 4 x i32> [[VEC:%.*]], <vscale x 4 x i32>* [[VEC_ADDR]], align 16
// CHECK-NEXT:    [[TMP0:%.*]] = load <vscale x 16 x i1>, <vscale x 16 x i1>* [[PRED_ADDR]], align 2
// CHECK-NEXT:    [[TMP1:%.*]] = load <8 x i8>, <8 x i8>* @global_pred, align 2
// CHECK-NEXT:    [[CASTFIXEDSVE:%.*]] = call <vscale x 2 x i8> @llvm.experimental.vector.insert.nxv2i8.v8i8(<vscale x 2 x i8> undef, <8 x i8> [[TMP1]], i64 0)
// CHECK-NEXT:    [[TMP2:%.*]] = bitcast <vscale x 2 x i8> [[CASTFIXEDSVE]] to <vscale x 16 x i1>
// CHECK-NEXT:    [[TMP3:%.*]] = load <8 x i8>, <8 x i8>* @global_pred, align 2
// CHECK-NEXT:    [[CASTFIXEDSVE2:%.*]] = call <vscale x 2 x i8> @llvm.experimental.vector.insert.nxv2i8.v8i8(<vscale x 2 x i8> undef, <8 x i8> [[TMP3]], i64 0)
// CHECK-NEXT:    [[TMP4:%.*]] = bitcast <vscale x 2 x i8> [[CASTFIXEDSVE2]] to <vscale x 16 x i1>
// CHECK-NEXT:    [[TMP5:%.*]] = call <vscale x 16 x i1> @llvm.aarch64.sve.and.z.nxv16i1(<vscale x 16 x i1> [[TMP0]], <vscale x 16 x i1> [[TMP2]], <vscale x 16 x i1> [[TMP4]])
// CHECK-NEXT:    store <vscale x 16 x i1> [[TMP5]], <vscale x 16 x i1>* [[PG]], align 2
// CHECK-NEXT:    [[TMP6:%.*]] = load <vscale x 16 x i1>, <vscale x 16 x i1>* [[PG]], align 2
// CHECK-NEXT:    [[TMP7:%.*]] = load <16 x i32>, <16 x i32>* @global_vec, align 16
// CHECK-NEXT:    [[CASTSCALABLESVE:%.*]] = call <vscale x 4 x i32> @llvm.experimental.vector.insert.nxv4i32.v16i32(<vscale x 4 x i32> undef, <16 x i32> [[TMP7]], i64 0)
// CHECK-NEXT:    [[TMP8:%.*]] = load <vscale x 4 x i32>, <vscale x 4 x i32>* [[VEC_ADDR]], align 16
// CHECK-NEXT:    [[TMP9:%.*]] = call <vscale x 4 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv4i1(<vscale x 16 x i1> [[TMP6]])
// CHECK-NEXT:    [[TMP10:%.*]] = call <vscale x 4 x i32> @llvm.aarch64.sve.add.nxv4i32(<vscale x 4 x i1> [[TMP9]], <vscale x 4 x i32> [[CASTSCALABLESVE]], <vscale x 4 x i32> [[TMP8]])
// CHECK-NEXT:    [[CASTFIXEDSVE3:%.*]] = call <16 x i32> @llvm.experimental.vector.extract.v16i32.nxv4i32(<vscale x 4 x i32> [[TMP10]], i64 0)
// CHECK-NEXT:    store <16 x i32> [[CASTFIXEDSVE3]], <16 x i32>* [[RETVAL]], align 16
// CHECK-NEXT:    [[TMP11:%.*]] = load <16 x i32>, <16 x i32>* [[RETVAL]], align 16
// CHECK-NEXT:    [[CASTSCALABLESVE4:%.*]] = call <vscale x 4 x i32> @llvm.experimental.vector.insert.nxv4i32.v16i32(<vscale x 4 x i32> undef, <16 x i32> [[TMP11]], i64 0)
// CHECK-NEXT:    ret <vscale x 4 x i32> [[CASTSCALABLESVE4]]
//
fixed_int32_t foo(svbool_t pred, svint32_t vec) {
  svbool_t pg = svand_z(pred, global_pred, global_pred);
  return svadd_m(pg, global_vec, vec);
}

// CHECK-LABEL: @test_ptr_to_global(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[RETVAL:%.*]] = alloca <16 x i32>, align 16
// CHECK-NEXT:    [[GLOBAL_VEC_PTR:%.*]] = alloca <16 x i32>*, align 8
// CHECK-NEXT:    store <16 x i32>* @global_vec, <16 x i32>** [[GLOBAL_VEC_PTR]], align 8
// CHECK-NEXT:    [[TMP0:%.*]] = load <16 x i32>*, <16 x i32>** [[GLOBAL_VEC_PTR]], align 8
// CHECK-NEXT:    [[TMP1:%.*]] = load <16 x i32>, <16 x i32>* [[TMP0]], align 16
// CHECK-NEXT:    store <16 x i32> [[TMP1]], <16 x i32>* [[RETVAL]], align 16
// CHECK-NEXT:    [[TMP2:%.*]] = load <16 x i32>, <16 x i32>* [[RETVAL]], align 16
// CHECK-NEXT:    [[CASTSCALABLESVE:%.*]] = call <vscale x 4 x i32> @llvm.experimental.vector.insert.nxv4i32.v16i32(<vscale x 4 x i32> undef, <16 x i32> [[TMP2]], i64 0)
// CHECK-NEXT:    ret <vscale x 4 x i32> [[CASTSCALABLESVE]]
//
fixed_int32_t test_ptr_to_global() {
  fixed_int32_t *global_vec_ptr;
  global_vec_ptr = &global_vec;
  return *global_vec_ptr;
}

//
// Test casting pointer from fixed-length array to scalable vector.
// CHECK-LABEL: @array_arg(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[RETVAL:%.*]] = alloca <16 x i32>, align 16
// CHECK-NEXT:    [[ARR_ADDR:%.*]] = alloca <16 x i32>*, align 8
// CHECK-NEXT:    store <16 x i32>* [[ARR:%.*]], <16 x i32>** [[ARR_ADDR]], align 8
// CHECK-NEXT:    [[TMP0:%.*]] = load <16 x i32>*, <16 x i32>** [[ARR_ADDR]], align 8
// CHECK-NEXT:    [[ARRAYIDX:%.*]] = getelementptr inbounds <16 x i32>, <16 x i32>* [[TMP0]], i64 0
// CHECK-NEXT:    [[TMP1:%.*]] = load <16 x i32>, <16 x i32>* [[ARRAYIDX]], align 16
// CHECK-NEXT:    store <16 x i32> [[TMP1]], <16 x i32>* [[RETVAL]], align 16
// CHECK-NEXT:    [[TMP2:%.*]] = load <16 x i32>, <16 x i32>* [[RETVAL]], align 16
// CHECK-NEXT:    [[CASTSCALABLESVE:%.*]] = call <vscale x 4 x i32> @llvm.experimental.vector.insert.nxv4i32.v16i32(<vscale x 4 x i32> undef, <16 x i32> [[TMP2]], i64 0)
// CHECK-NEXT:    ret <vscale x 4 x i32> [[CASTSCALABLESVE]]
//
fixed_int32_t array_arg(fixed_int32_t arr[]) {
  return arr[0];
}

// CHECK-LABEL: @address_of_array_idx(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[RETVAL:%.*]] = alloca <8 x i8>, align 2
// CHECK-NEXT:    [[ARR:%.*]] = alloca [3 x <8 x i8>], align 2
// CHECK-NEXT:    [[PARR:%.*]] = alloca <8 x i8>*, align 8
// CHECK-NEXT:    [[ARRAYIDX:%.*]] = getelementptr inbounds [3 x <8 x i8>], [3 x <8 x i8>]* [[ARR]], i64 0, i64 0
// CHECK-NEXT:    store <8 x i8>* [[ARRAYIDX]], <8 x i8>** [[PARR]], align 8
// CHECK-NEXT:    [[TMP0:%.*]] = load <8 x i8>*, <8 x i8>** [[PARR]], align 8
// CHECK-NEXT:    [[TMP1:%.*]] = load <8 x i8>, <8 x i8>* [[TMP0]], align 2
// CHECK-NEXT:    store <8 x i8> [[TMP1]], <8 x i8>* [[RETVAL]], align 2
// CHECK-NEXT:    [[TMP2:%.*]] = load <8 x i8>, <8 x i8>* [[RETVAL]], align 2
// CHECK-NEXT:    [[CASTFIXEDSVE:%.*]] = call <vscale x 2 x i8> @llvm.experimental.vector.insert.nxv2i8.v8i8(<vscale x 2 x i8> undef, <8 x i8> [[TMP2]], i64 0)
// CHECK-NEXT:    [[TMP3:%.*]] = bitcast <vscale x 2 x i8> [[CASTFIXEDSVE]] to <vscale x 16 x i1>
// CHECK-NEXT:    ret <vscale x 16 x i1> [[TMP3]]
//
fixed_bool_t address_of_array_idx() {
  fixed_bool_t arr[3];
  fixed_bool_t *parr;
  parr = &arr[0];
  return *parr;
}

// CHECK-LABEL: @test_cast(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[RETVAL:%.*]] = alloca <16 x i32>, align 16
// CHECK-NEXT:    [[PRED_ADDR:%.*]] = alloca <vscale x 16 x i1>, align 2
// CHECK-NEXT:    [[VEC_ADDR:%.*]] = alloca <vscale x 4 x i32>, align 16
// CHECK-NEXT:    [[XX:%.*]] = alloca <8 x i8>, align 8
// CHECK-NEXT:    [[YY:%.*]] = alloca <8 x i8>, align 8
// CHECK-NEXT:    [[PG:%.*]] = alloca <vscale x 16 x i1>, align 2
// CHECK-NEXT:    store <vscale x 16 x i1> [[PRED:%.*]], <vscale x 16 x i1>* [[PRED_ADDR]], align 2
// CHECK-NEXT:    store <vscale x 4 x i32> [[VEC:%.*]], <vscale x 4 x i32>* [[VEC_ADDR]], align 16
// CHECK-NEXT:    store <8 x i8> <i8 1, i8 2, i8 3, i8 4, i8 0, i8 0, i8 0, i8 0>, <8 x i8>* [[XX]], align 8
// CHECK-NEXT:    store <8 x i8> <i8 2, i8 5, i8 4, i8 6, i8 0, i8 0, i8 0, i8 0>, <8 x i8>* [[YY]], align 8
// CHECK-NEXT:    [[TMP0:%.*]] = load <vscale x 16 x i1>, <vscale x 16 x i1>* [[PRED_ADDR]], align 2
// CHECK-NEXT:    [[TMP1:%.*]] = load <8 x i8>, <8 x i8>* @global_pred, align 2
// CHECK-NEXT:    [[CASTFIXEDSVE:%.*]] = call <vscale x 2 x i8> @llvm.experimental.vector.insert.nxv2i8.v8i8(<vscale x 2 x i8> undef, <8 x i8> [[TMP1]], i64 0)
// CHECK-NEXT:    [[TMP2:%.*]] = bitcast <vscale x 2 x i8> [[CASTFIXEDSVE]] to <vscale x 16 x i1>
// CHECK-NEXT:    [[TMP3:%.*]] = load <8 x i8>, <8 x i8>* [[XX]], align 8
// CHECK-NEXT:    [[TMP4:%.*]] = load <8 x i8>, <8 x i8>* [[YY]], align 8
// CHECK-NEXT:    [[ADD:%.*]] = add <8 x i8> [[TMP3]], [[TMP4]]
// CHECK-NEXT:    [[CASTFIXEDSVE2:%.*]] = call <vscale x 2 x i8> @llvm.experimental.vector.insert.nxv2i8.v8i8(<vscale x 2 x i8> undef, <8 x i8> [[ADD]], i64 0)
// CHECK-NEXT:    [[TMP5:%.*]] = bitcast <vscale x 2 x i8> [[CASTFIXEDSVE2]] to <vscale x 16 x i1>
// CHECK-NEXT:    [[TMP6:%.*]] = call <vscale x 16 x i1> @llvm.aarch64.sve.and.z.nxv16i1(<vscale x 16 x i1> [[TMP0]], <vscale x 16 x i1> [[TMP2]], <vscale x 16 x i1> [[TMP5]])
// CHECK-NEXT:    store <vscale x 16 x i1> [[TMP6]], <vscale x 16 x i1>* [[PG]], align 2
// CHECK-NEXT:    [[TMP7:%.*]] = load <vscale x 16 x i1>, <vscale x 16 x i1>* [[PG]], align 2
// CHECK-NEXT:    [[TMP8:%.*]] = load <16 x i32>, <16 x i32>* @global_vec, align 16
// CHECK-NEXT:    [[CASTSCALABLESVE:%.*]] = call <vscale x 4 x i32> @llvm.experimental.vector.insert.nxv4i32.v16i32(<vscale x 4 x i32> undef, <16 x i32> [[TMP8]], i64 0)
// CHECK-NEXT:    [[TMP9:%.*]] = load <vscale x 4 x i32>, <vscale x 4 x i32>* [[VEC_ADDR]], align 16
// CHECK-NEXT:    [[TMP10:%.*]] = call <vscale x 4 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv4i1(<vscale x 16 x i1> [[TMP7]])
// CHECK-NEXT:    [[TMP11:%.*]] = call <vscale x 4 x i32> @llvm.aarch64.sve.add.nxv4i32(<vscale x 4 x i1> [[TMP10]], <vscale x 4 x i32> [[CASTSCALABLESVE]], <vscale x 4 x i32> [[TMP9]])
// CHECK-NEXT:    [[CASTFIXEDSVE3:%.*]] = call <16 x i32> @llvm.experimental.vector.extract.v16i32.nxv4i32(<vscale x 4 x i32> [[TMP11]], i64 0)
// CHECK-NEXT:    store <16 x i32> [[CASTFIXEDSVE3]], <16 x i32>* [[RETVAL]], align 16
// CHECK-NEXT:    [[TMP12:%.*]] = load <16 x i32>, <16 x i32>* [[RETVAL]], align 16
// CHECK-NEXT:    [[CASTSCALABLESVE4:%.*]] = call <vscale x 4 x i32> @llvm.experimental.vector.insert.nxv4i32.v16i32(<vscale x 4 x i32> undef, <16 x i32> [[TMP12]], i64 0)
// CHECK-NEXT:    ret <vscale x 4 x i32> [[CASTSCALABLESVE4]]
//
fixed_int32_t test_cast(svbool_t pred, svint32_t vec) {
  uint8_vec_t xx = {1, 2, 3, 4};
  uint8_vec_t yy = {2, 5, 4, 6};
  svbool_t pg = svand_z(pred, global_pred, xx + yy);
  return svadd_m(pg, global_vec, vec);
}
