#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <random>
#include <vector>

#include "nrangen_mean_std.hpp"

int main() {
  std::mt19937 engine{std::random_device{}()};
  std::uniform_int_distribution<int> dist{1, 100};
  std::vector<int> vec;
  int n;
  std::cin >> n;
  std::generate_n(std::back_inserter(vec), n, [&]() { return dist(engine); });
  for (int x : vec) {
    std::cout << x << ' ';
  }
  std::cout << '\n';
  double mean = compute_mean(vec);
  double stddev = compute_stddev(vec, mean);
  std::cout << mean << ' ' << stddev << '\n';
  /*avrei potuto fare la chiamata di funzione anche direttamente
  nel cout ma in questo caso non conviente perchè stddev ha in input
  la computazione di compute_mean*/
}