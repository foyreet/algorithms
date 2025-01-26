#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
using namespace std;

int split(vector<long long>& a, int l, int r, long long x) {
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

long long find(vector<long long> &a, int k, int l, int r) {
    if (l == r - 1) {
        return a[l];
    }
    // Инициализация генератора случайных чисел с использованием времени
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed); // Инициализация генератора

    // Распределение в диапазоне [l, r-1]
    std::uniform_int_distribution<> dist(l, r - 1);

    // Генерация случайного индекса
    int random_index = dist(gen);

    // Получение случайного элемента
    long long x = a[random_index];

    int m = split(a, l, r, x);

    int left_count = m - l;
    if (k < left_count) {
        return find(a, k, l, m);
    } else if (k > left_count) {
        return find(a, k - left_count - 1, m + 1, r);
    } else {
        return a[m];
    }
}

int main() {
    int n;
    cin >> n;
    vector<long long> a;
    for (int i = 0; i < n; i++) {
        long long el;
        cin >> el;
        a.push_back(el);
    }
    int m;
    cin >> m;
    while(m--) {
        int i, j, k;
        cin >> i >> j >> k;
        i--; j--;
        int result = find(a, k - 1, i, j + 1);
        cout << result << endl;
    }
}


