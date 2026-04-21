#include <iostream>

int gcd(int a, int b);

int main () {
    std::cout << "inserisci due numeri di cui vuoi sapere il massimo comun divisore" << '\n';
    int a;
    int b;
    std::cin >> a >> b;
    int result = gcd(a,b);
    std::cout << "il massimo comun divisore di tali due numeri è: " 
    << result << '\n';
}

int gcd(int c, int d){
    
    if (d == 0){
        return c;
    } else {
        int r = c % d;
        return gcd(d, r);
    }
}