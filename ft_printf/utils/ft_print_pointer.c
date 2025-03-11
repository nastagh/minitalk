#include "../ft_printf.h"

int	ft_print_hexadecimal_pointer(unsigned long n)
{
	int	num;

	num = 0;
	if (n / 16)
	{
		ft_print_hexadecimal_pointer(n / 16);
		ft_print_hexadecimal_pointer(n % 16);
	}
	else
	{
		if (n < 10)
			ft_print_char(n + '0');
		else
			ft_print_char(n - 10 + 'a');
	}
	while (n > 0)
	{
		n = n / 16;
		num++;
	}
	return (num);
}

int	ft_print_pointer(unsigned long ptr)
{
	int	num;

	num = 0;
	if (ptr == 0)
		return (ft_print_string("(nil)"));
	num += ft_print_string("0x");
	num += ft_print_hexadecimal_pointer(ptr);
	return (num);
}
