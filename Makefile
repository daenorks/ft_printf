
#			conv/conv_char.c

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SRCS =		ft_printf.c \
			conv/conv_int.c \
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

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	gcc $(CFLAGS) -o $@ -c $<

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean clean all

.PHONY: clean fclean
