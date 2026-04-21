#include <iostream>

int main (){
    std::cout << "Dammi un numero: ";
    int n;
    std::cin >> n;
    int i{1};
    for(; i*i <= n; ++i) {}
    std::cout << "La sua radice quadrata intera è: " << i-1 << '\n';
}