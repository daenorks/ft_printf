void	print_pad(t_arg *arg, int test)
{
	char c;

	c = ' ';
	if (arg->right_pad == test)
	{
		if (arg->pad_zeroes && !arg_right_pad)
			c = '0';
		while (arg->size < arg->width)
		{
			arg->size++;
			ft_putchar(c);
		}
	}
}
