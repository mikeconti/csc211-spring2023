# Lab 04: Loops and Nested Loops

Welcome to CSC 211 Lab 04. Yor goal for this lab will be to gain a better understanding of loops and nested loops. **Be sure to read and follow all instructions unless otherwise specified.** Some of the language used here has been adopted from the *OpenDSA Data Structures and Algorithms Modules Collection text* text. Create a `lab-04.txt`document to record all of your lab answers in and implement all of your `.cpp` programs in your IDE.

The table of contents for this lab is found below.

1. Loops[50 minutes] <br>
1.1 For loop<br>
1.2 While loop<br>
1.3 Do-while loop<br>
2. Nested Loop [50 minutes]<br>
2.1 Examples <br>
2.2 Problem Set <br>
3. Submission [5 minutes]

# Part 1. Loops [50 minutes]

## 1.1 For loop

The for loop is the most versatile loop available in C/C++. It is also probably the most common you will use in your time writing C/C++ source code as a result of this. The syntax for a for loop is as follows (with anything within < angled brackets > representing a "variable" that you should replace as desired),

```c++
for (<declarative part> ; <conditional> ; <step>) {
    //statements
}
```

For loops always follow a set order of what is executed ~

* **First** - the declarative part where a for loop can initialize any number of variables it needs for looping, and is only performed once. 
* **Second** - the conditional will be checked and if it evaluates to true, execution will continue, if the conditional evaluates to false the loop will terminate and destroy any variables declared in its declarative part, this will be exemplified later.
* **Third** - the statements within the for loop's curly brackets ( { } ) will be executed. this is called the body of the loop. There are two special statements that can be used in the body of a loop, `break` and `continue`. Break will escape from the loop it is in when it is executed, and continue will trigger the next step of the loop early, skipping any code after the continue for that iteration. 
* **Fourth** - is the step part, where we can increment, decrement, or otherwise change a variable. A for loop in syntactically correct with any combination of the above parts, that is to say you don't need any one particular part for the loop to compile. The following are some examples of syntactically correct for loops.

```c++
//a for loop to print the numbers from 0-9
for (int i = 0 ; i < 10 ; ++i) { 
    std::cout << i << std::endl;
}
```

```c++
//a for loop to print the even numbers from 0-9
for (int i = 0 ; i < 10 ; i+=2) { 
    std::cout << i << std::endl;
}
```

```c++
//a for loop to print the even numbers from 0-9 with a continue statement
for (int i = 0 ; i < 10 ; ++i) {
    if (i % 2) continue; 
    std::cout << i << std::endl;
}
```

```c++
//a for loop to print the numbers from 0-5 terminating early with a break statement
for (int i = 0 ; i < 10 ; ++i) {
    if (i > 5) break; 
    std::cout << i << std::endl;
}
```

As stated earlier, once the loop terminates any variable that was declared inside of the declarative part will be destroyed. This can present an issue in some problems, for example, what if in the following loop we want to print 10 after the loop. 
```c++
//BROKEN CODE that tries to print the values from 0-10
for (int i = 0 ; i < 10 ; ++i) {  
    std::cout << i << std::endl;
}
std::cout << i << std::endl;
```
:white_check_mark: Question 1. What do you think you can do to get the program to print 10 using the variable i?

:white_check_mark: Question 2. How could you format an infinite for loop?

The following are some quick practice programming problems with for loops.

:white_check_mark: program1.cpp. Implement a program to get a number from the user and print out all numbers up to the given input value with a for loop.

:white_check_mark: program2.cpp. Implement an program to infinitely get input from the user and print it out, which will stop when the user enters a 0 with a for loop.

## 1.2 While loop

A while loop is probably a much more familiar loop and despite being less versatile than a for loop, still has its uses. The syntax for a while loop is as follows,

```c++
while (conditional) {
    //statements
}
```

A while loop is much simpler to understand as it will continue to execute any statements within its scope (i.e. the curly braces { } ) as long as the conditional evaluates to true. This does mean that if any incrementation is meant to take place the programmer must remember to include the statement within the while loop. While loops can also use the continue and break statements, though it should be noted that if a continue comes before an incrementation statement (like ++i) the incrementation will not take place and can accidentally trigger an infinite loop. 

