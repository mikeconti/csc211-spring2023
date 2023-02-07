## Micro Programming Challange#02 (Due Date 02/13)

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


# License To Launch

Birk has made a new shiny rocket and just received his licence from the Bluesky Global Order (BGO) to launch anytime within the next n days. He is, however, worried that the rocket will hit space junk on its way. In order minimize the risk of a collision, Birk has made a model of how many pieces of space junk there will be for each of the next n days. He decided that he will launch his rocket on the day with the least space junk, and if there are multiple days with the same amount of space junk he of course wants to send his rocket up as early as possible.

Can you help Birk find out how many days he has to wait until he sends up his rocket?

## Input
On the first line there is a single integer n (1≤n≤100000) the number of days for which the launch license is valid. On the second line follows n integers between 0 and 109 where the i’th integer is the amount of space junk on the i’th day. The first day is day i=0.

## Output
Output a single integer, the number of days Birk needs to wait before he launches his rocket.

### Sample Input 1	
```
5
3 4 1 7 2
```
### Sample Output 1

```
2
```



### Submission and Grading
You will submit a single _zip file_ named `mc2.zip` through Gradescope.  Your zip archive must contain your source files **only**.  For each of the problems, create a file called `main_<num>.cpp` where _num_ is the question number itself with no leading zeros. Ensure _all_ of your code resides within the `main()` function within that file.  All programs **must** compile and execute without warnings.  Your programs will be automatically graded.  For each of the questions you either pass the test cases (full points) or not (zero points).

>You must be reminded that students caught cheating or plagiarizing will receive `no credit`. Additional actions, including a failing grade in the class or referring the case for disciplinary action, may also be taken.
