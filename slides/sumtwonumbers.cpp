#include <iostream>

int main() {
  int a, b;
  std::cout << "il primo numero ";
  std::cin >> a;
  std::cout << "il secondo numero ";
  std::cin >> b;
  int sum = a + b;
  std::cout << "la somma è: " << sum << '\n';
}