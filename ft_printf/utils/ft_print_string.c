#include "../ft_printf.h"

int	ft_print_string(char *str)
{
	int	num;

	num = 0;
	if (str == NULL)
		return (ft_print_string("(null)"));
	while (*str)
	{
		num += ft_print_char(*str);
		str++;
	}
	return (num);
}
