/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vfloat64m1x8_t test_vlseg8e64ff_v_f64m1x8(const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e64ff_v_f64m1x8(base, new_vl, vl);
}

vint64m1x8_t test_vlseg8e64ff_v_i64m1x8(const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e64ff_v_i64m1x8(base, new_vl, vl);
}

vuint64m1x8_t test_vlseg8e64ff_v_u64m1x8(const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e64ff_v_u64m1x8(base, new_vl, vl);
}

vfloat64m1x8_t test_vlseg8e64ff_v_f64m1x8_m(vbool64_t mask, const float64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e64ff_v_f64m1x8_m(mask, base, new_vl, vl);
}

vint64m1x8_t test_vlseg8e64ff_v_i64m1x8_m(vbool64_t mask, const int64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e64ff_v_i64m1x8_m(mask, base, new_vl, vl);
}

vuint64m1x8_t test_vlseg8e64ff_v_u64m1x8_m(vbool64_t mask, const uint64_t *base, size_t *new_vl, size_t vl) {
  return __riscv_vlseg8e64ff_v_u64m1x8_m(mask, base, new_vl, vl);
}

