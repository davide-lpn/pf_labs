#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "nrangen_mean_std.hpp"

TEST_CASE("compute_mean") {
  CHECK(compute_mean({2, 4}) == 3.0);
  CHECK(compute_mean({5, 5, 5}) == 5.0);
  CHECK(compute_mean({-2, 2}) == 0.0);
}

TEST_CASE("compute_stddev") {
  CHECK(compute_stddev({2, 4}, 3.0) == 1.0);
  CHECK(compute_stddev({5, 5, 5}, 5.0) == 0.0);
  CHECK(compute_stddev({1, 2, 3}, 2.0) ==
        doctest::Approx(0.8165).epsilon(0.001));
}