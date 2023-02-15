# Discussion Session 4

## Material Covered

* Functions

## Introduction

* Structure of a function.
* Function prototyping.
* Create a function that accepts two integers and returns their sum.
* Field questions.

```c++
// Structure of a function
return-type identifier(parameters){
    // Function body
}
```

```c++
#include <iostream>

// Prototype for our add function.
int add(int a, int b);

int main(){
    std::cout << add(5, 3) << std::endl;
}

// Function that accepts two integers and returns their sum
int add(int a, int b){
    return a + b;
}
```

## Exercises

1. Follow the example to create functions for subtract, multiply, and divide.

2. Create a calculator with the following specifications:

   * The user is given a menu with the following options:

     0. Quit

     1. Add
     2. Subtract
     3. Multiply
     4. Divide

   * After selecting an option, the user is prompted for two integers/floats/doubles (your decision)

   * Your program must then return the results of the correct function call.

   * This process should loop until the user enters 0.