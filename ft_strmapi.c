/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:37:26 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/28 16:25:38 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int index, char c))
{
	unsigned int	i;
	char			*str;

	str = ft_strdup(s);
	if (!str)
		return (0);
	i = 0;
	while (*(str + i))
	{
		*(str + i) = f(i, *(str + i));
		i++;
	}
	return (str);
}
