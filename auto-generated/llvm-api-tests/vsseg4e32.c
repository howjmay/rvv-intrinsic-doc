// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

void test_vsseg4e32_v_f32mf2x4(float *base, vfloat32mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_f32mf2x4(base, v_tuple, vl);
}

void test_vsseg4e32_v_f32m1x4(float *base, vfloat32m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_f32m1x4(base, v_tuple, vl);
}

void test_vsseg4e32_v_f32m2x4(float *base, vfloat32m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_f32m2x4(base, v_tuple, vl);
}

void test_vsseg4e32_v_i32mf2x4(int32_t *base, vint32mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_i32mf2x4(base, v_tuple, vl);
}

void test_vsseg4e32_v_i32m1x4(int32_t *base, vint32m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_i32m1x4(base, v_tuple, vl);
}

void test_vsseg4e32_v_i32m2x4(int32_t *base, vint32m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_i32m2x4(base, v_tuple, vl);
}

void test_vsseg4e32_v_u32mf2x4(uint32_t *base, vuint32mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_u32mf2x4(base, v_tuple, vl);
}

void test_vsseg4e32_v_u32m1x4(uint32_t *base, vuint32m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_u32m1x4(base, v_tuple, vl);
}

void test_vsseg4e32_v_u32m2x4(uint32_t *base, vuint32m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_u32m2x4(base, v_tuple, vl);
}

void test_vsseg4e32_v_f32mf2x4_m(vbool64_t mask, float *base, vfloat32mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_f32mf2x4_m(mask, base, v_tuple, vl);
}

void test_vsseg4e32_v_f32m1x4_m(vbool32_t mask, float *base, vfloat32m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_f32m1x4_m(mask, base, v_tuple, vl);
}

void test_vsseg4e32_v_f32m2x4_m(vbool16_t mask, float *base, vfloat32m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_f32m2x4_m(mask, base, v_tuple, vl);
}

void test_vsseg4e32_v_i32mf2x4_m(vbool64_t mask, int32_t *base, vint32mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_i32mf2x4_m(mask, base, v_tuple, vl);
}

void test_vsseg4e32_v_i32m1x4_m(vbool32_t mask, int32_t *base, vint32m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_i32m1x4_m(mask, base, v_tuple, vl);
}

void test_vsseg4e32_v_i32m2x4_m(vbool16_t mask, int32_t *base, vint32m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_i32m2x4_m(mask, base, v_tuple, vl);
}

void test_vsseg4e32_v_u32mf2x4_m(vbool64_t mask, uint32_t *base, vuint32mf2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_u32mf2x4_m(mask, base, v_tuple, vl);
}

void test_vsseg4e32_v_u32m1x4_m(vbool32_t mask, uint32_t *base, vuint32m1x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_u32m1x4_m(mask, base, v_tuple, vl);
}

void test_vsseg4e32_v_u32m2x4_m(vbool16_t mask, uint32_t *base, vuint32m2x4_t v_tuple, size_t vl) {
  return __riscv_vsseg4e32_v_u32m2x4_m(mask, base, v_tuple, vl);
}

