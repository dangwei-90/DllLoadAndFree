// program : CallDllProject
// 用于加载 dllA

#include <iostream>

#pragma comment(lib,"DllA.lib")
extern "C" _declspec(dllimport) int addtest(int a, int b);

int main()
{
  int num = addtest(1, 2);
  std::cout << num << std::endl;

  return 0;
}