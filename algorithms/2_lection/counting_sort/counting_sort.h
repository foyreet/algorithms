
#ifndef VK_MADE_COUNTING_SORT_H
#define VK_MADE_COUNTING_SORT_H

#include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <sstream>

// void create_vector - функция для создания и заполнения вектора
inline void create_vector(std::vector<int>& arr) {
    std::string line;
    std::getline(std::cin, line); // Считываем всю строку
    std::stringstream ss(line);
    int value;
    while (ss >> value) {
        arr.push_back(value);
    }
}

// std::vector<int> cout_vector - функция для вывода вектора
inline void cout_vector(std::vector<int>& cnt) {
    for (size_t i = 0; i < cnt.size(); i++) {
        std::cout << cnt[i] << " ";
    }
}

// int max_element - функция для нахождения максимального элемента в векторе
inline int max_element(std::vector<int>& arr, int n) {
    int max_val = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] >= max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

// int min_element - функция для нахождения минимального элемента в векторе
inline int min_element(std::vector<int>& arr, int n) {
    int min_val = std::numeric_limits<int>::max();
    for (int i = 0; i < n; i++) {
        if (arr[i] <= min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

// void create_cnt - функция для заполнения массива cnt значениями
inline void create_cnt(std::vector<int>& arr, int n, std::vector<int>& cnt, int min_val) {
    for (int i = 0; i < n; i++) {
        cnt[arr[i] - min_val]++;
    }
}

inline void restore_sorted_array(const std::vector<int>& cnt, std::vector<int>& sorted_arr, int min_val) {
    for (size_t i = 0; i < cnt.size(); i++) {
        for (int j = 0; j < cnt[i]; j++) {
            sorted_arr.push_back(i + min_val);
        }
    }
}

#endif //VK_MADE_COUNTING_SORT_H
