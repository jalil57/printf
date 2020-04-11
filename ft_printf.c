int     ft_printf(const char *, ...)
{
    #include "ft_printf.h"

void	ft_printf2(char *format, ...)
{
	va_list	list;
	int		i;

	va_start(list, format);
	i = 0;
	while (format[i] != '\0')
	{
        va_arg()
        i++;
    }
}