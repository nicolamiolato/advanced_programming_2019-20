#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <algorithm>

double mean(std::vector<double> vector){
double sum;
for (unsigned int i = 0; i < 50; i++) {
     sum += vector[i];}
 return sum/50;
}

double median(std::vector<double> vector){
std::sort( vector.begin(), vector.end() );
return (vector[24] + vector[25])/2; 
// because the length of the vector is even, we take the mean of the two central values
}

int main() {
std::string a;
std::vector<double> v;
for  (unsigned int i = 0; i < 50; i++) {
      std::getline (std::cin, a);
      double b = atof(a.c_str());
      v.vector::push_back (b);
}
std::cout << mean(v) << std::endl;
std::cout << median(v) << std::endl;
}