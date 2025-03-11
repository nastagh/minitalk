/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:22:55 by amikhail          #+#    #+#             */
/*   Updated: 2024/10/24 16:28:13 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	s = src;
	d = dest;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		return (ft_memcpy(dest, src, n));
	}
	while (n--)
		d[n] = s[n];
	return (dest);
}
//The same like memcpy, but we can lost data, if src and dest the same string
//if dest < src  -> just copy
//if pointer src before dest, we can lose data and rewrite int ->
// we start at the end  n element