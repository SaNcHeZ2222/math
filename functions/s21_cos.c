#include "../s21_math.h"

long double s21_cos(double x) {
  if (S21_IS_INF(x) || S21_IS_NAN(x)) return S21_NAN;

  x = s21_fmod(x, 2 * S21_PI);
  /*while ((x < -2 * S21_PI) || (x > 2 * S21_PI)) {
    if (x < -2 * S21_PI)
      x += 2 * S21_PI;
    else
      x -= 2 * S21_PI;
  }*/

  long double rez = 1, rez_i = 1;
  long int i = 1;
  while (rez_i > S21_EPS || rez_i < -S21_EPS) {
    rez_i = rez_i * (-1) * x * x / ((2 * i - 1) * (2 * i));
    rez += rez_i;
    i++;
  }

  return rez;
}