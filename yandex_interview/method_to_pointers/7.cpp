// Найти наименьший элемент в массиве, который больше или равен target.

#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {1, 3, 5, 7, 8};
    int target;
    std::cin >> target;

    int l = 0;

    while (l < a.size()) {
	if (a[l] >= target) {
	    std::cout << a[l];
	    return 0;
	} else {
	    l++;
	}
    }

    std::cout << "Такого элемента нет";

}
