/**
 * 2d-vectors
 *
 * Copyright (c) 2019, Jack Hawley.
 */

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <regex>
#include <set>
#include <string>
#include <thread>
#include <tuple>
#include <vector>

int diagonalDifference(std::vector<std::vector<int>> arr) {
  int diagonal1 = 0, diagonal2 = 0;
  int arrSize = arr.size() * arr.size();
  for (int i = 0; i < arr.size(); i++) {
    diagonal1 += arr[i][i];
    diagonal2 += arr[i][arr.size() - i - 1];
  }
  return abs(diagonal1 - diagonal2);
}

int main() {
  std::vector<std::vector<int>> myarray = {{3, 2, 1}, {4, 5, 6}, {7, 6, 5}};
  std::cout << myarray.size() * myarray.size() << std::endl;
  std::cout << diagonalDifference(myarray) << std::endl;

  int first = 3;
  double second = 95;
  std::cout << second / first << std::endl;
  return 0;
}
