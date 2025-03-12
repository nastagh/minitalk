/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 14:06:34 by amikhail          #+#    #+#             */
/*   Updated: 2025/01/12 14:06:35 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
