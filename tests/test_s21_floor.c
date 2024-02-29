#include "../s21_math.h"
#include "s21_math_test.h"

START_TEST(t_s21_floor_1) {
  double test = 7.00001;
  ck_assert_ldouble_eq_tol(s21_floor(test), floor(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_floor_2) {
  double test = 42000000.999999;
  ck_assert_ldouble_eq_tol(s21_floor(test), floor(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_floor_3) {
  double test = -4.8998;
  ck_assert_ldouble_eq_tol(s21_floor(test), floor(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_floor_4) {
  double test = 0.499;
  ck_assert_ldouble_eq_tol(s21_floor(test), floor(test), S21_EPS_TEST);
}
END_TEST

START_TEST(t_s21_floor_5) {
  ck_assert_ldouble_infinite(s21_floor(S21_INF_PLS));
}
END_TEST

START_TEST(t_s21_floor_6) {
  ck_assert_ldouble_infinite(s21_floor(S21_INF_MNS));
}
END_TEST

START_TEST(t_s21_floor_7) { ck_assert_ldouble_nan(s21_floor(S21_NAN)); }
END_TEST

Suite *test_s21_floor(void) {
  Suite *s = suite_create("s21_floor");
  TCase *tc = tcase_create("s21_floor_tc");

  tcase_add_test(tc, t_s21_floor_1);
  tcase_add_test(tc, t_s21_floor_2);
  tcase_add_test(tc, t_s21_floor_3);
  tcase_add_test(tc, t_s21_floor_4);
  tcase_add_test(tc, t_s21_floor_5);
  tcase_add_test(tc, t_s21_floor_6);
  tcase_add_test(tc, t_s21_floor_7);
  suite_add_tcase(s, tc);

  return s;
}
