#include <iostream>
#include <vector>
#include <algorithm>
#include "sorting_by_inserts.h"
using namespace std;
void cin_vector(int &n, vector<int> &a) {
    cin >> n;
    a.resize(n); // заранее резервируем память для вектора
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
// Сортировка вставкой O(n^2)
void sorting_by_inserts() {
    int n;
    vector<int> a;
    cin_vector(n, a);
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && a[j-1] > a[j]) {
            swap(a[j-1], a[j]);
            j--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main() {
    sorting_by_inserts();
}
