// Write a function  highest_prime that takes an integer n > 1 from stdin and outputs 
// the largest prime number less than or equal than n to the stdout use an is_prime 
// function to help find highest_prime

#include <iostream>

bool isPrime(int someNum){

    for(int i = 2; i < someNum/2; i++ ){
        if(someNum % i == 0){
        
            return false;
        }
    }

    return true;

}

int highestPrime(int someNum){

    int highestP = 0;

    for(int i = someNum ; i > 0 ; i-- ){
        if(isPrime(i)){
            highestP = i;
            return highestP;
        }

    }

    return highestP;
}

int main(){

    std::cout << highestPrime(15);


    return 0;
}