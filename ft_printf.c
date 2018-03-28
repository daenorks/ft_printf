#include "ft_printf.h"

void		arg_init(t_arg *arg)		
{
	arg->prefix = 0;
	arg->pad_zeroes = 0;
	arg->right_pad = 0;
	arg->got_precision = 0;
	arg->sign = '\0';
	arg->str_prefix = NULL;
	arg->width = 0;
	arg->precision = 1;
	arg->size = 0;
	arg->e_length = none;
}


size_t		arg_process(va_list args, char **ptr)
{
	t_arg		arg;

	(*ptr)++;
	if (**ptr == '%')
	{
		write(1, "%", 1);
		(*ptr)++;
		return (1);
	}
	arg_init(&arg);
	arg_flags(&arg, ptr);
	arg_conv(args, &arg, ptr);
	return(arg.size);
}

int			ft_printf(const char *format, ...)
{
	size_t		len;
	va_list		args;

	len = 0;
	if (format)
	{
		va_start(args, format);
		len = helper(args, format);
		va_end(args);
	}
	return (len);
}

size_t		helper(va_list args, const char *format)
{
	size_t		len;
	char		*ptr;
	char		*start;

	len = 0;
	ptr = (char *)format;
	start = (char *)format;
	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ft_putnstr(start, ptr - start);
			len += arg_process(args, &ptr);
			start = ptr;
		}
		else if (*ptr != '\0')
		{
			len++;
			ptr++;
		}
	}
	ft_putnstr(start, ptr - start);
	return (len);
}
