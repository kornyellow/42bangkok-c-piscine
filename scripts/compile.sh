#!/bin/bash
I_FILE="$(find . -maxdepth 1 -name *.c | sed 's#.*/##')"
C_FLAG="-Wall -Werror -Wextra"
O_FILE="$(basename $I_FILE .c)"
gcc $C_FLAG $I_FILE -o $O_FILE && ./$O_FILE
rm $O_FILE
