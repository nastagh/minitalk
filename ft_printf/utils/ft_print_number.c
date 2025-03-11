#include "../ft_printf.h"

int	ft_print_number(int n)
{
	int	num;
	int	tmp;

	num = 0;
	tmp = n;
	if (n < 0 && n != -2147483648)
	{
		num++;
		tmp = -n;
	}
	if (n == -2147483648)
	{
		return (ft_print_string("-2147483648"));
	}
	ft_putnbr_fd(n, 1);
	num += ft_get_count_of_division(10, tmp);
	return (num);
}
