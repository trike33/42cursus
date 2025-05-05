# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Target name
NAME = ft_display_file

# Source and object files
SRC = ft_display_file.c
OBJ = $(SRC:.c=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

