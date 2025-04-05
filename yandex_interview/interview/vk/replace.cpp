#include <iostream>
#include <string>

void replace(std::string& s) {
    int count_space = 0;

    for (char ch : s) {
	if (ch == ' ') {
	    count_space++;
	}
    } 

    int old_size = s.size();
    s.resize(old_size + count_space * 2);

    int new_size = s.size();

    int i = old_size - 1;
    int j = new_size - 1;

    while (i >= 0) {
	if (s[i] == ' ') {
	    s[j--] = '0';
	    s[j--] = '2';
	    s[j--] = '%';

	} else {
	    s[j] = s[i];
	    j--;
	}
	i--;
    }
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    
    replace(s);

    std::cout << s;
}



