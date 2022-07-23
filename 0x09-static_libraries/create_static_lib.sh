#!/bin/bash
gcc -wall -wextra -pedantic -c *.c
ar rc liball.a *.o
