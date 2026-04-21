#include <iostream>
//using namespace std;

int pow(int base, int exp);

int main () {
    std::cout<< "inserisci prima la base poi l'esponenete " << '\n';
    int a;
    int b;
    std::cin>> a;
    std::cin>>b;
    int risultato = pow(a, b);
    std::cout << "L'elevamento a potenza è: " << risultato << '\n';
}

int pow(int base, int exp){
    if(exp == 0){return 1;}
    if(exp == 1){return base;}
    else{
        int risultato = base;
        for(int i=2; i <= exp; ++i){
            risultato = risultato*base;
        }
        return risultato;
    }
}