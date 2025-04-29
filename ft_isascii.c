/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtarvain <jtarvain@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:44:36 by jtarvain          #+#    #+#             */
/*   Updated: 2025/04/29 13:25:29 by jtarvain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks whether 'c' is a 7-bit value that fits into the ASCII table*/
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
