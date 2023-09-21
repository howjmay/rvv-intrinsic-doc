/* { dg-do compile } */
/* { dg-options "-march=rv64gcv_zvfh -mabi=lp64d -Wno-psabi -O3 -fno-schedule-insns -fno-schedule-insns2" } */

#include <riscv_vector.h>

typedef _Float16 float16_t;
typedef float float32_t;
typedef double float64_t;
void test_vsoxei32_v_f16mf4(float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_f16mf2(float16_t *base, vuint32m1_t bindex, vfloat16mf2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_f16m1(float16_t *base, vuint32m2_t bindex, vfloat16m1_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_f16m2(float16_t *base, vuint32m4_t bindex, vfloat16m2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_f16m4(float16_t *base, vuint32m8_t bindex, vfloat16m4_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_f32mf2(float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_f32m1(float32_t *base, vuint32m1_t bindex, vfloat32m1_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_f32m2(float32_t *base, vuint32m2_t bindex, vfloat32m2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_f32m4(float32_t *base, vuint32m4_t bindex, vfloat32m4_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_f32m8(float32_t *base, vuint32m8_t bindex, vfloat32m8_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_f64m1(float64_t *base, vuint32mf2_t bindex, vfloat64m1_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_f64m2(float64_t *base, vuint32m1_t bindex, vfloat64m2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_f64m4(float64_t *base, vuint32m2_t bindex, vfloat64m4_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_f64m8(float64_t *base, vuint32m4_t bindex, vfloat64m8_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i8mf8(int8_t *base, vuint32mf2_t bindex, vint8mf8_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i8mf4(int8_t *base, vuint32m1_t bindex, vint8mf4_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i8mf2(int8_t *base, vuint32m2_t bindex, vint8mf2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i8m1(int8_t *base, vuint32m4_t bindex, vint8m1_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i8m2(int8_t *base, vuint32m8_t bindex, vint8m2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i16mf4(int16_t *base, vuint32mf2_t bindex, vint16mf4_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i16mf2(int16_t *base, vuint32m1_t bindex, vint16mf2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i16m1(int16_t *base, vuint32m2_t bindex, vint16m1_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i16m2(int16_t *base, vuint32m4_t bindex, vint16m2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i16m4(int16_t *base, vuint32m8_t bindex, vint16m4_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i32mf2(int32_t *base, vuint32mf2_t bindex, vint32mf2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i32m1(int32_t *base, vuint32m1_t bindex, vint32m1_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i32m2(int32_t *base, vuint32m2_t bindex, vint32m2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i32m4(int32_t *base, vuint32m4_t bindex, vint32m4_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i32m8(int32_t *base, vuint32m8_t bindex, vint32m8_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i64m1(int64_t *base, vuint32mf2_t bindex, vint64m1_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i64m2(int64_t *base, vuint32m1_t bindex, vint64m2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i64m4(int64_t *base, vuint32m2_t bindex, vint64m4_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_i64m8(int64_t *base, vuint32m4_t bindex, vint64m8_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u8mf8(uint8_t *base, vuint32mf2_t bindex, vuint8mf8_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u8mf4(uint8_t *base, vuint32m1_t bindex, vuint8mf4_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u8mf2(uint8_t *base, vuint32m2_t bindex, vuint8mf2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u8m1(uint8_t *base, vuint32m4_t bindex, vuint8m1_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u8m2(uint8_t *base, vuint32m8_t bindex, vuint8m2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u16mf4(uint16_t *base, vuint32mf2_t bindex, vuint16mf4_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u16mf2(uint16_t *base, vuint32m1_t bindex, vuint16mf2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u16m1(uint16_t *base, vuint32m2_t bindex, vuint16m1_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u16m2(uint16_t *base, vuint32m4_t bindex, vuint16m2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u16m4(uint16_t *base, vuint32m8_t bindex, vuint16m4_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u32mf2(uint32_t *base, vuint32mf2_t bindex, vuint32mf2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u32m1(uint32_t *base, vuint32m1_t bindex, vuint32m1_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u32m2(uint32_t *base, vuint32m2_t bindex, vuint32m2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u32m4(uint32_t *base, vuint32m4_t bindex, vuint32m4_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u32m8(uint32_t *base, vuint32m8_t bindex, vuint32m8_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u64m1(uint64_t *base, vuint32mf2_t bindex, vuint64m1_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u64m2(uint64_t *base, vuint32m1_t bindex, vuint64m2_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u64m4(uint64_t *base, vuint32m2_t bindex, vuint64m4_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_u64m8(uint64_t *base, vuint32m4_t bindex, vuint64m8_t value, size_t vl) {
  return __riscv_vsoxei32(base, bindex, value, vl);
}

void test_vsoxei32_v_f16mf4_m(vbool64_t mask, float16_t *base, vuint32mf2_t bindex, vfloat16mf4_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_f16mf2_m(vbool32_t mask, float16_t *base, vuint32m1_t bindex, vfloat16mf2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_f16m1_m(vbool16_t mask, float16_t *base, vuint32m2_t bindex, vfloat16m1_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_f16m2_m(vbool8_t mask, float16_t *base, vuint32m4_t bindex, vfloat16m2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_f16m4_m(vbool4_t mask, float16_t *base, vuint32m8_t bindex, vfloat16m4_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_f32mf2_m(vbool64_t mask, float32_t *base, vuint32mf2_t bindex, vfloat32mf2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_f32m1_m(vbool32_t mask, float32_t *base, vuint32m1_t bindex, vfloat32m1_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_f32m2_m(vbool16_t mask, float32_t *base, vuint32m2_t bindex, vfloat32m2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_f32m4_m(vbool8_t mask, float32_t *base, vuint32m4_t bindex, vfloat32m4_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_f32m8_m(vbool4_t mask, float32_t *base, vuint32m8_t bindex, vfloat32m8_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_f64m1_m(vbool64_t mask, float64_t *base, vuint32mf2_t bindex, vfloat64m1_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_f64m2_m(vbool32_t mask, float64_t *base, vuint32m1_t bindex, vfloat64m2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_f64m4_m(vbool16_t mask, float64_t *base, vuint32m2_t bindex, vfloat64m4_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_f64m8_m(vbool8_t mask, float64_t *base, vuint32m4_t bindex, vfloat64m8_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i8mf8_m(vbool64_t mask, int8_t *base, vuint32mf2_t bindex, vint8mf8_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i8mf4_m(vbool32_t mask, int8_t *base, vuint32m1_t bindex, vint8mf4_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i8mf2_m(vbool16_t mask, int8_t *base, vuint32m2_t bindex, vint8mf2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i8m1_m(vbool8_t mask, int8_t *base, vuint32m4_t bindex, vint8m1_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i8m2_m(vbool4_t mask, int8_t *base, vuint32m8_t bindex, vint8m2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i16mf4_m(vbool64_t mask, int16_t *base, vuint32mf2_t bindex, vint16mf4_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i16mf2_m(vbool32_t mask, int16_t *base, vuint32m1_t bindex, vint16mf2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i16m1_m(vbool16_t mask, int16_t *base, vuint32m2_t bindex, vint16m1_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i16m2_m(vbool8_t mask, int16_t *base, vuint32m4_t bindex, vint16m2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i16m4_m(vbool4_t mask, int16_t *base, vuint32m8_t bindex, vint16m4_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i32mf2_m(vbool64_t mask, int32_t *base, vuint32mf2_t bindex, vint32mf2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i32m1_m(vbool32_t mask, int32_t *base, vuint32m1_t bindex, vint32m1_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i32m2_m(vbool16_t mask, int32_t *base, vuint32m2_t bindex, vint32m2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i32m4_m(vbool8_t mask, int32_t *base, vuint32m4_t bindex, vint32m4_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i32m8_m(vbool4_t mask, int32_t *base, vuint32m8_t bindex, vint32m8_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i64m1_m(vbool64_t mask, int64_t *base, vuint32mf2_t bindex, vint64m1_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i64m2_m(vbool32_t mask, int64_t *base, vuint32m1_t bindex, vint64m2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i64m4_m(vbool16_t mask, int64_t *base, vuint32m2_t bindex, vint64m4_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_i64m8_m(vbool8_t mask, int64_t *base, vuint32m4_t bindex, vint64m8_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u8mf8_m(vbool64_t mask, uint8_t *base, vuint32mf2_t bindex, vuint8mf8_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u8mf4_m(vbool32_t mask, uint8_t *base, vuint32m1_t bindex, vuint8mf4_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u8mf2_m(vbool16_t mask, uint8_t *base, vuint32m2_t bindex, vuint8mf2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u8m1_m(vbool8_t mask, uint8_t *base, vuint32m4_t bindex, vuint8m1_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u8m2_m(vbool4_t mask, uint8_t *base, vuint32m8_t bindex, vuint8m2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u16mf4_m(vbool64_t mask, uint16_t *base, vuint32mf2_t bindex, vuint16mf4_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u16mf2_m(vbool32_t mask, uint16_t *base, vuint32m1_t bindex, vuint16mf2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u16m1_m(vbool16_t mask, uint16_t *base, vuint32m2_t bindex, vuint16m1_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u16m2_m(vbool8_t mask, uint16_t *base, vuint32m4_t bindex, vuint16m2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u16m4_m(vbool4_t mask, uint16_t *base, vuint32m8_t bindex, vuint16m4_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u32mf2_m(vbool64_t mask, uint32_t *base, vuint32mf2_t bindex, vuint32mf2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u32m1_m(vbool32_t mask, uint32_t *base, vuint32m1_t bindex, vuint32m1_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u32m2_m(vbool16_t mask, uint32_t *base, vuint32m2_t bindex, vuint32m2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u32m4_m(vbool8_t mask, uint32_t *base, vuint32m4_t bindex, vuint32m4_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u32m8_m(vbool4_t mask, uint32_t *base, vuint32m8_t bindex, vuint32m8_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u64m1_m(vbool64_t mask, uint64_t *base, vuint32mf2_t bindex, vuint64m1_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u64m2_m(vbool32_t mask, uint64_t *base, vuint32m1_t bindex, vuint64m2_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u64m4_m(vbool16_t mask, uint64_t *base, vuint32m2_t bindex, vuint64m4_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

void test_vsoxei32_v_u64m8_m(vbool8_t mask, uint64_t *base, vuint32m4_t bindex, vuint64m8_t value, size_t vl) {
  return __riscv_vsoxei32(mask, base, bindex, value, vl);
}

