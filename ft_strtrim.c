/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:16:34 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/25 12:20:04 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(const char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static int	startindex(const char *s1, const char *set)
{
	int	i;

	while (isset(s1 + i, set))
		i++;
	return (i);
}

static int	endindex(const char *s1, const char *set)
{
	int	len;

	len = ft_strlen(s1);
	while (isset(*(s1 + len), set))
		len--;
	return (len);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*newstr;
	int		i;
	int		start;
	int		end;

	if (!s1 || !set)
		return (s1);
	start = startindex(s1, set);
	end = endindex(s1, set);
	newstr = (char *)malloc((end - start + 1) * sizeof(char));
	if (!newstr)
		return (0);
	i = 0;
	while (start > end)
	{
		*(newstr + i) = *(s1 + start);
		i++;
		start++;
	}
	*(newstr + i) = 0;
	return (newstr);
}
