#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <cmath>

#include "doctest.h"

int factorial(int n) {
  if (n < 0) {
    return -1;
  } else if (n == 1 || n == 0) {
    return 1;
  } else {
    std::vector<int> numbers;
    /*for (int i{2}; i <= n; ++i) {
      numbers.push_back(i);
    }*/
    // std::iota(numbers.begin(),numbers.end(),n);
    /*std::accumulate(numbers.begin(), numers.end(), 1,
                    [](int a, int b) { return a * b })*/
    int res{1};
    for (int i{2}; i <= n; ++i) {
      res *= i;
    }
    return res;
  }
}

double cos_taylor(double x, int N) {
  if (N < 0) {
    return -1;
  } else {
    double sum{0};
    for (int n{0}; n <= N; ++n) {
      double addend{std::pow(-1, n) *
                    (1.0 / factorial(2 * n) * std::pow(x, 2 * n))};
      sum += addend;
    }
    return sum;
  }
}

TEST_CASE("Testing factorial(n)") {
  CHECK(factorial(0) == 1);
  CHECK(factorial(1) == 1);
  CHECK(factorial(4) == 24);
}

TEST_CASE("Testing cos_taylor(x, N)") {
  CHECK(cos_taylor(0.5, 0) == 1);
  CHECK(cos_taylor(0.5, 1) == doctest::Approx(0.875).epsilon(0.001));
  CHECK(cos_taylor(0.5, 2) == doctest::Approx(0.877).epsilon(0.001));
  CHECK(cos_taylor(0.5, 3) == doctest::Approx(0.878).epsilon(0.001));
  CHECK(cos_taylor(0.5, -9) == -1);
}