

# Low-Level Programming - Data Structures, Algorithms, Linux/Unix System Programming

This repository contains solution programs written for the Low-level programming & Algorithm projects/tasks.
This is the part of the  Software Engineering program organized by Alx  Africa which occurred throughout the duration of the year 2022 June, cohort08 curriculum. The projects are written in C programming language.

## Structure

* [0x00. C - Hello, World](./0x00-hello_world)
* [0x01. C - Variables, if, else, while](./0x01-variables_if_else_while)
* [0x02. C -Functions_nested_loops](./0x02-functions_nested_loops)
* [0x03. C-Debugging](./0x03-debugging)
* [0x04. C - More functions, more nested loops](./0x04-more_functions_nested_loops)
* [0x05. C - Pointers, arrays and strings](./0x05-pointers_arrays_strings)
* [0x06. C - Pointers, arrays and strings](./0x06-pointers_arrays_strings)
* [0x07. C - Even more pointers, arrays and strings](./0x07-pointers_arrays_strings)
* [0x08. C - Recursion](./0x08-recursion)
* [0x09. C - Static libraries](./0x09-static_libraries)
* [0x10. C - Variadic functions](./0x10-variadic_functions)
* [0x11. C - Printf](./0x11-printf)
* [0x12. C - Singly linked lists](./0x12-singly_linked_lists)
* [0x13. C - More singly linked lists](./0x13-more_singly_linked_lists)
* [0x14. C - Bit manipulation](./0x14-bit_manipulation)
* [0x16. C - Simple Shell](./0x16-simple_shell)
* [0x15. C - File input output](./0x15-file_io)
* [0x16. C - Simple Shell](./0x16-simple_shell)
* [0x17. C - Doubly linked lists](./0x17-doubly_linked_lists)
* [0x18. C - Dynamic libraries](./0x18-dynamic_libraries)
* [0x19. C - Stacks,Queues LIFO-FIFO](./0x19-stacks_queues_lifo_fifo)
* [0x0A. C - argc, argv](./0x0A-argc_argv)
* [0x0B. C - malloc, free](./0x0B-malloc_free)
* [0x0C. C - more malloc, free](./0x0C-more_malloc_free)
* [0x0D. C - preprocessor](./0x0D-preprocessor)
* [0x0E. C - Structures, typedef](./0x0E-structures_typedef)
* [0x0F. C - Variadic functions](./0x0F-variadic_functions)
* [0x1A. C - Hash tables](./0x1A-hash_tables)
* [0x1B. C - Sorting algorithms & Big O ](./0x1B-sorting_algorithms)
* [0x1C. C - Makefiles](./0x1C-makefiles)
* [0x1D. C - Binary trees](./0x1D-binary_trees)
* [0x1E. C - Search Algorithms](./0x1E-search_algorithms)



## Requirements

To run this project, you will need to install the following tools.

