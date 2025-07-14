/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:50:14 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/03 21:44:10 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Returns a pointer to the last occurrence of 'c' found in 's'*/
char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	ch;

	last = NULL;
	ch = (char)c;
	while (*s)
	{
		if (*s == ch)
			last = (char *)s;
		s++;
	}
	if (c == '\0')
		last = (char *)s;
	return (last);
}
