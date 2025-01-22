#include <iostream>
#include <vector>
#include "count_inversions.h"
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
    long long inversions = count_inversions(a);
    cout << inversions << endl;
}

