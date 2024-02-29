#include "../s21_math.h"

long double s21_fmod(double x, double y) {
  long double result;
  if (S21_IS_NAN(x) || S21_IS_NAN(y) || y == 0 || x == S21_INF_PLS ||
      x == S21_INF_MNS) {
    result = S21_NAN;
  } else if (y == S21_INF_PLS)
    result = x;
  else if (y == S21_INF_MNS)
    result = x;
  else
    result = (long double)(x - (long long)(x / y) * y);
  return result;
}