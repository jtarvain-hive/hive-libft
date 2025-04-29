/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:50:47 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/29 13:29:55 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies 'n' bytes from 'src' to 'dest'. The memory areas must not overlap.*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d_byte;
	unsigned char	*s_byte;

	i = 0;
	d_byte = (unsigned char *)dest;
	s_byte = (unsigned char *)src;
	while (i < n)
	{
		*(d_byte + i) = *(s_byte + i);
		i++;
	}
	return (dest);
}
