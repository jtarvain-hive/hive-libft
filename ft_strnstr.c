/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:58:54 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/30 13:54:36 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Locates the first occurrence of the 'little' in 'big' up to 'len' chars*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && *(big + i))
	{
		j = 0;
		if (*(big + i) == *(little + j))
		{
			p = (char *)big + i;
			while ((*(big + i + j) == *(little + j))
				&& i + j < len
				&& *(little + j))
			{
				if (!*(little + j + 1))
					return ((char *)p);
				j++;
			}
		}
		i++;
	}
	return (0);
}
