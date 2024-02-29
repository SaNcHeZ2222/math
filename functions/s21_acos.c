#include "../s21_math.h"

long double s21_acos(double x) {
  if (S21_IS_NAN(x) || !(x >= -1 && x <= 1))
    x = S21_NAN;
  else if (x < 0 && x >= -1)
    x = S21_PI + s21_atan(s21_sqrt(1 - x * x) / x);
  else if (x >= 0 && x <= 1)
    x = s21_atan(s21_sqrt(1 - x * x) / x);
  return x;
}