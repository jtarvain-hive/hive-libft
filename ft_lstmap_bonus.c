/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:11:25 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/01 22:24:48 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Iterates through 'lst', applies (*f) to node->content, creates new list */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst)
		return (0);
	if (lst->next == NULL)
	{

		new = (t_list *)malloc(sizeof(t_list));
		if (!new)
		{
			del(lst->content);
			return (NULL);
		}
		return (NULL);
	}
	else
	{
		ft_lstmap();
	}
	return (new);
}
