#include <iostream>
#include <vector>
#include "quick_sort.h"
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int el;
        cin >> el;
        a.push_back(el);
    }

    qsort(a, 0, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
