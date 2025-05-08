/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:04:46 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/08 10:25:32 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Returns a new string of concatenating 's1' and 's2'*/
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*final_str;
	size_t	total_len;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	total_len = len1 + len2;
	final_str = (char *)malloc((total_len + 1) * sizeof(char));
	if (!final_str)
		return (0);
	ft_memcpy(final_str, s1, len1);
	ft_memcpy((final_str + len1), s2, len2);
	final_str[total_len] = '\0';
	return (final_str);
}
