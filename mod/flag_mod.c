#include "mod.h"

t_flag 			g_mod[] =	{
								{'h', mod_h},
								{'l', mod_l},
								{'j', mod_j},
								{'z', mod_z},
								{'\0', NULL}
							};

t_flag 			g_mod2[] =	{
								{'h', mod_hh},
								{'l', mod_ll},
								{'\0', NULL}
							};

void	arg_flag_mod1(t_arg *arg, char **ptr)
{
	int		i;

	i = -1;
	while (**ptr && g_mod[++i].c && **ptr != g_mod[i].c)
		;
	if (**ptr == g_mod[i].c)
	{
		(*ptr)++;
		g_mod[i].fonc(arg);
	}
}

void	arg_flag_mod2(t_arg *arg, char **ptr)
{
	int		i;

	i = -1;
	while (**ptr && g_mod2[++i].c && **ptr != g_mod2[i].c)
		;
	if (**ptr == g_mod2[i].c)
	{
		(*ptr)++;
		g_mod2[i].fonc(arg);
	}
}

void	arg_flag_mod(t_arg *arg, char **ptr)
{
	arg_flag_mod1(arg, ptr);
	if (arg->e_length == h || arg->e_length == l)
		arg_flag_mod2(arg, ptr);
}
