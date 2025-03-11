/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:23:13 by amikhail          #+#    #+#             */
/*   Updated: 2024/11/21 14:18:36 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	while (*tmp)
	{
		if (*tmp == (char)c)
			return (tmp);
		tmp++;
	}
	if (*tmp == (char)c)
		return (tmp);
	return (NULL);
}
// The function returns a pointer to the first occurrence 
// of the character c in the string s
// (*tmp == (char)c) when ft_strchr("tripouille", 0) ==s + strlen(s)->0 == '\0'
// (*tmp == (char)c) also when c = 1024 -> (char)c = '\0'