#include "../s21_math.h"
#include "s21_math_test.h"

START_TEST(fmod_1) {
  double num1 = 0.3795;
  double num2 = 0.3795;
  ck_assert_ldouble_eq_tol(s21_fmod(num1, num2), fmod(num1, num2),
                           S21_EPS_TEST);
}
END_TEST

START_TEST(fmod_2) {
  double num1 = 123;
  double num2 = 0;
  ck_assert_ldouble_nan(s21_fmod(num1, num2));
  ck_assert_ldouble_nan(fmod(num1, num2));
}
END_TEST

START_TEST(fmod_3) {
  double num1 = 0;
  double num2 = 123;
  ck_assert_ldouble_eq_tol(s21_fmod(num1, num2), fmod(num1, num2),
                           S21_EPS_TEST);
}
END_TEST

START_TEST(fmod_4) {
  double num1 = -123;
  double num2 = 4;
  ck_assert_ldouble_eq_tol(s21_fmod(num1, num2), fmod(num1, num2),
                           S21_EPS_TEST);
}
END_TEST

START_TEST(fmod_5) {
  double num1 = 16;
  double num2 = 4;
  ck_assert_ldouble_eq_tol(s21_fmod(num1, num2), fmod(num1, num2),
                           S21_EPS_TEST);
}
END_TEST

START_TEST(fmod_6) {
  double num1 = 16.12311;
  double num2 = 4.51111;
  ck_assert_ldouble_eq_tol(s21_fmod(num1, num2), fmod(num1, num2),
                           S21_EPS_TEST);
}
END_TEST

START_TEST(fmod_7) {
  double num1 = 0.123123;
  double num2 = 0.2;
  ck_assert_ldouble_eq_tol(s21_fmod(num1, num2), fmod(num1, num2),
                           S21_EPS_TEST);
}
END_TEST

START_TEST(fmod_8) {
  double num1 = -12;
  double num2 = 3;
  ck_assert_ldouble_eq_tol(s21_fmod(num1, num2), fmod(num1, num2),
                           S21_EPS_TEST);
}
END_TEST

START_TEST(fmod_9) {
  double num1 = -2.123;
  double num2 = 10.001;
  ck_assert_ldouble_eq_tol(s21_fmod(num1, num2), fmod(num1, num2),
                           S21_EPS_TEST);
}
END_TEST

START_TEST(fmod_10) {
  double num1 = 7.1123;
  double num2 = -2.3;
  ck_assert_ldouble_eq_tol(s21_fmod(num1, num2), fmod(num1, num2),
                           S21_EPS_TEST);
}
END_TEST

START_TEST(fmod_11) {
  double num1 = S21_INF_PLS;
  double num2 = 6;
  ck_assert_ldouble_nan(s21_fmod(num1, num2));
  ck_assert_ldouble_nan(fmod(num1, num2));
}
END_TEST

START_TEST(fmod_12) {
  double num1 = 7;
  double num2 = S21_INF_MNS;
  ck_assert_ldouble_eq_tol(s21_fmod(num1, num2), fmod(num1, num2),
                           S21_EPS_TEST);
}
END_TEST

START_TEST(fmod_13) {
  double num1 = S21_INF_PLS;
  double num2 = S21_INF_MNS;
  ck_assert_ldouble_nan(s21_fmod(num1, num2));
  ck_assert_ldouble_nan(fmod(num1, num2));
}
END_TEST

START_TEST(fmod_14) {
  double num2 = S21_INF_PLS;
  double num1 = S21_INF_MNS;
  ck_assert_ldouble_nan(s21_fmod(num1, num2));
  ck_assert_ldouble_nan(fmod(num1, num2));
}
END_TEST

START_TEST(fmod_15) {
  double num1 = 7;
  double num2 = S21_INF_PLS;
  ck_assert_ldouble_eq_tol(s21_fmod(num1, num2), fmod(num1, num2),
                           S21_EPS_TEST);
}
END_TEST

Suite *test_s21_fmod(void) {
  Suite *s13;
  TCase *tc13;
  s13 = suite_create("s21_fmod");
  tc13 = tcase_create("case_fmod");

  tcase_add_test(tc13, fmod_1);
  tcase_add_test(tc13, fmod_2);
  tcase_add_test(tc13, fmod_3);
  tcase_add_test(tc13, fmod_4);
  tcase_add_test(tc13, fmod_5);
  tcase_add_test(tc13, fmod_6);
  tcase_add_test(tc13, fmod_7);
  tcase_add_test(tc13, fmod_8);
  tcase_add_test(tc13, fmod_9);
  tcase_add_test(tc13, fmod_10);
  tcase_add_test(tc13, fmod_11);
  tcase_add_test(tc13, fmod_12);
  tcase_add_test(tc13, fmod_13);
  tcase_add_test(tc13, fmod_14);
  tcase_add_test(tc13, fmod_15);

  suite_add_tcase(s13, tc13);
  return s13;
}
