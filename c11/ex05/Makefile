# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: korojrat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 04:06:08 by korojrat          #+#    #+#              #
#    Updated: 2022/10/21 04:28:00 by korojrat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

MAIN_SRC	= main.c
EXECUTABLE	= do-op

SRC_DIR		= src

MAIN_OBJ	= $(SRC_DIR)/$(MAIN_SRC:.c=.o)
SOURCES		= $(wildcard $(SRC_DIR)/*.c)
OBJECTS		= $(patsubst %.c, %.o, $(SOURCES))

all: $(EXECUTABLE)

$(EXECUTABLE): $(MAIN_OBJ) $(OBJECTS)
	$(CC) $(CFLAGS) $(MAIN_OBJ) $(OBJECTS) -o $(EXECUTABLE)

$(MAIN_OBJ):
	$(CC) $(CFLAGS) -c $(MAIN_SRC) -o $(MAIN_OBJ)

$(OBJECTS): %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(SRC_DIR)/*.o

fclean: clean
	rm -rf $(EXECUTABLE)
