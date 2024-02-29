#include "../s21_math.h"
#include "s21_math_test.h"

START_TEST(sin_1) {
  double num = 0.3795;
  ck_assert_ldouble_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_2) {
  double num = 0;
  ck_assert_ldouble_eq(s21_sin(num), sin(num));
}
END_TEST

START_TEST(sin_3) {
  double num = 1;
  ck_assert_ldouble_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_4) {
  double num = -1;
  // int suc = 0;
  ck_assert_ldouble_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_5) {
  double num = 0.999998;
  ck_assert_ldouble_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_6) {
  double num = -0.999998;
  ck_assert_ldouble_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_7) {
  for (int i = 0; i <= 360; i++) {
    double num = i * 180 / S21_PI;
    ck_assert_ldouble_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
  }
}
END_TEST

START_TEST(sin_8) {
  double num = 157.64882312318;
  ck_assert_double_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_9) {
  double num = -157.64882312318;
  ck_assert_double_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_10) {
  double x = 0.0;
  ck_assert_double_eq_tol(s21_sin(x), sinl(x), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_11) {
  ck_assert_ldouble_nan(s21_sin(S21_INF_MNS));
  ck_assert_ldouble_nan(sinl(S21_INF_MNS));
}
END_TEST

START_TEST(sin_12) {
  ck_assert_ldouble_nan(s21_sin(S21_INF_PLS));
  ck_assert_ldouble_nan(sinl(S21_INF_PLS));
}
END_TEST

START_TEST(sin_13) {
  ck_assert_ldouble_nan(s21_sin(S21_NAN));
  ck_assert_ldouble_nan(sinl(S21_NAN));
}
END_TEST

START_TEST(sin_14) {
  double num = -S21_PI;
  ck_assert_double_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_15) {
  double num = S21_PI / 6;
  ck_assert_double_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_16) {
  double num = S21_PI / 4;
  ck_assert_double_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_17) {
  double num = S21_PI / 3;
  ck_assert_double_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_18) {
  double num = S21_PI / 2;
  ck_assert_double_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_19) {
  double num = 3 * S21_PI / 2;
  ck_assert_double_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_20) {
  double num = 2 * S21_PI;
  ck_assert_double_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_21) {
  double num = -2 * S21_PI;
  ck_assert_double_eq_tol(s21_sin(num), sin(num), S21_EPS_TEST);
}
END_TEST

START_TEST(sin_22) {
  double num = -3 * S21_PI;
  ck_assert_double_eq_tol(s21_sin(num), sinl(num), S21_EPS_TEST);
}
END_TEST

Suite *test_s21_sin(void) {
  Suite *s13;
  TCase *tc13;
  s13 = suite_create("s21_sin");
  tc13 = tcase_create("case_sin");

  tcase_add_test(tc13, sin_1);
  tcase_add_test(tc13, sin_2);
  tcase_add_test(tc13, sin_3);
  tcase_add_test(tc13, sin_4);
  tcase_add_test(tc13, sin_5);
  tcase_add_test(tc13, sin_6);
  tcase_add_test(tc13, sin_7);
  tcase_add_test(tc13, sin_8);
  tcase_add_test(tc13, sin_9);
  tcase_add_test(tc13, sin_10);
  tcase_add_test(tc13, sin_11);
  tcase_add_test(tc13, sin_12);
  tcase_add_test(tc13, sin_13);
  tcase_add_test(tc13, sin_14);
  tcase_add_test(tc13, sin_15);
  tcase_add_test(tc13, sin_16);
  tcase_add_test(tc13, sin_17);
  tcase_add_test(tc13, sin_18);
  tcase_add_test(tc13, sin_19);
  tcase_add_test(tc13, sin_20);
  tcase_add_test(tc13, sin_21);
  tcase_add_test(tc13, sin_22);

  suite_add_tcase(s13, tc13);
  return s13;
}
