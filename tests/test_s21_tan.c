#include "../s21_math.h"
#include "s21_math_test.h"

START_TEST(tan_1) {
  double num = S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_2) {
  double num = 0;
  ck_assert_ldouble_eq(s21_tan(num), tan(num));
}
END_TEST

START_TEST(tan_3) {
  double num = 1;
  ck_assert_ldouble_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_4) {
  double num = 1e-10;
  ck_assert_ldouble_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_5) {
  double num = 0.999998;
  ck_assert_ldouble_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_6) {
  double num = -0.999998;
  ck_assert_ldouble_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_7) {
  double num = 1e5;
  ck_assert_ldouble_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_8) {
  double num = 157.64882312318;
  ck_assert_double_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_9) {
  double num = -157.64882312318;
  ck_assert_double_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_10) {
  double x = 0.0;
  ck_assert_double_eq_tol(s21_tan(x), tanl(x), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_11) {
  ck_assert_ldouble_nan(s21_tan(S21_INF_MNS));
  ck_assert_ldouble_nan(tanl(S21_INF_MNS));
}
END_TEST

START_TEST(tan_12) {
  ck_assert_ldouble_nan(s21_tan(S21_INF_PLS));
  ck_assert_ldouble_nan(tanl(S21_INF_PLS));
}
END_TEST

START_TEST(tan_13) {
  ck_assert_ldouble_nan(s21_tan(S21_NAN));
  ck_assert_ldouble_nan(tanl(S21_NAN));
}
END_TEST

START_TEST(tan_14) {
  double num = -S21_PI;
  ck_assert_double_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_15) {
  double num = S21_PI / 6;
  ck_assert_double_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_16) {
  double num = S21_PI / 4;
  ck_assert_double_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_17) {
  double num = S21_PI / 3;
  ck_assert_double_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_18) {
  double num = 357;
  ck_assert_double_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_19) {
  double num = 2 * S21_PI;
  ck_assert_double_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_20) {
  double num = -2 * S21_PI;
  ck_assert_double_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_21) {
  double num = -3 * S21_PI;
  ck_assert_double_eq_tol(s21_tan(num), tanl(num), S21_EPS_TEST);
}
END_TEST

START_TEST(tan_22) {
  double num = -S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_tan(num), tan(num), S21_EPS_TEST);
}
END_TEST

Suite *test_s21_tan(void) {
  Suite *s13;
  TCase *tc13;
  s13 = suite_create("s21_tan");
  tc13 = tcase_create("case_tan");

  tcase_add_test(tc13, tan_1);
  tcase_add_test(tc13, tan_2);
  tcase_add_test(tc13, tan_3);
  tcase_add_test(tc13, tan_4);
  tcase_add_test(tc13, tan_5);
  tcase_add_test(tc13, tan_6);
  tcase_add_test(tc13, tan_7);
  tcase_add_test(tc13, tan_8);
  tcase_add_test(tc13, tan_9);
  tcase_add_test(tc13, tan_10);
  tcase_add_test(tc13, tan_11);
  tcase_add_test(tc13, tan_12);
  tcase_add_test(tc13, tan_13);
  tcase_add_test(tc13, tan_14);
  tcase_add_test(tc13, tan_15);
  tcase_add_test(tc13, tan_16);
  tcase_add_test(tc13, tan_17);
  tcase_add_test(tc13, tan_18);
  tcase_add_test(tc13, tan_19);
  tcase_add_test(tc13, tan_20);
  tcase_add_test(tc13, tan_21);
  tcase_add_test(tc13, tan_22);

  suite_add_tcase(s13, tc13);
  return s13;
}
