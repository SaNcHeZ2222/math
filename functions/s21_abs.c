#include "../s21_math.h"

int s21_abs(int x) {
  // проверки на none и бесконечность не нужны, т.к. abs их не возвращает.
  if (x < 0) x = -x;
  return x;
}