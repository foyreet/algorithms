#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1 = {1, 2, 3, 2, 0, 4, 5};
    std::vector<int> v2 = {5, 1, 2, 7, 3};
    std::vector<int> result;

    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());

    int i = 0, j = 0; 

    while (i < v1.size() && j < v2.size()) {
	if (v1[i] == v2[j]) {
	    result.push_back(v1[i]);
	    i++;
	    j++;
	} else if (v1[i] < v2[j]) {
	    i++;
	} else {
	    j++;
	}
    }    

    for (int x : result) {
	std::cout << x << " ";
    }

}
