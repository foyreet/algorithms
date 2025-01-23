#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Сортировка вставкой O(n^2)
void sorting_by_inserts() {
    int n;
    vector<int> a;
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && a[j-1] > a[j]) {
            swap(a[j-1], a[j]);
            j--;
        }
    }
}



