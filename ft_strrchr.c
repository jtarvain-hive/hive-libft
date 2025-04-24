/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:50:14 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/24 11:41:39 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			last = s + i;
		i++;
	}
	if (!c)
		return ((char *)s + i);
	return ((char *)last);
}
