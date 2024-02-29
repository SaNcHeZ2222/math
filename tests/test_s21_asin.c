#include "../s21_math.h"
#include "s21_math_test.h"

START_TEST(t_s21_asin_1) {
  double test = 0;
  ck_assert_ldouble_eq_tol(s21_asin(test), asin(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_asin_2) {
  double test = -2.31312;
  ck_assert_ldouble_nan(s21_asin(test));
}
END_TEST

START_TEST(t_s21_asin_3) {
  double test = 2.876;
  ck_assert_ldouble_nan(s21_asin(test));
}
END_TEST

START_TEST(t_s21_asin_4) {
  double test = 1;
  ck_assert_ldouble_eq_tol(s21_asin(test), asin(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_asin_5) {
  double test = -1;
  ck_assert_ldouble_eq_tol(s21_asin(test), asin(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_asin_6) {
  double test = 0;
  ck_assert_ldouble_eq_tol(s21_asin(test), asin(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_asin_7) { ck_assert_ldouble_nan(s21_asin(S21_INF_PLS)); }
END_TEST

START_TEST(t_s21_asin_8) { ck_assert_ldouble_nan(s21_asin(S21_INF_MNS)); }
END_TEST

START_TEST(t_s21_asin_9) { ck_assert_ldouble_nan(s21_asin(S21_NAN)); }
END_TEST

Suite *test_s21_asin(void) {
  Suite *s;
  TCase *tc;
  s = suite_create("s21_asin");
  tc = tcase_create("s21_asin_tc");

  tcase_add_test(tc, t_s21_asin_1);
  tcase_add_test(tc, t_s21_asin_2);
  tcase_add_test(tc, t_s21_asin_3);
  tcase_add_test(tc, t_s21_asin_4);
  tcase_add_test(tc, t_s21_asin_5);
  tcase_add_test(tc, t_s21_asin_6);
  tcase_add_test(tc, t_s21_asin_7);
  tcase_add_test(tc, t_s21_asin_8);
  tcase_add_test(tc, t_s21_asin_9);
  suite_add_tcase(s, tc);

  return s;
}
