#!/bin/bash
I_FILE="$(find . -maxdepth 1 -name *.c | sed 's#.*/##')"
C_FLAG="-Wall -Werror -Wextra"
O_FILE="$(basename $I_FILE .c)"

gcc $C_FLAG $I_FILE -o $O_FILE

if [ $? -eq 0 ];
then
	tput setaf 3; tput bold; cat ~/git/piscine-2022/scripts/success.txt
	afplay ~/sounds/rub_500_baht.wav &
fi

