#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o

# Display the output
ls *.c
nm -D --defined-only liball.so
