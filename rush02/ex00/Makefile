# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: korojrat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 04:06:08 by korojrat          #+#    #+#              #
#    Updated: 2022/10/24 11:01:28 by korojrat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= cc
CFLAGS		= -Wall -Wextra -Werror

MAIN_SRC	= main.c
EXECUTABLE	= rush-02

SRC_DIR		= srcs
INC_DIR		= includes

MAIN_OBJ	= $(SRC_DIR)/$(MAIN_SRC:.c=.o)
INCLUDES	= $(wildcard $(INC_DIR)/*.h)
SOURCES		= $(wildcard $(SRC_DIR)/*.c)
OBJECTS		= $(patsubst %.c, %.o, $(SOURCES))

all: $(EXECUTABLE)

$(EXECUTABLE): $(MAIN_OBJ) $(OBJECTS)
	$(CC) $(CFLAGS) $(MAIN_OBJ) $(OBJECTS) -o $(EXECUTABLE)

$(MAIN_OBJ): $(MAIN_SRC) $(INCLUDES)
	$(CC) $(CFLAGS) -c $(MAIN_SRC) -o $(MAIN_OBJ)

$(OBJECTS): %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -rf $(SRC_DIR)/*.o

fclean: clean
	rm -rf $(EXECUTABLE)
