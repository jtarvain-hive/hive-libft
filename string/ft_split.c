/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:20:34 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/08 10:23:59 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		word_count(const char *s, char c, size_t *count);
static size_t	alloc_strs(char ***array, const char *s, char c, size_t l);

/* Splits string 's' into an array of strings using delimiter 'c'*/
char	**ft_split(const char *s, char c)
{
	char	**array;
	size_t	len;

	if (!s)
		return (NULL);
	word_count(s, c, &len);
	array = (char **)malloc((len + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array[len] = NULL;
	if (len > 0 && !alloc_strs(&array, s, c, len))
	{
		free(array);
		return (NULL);
	}
	return (array);
}

static void	word_count(const char *s, char c, size_t *count)
{
	*count = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			(*count)++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
}

static size_t	alloc_strs(char ***array, const char *s, char c, size_t l)
{
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	start = 0;
	while (i < l)
	{
		while (s[start] == c && s[start] != '\0')
			start++;
		len = 0;
		while (s[start + len] != c && s[start + len] != '\0')
			len++;
		(*array)[i] = ft_substr(s, start, len);
		if (!(*array)[i])
		{
			while (i > 0)
				free((*array)[--i]);
			return (0);
		}
		start += len;
		i++;
	}
	return (1);
}
