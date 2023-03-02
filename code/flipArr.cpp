#include <iostream>

// Write a function that receives an array of integers and reverses the contents of the array

void printArr(int someArr[], int arrSize){

    for(int i = 0 ; i < arrSize; i++){
        std::cout << someArr[i]<<  " ";
    }
}

void flipArr(int someArr[], int arrSize){

    int temp;

    for(int i =0; i < arrSize/2; i++){

        temp = someArr[i];
        someArr[i] = someArr[(arrSize - 1) - i];
        someArr[(arrSize - 1) - i] = temp;

    }
    
}

int main(){

    int myArray[5];

    for(int i = 0; i < 5; i++){
        myArray[i] = i;
    }

    printArr(myArray, 5);

    flipArr(myArray, 5);
    
    std::cout << std::endl;

    printArr(myArray, 5);


    return 0;
}