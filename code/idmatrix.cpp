#include <iostream>


int main(){

    int n;
    std::cin >> n;

    int m[n][n];
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
             if(i == j){
                m[i][j] = 1;
             }
             else{
                m[i][j] = 0;
             }
             std::cout << m[i][j] << " ";
        }

        std::cout << std::endl;

    }
    



    

}