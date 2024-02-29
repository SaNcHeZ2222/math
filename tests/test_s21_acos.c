#include "../s21_math.h"
#include "s21_math_test.h"

START_TEST(t_s21_acos_1) {
  double test = 0;
  ck_assert_ldouble_eq_tol(s21_acos(test), acos(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_acos_2) {
  double test = -2.31312;
  ck_assert_ldouble_nan(s21_acos(test));
}
END_TEST

START_TEST(t_s21_acos_3) {
  double test = 2.876;
  ck_assert_ldouble_nan(s21_acos(test));
}
END_TEST

START_TEST(t_s21_acos_4) {
  double test = 1;
  ck_assert_ldouble_eq_tol(s21_acos(test), acos(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_acos_5) {
  double test = -1;
  ck_assert_ldouble_eq_tol(s21_acos(test), acos(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_acos_6) {
  double test = 0;
  ck_assert_ldouble_eq_tol(s21_acos(test), acos(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_acos_7) { ck_assert_ldouble_nan(s21_acos(S21_INF_PLS)); }
END_TEST

START_TEST(t_s21_acos_8) { ck_assert_ldouble_nan(s21_acos(S21_INF_MNS)); }
END_TEST

START_TEST(t_s21_acos_9) { ck_assert_ldouble_nan(s21_acos(S21_NAN)); }
END_TEST

Suite *test_s21_acos(void) {
  Suite *s;
  TCase *tc;
  s = suite_create("s21_acos");
  tc = tcase_create("s21_acos_tc");

  tcase_add_test(tc, t_s21_acos_1);
  tcase_add_test(tc, t_s21_acos_2);
  tcase_add_test(tc, t_s21_acos_3);
  tcase_add_test(tc, t_s21_acos_4);
  tcase_add_test(tc, t_s21_acos_5);
  tcase_add_test(tc, t_s21_acos_6);
  tcase_add_test(tc, t_s21_acos_7);
  tcase_add_test(tc, t_s21_acos_8);
  tcase_add_test(tc, t_s21_acos_9);
  suite_add_tcase(s, tc);

  return s;
}
