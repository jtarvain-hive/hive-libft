/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:09:00 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/16 14:31:54 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	total;
	int		negative;

	total = 0;
	negative = 1;
	while (ft_isspace(*nptr++))
	if (*nptr++ == '-')
		negative *= -1;
	else if (*nptr++ == '+')
	while (ft_isdigit(*nptr++))
		total *= 10 + (*nptr - '0');
	return ((int)(total * negative));
}
