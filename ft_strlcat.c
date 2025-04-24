/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:22:42 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/24 11:06:11 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	if (size == 0)
		return (srclen);
	if (dstlen >= size)
		return (size + srclen);
	while (*(src + i) && dstlen + i < size - 1)
	{
		*(dst + (dstlen + i)) = *(src + i);
		i++;
	}
	*(dst + (dstlen + i)) = 0;
	return (dstlen + srclen);
}
