#include "../s21_math.h"

long double s21_asin(double x) {
  if (x < -1)
    x = -S21_NAN;
  else if (x > 1)
    x = S21_NAN;
  else
    x = s21_atan(x / (s21_sqrt(1 - x * x)));
  return x;
}
