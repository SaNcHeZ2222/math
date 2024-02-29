#include "../s21_math.h"
#include "s21_math_test.h"

START_TEST(abs_1) {
  int num = 0;
  ck_assert_int_eq(s21_abs(num), abs(num));
}
END_TEST

START_TEST(abs_2) {
  int num = -1;
  ck_assert_int_eq(s21_abs(num), abs(num));
}
END_TEST

START_TEST(abs_3) {
  int num = 1;
  ck_assert_int_eq(s21_abs(num), abs(num));
}
END_TEST

START_TEST(abs_4) {
  int num = -1;
  ck_assert_int_eq(s21_abs(num), abs(num));
}
END_TEST

START_TEST(abs_5) {
  int num = -1e7;
  ck_assert_int_eq(s21_abs(num), abs(num));
}
END_TEST

START_TEST(abs_6) {
  int num = 1e7;
  ck_assert_int_eq(s21_abs(num), abs(num));
}
END_TEST

START_TEST(abs_7) {
  int num = -0;
  ck_assert_int_eq(s21_abs(num), abs(num));
}
END_TEST

START_TEST(abs_8) {
  int num = +0;
  ck_assert_int_eq(s21_abs(num), abs(num));
}
END_TEST

START_TEST(abs_9) {
  int num = S21_INF_MNS;
  ck_assert_int_eq(s21_abs(num), abs(num));
}
END_TEST

START_TEST(abs_10) {
  int num = S21_INF_PLS;
  ck_assert_int_eq(s21_abs(num), abs(num));
}
END_TEST

START_TEST(abs_11) {
  int num = S21_NAN;
  ck_assert_int_eq(s21_abs(num), abs(num));
}
END_TEST

Suite *test_s21_abs(void) {
  Suite *s13;
  TCase *tc13;
  s13 = suite_create("s21_abs");
  tc13 = tcase_create("case_abs");

  tcase_add_test(tc13, abs_1);
  tcase_add_test(tc13, abs_2);
  tcase_add_test(tc13, abs_3);
  tcase_add_test(tc13, abs_4);
  tcase_add_test(tc13, abs_5);
  tcase_add_test(tc13, abs_6);
  tcase_add_test(tc13, abs_7);
  tcase_add_test(tc13, abs_8);
  tcase_add_test(tc13, abs_9);
  tcase_add_test(tc13, abs_10);
  tcase_add_test(tc13, abs_11);

  suite_add_tcase(s13, tc13);
  return s13;
}