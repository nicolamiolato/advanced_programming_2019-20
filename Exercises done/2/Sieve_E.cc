#include <iostream>
#include <string>
#include <cmath>

int main() {
int n;
std::cout << "Insert number" << " ";
std::cin >> n;
bool array[n+1];
for (unsigned int l=0; l <= n; l++)
     array[l] = true;
for (unsigned int i=2; i<=std::sqrt(n); i++){
     if (array[i] == true){
         for (unsigned int j=i*i; j<=n; j = j + i)
              array[j] = false;
}
}
for (unsigned int k=2; k<=n; k++){
     if (array[k] == true)
         std::cout << k << std::endl;
}
}