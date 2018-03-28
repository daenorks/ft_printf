#ifndef MOD_H
# define MOD_H
# include "../ft_printf.h"

void			mod_h(t_arg *arg);
void			mod_l(t_arg *arg);
void			mod_j(t_arg *arg);
void			mod_z(t_arg *arg);
void			mod_hh(t_arg *arg);
void			mod_ll(t_arg *arg);
void			arg_flag_mod(t_arg *arg, char **ptr);
void			arg_flag_mod1(t_arg *arg, char **ptr);
void			arg_flag_mod2(t_arg *arg, char **ptr);

extern t_flag	g_mod[];
extern t_flag	g_mod2[];
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

#endif
