#include "attr.h"

t_flag g_attr[];

void	arg_flag_attr(t_arg *arg, char **ptr)
{
	int		i;

	i = 0;
	while (g_attr[i].c && **ptr)
	{
		if (g_attr[i].c == **ptr)
		{
			g_attr[i].fonc(arg);
			*ptr++;
			i = -1;
		}
		i++;
	}
}
