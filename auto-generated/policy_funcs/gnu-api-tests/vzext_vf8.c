/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
vuint64m1_t test_vzext_vf8_u64m1_tu(vuint64m1_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m1_tu(maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_tu(vuint64m2_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m2_tu(maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_tu(vuint64m4_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m4_tu(maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_tu(vuint64m8_t maskedoff, vuint8m1_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m8_tu(maskedoff, op1, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_tum(vbool64_t mask, vuint64m1_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m1_tum(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_tum(vbool32_t mask, vuint64m2_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m2_tum(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_tum(vbool16_t mask, vuint64m4_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m4_tum(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_tum(vbool8_t mask, vuint64m8_t maskedoff, vuint8m1_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m8_tum(mask, maskedoff, op1, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_tumu(vbool64_t mask, vuint64m1_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m1_tumu(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_tumu(vbool32_t mask, vuint64m2_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m2_tumu(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_tumu(vbool16_t mask, vuint64m4_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m4_tumu(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_tumu(vbool8_t mask, vuint64m8_t maskedoff, vuint8m1_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m8_tumu(mask, maskedoff, op1, vl);
}

vuint64m1_t test_vzext_vf8_u64m1_mu(vbool64_t mask, vuint64m1_t maskedoff, vuint8mf8_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m1_mu(mask, maskedoff, op1, vl);
}

vuint64m2_t test_vzext_vf8_u64m2_mu(vbool32_t mask, vuint64m2_t maskedoff, vuint8mf4_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m2_mu(mask, maskedoff, op1, vl);
}

vuint64m4_t test_vzext_vf8_u64m4_mu(vbool16_t mask, vuint64m4_t maskedoff, vuint8mf2_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m4_mu(mask, maskedoff, op1, vl);
}

vuint64m8_t test_vzext_vf8_u64m8_mu(vbool8_t mask, vuint64m8_t maskedoff, vuint8m1_t op1, size_t vl) {
  return __riscv_vzext_vf8_u64m8_mu(mask, maskedoff, op1, vl);
}

/* { dg-final { scan-assembler-times {vseti?vli\s+[a-z0-9]+,\s*[a-z0-9]+,\s*e[0-9]+,\s*mf?[1248],\s*t[au],\s*m[au]\s+vzext\.vf8[ivxfswum.]*\s+} 16 } } */
