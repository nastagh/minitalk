/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:27:19 by amikhail          #+#    #+#             */
/*   Updated: 2024/11/21 15:05:46 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	get_count_of_words(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (i);
}

static char	*get_word(char	*trimed_s, char c)
{
	char	*sub;
	char	*last_occ;

	last_occ = ft_strrchr(trimed_s, c);
	if (last_occ == NULL)
		sub = trimed_s;
	else
		sub = ft_strtrim(last_occ, &c);
	return (sub);
}

static void	spliting(int j, char *trimed_s, char **word_array, char c)
{
	char	*sub;

	while (j >= 0)
	{
		sub = get_word(trimed_s, c);
		if (*sub)
			word_array[j--] = ft_strdup(sub);
		ft_bzero(trimed_s + ft_strlen(trimed_s) - ft_strlen(sub) - 1, 1);
		free(sub);
	}
}

char	**ft_split(const char *s, char c)
{
	char	**word_array;
	char	*trimed_s;
	int		j;

	j = get_count_of_words(s, c);
	word_array = (char **)malloc((j + 1) * sizeof(char *));
	if (!word_array)
		return (NULL);
	word_array[j] = NULL;
	if (j == 0)
		return (word_array);
	trimed_s = ft_strtrim(s, &c);
	if (j == 1)
		word_array[0] = trimed_s;
	else
	{
		j--;
		spliting (j, trimed_s, word_array, c);
	}
	return (word_array);
}
// Allocates (with malloc(3)) and returns an array
// of strings obtained by splitting ’s’ using the
// character ’c’ as a delimiter. The array must end
// with a NULL pointer.

// 1. count parts of word between "c" == word_array elements
// 2. if we dont'd have occurances => s
// 3. look for occurances and return pointer of the last
// (going at the end of word)
// 4. then trimed value of pointer that returns and push to array
// 5. replace subs in main string as 0 ("cutting")