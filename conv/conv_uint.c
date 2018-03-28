#include "conv.h"

void	conv_uint(va_list args, t_arg *arg, char *base, int lbase)
{
	if(arg->e_length == hh)
		handle_uint((char)va_arg(args, int), arg, base, lbase);
	else if (arg->e_length == h)
		handle_uint((unsigned short int)va_arg(args, int), arg, base, lbase);
	else if (arg->e_length == l)
		handle_uint(va_arg(args, unsigned long int), arg, base, lbase);
	else if (arg->e_length == ll)
		handle_uint(va_arg(args, unsigned long long  int), arg, base, lbase);
	else if (arg->e_length == j)
		handle_uint(va_arg(args, uintmax_t), arg, base, lbase);
	else if (arg->e_length == z)
		handle_uint(va_arg(args, size_t), arg, base, lbase);
	else if (arg->e_length == none)
		handle_uint(va_arg(args, unsigned int), arg, base, lbase);
}

void	conv_o(va_list args, t_arg *arg)
{
	arg->str_prefix = "0";
	conv_uint(args, arg, "01234567", 8);
}

void	conv_u(va_list args, t_arg *arg)
{
	arg->str_prefix = "";
	conv_uint(args, arg, "0123456789", 10);
}

void	conv_x(va_list args, t_arg *arg)
{
	arg->str_prefix = "0x";
	conv_uint(args, arg, "0123456789ABCDEF", 16);
}

void	conv_X(va_list args, t_arg *arg)
{
	arg->str_prefix = "0X";
	conv_uint(args, arg, "0123456789ABCDEF", 16);
}
