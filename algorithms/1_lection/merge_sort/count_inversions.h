
#ifndef VK_MADE_COUNT_INVERSIONS_H
#define VK_MADE_COUNT_INVERSIONS_H

#include <vector>
// Функция для слияния двух отсортированных массивов и подсчета инверсий
std::pair<std::vector<int>, int> merge_and_count(std::vector<int> &left, std::vector<int> &right);

// Рекурсивная функция сортировки слиянием и подсчета инверсий
std::pair<std::vector<int>, int> merge_sort_and_count(const std::vector<int>& arr);

// Функция для подсчета инверсий в массиве
long long count_inversions(const std::vector<int>& arr);

#endif //VK_MADE_COUNT_INVERSIONS_H
