#ifndef S21_MATH_TEST_H_
#define S21_MATH_TEST_H_

#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define S21_EPS_TEST 1e-06

Suite *test_s21_ceil(void);
Suite *test_s21_sqrt(void);
Suite *test_s21_sin(void);
Suite *test_s21_fmod(void);
Suite *test_s21_cos(void);
Suite *test_s21_abs(void);
Suite *test_s21_fabs(void);
Suite *test_s21_floor(void);
Suite *test_s21_fmod(void);
Suite *test_s21_tan(void);
Suite *test_s21_pow(void);
Suite *test_s21_exp(void);
Suite *test_s21_log(void);
Suite *test_s21_atan(void);
Suite *test_s21_acos(void);
Suite *test_s21_asin(void);

#endif  // S21_MATH_TEST_H_