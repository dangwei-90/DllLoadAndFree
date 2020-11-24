// DLLA 的方法的实现

#include "stdio.h"
#include "pch.h"


extern "C" _declspec(dllexport) int addtest(int a, int b) {
  // 隐式调用
  // subtest(5,1);

  // 显示调用
  typedef int(*psubtest)(int a, int b);
  psubtest subtest;
  HINSTANCE hDLL = LoadLibrary(L"DllB.dll");
  subtest = (psubtest)GetProcAddress(hDLL, "subtest");
  subtest(5, 1);

  return a + b;
}