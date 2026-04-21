#ifndef NRANGEN_MEAN_STD_HPP
#define NRANGEN_MEAN_STD_HPP
#include <vector>

double compute_mean(const std::vector<int>& vec);
double compute_stddev(const std::vector<int>& vec, double mean);

#endif