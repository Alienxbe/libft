/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 00:57:28 by mykman            #+#    #+#             */
/*   Updated: 2021/11/01 15:50:19 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstswap(t_dlist *elem1, t_dlist *elem2)
{
	t_dlist	tmp1;
	t_dlist	tmp2;

	if (!elem1 || !elem2)
		return (NULL);
	tmp1 = *elem1;
	tmp2 = *elem2;
	if (elem1 == elem2->previous)
	{
		tmp2.previous = elem2;
		tmp1.next = elem1;
	}
	else if (elem2 == elem1->previous)
	{
		tmp1.previous = elem1;
		tmp2.next = elem2;
	}
	ft_dlstremove(elem1);
	ft_dlstremove(elem2);
	ft_dlstadd(elem1, tmp2.previous, tmp2.next);
	ft_dlstadd(elem2, tmp1.previous, tmp1.next);
	return (ft_dlstfirst(elem1));
}
