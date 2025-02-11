#include <stdint.h>
#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vssseg5e32_v_f32mf2x5(float32_t *base, ptrdiff_t bstride, vfloat32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_f32mf2x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_f32m1x5(float32_t *base, ptrdiff_t bstride, vfloat32m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_f32m1x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_i32mf2x5(int32_t *base, ptrdiff_t bstride, vint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_i32mf2x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_i32m1x5(int32_t *base, ptrdiff_t bstride, vint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_i32m1x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_u32mf2x5(uint32_t *base, ptrdiff_t bstride, vuint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_u32mf2x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_u32m1x5(uint32_t *base, ptrdiff_t bstride, vuint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_u32m1x5(base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_f32mf2x5_m(vbool64_t mask, float32_t *base, ptrdiff_t bstride, vfloat32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_f32mf2x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_f32m1x5_m(vbool32_t mask, float32_t *base, ptrdiff_t bstride, vfloat32m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_f32m1x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_i32mf2x5_m(vbool64_t mask, int32_t *base, ptrdiff_t bstride, vint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_i32mf2x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_i32m1x5_m(vbool32_t mask, int32_t *base, ptrdiff_t bstride, vint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_i32m1x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_u32mf2x5_m(vbool64_t mask, uint32_t *base, ptrdiff_t bstride, vuint32mf2x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_u32mf2x5_m(mask, base, bstride, v_tuple, vl);
}

void test_vssseg5e32_v_u32m1x5_m(vbool32_t mask, uint32_t *base, ptrdiff_t bstride, vuint32m1x5_t v_tuple, size_t vl) {
  return __riscv_vssseg5e32_v_u32m1x5_m(mask, base, bstride, v_tuple, vl);
}

