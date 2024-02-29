#include "../s21_math.h"

long double s21_fabs(double x) {
  // проверки на none и бесконечность не нужны, т.к. fabs их не возвращает.
  if (x < 0) x = -x;
  return x;
}