/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:23:20 by amikhail          #+#    #+#             */
/*   Updated: 2024/10/24 16:23:23 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dst);
	if (len_dest >= dstsize)
	{
		len_dest = dstsize;
	}
	else
	{
		while (i < dstsize - len_dest - 1 && src[i])
		{
			dst[len_dest + i] = src[i];
			i++;
		}
		dst[len_dest + i] = '\0';
	}
	return (len_dest + len_src);
}
//  copy src -> dst and return full size of buffer
// function appends the NUL-terminated string src to the end of dst.
// It will append at most size - strlen(dst) - 1 bytes,
// NUL-terminating the result