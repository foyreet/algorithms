#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a;
    std::string result;

    for (int i = 0; i < n; i++) {
	int el;
	std::cin >> el;
	a.push_back(el);
    }

    std::sort(a.begin(), a.end());

    int start = a[0];

    for (int i = 1; i < n; i++) {
	if (a[i] != a[i - 1] + 1) {
	    if (start == a[i - 1]) {
		result += std::to_string(start);
	    } else {
		result += std::to_string(start) + "-" + std::to_string(a[i-1]);
	    }
	    result += ",";
	    start = a[i];
	}
    }

    if (start == a[n - 1]) {
	result += std::to_string(start);
    } else {
	result += std::to_string(start) + "-" + std::to_string(a[n - 1]);
    }

    std::cout << result;
}

