/**
 * Pointers
 *
 * Copyright (c) 2019, Jack Hawley.
 */

#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main() {
  // var on the Stack
  int var = 8;
  int* ptr = &var;
  *ptr = 10;
  LOG(var);
  std::cin.get();

  return 0;
}
