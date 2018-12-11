#!/bin/bash
gcc -fPIC -Wall -pedantic -Werror -Wextra src/*.c -shared -o liball.so
