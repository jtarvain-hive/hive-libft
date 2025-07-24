/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:32:48 by jtarvain          #+#    #+#             */
/*   Updated: 2025/06/05 15:44:54 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		words;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%' && *(str + 1) != '\0')
		{
			str++;
			words = parser(str, &args);
		}
		else
			words = p_putchar(*str);
		str++;
		count += words;
	}
	va_end(args);
	return (count);
}

int	parser(const char *str, va_list *args)
{
	if (*str == 'c')
		return (p_putchar(va_arg(*args, int)));
	else if (*str == 's')
		return (p_putstr(va_arg(*args, char *)));
	else if (*str == 'i' || *str == 'd')
		return (p_putnbr(va_arg(*args, int)));
	else if (*str == 'p')
		return (p_putptr(va_arg(*args, void *)));
	else if (*str == 'x')
		return (p_puthex(va_arg(*args, unsigned int)));
	else if (*str == 'X')
		return (p_puthexu(va_arg(*args, unsigned int)));
	else if (*str == 'u')
		return (p_putunsigned(va_arg(*args, unsigned int)));
	else if (*str == '%')
		return (p_putchar('%'));
	return (0);
}
