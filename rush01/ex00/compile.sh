#!/bin/sh
C_FLAG="-Wall -Wextra -Werror"
O_FILE="rush-01"
gcc $C_FLAG main.c -o $O_FILE
bash ~/git/piscine-2022/scripts/500baht.sh
