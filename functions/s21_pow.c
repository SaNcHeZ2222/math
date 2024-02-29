#include "../s21_math.h"

long double s21_pow(double base, double exponent) {
  long double res;
  if (base < 0) {
    if ((long int)exponent == exponent) {
      if (exponent > 0) {
        res = base;
        for (long int i = 0; i < (long int)exponent - 1; i++) {
          res *= base;
        }
      } else if (exponent == 0) {
        res = 1;
      } else {
        res = 1 / base;
        for (long int i = 0; i < (long int)exponent * (-1) - 1; i++) {
          res /= base;
        }
      }
    } else {
      if (exponent == S21_INF_MNS || exponent == S21_INF_PLS) {
        if (base * (-1) < 1) {
          res = 0;
        } else if (base * (-1) == 1) {
          res = 1;
        } else {
          if (exponent == S21_INF_MNS) {
            res = 0;
          } else {
            res = S21_INF_PLS;
          }
        }
      } else {
        res = S21_NAN;
      }
    }
  } else if (base == 0) {
    res = exponent == 0 ? 1 : 0;
  } else if (base == 1) {
    res = 1;
  } else {
    if ((long int)exponent == exponent) {
      if (exponent > 0) {
        res = base;
        for (long int i = 0; i < (long int)exponent - 1; i++) {
          res *= base;
        }
      } else if (exponent == 0) {
        res = 1;
      } else {
        res = 1 / base;
        for (long int i = 0; i < (long int)exponent * (-1) - 1; i++) {
          res /= base;
        }
      }
    } else {
      res = s21_exp(exponent * (double)s21_log(base));
    }
  }
  return res;
}