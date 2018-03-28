#ifndef CONV_H
# define CONV_H
# include "../ft_printf.h"

void				conv_i(va_list args, t_arg *arg);
void				conv_d(va_list args, t_arg *arg);
void				conv_uint(va_list args, t_arg *arg, char *base, int lbase);
void				conv_aint(va_list args, t_arg *arg, char *base, int lbase);
void				conv_int(va_list args, t_arg *arg);
void				conv_o(va_list args, t_arg *arg);
void				conv_u(va_list args, t_arg *arg);
void				conv_x(va_list args, t_arg *arg);
void				conv_X(va_list args, t_arg *arg);
void				arg_conv(va_list args, t_arg *arg, char **ptr);

typedef struct		s_conv {
	char			c;
	void			(*fonc)(va_list args, t_arg *arg);
}					t_conv;

#endif
