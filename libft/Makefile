# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albarbos <albarbos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/05 13:57:18 by albarbos          #+#    #+#              #
#    Updated: 2017/12/05 13:57:20 by albarbos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = gcc
CC_FLAGS = -Wall -Wextra -Werror
NAME = libft.a
PATH_SRC = ./
PATH_OBJ = ./
PATH_INC = ./
FILES =\
	   ft_putchar.c \
	   ft_strlen.c \
	   ft_bzero.c \
	   ft_ignoreblank.c \
	   ft_putstr.c \
	   ft_memalloc.c \
	   ft_strcpy.c \
	   ft_strdup.c \
	   ft_strncpy.c \
	   ft_memset.c \
	   ft_strndup.c \
	   ft_swap.c \
	   ft_sqrt.c \
	   ft_next_sqrt.c \
	   ft_strdel.c \

	OBJ = $(addprefix $(PATH_OBJ), $(FILES:.c=.o))
	SRC = $(addprefix $(PATH_SRC), $(FILES))
	INC = $(addprefix $(PATH_INC), libft.h)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(PATH_OBJ)%.o: $(PATH_SRC)%.c
	@$(CC) $(CC_FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
