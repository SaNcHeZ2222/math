#include "../s21_math.h"
#include "s21_math_test.h"

START_TEST(t_s21_log_1) {
  double test = 7.00001;
  ck_assert_ldouble_eq_tol(s21_log(test), log(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_log_2) {
  double test = 42000000.999999;
  ck_assert_ldouble_eq_tol(s21_log(test), log(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_log_3) {
  double test = 1e-6;
  ck_assert_ldouble_eq_tol(s21_log(test), log(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_log_4) {
  double test = 0.8;
  ck_assert_ldouble_eq_tol(s21_log(test), log(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_log_5) {
  double test = 1e-10;
  ck_assert_ldouble_eq_tol(s21_log(test), log(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_log_6) {
  double test = 1e40;
  ck_assert_ldouble_eq_tol(s21_log(test), log(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_log_7) {
  double test = S21_INF_PLS;
  ck_assert_ldouble_infinite(s21_log(test));
}
END_TEST

START_TEST(t_s21_log_8) {
  double test = -0.8;
  ck_assert_ldouble_nan(s21_log(test));
}
END_TEST

START_TEST(t_s21_log_9) {
  double test = S21_INF_MNS;
  ck_assert_ldouble_nan(s21_log(test));
}
END_TEST

START_TEST(t_s21_log_10) {
  double test = S21_NAN;
  ck_assert_ldouble_nan(s21_log(test));
}
END_TEST

START_TEST(t_s21_log_11) {
  double test = 0.0;
  ck_assert_ldouble_infinite(-s21_log(test));
  ck_assert_ldouble_infinite(-logl(test));
}
END_TEST

Suite *test_s21_log(void) {
  Suite *s = suite_create("s21_log");
  TCase *tc = tcase_create("s21_log_tc");

  tcase_add_test(tc, t_s21_log_1);
  tcase_add_test(tc, t_s21_log_2);
  tcase_add_test(tc, t_s21_log_3);
  tcase_add_test(tc, t_s21_log_4);
  tcase_add_test(tc, t_s21_log_5);
  tcase_add_test(tc, t_s21_log_6);
  tcase_add_test(tc, t_s21_log_7);
  tcase_add_test(tc, t_s21_log_8);
  tcase_add_test(tc, t_s21_log_9);
  tcase_add_test(tc, t_s21_log_10);
  tcase_add_test(tc, t_s21_log_11);
  suite_add_tcase(s, tc);

  return s;
}