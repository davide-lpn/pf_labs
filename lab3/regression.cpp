#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <stdexcept>

#include "doctest.h"

struct Result {
  double A;
  double B;
};

class Regression {
  int N_{0};
  double sum_x_{0.};
  double sum_y_{0.};
  double sum_xsqr_{0.};
  double sum_xy_{0.};

 public:
  auto size() const { return N_; }
  void add(double x, double y) {
    ++N_;
    sum_x_ += x;
    sum_y_ += y;
    sum_xsqr_ += x * x;
    sum_xy_ += x * y;
  }
  auto fit() const {
    if (N_ < 2) {
      throw std::runtime_error{"Not enough points for a fit"};
    }
    auto const d{N_ * sum_xsqr_ - std::pow(sum_x_, 2)};
    if (d == 0) {
      throw std::runtime_error{"vertical line, no fit possible"};
    }
    double const a{(sum_y_ * sum_xsqr_ - sum_x_ * sum_xy_) / d};
    double const b{(N_ * sum_xy_ - sum_x_ * sum_y_) / d};
    return Result{a, b};
  }
};

TEST_CASE("Testing the class handling linear regression") {
  Regression reg;

  REQUIRE(reg.size() == 0);

  SUBCASE("Fitting with no points throws") { CHECK_THROWS(reg.fit()); }

  SUBCASE("Fitting on one point throws") {
    reg.add(0., 0.);
    CHECK_THROWS(reg.fit());
  }

  SUBCASE("Fitting on two, vertically aligned, points throws") {
    CHECK_THROWS(reg.fit());
  }

  SUBCASE("Fitting on two points") {
    reg.add(0., 1.);
    reg.add(1., 2.);
    auto result = reg.fit();
    CHECK(result.A == doctest::Approx(1.));
    CHECK(result.B == doctest::Approx(1.));
  }
}