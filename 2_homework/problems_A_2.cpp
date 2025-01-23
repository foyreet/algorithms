#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
using namespace std;

int split(vector<int>& a, int l, int r, int x) {
    int support_element = l;
    for (int i = l; i < r; i++) {
        if (a[i] == x) {
            support_element = i;
            break;
        }
    }
    swap(a[support_element], a[r-1]);
    int m = l;
    for (int i = l; i < r-1; i++) {
        if (a[i] < x) {
            swap(a[i], a[m]);
            m++;
        }
    }
    swap(a[m], a[r-1]);
    return m;
}

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

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a;
    for (int i = 0; i < n; i++) {
        int el;
        std::cin >> el;
        a.push_back(el);
    }
    int m;
    std::cin >> m;
    while(m--) {
        int i, j, k;
        i--;
        j--;
        k--;
        std::cin >> i >> j >> k;
        int result = find(a, k, i, j);
        std::cout << result << std::endl;
    }
}


