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

stats coctail_sort(std::vector<int>& arr) {
    int size = arr.size();
    stats s;
    if (size < 2)
        return s;
    int low = 0;
    int up = size - 1;
    int last=-1;
    while (low < up) {
        last = -1;
        for (int i = low; i < up; ++i) {
            ++s.comparison_count;
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                last = i;
                ++s.copy_count;
            }
        }
        up = last;
        if (last == -1)
            break;
        for (int i = up - 1; i >= low; --i) {
            ++s.comparison_count;
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                last = i;
                ++s.copy_count;
            }
        }
        low = last + 1;
    }
    return s;
}

stats comb_sort(std::vector<int>& arr) {
    stats s;
    int size = arr.size();
    if (size < 2)
        return s;
    int step = size;
    while (step >= 1) {
        int swaps = 0;
        for (int i = 0; i < size-step; ++i) {
            ++s.comparison_count;
            if (arr[i] > arr[i + step]) {
                swap(arr[i], arr[i + step]);
                ++s.copy_count;
                ++swaps;
            }
        }
        step = step - 1;
        if (swaps == 0 && step==1)
            break;
    }return s;
}