#include "../s21_math.h"

long double s21_sin(double x) {
  if (S21_IS_INF(x) || S21_IS_NAN(x)) return S21_NAN;
  x = s21_fmod(x, 2 * S21_PI);
  /*while ((x < -2 * S21_PI) || (x > 2 * S21_PI)) {
    if (x < -2 * S21_PI)
      x += 2 * S21_PI;
    else
      x -= 2 * S21_PI;
  }*/

  long double rez = x, rez_i = x;
  long int i = 0;

  while (rez_i > S21_EPS || rez_i < -S21_EPS) {
    rez_i = (-1) * rez_i * x * x / ((2 * i + 2) * (2 * i + 3));
    rez = rez + rez_i;
    i++;
  }
  return rez;
}