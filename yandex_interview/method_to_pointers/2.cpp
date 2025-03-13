#include<iostream>
#include <vector>

/*
 * Задача: Дан отсортированный массив nums и число target. 
 * Найди две разные позиции, сумма которых равна target.
*/
int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);

    for (int i = 0; i < n; i++) {
	std::cin >> a[i];
    }

    int target;
    std::cin >> target;

    int l = 0, r = n - 1;

    while (l < r) {
	int sum = a[l] + a[r];
	if (sum == target) {
	    std::cout << a[l] << " " << a[r];
	    return 0;
	} else if (sum > target) {
	    r--;
	} else {
	    l++;
	}
    }

    std::cout << "-1";
}
