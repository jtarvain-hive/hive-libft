/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:16:34 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/30 13:59:59 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(const char c, const char *set);
static int	start_index(const char *s1, const char *set);
static int	end_index(const char *s1, const char *set);

/* Returns a new string without 'set' characters from each end of the string*/
char	*ft_strtrim(const char *s1, const char *set)
{
	char	*new_str;
	int		i;
	int		start;
	int		end;

	if (!s1 || !set)
		return ((char *)s1);
	start = start_index(s1, set);
	end = end_index(s1, set);
	new_str = (char *)malloc((end - start + 1) * sizeof(char));
	if (!new_str)
		return (0);
	i = 0;
	while (start > end)
	{
		*(new_str + i) = *(s1 + start);
		i++;
		start++;
	}
	*(new_str + i) = 0;
	return (new_str);
}

static int	is_set(const char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static int	start_index(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (is_set(*(s1 + i), set))
		i++;
	return (i);
}

static int	end_index(const char *s1, const char *set)
{
	int	len;

	len = ft_strlen(s1);
	while (is_set(*(s1 + len), set))
		len--;
	return (len);
}
