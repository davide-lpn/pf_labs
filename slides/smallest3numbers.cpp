#include <iostream>

int main () {
    std::cout << "Dammi tre numeri: " << '\n';
    int a;
    int b;
    int c;
    std::cin >> a >> b >> c;
    if (a>b){
        if(b>c) {
            std::cout << "il più piccolo è: " << c << '\n';} 
         else {std::cout << "il più piccolo è: " << b << '\n';}}   
    else {
        if(a>c) {
            std::cout << "il più piccolo è: " << c << '\n';}
        else {std::cout << "il più piccolo è: "<< a << '\n';}
    }
}