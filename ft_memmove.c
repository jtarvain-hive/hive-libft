/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:39:09 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/22 11:57:15 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)d;
	s = (unsigned char *)s;
	if (s < d && s + n >= d)
	{
		i = n;
		while (i > 0)
		{
			*(d + i - 1) = *(s + i - 1);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	return (dest);
}
