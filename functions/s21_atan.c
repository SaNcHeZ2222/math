#include "../s21_math.h"

long double s21_atan(double x) {
  long double result;
  if (S21_IS_NAN(x))
    result = S21_NAN;
  else if (x == S21_INF_PLS)
    result = S21_PI / 2;
  else if (x == S21_INF_MNS)
    result = -S21_PI / 2;
  else {
    int inverse_flag = 0, negative_flag = 0;
    int n = 0;
    if (x < 0.0) {
      x = -x;
      negative_flag = 1;
    }
    if (x > 1.0) {
      x = 1.0 / x;
      inverse_flag = 1;
    }
    while (x > S21_PI / 12.0) {
      x = (x * SQRT3 - 1) / (x + SQRT3);
      n++;
    }
    result = x * (0.55913709 / (1.4087812 + x * x) + 0.60310579 -
                  0.05160454 * x * x);
    for (int i = 0; i < n; ++i) result += S21_PI / 6.0;
    if (inverse_flag) result = S21_PI / 2 - result;
    if (negative_flag) result = -result;
  }
  return result;
}