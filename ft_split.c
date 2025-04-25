/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:20:34 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/25 15:57:10 by jtarvain         ###   ########.fr       */
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
static size_t	wordcount(const char *s, char c, size_t *index)
{

}	

static void	callocstrings(char **array, const char *s, char c, size_t strs)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	while (i < strs + 1)
	{
		array[i] = (char *)ft_calloc((wordcount(s, c, &k) + 1), sizeof(char));
		if (!array[i])
		{
			while (j < i)
			{
				free(array[j]);
				j++;
			}
		}
		i++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**strings;
	size_t	count;
	size_t	i;

	if (!s)
		return (0);
	count = strcount(s, c);
	strings = (char **)ft_calloc((count + 1), sizeof(char *));
	if (!strings)
		return (0);
	callocstrings(&strings, s, c, count);
	if (!strings)
	{
		free(strings);
		return (0);
	}
	strings[count] = 0;
	return (strings);
}
