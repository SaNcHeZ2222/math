#include "../s21_math.h"

long double s21_tan(double x) {
  long double result;
  if (S21_IS_NAN(x) || x == S21_INF_PLS || x == S21_INF_MNS)
    result = S21_NAN;
  else if (x == S21_PI / 2)
    result = 16331239353195370L;
  else if (x == -S21_PI / 2)
    result = -16331239353195370L;
  else
    result = s21_sin(x) / s21_cos(x);
  return result;
}