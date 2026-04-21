#include <numeric>
#include <ostream>
#include <stdexcept>

template <typename T>
class Rational {
  T n;
  T d;

 public:
  Rational(T num = 0, T den = 1) : n{num}, d{den} {
    if (d == 0) throw std::runtime_error{"denominator is zero"};
    auto g = std::gcd(n, d);
    n /= g;
    d /= g;
    if (d < 0) {
      n = -n;
      d = -d;
    }
  }

  T num() const { return n; }
  T den() const { return d; }
}
