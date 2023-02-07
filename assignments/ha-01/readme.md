## Homework Assignment 01 (Due Date 2/19)

This assignment is about operators, expressions, data types, and selection statements. **Arrays, functions, and loops are not allowed. The only libraries allowed for this assignment are `<iostream>` and `<iomanip>`**.  This assignment is to be completed individually. You are not allowed to share your code with other students. The assignment is worth a total of 100 points. If you have any questions or need any help, please visit us during office hours and/or post questions on Piazza.

> If you need to post any of your actual source code on Piazza for any reason, **please** be sure to tag the post as being _visible to instructors only_, so that you don't inadvertently share code with others and violate class rules.

### Format details
Your submission will be tested and graded by an autograder, for this reason it cannot be stressed enough that your program must exactly follow the specifications for input and output upon submission.

If the question specifies that it will take a `double` then a `char` you must follow this input order or else fail the test.  For this assignment, you should use the `int` data type for regular whole numbers and as the default when a number format is not specified, you should use the `double` data type for any question which specifies decimal or floating point numbers, and `char` for single letter variables or input.

The output will always be some form of string printed out on a single line. It will always begin on a new line and end with some form of newline character; either `std::endl` or `'\n'`.  Whenever printing a `double` you should always have exactly 4 decimal places; if your decimal number is `3.1415926534`, you should print it as `3.1416`. If your number is `0.0` or `0`, it should print as `0.0000`. You can use `<iomanip>` to accomplish this.

For details on expected submission instructions, please refer to the **Submission and Grading** section at the bottom of the document.

1.  *Addition*. This program should prompt the user for two numbers, then output the following string: `<a> + <b> = <c>` where `a` is the first number given, `b` is the second, and `c` is the sum. (eg. `5 + 7 = 12`).

2.  *Subtraction*. Prompt the user for two numbers, then output the following string: `<a> - <b> = <c>` similar to problem 1 except using subtraction instead of addition.

3.  *Division*. Prompt the user for two _integer_ numbers, then output the following string: `<a> / <b> = <c>`. Integer division can lose precision as we discussed in lab, but we won't worry about that here.

4.  *All*. Making individual programs to perform basic operations is repetitive and not good coding practice, it would be better to create one program which can add, subtract, divide, and multiply two numbers depending on user input. For this program you will read two integers `a` and `b` from the user and an operator character `c`. Eg. `2 5 *` will multiply `a` and `b` and output the string `2 * 5 = 10`, `5 2 /` will divide `a` by `b` and output the string `5 / 2 = 2`. Don't worry about validating input, the auto-grader will only give you legal numbers and one of the four basic operator characters `+ - * /`.

5.  *Odd or even*. Sometimes it will be useful to know whether a given number is odd or even. This program should read a single integer number from the user and print whether or not the provided number is even or odd. The output should be a single line formatted as follows: `<number> is <odd|even>` where `number` is replaced by the user input, and `odd` or `even` is printed depending on whether or not the number is odd or even.  You are encouraged to use the ternary operator to complete this program.

6.  *Positive or negative*. This program should prompt the user for an integer number and print whether the provided number is positive or negative. The output should be a single line formatted as follows: `<number> is <positive|negative>`.  If the number is zero, the output string should instead print `<number> is neither positive nor negative`.

7.  *Larger than 100 and multiple of 8*. Prompt the user for an integer value. If the number is both a multiple of 8 and is larger than 100, the single line `<number> satisfies the criteria` should be printed. If the number does not satisfy _both_ criteria, print out `<number> does not satisfy the criteria`

8.  *Last digit is 9*. Prompt the user for an integer number. If the last digit of the entered number is 9, print `<number> is good`, otherwise, print `<number> is no good`. Some examples of "good" numbers would be: 9, 19, 1279, 999, 699, 1029 etc.

9. *Privileges*. This program should prompt the user for an integer representing age, then output one of the following: `Too young` for an age under 16; `Can drive` for those in the interval [16, 18); `Can join the military` [18, 21) and finally `Can have a beer` for ages greater than or equal to 21.

10. *Word for number*. Prompt the user for a digit [0, 9] and print out the name of that digit as a string. Entering `9` should output `Nine`, entering `7` should output `Seven` etc. An number outside of the specified range should print `Not a valid number`. Use a `switch` statement for this problem.

11. *Date converter*. Prompt the user for three integers representing their birthday in the order `<month> <day> <year>`. Print the given date as a string on a single line in the following format: `<month name> <day>, <year>`. `10 3 1997` should output `October 3, 1997`, `1` `1` `2000` should output `January 1, 2000` etc. If a month does not exist, print out `Imaginary month`.

