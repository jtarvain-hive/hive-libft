/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:20:10 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/17 11:36:49 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*byte;

	i = 0;
	byte = s;
	while (i < n)
	{
		*(byte + i) = (unsigned char)c;
		i++;
	}
	return (s);
}
