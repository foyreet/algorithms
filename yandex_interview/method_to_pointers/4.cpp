// Удаление дубликатов из отсортированного массива

#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {1, 1, 2, 2, 2, 3, 4, 4};
    int l = 0;
    int r = 1;

    while (r < a.size()) {
	if (a[l] == a[r]) {
	    a.erase(a.begin() + r);
	} else {
	    l = r;
	    r++;
	}
    }

    for (const auto& el : a) std::cout << el << " ";
}
