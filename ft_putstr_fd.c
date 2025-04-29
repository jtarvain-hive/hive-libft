/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:11:48 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/29 23:07:19 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Outputs the string ’s’ to the specified 'fd'*/
void 	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		if (write(fd, s, 1) == -1)
		{
			write(2, "Error in write()\n Exiting...\n", 29);
			return ;
		}
		s++;
	}
}
