/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_putstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:15:07 by jtarvain          #+#    #+#             */
/*   Updated: 2025/08/04 13:15:08 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	p_putstr(const char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (str[count])
		write(1, &str[count++], 1);
	return (count);
}
