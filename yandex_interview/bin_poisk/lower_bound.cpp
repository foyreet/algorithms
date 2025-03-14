// Поиск 1-ого вхождения числа 

#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {1, 2, 3, 3, 4};
    int target;
    std::cin >> target;

    int l = 0;
    int r = a.size();

    while (l < r) {
	int m = (l + r) / 2;
	if (a[m] < target) {
	    l = m + 1;
	} else {
	    r = m;
	}
    }
    std::cout << "Индекс первого вхождения элемента " << l;
}
