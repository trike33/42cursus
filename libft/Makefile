# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfontbon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/05 13:45:00 by jfontbon          #+#    #+#              #
#    Updated: 2025/05/05 13:02:29 by jfontbon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRC		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		  ft_toupper.c ft_tolower.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		  ft_strncmp.c ft_atoi.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		  ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strdup.c ft_calloc.c ft_strchr.c ft_strrchr.c \
		  ft_substr.c ft_strjoin.c ft_strtrim.c

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

main: all main.c
	$(CC) $(CFLAGS) main.c $(NAME) -o main

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) main

re: fclean all
