#include <iostream>

// f0 = 0
// f1 = 1
// fn = f(n-1) + f(n-2)

int main(){

    int f0 = 0, f1 = 1 , fn;

    for(int i = 0; i < 25; i++){

        if(i < 2){
            fn = i;
        }
        else{
            fn = f0 + f1;

            f0 = f1;
            f1 = fn;
        }

        std::cout << fn << " ";

    }




    return 0;
}