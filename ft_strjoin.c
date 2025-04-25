/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:04:46 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/25 12:07:53 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*finalstr;
	size_t	len1;
	size_t	len2;
	size_t	totallen;

	if (!s1 || !s2)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	totallen = len1 + len2;
	finalstr = (char *)malloc((totallen + 1) * sizeof(char));
	if (!finalstr)
		return (0);
	ft_memcpy(finalstr, s1, len1);
	ft_memcpy((finalstr + len1), s2, len2);
	*(finalstr + totallen) = 0;
	return (finalstr);
}
