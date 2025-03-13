 // Объединение двух отсортированных массивов
// 🔹 Дано: Два отсортированных массива A и B.
// 🔹 Задача: Объединить их в один отсортированный массив без использования sort().
// 🔹 Ограничение: Решить за O(N + M). приведи пример

#include <iostream>
#include <vector>

int main() {
    std::vector<int> a = {1, 3, 5, 7};
    std::vector<int> b = {2, 4, 6, 8, 9, 10};
    std::vector<int> result;

    int i = 0; // Начало 1-ого массива
    int j = 0; // Начала 2-ого массива

    while (i < a.size() && j < b.size()) {
	if (a[i] < b[j]) {
	    result.push_back(a[i]);
	    i++;
	} else {
	    result.push_back(b[j]);
	    j++;
	}
    }

    while (i < a.size()) {
	result.push_back(a[i]);
	i++;
    }

    while (j < b.size()) {
	result.push_back(b[j]);
	j++;
    }

    for (size_t i = 0; i < result.size(); i++) {
	std::cout << result[i] << " ";
    }

}
