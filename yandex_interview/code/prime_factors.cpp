#include <iostream>
#include <vector>

bool isPrime(int x) {
    if (x <= 1) return false;
    
    for (int i = 2; i <= sqrt(x); i++) {
	if (x % i == 0) {
	    return false;
	}
    }

    return true;
}

int main() {

    int x;
    std::cin >> x;
    std::vector<int> a;
    int number = 2;

    while (number <= x) {
	if (isPrime(number) && x % number == 0) {
	    x /= number;
	    a.push_back(number);
	    number = 2;
	} else {
	    number++;
	}

    }

    for (size_t i = 0; i < a.size(); i++) {
	std::cout << a[i] << " ";
    }

}
