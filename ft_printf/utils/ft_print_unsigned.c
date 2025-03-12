/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 14:06:39 by amikhail          #+#    #+#             */
/*   Updated: 2025/01/12 14:06:40 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
