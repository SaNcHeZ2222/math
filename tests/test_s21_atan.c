#include "../s21_math.h"
#include "s21_math_test.h"

START_TEST(t_s21_atan_1) {
  double test = 7.00001;
  ck_assert_ldouble_eq_tol(s21_atan(test), atan(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_atan_2) {
  double test = 42000000.999999;
  ck_assert_ldouble_eq_tol(s21_atan(test), atan(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_atan_3) {
  double test = -453.8998;
  ck_assert_ldouble_eq_tol(s21_atan(test), atan(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_atan_4) {
  double test = 0.0;
  ck_assert_ldouble_eq_tol(s21_atan(test), atan(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_atan_5) {
  double test = 1e-10;
  ck_assert_ldouble_eq_tol(s21_atan(test), atan(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_atan_6) {
  double test = 1e40;
  ck_assert_ldouble_eq_tol(s21_atan(test), atan(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_atan_7) {
  double test = 0.9;
  ck_assert_ldouble_eq_tol(s21_atan(test), atan(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_atan_8) {
  double test = S21_INF_PLS;
  ck_assert_ldouble_eq_tol(s21_atan(test), atan(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_atan_9) {
  double test = S21_INF_MNS;
  ck_assert_ldouble_eq_tol(s21_atan(test), atan(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_atan_10) { ck_assert_ldouble_nan(s21_atan(S21_NAN)); }
END_TEST

Suite *test_s21_atan(void) {
  Suite *s = suite_create("s21_atan");
  TCase *tc = tcase_create("s21_atan_tc");

  tcase_add_test(tc, t_s21_atan_1);
  tcase_add_test(tc, t_s21_atan_2);
  tcase_add_test(tc, t_s21_atan_3);
  tcase_add_test(tc, t_s21_atan_4);
  tcase_add_test(tc, t_s21_atan_5);
  tcase_add_test(tc, t_s21_atan_6);
  tcase_add_test(tc, t_s21_atan_7);
  tcase_add_test(tc, t_s21_atan_8);
  tcase_add_test(tc, t_s21_atan_9);
  tcase_add_test(tc, t_s21_atan_10);
  suite_add_tcase(s, tc);

  return s;
}
