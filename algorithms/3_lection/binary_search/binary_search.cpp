#include <iostream>
#include <vector>

bool bin_search(std::vector<int>& a, int l, int r, int x) {
    int m = l + (r - l) / 2;
    if (l > r) {
        return false;
    }
    if (x == a[m]) {
        return true;
    }
    if (x < a[m]) {
        return bin_search(a, l, m - 1, x);
    } else {
        return bin_search(a, m + 1, r, x);
    }
}

int main() {
    std::vector<int> a;
    int n;
    std::cin >> n;
    int x;
    std::cin >> x;
    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        a.push_back(val);
    }
    bool result = bin_search(a, 0, a.size() - 1, x);
    if (result) {
        std::cout << "Element found" << '\n';
    } else {
        std::cout << "Element not found" << '\n';
    }
}