#include <iostream>

char trasformainminuscolo(char a);

int main (){
    std::cout << "inserisci il carattere" << '\n';
    char a;
    std::cin >> a;
    char result = trasformainminuscolo(a);
    std::cout << result << '\n';
    return 0;
}

char trasformainminuscolo(char a){
    if(a >= 'A' && a<= 'Z') { return a + 32;}
    return a;
}