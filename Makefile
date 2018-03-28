

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRCS =		ft_printf.c \
			conv/conv_int.c \
			conv/conv_char.c \
			conv/conv.c \
			conv/conv_uint.c \
			mod/mod2.c \
			mod/mod.c \
			mod/flag_mod.c \
			print.c \
			handler/handle_int.c \
			attr/attr.c \
			attr/flag_attr.c \
			flags.c \
			ft_f.c

OBJ = $(SRCS:.c=.o)

$(NAME):
	gcc $(CFLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean clean all

.PHONY: clean fclean
