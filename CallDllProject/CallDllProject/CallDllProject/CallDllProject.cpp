// CallDllProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#pragma comment(lib,"DllA.lib")
extern "C" _declspec(dllimport) int addtest(int a, int b);

int main()
{
  int num = addtest(1, 2);
  std::cout << num << std::endl;

  return 0;
}