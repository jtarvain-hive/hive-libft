/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:25:51 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/28 23:25:33 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Applies function to each character of the string by reference*/
void	ft_striteri(char *s, void (*f)(unsigned int index, char *s))
{
	size_t	i;

	i = 0;
	while (*(s + i))
	{
		f(i, s + i);
		i++;
	}
}
