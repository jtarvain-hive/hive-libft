/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:47:28 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/23 15:07:06 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned char	*p;
	size_t			i;
	size_t			len;

	len = ft_strlen(s);
	i = 0;
	p = (unsigned char *)malloc((len + 1) * sizeof(unsigned char));
	if (!p)
		return (0);
	while (*(s + i))
	{
		*(p + i) = *(s + i);
		i++;
	}
	*(p + i) = 0;
	return (p);
}
