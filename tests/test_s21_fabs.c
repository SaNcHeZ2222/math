#include "../s21_math.h"
#include "s21_math_test.h"

START_TEST(fabs_1) {
  double num = 0;
  ck_assert_ldouble_eq(s21_fabs(num), fabsl(num));
}
END_TEST

START_TEST(fabs_2) {
  double num = -1;
  ck_assert_ldouble_eq(s21_fabs(num), fabsl(num));
}
END_TEST

START_TEST(fabs_3) {
  double num = 1;
  ck_assert_ldouble_eq(s21_fabs(num), fabsl(num));
}
END_TEST

START_TEST(fabs_4) {
  double num = -1;
  ck_assert_ldouble_eq(s21_fabs(num), fabsl(num));
}
END_TEST

START_TEST(fabs_5) {
  double num = -1e7;
  ck_assert_ldouble_eq(s21_fabs(num), fabsl(num));
}
END_TEST

START_TEST(fabs_6) {
  double num = 1e7;
  ck_assert_ldouble_eq(s21_fabs(num), fabsl(num));
}
END_TEST

START_TEST(fabs_7) {
  double num = -0;
  ck_assert_ldouble_eq(s21_fabs(num), fabsl(num));
}
END_TEST

START_TEST(fabs_8) {
  double num = +0;
  ck_assert_ldouble_eq(s21_fabs(num), fabsl(num));
}
END_TEST

START_TEST(fabs_9) {
  double num = S21_INF_MNS;
  ck_assert_ldouble_eq(s21_fabs(num), fabsl(num));
}
END_TEST

START_TEST(fabs_10) {
  double num = S21_INF_PLS;
  ck_assert_ldouble_eq(s21_fabs(num), fabsl(num));
}
END_TEST

START_TEST(fabs_11) {
  ck_assert_ldouble_nan(s21_sin(S21_NAN));
  ck_assert_ldouble_nan(sinl(S21_NAN));
}
END_TEST

START_TEST(fabs_12) {
  double num = 1e10;
  ck_assert_ldouble_eq(s21_fabs(num), fabsl(num));
}
END_TEST

START_TEST(fabs_13) {
  double num = -1e10;
  ck_assert_ldouble_eq(s21_fabs(num), fabsl(num));
}
END_TEST

START_TEST(fabs_14) {
  double num = 1e-9;
  ck_assert_ldouble_eq(s21_fabs(num), fabsl(num));
}
END_TEST

START_TEST(fabs_15) {
  double num = -1e-9;
  ck_assert_ldouble_eq(s21_fabs(num), fabsl(num));
}
END_TEST

Suite *test_s21_fabs(void) {
  Suite *s13;
  TCase *tc13;
  s13 = suite_create("s21_fabs");
  tc13 = tcase_create("case_fabs");

  tcase_add_test(tc13, fabs_1);
  tcase_add_test(tc13, fabs_2);
  tcase_add_test(tc13, fabs_3);
  tcase_add_test(tc13, fabs_4);
  tcase_add_test(tc13, fabs_5);
  tcase_add_test(tc13, fabs_6);
  tcase_add_test(tc13, fabs_7);
  tcase_add_test(tc13, fabs_8);
  tcase_add_test(tc13, fabs_9);
  tcase_add_test(tc13, fabs_10);
  tcase_add_test(tc13, fabs_11);
  tcase_add_test(tc13, fabs_12);
  tcase_add_test(tc13, fabs_13);
  tcase_add_test(tc13, fabs_14);
  tcase_add_test(tc13, fabs_15);

  suite_add_tcase(s13, tc13);
  return s13;
}