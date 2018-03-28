#ifndef HANDLER_H
# define HANDLER_H
# include "../ft_printf.h"

void	handle_int(t_arg *arg, long long int l);
void	handle_uint(unsigned long long int l, t_arg *arg, char *base, int lbase);
void	handle_aint(unsigned long long int l, t_arg *arg, char *base, int lbase);
void	print_precision(t_arg *arg);
void	print_sign_prefix(t_arg *arg);

#endif
