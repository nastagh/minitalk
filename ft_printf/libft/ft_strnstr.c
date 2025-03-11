/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:23:52 by amikhail          #+#    #+#             */
/*   Updated: 2024/10/24 16:23:54 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_len;

	i = 0;
	l_len = ft_strlen(little);
	if (l_len == 0)
		return ((char *)big);
	while (big[i] && i + l_len <= len)
	{
		if (ft_strncmp((big + i), little, l_len) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
// the first occurrence of the null-terminated string little in the string big, 
// where not more than len characters are searched.
// searches at most   len   characters