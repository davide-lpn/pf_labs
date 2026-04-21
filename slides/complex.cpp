#include <cassert>
#include <cmath>
#include <iostream>
#include <utility>

class Complex {
 private:
  double r;
  double i;

 public:
  Complex(double r, double i) : r{r}, i{i} {}
  double norm2();
  Complex sqrt();
  friend bool operator==(Complex const& a, Complex const& b);
  friend Complex operator+(Complex const& a, Complex const& b);
  friend Complex operator*(Complex const& a, Complex const& b);
  friend std::ostream& operator<<(std::ostream& os, Complex const& c);
};  // nota che le parentesi graffe della classe terminano con ;

double Complex::norm2() {
  return r * r + i * i;
}  // parentesi graffe delle funzioni invece non punto e virgola

Complex Complex::sqrt() {
  double mod = std::sqrt(norm2());
  double real = std::sqrt((mod + r) / 2.0);
  double imag = std::sqrt((mod - r) / 2.0);
  if (i < 0) imag = -imag;
  return Complex{real, imag};
}

bool operator==(Complex const& a, Complex const& b) {
  return a.r == b.r && a.i == b.i;
}

Complex operator+(Complex const& a, Complex const& b) {
  return Complex{a.r + b.r, a.i + b.i};
}

Complex operator*(Complex const& a, Complex const& b) {
  return Complex{a.r * b.r - a.i * b.i, a.r * b.i + a.i * b.r};
}

std::pair<Complex, Complex> quadraticequation(double a, double b, double c) {
  assert(a != 0);

  double delta = b * b - 4 * a * c;
  if (delta > 0)
    return {Complex{(-b + std::sqrt(delta)) / (2 * a), 0},
            Complex{(-b - std::sqrt(delta)) / (2 * a), 0}};
  else {
    double real = -b / (2 * a);
    double imag = std::sqrt(-delta) / (2 * a);
    return {Complex{real, imag}, Complex{real, -imag}};
  }
}

std::ostream& operator<<(std::ostream& os, Complex const& c) {
  os << c.r;
  if (c.i >= 0) os << "+";
  os << c.i << "i";
  return os;
}

int main() {
  double a;
  double b;
  double c;
  std::cout << "Inserisci i valori dei 3 coefficienti di un'equazione "
               "quadratica di secondo grado"
            << '\n';
  std::cin >> a >> b >> c;
  auto result = quadraticequation(a, b, c);
  std::cout << "x1 = " << result.first << '\n';
  std::cout << "x2 = " << result.second << '\n';
}
