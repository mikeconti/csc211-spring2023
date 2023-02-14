## Mini Programming Challenge #03 (Due Date 02/21)

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


# Dot Product

![image](https://github.com/mfaramarzi/Internship_Summer2021/blob/master/david/Generators/DotProduct/VectorImage_cropped.JPG)

Calculating a dot product is a common practice in video game and graphics programming. 
One useful application of the dot product is that it allows us to determine the angle between two vectors in space.


For this assignment, you will be calculating the length of two vectors, and then computing their normalized dot product and outputting if the angle between the vectors is acute, obtuse, or perpendicular.
If the dot product of two vectors is 0, it means they are perpendicular.  If their dot product is greater than 0, it means the angle between them is acute.  If their dot product is less than 0, it means they are obtuse.

The formula for calculating a dot product of two vectors (in 2d space) is x1 * x2 + y1 * y2.

Normalizing a vector means that you are changing the length of a vector to be 1 (a unit vector).  You do this by dividing each x, y component by the length of the vector.

i.e. (x/length, y/length)

The formula for calculating the length of a vector is the Pythagorean formula: sqrt(x * x + y * y).

## Input
The input will be 4 integers separated by whitespace.  They will contain the x, y positions of the vectors: x1 y1 x2 y2.

## Output
The output will be a string in the format: 
```
Length of v1: <length_v1> 
Length of v2: <length_v2>
Their normalized dot product is <dot_product> and they are <angle> 
  ```
  
where angle is one of "Perpendicular, Acute, Obtuse" and the lengths and dot products are rounded to a precision of 4.
#### Sample Input 1
```
0 1 1 0
```
#### Sample Output 1
```
Length of v1: 1.0000
Length of v2: 1.0000
Their normalized dot product is 0.0000 and they are Perpendicular
```


### Submission and Grading
You will submit a single _zip file_ named `mc03.zip` through Gradescope.  Your zip archive must contain your source files **only**.  For each of the problems, create a file called `main_<num>.cpp` where _num_ is the question number itself with no leading zeros. Ensure _all_ of your code resides within the `main()` function within that file.  All programs **must** compile and execute without warnings.  Your programs will be automatically graded.  For each of the questions you either pass the test cases (full points) or not (zero points).

>You must be reminded that students caught cheating or plagiarizing will receive `no credit`. Additional actions, including a failing grade in the class or referring the case for disciplinary action, may also be taken.
