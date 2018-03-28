#include "attr.h"

t_flag g_attr[] =	{
						{'#', attr_hash},
						{'0', attr_zero},
						{'-', attr_minus},
						{' ', attr_space},
						{'+', attr_plus},
						{'\0', NULL}
					};


void	arg_flag_attr(t_arg *arg, char **ptr)
{
	int		i;

	i = 0;
	while (g_attr[i].c && **ptr)
	{
		if (g_attr[i].c == **ptr)
		{
			g_attr[i].fonc(arg);
			(*ptr)++;
			i = -1;
		}
		i++;
	}
}
