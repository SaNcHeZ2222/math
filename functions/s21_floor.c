#include "../s21_math.h"

long double s21_floor(double x) {
  long double result;
  if (S21_IS_NAN(x)) {
    result = S21_NAN;
  } else if (x == S21_INF_PLS) {
    result = S21_INF_PLS;
  } else if (x == S21_INF_MNS) {
    result = S21_INF_MNS;
  } else if (x >= 0)
    result = (long double)((long long)x);
  else
    result = (long double)((long long)x - 1);
  return result;
}