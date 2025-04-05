#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

std::vector<std::pair<int, int>> two_sum(std::vector<int>& a, int k) {

    std::vector<std::pair<int, int>> result;

    int l = 0;
    int r = a.size() - 1;

    std::sort(a.begin(), a.end());

    while (l < r) {

	if (a[l] + a[r] == k) {
	   result.push_back({a[l], a[r]});
	   l++;
	   r--;
	} else if (a[l] + a[r] < k) {
	    l++;
	} else if (a[l] + a[r] > k) {
	    r--;
	}
    }

    return result;
}

int main() {
    
    std::vector<int> a = {5, 1, 3, 4, 7, 6};
    int k = 10;

    std::vector<std::pair<int, int>> result = two_sum(a, k);

    for (const auto& pair : result) {
	std::cout << "(" << pair.first << ", " << pair.second << ")" << std::endl;
    }  
}
