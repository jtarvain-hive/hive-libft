/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:54:08 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/17 11:20:02 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*byte;

	i = 0;
	byte = s;
	while (i < n)
	{
		if (*(byte + i) == (unsigned char)c)
			return ((void *)(byte + i));
		i++;
	}
	return (0);
}
