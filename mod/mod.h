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

#endif
