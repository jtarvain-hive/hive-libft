/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:02:53 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/29 17:14:57 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst);
{
	int	counter;

	if (!list)
		return (0);
	counter = 0;
	while (lst)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
