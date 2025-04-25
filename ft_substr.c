/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:08:00 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/25 10:54:17 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	while (i < len)
	{
		*(p + i) = *(s + start + i);
		i++;
	}
	*(p + i) = 0;
	return (p);
}
