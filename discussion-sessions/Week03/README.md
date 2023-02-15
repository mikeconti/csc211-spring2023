# Discussion Session 3

## Material Covered

* Loops

## Introduction

* Loop syntax.
* Create a for loop that iterates a set number of times.
* Create a while loop that repeats until the user enters a specific number.
* Review post-increment & pre-increment operators.
* Field questions.

```c++
// For-loop structure
for(*initialization*; *condition*; *post-execution operation*){
    // Code to repeat
}
```

```c++
#include <iostream>

int main(){
    // This loop will output "0 1 2 3 4"
    for(int i = 0; i < 5; i++){
        std::cout << i << " ";
    }
}
```

```c++
// While-loop structure
while(*condition*){
    // Code to repeat
}
```

```c++
#include <iostream>

int main(){
    int userInput = 0;
    
    // This loop will continually read a number from the user until -1 is entered.
    while(userInput != -1){
        std::cout << "Enter a number: ";
        std::cin >> userInput;
    }
}
```



## Exercises

1. Take your solution to last week's discussion session exercise (the inch converter) and introduce a loop that will allow the user to keep entering measurements to be converted. The program should end when the user enters -1. Be sure to structure your code such that the program does not try to convert -1!
2. Write a program that will sum all positive numbers the user enters. Quitting on an entry of 0.
   Example: 
   Input : 5 -20 5 15 -12 0
   Output: 25
3. Write a program that will sum all odd values entered by the user, quitting on an entry of 0.
   Example:
   Input : 4 3 6 7 9 -3 0
   Output: 16