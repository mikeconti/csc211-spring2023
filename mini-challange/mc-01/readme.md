## Mini Programming Challenge #01 (Due Date 01/30/2023)

This mini-challenge is about getting you comfortable with the autograder and basic C++ arethmatic operations. **Arrays, functions, and loops are not allowed. The only libraries allowed for this assignment are `<iostream>` and `<iomanip>`**.  Mini-challenge problemsets are to be completed individually. You are not allowed to share your code with other students. The assignment is worth a total of 100 points. If you have any questions or need any help, please visit us during office hours and/or post questions on Piazza.

> If you need to post any of your actual source code on Piazza for any reason, **please** be sure to tag the post as being _visible to instructors only_, so that you don't inadvertently share code with others and violate class rules.

### Format details
Your submission will be tested and graded by an autograder, for this reason it cannot be stressed enough that your program must exactly follow the specifications for input and output upon submission.

If the question specifies that it will take a `double` then a `char` you must follow this input order or else fail the test.  For this assignment, you should use the `int` data type for regular whole numbers and as the default when a number format is not specified, you should use the `double` data type for any question which specifies decimal or floating point numbers, and `char` for single letter variables or input.

The output will always be some form of string printed out on a single line. It will always begin on a new line and end with some form of newline character; either `std::endl` or `'\n'`.  Whenever printing a `double` you should always have exactly 4 decimal places; if your decimal number is `3.1415926534`, you should print it as `3.1416`. If your number is `0.0` or `0`, it should print as `0.0000`. You can use `<iomanip>` to accomplish this.

For details on expected submission instructions, please refer to the **Submission and Grading** section at the bottom of the document.

1.  *Hello World*. Simply write a program in C++ that outputs the string `Hello World!` to standard output (std::cout).

2.  *Addition*. This program should prompt the user for two numbers, then output the following string: `<a> + <b> = <c>` where `a` is the first number given, `b` is the second, and `c` is the sum. (eg. `5 + 7 = 12`).

3.  *Subtraction*. Prompt the user for two numbers, then output the following string: `<a> - <b> = <c>` similar to problem 1 except using subtraction instead of addition.

4.  *Division*. Prompt the user for two _integer_ numbers, then output the following string: `<a> / <b> = <c>`. Integer division can lose precision as we discussed in lab, but we won't worry about that here.

### Helpful hints ~

To prompt users (or in this case, the autograder) for input, we use `std::cin`. For example, if I wanted to accept two integers into my program and sum them, we would do the following:

```c++

int a, b, c;

std::cin >> a;
std::cin >> b;

// It's also worth noting that we could combine these lines into one (std::cin >> a, b;)

c = a + b;

```


### Submission and Grading
You will submit a single _zip file_ named `mc1.zip` through Gradescope.  Your zip archive must contain your source files **only**.  For each of the problems, create a file called `main_<num>.cpp` where _num_ is the question number itself with no leading zeros. Ensure _all_ of your code resides within the `main()` function within that file.  All programs **must** compile and execute without warnings.  Your programs will be automatically graded.  For each of the questions you either pass the test cases (full points) or not (zero points).

>You must be reminded that students caught cheating or plagiarizing will receive `no credit`. Additional actions, including a failing grade in the class or referring the case for disciplinary action, may also be taken.
