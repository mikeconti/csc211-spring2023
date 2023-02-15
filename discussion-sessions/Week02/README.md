# Discussion Session 2

## Material Covered

* Conditionals
* Expressions
* Program Structure

## Introduction

* Conditional syntax.
* Create an if-else-if-else structure.
* Field questions.

```c++
if(*condition A*){
    // This section executes if *condition A* is TRUE.
}else if(*condition B*){
    // This section executes if *condition A* is FALSE and *condition B* is TRUE.
}else{
    // This section executes if both conditions are FALSE.
}
```

```c++
#include <iostream>

int main(){
    int num = 0;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if(num < 10){
        std::cout << "Less than 10!" << std::endl;
    }else if(num == 10){
        std::cout << "Exactly 10!" << std::endl;
    }else{
        std::cout << "Greater than 10!" << std::endl;
    }
}
```



## Exercises

1. Write a program that will convert a user-supplied measurement in inches to:

   * feet (12 inches)
   * yards (36 inches)
   * centimeters (2.54/inch)
   * meters (39.37 inches)

Put thought into the data types you will use, and format the output to look nice.