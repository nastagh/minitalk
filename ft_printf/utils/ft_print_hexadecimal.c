/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 14:06:20 by amikhail          #+#    #+#             */
/*   Updated: 2025/01/12 14:06:21 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_hexadecimal(unsigned int n, char *letter)
{
	int	num;

	if (n == 0)
		return (ft_print_char('0'));
	if (n / 16)
	{
		ft_print_hexadecimal(n / 16, letter);
		ft_print_hexadecimal(n % 16, letter);
	}
	else
	{
		if (n < 10)
			ft_print_char(n + '0');
		else
		{
			if (*letter == 'x')
				ft_print_char(n - 10 + 'a');
			else
				ft_print_char(n - 10 + 'A');
		}
	}
	num = ft_get_count_of_division(16, n);
	return (num);
}
