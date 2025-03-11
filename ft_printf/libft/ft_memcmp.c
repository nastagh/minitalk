/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:22:26 by amikhail          #+#    #+#             */
/*   Updated: 2024/10/24 16:27:20 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (tmp1[i] == tmp2[i] && i < n - 1)
		i++;
	return (tmp1[i] - tmp2[i]);
}
// function campare s1 and s2, n size
// if s1 < s2 negative
// if s1 > s2 positive