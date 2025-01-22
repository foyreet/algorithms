#include <iostream>
#include <vector>
#include <algorithm>
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

void qsort(vector<int>& a, int l, int r) {
    if (r - l <= 1) {
        return;
    }
    int x = a[l + (r-l)/2];
    int m = split(a, l, r, x);
    qsort(a, l, m);
    qsort(a, m+1, r);
}
