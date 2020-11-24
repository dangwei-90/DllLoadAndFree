#include "stdio.h"
#include "pch.h"


extern "C" _declspec(dllexport) int sumtest(int a, int b) {
  return a - b;
}