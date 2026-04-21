#include <iostream>
#include <string>

int main() {
  std::cout << "Insert your name: \n";
  std::string name;
  std::cin >> name;
  std::cout << "Hello, " << name << std::endl;
  return 0;
}