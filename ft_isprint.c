/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:51:50 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/29 13:26:24 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks for any printable character including space*/
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
