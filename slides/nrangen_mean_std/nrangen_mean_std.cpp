#include "nrangen_mean_std.hpp"

#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <random>
#include <vector>

double compute_mean(const std::vector<int>& vec) {
  return std::accumulate(vec.begin(), vec.end(), 0.0) /
         static_cast<double>(vec.size());
}

double compute_stddev(const std::vector<int>& vec, double mean) {
  double variance = std::accumulate(vec.begin(), vec.end(), 0.0,
                                    [mean](double acc, int x) {
                                      double diff = x - mean;
                                      return acc + diff * diff;
                                    }) /
                    static_cast<double>(vec.size());
  return std::sqrt(variance);
}
