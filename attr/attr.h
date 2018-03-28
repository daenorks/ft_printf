#ifndef ATTR_H
# define ATTR_H

# include "../ft_printf.h"

void	attr_hash(t_arg *arg);
void	attr_zero(t_arg *arg);
void	attr_minus(t_arg *arg);
void	attr_space(t_arg *arg);
void	attr_plus(t_arg *arg);
void	arg_flag_attr(t_arg *arg, char **ptr);

#endif
