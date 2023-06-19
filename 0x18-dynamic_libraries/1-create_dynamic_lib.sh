#!/usr/bin/sh
gcc -Wall -Werror -Wextra -pedantic -fPIC *.c -shared -o liball.so
