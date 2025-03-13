// 🔹 Задача: Найти все элементы в массиве, которые меньше или равны числу target.

#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {1, 3, 5, 7, 8};

    int target;
    std::cin >> target;

    int l = 0;
    int r = a.size() - 1;

    while (l <= r) {
	if (a[l] <= target) {
	    std::cout << a[l] << " ";
	    l++;
	} else {
	    return 0;
	}
    }
}
