// DLLA �ķ�����ʵ��

#include "stdio.h"
#include "pch.h"


extern "C" _declspec(dllexport) int addtest(int a, int b) {
  // ��ʽ����
  // subtest(5,1);

  // ��ʾ����
  typedef int(*psubtest)(int a, int b);
  psubtest subtest;
  HINSTANCE hDLL = LoadLibrary(L"DllB.dll");
  subtest = (psubtest)GetProcAddress(hDLL, "subtest");
  subtest(5, 1);

  return a + b;
}