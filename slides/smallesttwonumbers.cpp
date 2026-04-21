#include <iostream>

int main(){
int a;
int b;
std::cout << "il primo numero è: ";
std::cin >> a;
std::cout << "il secondo numero è: ";
std::cin >> b;
if (a<b) {std::cout << "il numero più piccolo è: " << a << '\n';} 
else 
{std::cout << "il numero più piccolo è: " << b << '\n';}
}