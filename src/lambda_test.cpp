// Copyright 2015 <caioboffo@gmmail.com>

#include <iostream>
#include <complex>

int main() {
  auto func = [] (auto input) { return input * input; };
  
  std::cout <<  func(10) << std::endl;

  std::cout << func(2.345) << std::endl;

  std::cout << func(std::complex<double>(3, -2)) << std::endl;
  
}
