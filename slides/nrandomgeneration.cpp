#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

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
}