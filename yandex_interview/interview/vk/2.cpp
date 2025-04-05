/*Описание
Дан список целых чисел, повторяющихся элементов в списке нет. Нужно преобразовать это множество в строку, сворачивая соседние по числовому ряду числа в диапазоны.Примеры:
 • [1,4,5,2,3,9,8,11,0] => "0-5,8-9,11"
 • [1,4,3,2] => "1-4"
 • [1,4] => "1,4"
 • [1,2] => "1-2"
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void array_to_string(std::vector<int>& a, int n) {

    std::sort(a.begin(), a.end());
    
    int l = 0;
    int r = 0;

    std::string result;

    for (int i = 1; i < n; i++) {
	if (a[i] == a[i - 1] + 1) {
	    r++;
	} else {

	    if (r - l != 0) {
		result += std::to_string(a[l]) + '-' + std::to_string(a[r]);
	    } else {
		result += std::to_string(a[l]);
	    }
	    
	    result += ','; 

	    l = r = i;
	}
		
    }

    if (r - l != 0) {
        result += std::to_string(a[l]) + '-' + std::to_string(a[r]);
    } else {
        result += std::to_string(a[l]);
    }

    std::cout << result;

}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a;
    for (int i = 0; i < n; i++) {
	int el;
	std::cin >> el;
	a.push_back(el);
    }

    array_to_string(a, n);

}
