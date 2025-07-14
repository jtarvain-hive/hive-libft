/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:02:53 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/03 17:52:31 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Counts the number of nodes in the list*/
int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*ptr;

	if (!lst)
		return (0);
	counter = 0;
	ptr = lst;
	while (ptr)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
