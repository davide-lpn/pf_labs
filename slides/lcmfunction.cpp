#include <iostream>

int lcm(int a, int b);
int gcd(int a, int b);

int main () {
    std::cout << "inserisci i due numeri di cui vuoi sapere il minimo comune multiplo: " << '\n';
    int a;
    int b;
    std::cin >> a >> b;
    int result = lcm(a,b);
    std::cout << "il minimo comune multiplo è: " << result << '\n';

}

int gcd(int a, int b){
    
    if (b == 0){
        return a;
    } else {
        int r = a % b;
        return gcd(b, r);
    }
}

int lcm(int a, int b){
    return (a/ gcd(a,b))*b;
}