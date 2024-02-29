#include "../s21_math.h"
#include "s21_math_test.h"

START_TEST(t_s21_ceil_1) {
  double test = 7.00001;
  ck_assert_ldouble_eq_tol(s21_ceil(test), ceil(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_ceil_2) {
  double test = 42000000.999999;
  ck_assert_ldouble_eq_tol(s21_ceil(test), ceil(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_ceil_3) {
  double test = -4.8998;
  ck_assert_ldouble_eq_tol(s21_ceil(test), ceil(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_ceil_4) {
  double test = 0.499;
  ck_assert_ldouble_eq_tol(s21_ceil(test), ceil(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_ceil_5) { ck_assert_ldouble_infinite(s21_ceil(S21_INF_PLS)); }
END_TEST

START_TEST(t_s21_ceil_6) { ck_assert_ldouble_infinite(s21_ceil(S21_INF_MNS)); }
END_TEST

START_TEST(t_s21_ceil_7) { ck_assert_ldouble_nan(s21_ceil(S21_NAN)); }
END_TEST

Suite *test_s21_ceil(void) {
  Suite *s = suite_create("s21_ceil");
  TCase *tc = tcase_create("s21_ceil_tc");

  tcase_add_test(tc, t_s21_ceil_1);
  tcase_add_test(tc, t_s21_ceil_2);
  tcase_add_test(tc, t_s21_ceil_3);
  tcase_add_test(tc, t_s21_ceil_4);
  tcase_add_test(tc, t_s21_ceil_5);
  tcase_add_test(tc, t_s21_ceil_6);
  tcase_add_test(tc, t_s21_ceil_7);
  suite_add_tcase(s, tc);

  return s;
}
