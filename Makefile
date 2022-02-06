NAME = libftprintf.a
HEADER = ft_printf.h
LIBFT = libft/libft.a

FUNCTIONS = ft_printf.c ft_print_decimal.c ft_input_checker.c ft_print_str.c \
ft_print_ptr.c ft_putnbr.c ft_putchar.c ft_putnbr_base.c ft_putstr.c

FUNCTIONS_OBJ=$(FUNCTIONS:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT) $(FUNCTIONS_OBJ)
	cp $(LIBFT) $(NAME)
	ar -rsc $(NAME) $(FUNCTIONS_OBJ)

$(LIBFT):
	make -C libft

clean:
	rm -f $(FUNCTIONS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean re
