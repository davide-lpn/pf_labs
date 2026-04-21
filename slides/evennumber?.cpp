#include <iostream>

int main (){
    std::cout << "Dammi un numero: ";
    int a;
    std::cin >> a;
    int rest;
    rest = a % 2;
    if (rest == 0){std::cout << a << " è pari" << '\n';}
    else {std::cout << a << " è dispari" << '\n';}
}