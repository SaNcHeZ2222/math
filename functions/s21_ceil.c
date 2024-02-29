#include "../s21_math.h"

long double s21_ceil(double x) {
  double res;
  if (S21_IS_NAN(x)) {
    res = S21_NAN;
  } else if (x == S21_INF_PLS) {
    res = S21_INF_PLS;
  } else if (x == S21_INF_MNS) {
    res = S21_INF_MNS;
  } else if (x >= 0) {
    res = (long int)(x + 0.99999999999L);
  } else {
    res = (long int)x;
  }
  return res;
}