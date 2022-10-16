#!/bin/bash
I_FILE="$(find . -maxdepth 1 -name *.c | sed 's#.*/##')"
C_FLAG="-Wall -Werror -Wextra"
O_FILE="$(basename $I_FILE .c)"

gcc $C_FLAG $I_FILE -o $O_FILE

if [ $? -eq 0 ];
then
	bash ~/git/piscine-2022/scripts/500baht.sh
fi

