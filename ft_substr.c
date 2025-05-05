/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:08:00 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/05 09:33:14 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Returns a substring from 's' starting from 'start' having max lenght of len*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	while (i < len && s[start + i])
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
