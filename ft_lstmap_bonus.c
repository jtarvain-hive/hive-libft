/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:11:25 by jtarvain          #+#    #+#             */
/*   Updated: 2025/05/03 15:01:49 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Iterates through 'lst', applies (*f) to node->content, creates new list */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*next;
	void	*content;

	if (!lst)
		return (NULL);
	else
	{
		next = ft_lstmap(lst->next, f, del);
		content = f(lst->content);
		if (!content)
		{
			ft_lstclear(&next, del);
			return (NULL);
		}
		new = ft_lstnew(content);
		if (!new)
		{
			del(content);
			ft_lstclear(&next, del);
			return (NULL);
		}
		new->next = next;
		return (new);
	}
}
