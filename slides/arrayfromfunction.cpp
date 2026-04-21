#include <iostream>
#include <vector>

std::vector<int> make_array(int n) {
  std::vector<int> v(n);
  for (int i = 0; i < n; i++) {
    v[i] = i + 1;
  }
  return v;
}

int main() {
  int n;
  std::cin >> n;
  std::vector<int> arr = make_array(n);
  for (int x : arr) {
    std::cout << x << ' ';
  }
  std::cout << '/n';
}