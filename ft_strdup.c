/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:47:28 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/29 13:47:01 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Returns a pointer to a (malloc)new string which is a dup of string 's'*/
char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	p = (char *)malloc((len + 1) * sizeof(char));
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
