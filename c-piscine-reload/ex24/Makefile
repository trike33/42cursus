# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfontbon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/05 12:16:16 by jfontbon          #+#    #+#              #
#    Updated: 2025/05/05 12:16:21 by jfontbon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCDIR = srcs
INCDIR = includes
OBJDIR = obj

# Library Name
NAME = libft.a

# Source and Object Files
SRC = $(wildcard $(SRCDIR)/*.c)
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Default rule
all: $(NAME)

# Create library from object files
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

# Compile .c files into .o files
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

# Remove object files
clean:
	@rm -rf $(OBJDIR)

# Remove object files and the library
fclean: clean
	@rm -f $(NAME)

# Rebuild everything
re: fclean all
