#include <iostream>

bool is_prime(const unsigned int j){
for(unsigned int i = 2; i < j; i ++){
    if(j % i == 0){
       return  false;
}
return true;
}
}
int main(){
int primes[55];
unsigned int j = 0;
for(unsigned int i = 0; i < 100; i ++){
    if(is_prime(i)){
       primes[j] = i;
       j ++;}

}
}