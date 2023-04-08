#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar arc liball.a *.o
ranlib liball.a
