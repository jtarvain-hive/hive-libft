/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:20:34 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/06 17:44:02 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	strcount(const char *s, char c);
// static size_t	word_len(const char *s, char c, size_t *index);
// static char		*assign(const char *s, size_t start, size_t len);
// static void		alloc_strings(char **array, const char *s, char c, size_t strs);

static void		word_count(const char *s, char c, size_t *count);
static size_t	alloc_strs(char ***array, const char *s, char c, size_t l);
// static size_t	str_len(const char *s, char c, size_t *start);

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

// static size_t	str_len(const char *s, char c, size_t *start)
// {
// 	size_t	len;

// 	len = 0;
// 	while (s[*start] != '\0')
// 	{
// 		if (s[*start] == c)
// 			(*start)++;
// 		else
// 		{
// 			while (s[*start] != c && s[*start] != '\0')
// 			{
// 				len++;
// 				(*start)++;
// 			}
// 			while (s[*start] == c)
// 				(*start)++;
// 			return (len);
// 		}
// 	}
// 	return (len);
// }
// int main()
// {
// 	return 0;
// }

// /* Splits string 's' into an array of strings using delimiter 'c'*/
// char	**ft_split(const char *s, char c)
// {
// 	char	**strings;
// 	size_t	count;

// 	if (!s)
// 		return (0);
// 	count = strcount(s, c);
// 	strings = (char **)malloc((count + 1) * sizeof(char *));
// 	if (!strings)
// 		return (0);
// 	alloc_strings(strings, s, c, count);
// 	if (!strings)
// 	{
// 		free(strings);
// 		return (0);
// 	}
// 	strings[count] = 0;
// 	return (strings);
// }

// static size_t	strcount(const char *s, char c)
// {
// 	size_t	counter;

// 	counter = 0;
// 	while (*s)
// 	{
// 		if (*s == c)
// 			s++;
// 		else
// 		{
// 			counter++;
// 			while (*s != c)
// 				s++;
// 		}
// 	}
// 	return (counter);
// }

// static void	alloc_strings(char **array, const char *s, char c, size_t strs)
// {
// 	size_t	i;
// 	size_t	j;
// 	size_t	start;
// 	size_t	len;

// 	i = 0;
// 	j = 0;
// 	while (i < strs)
// 	{
// 		start = j;
// 		len = word_len(s, c, &j);
// 		array[i] = assign(s, start, len);
// 		if (!array[i])
// 		{
// 			while (i > 0)
// 				free(array[--i]);
// 			return ;
// 		}
// 		i++;
// 	}
// }

// static size_t	word_len(const char *s, char c, size_t *index)
// {
// 	size_t	len;

// 	len = 0;
// 	while (*(s + *index) != c && *(s + *index) != 0)
// 	{
// 		(*index)++;
// 		len++;
// 	}
// 	if (*(s + *index) == c || *(s + *index) == 0)
// 	{
// 		(*index)++;
// 		return (len);
// 	}
// 	else
// 		return (len);
// }

// static char	*assign(const char *s, size_t start, size_t len)
// {
// 	char	*new_str;
// 	size_t	i;

// 	i = 0;
// 	new_str = malloc((len + 1) * sizeof(char));
// 	if (!new_str)
// 		return (0);
// 	while (i < len)
// 	{
// 		*(new_str + i) = *(s + start + i);
// 		i++;
// 	}
// 	*(new_str + i) = 0;
// 	return (new_str);
// }

