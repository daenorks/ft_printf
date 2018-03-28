#ifndef ATTR_H
# define ATTR_H

# include "../ft_printf.h"

void	attr_hash(t_arg *arg);
void	attr_zero(t_arg *arg);
void	attr_minus(t_arg *arg);
void	attr_space(t_arg *arg);
void	attr_plus(t_arg *arg);
void	arg_flag_conv(t_arg *arg, char **ptr);

extern t_flag g_attr[];
t_flag g_attr[] =	{
						{'#', attr_hash},
						{'0', attr_zero},
						{'-', attr_minus},
						{' ', attr_space},
						{'+', attr_plus},
						{'\0', NULL}
					};

#endif
