# Lab 06: Strings

Welcome to CSC 211 Lab 06. Your goal for this lab will be to gain a better understanding of strings. **Be sure to read and follow all instructions unless otherwise specified.** Some of the language used here has been adopted from the *OpenDSA Data Structures and Algorithms Modules Collection text* text. Create a `lab-06.txt` document to record all of your lab answers in and implement all of your `.cpp` programs in your IDE.

1. C-style Strings [45 minutes]<br> 
    1.1 How to create a C-style string<br>
    1.2 Accessing a C-style string<br>
    1.3 Modifying a C-style string<br>
2. The *string* class [20 minutes] <br>
    2.1 Creating a string object<br>
    2.2 Storing data as a string object<br>
    2.3 Accessing a string object<br>
    2.4 Manipulating a string object<br>
3. Exercises [30 minutes] <br>
4. Submission [5 minutes]

# Part 1. C-style Strings [45 minutes]
## 1.1 How to create a C-style string
A C-style string is an array of characters that uses the null terminator ('\0') to indicate the end of the string.

To declare & initialize a C-style string, we can do the following: 

```c
  char myString[] = "Hello, World!";
```

This will create a char array containing the string literal, plus the null terminator. Notice that the length of the string is 14. "Hello, World!" takes up 13, and the '\0' character is added to the end. We can visualize the above string as such:

H|e|l|l|o|,| |W|o|r|l|d|!|\0
-|-|-|-|-|-|-|-|-|-|-|-|-|-
0|1|2|3|4|5|6|7|8|9|10|11|12|13

We can also create an array for later use by specifying a size:

```c
    char myString[10];
```

This will create an array of size 10 for us to use. 

:white_check_mark: Question 1. What is the largest size string we could store into this variable?

:white_check_mark: Question 2. What is the largest size string we could store into an arbitrary variable of size n?

:white_check_mark: Question 3. What do you think will happen if a string has no null terminator?

