/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 09:32:09 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/05 09:32:11 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Outputs the character ’c’ to the specified 'fd'*/
void	ft_putchar_fd(char c, int fd)
{
	if (write(fd, &c, 1) == -1)
	{
		write(2, "Error in write()\n Exiting...\n", 29);
	}
}
