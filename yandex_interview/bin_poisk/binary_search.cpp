// Нахождение числа в массиве Реализация бинпоиска
#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {1, 2, 6, 7, 9};
    int target;
    std::cin >> target;

    int l = 0;
    int r = a.size() - 1;

    while (l <= r) {
	int m = (l + r) / 2;
       	
	if (a[m] == target) {
	    std::cout << a[m];
	    return 0;
	} else if (target > a[m]) {
	    l = m + 1;
	} else {
	    r = m - 1;
	}
    }

    std::cout << -1;
}
