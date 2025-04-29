/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:22:59 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/29 15:38:02 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Compares the strings 's1' and 's2' as unsigned chars*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*(s1 + i) && *(s2 + i)) || i < n)
	{
		if (*(s1 + i) - *(s2 + i) != 0)
			return ((int)(*(s1 + i) - *(s2 + i)));
		i++;
	}
	return (0);
}
