#include "conv.h"

t_conv g_conv[] =	{
						{'i', conv_i},
						{'d', conv_d},
						{'o', conv_o},
						{'u', conv_u},
						{'x', conv_x},
						{'X', conv_X},
						{'\0', NULL}
					};

void	arg_conv(va_list args, t_arg *arg, char **ptr)
{
	int		i;

	i = 0;
	while (g_conv[i].c && g_conv[i].c != **ptr)
		i++;
	if (g_conv[i].c == **ptr)
	{
		g_conv[i].fonc(args, arg);
		(*ptr)++;
	}
}
