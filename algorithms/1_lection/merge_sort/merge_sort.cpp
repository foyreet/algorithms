#include "merge_sort.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Сортировка слиянием O(nlogn)

// Функция для слияния двух отсортированных массивов
vector<int> merge(const vector<int> &a, const vector<int> &b) {
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0;
    vector<int> c;

    while (i + j < n + m) {
        if (j == m or (i < n and a[i] < b[j])) {
            c.push_back(a[i]);
            i++;
        } else {
            c.push_back(b[j]);
            j++;
        }
    }
    return c;
}
// Рекурсивная функция сортировки слиянием
vector<int> merge_sort(const vector<int> &a) {
    int n = a.size();
    if (n == 1) {
        return a;
    }
    int mid = n / 2;
    vector<int> left(a.begin(), a.begin() + mid);
    vector<int> right(a.begin() + mid, a.end());

    left = merge_sort(left);
    right = merge_sort(right);

    return merge(left, right);
}



