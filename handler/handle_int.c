#include "handler.h"

void	handle_int(t_arg *arg, long long int l)
{
	arg->prefix = 0;
	if (l < 0)
	{
		arg->sign = '-';
		handle_aint((unsigned long long int)(-1 * l), arg, "0123456789", 10);
	}
	else
		handle_aint((unsigned long long int)(l), arg, "0123456789", 10);
	print_pad(arg, -1);
}

void	handle_uint(unsigned long long int l, t_arg *arg, char *base, int lbase)
{
	arg->sign = '\0';
	if (l == 0)
		arg->prefix = 0;
	else if (lbase == 8 && arg->width && arg->pad_zeroes && !arg->right_pad)
		arg->prefix = 0;
	handle_aint(l, arg, base, lbase);
	print_pad(arg, -1);
}
void	handle_aint(unsigned long long int l, t_arg *arg, char *base, int lbase)
{
	if (l == 0)
	{
		print_precision(arg);
	}
	else
	{
		arg->size++;
		handle_aint(l/lbase,arg,base, lbase);
		ft_putchar(base[l%lbase]);
	}
}

void	print_precision(t_arg *arg)
{
	if (arg->size < arg->precision)
	{
		arg->size++;
		print_precision(arg);
		ft_putchar('0');
	}
	else
		print_sign_prefix(arg);
}

void	print_sign_prefix(t_arg *arg)
{
	if (arg->sign)
	{
		arg->size++;
		print_pad(arg, 0);
		ft_putchar(arg->sign);
	}
	else if (arg->prefix)
	{
		arg->size += ft_strlen(arg->str_prefix);
		print_pad(arg, 0);
		ft_putstr(arg->str_prefix);
	}
	else
		print_pad(arg, 0);
}
