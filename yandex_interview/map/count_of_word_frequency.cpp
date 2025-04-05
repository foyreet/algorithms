#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>

// Программа, которая считает, сколько раз встречается каждое слово в строке.

int main() {
    std::unordered_map<std::string, int> word_count;
    std::string str;
    std::cout << "Введите строку " << '\n';
    std::getline(std::cin, str);

    std::istringstream iss(str);
    std::string word;

    while (iss >> word) {
	word_count[word]++;
    }

    for (const auto& pair : word_count) {
	std::cout << pair.first << " " << pair.second << std::endl;
    }
    
}

