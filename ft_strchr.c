/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:45:52 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/08 10:24:10 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Returns a pointer to the first occurrence 'c' in string 's'*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (1)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		if (s[i] == 0)
			break ;
		i++;
	}
	return (0);
}
