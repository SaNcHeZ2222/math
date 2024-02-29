#include "../s21_math.h"
#include "s21_math_test.h"

START_TEST(cos_1) {
  double num = 0.3795;
  ck_assert_ldouble_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_2) {
  double num = 0;
  ck_assert_ldouble_eq(s21_cos(num), cos(num));
}
END_TEST

START_TEST(cos_3) {
  double num = 1;
  ck_assert_ldouble_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_4) {
  double num = -1;
  ck_assert_ldouble_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_5) {
  double num = 0.999998;
  ck_assert_ldouble_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_6) {
  double num = -0.999998;
  ck_assert_ldouble_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_7) {
  for (int i = 0; i <= 360; i++) {
    double num = i * 180 / S21_PI;
    ck_assert_ldouble_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
  }
}
END_TEST

START_TEST(cos_8) {
  double num = 157.64882312318;
  ck_assert_double_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_9) {
  double num = -157.64882312318;
  ck_assert_double_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_10) {
  double x = 0.0;
  ck_assert_double_eq_tol(s21_cos(x), cosl(x), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_11) {
  ck_assert_ldouble_nan(s21_cos(S21_INF_MNS));
  ck_assert_ldouble_nan(cosl(S21_INF_MNS));
}
END_TEST

START_TEST(cos_12) {
  ck_assert_ldouble_nan(s21_cos(S21_INF_PLS));
  ck_assert_ldouble_nan(cosl(S21_INF_PLS));
}
END_TEST

START_TEST(cos_13) {
  ck_assert_ldouble_nan(s21_cos(S21_NAN));
  ck_assert_ldouble_nan(cosl(S21_NAN));
}
END_TEST

START_TEST(cos_14) {
  double num = -S21_PI;
  ck_assert_double_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_15) {
  double num = S21_PI / 6;
  ck_assert_double_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_16) {
  double num = S21_PI / 4;
  ck_assert_double_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_17) {
  double num = S21_PI / 3;
  ck_assert_double_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_18) {
  double num = S21_PI / 2;
  ck_assert_double_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_19) {
  double num = 3 * S21_PI / 2;
  ck_assert_double_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_20) {
  double num = 2 * S21_PI;
  ck_assert_double_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_21) {
  double num = -2 * S21_PI;
  ck_assert_double_eq_tol(s21_cos(num), cos(num), S21_EPS_TEST);
}
END_TEST

START_TEST(cos_22) {
  double num = -3 * S21_PI;
  ck_assert_double_eq_tol(s21_cos(num), cosl(num), S21_EPS_TEST);
}
END_TEST

Suite *test_s21_cos(void) {
  Suite *s13;
  TCase *tc13;
  s13 = suite_create("s21_cos");
  tc13 = tcase_create("case_cos");

  tcase_add_test(tc13, cos_1);
  tcase_add_test(tc13, cos_2);
  tcase_add_test(tc13, cos_3);
  tcase_add_test(tc13, cos_4);
  tcase_add_test(tc13, cos_5);
  tcase_add_test(tc13, cos_6);
  tcase_add_test(tc13, cos_7);
  tcase_add_test(tc13, cos_8);
  tcase_add_test(tc13, cos_9);
  tcase_add_test(tc13, cos_10);
  tcase_add_test(tc13, cos_11);
  tcase_add_test(tc13, cos_12);
  tcase_add_test(tc13, cos_13);
  tcase_add_test(tc13, cos_14);
  tcase_add_test(tc13, cos_15);
  tcase_add_test(tc13, cos_16);
  tcase_add_test(tc13, cos_17);
  tcase_add_test(tc13, cos_18);
  tcase_add_test(tc13, cos_19);
  tcase_add_test(tc13, cos_20);
  tcase_add_test(tc13, cos_21);
  tcase_add_test(tc13, cos_22);

  suite_add_tcase(s13, tc13);
  return s13;
}