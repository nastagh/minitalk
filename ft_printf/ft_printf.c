#include "ft_printf.h"

int	ft_check_format(char *str, va_list args)
{
	int	num;

	num = 0;
	if (*str == 'c')
		num += ft_print_char(va_arg(args, int));
	else if (*str == 's')
		num += ft_print_string(va_arg(args, char *));
	else if (*str == 'd' || *str == 'i')
		num += ft_print_number(va_arg(args, int));
	else if (*str == 'u')
		num += ft_print_unsigned(va_arg(args, unsigned int));
	else if (*str == 'x' || *str == 'X')
		num += ft_print_hexadecimal(va_arg(args, unsigned int), str);
	else if (*str == 'p')
		num += ft_print_pointer(va_arg(args, unsigned long));
	else
		num += ft_print_char(*str);
	return (num);
}

int	get_full_length(char *str, va_list args)
{
	int	num;

	num = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			num += ft_check_format(str, args);
		}
		else
		{
			num += ft_print_char(*str);
		}
		str++;
	}
	return (num);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		num;
	char	*str;

	if (!format || *format == '\0')
		return (0);
	str = ft_strdup(format);
	va_start(args, format);
	num = get_full_length(str, args);
	va_end(args);
	free(str);
	return (num);
}
