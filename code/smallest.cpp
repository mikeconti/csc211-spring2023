#include<iostream>

int findSmallest(int arr[], int length){
    int smallest = arr[0];

    for(int i = 0; i < length; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    return smallest;

}

int main(){

    int array[5];
    array[0] = 10;
    array[1] = 23;
    array[2] = 300;
    array[3] = 41;
    array[4] = 8;

    std::cout << findSmallest(array, 5);

    


    return 0;
}
