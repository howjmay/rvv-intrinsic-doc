/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsseg6e16_v_f16mf4x6(float16_t *base, vfloat16mf4x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_f16mf4x6(base, v_tuple, vl);
}

void test_vsseg6e16_v_f16mf2x6(float16_t *base, vfloat16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_f16mf2x6(base, v_tuple, vl);
}

void test_vsseg6e16_v_f16m1x6(float16_t *base, vfloat16m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_f16m1x6(base, v_tuple, vl);
}

void test_vsseg6e16_v_i16mf4x6(int16_t *base, vint16mf4x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_i16mf4x6(base, v_tuple, vl);
}

void test_vsseg6e16_v_i16mf2x6(int16_t *base, vint16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_i16mf2x6(base, v_tuple, vl);
}

void test_vsseg6e16_v_i16m1x6(int16_t *base, vint16m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_i16m1x6(base, v_tuple, vl);
}

void test_vsseg6e16_v_u16mf4x6(uint16_t *base, vuint16mf4x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_u16mf4x6(base, v_tuple, vl);
}

void test_vsseg6e16_v_u16mf2x6(uint16_t *base, vuint16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_u16mf2x6(base, v_tuple, vl);
}

void test_vsseg6e16_v_u16m1x6(uint16_t *base, vuint16m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_u16m1x6(base, v_tuple, vl);
}

void test_vsseg6e16_v_f16mf4x6_m(vbool64_t mask, float16_t *base, vfloat16mf4x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_f16mf4x6_m(mask, base, v_tuple, vl);
}

void test_vsseg6e16_v_f16mf2x6_m(vbool32_t mask, float16_t *base, vfloat16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_f16mf2x6_m(mask, base, v_tuple, vl);
}

void test_vsseg6e16_v_f16m1x6_m(vbool16_t mask, float16_t *base, vfloat16m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_f16m1x6_m(mask, base, v_tuple, vl);
}

void test_vsseg6e16_v_i16mf4x6_m(vbool64_t mask, int16_t *base, vint16mf4x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_i16mf4x6_m(mask, base, v_tuple, vl);
}

void test_vsseg6e16_v_i16mf2x6_m(vbool32_t mask, int16_t *base, vint16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_i16mf2x6_m(mask, base, v_tuple, vl);
}

void test_vsseg6e16_v_i16m1x6_m(vbool16_t mask, int16_t *base, vint16m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_i16m1x6_m(mask, base, v_tuple, vl);
}

void test_vsseg6e16_v_u16mf4x6_m(vbool64_t mask, uint16_t *base, vuint16mf4x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_u16mf4x6_m(mask, base, v_tuple, vl);
}

void test_vsseg6e16_v_u16mf2x6_m(vbool32_t mask, uint16_t *base, vuint16mf2x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_u16mf2x6_m(mask, base, v_tuple, vl);
}

void test_vsseg6e16_v_u16m1x6_m(vbool16_t mask, uint16_t *base, vuint16m1x6_t v_tuple, size_t vl) {
  return __riscv_vsseg6e16_v_u16m1x6_m(mask, base, v_tuple, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vsseg6e16\.[ivxfswum.]+\s+} 18 } } */
