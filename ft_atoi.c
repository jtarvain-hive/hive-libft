/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:09:00 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/22 10:54:39 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	total; 
	int		negative;

	total = 0;
	negative = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
	{
		negative *= -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr != '\0' && ft_isdigit(*nptr))
	{
		total = total * 10 + (*nptr - '0');
		if (total < 0 && negative == 1)
		{
			printf("here1\n");
			return (-1);
		}
		if (total < 0 && negative == -1)
		{
			printf("here2\n");
			return (0);
		}
		nptr++;
	}
	return ((int)(total * negative));
}