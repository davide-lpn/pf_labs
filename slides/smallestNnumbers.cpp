#include <iostream>
#include <vector>

int main () {
    
    std::cout << "inserisci una sequenza di numeri " << '\n';
    std::cout << "Premi Ctrl+D per terminare l'inserimento " << '\n';
    std::vector<int> v;
 
    for(int n; std::cin >> n ;){
        v.push_back(n);
    }

    if (std::cin.fail() && !std::cin.eof()){
        std::cout <<'\n' <<"Errore: hai inserito un numero non valido. Riprova." << '\n';
        std::cin.clear(); // reset stato di errore
    };

    if(v.empty()){
        std::cout << "Nessun numero valido inserito. Programma terminato." << '\n';
        return 0;
    }

    int min = v[0];
    for ( int i{0}; i< v.size(); i++){
        int n= v[i];
        if (n < min) min = n;
    }


std::cout << "Valore minimo: " << min << '\n';

}