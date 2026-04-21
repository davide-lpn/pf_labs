#include<iostream>

enum class Operator {Plus, Minus, Multiplies, Divides};
double operation(double a, double b, Operator op);

int main (){
double a;
double b;
char c;
Operator op;
std::cout << "Inserisci due numeri e un operatore " << '\n';
std::cin >> a >> b >> c;

if(c == '+') {op = Operator::Plus;}
else if (c == '-') {op = Operator::Minus;}
else if (c=='*') {op = Operator::Multiplies;}
else op=Operator::Divides;


double result {operation(a,b,op)};
std::cout << "il risultato è: " << result << '\n'; 
}

double operation(double a, double b, Operator op ){
    switch(op){
        case Operator::Plus: return a+b;
        case Operator::Minus: return a-b;
        case Operator::Multiplies: return a*b;
        case Operator::Divides: return a/b;
        default: return 0;
    }
}