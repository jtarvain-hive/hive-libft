/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:09:00 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/28 23:31:17 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c);

/* Converts a number from a string to an integer*/
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
			return (-1);
		if (total < 0 && negative == -1)
			return (0);
		nptr++;
	}
	return ((int)(total * negative));
}

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

