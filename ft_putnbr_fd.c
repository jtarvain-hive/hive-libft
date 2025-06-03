/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:12:17 by jtarvain          #+#    #+#             */
/*   Updated: 2025/06/03 09:55:24 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Outputs the integer ’n’ to the specified 'fd'*/
int	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return (-1);
	if (n == INT_MIN)
	{
		if (ft_putstr_fd("-2147483648", fd) == -1)
			return (-1);
		return (0);
	}
	else if (n < 0)
	{
		if (ft_putchar_fd('-', fd) == -1)
			return (-1);
		return (ft_putnbr_fd(-n, fd));
	}
	if (n < 10)
		return (ft_putchar_fd(n + '0', fd));
	else
	{
		if (ft_putnbr_fd(n / 10, fd) == -1)
			return (-1);
		if (ft_putchar_fd((n % 10) + '0', fd) == -1)
			return (-1);
	}
	return (0);
}
