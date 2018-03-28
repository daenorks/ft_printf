#include "attr.h"

void	attr_hash(t_arg *arg)
{
	arg->prefix = 1;
}

void	attr_zero(t_arg *arg)
{
	arg->pad_zeroes = 1;
}

void	attr_minus(t_arg *arg)
{
	arg->right_pad = 1;
}

void	attr_space(t_arg *arg)
{
	if (arg->sign != '+')
		arg->sign = ' ';
}

void	attr_plus(t_arg *arg)
{
	arg->sign = '+';
}
