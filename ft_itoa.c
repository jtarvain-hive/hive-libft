/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:47:18 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/08 10:18:30 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	negative_check(int nbr, int *negative);
static int	nbr_len(long nbr);
static char	*alloc_str(long total, int len, int negative);

/* Converts an integer into a string*/
char	*ft_itoa(int n)
{
	char	*return_str;
	long	convert;
	int		negative;
	int		len;

	if (n == 0)
	{
		return_str = (char *)malloc(2 * sizeof(char));
		if (!return_str)
			return (0);
		return_str[0] = '0';
		return_str[1] = '\0';
	}
	else
	{
		convert = negative_check(n, &negative);
		len = nbr_len(convert);
		return_str = alloc_str(convert, len, negative);
		if (!return_str)
			return (0);
	}
	return (return_str);
}

static long	negative_check(int nbr, int *negative)
{
	long	convert;

	convert = nbr;
	if (convert < 0)
	{
		convert *= -1;
		*negative = 1;
	}
	else
		*negative = 0;
	return (convert);
}

static int	nbr_len(long nbr)
{
	int	total_len;

	total_len = 0;
	while (nbr > 0)
	{
		nbr /= 10;
		total_len++;
	}
	return (total_len);
}

char	*alloc_str(long total, int len, int negative)
{
	char	*allocated_str;

	allocated_str = (char *)malloc((len + negative + 1) * sizeof(char));
	if (!allocated_str)
		return (0);
	if (negative)
	{
		allocated_str[0] = '-';
		len++;
	}
	allocated_str[len--] = 0;
	while (total > 0)
	{
		allocated_str[len--] = (total % 10) + '0';
		total /= 10;
	}
	return (allocated_str);
}
