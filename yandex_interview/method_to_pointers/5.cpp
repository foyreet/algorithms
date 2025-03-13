/*Проверка, существует ли элемент в отсортиорванном массиве, равный заданному числу
 * */

#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {1, 2, 4, 5, 8};
    int target;
    std::cin >> target;

    int l = 0;
    int r = a.size() - 1;

    while (l <= r) {
	if (target == a[l] || target == a[r]) {
	    std::cout << "Yes";
	    return 0;
	} 

	if (a[l] < target) l++;
	if (a[r] > target) r--;
    }

    std::cout << "No";
}
