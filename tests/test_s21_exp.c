#include "../s21_math.h"
#include "s21_math_test.h"

START_TEST(t_s21_exp_1) {
  double test = 7.00001;
  ck_assert_ldouble_eq_tol(s21_exp(test), exp(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_exp_2) {
  double test = 15;
  ck_assert_ldouble_eq_tol(s21_exp(test), exp(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_exp_3) {
  double test = 1e-6;
  ck_assert_ldouble_eq_tol(s21_exp(test), exp(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_exp_4) {
  double test = 0.8;
  ck_assert_ldouble_eq_tol(s21_exp(test), exp(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_exp_5) {
  double test = 1e-10;
  ck_assert_ldouble_eq_tol(s21_exp(test), exp(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_exp_6) {
  double test = S21_INF_MNS;
  ck_assert_ldouble_eq_tol(s21_exp(test), exp(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_exp_7) {
  double test = S21_INF_PLS;
  ck_assert_ldouble_infinite(s21_exp(test));
}
END_TEST

START_TEST(t_s21_exp_8) {
  double test = -0.8;
  ck_assert_ldouble_eq_tol(s21_exp(test), exp(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_exp_9) {
  double test = S21_NAN;
  ck_assert_ldouble_nan(s21_exp(test));
}
END_TEST

START_TEST(t_s21_exp_10) {
  double test = 800;
  ck_assert_ldouble_infinite(s21_exp(test));
}
END_TEST

START_TEST(t_s21_exp_11) {
  double test = 1200.0;
  ck_assert_ldouble_infinite(s21_exp(test));
}
END_TEST

Suite *test_s21_exp(void) {
  Suite *s = suite_create("s21_exp");
  TCase *tc = tcase_create("s21_exp_tc");

  tcase_add_test(tc, t_s21_exp_1);
  tcase_add_test(tc, t_s21_exp_2);
  tcase_add_test(tc, t_s21_exp_3);
  tcase_add_test(tc, t_s21_exp_4);
  tcase_add_test(tc, t_s21_exp_5);
  tcase_add_test(tc, t_s21_exp_6);
  tcase_add_test(tc, t_s21_exp_7);
  tcase_add_test(tc, t_s21_exp_8);
  tcase_add_test(tc, t_s21_exp_9);
  tcase_add_test(tc, t_s21_exp_10);
  tcase_add_test(tc, t_s21_exp_11);
  suite_add_tcase(s, tc);

  return s;
}