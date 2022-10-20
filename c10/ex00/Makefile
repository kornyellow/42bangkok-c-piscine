CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC=ft_display_file.c
OBJ=ft_display_file.o
BIN=ft_display_file

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(BIN)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(BIN)
