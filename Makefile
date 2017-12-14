.PHONY = all, clean, fclean, re

NAME = fillit

#		COMIPLATION

CC = gcc
CFLAGS = -Wall -Wextra -Werror


#		PATH

LIBFT = libft/libft.a
INCLUDE = fillit.h

SRCS = \
	      		ft_backtrack.c \
				ft_n_shape.c \
				ft_putdarray.c \
				ft_valid_shape.c \
				main.c \
				n_valid_fig.c \
				parsing_is_ok.c \
				usage.c \
				coor_form.c \
				ft_del_shape.c \
				ft_put_shape.c \
				ft_strfile.c \
				make_grid.c \
				parse.c \
				resolve.c \
				free_shape.c \
				free_grid.c \
				ft_shape_is_ok.c

OBJS = $(SRCS:.c=.o)

#		RULES

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

./%.o:./%.c
	$(CC) $(CFLAGS) -o $@ -c $<
	
$(LIBFT):
	make -C libft

clean:
	@rm -f $(OBJS)
	@make clean -C libft

fclean: clean
	@rm -f $(NAME)
	@make fclean -C libft

re: fclean all
