#include "stdio.h"
#include "pch.h"


extern "C" _declspec(dllexport) int addtest(int a, int b) {
  return a + b;
}