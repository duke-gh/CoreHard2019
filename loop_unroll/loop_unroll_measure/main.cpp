#include <iostream>
#include <chrono>
#include "loop_unroll.h"


int main() {
  double res{0};
  const auto start = std::chrono::high_resolution_clock::now().time_since_epoch().count();
  res = MEASURE_GOAL(1000000000);
  const auto end = std::chrono::high_resolution_clock::now().time_since_epoch().count();
  std::cout << "res = " << res << std::endl;
  std::cout << "Spent " << end - start << " ns (" << (end - start)/1000000 << " ms)" <<  std::endl;
  std::cout << __VERSION__ << std::endl;
  return 0;
}
