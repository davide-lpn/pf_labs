#include <iostream>
#include <numeric>
#include <vector>

int main() {
  std::vector<int> vec;
  int n;
  while (std::cin >> n) {
    vec.push_back(n);
  }
  int product =
      std::accumulate(vec.begin(), vec.end(), 1, std::multiplies<int>{});

  std::cout << product << '\n';
}