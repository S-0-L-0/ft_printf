NAME = libftprintf.a

SOURCES = ft_printf.c ft_put_upp_hex.c ft_put_low_hex.c ft_pointer.c \
ft_putnbr.c ft_put_uns_nbr.c ft_putchar.c ft_putstr.c

OBJS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)
 
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)


clean:
	rm -f $(OBJS) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re