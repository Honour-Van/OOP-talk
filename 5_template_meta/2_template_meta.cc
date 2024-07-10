#include <iostream>

// 模板元编程计算平方
template <int N>
struct Square
{
  static const int value = N * N;
};

int main()
{
  const int sensor_value = 5;
  std::cout << "The square of " << sensor_value << " is " << Square<sensor_value>::value << std::endl;

  return 0;
}
