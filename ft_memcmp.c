/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:45:51 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/22 10:54:51 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*value1;
	unsigned char	*value2;

	i = 0;
	value1 = (unsigned char *)s1;
	value2 = (unsigned char *)s2;
	while ((*value1 && *value2) && i < n)
	{
		if (*(value1 + i) != *(value2 + i))
			return ((int)(*value1 - *value2));
		i++;
	}
	return (0);
}
