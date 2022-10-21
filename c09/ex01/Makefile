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

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror

LIB				= ar
LIBFLAGS		= -rc
LIBRARY			= libft.a

SRCS_DIR		= srcs
INCLUDES_DIR	= includes

SOURCES		= $(wildcard $(SRCS_DIR)/*.c)
OBJECTS		= $(patsubst %.c, %.o, $(SOURCES))

all: $(LIBRARY)

re: fclean all

$(LIBRARY): $(OBJECTS)
	$(LIB) $(LIBFLAGS) $(LIBRARY) $(OBJECTS)

$(OBJECTS): %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(SRCS_DIR)/*.o

fclean: clean
	rm -rf $(LIBRARY)
