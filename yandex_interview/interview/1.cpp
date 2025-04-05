#include <iostream>
#include <string>

int main() {
    std::string s;
    std::string result;
    std::cin >> s;

    char symbol = s[0];
    int count = 1;

    for (size_t i = 1; i < s.size(); i++) {
	if (s[i] == symbol) {
	    count++;
	} else {
	    result += symbol + std::to_string(count);
	    symbol = s[i];
	    count = 1;
	}
    }
    result += symbol + std::to_string(count);
    std::cout << result;
}
