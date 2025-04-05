
#include <iostream>
#include <string>
#include <cctype>
bool check_palindrom(std::string& s) {

    int l = 0;
    int r = s.size() - 1;

    while (l < r) {

	while (l < r && !std::isalnum(s[l])) {
	    l++;
	}

	while (l < r && !std::isalnum(s[r])) {
	    r--;
	}

	if (std::tolower(s[l]) != std::tolower(s[r])) {
	    return false;
	}

	l++;
	r--;
    }

    return true;

}

int main() {
    std::string s;
    std::getline(std::cin, s); 
    bool ispalindrom = check_palindrom(s);

    if (ispalindrom) {
	std::cout << "YES";
    } else {
	std::cout << "NO";
    }

}
