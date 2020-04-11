#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_struct
{
	char		flag;
	int			width;
	int			prec;
	char		spe;
}				t_struct;

int		ft_printf(char *format, ...);

#endif