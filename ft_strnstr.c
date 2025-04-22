/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:58:54 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/22 14:09:26 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned char	*p;

	i = 0;
	if (!*little)
		return (big);
	while (i < len && *big)
	{
		j = 0;
		if (*(big + i) == *(little + j))
		{
			p = big + i;
			while ((*(big + i + j) == *(little + j))
				&& i + j < len)
			{
				if (!*(little + j + 1))
					return (p);
				j++;
			}
		}
		i++;
	}
	return (0);
}
