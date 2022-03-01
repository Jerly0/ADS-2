// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  uint64_t number = n;
  for(uint16_t i = 0; i < n; i++) {
    n = n*number;
  }
  return n;
}

uint64_t fact(uint16_t n) {

}

double calcItem(double x, uint16_t n) {

}

double expn(double x, uint16_t count) {

}

double sinn(double x, uint16_t count) {

}

double cosn(double x, uint16_t count) {

}
