/*Дан список чисел. Определите, сколько в этом списке элементов, которые больше двух своих соседей. Выведите количество таких элементов.*/

#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> a;

    for (int i = 0; i < n; i++) {
	int el;
	std::cin >> el;
	a.push_back(el);
    } 

    int count = 0;
    

    for (size_t i = 1; i < a.size() - 1; i++) {
	if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
	    count++;
	}
    }

    std::cout << count;
}
