// DLLA, 加载 dllB

// dllmain.cpp : 定义 DLL 应用程序的入口点。

#include "pch.h"

/////////////////// 隐式调用 ///////////////////////
//#pragma comment(lib,"DllB.lib")
//extern "C" _declspec(dllimport) int subtest(int a, int b);
/////////////////// 隐式调用 ///////////////////////

BOOL APIENTRY DllMain(HMODULE hModule,
  DWORD  ul_reason_for_call,
  LPVOID lpReserved
)
{
  switch (ul_reason_for_call)
  {
  case DLL_PROCESS_ATTACH:
    MessageBoxA(NULL, "DLL A attach.", "DLL A", MB_OK);
    break;
  case DLL_THREAD_ATTACH:
    break;
  case DLL_THREAD_DETACH:
    break;
  case DLL_PROCESS_DETACH:
    MessageBoxA(NULL, "DLL A detach.", "DLL A", MB_OK);
    break;
  }
  return TRUE;
}