12. *Average*. Prompt the user for three decimal values and print the average of the three in the format: `The average of <num1>, <num2>, and <num3> is <average>`.

13. *Smallest number*. This program should prompt the user for three integer values, and determine which number is the smallest. The output string should be formatted as follows: `The smallest number entered was <number>`.

14. *Which quadrant*. In mathematics, 2-dimensional cartesian systems can be segmented into four quadrants, depending on whether `x` and `y` are positive and negative. For example, (1.0,1.0) falls in `Quadrant 1`. This program should take an `x` and `y` coordinate from the user in that order, then output which quadrant that point falls into, in the format: `Quadrant 1`, `Quadrant 2` etc. If the point falls on the `x-axis` or the `y-axis`, print `No quadrant`. Use `double` for the coordinate points in this problem.

15. *Is it cold out?* A student from Rhode Island is visiting Germany but doesn't understand Celsius very well. They want to be able to tell whether it is cold out or not without going outside, so they write a program to tell them how cold it is. This program should take a `decimal` number representing Celsius as input and determine its Fahrenheit equivalent. If the F temperature is less than or equal to 32 degrees, the program should print `It is cold out`, if the temp is (32, 65], the program should print `Wear a jacket`, if it is above 65, print `It is nice out`.

16. *Temperature converter*. This program should prompt the user for two arguments, first a _decimal_  number and second, a single letter, either `C` or `F`. The decimal represents a temperature, the character represents which system that degree is in (`50.0` `F` would be 50.0 degrees Fahrenheit etc.). This program should take the given number and convert it to a temperature in the other system. The output string format should be `<input num> degree(s) <input system> is equal to <new num> degree(s) <other system>`. Eg. input `0` `C` would give the string `0.0000 degree(s) C is equal to 32.0000 degree(s) F`. You can assume that either `F` or `C` will be given for input, no need to account for invalid input.

17. *Grades*. This program should prompt the user for a single character as an argument, this character should represent a letter grade. The program should print a single-line string for each different grade.

    Grade Letter | Output
    --|--
    A | `Excellent`
    B | `Good`
    C | `Average`
    D | `Poor`
    F | `Failing`

Additionally, the case of the letter should _not_ matter. `A`, `a`, `B`, `b`, etc. should all be acceptable input for the program.

18.  *Day of the week*. This program takes in three integers, representing `day` `month` `year` in that order, and should output the day of the week associated with the given date. The formula used to calculate the date is:

![Alt text](images/formula.png "week formula")

   * _day_ is the day of the month (1, 2, 3, etc.).
   * _century_ is equal to (_year_ / 100). For 2019, century would be 20.
   * _yearpart_ is the year within the century (_year_ mod 100). For 2019, year would be 19.
   * _month_ is the month of the year, we typically associate the months as January = 1, February = 2, March = 3, etc. This is the case for this program for all cases **except** for January and February. Due to the way the formula works, specifically January and February must be entered into the above formula as months 13 and 14 of the _previous_ year. This is to say that if you wanted to know which day of the week January 5, 1997 fell on, you would need _month_ = 13, _day_ = 5, _year_ = 1996 when the values enter the formula. Your program should take them in as regular format `5 1 1997` and treat them differently once they have been read.
   * The value _weekday_ resulting from the equation will be a number [0,6] where Saturday = 0, Sunday = 1, etc.

The output of your program should be a single string name of the appropriate weekday. If the formula outputs 0, your output will be `Saturday` and so on.

19. *Triangles*. This program should take as arguments, three interior angles of a triangle (for simplicity we will take only `integer` values for angles), it should classify the triangle as one of the three types of triangles (`Acute`, `Right`, and `Obtuse`) and print that label to the console as output. Additionally, if the triangle given is impossible (sum of interior angles does _not_ equal 180) the program should not print any labels, and should instead print `This triangle is impossible`.

### Submission and Grading
You will submit a single _zip file_ named `pa1.zip` through Gradescope.  Your zip archive must contain your source files **only**.  For each of the problems, create a file called `main_<num>.cpp` where _num_ is the question number itself with no leading zeros. Ensure _all_ of your code resides within the `main()` function within that file.  All programs **must** compile and execute without warnings.  Your programs will be automatically graded.  For each of the questions you either pass the test cases (full points) or not (zero points).

>You must be reminded that students caught cheating or plagiarizing will receive `no credit`. Additional actions, including a failing grade in the class or referring the case for disciplinary action, may also be taken.
