#include "conv.h"

void	conv_i(va_list args, t_arg *arg)
{
	conv_d(args, arg);
}

void	conv_d(va_list args, t_arg *arg)
{
	if(arg->e_length == hh)
		handle_int(arg, va_arg(args, signed char));
	else if (arg->e_length == h)
		handle_int(arg, va_arg(args, signed short int));
	else if (arg->e_length == l)
		handle_int(arg, va_arg(args, signed long int));
	else if (arg->e_length == ll)
		handle_int(arg, va_arg(args, signed long long  int));
	else if (arg->e_length == j)
		handle_int(arg, va_arg(args, intmax_t));
	else if (arg->e_length == z)
		handle_int(arg, va_arg(args, ssize_t));
	else if (arg->e_length == none)
		handle_int(arg, va_arg(args, signed int));
}
