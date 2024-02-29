#include "../s21_math.h"
#include "s21_math_test.h"

START_TEST(t_s21_sqrt_1) {
  double test = 0.0000;
  ck_assert_ldouble_eq_tol(s21_sqrt(test), sqrt(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_sqrt_2) {
  double test = 42000000.999999;
  ck_assert_ldouble_eq_tol(s21_sqrt(test), sqrt(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_sqrt_3) {
  double test = -225;
  ck_assert_ldouble_nan(s21_sqrt(test));
  ck_assert_ldouble_nan(sqrt(test));
}
END_TEST

START_TEST(t_s21_sqrt_4) {
  double test = 0.499;
  ck_assert_ldouble_eq_tol(s21_sqrt(test), sqrt(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_sqrt_5) { ck_assert_ldouble_infinite(s21_sqrt(S21_INF_PLS)); }
END_TEST

START_TEST(t_s21_sqrt_6) {
  ck_assert_ldouble_nan(s21_sqrt(S21_INF_MNS));
  ck_assert_ldouble_nan(sqrt(S21_INF_MNS));
}
END_TEST

START_TEST(t_s21_sqrt_7) { ck_assert_ldouble_nan(s21_sqrt(S21_NAN)); }
END_TEST

Suite *test_s21_sqrt(void) {
  Suite *s = suite_create("s21_sqrt");
  TCase *tc = tcase_create("s21_sqrt_tc");

  tcase_add_test(tc, t_s21_sqrt_1);
  tcase_add_test(tc, t_s21_sqrt_2);
  tcase_add_test(tc, t_s21_sqrt_3);
  tcase_add_test(tc, t_s21_sqrt_4);
  tcase_add_test(tc, t_s21_sqrt_5);
  tcase_add_test(tc, t_s21_sqrt_6);
  tcase_add_test(tc, t_s21_sqrt_7);
  suite_add_tcase(s, tc);

  return s;
}
