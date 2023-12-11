#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c -fPIC
gcc -shared -o liball.so *.o
rm *.o
