CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRC =	srcs/check.c srcs/check1.c srcs/ft_split.c srcs/ft_strlcpy.c srcs/ft_strlen.c \
		srcs/ft_substr.c srcs/utils.c srcs/utils1.c srcs/push_swap.c srcs/reverse_rotate.c \
		srcs/rotate.c srcs/swap.c srcs/push.c srcs/ft_strdup.c srcs/a_to_b.c srcs/b_to_a.c \
		srcs/else_it.c srcs/utils2.c srcs/cheapest_one.c

OBJ = $(SRC:.c=.o)
NAME = push_swap
LIBDIR = ft_printf
LIB = $(LIBDIR)/libftprintf.a

all: $(LIB) $(NAME) 

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIB)

%.o: %.c
	$(CC) $(CFLAGS) -I includes -c $< -o $@

$(LIB):
	$(MAKE) -C $(LIBDIR) all

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBDIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBDIR) fclean

re: fclean all

.PHONY: all clean fclean re