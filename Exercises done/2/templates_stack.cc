#include <iostream>

template <typename T>
T alloc(unsigned int n) {
T array[n];
for (unsigned int i=0; i <= n-1; i ++) {
     std::cout << "Insert element" << " ";
     std::cin >> array[i];
return &array[0];
print(n, array);
}
}

template <typename T>
T print(unsigned int n, T array) {
for (unsigned int i = 0; i <= n-1; i++){
     std::cout << &array[n-1-i];
}
}

int main () {
unsigned int n;
std::cout << "Insert array length" << " ";
std::cin >> n;
alloc<int>(n);
}