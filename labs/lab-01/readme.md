# Lab 01: IDE Intro, Basic Shell Commands, and Hello World

Welcome to the first CSC 211 lab. Your goal for this lab will be to set up your environment and familiarize yourself with some basic terminal commands. **Be sure to read and follow all instructions unless otherwise specified.**  You'll find the table of contents for this lab below.

1. Piazza Setup 
2. Gradescope Setup 
3. CS50 IDE  
	- Setup
	- Basics 
4. Command-Line Exploration 
5. Hello World 
6. Submission

Please create a **text file** named `lab-01.txt` file for your lab group to record answers to the questions in this lab.  Ensure your text file has the following format:

```text
Question 1:
-----------
<your solution here>


Question 2:
-----------
<your solution here>

...
```



# Part 1. Piazza Setup 

[Piazza Support Center (students)](https://support.piazza.com/support/solutions/48000185443)



# Part 2. Gradescope Setup

[Gradescope Help (student workflow)](https://www.gradescope.com/help#help-center-section-student-workflow)



# Part 3. CS50 IDE

In this class you will need multiple tools in order to best succeed, including a bash terminal, a text editor with code highlighting, and a debugging interface. These tools, along with many others, are often packed together into what is called an **Integrated Development Environment**, or IDE. In particular we highly recommend using CS50 IDE for this class, since it is lightweight, fairly easy to use, and best supported by the TAs. Thus, we will discuss you two options for how to start using CS50 IDE.

> CS50 IDE is a containerized application that runs on Docker.  Further details on: [Docker containers](https://www.docker.com/resources/what-container).

## 3.1 IDE Options - Online vs Offline

You have two options for how you would like to install/use CS50 IDE, and you need choose only one. The first option is to use a free GitHub account to access the IDE from the internet, and the second is to install Docker to access it locally. Some pros and cons are as follows:

**CS50 IDE Online**

<table>
	<tr><td>+</td><td>Simple and easy setup</td></tr>
	<tr><td>+</td><td>Can be accessed from any computer</td></tr>
	<tr><td>+</td><td>Requires no installation on your system</td></tr>
	<tr><td>+</td><td>Has shown to work more reliably than the offline option</td></tr>
	<tr><td>-</td><td>Requires a (free) GitHub account</td></tr>
	<tr><td>-</td><td>Requires an active internet connection</td></tr>
</table>

**CS50 IDE Offline**

<table>
	<tr><td>+</td><td>Does not require signing up for any service</td></tr>
	<tr><td>+</td><td>Is usable offline</td></tr>
	<tr><td>+</td><td>Uses your own system's resources (better if you have a good computer and you want to write a more complex program)</td></tr>
	<tr><td>-</td><td>Slightly more complex setup</td></tr>
	<tr><td>-</td><td>Requires installation of Docker and (through Docker) the IDE</td></tr>
</table>

### 3.1.1 Online Option - Setup

>Note that the recommended browser for using the online option is [Google Chrome](https://www.google.com/chrome/)

The steps to set up the online version of CS50 IDE are as follows:

1. If you do not already have one, [create an account at github.com](https://www.github.com)
2. An activation email should be sent to the email address used to create your account. Activate your gitHub account using said activation email.
3. Go to [ide.cs50.io](https://ide.cs50.io/), and click "Sign in with GitHub".
4. Log in with you GitHub credentials.
4. Your CS50 IDE will begin to load. This might take a minute if it's your first time accessing CS50 IDE Online, so please be patient.

### 3.1.2 Offline Option - Setup

If you choose to install the offline option (not recommended during this lab session), you can follow the instructions for setup [here](https://cs50.readthedocs.io/ide/offline/#).

### 3.1.3 Other Options
While CS50 IDE is strongly encouraged for this course, some other IDE options are:

- [Visual Studio Code](https://code.visualstudio.com/)
- [CLion](https://www.jetbrains.com/clion/) (Free with student id)
- [QT C++](https://www.qt.io/developers/)

These IDEs may require more effort to learn and may seem less user-friendly at times, but they are much more professional and include many of the tools one may actually use in software production. While not necessary for this class, you may find it beneficial to yourself to spend some time learning one.

## 3.2 Getting Started
Now that your IDE is all set up, take some time and get to know it! Read through [this introduction](https://cs50.readthedocs.io/ide/online/) with your group! 

:white_check_mark: Question 1: Describe some major differences between using a local or online version of the IDE.

:white_check_mark: Question 2: Where are your files stored if using the online version vs the offline version?

:white_check_mark: Question 3: What are the PC and Mac hotkeys to create a new file?



# Part 4. Basic Command-Line Exploration

<!-- introduction slides about File Systems -->

Now that you've set up your environment, we can start to learn some basic UNIX command line. Unix and [Unix-like operating systems](http://www.doc.ic.ac.uk/~wjk/unixintro/Lecture1.html), like Linux, can all use the following commands to interact with [file systems](http://homepages.uc.edu/~thomam/Intro_Unix_Text/File_System.html). Basic tasks like changing directories, creating or modifying files, or removing files all together are just a few examples of things we can do using a Shell terminal.

To really understand what you'll be doing for this section of the lab, having a strong understanding of what a file system is and how we can navigate it will be critically important.

:white_check_mark: Question 4: Based on what you've heard so far about file systems, describe what you believe a file system is and some of the different ways you can navigate one using Shell commands.

### Opening a New Terminal

If you don't have a terminal already open in your environment, you can create one in the the CS50 IDE by clicking File > New Terminal. Please read [this section](https://cs50.readthedocs.io/ide/online/#working-with-terminals) before moving to the next step.

### Making a file

We can  make empty files on the fly with the `touch <filename>` command. Try the following below: 

```bash
$ touch test.cpp
```

Now, you should see `test.cpp` in your file manager on the left-hand side.

### Removing files

Before your workspace gets too cluttered, let's remove that test file you just created with the `touch` command. You can do this by typing:

```bash
$ rm test.cpp
```

The test file you just created should be removed if this command ran properly.

Ok, lets create another empty file with the following command:

```bash
$ touch hello.cpp
```

### Creating a new directory

Making and deleting files is great but we often need to organize them in a sensible way. We usually do this by making **directories**. You can think of directories as folders. They're named locations that can hold other files or directories.

To make a directory type the following terminal command:

```bash
$ mkdir projects
```

Now you should see your `hello.cpp` and `projects` folder in your file manager.

### Removing a directory

Just like how we created and removed a file, we can do the same with directories. Lets make a test directory named `testd` with the following command:

```bash
$ mkdir testd
```

To delete this directory (only if is empty), we can simply run:

```bash
$ rmdir testd
```

### Moving files

Lets clean up our workspace by moving that `hello.cpp` file into our projects folder.  The syntax to move one file from one location to another location is `mv <source> <target>`. In this case, it would be:

```bash
$ mv hello.cpp projects
```

Now, our `hello.cpp` file is in our `projects` directory.

### Print Working Directory

To see where we are, the command `pwd` will print the current directory you are operating in to the command line. Currently, running the command

```bash
$ pwd
 ```

Should print out `/home/ubuntu`, if at any point you changed directory with the following command your output will be different

### Change Directory

Now that we have made a new directory named `projects` and moved our `hello.cpp` file to it, we need to navigate our terminal to this directory in order to have easy access to our file for editing/compiling/file management. This is accomplished with the `cd` command with syntax as follows, `cd <directory_path>`, meaning we can move more than one file at a time. For now the following command should get you to where you need to be,

```bash
$ cd projects/
```

Now that we have changed directory, we can execute the earlier commands to validate our position within the file system. Executing `pwd` from this file should output `/home/ubuntu/projects` and executing `ls` should show that there is a file named `hello.cpp` present.

Some useful cd commands:
```bash
# to change your working directory to its parent directory, i.e. one step back
$ cd ..
# to change back to your user directory, i.e. "/home/ubuntu" or "~/" in the case of CS50 IDE's file system
$ cd
# to change back to the file system root directory, i.e. "/" for short
$ cd /
```

> note that `cd` can accept full paths, so for example `cd ../..` will move your working directory two steps back in the file system, though don't do this now as this will put you behind your root directry which is out of the scope of this lab

### Displaying File Contents

Another (popular) command-line utility available to us is `cat`, which is short for concatenate. In its simplest form, `cat` can display the contents of a text file; it can also be used to concatenate together many text files.

For example, if we had a text document named `test.txt` with the contents 

```text
I love CSC 211
```

The contents of that file would print out to our terminal by running:

```bash
$ cat test.txt
```

Spend some time with your group to create a text file with some content in it in your CS50 environment and use the `cat` command to report those contents to the console.

###  Shell Hints

Before we move on, there are a few things about the shell you should know. The up arrow goes to previous commands. And if you think the computer can guess what you are typing, you can hit TAB to have it completed for you. For example, if `cd pro` is typed in terminal, and the TAB key is hit, the rest of the file name will be filled in. You can find more information on terminal commands [here](http://mally.stanford.edu/~sr/computing/basic-unix.html).

## 4.1 Exercises

For the following questions, provide a sequence of Shell commands that will:

:white_check_mark: Question 5: Create a directory named `project-1`

:white_check_mark: Question 6: Enter directory named `project-1`

:white_check_mark: Question 7: Return to the parent directory

:white_check_mark: Question 8: List all files in the current directory



# Part 5.  Hello World

You should see the `hello.cpp` file we created in part 4 with the touch command. Let's add some code to this file. Open the `hello.cpp` file by double clicking on it. Even if you've never written a program using `c++` type the following in your empty file.

```c++
#include <iostream>

int main()
{
	std::cout << "Hello World!" << std::endl;
	return 0;
}
```

You can save your work by pressing `command + s` (on Mac) or `control + s` (on PC). The next step is to **compile** your program. We will use `g++`. Simply type this in your terminal below:

```bash
$ g++ hello.cpp -o hello
```

`-o` tells the compiler that the next argument should be the name of the output file, which is `hello` in this example

> Note: If you do not specify `-o <filename>` the file will be named `a.out` by default

If you have any syntax errors they will be printed to you now. Assuming your program successfully compiled, you now have a machine code file called `hello` (or whatever you decided to call the file). You can see this new file by typing `ls` in the bash shell again. Finally you can run your executable code by typing,

```bash
$ ./hello
```



# Part 6. Submission

Each group will submit a single **text file** named `lab-01.txt` containing all answers to the lab questions and a single `hello.cpp` on [Gradescope](http://gradescope.com). Instructions to download your files from the IDE to your local file system can be found in the IDE introduction page that you read earlier in the lab. For your convenience, that page is relinked [here](https://cs50.readthedocs.io/ide/online/).
