#include <iostream>

int main () {
    std::cout << "Dammi un numero: " << '\n';
    int n;
    std::cin >> n;
    int i{1};
    while (i*i<n) {
        ++i;
    }
    std::cout << "L'integer square root di " << n << " è " << i-1 << '\n';
}