#include <cmath>
#include <iostream>
#include <type_traits>

template <typename T>
class Complex {
  T r;
  T i;

 public:
  Complex(T r, T i) : r{r}, i{i} {}
  T real() const { return r; };
  T imag() const { return i; };
};

template <typename T, typename U>
Complex<std::common_type_t<T, U>> operator+(Complex<T> const& a,
                                            Complex<U> const& b) {
  using R = std::common_type_t<T, U>;
  return Complex<R>{a.real() + b.real(), a.imag() + b.imag()};
}

int main() {
  auto result = operator+
      (Complex<float>{1.F, 3.4F}, Complex<double>{7.65, 8.3});
  std::cout << result.real() << "+" << result.imag() << "i" << '\n';
}
