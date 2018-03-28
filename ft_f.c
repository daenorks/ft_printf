#include "ft_printf2.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		len;

	len = ft_strlen(str);
	write(1, str, len);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnstr(char *str, int n)
{
	write(1, str, n);
}

int		ft_isnumber(char c)
{
	return (c >= '0' && c <= '9');
}