The following are examples of syntactically correct while loops.

```c++
//a while loop to print the numbers from 0-9
int i = 0;
while (i < 10) {
    std::cout << i < std::endl;
    ++i;
}
```

```c++
//a while loop to print the even numbers from 0-9
int i = 0;
while (i < 10) {
    std::cout << i < std::endl;
    i += 2;
}
```

>It should also be mentioned that a for loop can replace any while loop
```c++
//the following two loops do the same thing
for ( ; i < 10 ; ) {

}

while (i < 10) {

}
```

:white_check_mark: program3.cpp. Replicate program1 using a while loop.

:white_check_mark: program4.cpp. Replicate program2 using a while loop. 

## 1.3 Do-while loop
Do-while loops are a very specific kind of loop and tend to not be common though they can still be useful. The syntax for a do-while loop is as follows,

```c++
do {
    //statements
} while (<conditional>);
``` 
A do-while loop will always execute the do section before checking its conditional, and as a result will always perform the do section at least once whenever they are used. This is generally their only use case, for a loop when something must happen at least once.

>Note: Some believe that if you need a do-while that another loop can't do you need to redesign what you're working on.

Debugging Questions:

:white_check_mark: Question 3. For the following code, identify first if there is a syntax error. If so identify why and indicate how to fix the error. If the syntax is correct indicate what semantic error is present, if there is one, and how to fix it.
```c++
#include <iostream>
int main(){
    for (int i = 0 ; i < 10 ; ++i) {
        int j = 10 + i;
        j += 12;
        std::cout << j << '\n';
        --i;
    }
}
```

:white_check_mark: Question 4. For the following code, identify first if there is a syntax error. If so identify why and indicate how to fix the error. If the syntax is correct indicate what semantic error is present, if there is one, and how to fix it.
```c++
#include <iostream>
int main(){
    int i = 0;
    while (true) {
        i++;
        if(i == 10) continue;
    }
    if(i > 1) std::cout << i << std::endl;
}
```

:white_check_mark: Question 5. For the following code, identify first if there is a syntax error. If there is one, identify why and indicate how to fix the error. If the syntax is correct indicate what semantic error is present and how to fix it.
```c++
#include <iostream>
int main(){
    int i = 0;
    for (i ; i < 10 ; ++i);
    if(i == 9) std::cout << i << std::endl;
}
```

:white_check_mark: Question 6. For the following code, identify first if there is a syntax error. If there is, identify why and indicate how to fix the error. If the syntax is correct indicate what semantic error is present and how to fix it.
```c++
#include <iostream>
int main(){
    int i = 1;
    while (!i) {
        i++;
        if (i == 10) break;
    }
    if(i == 10) std::cout << i << std::endl;
}
```

## Part 2. Nested loops

Often, we will come across a problem that cannot be solved with a single loop. A loop placed inside of another loop is called a `nested loop`. The outer loop only executes its update statement once the inner loop exits. 



### Example 1.
Below, we can visualize what is happening while using a nested loop.

Source Code:
```c++
#include <iostream>
int main(){
    //Iterate from 0 -> 3
    for (int i = 0; i < 4; i++) {
        std::cout << i << std::endl;
        //Iterate from 0 -> 1
        for (int j = 0 ; j < 2 ; j++) {
            std::cout << "\t" << j << std::endl;
        }
    }
}
```
Output:

```bash
~/ $ 
i = 0
       j = 0
       j = 1
i = 1
       j = 0
       j = 1
i = 2
       j = 0
       j = 1
i = 3
       j = 0
       j = 1
```

We can see that i values are printing on the left while j values are on the right (due to the `\t`).
Notice how the `outer loop` (i-loop) does not increment until the `inner loop` (j-loop) has completed. Also, we can see that the inner loop resets every time.

### Example 2.

Let's take a look at some code where the outer loop i goes from 1 -> 5, and the inner loop j goes from 2 -> 4.
We'll perform i * j at every step.

Source Code:
```c++
#include <iostream>
int main(){
    for (int i = 1 ; i <= 5 ; i++) {
        for (int j = 2 ; j < 5 ; j++ ){
            std::cout << i << " * " << j << " = " << i * j << std::endl;
        }
    }
}
```

