/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 00:57:28 by mykman            #+#    #+#             */
/*   Updated: 2021/11/01 01:15:11 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dlstswap(t_dlist *elem1, t_dlist *elem2)
{
	t_dlist	tmp;

	if (!elem1 && !elem2)
		return (1);
	tmp = *elem1;
	ft_dlstremove(elem1);
	ft_dlstadd(elem1, elem2->previous, elem2->next);
	ft_dlstremove(elem2);
	ft_dlstadd(elem1, tmp.previous, tmp.next);
	return (0);
}