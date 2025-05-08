/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:58:07 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/08 10:17:47 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Allocates memory for 'nmemb' * 'size' bytes initializing it to 0*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (!nmemb || !size)
		return ((void *)malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (0);
	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	ft_bzero(p, nmemb * size);
	return (p);
}
