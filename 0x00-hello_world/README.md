# 0x00. C - Hello, World
`C`


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
man or help:

+ `gcc`
+ `printf (3)`
+ `puts`
+ `putchar`

In this project, I learned about compilation using `gcc`, entry
points using `main`, and text-printing functions in C. GCC is basically a C compiler.

## Tasks :page_with_curl:

* **0. Preprocessor**
  * [0-preprocessor](./0-preprocessor): Bash script that runs a C file saved in the
  variable `$CFILE` through the preprocessor and saves the result in the file `c`.

* **1. Compiler**
  * [1-compiler](./1-compiler): Bash script that compiles a C file saved in the
  variable `$CFILE` that does not link; saves the result in an output file of the
  same name but with a `.o` extension.
    * Example: If the C file is `main.c`, the output is `main.o`.

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
