#include "../ft_printf.h"

int	ft_get_count_of_division(int divisor, unsigned int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / divisor;
		count++;
	}
	return (count);
}
