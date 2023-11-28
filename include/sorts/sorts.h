#pragma once
#include <cmath>
#include <stdexcept>
#include <iostream>
#include <random>
#include <vector>

using namespace std;

struct stats {
    size_t comparison_count = 0;
    size_t copy_count = 0;
};

stats insertion_sort(std::vector<int>& arr) {
    stats s;
    int size = arr.size();
    if (size < 2)
        return s;
    for (int i = 1; i < size; ++i) {
        for (int j = i; j > 0; --j) {
            ++s.comparison_count;
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);;
                ++s.copy_count;
            }
            else break;
        }
    }
    return s;
}