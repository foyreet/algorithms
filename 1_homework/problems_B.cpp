#include <iostream>
#include <vector>
#include <algorithm>
#include "merge_sort.h"
using namespace std;
void cin_vector(int &n, vector<int> &a) {
    cin >> n;
    a.resize(n); // заранее резервируем память для вектора
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void merge_sorting() {
    int n;
    vector<int> a;
    cin_vector(n, a);
    vector<int> sorted_a = merge_sort(a);
    for(int num : sorted_a) {
        cout << num << " ";
    }
}
int main() {
    merge_sorting();
}
