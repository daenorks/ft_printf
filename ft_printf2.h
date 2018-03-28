#ifndef FT_PRINTF2_H
# define FT_PRINTF2_H

# include <stdarg.h>
# include <wchar.h>
# include <unistd.h>
//# include "libft.h"

typedef struct		s_arg
{
	int				prefix : 1;
	int				pad_zeroes : 1;
	int				right_pad : 1;
	int				got_precision : 1;
	char			sign;
	char			*str_prefix;
	unsigned int	width;
	unsigned int	precision;
	int				size;
	enum {
		hh,
		h,
		none,
		l,
		ll,
		j,
		z,
		error
	}				e_length;
} 					t_arg;

typedef struct		s_flag {
	char			c;
	void			(*fonc)(t_arg *arg);
}					t_flag;

int			ft_printf(const char *format, ...);
size_t		helper(va_list args, const char *format);
void		arg_flags(t_arg *arg, char **ptr);
void		arg_flag_width(t_arg *arg, char **ptr);
void		arg_flag_precision(t_arg *arg, char **ptr);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_strlen(char *str);
void		ft_putnstr(char *str, int n);

#endif
