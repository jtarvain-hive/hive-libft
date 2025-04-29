/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:12:05 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/29 23:09:56 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Outputs the string ’s’ to the specified 'fd' followed by newline*/
void ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s);
	ft_putchar('\n');
}
