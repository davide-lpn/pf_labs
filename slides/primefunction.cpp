#include <iostream>

bool prime(int n);

int main () {
    std::cout << "Inserisci il numero di cui vuoi sapere se è primo: " << '\n';
    int n;
    std::cin >> n;
    std::cout << "Tale numero è primo? "<< std::boolalpha << prime(n) << '\n';
}

bool prime(int n) {
    if (n<= 1){return false;}
    if (n==2){return true;}
    if (n % 2 == 0) {return false;}
    for(int i=3; i * i <=n; i+=2) {if (n % i == 0) return false;}
    return true;
}