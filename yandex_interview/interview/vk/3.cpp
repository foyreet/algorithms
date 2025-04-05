#include <iostream>
#include <string>

void replace_spaces_on_space(std::string& s) {
    int write_index = 1;

    bool can_write = true;

    for (size_t read_index = 1; read_index < s.size(); read_index++) {
      if (s[read_index] == ' ' && s[read_index - 1] == ' ') {
          can_write = false;
      } else {
          can_write = true;
      }
    
      if (can_write) {
          s[write_index] = s[read_index];
          write_index++;
      }
    }
    
    s.resize(write_index);
}

int main() {
    std::string s = "abc     abc.      abc.    abc ";
    replace_spaces_on_space(s);
    std::cout << s;
}