Now its a valid question to wonder why every string must have a null terminator at the end. The answer is actully rather simple, it makes iterating over the string trivial. If we observe the [ASCII table](https://www.bing.com/widget/t/ascii?q=ascii&height=370&pos=1&tag=afcd98f5cab196c1) and look for the ASCII code associated with the character Null we will find that it has ASCII code 0. 

:white_check_mark: Question 4. What does this mean we can do with strings to look for where it ends?

## 1.2 Accessing a C-style string
As shown above, the letters in the array are indexed 0-13. To access a specific letter, place brackets with the index you want after the identifier, like so:

```c
    std::cout << myString[0];
```

This would output the letter 'H'.

If we want to output the entire word, simply cout the identifier:

```c++
    std::cout << myString << std::endl;
```

:white_check_mark: Program 1. Implement in C++ a function with the following header `unsigned int string_len(char str[])` that will return the length of the `str` parameter(not including the null terminator).

## 1.3 Modifying a C-style string
By the same method as above, we can specify a letter to change with brackets & an index:

```c
    myString[7] = 'B';
```

Were we to print myString, we would receive "Hello, Borld!"

To retrieve a string from the user and store it into our C-style string, we can use the [getline() function.](http://www.cplusplus.com/reference/istream/istream/getline/)

```c++
    char myString[10];
    
    std::cin.getline(myString, 10);
```

As the documentation says, getline() will append a null terminator to the end of the string read from the user before it is stored into myString. Be careful when using getline() alongside a regular cin expression inside of the same program, as they tend to not get along. 

:white_check_mark: Program 2. Implement in C++ a function with the following header `void replace(char str[], char a, char b)` that will replace every instance of character `a` in the `str` parameter with character `b`. (We wrote psuedocode for this problem earlier in the semester so feel free to reference it for this problem)

:white_check_mark: Program 3. Implement in C++ a function with the following header `bool palindrome(char str[])` that will return true if the `str` parameter is a palindrome(that is to say that the string is spelled the same way forwards and backwards, E.G. tacocat, racecar, etc.), and false otherwise. For this particular question you can assume you will always et input that is all lowercase and contains no spaces. (**Hint**: your `string_len` function from earlier wll be useful here)

:white_check_mark: Program 4. Implement in C++ a function with the following header `void reverse(char str[])` that will reverse the `str` parameter.

:white_check_mark: Program 5. Implement in C++ a function with the following header `void remove(char str[], char a)` that will remove the first occurence of character `a` from the `str` parameter. (Note: you will have to shift over the rest of the string after removing the character)

:white_check_mark: Program 6. Implement in C++ a function with the following header `void all_to(char str[], bool caps)` that will change all of the characters in the `str` parameter to their uppercase equivalent if `caps` is True or change all of the character in `str` to their lowercase equivalent if `caps` is False.


# 2. The String Class [20 minutes]

In C++, we have access to the string class. This allows us to create a string object. For those interested [here's a link to the c++ reference page on string objects](http://www.cplusplus.com/reference/string/string/), and [here's a link to the C++ reference page on functions that act on string objects](http://www.cplusplus.com/reference/string/). As this is our first STL(Standard Template Library) container we're using this semester don't be scared by all of the information on this page.  

## 2.1 Creating a string object

Creating string objects is very simple. Make sure you include the string library, and all you need is an identifier, like so:

```c++
    #include <string>
    
    std::string myString;
```

You can also create a string initialized with data by invoking the string **constructor**, like so:
> Note: A **constructor** is a member function of a class which initializes objects of a class. In C++, Constructor is automatically called when object(instance of class) create. It is special member function of the class. ([source](https://www.geeksforgeeks.org/constructors-c/))

```c++
    #include <string>
    
    std::string myString("Hello, World!");
```

Notice how for both of these strings, we never specified a size like we had to for the c-style strings. String in C++ are more sophisticated, in that they will resize as need be (providing we use the correct methods to manipulate them!)

We can also initialize a string with another string.
 
```c++
    #include <string>
    
    std::string myString("Hello, World!");
    std::string anotherString(myString);    //Printing this yields "Hello, World!"
```

Or even a concatenation of strings!

```c++
    #include <string>
    
    std::string myString("Hello, World!");
    std::string anotherString(myString + myString); //Printing this yields "Hello, World!Hello, World!"
```

Yet another constructor lets us fill a string with *n* instances of a character!

```c++
    #include <string>
    
    std::string myString(10, 'a');  //Printing this yields "aaaaaaaaaa"
```

## 2.2 Storing data as a string object

There are multiple ways to store data in a string object. We saw above that we can initialize a string in many ways, but what about after it has been created? The primary way of adding data to a string is with the **append()** function.

```c++
    #include <string>
    
    std::string myString("Original Text");
    
    myString.append("Appended Text");   //Printing after this line would yield "Original TextAppended Text"
    
```

Note that you'll need to manually add spaces if you want them between the data already in the string, and what you are adding!

The String object has its own version of the **getline()** function that is used to retrieve data from a file/user.

```c++
    #include <string>
    
    std::string myString;
    std::getline(std::cin, myString);   //Note that when working with files, the file pointer will replace std::cin!
```

## 2.3 Accessing a string object

The data inside of a String is indexed, just like an array. The only difference, is that you'll need to use the String class' **at()** function to access the data, instead of having direct access to it via bracket.

```c++
    #include <string>
    
    std::string myString("A String");
    std::cout << myString.at(2) << std::endl;   //This will print 'S'
```
Since the data is indexed, this means we can loop through the contents of any String object. But in order to do this, we'll need to know how long the String is. Or more accurately, we need to know what the maximum index we can access is. Luckily, the **length()** function has us covered!

```c++
    #include <string>
    
    std::string myString("A string to test .length()!");
    std::cout << myString.length() << std::endl;    //This will print 27.
```

The last one I'll be mentioning for this lab is the **substr()** function. This allows us to extract a substring from a String object. There are two versions of this function, one that takes a single parameter, and another that takes two. Starting with the single parameter version, **substr(i)**, this will return a String containing all data from the *ith* position until the end of the string.

```c++
    #include <string>
    
    std::string myString("Apples");
    std::cout << myString.substr(2) << std::endl;   //This will output "ples"
```

The other version, **substr(i, n)**, will return a String of *n* length starting from the *ith* position. Note that this is ***very*** different from a function that returns all data between *i* and *n*!

```c++
    #include <string>
    
    std::string myString("Apples");
    std::cout << myString.substr(2, 3) << std::endl;    //This will output "ple"
```

There are other functions to access specific parts of a String, but you can read about those in the documentation. You will follow the same method to use each of them: use the **.** operator on a String identifier and fill in the correct parameters that the documentation tells you about.

## 2.4 Manipulating a string object

As mentioned earlier, String objects can change size. This means we can delete elements from a String. The first method we'll cover is the nuclear option, **clear()**. As expected, this function will obliterate any data in your String, resetting it to the empty string "";

```c++
    #include <string>
    
    std::string myString("A string with hopefully not very important data in it!");
    myString.clear();
```

For a little more precision, we can use the **erase(i, n)** function. This will delete *n* characters from the String starting at index *i*. These parameters work the same way as those for **substr(i, n)**.

```c++
	std::string myString("Apples");
	myString.erase(2, 3);   //This will delete indices 2, 3, and 4. Removing letters "ple"
	std::cout << myString << std::endl; //This will output "Aps"
```

One final function I want to cover, is the **replace(i, n, str)** function, which replaces *n* characters starting at index *i*, with the data in *str*. A neater way to think of this, is that it calls **erase(i, n)** then inserts *str* at *i*.

```c++
	std::string myString("Apples");
	myString.replace(1, 4, "lpaca");    //Erases "pple" and inserts "lpaca". Note that these Strings are not the same length!
	std::cout << myString << std::endl; //This will print "Alpacas"
```

# Part 3. Exercises [30 minutes]

:white_check_mark: Question 7. Look through the documentation for the String class. Learn what the **copy()** function does, demonstrate you understand how to use it by writing a function utilizing it, and write a comment explaining what each parameter to the function is, as well as what is happening.

:white_check_mark: Question 8. Look through the documentation for the String class. Learn what the **swap()** function does, demonstrate you understand how to use it by writing a function utilizing it, and write a comment explaining what each parameter to the function is, as well as what is happening.

:white_check_mark: Question 9. Look through the documentation for the String class. Learn what the **insert()** function does, demonstrate you understand how to use it by writing a function utilizing it, and write a comment explaining what each parameter to the function is, as well as what is happening. Note that this function has multiple versions, why is that?



# Part 4. Submission [5 minutes]

Each group will submit a single **.zip file** named `lab-06.zip` containing all your answers to the lab questions in your `lab-06.txt` and all of your `.cpp` source code files on [Gradescope](http://gradescope.com) **before the end of your lab section**. **All submissions should be made by a group/team.** *Individual submissions will not be accepted.* Instructions to download your `lab-06.txt` file can be found in the IDE introduction page that you read in lab-01. For your convenience, that page is relinked [here](https://cs50.readthedocs.io/ide/online/).
