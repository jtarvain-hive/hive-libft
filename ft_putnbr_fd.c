/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:12:17 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/05 09:34:42 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Outputs the integer ’n’ to the specified 'fd'*/
void	ft_putnbr_fd(int n, int fd)
{
	int	nbr;

	if (fd < 0)
		return ;
	nbr = (n % 10) + '0';
	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(n * -1, fd);
		return ;
	}
	if (n < 10)
		return ((void)write(fd, &nbr, 1));
	else
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, &nbr, 1);
	}
}
