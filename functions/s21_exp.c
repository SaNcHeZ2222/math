#include "../s21_math.h"

long double s21_exp(double x) {
  long double result;
  if (S21_IS_NAN(x))
    result = S21_NAN;
  else if (x == S21_INF_PLS)
    result = S21_INF_PLS;
  else if (x == S21_INF_MNS || x < -1000)
    result = 0.0;
  else if (x > 1000)
    result = S21_INF_PLS;
  else {
    int p = (int)s21_floor(x);
    double q = x - p;
    double exp_q = 1.0;
    int i = 1;
    double member_series = q;
    do {
      exp_q += member_series;
      member_series *= q / ++i;
    } while ((member_series / i) > S21_EPS);
    double exp_p = 1;
    for (int j = 0; j < s21_abs(p); ++j) {
      exp_p *= S21_E;
      if (exp_p == S21_INF_PLS) {
        result = S21_INF_PLS;
        break;
      }
    }
    if (p < 0) exp_p = 1 / exp_p;
    if (exp_p != S21_INF_PLS) result = exp_p * exp_q;
  }
  return result;
}