#include "conv.h"

t_conv g_conv[];

void	arg_conv(va_list args, t_arg *arg, char **ptr)
{
	int		i;

	i = 0;
	while (g_conv[i].c && g_conv[i].c != **ptr)
		i++;
	if (g_conv[i] == **ptr)
	{
		g_conv[i].fonc(args, arg);
		*ptr++;
	}
}
