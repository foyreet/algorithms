
#ifndef VK_MADE_COUNTING_SORT_H
#define VK_MADE_COUNTING_SORT_H
#include <vector>

// void create_vector - функция для создания и заполнения вектора
void create_vector(std::vector<int>& arr, int n);

// std::vector<int> cout_vector - функция для вывода вектора
void cout_vector(std::vector<int>& cnt, int m);

// int max_element - функция для нахождения максимального элемента в векторе
int max_element(std::vector<int>& arr, int n);

// int min_element - функция для нахождения минимального элемента в векторе
int min_element(std::vector<int>& arr, int n);

// void create_cnt - функция для заполнения массива cnt значениями
void create_cnt(std::vector<int>& arr, int n, std::vector<int>& cnt, int min_val);

#endif //VK_MADE_COUNTING_SORT_H
