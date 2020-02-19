#include <iostream>
#include <string>
#include <vector>

int check_string(int i, std::vector<std::string> vector) {
for (unsigned int j = 0; j < i; j++){
     if (vector[j] == vector[i]) {
         return 0;
         break;}
}
return 1;
}

// words in the file must be separated by a space
int main() {
std::string str;
std::vector<std::string> v;
unsigned int t{30}; // the value of t, i.e. how many words, is set by the user
for (unsigned int i = 0; i < t; i++) {
     std::getline (std::cin, str);
     if (check_string(i, v) == 1) {
      v.vector::push_back (str);}
}
for (unsigned int k = 0; k <  v.vector::size(); k++) {
     std::cout << v[k] << std::endl;
}
}