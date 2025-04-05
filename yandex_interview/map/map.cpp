#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, int> count_of_word;



    //	Добавление элемента в map с помощью insert

    count_of_word.insert(std::make_pair("Grisha", 20));
    count_of_word.insert(std::make_pair("Misha", 23));
    count_of_word.insert(std::make_pair("Lisa", 11));

    
    //	Добавление элемента в map с помощью []

    count_of_word["money"] = 1;
    count_of_word["money1"] = 2;
    count_of_word["money2"] = 3;
    count_of_word["money3"] = 4;

    // Удаление по ключу
    
    count_of_word.erase("money");
    
    // Поиск элемента в map по ключу
    
    auto it = count_of_word.find("Grisha");

    if (it != count_of_word.end()) {
	std::cout << "Found " << it->first << " " << it->second << '\n';
    } else {
	std::cout << "Not found" << '\n';
    }

    std::cout << '\n';

    // Вывод элементов map

    for (const auto& pair : count_of_word) {
	std::cout << pair.first << " " << pair.second << std::endl;
    }

    std::cout << "Кол-во элементов в контейнере " << count_of_word.size() << std::endl;


}
