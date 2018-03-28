#include "ft_printf.h"

void		arg_flags(t_arg *arg, char **ptr)
{
	arg_flag_attr(arg, ptr);
	arg_flag_width(arg, ptr);
	arg_flag_precision(arg, ptr);
	arg_flag_mod(arg, ptr);
}

void		arg_flag_width(t_arg *arg, char **ptr)
{
	if ('1' <= **ptr && '9' >= **ptr)
	{
		while (ft_isnumber(**ptr))
		{
			arg->width = arg->width * 10 + **ptr - '0';
			(*ptr)++;
		}
	}
}
void		arg_flag_precision(t_arg *arg, char **ptr)
{
	if (**ptr == '.')
	{
		arg->got_precision = 1;
		arg->precision = 0;
		(*ptr)++;
		if (**ptr == '-')
			while (ft_isnumber(*(++(*ptr))))
				;
		else if (**ptr >= '1' && **ptr <= '9')
		{
			while (ft_isnumber(**ptr))
			{
				arg->precision = arg->precision * 10 + **ptr - '0';
				(*ptr)++;
			}
		}
	}
}
