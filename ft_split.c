/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:20:34 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/28 10:43:57 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strcount(const char *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			counter++;
			while (*s != c)
				s++;
		}
	}
	return (counter);
}

static size_t	wordlen(const char *s, char c, size_t *index)
{
	size_t	wordlen;

	wordlen = 0;
	while (*(s + *index) != c && *(s + *index) != 0)
	{
		(*index)++;
		wordlen++;
	}
	if (*(s + *index) == c || *(s + *index) == 0)
	{
		(*index)++;
		return (wordlen);
	}
	else
		return (wordlen);
}

static char	*assign(const char *s, size_t start, size_t len)
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (0);
	while (i < len)
	{
		*(new_str + i) = *(s + start + i);
		i++;
	}
	*(new_str + i) = 0;
	return (new_str);
}

static void	allocstrings(char **array, const char *s, char c, size_t strs)
{
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	len;

	i = 0;
	j = 0;
	while (i < strs)
	{
		start = j;
		len = wordlen(s, c, &j);
		array[i] = assign(s, start, len);
		if (!array[i])
		{
			while (i > 0)
				free(array[--i]);
			return ;
		}
		i++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**strings;
	size_t	count;

	if (!s)
		return (0);
	count = strcount(s, c);
	strings = (char **)malloc((count + 1) * sizeof(char *));
	if (!strings)
		return (0);
	allocstrings(strings, s, c, count);
	if (!strings)
	{
		free(strings);
		return (0);
	}
	strings[count] = 0;
	return (strings);
}
