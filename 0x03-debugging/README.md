0x03. C - Debugging
===================

-   By Carrie Ybay
-   Ongoing project - started 08-31-2021, must end by 09-03-2021 (in 1 day) - you're done with 0% of tasks.
-   Checker was released at 09-01-2021 12:00 PM
-   QA review fully automated.

Resources
---------

**Read or watch:**

-   [Debugging](https://alx-intranet.hbtn.io/rltoken/faGcpiJiejHH6GhqpmbhUw "Debugging")
-   [Rubber Duck Debugging](https://alx-intranet.hbtn.io/rltoken/RaecqJBNkmZ92vLMpNDuGg "Rubber Duck Debugging")

Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as `gdb` or built-in tools that IDEs have. However, it's important to understand the concepts and processes of debugging manually.

![image](https://github.com/user-attachments/assets/d869a355-bb40-4a88-8936-b19be6663a0c)

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to anyone](https://alx-intranet.hbtn.io/rltoken/fbQbYSz0Qxw5MEyb6yR05w "explain to anyone"), without the help of Google:

### General

-   What is debugging
-   What are some methods of debugging manually
-   How to read the error messages

Requirements
------------

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`
-   A README.md file at the root of the repo, containing a description of the repository
-   A README.md file, at the root of the folder of this project (i.e. `0x03-debugging`), describing what this project is about

Tasks
------
- **0. Multiple mains**
In most projects, we often give you only one main file to test with. For example, this main file is a test for a `postitive_or_negative()` function similar to the one you worked with in [an earlier C project:](https://intranet.alxswe.com/rltoken/lKcOFkG-GCivSDXgWgld2g)

```
carrie@ubuntu:/debugging$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
carrie@ubuntu:/debugging$
```

```
carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */
carrie@ubuntu:/debugging$ 

```

```
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
carrie@ubuntu:/debugging$ ./a.out
98 is positive
carrie@ubuntu:/debugging$
```

- Based on the `main.c` file above, create a file named `0-main.c`. This file must test that the function `positive_or_negative()` gives the correct output when given a case of `0`.

- You are not coding the solution / function, you’re just testing it! However, you can adapt your function from [0x01. C - Variables, if, else, while - Task #0](https://intranet.alxswe.com/rltoken/lKcOFkG-GCivSDXgWgld2g) to compile with this main file to test locally.

* You only need to upload `0-main.c` and `main.h` for this task. We will provide our own `positive_or_negative()` function.
* You are not allowed to add or remove lines of code, you may change only **one** line in this task.

```
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
carrie@ubuntu:/debugging$ ./0-main
0 is zero
carrie@ubuntu:/debugging$ wc -l 0-main.c
16 1-main.c
carrie@ubuntu:/debugging$ 

```

**Repo:**

- GitHub repository: `alx-low_level_programming`
- Directory: `0x03-debugging`
- File: `0-main.c`, `main.h`
