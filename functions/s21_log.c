#include "../s21_math.h"

long double s21_log(double x) {
  long double result = 0;
  if (S21_IS_NAN(x) || x < 0 || x == S21_INF_MNS)
    result = S21_NAN;
  else if (x == S21_INF_PLS)
    result = S21_INF_PLS;
  else if (x == 0.0)
    result = S21_INF_MNS;
  else {
    int p = 0;
    long double E_1 = 1 / S21_E;
    while (x > 2 - S21_EPS) {
      x *= E_1;
      p += 1;
    }
    while (x < 0.1) {
      x *= S21_E;
      p -= 1;
    }
    long double x1 = x - 1.0;
    long double member_series = 1.0;
    int i = 1;
    do {
      member_series *= x1;
      result += member_series / i;
      member_series *= -1;
      ++i;
    } while ((member_series) / i > S21_EPS ||
             (-member_series / i) > S21_EPS);  //&& member_series / i < -S21_EPS
    result += p;
  }
  return result;
}