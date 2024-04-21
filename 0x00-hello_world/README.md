# 0x00. C - Hello, World

`C`
 
 + Weight: 1
 

https://github.com/adeleke123/alx-low_level_programming/assets/51156057/201e469f-ef82-4a29-a1e1-177166f2ad25

+ Resources
+ Read or watch:

+ [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240419%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240419T201046Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=393134897dfe846e59f737f99b5c468bda556510c0e9f38559183f96b1a27225) (You do not have to learn everything in there yet, but make sure you read it entirely first)
+ [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
+ [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
+ [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
+ [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
+ [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
+ [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
+ [Betty Coding Style](https://github.com/alx-tools/Betty/wiki)
+ [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21) (Look at only after you finish consuming the other resources)
+ [Linus Torvalds on C vs. C++](http://harmful.cat-v.org/software/c++/linus) (Look at only after you finish consuming the other resources)

# man or help:

+ `gcc`
+ `printf (3)`
+ `puts`
+ `putchar`

# Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), without the help of Google:

# General
+ Why C programming is awesome
+ Who invented C
+ Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
+ What happens when you type `gcc main.c`
+ What is an entry point
+ What is `main`
+ How to print text using `printf`, `puts` and `putchar`
+ How to get the size of a specific type using the unary operator `sizeof`
+ How to compile using `gcc`
+ What is the default program name when compiling with `gcc`
+ What is the official C coding style and how to check your code with `betty-style`
+ How to find the right header to include in your source code when using a standard library function
+ How does the `main` function influence the return value of the program

# Requirements
## C

+ Allowed editors: `vi`, `vim`, `emacs`
+ All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
+ All your files should end with a new line
+ A `README.md` file at the root of the repo, containing a description of the repository
+ A `README.md` file, at the root of the folder of this project, containing a description of the project
+ There should be no errors and no warnings during compilation
+ You are not allowed to use `system`
+ Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)

# Shell Scripts

+ Allowed editors: `vi`, `vim`, `emacs`
+ All your scripts will be tested on Ubuntu 20.04 LTS
+ All your scripts should be exactly two lines long (`$ wc -l file should print 2`)
+ All your files should end with a new line
+ The first line of all your files should be exactly `#!/bin/bash`

## More Info

# Betty linter

+ To run the Betty linter just with command `betty <filename>`:

+ Go to the [Betty](https://github.com/alx-tools/Betty) repository
+ Clone the [repo](https://github.com/alx-tools/Betty) to your local machine
+ `cd` into the Betty directory
+ Install the linter with `sudo ./install.sh`
+ `emacs` or `vi` a new file called `betty`, and copy the script below:
```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done

```

+ Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
+ Move the `betty `file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`
+ You can now type `betty <filename>` to run the Betty linter!



## Quiz questions

# Question #0

+ Which command can be used to compile a C source file?

+ `gcc`
+ c-compiler
+ bash

# Question #1

+ What is the common extension for a C source file?

+ `.c`
+ .py
+ .txt
+ .cpp

# Question #2
+ What is the common extension for a C header file?

+ .hpp
+ .ch
+ .header
+ `.h`

# Question #3
+ In which category belongs the C programming language?

+ `Compiled language`
+ Interpreted language

# Question #4
+ What are the different steps to form an executable file from C source code

+ Compilation and linking
+ `Preprocessing, compilation, assembly, and linking`
+ Preprocessing and compilation
+ Interpretation, assembly and compilation
+ Interpretation, compilation and assembly

# Question #5
+ Which of the following are both valid comment syntaxes in ANSI C, and Betty-compliant?

```

# Comment

// Comment

/*
 * Comment
 */

/* Comment /* nested */ */

/*
Comment
*/

/* Comment */

```

In this project, I learned about compilation using `gcc`, entry
points using `main`, and text-printing functions in C. GCC is basically a C compiler.

## Tasks :page_with_curl:

**0. Preprocessor**

+ Write a script that runs a C file through the preprocessor and save the result into another file.

+ The C file name will be saved in the variable $CFILE
+ The output should be saved in the file c
```
julien@ubuntu:~/c/0x00$ cat main.c 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ ./0-preprocessor 
julien@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
julien@ubuntu:~/c/0x00$
 
```
**Repo:**

+ GitHub repository: `alx-low_level_programming`
+ Directory: `0x00-hello_world`
+ File: `0-preprocessor`

**1. Compiler**

  * Write a script that compiles a C file but does not link.
  * The C file name will be saved in the variable `$CFILE`
  * The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
  * Example: if the C file is `main.c`, the output file should be `main.o`.

 ```
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ cat main.c
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ ./1-compiler 
julien@ubuntu:~/c/0x00$ ls
0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s
julien@ubuntu:~/c/0x00$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@julien@ubuntu:~/c/0x00$

```

**Repo:**

+ GitHub repository: `alx-low_level_programming`
+ Directory: `0x00-hello_world`
+ File: `1-compiler`

* **2. Assembler**
  * [2-assembler](./2-assembler): Bash script that generates the assembly code of a
  C code saved in the variable `$CFILE`; saves the result in an output file of the
  same name but with a `.s` extension.
    * Example: If the C file is `main.c`, the result is `main.s`.

* **3. Name**
  * [3-name](./3-name): Bash Script that compiles a C file saved in the variable
  `$CFILE` and creates an executable `cisfun`.

* **4. Hello, puts**
  * [4-puts.c](./4-puts.c): C program that prints exactly `"Programming is like building
  a multilingual puzzle`, followed by a new line, using the function `puts`.

* **5. Hello, printf**
  * [5-printf.c](./5-printf.c): C program that prints exactly `with proper grammer, but
  the outcome is a piece of art,`, followed by a new line, using the function `printf`.

* **6. Size is not grandeur, and territory does not make a nation**
  * [6-size.c](./6-size.c): C program that prints the size of various types on the computer
  it is compiled and run on.

* **7. Intel**
  * [100-intel](./100-intel): Script that generates the assembly code in Intel syntax of a
  C file saved in the variable $CFILE; saves the result in an output file of the same name
  but with a `.s` extension.
    * Example: If the C file is `main.c`, the output is `main.s`.

* **8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity**
  * [101-quote.c](./101-quote.c): C program that prints exactly `and that piece of art is
  useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error,
  without using any functions listed in the NAME sesction of the man(3) `printf` or man(3)
  `puts`.
  ***
  learning all these was pretty interesting!!
