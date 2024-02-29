#include "../s21_math.h"

long double s21_sqrt(double x) {
  double res;
  if (S21_IS_NAN(x) || x == S21_INF_MNS || x < 0) {
    res = S21_NAN;
  } else if (x == S21_INF_PLS) {
    res = S21_INF_PLS;
  } else {
    res = s21_pow(x, 0.5);
  }
  return res;
}