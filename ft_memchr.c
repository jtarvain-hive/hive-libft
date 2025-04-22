/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:54:08 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/18 20:46:35 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*byte;

	i = 0;
	byte = (unsigned char *)s;
	while (i < n)
	{
		if (*(byte + i) == (unsigned char)c)
			return ((void *)(byte + i));
		i++;
	}
	return (0);
}