Output:
```bash
~/ $ 
1 * 2 = 2
1 * 3 = 3
1 * 4 = 4
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
3 * 2 = 6
3 * 3 = 9
3 * 4 = 12
4 * 2 = 8
4 * 3 = 12
4 * 4 = 16
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20

```

With this example, we've removed the aides that helped you see the values of i and j, but added some arithmetic to show a use of nested loops. 


### Example 3.

When working with nested loops remember that the line-by-line execution order still applies, and we can use conditionals as normal.

Source Code:
```c++
#include <iostream>
int main(){
    for (int i = 0 ; i <= 4 ; i++) {
        if(i % 2 == 0){
            for (int j = 0 ; j < 3 ; j++) {
                std::cout << i << " + " << j << " = " << i + j << std::endl;
            }
        }else{
            for (int j = 0 ; j < 3 ; j++) {
                std::cout << i << " - " << j << " = " << i - j << std::endl;
            }
        }
    }
}
```

Output:
```bash
~/ $ 
0 + 0 = 0
0 + 1 = 1
0 + 2 = 2
1 - 0 = 1
1 - 1 = 0
1 - 2 = -1
2 + 0 = 2
2 + 1 = 3
2 + 2 = 4
3 - 0 = 3
3 - 1 = 2
3 - 2 = 1
4 + 0 = 4
4 + 1 = 5
4 + 2 = 6

```

For this example, when i is even the values of i and j are added. Otherwise, the value of j is subtracted from the value of i.

### Example 4.

You can mix-and-match the different types of loops.

```c++
#include <iostream>
#include <iostream>
int main(){
    int sum = 0;
    int counter = 0;
    
    while (sum < 100) {
        if (counter % 2 == 0) {
            int i = counter;
            do{
                for (int j = 1 ; j < i * i ; j++) {
                        sum += j;
                }
                i++;
            } while (i < 3);
        } else{
            int i = counter;
            do{
                for (int j = 1 ; j < i * i ; j++) {
                        sum += 2 * j;
                }
                i++;
            } while (i < 3);
        }
        counter++;
    }
    std::cout << sum << std::endl << counter << std::endl;
}
```

> **Challenge yourself: Can you trace the above code by hand?**

##  2.2 Problem Set


<!-- ```bash
~/ $ 
216
5
``` -->


:white_check_mark: Question 7. What is the value of sum once this program ends?

```c++
#include <iostream>
int main(){
    int sum = 0;
    for (int i = 1; i <= 5 ; i++) {
        for (int j = i ; j > 0; j--) {
            sum += i * j;
        }
    }
}
```

:white_check_mark: program5.cpp. Write the code that would complete the outlined program.

```c++
#include <iostream>
int main(){
    int sum = 0;
    
    // Loop i = 1 -> 10
        // If i is even
            //Loop j = 1 -> 5
                // Add i * j to sum
        // Else
            // Loop j = (10 - i) -> 5
                // Add i * j to sum
}
```

:white_check_mark: program6.cpp. Implement a nested loop structure that will create the pyramid shown below.
```
*
***
*****
*******
```

:white_check_mark: program7.cpp. Implement a nested loop structure that will create the pyramid shown below.
```
     *
    ***
   *****
  *******
```

:white_check_mark: program8.cpp. Implement a nested loop structure that will create the pyramid shown below.

```
     1
    232
   34543
  4567654
```
:white_check_mark: program9.cpp. Implement a nested loop structure that will create the pattern shown below with a constant height of 4 and width of 14.

```
!!!!!!!!!!!!!!
\\!!!!!!!!!!//
\\\\!!!!!!////
\\\\\\!!//////
```



# Part 3. Submission [5 minutes]

Each group will submit a single **.zip file** named `lab-04.zip` containing all your answers to the lab questions in your `lab-04.txt` and all of your `.cpp` source code files on [Gradescope](http://gradescope.com) **before the end of your lab section**. **All submissions should be made by a group/team.** *Individual submissions will not be accepted.* Instructions to download your `lab-04.txt` file can be found in the IDE introduction page that you read earlier in the lab. For your convenience, that page is relinked [here](https://cs50.readthedocs.io/ide/online/).
