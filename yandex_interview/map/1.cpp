// Дана строка. Найди количество вхождений каждого символа.

#include <iostream>
#include <string>
#include <map>

int main() {
    std::string s = "Hello";

    std::map<char, int> count;

    for (char ch : s) {
	count[ch]++;
    }

    for (const auto& pair : count) {
	std::cout << pair.first << " " << pair.second << std::endl;
    }
}
