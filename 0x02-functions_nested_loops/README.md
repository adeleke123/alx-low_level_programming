# 0x02. C - Functions, nested loops
 **Weight: 1**

**Resources**
**Read or watch:**

- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
- [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw) (stop at 14:00)
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm) (stop before the “Once-Only Headers” paragraph)

Additional Resources
----------------------
- [C Programming Loops & Functions](https://www.youtube.com/watch?v=3i1IPkzFVcM)
- [Functions in C programming](https://www.youtube.com/watch?v=u40rF7zCYaQ)

Learning Objectives
-------------------
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), without the help of Google:

**General**
- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89`
- What are header files and how to to use them with `#include`

**Requirements**
**General**
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use [_putchar](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file



In this project, I learned about nested loops, header files, and variable scope
in C while practicing declaring and defining my own functions.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all
functions written in the project.

| File                     | Prototype                        |
| ------------------------ | -------------------------------- |
| `1-alphabet.c`           | `void print_alphabet(void);`     |
| `2-print_alphabet_x10.c` | `void print_alphabet_x10(void);` |
| `3-islower.c`            | `int _islower(int c);`           |
| `4-isalpha.c`            | `int _isalpha(int c);`           |
| `5-sign.c`               | `int print_sign(int n);`         |
| `6-abs.c`                | `int _abs(int);`                 |
| `7-print_last_digit.c`   | `int print_last_digit(int);`     |
| `8-24_hours.c`           | `void jack_bauer(void);`         |
| `9-times_table.c`        | `void times_table(void)`         |
| `10-add.c`               | `int add(int, int);`             |
| `11-print_to_98.c`       | `void print_to_98(int n);`       |
| `100-times_table.c`      | `void print_times_table(int n)`  |

## Tasks :page_with_curl:

* **0. _putchar**
  * [_putchar.c](./_putchar.c): C program that prints `_putchar`, followed by a
  new line. Returns 0.

* **1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
  * [1-alphabet.c](./1-alphabet.c): C function that prints the alphabet in lowercase,
  followed by a new line.

* **2. 10 x alphabet**
  * [2-print_alphabet_x10.c](./2-print_alphabet_x10.c): C function that prints the
  alphabet in lowercase 10 times, followed by a new line.

* **3. islower**
  * [3-islower.c](./3-islower.c): C function that checks for lowercase characters.
  Returns `1` if the character is lowercase, `0` otherwise.

* **4. isalpha**
  * [4-isalpha.c](./4-isalpha.c): C function that checks for alphabetic characters.
  Returns `1` if the character is a letter, `0` otherwise.

* **5. Sign**
  * [5-sign.c](./5-sign.c): C function that prints the sign of a number. Returns:
    * `1` and prints `+` if the number is greater than zero.
    * `0` and prints `0` if the number is zero.
    * `-1` and prints `-` if the number is less than zero.

* **6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you**
  * [6-abs.c](./6-abs.c): C function that returns the absolute value of an integer.

* **7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important**
  * [7-print_last_digit.c](./7-print_last_digit.c): C function that prints the last
  digit of a number. Returns the value of the last digit.

* **8. I'm federal agent Jack Bauer, and today is the longest day of my life**
  * [8-24_hours.c](./8-24_hours.c): C function that prints every minute of the day
  of Jack Bauer, starting from 00:00 to 23:59.

* **9. Learn your times table**
  * [9-times_table.c](./9-times_table.c): C function that prints the 9 times table,
  starting with 0.

* **10. a + b**
  * [10-add.c](./10-add.c): C function that returns the addition of two integers.

* **11. Holberton School, 98 Battery Street, San Francisco CA 94111**
  * [11-print_to_98.c](./11-print_to_98.c): C function that prints all natural numbers
  from an input to `98` followed by a new line, as follows:
    * Numbers are separated by a comma followed by a space.
    * Numbers are printed in order.
    * Input represents the number to begin counting from.
    * `98` is the last number printed.

* **12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself**
  * [100-times_table.c](./100-times_table.c): C function that prints the times table of
  an input value, starting with 0:
    * If input is greater than `15` or less than `0`, function prints nothing.

* **13. Nature made the natural numbers; All else is the work of women**
  * [101-natural.c](./101-natural.c): C program that computes and prints the sum of
  all multiples of `3` or `5` below `1024` (excluded).

* **14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A**
  * [102-fibonacci.c](./102-fibonacci.c): C program that prints the first 50
  Fibonacci numbers, starting with `1` and `2`, followed by a new line.
  Numbers are separated by a comma followed by a space.

* **15. Even Liber Abbaci**
  * [103-fibonacci.c](./103-fibonacci.c): C program that prints the sum of even-valued
  Fibonacci numbers not exceeding 4,000,000, followed by a new line.

* **16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+**
  * [104-fibonacci.c](./104-fibonacci.c): C program that prints the first 98 Fibonacci
  numbers, starting with `1` and `2`, followed by a new line, without using `long long`,
  `malloc`, pointers, arrays, structures, or any library besides the standard.
  Numbers are separated by a comma followed by a space.
