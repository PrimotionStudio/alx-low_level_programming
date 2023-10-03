#!/bin/bash
gcc -c -o 0-isupper.o 0-isupper.c
gcc -c -o 0-memset.o 0-memset.c
gcc -c -o 0-strcat.o 0-strcat.c
gcc -c -o 1-isdigit.o 1-isdigit.c
gcc -c -o 1-memcpy.o 1-memcpy.c
gcc -c -o 1-strncat.o 1-strncat.c
gcc -c -o 100-atoi.o 100-atoi.c
gcc -c -o 2-strchr.o 2-strchr.c
gcc -c -o 2-strlen.o 2-strlen.c
gcc -c -o 2-strncpy.o 2-strncpy.c
gcc -c -o 3-islower.o 3-islower.c
gcc -c -o 3-puts.o 3-puts.c
gcc -c -o 3-strcmp.o 3-strcmp.c
gcc -c -o 3-strspn.o 3-strspn.c
gcc -c -o 4-isalpha.o 4-isalpha.c
gcc -c -o 4-strpbrk.o 4-strpbrk.c
gcc -c -o 5-strstr.o 5-strstr.c
gcc -c -o 6-abs.o 6-abs.c
gcc -c -o 9-strcpy.o 9-strcpy.c
gcc -c -o _putchar.o _putchar.c
ar rc liball.a *.o
