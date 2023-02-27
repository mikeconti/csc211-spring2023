## Mini Programming Challenge #04 (Due Date 03/02)

 This assignment is to be completed individually. You are not allowed to share your code with other students. The assignment is worth a total of 100 points. If you have any questions or need any help, please visit us during office hours and/or post questions on Piazza.

> If you need to post any of your actual source code on Piazza for any reason, **please** be sure to tag the post as being _visible to instructors only_, so that you don't inadvertently share code with others and violate class rules.

### Format details
Your submission will be tested and graded by an autograder, for this reason it cannot be stressed enough that your program must exactly follow the specifications for input and output upon submission.

If the question specifies that it will take a `double` then a `char` you must follow this input order or else fail the test.  For this assignment, you should use the `int` data type for regular whole numbers and as the default when a number format is not specified, you should use the `double` data type for any question which specifies decimal or floating point numbers, and `char` for single letter variables or input.

For details on expected submission instructions, please refer to the **Submission and Grading** section at the bottom of the document.

Before getting started, be advised that most of the questions will only require `std::cin` for reading the data (especially integers and floats).  If you need to read an arbitrary number of integers you can use a pattern like this, which will keep reading values until the end of the input:
```c++
while (std::cin >> value) {
  // do something with value
}
```
If otherwise, you want to read entire strings that include whitespaces the recommended fucntion is `std::getline`.  See below an example:
```c++
std::string name;
std::cout << "What is your name?";
std::getline(std::cin, name);
std::cout << "Hello " << name << "!\n";
```

# Above Average
It is said that 90% of freshmen expect to be above average in their class. You are to provide a reality check.

## Input
The first line of standard input contains an integer 1≤C≤50, the number of test cases. C data sets follow. Each data set begins with an integer, N, the number of people in the class (1≤N≤1000). N integers follow, separated by spaces or newlines, each giving the final grade (an integer between 0 and 100) of a student in the class.

## Output
For each case you are to output a line giving the percentage of students whose grade is above average, rounded to exactly 3 decimal places.

### Sample Input 1
```
5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91
```
### Sample Output 1
```
40.000%
57.143%
33.333%
66.667%
55.556%
```
