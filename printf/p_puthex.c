/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_puthex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:15:00 by jtarvain          #+#    #+#             */
/*   Updated: 2025/08/04 13:15:02 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	p_putptr(void *p)
{
	if (p == NULL)
		return (p_putstr("(nil)"));
	p_putstr("0x");
	return (p_puthexptr((uintptr_t)p) + 2);
}

int	p_puthexptr(uintptr_t ptr)
{
	int	count;

	count = 0;
	if (ptr / 16 != 0)
		count += p_puthexptr(ptr / 16);
	count += p_putchar(HEX_L[ptr % 16]);
	return (count);
}

int	p_puthex(unsigned int n)
{
	int	count;

	count = 0;
	if (n / 16 != 0)
		count += p_puthex(n / 16);
	count += p_putchar(HEX_L[n % 16]);
	return (count);
}

int	p_puthexu(unsigned int n)
{
	int	count;

	count = 0;
	if (n / 16 != 0)
		count += p_puthexu(n / 16);
	count += p_putchar(HEX_U[n % 16]);
	return (count);
}
