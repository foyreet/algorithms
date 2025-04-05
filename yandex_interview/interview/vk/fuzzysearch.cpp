#include <iostream>
#include <string>

bool fuzzysearch(std::string& sub, std::string& s) {

   size_t read_sub = 0;
   size_t read_s = 0;

   while (read_s < s.size() && read_sub < sub.size()) {
	
       if(sub[read_sub] == s[read_s]) {
	 read_sub++;
       } 
       read_s++;
   } 

   return read_sub == sub.size();
}

int main() {
    std::string s, sub;
    std::cin >> sub >> s;

    if (fuzzysearch(sub, s)) {
	std::cout << "YES";
    } else {
	std::cout << "NO";
    }

}
