#!/bin/bash

# Create a static library from all .c files in the current directory

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar rc liball.a *.o
ranlib liball.a
