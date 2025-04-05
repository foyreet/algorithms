// Нахождение последнего вхождения числа

#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {1, 2, 2, 2, 3};
    int x;
    std::cin >> x;

    int l = 0;
    int r = a.size();

    while (l < r) {
	int m = (l + r) / 2;
	if (x < a[m]) {
	    r = m;
	} else {
	    l = m + 1;
	}
    } 
    std::cout << "Последнее вхождения числа " << l - 1;
}