* GCC : [GNU Compiler](https://gcc.gnu.org/)
* Betty : [C code checker](https://github.com/holbertonschool/Betty.git)


## Navigation Guide

To access any project you are willing to view , please proceed like this:

* clone the repository



        - git clone https://github.com/adeleke123/alx-low_level_programming
        - cd alx-low_level_programming


* open your desired project (we take Hello world project as example)



        - cd [0x00. C - Hello, World](./0x00-hello_world)


* test your desired file



        - gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c 4-puts
        - ./4-puts
  
* Repeat with other files or projects

## WARNING!

* This repo is done as a school assignment. Beware of copying my responses. I recommend you to read resources and come up with your own solutions instead. Feel free to reach out for help!
* This repo may contain some errors. If you notice any, please add a pull request.



## Author

- [Bakare Muideen Adeleke](https://www.github.com/adeleke123)
- [Linkedin](https://www.linkedin.com/in/muideenadeleke)


## Acknowledgements
All work contained in this project was completed as part of the curriculum for ALX Africa Software Engineering program built upon Holberton School projects and materials. Holberton School is a campus-based full-stack software engineering program that prepares students for careers in the tech industry using project-based peer learning.


## Credits

For more information, visit this link.
* [ALX](https://www.alxafrica.com/)
* [Holberton School](https://www.holbertonschool.com/)
=======
0x11. C - printf
================

-   By Julien Barbier, co-founder & CEO


Concepts
---------

*For this project, students are expected to look at these concepts:*

- [Printf function brief - What to know to create your own Printf function](https://intranet.alxswe.com/concepts/100034)
- [All about Team Projects + Pairings + FAQ (A must read)](https://intranet.alxswe.com/concepts/100037)
- [Group Projects](https://intranet.alxswe.com/concepts/111)
- [Flowcharts](https://intranet.alxswe.com/concepts/130)
- [Pair Programming - How To](https://intranet.alxswe.com/concepts/121)
- [Technical Writing](https://intranet.alxswe.com/concepts/225)

Background Context
------------------

Write your own `printf` function.

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/228/printf.png)

* In this picture, [Kris](https://alx-intranet.hbtn.io/rltoken/pSPZEmqi5O8ZoeLM5-65WA "Kris"), and [Jul](https://alx-intranet.hbtn.io/rltoken/X_vDffLlUpbtqnubfnQx8Q "Jul")*

Resources
---------

**Read or watch**:

-   [Secrets of printf](https://alx-intranet.hbtn.io/rltoken/gxdsTXxWMklkBTgY197HYQ "Secrets of printf")
-   **Group Projects** concept page (*Don't forget to read this*)
-   **Flowcharts** concept page

**man or help**:

-   `printf (3)`

Requirements
------------

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is mandatory
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
-   The prototypes of all your functions should be included in your header file called `main.h`
-   Don't forget to push your header file
-   All your header files should be include guarded
-   Note that we will not provide the `_putchar` function for this project


More Info
---------

### Authorized functions and macros

-   `write` (`man 2 write`)
-   `malloc` (`man 3 malloc`)
-   `free` (`man 3 free`)
-   `va_start` (`man 3 va_start`)
-   `va_end` (`man 3 va_end`)
-   `va_copy` (`man 3 va_copy`)
-   `va_arg` (`man 3 va_arg`)

### Compilation

-   Your code will be compiled this way:

```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

```

-   As a consequence, be careful not to push any c file containing a `main` function in the root directory of your project (you could have a `test` folder containing all your tests files including `main` functions)
-   Our main files will include your main header file (`main.h`): `#include main.h`
-   You might want to look at the gcc flag `-Wno-format` when testing with your `_printf` and the standard `printf`. Example of test file that you could use:

```
alex@ubuntu:~/c/printf$ cat main.c
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$

```

-   We strongly encourage you to work all together on a set of tests
-   If the task does not specify what to do with an edge case, do the same as `printf`

Tasks
-----

### 0\. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

mandatory

Write a function that produces output according to a format.

-   Prototype: `int _printf(const char *format, ...);`
-   Returns: the number of characters printed (excluding the null byte used to end output to strings)
-   write output to stdout, the standard output stream
-   `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail. You need to handle the following conversion specifiers:
    -   `c`
    -   `s`
    -   `%`
-   You don't have to reproduce the buffer handling of the C library `printf` function
-   You don't have to handle the flag characters
-   You don't have to handle field width
-   You don't have to handle precision
-   You don't have to handle the length modifiers

**Repo:**

-   GitHub repository: `printf`

### 1\. Education is when you read the fine print. Experience is what you get if you don't

mandatory

Handle the following conversion specifiers:

-   `d`
-   `i`
-   You don't have to handle the flag characters
-   You don't have to handle field width
-   You don't have to handle precision
-   You don't have to handle the length modifiers

**Repo:**

-   GitHub repository: `printf`

  ### * Just because it's in print doesn't mean it's the gospel

#### mandatory

Create a man page for your function.

**Repo:**

-   GitHub repository: `printf`
-   File: `man_3_printf`

### 2\. With a face like mine, I do better in print
#### advanced

Handle the following custom conversion specifiers:

- `b`: the unsigned int argument is converted to binary
```
alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 98);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
1100010
alex@ubuntu:~/c/printf$
```

**Repo:**

-    GitHub repository: `printf`
    
### 3\. What one has not experienced, one will never understand in print
#### advanced

Handle the following conversion specifiers:

-  `u`
-  `o`
-  `x`
-  `X`
-  You don’t have to handle the flag characters
-  You don’t have to handle field width
-  You don’t have to handle precision
-  You don’t have to handle the length modifiers

**Repo:**

-  GitHub repository: `printf`
    
### 4\. Nothing in fine print is ever good news
### advanced
Score: 99.57% (Checks completed: 100.0%)
Use a local buffer of 1024 chars in order to call `write` as little as possible.

**Repo:**

-  GitHub repository: `printf`
    
### 5\. My weakness is wearing too much leopard print
### advanced
Score: 71.18% (Checks completed: 100.0%)
Handle the following custom conversion specifier:

- `S` : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: `\x`, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
```
alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%S\n", "Best\nSchool");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
Best\x0ASchool
alex@ubuntu:~/c/printf$
```
**Repo:**

-  GitHub repository:  `printf`
    
### 6\. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
#### advanced
Score: 70.35% (Checks completed: 100.0%)
Handle the following conversion specifier: `p`.

-  You don’t have to handle the flag characters
-  You don’t have to handle field width
-  You don’t have to handle precision
-  You don’t have to handle the length modifiers

**Repo:**

- GitHub repository: `printf`
    
### 7\. The big print gives and the small print takes away
#### advanced
Score: 65.0% (Checks completed: 100.0%)
Handle the following flag characters for non-custom conversion specifiers:

-  +
-  space
-  #

**Repo:**

-  GitHub repository: `printf`
    
### 8\. Sarcasm is lost in print
#### advanced
Score: 65.47% (Checks completed: 100.0%)

Handle the following length modifiers for non-custom conversion specifiers:

-  l
-  h
Conversion specifiers to handle: `d`, `i`, `u`, `o`, `x`, `X`

**Repo:**

-  GitHub repository: `printf`
    
### 9\. Print some money and give it to us for the rain forests
#### advanced
Score: 65.42% (Checks completed: 100.0%)
Handle the field width for non-custom conversion specifiers.

**Repo:**

-  GitHub repository: `printf`
    
### 10\. The negative is the equivalent of the composer's score, and the print the performance
#### advanced
Score: 63.87% (Checks completed: 97.62%)
Handle the precision for non-custom conversion specifiers.

**Repo:**

-  GitHub repository: `printf`
     
### 11\. It's depressing when you're still around and your albums are out of print
#### advanced
Score: 65.41% (Checks completed: 100.0%)
Handle the `0` flag character for non-custom conversion specifiers.

**Repo:**

-  GitHub repository: `printf`
    
### 12\. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
#### advanced

Handle the - flag character for non-custom conversion specifiers.

**Repo:**

-  GitHub repository: `printf`
    
### 13\. Print is the sharpest and the strongest weapon of our party    #advanced

Handle the following custom conversion specifier:

-  `r` : prints the reversed string

**Repo:**

-  GitHub repository: `printf`
    
### 14\. The flood of print has turned reading into a process of gulping rather than savoring
#### advanced
Score: 65.46% (Checks completed: 100.0%)
Handle the following custom conversion specifier:

-  `R`: prints the rot13'ed string

**Repo:**

-  GitHub repository: `printf`
    
### 15. #advanced

All the above options work well together.

Well done on completing this project! Let the world hear about this milestone achieved.

[Click here to tweet!](https://twitter.com/intent/tweet?text=I+have+successfully+completed+my+printf+project+on+%23ALX_SE+%40facesofalxse)

**Repo:**

- GitHub repository: `printf`
    
---
# Author: 
[Bakare Muideen Adeleke](https://github.com/adeleke123) and [Ughasi Peter](https://github.com/tynist)

