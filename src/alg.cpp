// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double number = value;
  if (n == 0) {
    return 1;
  } else if (n == 1) {
    return value;
  } else if (n > 0) {
    for (uint16_t i = 1; i < n; i++) {
      value = value*number;
    } return value;
  } else {
    for (uint16_t i = 1; i < n; i++) {
      value = value*number;
    } return 1/value;
  }
}

uint64_t fact(uint16_t n) {
  uint64_t number = n;
  for (uint64_t i = 1; i < n; i++) {
    number = number*i;
  }
  return number;
}

double calcItem(double x, uint16_t n) {
  double ics = pown(x, n);
  uint64_t f = fact(n);
  return ics/f;
}

double expn(double x, uint16_t count) {
  return 0;
}

double sinn(double x, uint16_t count) {
  return 0;
}

double cosn(double x, uint16_t count) {
  return 0;
}
