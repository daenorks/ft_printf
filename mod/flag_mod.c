#include "mod.c"

void	arg_flag_mod1(t_arg *arg, char **ptr)
{
	int		i;

	i = -1;
	while (**ptr && g_mod[++i].c && **ptr != g_mod[i].c)
		;
	if (**ptr == g_mod[i].c)
	{
		*ptr++;
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
		*ptr++;
		g_mod2[i].fonc(arg);
	}
}

void	arg_flag_mod(t_arg *arg, char **ptr)
{
	arg_flag_mod1(arg, ptr);
	if (arg->e_length = h || arg->e_length = l)
		arg_flag_mod2(arg, ptr);
}
