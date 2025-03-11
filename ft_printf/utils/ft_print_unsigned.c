#include "../ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int	num;

	if (n == 0)
		return (ft_print_char('0'));
	if (n / 10)
		ft_print_unsigned(n / 10);
	ft_putchar_fd((n % 10) + '0', 1);
	num = ft_get_count_of_division(10, n);
	return (num);
}
