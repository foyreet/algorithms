#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "../../1_lection/quick_sort/quick_sort.h"
int find(std::vector<int> &a, int k, int l, int r) {
    if (r - l == 1) {
        return a[k];
    }
    // Инициализация генератора случайных чисел с использованием времени
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed); // Инициализация генератора

    // Распределение в диапазоне [l, r-1]
    std::uniform_int_distribution<> dist(l, r - 1);

    // Генерация случайного индекса
    int random_index = dist(gen);

    // Получение случайного элемента
    int x = a[random_index];

    int m = split(a, l, r, x);

    if (k < m) {
        return find(a, k, l, m);
    }
    else {
        return find(a, k, m, r);
    }
}

