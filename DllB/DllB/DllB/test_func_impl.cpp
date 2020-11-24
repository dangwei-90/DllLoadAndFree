#include "stdio.h"
#include "pch.h"


extern "C" _declspec(dllexport) int subtest(int a, int b) {
  return a - b;
}