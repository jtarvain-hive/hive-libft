/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:10:54 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/01 20:11:43 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Deletes and frees the given node and all its successors, using 'del' & free*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (*lst == NULL || lst == NULL)
		return ;
	else
	{
		next = (*lst)->next;
		if (del)
			del((*lst)->content);
		free(*lst);
		*lst = next;
		ft_lstclear(lst, del);
	}
	*lst = NULL;
}
